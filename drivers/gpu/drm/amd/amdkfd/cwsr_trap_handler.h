/*
 * Copyright 2018 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

static const uint32_t cwsr_trap_gfx8_hex[] = {
	0xbf820001, 0xbf820121,
	0xb8f4f802, 0x89748674,
	0xb8f5f803, 0x8675ff75,
	0x00000400, 0xbf850017,
	0xc00a1e37, 0x00000000,
	0xbf8c007f, 0x87777978,
	0xbf840005, 0x8f728374,
	0xb972e0c2, 0xbf800002,
	0xb9740002, 0xbe801d78,
	0xb8f5f803, 0x8675ff75,
	0x000001ff, 0xbf850002,
	0x80708470, 0x82718071,
	0x8671ff71, 0x0000ffff,
	0x8f728374, 0xb972e0c2,
	0xbf800002, 0xb9740002,
	0xbe801f70, 0xbefa0080,
	0xb97a0283, 0xbef60068,
	0xbef70069, 0xb8fa1c07,
	0x8e7a9c7a, 0x87717a71,
	0xb8fa03c7, 0x8e7a9b7a,
	0x87717a71, 0xb8faf807,
	0x867aff7a, 0x00007fff,
	0xb97af807, 0xbef2007e,
	0xbef3007f, 0xbefe0180,
	0xbf900004, 0x877a8474,
	0xb97af802, 0xbf8e0002,
	0xbf88fffe, 0xbef8007e,
	0x8679ff7f, 0x0000ffff,
	0x8779ff79, 0x00040000,
	0xbefa0080, 0xbefb00ff,
	0x00807fac, 0x867aff7f,
	0x08000000, 0x8f7a837a,
	0x877b7a7b, 0x867aff7f,
	0x70000000, 0x8f7a817a,
	0x877b7a7b, 0xbeef007c,
	0xbeee0080, 0xb8ee2a05,
	0x806e816e, 0x8e6e8a6e,
	0xb8fa1605, 0x807a817a,
	0x8e7a867a, 0x806e7a6e,
	0xbefa0084, 0xbefa00ff,
	0x01000000, 0xbefe007c,
	0xbefc006e, 0xc0611bfc,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611c3c,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611c7c,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611cbc,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611cfc,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611d3c,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xb8f5f803,
	0xbefe007c, 0xbefc006e,
	0xc0611d7c, 0x0000007c,
	0x806e846e, 0xbefc007e,
	0xbefe007c, 0xbefc006e,
	0xc0611dbc, 0x0000007c,
	0x806e846e, 0xbefc007e,
	0xbefe007c, 0xbefc006e,
	0xc0611dfc, 0x0000007c,
	0x806e846e, 0xbefc007e,
	0xb8eff801, 0xbefe007c,
	0xbefc006e, 0xc0611bfc,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611b3c,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0xbefe007c,
	0xbefc006e, 0xc0611b7c,
	0x0000007c, 0x806e846e,
	0xbefc007e, 0x867aff7f,
	0x04000000, 0xbef30080,
	0x8773737a, 0xb8ee2a05,
	0x806e816e, 0x8e6e8a6e,
	0xb8f51605, 0x80758175,
	0x8e758475, 0x8e7a8275,
	0xbefa00ff, 0x01000000,
	0xbef60178, 0x80786e78,
	0x82798079, 0xbefc0080,
	0xbe802b00, 0xbe822b02,
	0xbe842b04, 0xbe862b06,
	0xbe882b08, 0xbe8a2b0a,
	0xbe8c2b0c, 0xbe8e2b0e,
	0xc06b003c, 0x00000000,
	0xc06b013c, 0x00000010,
	0xc06b023c, 0x00000020,
	0xc06b033c, 0x00000030,
	0x8078c078, 0x82798079,
	0x807c907c, 0xbf0a757c,
	0xbf85ffeb, 0xbef80176,
	0xbeee0080, 0xbefe00c1,
	0xbeff00c1, 0xbefa00ff,
	0x01000000, 0xe0724000,
	0x6e1e0000, 0xe0724100,
	0x6e1e0100, 0xe0724200,
	0x6e1e0200, 0xe0724300,
	0x6e1e0300, 0xbefe00c1,
	0xbeff00c1, 0xb8f54306,
	0x8675c175, 0xbf84002c,
	0xbf8a0000, 0x867aff73,
	0x04000000, 0xbf840028,
	0x8e758675, 0x8e758275,
	0xbefa0075, 0xb8ee2a05,
	0x806e816e, 0x8e6e8a6e,
	0xb8fa1605, 0x807a817a,
	0x8e7a867a, 0x806e7a6e,
	0x806eff6e, 0x00000080,
	0xbefa00ff, 0x01000000,
	0xbefc0080, 0xd28c0002,
	0x000100c1, 0xd28d0003,
	0x000204c1, 0xd1060002,
	0x00011103, 0x7e0602ff,
	0x00000200, 0xbefc00ff,
	0x00010000, 0xbe80007b,
	0x867bff7b, 0xff7fffff,
	0x877bff7b, 0x00058000,
	0xd8ec0000, 0x00000002,
	0xbf8c007f, 0xe0765000,
	0x6e1e0002, 0x32040702,
	0xd0c9006a, 0x0000eb02,
	0xbf87fff7, 0xbefb0000,
	0xbeee00ff, 0x00000400,
	0xbefe00c1, 0xbeff00c1,
	0xb8f52a05, 0x80758175,
	0x8e758275, 0x8e7a8875,
	0xbefa00ff, 0x01000000,
	0xbefc0084, 0xbf0a757c,
	0xbf840015, 0xbf11017c,
	0x8075ff75, 0x00001000,
	0x7e000300, 0x7e020301,
	0x7e040302, 0x7e060303,
	0xe0724000, 0x6e1e0000,
	0xe0724100, 0x6e1e0100,
	0xe0724200, 0x6e1e0200,
	0xe0724300, 0x6e1e0300,
	0x807c847c, 0x806eff6e,
	0x00000400, 0xbf0a757c,
	0xbf85ffef, 0xbf9c0000,
	0xbf8200cd, 0xbef8007e,
	0x8679ff7f, 0x0000ffff,
	0x8779ff79, 0x00040000,
	0xbefa0080, 0xbefb00ff,
	0x00807fac, 0x8676ff7f,
	0x08000000, 0x8f768376,
	0x877b767b, 0x8676ff7f,
	0x70000000, 0x8f768176,
	0x877b767b, 0x8676ff7f,
	0x04000000, 0xbf84001e,
	0xbefe00c1, 0xbeff00c1,
	0xb8f34306, 0x8673c173,
	0xbf840019, 0x8e738673,
	0x8e738273, 0xbefa0073,
	0xb8f22a05, 0x80728172,
	0x8e728a72, 0xb8f61605,
	0x80768176, 0x8e768676,
	0x80727672, 0x8072ff72,
	0x00000080, 0xbefa00ff,
	0x01000000, 0xbefc0080,
	0xe0510000, 0x721e0000,
	0xe0510100, 0x721e0000,
	0x807cff7c, 0x00000200,
	0x8072ff72, 0x00000200,
	0xbf0a737c, 0xbf85fff6,
	0xbef20080, 0xbefe00c1,
	0xbeff00c1, 0xb8f32a05,
	0x80738173, 0x8e738273,
	0x8e7a8873, 0xbefa00ff,
	0x01000000, 0xbef60072,
	0x8072ff72, 0x00000400,
	0xbefc0084, 0xbf11087c,
	0x8073ff73, 0x00008000,
	0xe0524000, 0x721e0000,
	0xe0524100, 0x721e0100,
	0xe0524200, 0x721e0200,
	0xe0524300, 0x721e0300,
	0xbf8c0f70, 0x7e000300,
	0x7e020301, 0x7e040302,
	0x7e060303, 0x807c847c,
	0x8072ff72, 0x00000400,
	0xbf0a737c, 0xbf85ffee,
	0xbf9c0000, 0xe0524000,
	0x761e0000, 0xe0524100,
	0x761e0100, 0xe0524200,
	0x761e0200, 0xe0524300,
	0x761e0300, 0xb8f22a05,
	0x80728172, 0x8e728a72,
	0xb8f61605, 0x80768176,
	0x8e768676, 0x80727672,
	0x80f2c072, 0xb8f31605,
	0x80738173, 0x8e738473,
	0x8e7a8273, 0xbefa00ff,
	0x01000000, 0xbefc0073,
	0xc031003c, 0x00000072,
	0x80f2c072, 0xbf8c007f,
	0x80fc907c, 0xbe802d00,
	0xbe822d02, 0xbe842d04,
	0xbe862d06, 0xbe882d08,
	0xbe8a2d0a, 0xbe8c2d0c,
	0xbe8e2d0e, 0xbf06807c,
	0xbf84fff1, 0xb8f22a05,
	0x80728172, 0x8e728a72,
	0xb8f61605, 0x80768176,
	0x8e768676, 0x80727672,
	0xbefa0084, 0xbefa00ff,
	0x01000000, 0xc0211cfc,
	0x00000072, 0x80728472,
	0xc0211c3c, 0x00000072,
	0x80728472, 0xc0211c7c,
	0x00000072, 0x80728472,
	0xc0211bbc, 0x00000072,
	0x80728472, 0xc0211bfc,
	0x00000072, 0x80728472,
	0xc0211d3c, 0x00000072,
	0x80728472, 0xc0211d7c,
	0x00000072, 0x80728472,
	0xc0211a3c, 0x00000072,
	0x80728472, 0xc0211a7c,
	0x00000072, 0x80728472,
	0xc0211dfc, 0x00000072,
	0x80728472, 0xc0211b3c,
	0x00000072, 0x80728472,
	0xc0211b7c, 0x00000072,
	0x80728472, 0xbf8c007f,
	0xbefc0073, 0xbefe006e,
	0xbeff006f, 0x867375ff,
	0x000003ff, 0xb9734803,
	0x867375ff, 0xfffff800,
	0x8f738b73, 0xb973a2c3,
	0xb977f801, 0x8673ff71,
	0xf0000000, 0x8f739c73,
	0x8e739073, 0xbef60080,
	0x87767376, 0x8673ff71,
	0x08000000, 0x8f739b73,
	0x8e738f73, 0x87767376,
	0x8673ff74, 0x00800000,
	0x8f739773, 0xb976f807,
	0x8671ff71, 0x0000ffff,
	0x86fe7e7e, 0x86ea6a6a,
	0x8f768374, 0xb976e0c2,
	0xbf800002, 0xb9740002,
	0xbf8a0000, 0x95807370,
	0xbf810000, 0x00000000,
};


static const uint32_t cwsr_trap_gfx9_hex[] = {
	0xbf820001, 0xbf820248,
	0xb8f8f802, 0x89788678,
	0xb8eef801, 0x866eff6e,
	0x00000800, 0xbf840003,
	0x866eff78, 0x00002000,
	0xbf840016, 0xb8fbf803,
	0x866eff7b, 0x00000400,
	0xbf85003b, 0x866eff7b,
	0x00000800, 0xbf850003,
	0x866eff7b, 0x00000100,
	0xbf84000c, 0x866eff78,
	0x00002000, 0xbf840005,
	0xbf8e0010, 0xb8eef803,
	0x866eff6e, 0x00000400,
	0xbf84fffb, 0x8778ff78,
	0x00002000, 0x80ec886c,
	0x82ed806d, 0xb8eef807,
	0x866fff6e, 0x001f8000,
	0x8e6f8b6f, 0x8977ff77,
	0xfc000000, 0x87776f77,
	0x896eff6e, 0x001f8000,
	0xb96ef807, 0xb8faf812,
	0xb8fbf813, 0x8efa887a,
	0xc0071bbd, 0x00000000,
	0xbf8cc07f, 0xc0071ebd,
	0x00000008, 0xbf8cc07f,
	0x86ee6e6e, 0xbf840001,
	0xbe801d6e, 0xb8fbf803,
	0x867bff7b, 0x000001ff,
	0xbf850002, 0x806c846c,
	0x826d806d, 0x866dff6d,
	0x0000ffff, 0x8f6e8b77,
	0x866eff6e, 0x001f8000,
	0xb96ef807, 0x86fe7e7e,
	0x86ea6a6a, 0x8f6e8378,
	0xb96ee0c2, 0xbf800002,
	0xb9780002, 0xbe801f6c,
	0x866dff6d, 0x0000ffff,
	0xbefa0080, 0xb97a0283,
	0xb8fa2407, 0x8e7a9b7a,
	0x876d7a6d, 0xb8fa03c7,
	0x8e7a9a7a, 0x876d7a6d,
	0xb8faf807, 0x867aff7a,
	0x00007fff, 0xb97af807,
	0xbeee007e, 0xbeef007f,
	0xbefe0180, 0xbf900004,
	0x877a8478, 0xb97af802,
	0xbf8e0002, 0xbf88fffe,
	0xb8fa2a05, 0x807a817a,
	0x8e7a8a7a, 0xb8fb1605,
	0x807b817b, 0x8e7b867b,
	0x807a7b7a, 0x807a7e7a,
	0x827b807f, 0x867bff7b,
	0x0000ffff, 0xc04b1c3d,
	0x00000050, 0xbf8cc07f,
	0xc04b1d3d, 0x00000060,
	0xbf8cc07f, 0xc0431e7d,
	0x00000074, 0xbf8cc07f,
	0xbef4007e, 0x8675ff7f,
	0x0000ffff, 0x8775ff75,
	0x00040000, 0xbef60080,
	0xbef700ff, 0x00807fac,
	0x867aff7f, 0x08000000,
	0x8f7a837a, 0x87777a77,
	0x867aff7f, 0x70000000,
	0x8f7a817a, 0x87777a77,
	0xbef1007c, 0xbef00080,
	0xb8f02a05, 0x80708170,
	0x8e708a70, 0xb8fa1605,
	0x807a817a, 0x8e7a867a,
	0x80707a70, 0xbef60084,
	0xbef600ff, 0x01000000,
	0xbefe007c, 0xbefc0070,
	0xc0611c7a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611b3a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611b7a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611bba,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611bfa, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611e3a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xb8fbf803, 0xbefe007c,
	0xbefc0070, 0xc0611efa,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611a3a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611a7a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xb8f1f801, 0xbefe007c,
	0xbefc0070, 0xc0611c7a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0x867aff7f, 0x04000000,
	0xbeef0080, 0x876f6f7a,
	0xb8f02a05, 0x80708170,
	0x8e708a70, 0xb8fb1605,
	0x807b817b, 0x8e7b847b,
	0x8e76827b, 0xbef600ff,
	0x01000000, 0xbef20174,
	0x80747074, 0x82758075,
	0xbefc0080, 0xbf800000,
	0xbe802b00, 0xbe822b02,
	0xbe842b04, 0xbe862b06,
	0xbe882b08, 0xbe8a2b0a,
	0xbe8c2b0c, 0xbe8e2b0e,
	0xc06b003a, 0x00000000,
	0xbf8cc07f, 0xc06b013a,
	0x00000010, 0xbf8cc07f,
	0xc06b023a, 0x00000020,
	0xbf8cc07f, 0xc06b033a,
	0x00000030, 0xbf8cc07f,
	0x8074c074, 0x82758075,
	0x807c907c, 0xbf0a7b7c,
	0xbf85ffe7, 0xbef40172,
	0xbef00080, 0xbefe00c1,
	0xbeff00c1, 0xbee80080,
	0xbee90080, 0xbef600ff,
	0x01000000, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf85004d,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000902, 0x80048104,
	0xd2890001, 0x00000902,
	0x80048104, 0xd2890002,
	0x00000902, 0x80048104,
	0xd2890003, 0x00000902,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000903,
	0x80048104, 0xd2890001,
	0x00000903, 0x80048104,
	0xd2890002, 0x00000903,
	0x80048104, 0xd2890003,
	0x00000903, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbf820008, 0xe0724000,
	0x701d0000, 0xe0724100,
	0x701d0100, 0xe0724200,
	0x701d0200, 0xe0724300,
	0x701d0300, 0xbefe00c1,
	0xbeff00c1, 0xb8fb4306,
	0x867bc17b, 0xbf840063,
	0xbf8a0000, 0x867aff6f,
	0x04000000, 0xbf84005f,
	0x8e7b867b, 0x8e7b827b,
	0xbef6007b, 0xb8f02a05,
	0x80708170, 0x8e708a70,
	0xb8fa1605, 0x807a817a,
	0x8e7a867a, 0x80707a70,
	0x8070ff70, 0x00000080,
	0xbef600ff, 0x01000000,
	0xbefc0080, 0xd28c0002,
	0x000100c1, 0xd28d0003,
	0x000204c1, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf850030,
	0x24040682, 0xd86e4000,
	0x00000002, 0xbf8cc07f,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0x680404ff, 0x00000200,
	0xd0c9006a, 0x0000f702,
	0xbf87ffd2, 0xbf820015,
	0xd1060002, 0x00011103,
	0x7e0602ff, 0x00000200,
	0xbefc00ff, 0x00010000,
	0xbe800077, 0x8677ff77,
	0xff7fffff, 0x8777ff77,
	0x00058000, 0xd8ec0000,
	0x00000002, 0xbf8cc07f,
	0xe0765000, 0x701d0002,
	0x68040702, 0xd0c9006a,
	0x0000f702, 0xbf87fff7,
	0xbef70000, 0xbef000ff,
	0x00000400, 0xbefe00c1,
	0xbeff00c1, 0xb8fb2a05,
	0x807b817b, 0x8e7b827b,
	0x8e76887b, 0xbef600ff,
	0x01000000, 0xbefc0084,
	0xbf0a7b7c, 0xbf84006d,
	0xbf11017c, 0x807bff7b,
	0x00001000, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf850051,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000902, 0x80048104,
	0xd2890001, 0x00000902,
	0x80048104, 0xd2890002,
	0x00000902, 0x80048104,
	0xd2890003, 0x00000902,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000903,
	0x80048104, 0xd2890001,
	0x00000903, 0x80048104,
	0xd2890002, 0x00000903,
	0x80048104, 0xd2890003,
	0x00000903, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0x807c847c, 0xbf0a7b7c,
	0xbf85ffb1, 0xbf9c0000,
	0xbf820012, 0x7e000300,
	0x7e020301, 0x7e040302,
	0x7e060303, 0xe0724000,
	0x701d0000, 0xe0724100,
	0x701d0100, 0xe0724200,
	0x701d0200, 0xe0724300,
	0x701d0300, 0x807c847c,
	0x8070ff70, 0x00000400,
	0xbf0a7b7c, 0xbf85ffef,
	0xbf9c0000, 0xbf8200da,
	0xbef4007e, 0x8675ff7f,
	0x0000ffff, 0x8775ff75,
	0x00040000, 0xbef60080,
	0xbef700ff, 0x00807fac,
	0x866eff7f, 0x08000000,
	0x8f6e836e, 0x87776e77,
	0x866eff7f, 0x70000000,
	0x8f6e816e, 0x87776e77,
	0x866eff7f, 0x04000000,
	0xbf84001e, 0xbefe00c1,
	0xbeff00c1, 0xb8ef4306,
	0x866fc16f, 0xbf840019,
	0x8e6f866f, 0x8e6f826f,
	0xbef6006f, 0xb8f82a05,
	0x80788178, 0x8e788a78,
	0xb8ee1605, 0x806e816e,
	0x8e6e866e, 0x80786e78,
	0x8078ff78, 0x00000080,
	0xbef600ff, 0x01000000,
	0xbefc0080, 0xe0510000,
	0x781d0000, 0xe0510100,
	0x781d0000, 0x807cff7c,
	0x00000200, 0x8078ff78,
	0x00000200, 0xbf0a6f7c,
	0xbf85fff6, 0xbef80080,
	0xbefe00c1, 0xbeff00c1,
	0xb8ef2a05, 0x806f816f,
	0x8e6f826f, 0x8e76886f,
	0xbef600ff, 0x01000000,
	0xbeee0078, 0x8078ff78,
	0x00000400, 0xbefc0084,
	0xbf11087c, 0x806fff6f,
	0x00008000, 0xe0524000,
	0x781d0000, 0xe0524100,
	0x781d0100, 0xe0524200,
	0x781d0200, 0xe0524300,
	0x781d0300, 0xbf8c0f70,
	0x7e000300, 0x7e020301,
	0x7e040302, 0x7e060303,
	0x807c847c, 0x8078ff78,
	0x00000400, 0xbf0a6f7c,
	0xbf85ffee, 0xbf9c0000,
	0xe0524000, 0x6e1d0000,
	0xe0524100, 0x6e1d0100,
	0xe0524200, 0x6e1d0200,
	0xe0524300, 0x6e1d0300,
	0xb8f82a05, 0x80788178,
	0x8e788a78, 0xb8ee1605,
	0x806e816e, 0x8e6e866e,
	0x80786e78, 0x80f8c078,
	0xb8ef1605, 0x806f816f,
	0x8e6f846f, 0x8e76826f,
	0xbef600ff, 0x01000000,
	0xbefc006f, 0xc031003a,
	0x00000078, 0x80f8c078,
	0xbf8cc07f, 0x80fc907c,
	0xbf800000, 0xbe802d00,
	0xbe822d02, 0xbe842d04,
	0xbe862d06, 0xbe882d08,
	0xbe8a2d0a, 0xbe8c2d0c,
	0xbe8e2d0e, 0xbf06807c,
	0xbf84fff0, 0xb8f82a05,
	0x80788178, 0x8e788a78,
	0xb8ee1605, 0x806e816e,
	0x8e6e866e, 0x80786e78,
	0xbef60084, 0xbef600ff,
	0x01000000, 0xc0211bfa,
	0x00000078, 0x80788478,
	0xc0211b3a, 0x00000078,
	0x80788478, 0xc0211b7a,
	0x00000078, 0x80788478,
	0xc0211c3a, 0x00000078,
	0x80788478, 0xc0211c7a,
	0x00000078, 0x80788478,
	0xc0211eba, 0x00000078,
	0x80788478, 0xc0211efa,
	0x00000078, 0x80788478,
	0xc0211a3a, 0x00000078,
	0x80788478, 0xc0211a7a,
	0x00000078, 0x80788478,
	0xc0211cfa, 0x00000078,
	0x80788478, 0xbf8cc07f,
	0xbefc006f, 0xbefe0070,
	0xbeff0071, 0x866f7bff,
	0x000003ff, 0xb96f4803,
	0x866f7bff, 0xfffff800,
	0x8f6f8b6f, 0xb96fa2c3,
	0xb973f801, 0xb8ee2a05,
	0x806e816e, 0x8e6e8a6e,
	0xb8ef1605, 0x806f816f,
	0x8e6f866f, 0x806e6f6e,
	0x806e746e, 0x826f8075,
	0x866fff6f, 0x0000ffff,
	0xc00b1c37, 0x00000050,
	0xc00b1d37, 0x00000060,
	0xc0031e77, 0x00000074,
	0xbf8cc07f, 0x866fff6d,
	0xf8000000, 0x8f6f9b6f,
	0x8e6f906f, 0xbeee0080,
	0x876e6f6e, 0x866fff6d,
	0x04000000, 0x8f6f9a6f,
	0x8e6f8f6f, 0x876e6f6e,
	0x866fff7a, 0x00800000,
	0x8f6f976f, 0xb96ef807,
	0x866dff6d, 0x0000ffff,
	0x86fe7e7e, 0x86ea6a6a,
	0x8f6e837a, 0xb96ee0c2,
	0xbf800002, 0xb97a0002,
	0xbf8a0000, 0x95806f6c,
	0xbf810000, 0x00000000,
};

static const uint32_t cwsr_trap_gfx10_hex[] = {
	0xbf820001, 0xbf8201c1,
	0xb0804004, 0xb978f802,
	0x8a788678, 0xb971f803,
	0x876eff71, 0x00000400,
	0xbf850033, 0x876eff71,
	0x00000100, 0xbf840002,
	0x8878ff78, 0x00002000,
	0x8a77ff77, 0xff000000,
	0xb96ef807, 0x876fff6e,
	0x02000000, 0x8f6f866f,
	0x88776f77, 0x876fff6e,
	0x003f8000, 0x8f6f896f,
	0x88776f77, 0x8a6eff6e,
	0x023f8000, 0xb9eef807,
	0xb97af812, 0xb97bf813,
	0x8ffa887a, 0xf4051bbd,
	0xfa000000, 0xbf8cc07f,
	0xf4051ebd, 0xfa000008,
	0xbf8cc07f, 0x87ee6e6e,
	0xbf840001, 0xbe80206e,
	0xb971f803, 0x8771ff71,
	0x000001ff, 0xbf850002,
	0x806c846c, 0x826d806d,
	0x876dff6d, 0x0000ffff,
	0x906e8977, 0x876fff6e,
	0x003f8000, 0x906e8677,
	0x876eff6e, 0x02000000,
	0x886e6f6e, 0xb9eef807,
	0x87fe7e7e, 0x87ea6a6a,
	0xb9f8f802, 0xbe80226c,
	0xb971f803, 0x8771ff71,
	0x00000100, 0xbf840006,
	0xbef60380, 0xb9f60203,
	0x876dff6d, 0x0000ffff,
	0x80ec886c, 0x82ed806d,
	0xbef60380, 0xb9f60283,
	0xb972f816, 0xb9762c07,
	0x8f769a76, 0x886d766d,
	0xb97603c7, 0x8f769976,
	0x886d766d, 0xb9760647,
	0x8f769876, 0x886d766d,
	0xb976f807, 0x8776ff76,
	0x00007fff, 0xb9f6f807,
	0xbeee037e, 0xbeef037f,
	0xbefe0480, 0xbf900004,
	0xbf8e0002, 0xbf88fffe,
	0xbef4037e, 0x8775ff7f,
	0x0000ffff, 0x8875ff75,
	0x00040000, 0xbef60380,
	0xbef703ff, 0x10807fac,
	0x8776ff7f, 0x08000000,
	0x90768376, 0x88777677,
	0x8776ff7f, 0x70000000,
	0x90768176, 0x88777677,
	0xbefb037c, 0xbefa0380,
	0xb97302dc, 0x8f739973,
	0x8873737f, 0xb97a2a05,
	0x807a817a, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f7a897a,
	0xbf820001, 0x8f7a8a7a,
	0xb9761e06, 0x8f768a76,
	0x807a767a, 0x807aff7a,
	0x00000200, 0xbef603ff,
	0x01000000, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611b3a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611b7a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611bba,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611bfa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xbefe037c,
	0xbefc037a, 0xf4611e3a,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xb971f803,
	0xbefe037c, 0xbefc037a,
	0xf4611c7a, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xbefe037c, 0xbefc037a,
	0xf4611cba, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xb97bf801, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0xb97bf814,
	0xbefe037c, 0xbefc037a,
	0xf4611efa, 0xf8000000,
	0x807a847a, 0xbefc037e,
	0xb97bf815, 0xbefe037c,
	0xbefc037a, 0xf4611efa,
	0xf8000000, 0x807a847a,
	0xbefc037e, 0x8776ff7f,
	0x04000000, 0xbeef0380,
	0x886f6f76, 0xb97a2a05,
	0x807a817a, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f7a897a,
	0xbf820001, 0x8f7a8a7a,
	0xb9761e06, 0x8f768a76,
	0x807a767a, 0xbef603ff,
	0x01000000, 0xbef20374,
	0x80747a74, 0x82758075,
	0xbefc0380, 0xbf800000,
	0xbe802f00, 0xbe822f02,
	0xbe842f04, 0xbe862f06,
	0xbe882f08, 0xbe8a2f0a,
	0xbe8c2f0c, 0xbe8e2f0e,
	0xf469003a, 0xfa000000,
	0xf469013a, 0xfa000010,
	0xf469023a, 0xfa000020,
	0xf469033a, 0xfa000030,
	0x8074c074, 0x82758075,
	0x807c907c, 0xbf0aff7c,
	0x00000060, 0xbf85ffea,
	0xbe802f00, 0xbe822f02,
	0xbe842f04, 0xbe862f06,
	0xbe882f08, 0xbe8a2f0a,
	0xf469003a, 0xfa000000,
	0xf469013a, 0xfa000010,
	0xf469023a, 0xfa000020,
	0x8074b074, 0x82758075,
	0xbef40372, 0xbefa0380,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820002, 0xbeff03c1,
	0xbf82000b, 0xbef603ff,
	0x01000000, 0xe0704000,
	0x7a5d0000, 0xe0704080,
	0x7a5d0100, 0xe0704100,
	0x7a5d0200, 0xe0704180,
	0x7a5d0300, 0xbf82000a,
	0xbef603ff, 0x01000000,
	0xe0704000, 0x7a5d0000,
	0xe0704100, 0x7a5d0100,
	0xe0704200, 0x7a5d0200,
	0xe0704300, 0x7a5d0300,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820001, 0xbeff03c1,
	0xb9714306, 0x8771c171,
	0xbf840046, 0xbf8a0000,
	0x8776ff6f, 0x04000000,
	0xbf840042, 0x8f718671,
	0x8f718271, 0xbef60371,
	0xb97a2a05, 0x807a817a,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0x8f7a897a, 0xbf820001,
	0x8f7a8a7a, 0xb9761e06,
	0x8f768a76, 0x807a767a,
	0x807aff7a, 0x00000200,
	0x807aff7a, 0x00000080,
	0xbef603ff, 0x01000000,
	0xd7650000, 0x000100c1,
	0xd7660000, 0x000200c1,
	0x16000084, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbefc0380, 0xbf850012,
	0xbe8303ff, 0x00000080,
	0xbf800000, 0xbf800000,
	0xbf800000, 0xd8d80000,
	0x01000000, 0xbf8c0000,
	0xe0704000, 0x7a5d0100,
	0x807c037c, 0x807a037a,
	0xd5250000, 0x0001ff00,
	0x00000080, 0xbf0a717c,
	0xbf85fff4, 0xbf820011,
	0xbe8303ff, 0x00000100,
	0xbf800000, 0xbf800000,
	0xbf800000, 0xd8d80000,
	0x01000000, 0xbf8c0000,
	0xe0704000, 0x7a5d0100,
	0x807c037c, 0x807a037a,
	0xd5250000, 0x0001ff00,
	0x00000100, 0xbf0a717c,
	0xbf85fff4, 0xbefe03c1,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850004,
	0xbefa03ff, 0x00000200,
	0xbeff0380, 0xbf820003,
	0xbefa03ff, 0x00000400,
	0xbeff03c1, 0xb9712a05,
	0x80718171, 0x8f718271,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850017,
	0xbef603ff, 0x01000000,
	0xbefc0384, 0xbf0a717c,
	0xbf840037, 0x7e008700,
	0x7e028701, 0x7e048702,
	0x7e068703, 0xe0704000,
	0x7a5d0000, 0xe0704080,
	0x7a5d0100, 0xe0704100,
	0x7a5d0200, 0xe0704180,
	0x7a5d0300, 0x807c847c,
	0x807aff7a, 0x00000200,
	0xbf0a717c, 0xbf85ffef,
	0xbf820025, 0xbef603ff,
	0x01000000, 0xbefc0384,
	0xbf0a717c, 0xbf840020,
	0x7e008700, 0x7e028701,
	0x7e048702, 0x7e068703,
	0xe0704000, 0x7a5d0000,
	0xe0704100, 0x7a5d0100,
	0xe0704200, 0x7a5d0200,
	0xe0704300, 0x7a5d0300,
	0x807c847c, 0x807aff7a,
	0x00000400, 0xbf0a717c,
	0xbf85ffef, 0xb9711e06,
	0x8771c171, 0xbf84000c,
	0x8f718371, 0x80717c71,
	0xbefe03c1, 0xbeff0380,
	0x7e008700, 0xe0704000,
	0x7a5d0000, 0x807c817c,
	0x807aff7a, 0x00000080,
	0xbf0a717c, 0xbf85fff8,
	0xbf820141, 0xbef4037e,
	0x8775ff7f, 0x0000ffff,
	0x8875ff75, 0x00040000,
	0xbef60380, 0xbef703ff,
	0x10807fac, 0x8772ff7f,
	0x08000000, 0x90728372,
	0x88777277, 0x8772ff7f,
	0x70000000, 0x90728172,
	0x88777277, 0xb97302dc,
	0x8f739973, 0x8873737f,
	0x8772ff7f, 0x04000000,
	0xbf840036, 0xbefe03c1,
	0x907c9973, 0x877c817c,
	0xbf06817c, 0xbf850002,
	0xbeff0380, 0xbf820001,
	0xbeff03c1, 0xb96f4306,
	0x876fc16f, 0xbf84002b,
	0x8f6f866f, 0x8f6f826f,
	0xbef6036f, 0xb9782a05,
	0x80788178, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f788978,
	0xbf820001, 0x8f788a78,
	0xb9721e06, 0x8f728a72,
	0x80787278, 0x8078ff78,
	0x00000200, 0x8078ff78,
	0x00000080, 0xbef603ff,
	0x01000000, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbefc0380, 0xbf850009,
	0xe0310000, 0x781d0000,
	0x807cff7c, 0x00000080,
	0x8078ff78, 0x00000080,
	0xbf0a6f7c, 0xbf85fff8,
	0xbf820008, 0xe0310000,
	0x781d0000, 0x807cff7c,
	0x00000100, 0x8078ff78,
	0x00000100, 0xbf0a6f7c,
	0xbf85fff8, 0xbef80380,
	0xbefe03c1, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0xbeff0380,
	0xbf820001, 0xbeff03c1,
	0xb96f2a05, 0x806f816f,
	0x8f6f826f, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850021, 0xbef603ff,
	0x01000000, 0xbef20378,
	0x8078ff78, 0x00000200,
	0xbefc0384, 0xe0304000,
	0x785d0000, 0xe0304080,
	0x785d0100, 0xe0304100,
	0x785d0200, 0xe0304180,
	0x785d0300, 0xbf8c3f70,
	0x7e008500, 0x7e028501,
	0x7e048502, 0x7e068503,
	0x807c847c, 0x8078ff78,
	0x00000200, 0xbf0a6f7c,
	0xbf85ffee, 0xe0304000,
	0x725d0000, 0xe0304080,
	0x725d0100, 0xe0304100,
	0x725d0200, 0xe0304180,
	0x725d0300, 0xbf820031,
	0xbef603ff, 0x01000000,
	0xbef20378, 0x8078ff78,
	0x00000400, 0xbefc0384,
	0xe0304000, 0x785d0000,
	0xe0304100, 0x785d0100,
	0xe0304200, 0x785d0200,
	0xe0304300, 0x785d0300,
	0xbf8c3f70, 0x7e008500,
	0x7e028501, 0x7e048502,
	0x7e068503, 0x807c847c,
	0x8078ff78, 0x00000400,
	0xbf0a6f7c, 0xbf85ffee,
	0xb96f1e06, 0x876fc16f,
	0xbf84000e, 0x8f6f836f,
	0x806f7c6f, 0xbefe03c1,
	0xbeff0380, 0xe0304000,
	0x785d0000, 0xbf8c3f70,
	0x7e008500, 0x807c817c,
	0x8078ff78, 0x00000080,
	0xbf0a6f7c, 0xbf85fff7,
	0xbeff03c1, 0xe0304000,
	0x725d0000, 0xe0304100,
	0x725d0100, 0xe0304200,
	0x725d0200, 0xe0304300,
	0x725d0300, 0xb9782a05,
	0x80788178, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f788978,
	0xbf820001, 0x8f788a78,
	0xb9721e06, 0x8f728a72,
	0x80787278, 0x8078ff78,
	0x00000200, 0x80f8ff78,
	0x00000050, 0xbef603ff,
	0x01000000, 0xbefc03ff,
	0x0000006c, 0x80f89078,
	0xf429003a, 0xf0000000,
	0xbf8cc07f, 0x80fc847c,
	0xbf800000, 0xbe803100,
	0xbe823102, 0x80f8a078,
	0xf42d003a, 0xf0000000,
	0xbf8cc07f, 0x80fc887c,
	0xbf800000, 0xbe803100,
	0xbe823102, 0xbe843104,
	0xbe863106, 0x80f8c078,
	0xf431003a, 0xf0000000,
	0xbf8cc07f, 0x80fc907c,
	0xbf800000, 0xbe803100,
	0xbe823102, 0xbe843104,
	0xbe863106, 0xbe883108,
	0xbe8a310a, 0xbe8c310c,
	0xbe8e310e, 0xbf06807c,
	0xbf84fff0, 0xb9782a05,
	0x80788178, 0x907c9973,
	0x877c817c, 0xbf06817c,
	0xbf850002, 0x8f788978,
	0xbf820001, 0x8f788a78,
	0xb9721e06, 0x8f728a72,
	0x80787278, 0x8078ff78,
	0x00000200, 0xbef603ff,
	0x01000000, 0xf4211bfa,
	0xf0000000, 0x80788478,
	0xf4211b3a, 0xf0000000,
	0x80788478, 0xf4211b7a,
	0xf0000000, 0x80788478,
	0xf4211eba, 0xf0000000,
	0x80788478, 0xf4211efa,
	0xf0000000, 0x80788478,
	0xf4211c3a, 0xf0000000,
	0x80788478, 0xf4211c7a,
	0xf0000000, 0x80788478,
	0xf4211e7a, 0xf0000000,
	0x80788478, 0xf4211cfa,
	0xf0000000, 0x80788478,
	0xf4211bba, 0xf0000000,
	0x80788478, 0xbf8cc07f,
	0xb9eef814, 0xf4211bba,
	0xf0000000, 0x80788478,
	0xbf8cc07f, 0xb9eef815,
	0xbef2036d, 0x876dff72,
	0x0000ffff, 0xbefc036f,
	0xbefe037a, 0xbeff037b,
	0x876f71ff, 0x000003ff,
	0xb9ef4803, 0xb9f9f816,
	0x876f71ff, 0xfffff800,
	0x906f8b6f, 0xb9efa2c3,
	0xb9f3f801, 0x876fff72,
	0xfc000000, 0x906f9a6f,
	0x8f6f906f, 0xbef30380,
	0x88736f73, 0x876fff72,
	0x02000000, 0x906f996f,
	0x8f6f8f6f, 0x88736f73,
	0x876fff72, 0x01000000,
	0x906f986f, 0x8f6f996f,
	0x88736f73, 0x876fff70,
	0x00800000, 0x906f976f,
	0xb9f3f807, 0x87fe7e7e,
	0x87ea6a6a, 0xb9f0f802,
	0xbf8a0000, 0xbe80226c,
	0xbf810000, 0xbf9f0000,
	0xbf9f0000, 0xbf9f0000,
	0xbf9f0000, 0xbf9f0000,
};
static const uint32_t cwsr_trap_arcturus_hex[] = {
	0xbf820001, 0xbf8202c4,
	0xb8f8f802, 0x89788678,
	0xb8eef801, 0x866eff6e,
	0x00000800, 0xbf840003,
	0x866eff78, 0x00002000,
	0xbf840016, 0xb8fbf803,
	0x866eff7b, 0x00000400,
	0xbf85003b, 0x866eff7b,
	0x00000800, 0xbf850003,
	0x866eff7b, 0x00000100,
	0xbf84000c, 0x866eff78,
	0x00002000, 0xbf840005,
	0xbf8e0010, 0xb8eef803,
	0x866eff6e, 0x00000400,
	0xbf84fffb, 0x8778ff78,
	0x00002000, 0x80ec886c,
	0x82ed806d, 0xb8eef807,
	0x866fff6e, 0x001f8000,
	0x8e6f8b6f, 0x8977ff77,
	0xfc000000, 0x87776f77,
	0x896eff6e, 0x001f8000,
	0xb96ef807, 0xb8faf812,
	0xb8fbf813, 0x8efa887a,
	0xc0071bbd, 0x00000000,
	0xbf8cc07f, 0xc0071ebd,
	0x00000008, 0xbf8cc07f,
	0x86ee6e6e, 0xbf840001,
	0xbe801d6e, 0xb8fbf803,
	0x867bff7b, 0x000001ff,
	0xbf850002, 0x806c846c,
	0x826d806d, 0x866dff6d,
	0x0000ffff, 0x8f6e8b77,
	0x866eff6e, 0x001f8000,
	0xb96ef807, 0x86fe7e7e,
	0x86ea6a6a, 0x8f6e8378,
	0xb96ee0c2, 0xbf800002,
	0xb9780002, 0xbe801f6c,
	0x866dff6d, 0x0000ffff,
	0xbefa0080, 0xb97a0283,
	0xb8fa2407, 0x8e7a9b7a,
	0x876d7a6d, 0xb8fa03c7,
	0x8e7a9a7a, 0x876d7a6d,
	0xb8faf807, 0x867aff7a,
	0x00007fff, 0xb97af807,
	0xbeee007e, 0xbeef007f,
	0xbefe0180, 0xbf900004,
	0x877a8478, 0xb97af802,
	0xbf8e0002, 0xbf88fffe,
	0xb8fa2a05, 0x807a817a,
	0x8e7a8a7a, 0x8e7a817a,
	0xb8fb1605, 0x807b817b,
	0x8e7b867b, 0x807a7b7a,
	0x807a7e7a, 0x827b807f,
	0x867bff7b, 0x0000ffff,
	0xc04b1c3d, 0x00000050,
	0xbf8cc07f, 0xc04b1d3d,
	0x00000060, 0xbf8cc07f,
	0xc0431e7d, 0x00000074,
	0xbf8cc07f, 0xbef4007e,
	0x8675ff7f, 0x0000ffff,
	0x8775ff75, 0x00040000,
	0xbef60080, 0xbef700ff,
	0x00807fac, 0x867aff7f,
	0x08000000, 0x8f7a837a,
	0x87777a77, 0x867aff7f,
	0x70000000, 0x8f7a817a,
	0x87777a77, 0xbef1007c,
	0xbef00080, 0xb8f02a05,
	0x80708170, 0x8e708a70,
	0x8e708170, 0xb8fa1605,
	0x807a817a, 0x8e7a867a,
	0x80707a70, 0xbef60084,
	0xbef600ff, 0x01000000,
	0xbefe007c, 0xbefc0070,
	0xc0611c7a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611b3a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611b7a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611bba,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611bfa, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611e3a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xb8fbf803, 0xbefe007c,
	0xbefc0070, 0xc0611efa,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xbefe007c, 0xbefc0070,
	0xc0611a3a, 0x0000007c,
	0xbf8cc07f, 0x80708470,
	0xbefc007e, 0xbefe007c,
	0xbefc0070, 0xc0611a7a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0xb8f1f801, 0xbefe007c,
	0xbefc0070, 0xc0611c7a,
	0x0000007c, 0xbf8cc07f,
	0x80708470, 0xbefc007e,
	0x867aff7f, 0x04000000,
	0xbeef0080, 0x876f6f7a,
	0xb8f02a05, 0x80708170,
	0x8e708a70, 0x8e708170,
	0xb8fb1605, 0x807b817b,
	0x8e7b847b, 0x8e76827b,
	0xbef600ff, 0x01000000,
	0xbef20174, 0x80747074,
	0x82758075, 0xbefc0080,
	0xbf800000, 0xbe802b00,
	0xbe822b02, 0xbe842b04,
	0xbe862b06, 0xbe882b08,
	0xbe8a2b0a, 0xbe8c2b0c,
	0xbe8e2b0e, 0xc06b003a,
	0x00000000, 0xbf8cc07f,
	0xc06b013a, 0x00000010,
	0xbf8cc07f, 0xc06b023a,
	0x00000020, 0xbf8cc07f,
	0xc06b033a, 0x00000030,
	0xbf8cc07f, 0x8074c074,
	0x82758075, 0x807c907c,
	0xbf0a7b7c, 0xbf85ffe7,
	0xbef40172, 0xbef00080,
	0xbefe00c1, 0xbeff00c1,
	0xbee80080, 0xbee90080,
	0xbef600ff, 0x01000000,
	0x867aff78, 0x00400000,
	0xbf850003, 0xb8faf803,
	0x897a7aff, 0x10000000,
	0xbf85004d, 0xbe840080,
	0xd2890000, 0x00000900,
	0x80048104, 0xd2890001,
	0x00000900, 0x80048104,
	0xd2890002, 0x00000900,
	0x80048104, 0xd2890003,
	0x00000900, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000901, 0x80048104,
	0xd2890001, 0x00000901,
	0x80048104, 0xd2890002,
	0x00000901, 0x80048104,
	0xd2890003, 0x00000901,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000902,
	0x80048104, 0xd2890001,
	0x00000902, 0x80048104,
	0xd2890002, 0x00000902,
	0x80048104, 0xd2890003,
	0x00000902, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000903, 0x80048104,
	0xd2890001, 0x00000903,
	0x80048104, 0xd2890002,
	0x00000903, 0x80048104,
	0xd2890003, 0x00000903,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbf820008,
	0xe0724000, 0x701d0000,
	0xe0724100, 0x701d0100,
	0xe0724200, 0x701d0200,
	0xe0724300, 0x701d0300,
	0xbefe00c1, 0xbeff00c1,
	0xb8fb4306, 0x867bc17b,
	0xbf840064, 0xbf8a0000,
	0x867aff6f, 0x04000000,
	0xbf840060, 0x8e7b867b,
	0x8e7b827b, 0xbef6007b,
	0xb8f02a05, 0x80708170,
	0x8e708a70, 0x8e708170,
	0xb8fa1605, 0x807a817a,
	0x8e7a867a, 0x80707a70,
	0x8070ff70, 0x00000080,
	0xbef600ff, 0x01000000,
	0xbefc0080, 0xd28c0002,
	0x000100c1, 0xd28d0003,
	0x000204c1, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf850030,
	0x24040682, 0xd86e4000,
	0x00000002, 0xbf8cc07f,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0x680404ff, 0x00000200,
	0xd0c9006a, 0x0000f702,
	0xbf87ffd2, 0xbf820015,
	0xd1060002, 0x00011103,
	0x7e0602ff, 0x00000200,
	0xbefc00ff, 0x00010000,
	0xbe800077, 0x8677ff77,
	0xff7fffff, 0x8777ff77,
	0x00058000, 0xd8ec0000,
	0x00000002, 0xbf8cc07f,
	0xe0765000, 0x701d0002,
	0x68040702, 0xd0c9006a,
	0x0000f702, 0xbf87fff7,
	0xbef70000, 0xbef000ff,
	0x00000400, 0xbefe00c1,
	0xbeff00c1, 0xb8fb2a05,
	0x807b817b, 0x8e7b827b,
	0x8e76887b, 0xbef600ff,
	0x01000000, 0xbefc0084,
	0xbf0a7b7c, 0xbf84006d,
	0xbf11017c, 0x807bff7b,
	0x00001000, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf850051,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000902, 0x80048104,
	0xd2890001, 0x00000902,
	0x80048104, 0xd2890002,
	0x00000902, 0x80048104,
	0xd2890003, 0x00000902,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000903,
	0x80048104, 0xd2890001,
	0x00000903, 0x80048104,
	0xd2890002, 0x00000903,
	0x80048104, 0xd2890003,
	0x00000903, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0x807c847c, 0xbf0a7b7c,
	0xbf85ffb1, 0xbf9c0000,
	0xbf820012, 0x7e000300,
	0x7e020301, 0x7e040302,
	0x7e060303, 0xe0724000,
	0x701d0000, 0xe0724100,
	0x701d0100, 0xe0724200,
	0x701d0200, 0xe0724300,
	0x701d0300, 0x807c847c,
	0x8070ff70, 0x00000400,
	0xbf0a7b7c, 0xbf85ffef,
	0xbf9c0000, 0xbefc0080,
	0xbf11017c, 0x867aff78,
	0x00400000, 0xbf850003,
	0xb8faf803, 0x897a7aff,
	0x10000000, 0xbf850059,
	0xd3d84000, 0x18000100,
	0xd3d84001, 0x18000101,
	0xd3d84002, 0x18000102,
	0xd3d84003, 0x18000103,
	0xbe840080, 0xd2890000,
	0x00000900, 0x80048104,
	0xd2890001, 0x00000900,
	0x80048104, 0xd2890002,
	0x00000900, 0x80048104,
	0xd2890003, 0x00000900,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000901,
	0x80048104, 0xd2890001,
	0x00000901, 0x80048104,
	0xd2890002, 0x00000901,
	0x80048104, 0xd2890003,
	0x00000901, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0xbe840080, 0xd2890000,
	0x00000902, 0x80048104,
	0xd2890001, 0x00000902,
	0x80048104, 0xd2890002,
	0x00000902, 0x80048104,
	0xd2890003, 0x00000902,
	0x80048104, 0xc069003a,
	0x00000070, 0xbf8cc07f,
	0x80709070, 0xbf06c004,
	0xbf84ffee, 0xbe840080,
	0xd2890000, 0x00000903,
	0x80048104, 0xd2890001,
	0x00000903, 0x80048104,
	0xd2890002, 0x00000903,
	0x80048104, 0xd2890003,
	0x00000903, 0x80048104,
	0xc069003a, 0x00000070,
	0xbf8cc07f, 0x80709070,
	0xbf06c004, 0xbf84ffee,
	0x807c847c, 0xbf0a7b7c,
	0xbf85ffa9, 0xbf9c0000,
	0xbf820016, 0xd3d84000,
	0x18000100, 0xd3d84001,
	0x18000101, 0xd3d84002,
	0x18000102, 0xd3d84003,
	0x18000103, 0xe0724000,
	0x701d0000, 0xe0724100,
	0x701d0100, 0xe0724200,
	0x701d0200, 0xe0724300,
	0x701d0300, 0x807c847c,
	0x8070ff70, 0x00000400,
	0xbf0a7b7c, 0xbf85ffeb,
	0xbf9c0000, 0xbf820106,
	0xbef4007e, 0x8675ff7f,
	0x0000ffff, 0x8775ff75,
	0x00040000, 0xbef60080,
	0xbef700ff, 0x00807fac,
	0x866eff7f, 0x08000000,
	0x8f6e836e, 0x87776e77,
	0x866eff7f, 0x70000000,
	0x8f6e816e, 0x87776e77,
	0x866eff7f, 0x04000000,
	0xbf84001f, 0xbefe00c1,
	0xbeff00c1, 0xb8ef4306,
	0x866fc16f, 0xbf84001a,
	0x8e6f866f, 0x8e6f826f,
	0xbef6006f, 0xb8f82a05,
	0x80788178, 0x8e788a78,
	0x8e788178, 0xb8ee1605,
	0x806e816e, 0x8e6e866e,
	0x80786e78, 0x8078ff78,
	0x00000080, 0xbef600ff,
	0x01000000, 0xbefc0080,
	0xe0510000, 0x781d0000,
	0xe0510100, 0x781d0000,
	0x807cff7c, 0x00000200,
	0x8078ff78, 0x00000200,
	0xbf0a6f7c, 0xbf85fff6,
	0xbef80080, 0xbefe00c1,
	0xbeff00c1, 0xb8ef2a05,
	0x806f816f, 0x8e6f826f,
	0x8e76886f, 0xbef90076,
	0xbef600ff, 0x01000000,
	0xbeee0078, 0x8078ff78,
	0x00000400, 0xbef30079,
	0x8079ff79, 0x00000400,
	0xbefc0084, 0xbf11087c,
	0x806fff6f, 0x00008000,
	0xe0524000, 0x791d0000,
	0xe0524100, 0x791d0100,
	0xe0524200, 0x791d0200,
	0xe0524300, 0x791d0300,
	0x8079ff79, 0x00000400,
	0xbf8c0f70, 0xd3d94000,
	0x18000100, 0xd3d94001,
	0x18000101, 0xd3d94002,
	0x18000102, 0xd3d94003,
	0x18000103, 0xe0524000,
	0x781d0000, 0xe0524100,
	0x781d0100, 0xe0524200,
	0x781d0200, 0xe0524300,
	0x781d0300, 0xbf8c0f70,
	0x7e000300, 0x7e020301,
	0x7e040302, 0x7e060303,
	0x807c847c, 0x8078ff78,
	0x00000400, 0xbf0a6f7c,
	0xbf85ffdb, 0xbf9c0000,
	0xe0524000, 0x731d0000,
	0xe0524100, 0x731d0100,
	0xe0524200, 0x731d0200,
	0xe0524300, 0x731d0300,
	0xbf8c0f70, 0xd3d94000,
	0x18000100, 0xd3d94001,
	0x18000101, 0xd3d94002,
	0x18000102, 0xd3d94003,
	0x18000103, 0xe0524000,
	0x6e1d0000, 0xe0524100,
	0x6e1d0100, 0xe0524200,
	0x6e1d0200, 0xe0524300,
	0x6e1d0300, 0xb8f82a05,
	0x80788178, 0x8e788a78,
	0x8e788178, 0xb8ee1605,
	0x806e816e, 0x8e6e866e,
	0x80786e78, 0x80f8c078,
	0xb8ef1605, 0x806f816f,
	0x8e6f846f, 0x8e76826f,
	0xbef600ff, 0x01000000,
	0xbefc006f, 0xc031003a,
	0x00000078, 0x80f8c078,
	0xbf8cc07f, 0x80fc907c,
	0xbf800000, 0xbe802d00,
	0xbe822d02, 0xbe842d04,
	0xbe862d06, 0xbe882d08,
	0xbe8a2d0a, 0xbe8c2d0c,
	0xbe8e2d0e, 0xbf06807c,
	0xbf84fff0, 0xb8f82a05,
	0x80788178, 0x8e788a78,
	0x8e788178, 0xb8ee1605,
	0x806e816e, 0x8e6e866e,
	0x80786e78, 0xbef60084,
	0xbef600ff, 0x01000000,
	0xc0211bfa, 0x00000078,
	0x80788478, 0xc0211b3a,
	0x00000078, 0x80788478,
	0xc0211b7a, 0x00000078,
	0x80788478, 0xc0211c3a,
	0x00000078, 0x80788478,
	0xc0211c7a, 0x00000078,
	0x80788478, 0xc0211eba,
	0x00000078, 0x80788478,
	0xc0211efa, 0x00000078,
	0x80788478, 0xc0211a3a,
	0x00000078, 0x80788478,
	0xc0211a7a, 0x00000078,
	0x80788478, 0xc0211cfa,
	0x00000078, 0x80788478,
	0xbf8cc07f, 0xbefc006f,
	0xbefe0070, 0xbeff0071,
	0x866f7bff, 0x000003ff,
	0xb96f4803, 0x866f7bff,
	0xfffff800, 0x8f6f8b6f,
	0xb96fa2c3, 0xb973f801,
	0xb8ee2a05, 0x806e816e,
	0x8e6e8a6e, 0x8e6e816e,
	0xb8ef1605, 0x806f816f,
	0x8e6f866f, 0x806e6f6e,
	0x806e746e, 0x826f8075,
	0x866fff6f, 0x0000ffff,
	0xc00b1c37, 0x00000050,
	0xc00b1d37, 0x00000060,
	0xc0031e77, 0x00000074,
	0xbf8cc07f, 0x866fff6d,
	0xf8000000, 0x8f6f9b6f,
	0x8e6f906f, 0xbeee0080,
	0x876e6f6e, 0x866fff6d,
	0x04000000, 0x8f6f9a6f,
	0x8e6f8f6f, 0x876e6f6e,
	0x866fff7a, 0x00800000,
	0x8f6f976f, 0xb96ef807,
	0x866dff6d, 0x0000ffff,
	0x86fe7e7e, 0x86ea6a6a,
	0x8f6e837a, 0xb96ee0c2,
	0xbf800002, 0xb97a0002,
	0xbf8a0000, 0x95806f6c,
	0xbf810000, 0x00000000,
};
