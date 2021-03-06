// The key here is properly formatted for easy import to BCRYPT.

// All bigint values (mod, exp, prime 1, prime 2) are big-endian. So it should
// be straightforward to use these buffers with crypto suites other than BCrypt.

#define PPID_KEY_EXPONENT_INITIALIZER 0x00, 0x01, 0x00, 0x01

#define PPID_KEY_MODULUS_INITIALIZER \
    0xa9, 0xeb, 0xd5, 0xf3, 0x9f, 0x39, 0x46, 0x8b, \
    0xd8, 0x46, 0xb3, 0x28, 0x65, 0x25, 0x30, 0x4e, \
    0x28, 0x7d, 0x5d, 0x46, 0xef, 0x12, 0x79, 0x92, \
    0xd2, 0x46, 0x2a, 0x90, 0xff, 0x45, 0xbf, 0x76, \
    0x1c, 0x8b, 0x54, 0xf9, 0x66, 0x67, 0x93, 0x29, \
    0x8e, 0xb2, 0x2e, 0x5a, 0x99, 0x4b, 0x2b, 0xec, \
    0x9b, 0x8f, 0x2d, 0x90, 0xe4, 0xf5, 0x52, 0x25, \
    0x18, 0xc1, 0xd8, 0x3c, 0x2c, 0xa5, 0x57, 0x70, \
    0x70, 0x11, 0xc6, 0xb2, 0x3f, 0x1d, 0x59, 0x33, \
    0xb1, 0x85, 0x85, 0x7f, 0x9b, 0x55, 0x9e, 0x91, \
    0xa7, 0xa4, 0x7a, 0x70, 0x7a, 0xee, 0xb5, 0xad, \
    0xdb, 0x45, 0x3d, 0xfb, 0xd9, 0xd8, 0xc1, 0x91, \
    0xb3, 0x61, 0x90, 0x0c, 0x09, 0xea, 0xe0, 0x49, \
    0xae, 0x1c, 0x3f, 0xb6, 0x1a, 0xc9, 0xdb, 0x37, \
    0x08, 0x19, 0xc9, 0x50, 0x29, 0x52, 0xb1, 0x0a, \
    0x1c, 0x68, 0x71, 0xe5, 0xb5, 0xea, 0x4e, 0x46, \
    0x99, 0x76, 0x7e, 0xb0, 0x6b, 0x1c, 0x7f, 0xc7, \
    0x05, 0x07, 0xf0, 0x05, 0x19, 0xbe, 0x38, 0x92, \
    0x41, 0x0e, 0x75, 0x53, 0xab, 0xad, 0xcc, 0x8a, \
    0x61, 0x3b, 0x4f, 0x02, 0xe1, 0x9b, 0x2f, 0x47, \
    0xe1, 0x7d, 0x96, 0x60, 0xd3, 0xc1, 0xe3, 0x82, \
    0x97, 0x5b, 0x8f, 0x73, 0xbf, 0xa7, 0x67, 0xf6, \
    0x0a, 0x30, 0xff, 0x8b, 0x66, 0x2d, 0xc1, 0x36, \
    0xec, 0x45, 0x1c, 0xd0, 0x32, 0x7f, 0xfa, 0xa3, \
    0xf8, 0xb5, 0xc4, 0x46, 0x76, 0x2c, 0x5e, 0xb4, \
    0x77, 0xe1, 0xb4, 0x77, 0xc8, 0x58, 0x7f, 0x31, \
    0x5f, 0x64, 0xdc, 0xde, 0xe2, 0x4b, 0x2c, 0xc8, \
    0xba, 0x0a, 0xc8, 0x9f, 0x3e, 0xad, 0x8f, 0xea, \
    0x01, 0x8f, 0x06, 0x42, 0x4a, 0x18, 0x39, 0x36, \
    0x27, 0x83, 0xc7, 0x7f, 0x50, 0x8a, 0x2f, 0xac, \
    0x9d, 0xd4, 0x41, 0x5a, 0x54, 0xf6, 0x2c, 0x3a, \
    0xc7, 0x47, 0x51, 0xb7, 0x29, 0xa9, 0xde, 0xb5

static const uint8_t PPID_KEY_EXPONENT[] = { PPID_KEY_EXPONENT_INITIALIZER };

static const uint8_t PPID_KEY_MODULUS[] = { PPID_KEY_MODULUS_INITIALIZER };

static const uint8_t PPID_KEY[] = {
    0x52, 0x53, 0x41, 0x32, // BCRYPT_RSAPRIVATE_MAGIC
    0x00, 0x08, 0x00, 0x00, // BitLength
    0x04, 0x00, 0x00, 0x00, // cbPublicExp
    0x00, 0x01, 0x00, 0x00, // cbModulus
    0x80, 0x00, 0x00, 0x00, // cbPrime1
    0x80, 0x00, 0x00, 0x00, // cbPrime2

    PPID_KEY_EXPONENT_INITIALIZER,
    PPID_KEY_MODULUS_INITIALIZER,

    // prime 1
    0xd4, 0x53, 0x59, 0xd2, 0x4b, 0x31, 0xc2, 0x31,
    0x55, 0x03, 0xeb, 0x8a, 0xb2, 0x7d, 0x9e, 0xbd,
    0x6f, 0x0f, 0x6a, 0xd9, 0x76, 0x4d, 0xe1, 0xe5,
    0x4c, 0xf7, 0xb8, 0xa5, 0x24, 0x38, 0x96, 0x08,
    0xff, 0x10, 0xaa, 0x63, 0x7f, 0x8a, 0x2b, 0x4f,
    0x15, 0x5d, 0x25, 0xa4, 0x78, 0xcc, 0xff, 0x8b,
    0xfe, 0x71, 0x89, 0x75, 0x6b, 0x72, 0x5f, 0xe8,
    0xef, 0xe8, 0x05, 0xfd, 0x3f, 0x6d, 0xe4, 0x18,
    0x51, 0x74, 0x14, 0x5a, 0x11, 0xda, 0x58, 0x74,
    0x76, 0x29, 0x44, 0xbf, 0x7c, 0x36, 0x0b, 0xe1,
    0xd3, 0x08, 0x03, 0x90, 0x5f, 0x39, 0xdb, 0xb4,
    0x0f, 0x3b, 0xe7, 0x99, 0x6b, 0xda, 0x98, 0x86,
    0xf8, 0x4e, 0x5d, 0x94, 0xa2, 0xe9, 0xe7, 0xa8,
    0xc3, 0x04, 0x6c, 0x43, 0xc5, 0x02, 0x45, 0xb8,
    0xe4, 0x61, 0x65, 0x3e, 0xa1, 0x0b, 0x3e, 0xa5,
    0x9f, 0xd3, 0xf9, 0xb9, 0xde, 0x4f, 0x6c, 0xd3,

    // prime 1
    0xcc, 0xdf, 0x8d, 0xfe, 0x45, 0xdd, 0x80, 0x12,
    0xa4, 0xc1, 0x80, 0x0f, 0xa1, 0x66, 0xe6, 0x61,
    0x5f, 0x3c, 0x16, 0xf5, 0x01, 0xd2, 0xbb, 0x09,
    0xc8, 0x82, 0x52, 0x81, 0x51, 0xde, 0x4c, 0x3a,
    0xc0, 0x3a, 0xd4, 0xe2, 0x99, 0xbe, 0x70, 0xde,
    0x0f, 0x51, 0x28, 0xa0, 0x27, 0x48, 0x65, 0xf6,
    0x59, 0x8c, 0xc5, 0x8e, 0x75, 0x23, 0xea, 0x23,
    0x09, 0xe5, 0x41, 0xcf, 0x50, 0x63, 0x37, 0x70,
    0x34, 0x44, 0xd0, 0x1a, 0x05, 0x00, 0xbe, 0x01,
    0xf5, 0x04, 0x5c, 0x15, 0x33, 0x0d, 0x90, 0x18,
    0xbd, 0x8c, 0x3e, 0xe4, 0x9c, 0x06, 0x8d, 0x98,
    0xdb, 0xc3, 0x4d, 0xe7, 0xb5, 0xa5, 0x14, 0xde,
    0xa7, 0x9d, 0xdf, 0x07, 0x03, 0x16, 0xa7, 0x83,
    0x49, 0xa8, 0x9e, 0x31, 0x01, 0xe1, 0x55, 0x30,
    0xb3, 0x89, 0x9c, 0x2e, 0x98, 0x4e, 0x81, 0xb4,
    0x1d, 0xaf, 0x6e, 0x73, 0xa7, 0x1a, 0xb1, 0x57
};


