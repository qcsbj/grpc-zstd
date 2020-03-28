/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <grpc/support/port_platform.h>

#include "src/core/lib/compression/message_compress.h"

#include <string.h>

#include <grpc/support/alloc.h>
#include <grpc/support/log.h>

#include <zlib.h>
#include <zstd.h>

#include "src/core/lib/slice/slice_internal.h"

#define OUTPUT_BLOCK_SIZE 1024

static int zlib_body(z_stream* zs, grpc_slice_buffer* input,
                     grpc_slice_buffer* output,
                     int (*flate)(z_stream* zs, int flush)) {
  int r;
  int flush;
  size_t i;
  grpc_slice outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
  const uInt uint_max = ~static_cast<uInt>(0);

  GPR_ASSERT(GRPC_SLICE_LENGTH(outbuf) <= uint_max);
  zs->avail_out = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
  zs->next_out = GRPC_SLICE_START_PTR(outbuf);
  flush = Z_NO_FLUSH;
  for (i = 0; i < input->count; i++) {
    if (i == input->count - 1) flush = Z_FINISH;
    GPR_ASSERT(GRPC_SLICE_LENGTH(input->slices[i]) <= uint_max);
    zs->avail_in = static_cast<uInt> GRPC_SLICE_LENGTH(input->slices[i]);
    zs->next_in = GRPC_SLICE_START_PTR(input->slices[i]);
    do {
      if (zs->avail_out == 0) {
        grpc_slice_buffer_add_indexed(output, outbuf);
        outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
        GPR_ASSERT(GRPC_SLICE_LENGTH(outbuf) <= uint_max);
        zs->avail_out = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
        zs->next_out = GRPC_SLICE_START_PTR(outbuf);
      }
      r = flate(zs, flush);
      if (r < 0 && r != Z_BUF_ERROR /* not fatal */) {
        gpr_log(GPR_INFO, "zlib error (%d)", r);
        goto error;
      }
    } while (zs->avail_out == 0);
    if (zs->avail_in) {
      gpr_log(GPR_INFO, "zlib: not all input consumed");
      goto error;
    }
  }

  GPR_ASSERT(outbuf.refcount);
  outbuf.data.refcounted.length -= zs->avail_out;
  grpc_slice_buffer_add_indexed(output, outbuf);

  return 1;

error:
  grpc_slice_unref_internal(outbuf);
  return 0;
}

static void* zalloc_gpr(void* /*opaque*/, unsigned int items,
                        unsigned int size) {
  return gpr_malloc(items * size);
}

static void zfree_gpr(void* /*opaque*/, void* address) { gpr_free(address); }

static int zlib_compress(grpc_slice_buffer* input, grpc_slice_buffer* output,
                         int gzip) {
  z_stream zs;
  int r;
  size_t i;
  size_t count_before = output->count;
  size_t length_before = output->length;
  memset(&zs, 0, sizeof(zs));
  zs.zalloc = zalloc_gpr;
  zs.zfree = zfree_gpr;
  r = deflateInit2(&zs, Z_DEFAULT_COMPRESSION, Z_DEFLATED, 15 | (gzip ? 16 : 0),
                   8, Z_DEFAULT_STRATEGY);
  GPR_ASSERT(r == Z_OK);
  r = zlib_body(&zs, input, output, deflate) && output->length < input->length;
  if (!r) {
    for (i = count_before; i < output->count; i++) {
      grpc_slice_unref_internal(output->slices[i]);
    }
    output->count = count_before;
    output->length = length_before;
  }
  deflateEnd(&zs);
  return r;
}

static int zlib_decompress(grpc_slice_buffer* input, grpc_slice_buffer* output,
                           int gzip) {
  z_stream zs;
  int r;
  size_t i;
  size_t count_before = output->count;
  size_t length_before = output->length;
  memset(&zs, 0, sizeof(zs));
  zs.zalloc = zalloc_gpr;
  zs.zfree = zfree_gpr;
  r = inflateInit2(&zs, 15 | (gzip ? 16 : 0));
  GPR_ASSERT(r == Z_OK);
  r = zlib_body(&zs, input, output, inflate);
  if (!r) {
    for (i = count_before; i < output->count; i++) {
      grpc_slice_unref_internal(output->slices[i]);
    }
    output->count = count_before;
    output->length = length_before;
  }
  inflateEnd(&zs);
  return r;
}

namespace zstd {

	static int zstd_compress(grpc_slice_buffer* input, grpc_slice_buffer* output) {
		size_t count_before = output->count;
		size_t length_before = output->length;
		ZSTD_CStream* pStream = ZSTD_createCStream();
		ZSTD_inBuffer   inBuffer;
		ZSTD_outBuffer outBuffer;
		size_t err = ZSTD_initCStream(pStream, 5);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: initialize compress steram error :%s", ZSTD_getErrorName(err));
			goto error2;
		}
		//initialize out buffer
		grpc_slice outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
		outBuffer.size = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
		outBuffer.dst = GRPC_SLICE_START_PTR(outbuf);
		outBuffer.pos = 0;
		const uInt uint_max = ~static_cast<uInt>(0);
		GPR_ASSERT(GRPC_SLICE_LENGTH(outbuf) <= uint_max);
		for (size_t i = 0; i < input->count; i++) {
			GPR_ASSERT(GRPC_SLICE_LENGTH(input->slices[i]) <= uint_max);
			//set zstd in buffer
			inBuffer.src = GRPC_SLICE_START_PTR(input->slices[i]);
			inBuffer.size = GRPC_SLICE_LENGTH(input->slices[i]);
			inBuffer.pos = 0;
			//compress
			err = ZSTD_compressStream2(pStream, &outBuffer, &inBuffer, ZSTD_EndDirective::ZSTD_e_continue);
			if (ZSTD_isError(err) > 0) {
				gpr_log(GPR_INFO, "zstd: compress stream error :%s", ZSTD_getErrorName(err));
				goto error1;
			}
			do
			{
				if (outBuffer.pos == outBuffer.size) {
					//first add outbuf to output
					grpc_slice_buffer_add_indexed(output, outbuf);
					//need more out buffer
					outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
					outBuffer.size = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
					outBuffer.dst = GRPC_SLICE_START_PTR(outbuf);
					outBuffer.pos = 0;
				}
				//flush
				err = ZSTD_compressStream2(pStream, &outBuffer, &inBuffer, ZSTD_EndDirective::ZSTD_e_flush);
				if (ZSTD_isError(err) > 0) {
					gpr_log(GPR_INFO, "zstd: compress flush all error  :%s", ZSTD_getErrorName(err));
					goto error1;
				}
				if (outBuffer.pos < outBuffer.size) {
					//all custom is flush
					break;
				}
			} while (true);
			//check all input consumed
			if (inBuffer.pos != inBuffer.size) {
				gpr_log(GPR_INFO, "zstd: not all input consumed");
				goto error1;
			}
		}
		//release zstd stream instance
		err = ZSTD_freeCStream(pStream);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: compress flush all error  :%s", ZSTD_getErrorName(err));
			goto error1;
		}

		//the last outbuf maybe not full
		GPR_ASSERT(outbuf.refcount);
		outbuf.data.refcounted.length = outBuffer.pos;
		grpc_slice_buffer_add_indexed(output, outbuf);
		if (output->length > input->length){
			goto error2;
		}

		return 1;

	error1:
		grpc_slice_unref_internal(outbuf);
	error2:
		err = ZSTD_freeCStream(pStream);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: compress flush all error  :%s", ZSTD_getErrorName(err));
		}
		//clear slices
		for (size_t i = count_before; i < output->count; i++) {
			grpc_slice_unref_internal(output->slices[i]);
		}
		output->count = count_before;
		output->length = length_before;
		return 0;
	}

	static int zstd_decompress(grpc_slice_buffer* input, grpc_slice_buffer* output) {
		size_t count_before = output->count;
		size_t length_before = output->length;
		ZSTD_DStream* pStream = ZSTD_createDStream();
		ZSTD_inBuffer   inBuffer;
		ZSTD_outBuffer outBuffer;
		size_t err = ZSTD_initDStream(pStream);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: initialize decompress steram error :%s", ZSTD_getErrorName(err));
			goto error2;
		}
		grpc_slice outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
		outBuffer.size = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
		outBuffer.dst = GRPC_SLICE_START_PTR(outbuf);
		outBuffer.pos = 0;
		const uInt uint_max = ~static_cast<uInt>(0);
		GPR_ASSERT(GRPC_SLICE_LENGTH(outbuf) <= uint_max);
		for (size_t i = 0; i < input->count; i++) {
			GPR_ASSERT(GRPC_SLICE_LENGTH(input->slices[i]) <= uint_max);
			//set zstd in buffer
			inBuffer.src = GRPC_SLICE_START_PTR(input->slices[i]);
			inBuffer.size = GRPC_SLICE_LENGTH(input->slices[i]);
			inBuffer.pos = 0;
			do
			{
				if (outBuffer.pos == outBuffer.size) {
					//first add outbuf to output
					grpc_slice_buffer_add_indexed(output, outbuf);
					//need more out buffer
					outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
					outBuffer.size = static_cast<uInt> GRPC_SLICE_LENGTH(outbuf);
					outBuffer.dst = GRPC_SLICE_START_PTR(outbuf);
					outBuffer.pos = 0;
				}
				//decompress and flush
				err = ZSTD_decompressStream(pStream, &outBuffer, &inBuffer);
				if (ZSTD_isError(err) > 0) {
					gpr_log(GPR_INFO, "zstd: decompress stream error :%s", ZSTD_getErrorName(err));
					goto error1;
				}
				if (outBuffer.pos < outBuffer.size) {
					//all custom is flush
					break;
				}
			} while (true);
			//check all input consumed
			if (inBuffer.pos != inBuffer.size) {
				gpr_log(GPR_INFO, "zstd: not all input consumed");
				goto error1;
			}
		}
		//the last outbuf maybe not full
		GPR_ASSERT(outbuf.refcount);
		outbuf.data.refcounted.length = outBuffer.pos;
		grpc_slice_buffer_add_indexed(output, outbuf);

		//release zstd stream instance
		err = ZSTD_freeDStream(pStream);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: decompress flush all error  :%s", ZSTD_getErrorName(err));
			goto error2;
		}

		return 1;

  error1:
		grpc_slice_unref_internal(outbuf); //must unrefrence
	error2:
		err = ZSTD_freeDStream(pStream);
		if (ZSTD_isError(err) > 0) {
			gpr_log(GPR_INFO, "zstd: decompress flush all error  :%s", ZSTD_getErrorName(err));
		}
		//clear slices
		for (size_t i = count_before; i < output->count; i++) {
			grpc_slice_unref_internal(output->slices[i]);
		}
		output->count = count_before;
		output->length = length_before;

		return 0;
	}
}

static int copy(grpc_slice_buffer* input, grpc_slice_buffer* output) {
  size_t i;
  for (i = 0; i < input->count; i++) {
    grpc_slice_buffer_add(output, grpc_slice_ref_internal(input->slices[i]));
  }
  return 1;
}

static int compress_inner(grpc_message_compression_algorithm algorithm,
                          grpc_slice_buffer* input, grpc_slice_buffer* output) {
  switch (algorithm) {
    case GRPC_MESSAGE_COMPRESS_NONE:
      /* the fallback path always needs to be send uncompressed: we simply
         rely on that here */
      return 0;
    case GRPC_MESSAGE_COMPRESS_DEFLATE:
      return zlib_compress(input, output, 0);
    case GRPC_MESSAGE_COMPRESS_GZIP:
      return zlib_compress(input, output, 1);
	case GRPC_MESSAGE_COMPRESS_ZSTD:
	  return zstd::zstd_compress(input, output);
    case GRPC_MESSAGE_COMPRESS_ALGORITHMS_COUNT:
      break;
  }
  gpr_log(GPR_ERROR, "invalid compression algorithm %d", algorithm);
  return 0;
}

int grpc_msg_compress(grpc_message_compression_algorithm algorithm,
                      grpc_slice_buffer* input, grpc_slice_buffer* output) {
  if (!compress_inner(algorithm, input, output)) {
    copy(input, output);
    return 0;
  }
  return 1;
}

int grpc_msg_decompress(grpc_message_compression_algorithm algorithm,
                        grpc_slice_buffer* input, grpc_slice_buffer* output) {
  switch (algorithm) {
    case GRPC_MESSAGE_COMPRESS_NONE:
      return copy(input, output);
    case GRPC_MESSAGE_COMPRESS_DEFLATE:
      return zlib_decompress(input, output, 0);
    case GRPC_MESSAGE_COMPRESS_GZIP:
      return zlib_decompress(input, output, 1);
	case GRPC_MESSAGE_COMPRESS_ZSTD:
	return zstd::zstd_decompress(input, output);
    case GRPC_MESSAGE_COMPRESS_ALGORITHMS_COUNT:
      break;
  }
  gpr_log(GPR_ERROR, "invalid compression algorithm %d", algorithm);
  return 0;
}
