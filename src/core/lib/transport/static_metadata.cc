/*
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
 */

/*
 * WARNING: Auto-generated code.
 * 
 * To make changes to this file, change
 * tools/codegen/core/gen_static_metadata.py, and then re-run it.
 * 
 * See metadata.h for an explanation of the interface here, and metadata.cc for
 * an explanation of what's going on.
 */

#include <grpc/support/port_platform.h>

#include "src/core/lib/transport/static_metadata.h"

#include "src/core/lib/slice/slice_internal.h"

static constexpr uint8_t g_bytes[] = {58,112,97,116,104,58,109,101,116,104,111,100,58,115,116,97,116,117,115,58,97,117,116,104,111,114,105,116,121,58,115,99,104,101,109,101,116,101,103,114,112,99,45,109,101,115,115,97,103,101,103,114,112,99,45,115,116,97,116,117,115,103,114,112,99,45,112,97,121,108,111,97,100,45,98,105,110,103,114,112,99,45,101,110,99,111,100,105,110,103,103,114,112,99,45,97,99,99,101,112,116,45,101,110,99,111,100,105,110,103,103,114,112,99,45,115,101,114,118,101,114,45,115,116,97,116,115,45,98,105,110,103,114,112,99,45,116,97,103,115,45,98,105,110,103,114,112,99,45,116,114,97,99,101,45,98,105,110,99,111,110,116,101,110,116,45,116,121,112,101,99,111,110,116,101,110,116,45,101,110,99,111,100,105,110,103,97,99,99,101,112,116,45,101,110,99,111,100,105,110,103,103,114,112,99,45,105,110,116,101,114,110,97,108,45,101,110,99,111,100,105,110,103,45,114,101,113,117,101,115,116,103,114,112,99,45,105,110,116,101,114,110,97,108,45,115,116,114,101,97,109,45,101,110,99,111,100,105,110,103,45,114,101,113,117,101,115,116,117,115,101,114,45,97,103,101,110,116,104,111,115,116,103,114,112,99,45,112,114,101,118,105,111,117,115,45,114,112,99,45,97,116,116,101,109,112,116,115,103,114,112,99,45,114,101,116,114,121,45,112,117,115,104,98,97,99,107,45,109,115,120,45,101,110,100,112,111,105,110,116,45,108,111,97,100,45,109,101,116,114,105,99,115,45,98,105,110,103,114,112,99,45,116,105,109,101,111,117,116,49,50,51,52,103,114,112,99,46,119,97,105,116,95,102,111,114,95,114,101,97,100,121,103,114,112,99,46,116,105,109,101,111,117,116,103,114,112,99,46,109,97,120,95,114,101,113,117,101,115,116,95,109,101,115,115,97,103,101,95,98,121,116,101,115,103,114,112,99,46,109,97,120,95,114,101,115,112,111,110,115,101,95,109,101,115,115,97,103,101,95,98,121,116,101,115,47,103,114,112,99,46,108,98,46,118,49,46,76,111,97,100,66,97,108,97,110,99,101,114,47,66,97,108,97,110,99,101,76,111,97,100,47,101,110,118,111,121,46,115,101,114,118,105,99,101,46,108,111,97,100,95,115,116,97,116,115,46,118,50,46,76,111,97,100,82,101,112,111,114,116,105,110,103,83,101,114,118,105,99,101,47,83,116,114,101,97,109,76,111,97,100,83,116,97,116,115,47,103,114,112,99,46,104,101,97,108,116,104,46,118,49,46,72,101,97,108,116,104,47,87,97,116,99,104,47,101,110,118,111,121,46,115,101,114,118,105,99,101,46,100,105,115,99,111,118,101,114,121,46,118,50,46,65,103,103,114,101,103,97,116,101,100,68,105,115,99,111,118,101,114,121,83,101,114,118,105,99,101,47,83,116,114,101,97,109,65,103,103,114,101,103,97,116,101,100,82,101,115,111,117,114,99,101,115,100,101,102,108,97,116,101,103,122,105,112,122,115,116,100,115,116,114,101,97,109,47,103,122,105,112,115,116,114,101,97,109,47,122,115,116,100,71,69,84,80,79,83,84,47,47,105,110,100,101,120,46,104,116,109,108,104,116,116,112,104,116,116,112,115,50,48,48,50,48,52,50,48,54,51,48,52,52,48,48,52,48,52,53,48,48,97,99,99,101,112,116,45,99,104,97,114,115,101,116,103,122,105,112,44,100,101,102,108,97,116,101,97,99,99,101,112,116,45,108,97,110,103,117,97,103,101,97,99,99,101,112,116,45,114,97,110,103,101,115,97,99,99,101,112,116,97,99,99,101,115,115,45,99,111,110,116,114,111,108,45,97,108,108,111,119,45,111,114,105,103,105,110,97,103,101,97,108,108,111,119,97,117,116,104,111,114,105,122,97,116,105,111,110,99,97,99,104,101,45,99,111,110,116,114,111,108,99,111,110,116,101,110,116,45,100,105,115,112,111,115,105,116,105,111,110,99,111,110,116,101,110,116,45,108,97,110,103,117,97,103,101,99,111,110,116,101,110,116,45,108,101,110,103,116,104,99,111,110,116,101,110,116,45,108,111,99,97,116,105,111,110,99,111,110,116,101,110,116,45,114,97,110,103,101,99,111,111,107,105,101,100,97,116,101,101,116,97,103,101,120,112,101,99,116,101,120,112,105,114,101,115,102,114,111,109,105,102,45,109,97,116,99,104,105,102,45,109,111,100,105,102,105,101,100,45,115,105,110,99,101,105,102,45,110,111,110,101,45,109,97,116,99,104,105,102,45,114,97,110,103,101,105,102,45,117,110,109,111,100,105,102,105,101,100,45,115,105,110,99,101,108,97,115,116,45,109,111,100,105,102,105,101,100,108,105,110,107,108,111,99,97,116,105,111,110,109,97,120,45,102,111,114,119,97,114,100,115,112,114,111,120,121,45,97,117,116,104,101,110,116,105,99,97,116,101,112,114,111,120,121,45,97,117,116,104,111,114,105,122,97,116,105,111,110,114,97,110,103,101,114,101,102,101,114,101,114,114,101,102,114,101,115,104,114,101,116,114,121,45,97,102,116,101,114,115,101,114,118,101,114,115,101,116,45,99,111,111,107,105,101,115,116,114,105,99,116,45,116,114,97,110,115,112,111,114,116,45,115,101,99,117,114,105,116,121,116,114,97,110,115,102,101,114,45,101,110,99,111,100,105,110,103,118,97,114,121,118,105,97,119,119,119,45,97,117,116,104,101,110,116,105,99,97,116,101,48,105,100,101,110,116,105,116,121,116,114,97,105,108,101,114,115,97,112,112,108,105,99,97,116,105,111,110,47,103,114,112,99,103,114,112,99,80,85,84,108,98,45,99,111,115,116,45,98,105,110,105,100,101,110,116,105,116,121,44,100,101,102,108,97,116,101,105,100,101,110,116,105,116,121,44,103,122,105,112,100,101,102,108,97,116,101,44,103,122,105,112,105,100,101,110,116,105,116,121,44,100,101,102,108,97,116,101,44,103,122,105,112,105,100,101,110,116,105,116,121,44,122,115,116,100,100,101,102,108,97,116,101,44,122,115,116,100,105,100,101,110,116,105,116,121,44,100,101,102,108,97,116,101,44,122,115,116,100,103,122,105,112,44,122,115,116,100,105,100,101,110,116,105,116,121,44,103,122,105,112,44,122,115,116,100,100,101,102,108,97,116,101,44,103,122,105,112,44,122,115,116,100,105,100,101,110,116,105,116,121,44,100,101,102,108,97,116,101,44,103,122,105,112,44,122,115,116,100};

grpc_slice_refcount grpc_core::StaticSliceRefcount::kStaticSubRefcount;

namespace grpc_core {
struct StaticMetadataCtx {
#ifndef NDEBUG
  const uint64_t init_canary = kGrpcStaticMetadataInitCanary;
#endif
  StaticSliceRefcount
    refcounts[GRPC_STATIC_MDSTR_COUNT] = {

  StaticSliceRefcount(0), 
  StaticSliceRefcount(1), 
  StaticSliceRefcount(2), 
  StaticSliceRefcount(3), 
  StaticSliceRefcount(4), 
  StaticSliceRefcount(5), 
  StaticSliceRefcount(6), 
  StaticSliceRefcount(7), 
  StaticSliceRefcount(8), 
  StaticSliceRefcount(9), 
  StaticSliceRefcount(10), 
  StaticSliceRefcount(11), 
  StaticSliceRefcount(12), 
  StaticSliceRefcount(13), 
  StaticSliceRefcount(14), 
  StaticSliceRefcount(15), 
  StaticSliceRefcount(16), 
  StaticSliceRefcount(17), 
  StaticSliceRefcount(18), 
  StaticSliceRefcount(19), 
  StaticSliceRefcount(20), 
  StaticSliceRefcount(21), 
  StaticSliceRefcount(22), 
  StaticSliceRefcount(23), 
  StaticSliceRefcount(24), 
  StaticSliceRefcount(25), 
  StaticSliceRefcount(26), 
  StaticSliceRefcount(27), 
  StaticSliceRefcount(28), 
  StaticSliceRefcount(29), 
  StaticSliceRefcount(30), 
  StaticSliceRefcount(31), 
  StaticSliceRefcount(32), 
  StaticSliceRefcount(33), 
  StaticSliceRefcount(34), 
  StaticSliceRefcount(35), 
  StaticSliceRefcount(36), 
  StaticSliceRefcount(37), 
  StaticSliceRefcount(38), 
  StaticSliceRefcount(39), 
  StaticSliceRefcount(40), 
  StaticSliceRefcount(41), 
  StaticSliceRefcount(42), 
  StaticSliceRefcount(43), 
  StaticSliceRefcount(44), 
  StaticSliceRefcount(45), 
  StaticSliceRefcount(46), 
  StaticSliceRefcount(47), 
  StaticSliceRefcount(48), 
  StaticSliceRefcount(49), 
  StaticSliceRefcount(50), 
  StaticSliceRefcount(51), 
  StaticSliceRefcount(52), 
  StaticSliceRefcount(53), 
  StaticSliceRefcount(54), 
  StaticSliceRefcount(55), 
  StaticSliceRefcount(56), 
  StaticSliceRefcount(57), 
  StaticSliceRefcount(58), 
  StaticSliceRefcount(59), 
  StaticSliceRefcount(60), 
  StaticSliceRefcount(61), 
  StaticSliceRefcount(62), 
  StaticSliceRefcount(63), 
  StaticSliceRefcount(64), 
  StaticSliceRefcount(65), 
  StaticSliceRefcount(66), 
  StaticSliceRefcount(67), 
  StaticSliceRefcount(68), 
  StaticSliceRefcount(69), 
  StaticSliceRefcount(70), 
  StaticSliceRefcount(71), 
  StaticSliceRefcount(72), 
  StaticSliceRefcount(73), 
  StaticSliceRefcount(74), 
  StaticSliceRefcount(75), 
  StaticSliceRefcount(76), 
  StaticSliceRefcount(77), 
  StaticSliceRefcount(78), 
  StaticSliceRefcount(79), 
  StaticSliceRefcount(80), 
  StaticSliceRefcount(81), 
  StaticSliceRefcount(82), 
  StaticSliceRefcount(83), 
  StaticSliceRefcount(84), 
  StaticSliceRefcount(85), 
  StaticSliceRefcount(86), 
  StaticSliceRefcount(87), 
  StaticSliceRefcount(88), 
  StaticSliceRefcount(89), 
  StaticSliceRefcount(90), 
  StaticSliceRefcount(91), 
  StaticSliceRefcount(92), 
  StaticSliceRefcount(93), 
  StaticSliceRefcount(94), 
  StaticSliceRefcount(95), 
  StaticSliceRefcount(96), 
  StaticSliceRefcount(97), 
  StaticSliceRefcount(98), 
  StaticSliceRefcount(99), 
  StaticSliceRefcount(100), 
  StaticSliceRefcount(101), 
  StaticSliceRefcount(102), 
  StaticSliceRefcount(103), 
  StaticSliceRefcount(104), 
  StaticSliceRefcount(105), 
  StaticSliceRefcount(106), 
  StaticSliceRefcount(107), 
  StaticSliceRefcount(108), 
  StaticSliceRefcount(109), 
  StaticSliceRefcount(110), 
  StaticSliceRefcount(111), 
  StaticSliceRefcount(112), 
  StaticSliceRefcount(113), 
  StaticSliceRefcount(114), 
  StaticSliceRefcount(115), 
  StaticSliceRefcount(116), 
};


  const StaticMetadataSlice
    slices[GRPC_STATIC_MDSTR_COUNT] = {

grpc_core::StaticMetadataSlice(&refcounts[0].base, 5, g_bytes+0),
grpc_core::StaticMetadataSlice(&refcounts[1].base, 7, g_bytes+5),
grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),
grpc_core::StaticMetadataSlice(&refcounts[3].base, 10, g_bytes+19),
grpc_core::StaticMetadataSlice(&refcounts[4].base, 7, g_bytes+29),
grpc_core::StaticMetadataSlice(&refcounts[5].base, 2, g_bytes+36),
grpc_core::StaticMetadataSlice(&refcounts[6].base, 12, g_bytes+38),
grpc_core::StaticMetadataSlice(&refcounts[7].base, 11, g_bytes+50),
grpc_core::StaticMetadataSlice(&refcounts[8].base, 16, g_bytes+61),
grpc_core::StaticMetadataSlice(&refcounts[9].base, 13, g_bytes+77),
grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),
grpc_core::StaticMetadataSlice(&refcounts[11].base, 21, g_bytes+110),
grpc_core::StaticMetadataSlice(&refcounts[12].base, 13, g_bytes+131),
grpc_core::StaticMetadataSlice(&refcounts[13].base, 14, g_bytes+144),
grpc_core::StaticMetadataSlice(&refcounts[14].base, 12, g_bytes+158),
grpc_core::StaticMetadataSlice(&refcounts[15].base, 16, g_bytes+170),
grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),
grpc_core::StaticMetadataSlice(&refcounts[17].base, 30, g_bytes+201),
grpc_core::StaticMetadataSlice(&refcounts[18].base, 37, g_bytes+231),
grpc_core::StaticMetadataSlice(&refcounts[19].base, 10, g_bytes+268),
grpc_core::StaticMetadataSlice(&refcounts[20].base, 4, g_bytes+278),
grpc_core::StaticMetadataSlice(&refcounts[21].base, 26, g_bytes+282),
grpc_core::StaticMetadataSlice(&refcounts[22].base, 22, g_bytes+308),
grpc_core::StaticMetadataSlice(&refcounts[23].base, 27, g_bytes+330),
grpc_core::StaticMetadataSlice(&refcounts[24].base, 12, g_bytes+357),
grpc_core::StaticMetadataSlice(&refcounts[25].base, 1, g_bytes+369),
grpc_core::StaticMetadataSlice(&refcounts[26].base, 1, g_bytes+370),
grpc_core::StaticMetadataSlice(&refcounts[27].base, 1, g_bytes+371),
grpc_core::StaticMetadataSlice(&refcounts[28].base, 1, g_bytes+372),
grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373),
grpc_core::StaticMetadataSlice(&refcounts[30].base, 19, g_bytes+373),
grpc_core::StaticMetadataSlice(&refcounts[31].base, 12, g_bytes+392),
grpc_core::StaticMetadataSlice(&refcounts[32].base, 30, g_bytes+404),
grpc_core::StaticMetadataSlice(&refcounts[33].base, 31, g_bytes+434),
grpc_core::StaticMetadataSlice(&refcounts[34].base, 36, g_bytes+465),
grpc_core::StaticMetadataSlice(&refcounts[35].base, 65, g_bytes+501),
grpc_core::StaticMetadataSlice(&refcounts[36].base, 28, g_bytes+566),
grpc_core::StaticMetadataSlice(&refcounts[37].base, 80, g_bytes+594),
grpc_core::StaticMetadataSlice(&refcounts[38].base, 7, g_bytes+674),
grpc_core::StaticMetadataSlice(&refcounts[39].base, 4, g_bytes+681),
grpc_core::StaticMetadataSlice(&refcounts[40].base, 4, g_bytes+685),
grpc_core::StaticMetadataSlice(&refcounts[41].base, 11, g_bytes+689),
grpc_core::StaticMetadataSlice(&refcounts[42].base, 11, g_bytes+700),
grpc_core::StaticMetadataSlice(&refcounts[43].base, 3, g_bytes+711),
grpc_core::StaticMetadataSlice(&refcounts[44].base, 4, g_bytes+714),
grpc_core::StaticMetadataSlice(&refcounts[45].base, 1, g_bytes+718),
grpc_core::StaticMetadataSlice(&refcounts[46].base, 11, g_bytes+719),
grpc_core::StaticMetadataSlice(&refcounts[47].base, 4, g_bytes+730),
grpc_core::StaticMetadataSlice(&refcounts[48].base, 5, g_bytes+734),
grpc_core::StaticMetadataSlice(&refcounts[49].base, 3, g_bytes+739),
grpc_core::StaticMetadataSlice(&refcounts[50].base, 3, g_bytes+742),
grpc_core::StaticMetadataSlice(&refcounts[51].base, 3, g_bytes+745),
grpc_core::StaticMetadataSlice(&refcounts[52].base, 3, g_bytes+748),
grpc_core::StaticMetadataSlice(&refcounts[53].base, 3, g_bytes+751),
grpc_core::StaticMetadataSlice(&refcounts[54].base, 3, g_bytes+754),
grpc_core::StaticMetadataSlice(&refcounts[55].base, 3, g_bytes+757),
grpc_core::StaticMetadataSlice(&refcounts[56].base, 14, g_bytes+760),
grpc_core::StaticMetadataSlice(&refcounts[57].base, 12, g_bytes+774),
grpc_core::StaticMetadataSlice(&refcounts[58].base, 15, g_bytes+786),
grpc_core::StaticMetadataSlice(&refcounts[59].base, 13, g_bytes+801),
grpc_core::StaticMetadataSlice(&refcounts[60].base, 6, g_bytes+814),
grpc_core::StaticMetadataSlice(&refcounts[61].base, 27, g_bytes+820),
grpc_core::StaticMetadataSlice(&refcounts[62].base, 3, g_bytes+847),
grpc_core::StaticMetadataSlice(&refcounts[63].base, 5, g_bytes+850),
grpc_core::StaticMetadataSlice(&refcounts[64].base, 13, g_bytes+855),
grpc_core::StaticMetadataSlice(&refcounts[65].base, 13, g_bytes+868),
grpc_core::StaticMetadataSlice(&refcounts[66].base, 19, g_bytes+881),
grpc_core::StaticMetadataSlice(&refcounts[67].base, 16, g_bytes+900),
grpc_core::StaticMetadataSlice(&refcounts[68].base, 14, g_bytes+916),
grpc_core::StaticMetadataSlice(&refcounts[69].base, 16, g_bytes+930),
grpc_core::StaticMetadataSlice(&refcounts[70].base, 13, g_bytes+946),
grpc_core::StaticMetadataSlice(&refcounts[71].base, 6, g_bytes+959),
grpc_core::StaticMetadataSlice(&refcounts[72].base, 4, g_bytes+965),
grpc_core::StaticMetadataSlice(&refcounts[73].base, 4, g_bytes+969),
grpc_core::StaticMetadataSlice(&refcounts[74].base, 6, g_bytes+973),
grpc_core::StaticMetadataSlice(&refcounts[75].base, 7, g_bytes+979),
grpc_core::StaticMetadataSlice(&refcounts[76].base, 4, g_bytes+986),
grpc_core::StaticMetadataSlice(&refcounts[77].base, 8, g_bytes+990),
grpc_core::StaticMetadataSlice(&refcounts[78].base, 17, g_bytes+998),
grpc_core::StaticMetadataSlice(&refcounts[79].base, 13, g_bytes+1015),
grpc_core::StaticMetadataSlice(&refcounts[80].base, 8, g_bytes+1028),
grpc_core::StaticMetadataSlice(&refcounts[81].base, 19, g_bytes+1036),
grpc_core::StaticMetadataSlice(&refcounts[82].base, 13, g_bytes+1055),
grpc_core::StaticMetadataSlice(&refcounts[83].base, 4, g_bytes+1068),
grpc_core::StaticMetadataSlice(&refcounts[84].base, 8, g_bytes+1072),
grpc_core::StaticMetadataSlice(&refcounts[85].base, 12, g_bytes+1080),
grpc_core::StaticMetadataSlice(&refcounts[86].base, 18, g_bytes+1092),
grpc_core::StaticMetadataSlice(&refcounts[87].base, 19, g_bytes+1110),
grpc_core::StaticMetadataSlice(&refcounts[88].base, 5, g_bytes+1129),
grpc_core::StaticMetadataSlice(&refcounts[89].base, 7, g_bytes+1134),
grpc_core::StaticMetadataSlice(&refcounts[90].base, 7, g_bytes+1141),
grpc_core::StaticMetadataSlice(&refcounts[91].base, 11, g_bytes+1148),
grpc_core::StaticMetadataSlice(&refcounts[92].base, 6, g_bytes+1159),
grpc_core::StaticMetadataSlice(&refcounts[93].base, 10, g_bytes+1165),
grpc_core::StaticMetadataSlice(&refcounts[94].base, 25, g_bytes+1175),
grpc_core::StaticMetadataSlice(&refcounts[95].base, 17, g_bytes+1200),
grpc_core::StaticMetadataSlice(&refcounts[96].base, 4, g_bytes+1217),
grpc_core::StaticMetadataSlice(&refcounts[97].base, 3, g_bytes+1221),
grpc_core::StaticMetadataSlice(&refcounts[98].base, 16, g_bytes+1224),
grpc_core::StaticMetadataSlice(&refcounts[99].base, 1, g_bytes+1240),
grpc_core::StaticMetadataSlice(&refcounts[100].base, 8, g_bytes+1241),
grpc_core::StaticMetadataSlice(&refcounts[101].base, 8, g_bytes+1249),
grpc_core::StaticMetadataSlice(&refcounts[102].base, 16, g_bytes+1257),
grpc_core::StaticMetadataSlice(&refcounts[103].base, 4, g_bytes+1273),
grpc_core::StaticMetadataSlice(&refcounts[104].base, 3, g_bytes+1277),
grpc_core::StaticMetadataSlice(&refcounts[105].base, 11, g_bytes+1280),
grpc_core::StaticMetadataSlice(&refcounts[106].base, 16, g_bytes+1291),
grpc_core::StaticMetadataSlice(&refcounts[107].base, 13, g_bytes+1307),
grpc_core::StaticMetadataSlice(&refcounts[108].base, 12, g_bytes+1320),
grpc_core::StaticMetadataSlice(&refcounts[109].base, 21, g_bytes+1332),
grpc_core::StaticMetadataSlice(&refcounts[110].base, 13, g_bytes+1353),
grpc_core::StaticMetadataSlice(&refcounts[111].base, 12, g_bytes+1366),
grpc_core::StaticMetadataSlice(&refcounts[112].base, 21, g_bytes+1378),
grpc_core::StaticMetadataSlice(&refcounts[113].base, 9, g_bytes+1399),
grpc_core::StaticMetadataSlice(&refcounts[114].base, 18, g_bytes+1408),
grpc_core::StaticMetadataSlice(&refcounts[115].base, 17, g_bytes+1426),
grpc_core::StaticMetadataSlice(&refcounts[116].base, 26, g_bytes+1443),
};
StaticMetadata static_mdelem_table[GRPC_STATIC_MDELEM_COUNT] = {
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[3].base, 10, g_bytes+19),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 0),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[1].base, 7, g_bytes+5),grpc_core::StaticMetadataSlice(&refcounts[43].base, 3, g_bytes+711), 1),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[1].base, 7, g_bytes+5),grpc_core::StaticMetadataSlice(&refcounts[44].base, 4, g_bytes+714), 2),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[0].base, 5, g_bytes+0),grpc_core::StaticMetadataSlice(&refcounts[45].base, 1, g_bytes+718), 3),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[0].base, 5, g_bytes+0),grpc_core::StaticMetadataSlice(&refcounts[46].base, 11, g_bytes+719), 4),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[4].base, 7, g_bytes+29),grpc_core::StaticMetadataSlice(&refcounts[47].base, 4, g_bytes+730), 5),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[4].base, 7, g_bytes+29),grpc_core::StaticMetadataSlice(&refcounts[48].base, 5, g_bytes+734), 6),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[49].base, 3, g_bytes+739), 7),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[50].base, 3, g_bytes+742), 8),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[51].base, 3, g_bytes+745), 9),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[52].base, 3, g_bytes+748), 10),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[53].base, 3, g_bytes+751), 11),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[54].base, 3, g_bytes+754), 12),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[2].base, 7, g_bytes+12),grpc_core::StaticMetadataSlice(&refcounts[55].base, 3, g_bytes+757), 13),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[56].base, 14, g_bytes+760),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 14),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[57].base, 12, g_bytes+774), 15),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[40].base, 4, g_bytes+685), 16),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[58].base, 15, g_bytes+786),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 17),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[59].base, 13, g_bytes+801),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 18),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[60].base, 6, g_bytes+814),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 19),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[61].base, 27, g_bytes+820),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 20),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[62].base, 3, g_bytes+847),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 21),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[63].base, 5, g_bytes+850),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 22),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[64].base, 13, g_bytes+855),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 23),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[65].base, 13, g_bytes+868),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 24),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[66].base, 19, g_bytes+881),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 25),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[15].base, 16, g_bytes+170),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 26),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[67].base, 16, g_bytes+900),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 27),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[68].base, 14, g_bytes+916),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 28),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[69].base, 16, g_bytes+930),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 29),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[70].base, 13, g_bytes+946),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 30),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[14].base, 12, g_bytes+158),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 31),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[71].base, 6, g_bytes+959),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 32),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[72].base, 4, g_bytes+965),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 33),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[73].base, 4, g_bytes+969),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 34),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[74].base, 6, g_bytes+973),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 35),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[75].base, 7, g_bytes+979),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 36),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[76].base, 4, g_bytes+986),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 37),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[20].base, 4, g_bytes+278),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 38),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[77].base, 8, g_bytes+990),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 39),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[78].base, 17, g_bytes+998),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 40),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[79].base, 13, g_bytes+1015),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 41),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[80].base, 8, g_bytes+1028),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 42),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[81].base, 19, g_bytes+1036),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 43),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[82].base, 13, g_bytes+1055),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 44),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[83].base, 4, g_bytes+1068),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 45),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[84].base, 8, g_bytes+1072),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 46),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[85].base, 12, g_bytes+1080),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 47),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[86].base, 18, g_bytes+1092),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 48),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[87].base, 19, g_bytes+1110),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 49),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[88].base, 5, g_bytes+1129),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 50),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[89].base, 7, g_bytes+1134),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 51),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[90].base, 7, g_bytes+1141),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 52),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[91].base, 11, g_bytes+1148),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 53),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[92].base, 6, g_bytes+1159),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 54),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[93].base, 10, g_bytes+1165),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 55),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[94].base, 25, g_bytes+1175),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 56),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[95].base, 17, g_bytes+1200),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 57),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[19].base, 10, g_bytes+268),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 58),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[96].base, 4, g_bytes+1217),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 59),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[97].base, 3, g_bytes+1221),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 60),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[98].base, 16, g_bytes+1224),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 61),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[7].base, 11, g_bytes+50),grpc_core::StaticMetadataSlice(&refcounts[99].base, 1, g_bytes+1240), 62),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[7].base, 11, g_bytes+50),grpc_core::StaticMetadataSlice(&refcounts[25].base, 1, g_bytes+369), 63),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[7].base, 11, g_bytes+50),grpc_core::StaticMetadataSlice(&refcounts[26].base, 1, g_bytes+370), 64),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[9].base, 13, g_bytes+77),grpc_core::StaticMetadataSlice(&refcounts[100].base, 8, g_bytes+1241), 65),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[9].base, 13, g_bytes+77),grpc_core::StaticMetadataSlice(&refcounts[39].base, 4, g_bytes+681), 66),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[9].base, 13, g_bytes+77),grpc_core::StaticMetadataSlice(&refcounts[38].base, 7, g_bytes+674), 67),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[9].base, 13, g_bytes+77),grpc_core::StaticMetadataSlice(&refcounts[40].base, 4, g_bytes+685), 68),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[5].base, 2, g_bytes+36),grpc_core::StaticMetadataSlice(&refcounts[101].base, 8, g_bytes+1249), 69),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[14].base, 12, g_bytes+158),grpc_core::StaticMetadataSlice(&refcounts[102].base, 16, g_bytes+1257), 70),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[4].base, 7, g_bytes+29),grpc_core::StaticMetadataSlice(&refcounts[103].base, 4, g_bytes+1273), 71),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[1].base, 7, g_bytes+5),grpc_core::StaticMetadataSlice(&refcounts[104].base, 3, g_bytes+1277), 72),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 73),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[15].base, 16, g_bytes+170),grpc_core::StaticMetadataSlice(&refcounts[100].base, 8, g_bytes+1241), 74),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[15].base, 16, g_bytes+170),grpc_core::StaticMetadataSlice(&refcounts[39].base, 4, g_bytes+681), 75),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[15].base, 16, g_bytes+170),grpc_core::StaticMetadataSlice(&refcounts[40].base, 4, g_bytes+685), 76),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[105].base, 11, g_bytes+1280),grpc_core::StaticMetadataSlice(&refcounts[29].base, 0, g_bytes+373), 77),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[100].base, 8, g_bytes+1241), 78),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[38].base, 7, g_bytes+674), 79),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[106].base, 16, g_bytes+1291), 80),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[39].base, 4, g_bytes+681), 81),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[107].base, 13, g_bytes+1307), 82),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[108].base, 12, g_bytes+1320), 83),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[109].base, 21, g_bytes+1332), 84),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[40].base, 4, g_bytes+685), 85),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[110].base, 13, g_bytes+1353), 86),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[111].base, 12, g_bytes+1366), 87),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[112].base, 21, g_bytes+1378), 88),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[113].base, 9, g_bytes+1399), 89),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[114].base, 18, g_bytes+1408), 90),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[115].base, 17, g_bytes+1426), 91),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[10].base, 20, g_bytes+90),grpc_core::StaticMetadataSlice(&refcounts[116].base, 26, g_bytes+1443), 92),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[100].base, 8, g_bytes+1241), 93),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[39].base, 4, g_bytes+681), 94),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[107].base, 13, g_bytes+1307), 95),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[110].base, 13, g_bytes+1353), 96),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[113].base, 9, g_bytes+1399), 97),
StaticMetadata(grpc_core::StaticMetadataSlice(&refcounts[16].base, 15, g_bytes+186),grpc_core::StaticMetadataSlice(&refcounts[114].base, 18, g_bytes+1408), 98),
};

/* Warning: the core static metadata currently operates under the soft constraint
that the first GRPC_CHTTP2_LAST_STATIC_ENTRY (61) entries must contain
metadata specified by the http2 hpack standard. The CHTTP2 transport reads the
core metadata with this assumption in mind. If the order of the core static
metadata is to be changed, then the CHTTP2 transport must be changed as well to
stop relying on the core metadata. */

grpc_mdelem static_mdelem_manifested[GRPC_STATIC_MDELEM_COUNT] = {
// clang-format off
    /* GRPC_MDELEM_AUTHORITY_EMPTY: 
     ":authority": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[0].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_METHOD_GET: 
     ":method": "GET" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[1].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_METHOD_POST: 
     ":method": "POST" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[2].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_PATH_SLASH: 
     ":path": "/" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[3].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_PATH_SLASH_INDEX_DOT_HTML: 
     ":path": "/index.html" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[4].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_SCHEME_HTTP: 
     ":scheme": "http" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[5].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_SCHEME_HTTPS: 
     ":scheme": "https" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[6].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_200: 
     ":status": "200" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[7].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_204: 
     ":status": "204" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[8].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_206: 
     ":status": "206" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[9].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_304: 
     ":status": "304" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[10].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_400: 
     ":status": "400" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[11].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_404: 
     ":status": "404" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[12].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STATUS_500: 
     ":status": "500" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[13].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_CHARSET_EMPTY: 
     "accept-charset": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[14].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_GZIP_COMMA_DEFLATE: 
     "accept-encoding": "gzip,deflate" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[15].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_ZSTD: 
     "accept-encoding": "zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[16].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_LANGUAGE_EMPTY: 
     "accept-language": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[17].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_RANGES_EMPTY: 
     "accept-ranges": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[18].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_EMPTY: 
     "accept": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[19].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCESS_CONTROL_ALLOW_ORIGIN_EMPTY: 
     "access-control-allow-origin": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[20].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_AGE_EMPTY: 
     "age": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[21].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ALLOW_EMPTY: 
     "allow": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[22].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_AUTHORIZATION_EMPTY: 
     "authorization": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[23].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CACHE_CONTROL_EMPTY: 
     "cache-control": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[24].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_DISPOSITION_EMPTY: 
     "content-disposition": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[25].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_ENCODING_EMPTY: 
     "content-encoding": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[26].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_LANGUAGE_EMPTY: 
     "content-language": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[27].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_LENGTH_EMPTY: 
     "content-length": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[28].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_LOCATION_EMPTY: 
     "content-location": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[29].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_RANGE_EMPTY: 
     "content-range": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[30].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_TYPE_EMPTY: 
     "content-type": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[31].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_COOKIE_EMPTY: 
     "cookie": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[32].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_DATE_EMPTY: 
     "date": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[33].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ETAG_EMPTY: 
     "etag": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[34].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_EXPECT_EMPTY: 
     "expect": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[35].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_EXPIRES_EMPTY: 
     "expires": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[36].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_FROM_EMPTY: 
     "from": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[37].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_HOST_EMPTY: 
     "host": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[38].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_IF_MATCH_EMPTY: 
     "if-match": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[39].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_IF_MODIFIED_SINCE_EMPTY: 
     "if-modified-since": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[40].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_IF_NONE_MATCH_EMPTY: 
     "if-none-match": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[41].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_IF_RANGE_EMPTY: 
     "if-range": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[42].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_IF_UNMODIFIED_SINCE_EMPTY: 
     "if-unmodified-since": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[43].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_LAST_MODIFIED_EMPTY: 
     "last-modified": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[44].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_LINK_EMPTY: 
     "link": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[45].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_LOCATION_EMPTY: 
     "location": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[46].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_MAX_FORWARDS_EMPTY: 
     "max-forwards": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[47].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_PROXY_AUTHENTICATE_EMPTY: 
     "proxy-authenticate": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[48].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_PROXY_AUTHORIZATION_EMPTY: 
     "proxy-authorization": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[49].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_RANGE_EMPTY: 
     "range": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[50].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_REFERER_EMPTY: 
     "referer": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[51].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_REFRESH_EMPTY: 
     "refresh": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[52].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_RETRY_AFTER_EMPTY: 
     "retry-after": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[53].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_SERVER_EMPTY: 
     "server": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[54].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_SET_COOKIE_EMPTY: 
     "set-cookie": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[55].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_STRICT_TRANSPORT_SECURITY_EMPTY: 
     "strict-transport-security": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[56].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_TRANSFER_ENCODING_EMPTY: 
     "transfer-encoding": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[57].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_USER_AGENT_EMPTY: 
     "user-agent": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[58].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_VARY_EMPTY: 
     "vary": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[59].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_VIA_EMPTY: 
     "via": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[60].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_WWW_AUTHENTICATE_EMPTY: 
     "www-authenticate": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[61].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_STATUS_0: 
     "grpc-status": "0" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[62].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_STATUS_1: 
     "grpc-status": "1" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[63].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_STATUS_2: 
     "grpc-status": "2" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[64].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ENCODING_IDENTITY: 
     "grpc-encoding": "identity" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[65].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ENCODING_GZIP: 
     "grpc-encoding": "gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[66].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ENCODING_DEFLATE: 
     "grpc-encoding": "deflate" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[67].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ENCODING_ZSTD: 
     "grpc-encoding": "zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[68].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_TE_TRAILERS: 
     "te": "trailers" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[69].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_TYPE_APPLICATION_SLASH_GRPC: 
     "content-type": "application/grpc" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[70].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_SCHEME_GRPC: 
     ":scheme": "grpc" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[71].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_METHOD_PUT: 
     ":method": "PUT" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[72].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_EMPTY: 
     "accept-encoding": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[73].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_ENCODING_IDENTITY: 
     "content-encoding": "identity" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[74].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_ENCODING_GZIP: 
     "content-encoding": "gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[75].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_CONTENT_ENCODING_ZSTD: 
     "content-encoding": "zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[76].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_LB_COST_BIN_EMPTY: 
     "lb-cost-bin": "" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[77].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY: 
     "grpc-accept-encoding": "identity" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[78].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE: 
     "grpc-accept-encoding": "deflate" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[79].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE: 
     "grpc-accept-encoding": "identity,deflate" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[80].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_GZIP: 
     "grpc-accept-encoding": "gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[81].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP: 
     "grpc-accept-encoding": "identity,gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[82].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE_COMMA_GZIP: 
     "grpc-accept-encoding": "deflate,gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[83].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE_COMMA_GZIP: 
     "grpc-accept-encoding": "identity,deflate,gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[84].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_ZSTD: 
     "grpc-accept-encoding": "zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[85].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_ZSTD: 
     "grpc-accept-encoding": "identity,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[86].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE_COMMA_ZSTD: 
     "grpc-accept-encoding": "deflate,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[87].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE_COMMA_ZSTD: 
     "grpc-accept-encoding": "identity,deflate,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[88].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_GZIP_COMMA_ZSTD: 
     "grpc-accept-encoding": "gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[89].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP_COMMA_ZSTD: 
     "grpc-accept-encoding": "identity,gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[90].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_DEFLATE_COMMA_GZIP_COMMA_ZSTD: 
     "grpc-accept-encoding": "deflate,gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[91].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_GRPC_ACCEPT_ENCODING_IDENTITY_COMMA_DEFLATE_COMMA_GZIP_COMMA_ZSTD: 
     "grpc-accept-encoding": "identity,deflate,gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[92].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY: 
     "accept-encoding": "identity" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[93].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_GZIP: 
     "accept-encoding": "gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[94].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP: 
     "accept-encoding": "identity,gzip" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[95].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY_COMMA_ZSTD: 
     "accept-encoding": "identity,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[96].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_GZIP_COMMA_ZSTD: 
     "accept-encoding": "gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[97].data(),
        GRPC_MDELEM_STORAGE_STATIC),
    /* GRPC_MDELEM_ACCEPT_ENCODING_IDENTITY_COMMA_GZIP_COMMA_ZSTD: 
     "accept-encoding": "identity,gzip,zstd" */
    GRPC_MAKE_MDELEM(
        &static_mdelem_table[98].data(),
        GRPC_MDELEM_STORAGE_STATIC)
// clang-format on
};
};
}

namespace grpc_core {
static StaticMetadataCtx* g_static_metadata_slice_ctx = nullptr;
const StaticMetadataSlice* g_static_metadata_slice_table = nullptr;
StaticSliceRefcount* g_static_metadata_slice_refcounts = nullptr;
StaticMetadata* g_static_mdelem_table = nullptr;
grpc_mdelem* g_static_mdelem_manifested = nullptr;
#ifndef NDEBUG
uint64_t StaticMetadataInitCanary() {
  return g_static_metadata_slice_ctx->init_canary;
}
#endif
}

void grpc_init_static_metadata_ctx(void) {
  grpc_core::g_static_metadata_slice_ctx
    = new grpc_core::StaticMetadataCtx();
  grpc_core::g_static_metadata_slice_table
    = grpc_core::g_static_metadata_slice_ctx->slices;
  grpc_core::g_static_metadata_slice_refcounts
    = grpc_core::g_static_metadata_slice_ctx->refcounts;
  grpc_core::g_static_mdelem_table
    = grpc_core::g_static_metadata_slice_ctx->static_mdelem_table;
  grpc_core::g_static_mdelem_manifested =
      grpc_core::g_static_metadata_slice_ctx->static_mdelem_manifested;
}

void grpc_destroy_static_metadata_ctx(void) {
  delete grpc_core::g_static_metadata_slice_ctx;
  grpc_core::g_static_metadata_slice_ctx = nullptr;
  grpc_core::g_static_metadata_slice_table = nullptr;
  grpc_core::g_static_metadata_slice_refcounts = nullptr;
  grpc_core::g_static_mdelem_table = nullptr;
  grpc_core::g_static_mdelem_manifested = nullptr;
}




uintptr_t grpc_static_mdelem_user_data[GRPC_STATIC_MDELEM_COUNT] = {
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,4,6,6,8,8,10,10,12,12,14,14,16,16,2,4,4,6,8,8
};


static const int8_t elems_r[] = {32,21,1,33,1,-50,0,7,0,-45,-14,-4,0,0,-26,-25,-33,-16,0,-55,-60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-53,0,-64,0,64,37,33,28,60,17,31,6,1,-4,-9,-10,-15,-20,-24,-29,-34,-39,0,68,63,59,54,50,45,40,35,30,25,20,16,11,7,2,-2,-7,-12,-17,0,89,84,79,0,0,0,0,0,0,38};
static uint32_t elems_phash(uint32_t i) {
  i -= 45;
  uint32_t x = i % 111;
  uint32_t y = i / 111;
  uint32_t h = x;
  if (y < GPR_ARRAY_SIZE(elems_r)) {
    uint32_t delta = (uint32_t)elems_r[y];
    h += delta;
  }
  return h;
}
    
static const uint16_t elem_keys[] = {1270,1855,1091,1092,1093,1740,1276,1277,1278,1279,1280,1281,1282,1283,1284,1285,1286,283,284,285,286,287,288,289,1972,160,161,515,516,844,845,1979,45,46,1982,380,686,1985,1986,1208,1209,1210,1667,2252,2369,6581,6815,1901,7049,1784,7166,7283,7517,7751,7868,7985,8102,1911,1912,1794,1795,8219,8336,8453,1153,8570,8687,8804,8921,6932,9038,9155,7634,9272,9389,1929,9506,9623,9740,9857,9974,10091,10208,571,10325,10442,221,10559,10676,7400,10793,10910,11027,11144,11261,11378,11495,12314,0,0,0,0,0,918};
static const uint8_t elem_idxs[] = {78,74,67,66,68,70,80,82,83,84,86,87,88,89,90,91,92,7,8,9,10,11,12,13,93,1,2,5,6,63,64,95,3,4,96,0,69,97,98,79,81,85,31,58,38,14,17,73,19,26,20,21,23,25,27,28,29,94,16,75,76,30,32,33,65,34,35,36,37,18,39,40,24,41,42,15,43,44,45,46,47,48,49,71,50,51,72,52,53,22,54,55,56,57,59,60,61,77,255,255,255,255,255,62};

grpc_mdelem grpc_static_mdelem_for_static_strings(intptr_t a, intptr_t b) {
  if (a == -1 || b == -1) return GRPC_MDNULL;
  uint32_t k = static_cast<uint32_t>(a * 117 + b);
  uint32_t h = elems_phash(k);
  return h < GPR_ARRAY_SIZE(elem_keys) && elem_keys[h] == k && elem_idxs[h] != 255 ? GRPC_MAKE_MDELEM(&grpc_static_mdelem_table()[elem_idxs[h]].data(), GRPC_MDELEM_STORAGE_STATIC) : GRPC_MDNULL;
}

const uint8_t grpc_static_accept_encoding_metadata[16] = {
0,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92
};

const uint8_t grpc_static_accept_stream_encoding_metadata[8] = {
0,93,94,95,16,96,97,98
};
