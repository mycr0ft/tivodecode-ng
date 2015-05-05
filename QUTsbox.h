/*
 * 8->32 Sbox generated by Millan et. al. at Queensland University of
 * Technology. See: E. Dawson, W. Millan, L. Burnett, G. Carter,
 * "On the Design of 8*32 S-boxes". Unpublished report, by the
 * Information Systems Research Centre,
 * Queensland University of Technology, 1999.
 */
WORD Qbox[256] = {
    0x1faa1887,   0x4e5e435c,   0x9165c042,   0x250e6ef4,
    0x5957ee20,   0xd484fed3,   0xa666c502,   0x7e54e8ae,
    0xd12ee9d9,   0xfc1f38d4,   0x49829b5d,   0x1b5cdf3c,
    0x74864249,   0xda2e3963,   0x28f4429f,   0xc8432c35,
    0x4af40325,   0x9fc0dd70,   0xd8973ded,   0x1a02dc5e,
    0xcd175b42,   0xf10012bf,   0x6694d78c,   0xacaab26b,
    0x4ec11b9a,   0x3f168146,   0xc0ea8ec5,   0xb38ac28f,
    0x1fed5c0f,   0xaab4101c,   0xea2db082,   0x470929e1,
    0xe71843de,   0x508299fc,   0xe72fbc4b,   0x2e3915dd,
    0x9fa803fa,   0x9546b2de,   0x3c233342,   0x0fcee7c3,
    0x24d607ef,   0x8f97ebab,   0xf37f859b,   0xcd1f2e2f,
    0xc25b71da,   0x75e2269a,   0x1e39c3d1,   0xeda56b36,
    0xf8c9def2,   0x46c9fc5f,   0x1827b3a3,   0x70a56ddf,
    0x0d25b510,   0x000f85a7,   0xb2e82e71,   0x68cb8816,
    0x8f951e2a,   0x72f5f6af,   0xe4cbc2b3,   0xd34ff55d,
    0x2e6b6214,   0x220b83e3,   0xd39ea6f5,   0x6fe041af,
    0x6b2f1f17,   0xad3b99ee,   0x16a65ec0,   0x757016c6,
    0xba7709a4,   0xb0326e01,   0xf4b280d9,   0x4bfb1418,
    0xd6aff227,   0xfd548203,   0xf56b9d96,   0x6717a8c0,
    0x00d5bf6e,   0x10ee7888,   0xedfcfe64,   0x1ba193cd,
    0x4b0d0184,   0x89ae4930,   0x1c014f36,   0x82a87088,
    0x5ead6c2a,   0xef22c678,   0x31204de7,   0xc9c2e759,
    0xd200248e,   0x303b446b,   0xb00d9fc2,   0x9914a895,
    0x906cc3a1,   0x54fef170,   0x34c19155,   0xe27b8a66,
    0x131b5e69,   0xc3a8623e,   0x27bdfa35,   0x97f068cc,
    0xca3a6acd,   0x4b55e936,   0x86602db9,   0x51df13c1,
    0x390bb16d,   0x5a80b83c,   0x22b23763,   0x39d8a911,
    0x2cb6bc13,   0xbf5579d7,   0x6c5c2fa8,   0xa8f4196e,
    0xbcdb5476,   0x6864a866,   0x416e16ad,   0x897fc515,
    0x956feb3c,   0xf6c8a306,   0x216799d9,   0x171a9133,
    0x6c2466dd,   0x75eb5dcd,   0xdf118f50,   0xe4afb226,
    0x26b9cef3,   0xadb36189,   0x8a7a19b1,   0xe2c73084,
    0xf77ded5c,   0x8b8bc58f,   0x06dde421,   0xb41e47fb,
    0xb1cc715e,   0x68c0ff99,   0x5d122f0f,   0xa4d25184,
    0x097a5e6c,   0x0cbf18bc,   0xc2d7c6e0,   0x8bb7e420,
    0xa11f523f,   0x35d9b8a2,   0x03da1a6b,   0x06888c02,
    0x7dd1e354,   0x6bba7d79,   0x32cc7753,   0xe52d9655,
    0xa9829da1,   0x301590a7,   0x9bc1c149,   0x13537f1c,
    0xd3779b69,   0x2d71f2b7,   0x183c58fa,   0xacdc4418,
    0x8d8c8c76,   0x2620d9f0,   0x71a80d4d,   0x7a74c473,
    0x449410e9,   0xa20e4211,   0xf9c8082b,   0x0a6b334a,
    0xb5f68ed2,   0x8243cc1b,   0x453c0ff3,   0x9be564a0,
    0x4ff55a4f,   0x8740f8e7,   0xcca7f15f,   0xe300fe21,
    0x786d37d6,   0xdfd506f1,   0x8ee00973,   0x17bbde36,
    0x7a670fa8,   0x5c31ab9e,   0xd4dab618,   0xcc1f52f5,
    0xe358eb4f,   0x19b9e343,   0x3a8d77dd,   0xcdb93da6,
    0x140fd52d,   0x395412f8,   0x2ba63360,   0x37e53ad0,
    0x80700f1c,   0x7624ed0b,   0x703dc1ec,   0xb7366795,
    0xd6549d15,   0x66ce46d7,   0xd17abe76,   0xa448e0a0,
    0x28f07c02,   0xc31249b7,   0x6e9ed6ba,   0xeaa47f78,
    0xbbcfffbd,   0xc507ca84,   0xe965f4da,   0x8e9f35da,
    0x6ad2aa44,   0x577452ac,   0xb5d674a7,   0x5461a46a,
    0x6763152a,   0x9c12b7aa,   0x12615927,   0x7b4fb118,
    0xc351758d,   0x7e81687b,   0x5f52f0b3,   0x2d4254ed,
    0xd4c77271,   0x0431acab,   0xbef94aec,   0xfee994cd,
    0x9c4d9e81,   0xed623730,   0xcf8a21e8,   0x51917f0b,
    0xa7a9b5d6,   0xb297adf8,   0xeed30431,   0x68cac921,
    0xf1b35d46,   0x7a430a36,   0x51194022,   0x9abca65e,
    0x85ec70ba,   0x39aea8cc,   0x737bae8b,   0x582924d5,
    0x03098a5a,   0x92396b81,   0x18de2522,   0x745c1cb8,
    0xa1b8fe1d,   0x5db3c697,   0x29164f83,   0x97c16376,
    0x8419224c,   0x21203b35,   0x833ac0fe,   0xd966a19a,
    0xaaf0b24f,   0x40fda998,   0xe7d52d71,   0x390896a8,
    0xcee6053f,   0xd0b0d300,   0xff99cbcc,   0x065e3d40,
};
