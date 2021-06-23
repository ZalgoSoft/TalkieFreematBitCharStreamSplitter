#include <Arduino.h>
#include "Talkie.h"
const uint8_t aida[] PROGMEM = {0x08,0x00,0xba,0x0a,0x01,0x80,0x47,0x20,0x00,0xe8,0x0e,0x57,0x01,0x51,0xe9,0x6e,0x8e,0x11,0x00,0x54,
0x05,0x02,0x80,0x8e,0x70,0x0d,0x13,0x61,0xe6,0x6a,0xc7,0xf9,0xc0,0x94,0x69,0xba,0x1d,0x04,0x00,0x15,
0x8e,0x00,0x60,0xca,0x11,0x00,0x74,0xd8,0x90,0xac,0x93,0x8c,0x66,0x3a,0x4b,0xb2,0x4e,0x2a,0x4b,0x94,
0x1e,0xd1,0x1b,0x8b,0x6a,0xa5,0x76,0xc4,0xa0,0x2c,0xb2,0x54,0xea,0xa1,0x83,0xb3,0x98,0x50,0xa6,0x87,
0x0e,0x21,0x22,0x8a,0x5c,0x1f,0x3a,0x04,0xb7,0x48,0x76,0x7b,0xe8,0x10,0x4d,0x2a,0x28,0xdd,0xa6,0x0e,
0x19,0x6d,0x8b,0x0d,0x35,0x3d,0x44,0x8c,0xc1,0xd1,0x1c,0xf7,0x12,0x87,0x08,0x31,0x38,0x4a,0xea,0x1d,
0xc2,0x87,0x92,0x2c,0xae,0x3b,0x08,0x59,0xc3,0x2a,0x35,0x6e,0xa1,0x94,0x59,0xd7,0x8c,0x24,0x89,0xa6,
0x61,0x23,0xd2,0x2c,0x27,0x86,0x86,0xce,0x0c,0x17,0xe5,0x18,0xb8,0xdd,0x2a,0x55,0x76,0x61,0x8c,0xe5,
0xaa,0x36,0x33,0x8b,0x8c,0x46,0x22,0xd7,0x92,0x1c,0xdc,0x1b,0x4f,0x5f,0x71,0x76,0xf0,0xe0,0x23,0xb2,
0x49,0xde,0x21,0x62,0x88,0xa8,0x41,0x6b,0x87,0x88,0x2e,0x3c,0x16,0xed,0x1c,0x22,0xba,0x0a,0x5f,0x54,
0x7c,0x89,0x43,0x44,0x1f,0x9e,0x0b,0x76,0x0f,0x11,0x9d,0x7b,0x0e,0xda,0x3b,0x44,0xd4,0x91,0x51,0x14,
0xe7,0x10,0x51,0x7a,0x55,0x91,0xb3,0x45,0x04,0x1e,0xd3,0x49,0xad,0x1b,0xc1,0xca,0x95,0x87,0xd7,0x29,
0x04,0xab,0x33,0x91,0x1a,0x77,0x10,0x9e,0xf6,0x5e,0x72,0xd9,0x41,0x04,0x5a,0x7b,0x4e,0x4d,0x17,0x11,
0x68,0xec,0x18,0x67,0x5d,0x44,0xa4,0xb6,0x53,0xe2,0xf5,0x10,0x91,0xe9,0x4c,0x71,0xd6,0x45,0x44,0xae,
0x3b,0x89,0xd9,0x16,0x11,0x85,0xee,0x3a,0x76,0x5d,0x78,0xe4,0xb6,0x97,0xec,0x76,0xe1,0x91,0xd9,0xce,
0x9a,0xdb,0x85,0x35,0xc6,0xd5,0x2b,0xc9,0x0e,0x56,0xa8,0x4e,0xb5,0xb4,0x5b,0x58,0x25,0xb6,0xd5,0xdc,
0x6e,0x61,0x89,0xfa,0x56,0x73,0xbb,0x8d,0x6d,0x6c,0x61,0x89,0xda,0x76,0x49,0xdb,0x85,0x07,0x61,0x3b,
0x29,0x6d,0x06,0xe9,0x64,0x6c,0xa7,0xa4,0x1e,0xb4,0x95,0xbe,0xdb,0xec,0x7a,0xd0,0x81,0xd9,0xec,0x88,
0x93,0x41,0x05,0x6e,0x3b,0xe3,0x4e,0x16,0xe5,0xb9,0xed,0x96,0x2a,0x19,0x74,0xe0,0xba,0x37,0xec,0x7a,
0xd2,0x8b,0x0e,0x5c,0x77,0x5b,0x9d,0x6c,0x7a,0xd3,0x9b,0x5e,0x74,0xe0,0x3a,0x33,0x26,0x77,0xd1,0x91,
0xcb,0x4c,0x99,0x92,0x43,0x47,0x2e,0xd3,0x63,0x72,0x17,0x1d,0x05,0x77,0xaf,0xb1,0x5d,0x94,0x97,0xd6,
0xdd,0xaa,0xe6,0xd0,0x41,0x5a,0x57,0x99,0x9c,0x43,0x07,0x6d,0x59,0xa5,0x52,0x0e,0x1d,0x1c,0xe7,0x94,
0xca,0x1d,0xb4,0x71,0x9e,0x3d,0x9c,0xa4,0xd1,0x3c,0x45,0x45,0x7a,0xb2,0x46,0x8b,0x18,0xd1,0xe5,0xce,
0x1a,0x1d,0x9c,0x5b,0x84,0xc7,0x2d,0x74,0xb2,0x2e,0x91,0x66,0xd7,0x51,0xde,0x78,0x44,0x9a,0x6d,0x43,
0x07,0x1d,0xe9,0x21,0x71,0x0d,0x1d,0x95,0x65,0xba,0x3a,0x56,0xb4,0x57,0x56,0xe9,0x66,0xc7,0xd0,0x51,
0x98,0x45,0xaa,0x14,0x43,0x27,0xa1,0xe6,0x6d,0x56,0x1c,0x9d,0xb9,0x99,0xb7,0x5b,0x75,0x54,0xe1,0xe6,
0x5e,0x1e,0xc5,0xd1,0x95,0x9b,0xd9,0x98,0x55,0x43,0x05,0xee,0x9e,0xe5,0x72,0x0c,0x9d,0xb8,0x85,0x57,
0x58,0x55,0x74,0x52,0xe6,0xde,0x2e,0x57,0xd0,0xde,0x58,0x54,0x9b,0x5d,0x41,0x19,0x1b,0xe9,0x15,0x4a,
0x04,0xad,0x5c,0xb5,0x45,0xc4,0x11,0xb4,0x36,0x51,0x1e,0xa1,0x44,0x50,0x4e,0x57,0x64,0x98,0x52,0x06,
0x34,0xe7,0x76,0x28,0xaf,0xad,0xb3,0x2b,0xf1,0xa1,0x9c,0xd6,0xae,0x4e,0xa7,0x87,0x0e,0x5a,0xaa,0x2a,
0xe5,0x1e,0x3a,0x2a,0xae,0xce,0xb0,0x73,0xe8,0x20,0xa5,0xab,0xc3,0xee,0x22,0x83,0xd0,0xc9,0x0e,0xb5,
0x8b,0x88,0x42,0x27,0x56,0xbc,0x2c,0x22,0x48,0x9b,0x18,0xce,0x7a,0x88,0x20,0x6c,0xa2,0xdd,0xed,0x21,
0xa2,0xd4,0xce,0x31,0x75,0x8b,0x88,0x4a,0xab,0x57,0xdc,0x2d,0xc2,0x9a,0x2a,0x6f,0x6d,0x9b,0x18,0xad,
0x6b,0xbc,0x25,0x6d,0x20,0x32,0x97,0x8e,0x11,0x65,0x8d,0x28,0xd2,0xdc,0xaa,0xec,0x1e,0x22,0x3a,0xf7,
0x5c,0x96,0x7b,0x88,0x10,0xc2,0xb3,0xd1,0xf5,0x21,0xa2,0x6b,0xb3,0x16,0xd5,0x87,0x88,0xae,0x4d,0xca,
0x5c,0x1f,0x22,0xba,0x76,0x1e,0x75,0x7c,0x88,0x10,0xca,0xb5,0x39,0xce,0xc0,0x6d,0x0b,0xf7,0x10,0xa7,
0x85,0x72,0x6a,0x42,0x33,0x92,0x26,0xa2,0xb2,0x0a,0xcd,0x90,0x9d,0xf0,0x28,0x3b,0x3c,0xcd,0x49,0x22,
0x8b,0x8c,0xd0,0x30,0xc7,0x89,0xa8,0xd6,0x55,0x2a,0xec,0x06,0x22,0x98,0x30,0x99,0x88,0x13,0x88,0x54,
0x4b,0x24,0xc5,0x71,0x21,0xd2,0x0b,0xf6,0x34,0xbb,0x8d,0x74,0xd5,0x44,0x7a,0x92,0x2e,0x42,0xd7,0x50,
0xab,0x8e,0xba,0x08,0x9d,0xdb,0x45,0x3b,0xce,0x22,0x8c,0x5f,0x75,0x6d,0xbb,0x8b,0x30,0x61,0xc5,0xad,
0x63,0x2f,0xdc,0xd6,0x16,0xb5,0x8e,0xba,0x30,0xd7,0x5a,0x38,0xda,0xfa,0xc2,0x7c,0x6d,0x91,0x4c,0xeb,
0x0b,0x0b,0x75,0x45,0x2a,0xcc,0x0f,0xcc,0x97,0x11,0xa9,0x34,0x3e,0x31,0x03,0x84,0x7c,0xb2,0xb0,0x90,
0x87,0x65,0x9d,0xfe,0xc0,0x7d,0x29,0xd6,0x33,0x65,0x0d,0x0f,0x72,0x13,0x2b,0x95,0x28,0xa0,0xc8,0x71,
0x07,0x84,0xb0,0xe2,0x80,0x94,0x4e,0x1d,0x90,0xca,0xb2,0x03,0x72,0x3c,0x76,0x40,0x4e,0x4b,0x1e,0x30,
0x40,0x2a,0x45,0x03,0xd7,0x61,0xcc,0xa6,0xe2,0x34,0x82,0xc7,0x6d,0xf3,0x6e,0xda,0x08,0xe1,0x7b,0x2d,
0xc6,0xee,0x22,0x8c,0xee,0xee,0x8c,0xa4,0x83,0xe0,0x71,0x2b,0x23,0xe3,0x2e,0x42,0xeb,0xee,0x8a,0xa8,
0x7d,0x88,0xc0,0xa3,0xa3,0xb4,0xee,0x22,0x22,0xa9,0xe9,0xb4,0xb8,0x0b,0x0f,0xb4,0x67,0x9c,0xdb,0x2e,
0xdc,0x8b,0x9a,0x0e,0x69,0xbc,0xf0,0xc0,0x6b,0xaa,0x78,0xf1,0x21,0x22,0x8b,0xae,0x14,0x4f,0x87,0x48,
0xa2,0x2a,0x4d,0xd5,0x1c,0xa2,0x8a,0x98,0x4c,0x96,0x73,0x88,0xa8,0x6b,0xc2,0x49,0xe9,0x22,0x82,0xef,
0x0e,0x25,0xb5,0x87,0x88,0xba,0x27,0x9c,0xd9,0x1c,0x32,0xc9,0x9a,0x70,0x61,0x73,0xc9,0x43,0x44,0x13,
0x95,0x4e,0xee,0x36,0xbe,0xf0,0x68,0xa2,0x2b,0x50,0xdd,0x21,0xa2,0x8b,0x2e,0x43,0xa5,0x87,0x88,0xaa,
0x2a,0x93,0xd4,0x1e,0x22,0xea,0xea,0x70,0x52,0x76,0x88,0x60,0xaa,0xdd,0xd8,0xdd,0x89,0x82,0xae,0x36,
0x15,0xa5,0x87,0x88,0xaa,0xda,0x4d,0x98,0x1e,0x22,0xca,0xea,0x74,0x51,0x7b,0x88,0xa0,0xa2,0x2a,0x59,
0xeb,0x21,0x82,0x8e,0x4a,0x57,0x37,0x87,0x08,0xc6,0xab,0x5c,0x92,0x1c,0xc2,0x9b,0xaa,0x74,0x49,0x7a,
0x88,0x20,0xab,0xc2,0xd5,0xed,0x21,0xa2,0xae,0x0e,0x55,0xbb,0x87,0x08,0x2a,0xd2,0xc3,0x9c,0x2e,0xc2,
0xaa,0xce,0x4c,0x4d,0x7a,0xc8,0x20,0x22,0xb3,0x3c,0xf1,0x21,0x83,0x88,0x8a,0x74,0xa7,0x87,0x72,0xb2,
0xda,0xdb,0x93,0x2c,0xca,0x89,0xaa,0x4c,0x4f,0xba,0x28,0x2f,0xaa,0xb3,0x42,0xc9,0xa1,0x82,0x8c,0x8e,
0x10,0x25,0x87,0x0e,0xba,0x3a,0x9c,0x55,0x1f,0x2a,0x9a,0xe8,0x74,0x52,0x7d,0xc8,0xa8,0xab,0x3c,0x49,
0xf5,0x21,0xa2,0xaf,0xca,0x00,0x27,0x0b,0xf7,0x69,0x52,0x1d,0x93,0x0d,0xc2,0x96,0x0a,0x77,0x4a,0xd6,
0x68,0xaf,0x26,0xdd,0xc5,0x69,0x21,0xa2,0xae,0x88,0x50,0xbb,0x04,0x88,0xae,0x2a,0x91,0xd1,0x54,0x46,
0x8a,0xed,0x44,0x24,0x19,0xe9,0xe9,0x8e,0x03,0x15,0x95,0xa7,0x97,0xd8,0x0e,0x64,0x94,0x11,0x11,0xe6,
0x64,0xe0,0x31,0x96,0x62,0x4e,0xdc,0x81,0xfb,0xdc,0x22,0xe3,0x72,0x16,0x11,0xf2,0x88,0x8c,0x31,0x5e,
0x44,0xcc,0x45,0xb5,0xa4,0x64,0x11,0xa9,0x14,0xe5,0xa2,0x9a,0x4d,0x2c,0x22,0x95,0xa0,0x5a,0x74,0xba,
0x89,0x45,0xc4,0x1c,0x54,0x4b,0x6a,0x16,0x11,0x73,0x70,0xae,0x30,0x5d,0x44,0x4c,0xa1,0xbe,0x62,0x79,
0xe0,0x36,0x87,0x66,0x58,0x9c,0x46,0x45,0xeb,0x1e,0xee,0x51,0x1a,0x5d,0x74,0x64,0xb8,0x3b,0x1e,0x78,
0xaa,0xe1,0xaa,0x16,0x67,0xd0,0xd5,0x97,0x9b,0xa9,0xd3,0x45,0x9a,0x12,0xaa,0xd1,0xd9,0x16,0xa1,0x4a,
0xab,0x45,0x26,0x59,0x84,0x4a,0x15,0x6e,0x9e,0x64,0x11,0xaa,0x94,0x6b,0x54,0x9a,0x45,0x98,0x52,0xa6,
0x91,0x89,0x17,0xee,0x6a,0x89,0x45,0xd4,0x59,0x98,0x6f,0xc3,0x1a,0x1e,0x6f,0x61,0xa1,0xb7,0x78,0x98,
0x15,0x03,0xc4,0xe9,0x7c,0xb0,0x50,0x43,0xbc,0xd5,0xce,0xc1,0x62,0x34,0xaf,0x66,0x7b,0x07,0x8f,0x2a,
0xaa,0x52,0xdc,0x2c,0x5c,0xb9,0x9a,0x0e,0x75,0x5b,0x28,0xda,0xb7,0x2d,0xc2,0x69,0xa3,0x59,0xea,0xf6,
0x2a,0xab,0x8d,0xe1,0xbe,0x23,0x36,0xa3,0x0e,0x5a,0xb8,0x4a,0x9f,0x8a,0x37,0x68,0x1f,0x29,0xbb,0xc3,
0xde,0xa4,0x17,0xed,0x23,0xf9,0x94,0x5b,0x5b,0x74,0x88,0xac,0x53,0x1e,0xef,0xd0,0x31,0x28,0x75,0x5b,
0xdc,0x43,0x47,0xe7,0x94,0xad,0xd1,0x2e,0x75,0xa8,0x14,0x9c,0xab,0x24,0xda,0xa5,0x0e,0x9d,0x93,0x53,
0xb6,0x58,0x3b,0x74,0x8a,0x46,0xd9,0x1c,0xef,0xd0,0x29,0x2a,0x57,0x49,0xb4,0x43,0xa7,0xe0,0x9c,0x2d,
0xf6,0x0e,0x95,0x42,0x50,0x16,0x3b,0xbd,0xf4,0xa1,0x53,0x34,0xaa,0xe6,0x64,0x87,0x4e,0xc1,0x29,0x8b,
0x93,0x1e,0x3a,0x06,0xa5,0x2e,0x49,0xb6,0xe8,0x98,0x58,0x36,0x25,0xd9,0xa0,0x7d,0x50,0xed,0xd4,0x64,
0x83,0xd6,0xb6,0xac,0xc6,0x92,0x0d,0x2e,0xe9,0x60,0x6b,0x4d,0xd6,0xe8,0x64,0x42,0x3c,0x3d,0x5a,0xa2,
0xbd,0xaa,0xf0,0xb4,0x64,0x89,0x8e,0xc6,0x34,0xd3,0xe3,0x16,0xaa,0x99,0x50,0x0d,0xb5,0x5b,0xe8,0x62,
0x8d,0x3d,0xdd,0x69,0xa3,0x9b,0x71,0xb1,0x70,0xbb,0x8d,0xee,0x26,0xd4,0x3c,0x6c,0x0b,0x60,0xd8,0xf6,
0x46,0x77,0x57,0xa2,0x1e,0x56,0x1a,0x3d,0x6c,0xab,0x9a,0xdb,0x56,0xc0,0x30,0xab,0x02,0x98,0xaa,0x42,
0x03,0x0a,0x68,0xa6,0x7d,0x90,0xd9,0xb6,0xaa,0x67,0x9c,0xc1,0x64,0x13,0x6e,0xea,0x71,0x9b,0x56,0x7c,
0xa4,0x99,0xca,0x16,0x40,0x33,0x5e,0x06,0x68,0xc6,0xd3,0x00,0x3e,0x74,0x1d,0xda,0xbb,0x4e,0x55,0x77,
0x7a,0x68,0xef,0x3b,0xc9,0xc2,0xe9,0xa5,0x0f,0xed,0x74,0x97,0x58,0xa4,0x5d,0xb4,0xb1,0x9d,0xe2,0x9e,
0x76,0x51,0xc6,0x76,0x89,0x45,0xbd,0x45,0x68,0xdf,0xc5,0x56,0xce,0x16,0x61,0x6d,0x37,0x7b,0xa4,0x3d,
0x84,0x0d,0x9d,0xe4,0x99,0xe4,0x10,0x2e,0x76,0x60,0x76,0xec,0x45,0xf8,0x54,0x8e,0xdd,0x96,0x17,0x11,
0x6a,0x29,0x4e,0x5b,0x5a,0x44,0x1c,0x2e,0x74,0x65,0x75,0x11,0x3a,0x74,0xe1,0xa4,0x93,0x41,0x06,0xe1,
0x27,0x99,0x76,0x07,0x19,0xb8,0x9d,0x55,0x2a,0x3d,0x44,0x50,0x3a,0x35,0xa6,0xee,0x10,0x5e,0x45,0x67,
0x48,0xb3,0x45,0x04,0x19,0x93,0x4e,0x4d,0x16,0x11,0x84,0x4f,0x25,0x2e,0x5e,0x44,0xe2,0xd6,0x95,0xb8,
0xfa,0x10,0x51,0xd8,0x94,0x53,0xeb,0x4b,0x1c,0x22,0x0a,0x9f,0x32,0x6e,0x7a,0x88,0x20,0x63,0xd2,0xa5,
0xe9,0x21,0xbc,0x88,0xa9,0x90,0x26,0x87,0x08,0xbc,0x26,0x4a,0x97,0x2c,0x42,0x84,0xa9,0x88,0x88,0x3b,
0x48,0xe9,0xab,0x23,0x3c,0xee,0x22,0x95,0x99,0xca,0xb2,0x78,0x87,0xf0,0xb2,0x3a,0x4c,0x9b,0x1c,0x3c,
0xc8,0xe8,0x74,0xae,0x7b,0xf0,0x68,0x3c,0x33,0xa8,0xc9,0x21,0x62,0x08,0xf7,0x90,0x38,0x87,0x88,0xc9,
0x2c,0x83,0xd2,0x1e,0x3c,0x96,0x90,0x48,0x8d,0x7b,0xb0,0x58,0x4c,0x2a,0x25,0xde,0xc1,0x53,0x35,0x99,
0xe0,0xa4,0x0e,0xc8,0xd5,0xf9,0x62,0x07,0x4b,0x25,0xa8,0x8a,0x9a,0x39,0x20,0xe7,0xa0,0x8b,0x1d,0x2c,
0x95,0xa0,0x2a,0x6a,0x76,0xb1,0x83,0xa7,0x5c,0x94,0x8d,0x4d,0x0f,0x96,0x4a,0x71,0x15,0x35,0x3d,0x58,
0x4e,0x45,0x39,0xd8,0xd4,0x01,0x35,0x35,0x39,0x20,0x87,0xa2,0x8b,0x2d,0x2c,0x85,0xa0,0x1a,0x6a,0x36,
0xb0,0x18,0x9d,0xa7,0x29,0x7e,0xc3,0x5c,0x36,0xd9,0x92,0x76,0x0d,0x97,0x69,0x35,0x2a,0xe2,0x15,0x42,
0xf9,0xb2,0x6a,0x4f,0xd6,0xe8,0xa4,0x4b,0x2c,0x3d,0xae,0x02,0x8a,0x0d,0x1b,0x44,0xf3,0xe6,0xe1,0x1a,
0x47,0x01,0xcd,0x86,0x0f,0xbc,0x38,0xf7,0x50,0x4f,0xd2,0x88,0x62,0xdc,0x3c,0xcd,0xa9,0x02,0x9a,0xf5,
0x10,0x40,0xf3,0xe1,0x02,0x68,0xce,0xbc,0x10,0xcd,0x85,0x79,0xa8,0x5d,0x06,0x34,0x17,0xce,0x80,0xe6,
0x23,0x08,0xd0,0x7d,0x19,0x01,0x9a,0x2f,0x27,0x40,0xf3,0xe1,0x81,0x6a,0x36,0xdc,0x5d,0xed,0x20,0xa0,
0x19,0x8f,0xc4,0x29,0x1b,0xe9,0x95,0x49,0x0b,0x27,0x5c,0x64,0x74,0xa6,0x4d,0xbc,0xd4,0x95,0x59,0x91,
0x36,0x88,0x41,0x9a,0x45,0x64,0xdc,0xc0,0x73,0x5b,0xd9,0x15,0x49,0x1d,0xc7,0x4d,0x47,0x75,0x34,0x2d,
0x6c,0xc5,0x6e,0x51,0x99,0x6c,0x61,0x51,0x7a,0xd9,0xa6,0xb2,0x85,0xd9,0x18,0x1e,0x13,0xce,0x0c,0x10,
0xaa,0xf3,0xc0,0xe2,0x62,0x8e,0x6d,0x6a,0x03,0xf3,0xdd,0xc5,0x26,0x98,0x19,0x20,0x8c,0x16,0x03,0xc4,
0xb6,0x62,0x80,0x58,0x57,0x1c,0x90,0x6a,0x8b,0x03,0xb2,0x19,0x31,0x40,0xe4,0x53,0x02,0xe8,0x64,0x9c,
0x01,0x99,0x97,0x33,0xa0,0xb0,0x32,0x06,0x14,0x3e,0x4e,0x80,0xc2,0xdb,0x09,0xd0,0x78,0x9b,0x00,0xa2,
0xe8,0x74,0x80,0x57,0xdb,0x0e,0x08,0xba,0xc3,0x01,0x59,0xb5,0x3b,0x20,0xeb,0x76,0x07,0x54,0x3d,0xe1,
0x80,0x6c,0x26,0x1c,0x50,0xed,0x44,0x00,0xaa,0x9b,0x08,0x40,0xf6,0x13,0x0e,0xc8,0x6e,0x32,0x00,0xd5,
0x4e,0x06,0x20,0xbb,0x49,0x07,0x14,0x3b,0xe9,0x81,0x00,0x54,0xb3,0x15,0x81,0x00,0x14,0x33,0xe9,0x80,
0xea,0x36,0x1d,0x50,0xdd,0xa4,0x03,0x8a,0x99,0x0c,0x40,0x31,0x93,0x01,0x28,0x7a,0x32,0x00,0xd5,0x4e,
0x38,0x20,0xbb,0x49,0x07,0x14,0x3b,0xe9,0x80,0x62,0xa6,0x02,0x50,0xcd,0x66,0x04,0x02,0x50,0xf5,0x94,
0x03,0xb2,0xdd,0x34,0x40,0x31,0x5b,0x0e,0xa8,0x76,0xd3,0x01,0xd9,0x6e,0x45,0x20,0x00,0xd5,0x6c,0x3a,
0x20,0xdb,0x2d,0x07,0x54,0xb7,0xe9,0x80,0x62,0xb6,0x1c,0x90,0xed,0x66,0x04,0x02,0x90,0xec,0x45,0x04,
0x1c,0x90,0xdd,0x96,0x03,0xb2,0xbb,0x72,0x40,0xf2,0x97,0x01,0x48,0xee,0xdc,0x03,0x0e,0x48,0x6e,0xc3,
0x01,0xd9,0x6f,0x39,0x20,0xf9,0xcd,0x00,0x64,0x77,0x15,0x80,0x6c,0xb7,0x3c,0x10,0x80,0xaa,0x3a,0x1d,
0x50,0x94,0x85,0x03,0x8a,0x88,0x74,0x40,0x63,0x5e,0x0e,0x28,0x34,0xda,0x01,0x95,0x46,0x7b,0xc0,0x01,
0x95,0xc4,0x18,0x20,0xb1,0x9a,0x85,0x45,0x16,0x33,0xc1,0x5d,0x07,0x66,0x74,0x6f,0x1b,0x77,0x1d,0x84,
0xe7,0xb5,0x55,0xd4,0x79,0x10,0x9e,0xd7,0x76,0x72,0x96,0x41,0x44,0x1a,0xdb,0x4d,0x59,0x16,0x91,0xa8,
0x4d,0x37,0x65,0x5e,0x44,0xe4,0xd6,0xd3,0xd8,0x79,0x11,0x91,0x59,0x77,0x51,0xeb,0x45,0x24,0xea,0x13,
0x89,0xad,0x17,0x91,0x58,0x8c,0x07,0x36,0x3e,0x44,0x66,0x31,0xe6,0x98,0xfa,0x10,0x59,0xd4,0x78,0x90,
0xe3,0x4b,0x1c,0x22,0xc9,0x1a,0x0b,0x8c,0x73,0x88,0xa8,0x6a,0x3c,0xc8,0xde,0x25,0x2e,0x71,0x89,0x45,
0x44,0x1e,0x9d,0x2e,0x49,0x17,0x1e,0x58,0x6d,0x99,0x65,0x3d,0x58,0x62,0xd1,0x13,0x9a,0xc5,0x01,0x51,
0xc4,0x38,0x20,0x09,0x6f,0x07,0x54,0xa1,0x7d,0xb0,0x2c,0xac,0xd6,0x34,0x8d,0x03,0x12,0xf7,0x71,0x40,
0x14,0xbe,0x06,0x08,0xca,0xb7,0x60,0x2a,0x4c,0x9b,0x59,0xdb,0x42,0x7a,0x59,0x9d,0xa1,0x49,0x0a,0x96,
0xa5,0xa7,0x87,0x37,0x4d,0x78,0x92,0x96,0x55,0x1e,0x37,0xe1,0x45,0xa9,0x67,0x5a,0x5a,0x02,0x34,0xa5,
0x11,0x88,0x22,0xd5,0xa3,0xc2,0x31,0x01,0x9a,0xf1,0x0c,0x6c,0x51,0x1e,0x99,0x6e,0x3b,0x11,0x45,0xb9,
0x7b,0xba,0x93,0x84,0x37,0x15,0xee,0xee,0x71,0x05,0x50,0x5c,0x85,0x00,0x9a,0x8d,0x14,0x40,0x77,0x91,
0x0a,0x28,0x36,0x4a,0x00,0xcd,0x46,0x2a,0xa0,0xa9,0x48,0x01,0x74,0x1d,0xa9,0x80,0x6e,0x3d,0x04,0x30,
0xac,0xbb,0x00,0xa6,0x35,0x6f,0xc4,0x50,0x9a,0x1e,0xe6,0xa8,0xb0,0xcd,0x58,0xb8,0x99,0x63,0x02,0x74,
0xed,0xd9,0xd8,0xc8,0xb4,0x33,0xc5,0xf1,0x62,0xac,0x88,0xed,0x66,0x27,0x8b,0xf6,0x3c,0x66,0x4b,0xd4,
0x2c,0xda,0x8a,0xd8,0x4d,0x55,0x3b,0x68,0xc7,0x63,0xb6,0x54,0xcd,0xa6,0x17,0xe5,0x59,0xcd,0x84,0xa8,
0x59,0x74,0x60,0x31,0x9d,0xa2,0xe6,0xd0,0x91,0x7b,0x57,0xb2,0x92,0x43,0x47,0xe9,0xd5,0xc9,0x6a,0x2f,
0x7d,0xe8,0x28,0xbd,0xaa,0x50,0xcd,0xa5,0x17,0x1d,0x55,0x54,0x25,0x68,0x39,0x74,0x54,0xd1,0x95,0xc4,
0xe6,0xd2,0x87,0x8e,0x26,0xba,0x13,0xd5,0x1c,0x3a,0x6a,0xaf,0x0e,0x52,0x7d,0xe8,0xa8,0xb5,0xda,0xc9,
0xcd,0xa5,0x17,0x15,0x95,0x77,0x07,0x29,0x39,0x54,0x52,0xda,0x9d,0xa8,0xe4,0x90,0x51,0x45,0x47,0x90,
0xd2,0x85,0x27,0x1d,0x9d,0x4e,0xea,0x16,0x1e,0x4d,0x4c,0x28,0xbb,0x3b,0x44,0x34,0x35,0xa1,0x94,0xf8,
0x10,0x49,0x55,0x87,0xb1,0xeb,0x43,0x44,0x1d,0x9d,0x4e,0x4e,0x16,0x11,0x55,0x4c,0x28,0x25,0x5d,0x44,
0x90,0x36,0xed,0x94,0x65,0x91,0x41,0xd8,0x74,0x88,0xd6,0x45,0x7b,0xe9,0x33,0xae,0xea,0x16,0x1d,0xb8,
0x4e,0x87,0x33,0x5b,0x74,0xe0,0x36,0x63,0xc6,0x6e,0xd3,0x9b,0x5e,0x54,0xe0,0x36,0x13,0xea,0xf4,0x90,
0x51,0x68,0x77,0xb2,0x9b,0x45,0x44,0x1d,0x1d,0x46,0xee,0x0e,0x1e,0x5d,0x74,0x06,0x3a,0x39,0x44,0x74,
0x55,0x91,0x94,0xea,0x10,0xc9,0x46,0xb8,0x63,0xe7,0x43,0x24,0x1b,0x95,0x89,0xad,0x0f,0x91,0x8c,0x67,
0x15,0x34,0x3e,0x44,0x34,0x55,0x91,0x98,0xf8,0x10,0xd1,0x56,0x85,0x73,0xe2,0x43,0x46,0x1d,0x15,0xce,
0x49,0x0e,0x15,0x6c,0x54,0x9a,0xb8,0x3e,0x54,0xb4,0x5e,0xe5,0xe2,0xf8,0xd0,0xc9,0x58,0x75,0xb1,0xe2,
0xc3,0x44,0xeb,0x5d,0x45,0xaa,0x17,0x1b,0x4c,0xb4,0x27,0x39,0x1e,0x7c,0x30,0xd2,0x15,0xe4,0x64,0x08,
0x5e,0x7b,0x46,0x52,0x92,0xc5,0x07,0x5d,0xe5,0xa9,0x8a,0x17,0x1f,0x4c,0x54,0x96,0x28,0x5e,0x42,0xb0,
0x5e,0x15,0xec,0x64,0x09,0xd1,0x48,0x56,0x92,0xeb,0x2d,0x2e,0x21,0x68,0xcb,0x28,0x91,0xbb,0xf8,0x60,
0x2d,0xab,0x59,0xc9,0xe1,0x82,0xb1,0xcc,0x56,0xd6,0x8b,0x0f,0xc6,0x32,0x9b,0xed,0x6e,0x61,0x08,0xc1,
0xaa,0x47,0x71,0x92,0x21,0x44,0xc7,0x5e,0x49,0x6e,0x07,0x1f,0x1c,0x57,0xbb,0xb8,0x6e,0xbc,0x09,0x16,
0xed,0xea,0xb8,0xf0,0xd2,0x7b,0x74,0x4a,0xda,0x26,0x7a,0xe1,0x1e,0x95,0x4e,0x9b,0x58,0x45,0x84,0x86,
0x3a,0x11,0x40,0xb1,0xde,0x0c,0x28,0x26,0xa2,0xf0,0x4d,0x7b,0xba,0x6b,0x52,0x05,0x34,0x1b,0xa9,0x80,
0x66,0x22,0x15,0xd0,0x55,0xb8,0x02,0x5a,0x70,0x57,0xc0,0x70,0xe1,0x0a,0x58,0xd6,0x53,0x01,0xd3,0xbb,
0x2b,0x60,0x79,0x4f,0x01,0x2c,0xef,0x2e,0x80,0x15,0x22,0x04,0xb0,0x9c,0xb9,0x04,0x04,0x30,0x8d,0x59,
0xa3,0xba,0xf4,0xb0,0xd0,0xc6,0x81,0x2c,0x2a,0xdc,0xc2,0x13,0x07,0xb2,0x28,0x33,0x0b,0x77,0x32,0x88,
0x2c,0x62,0x26,0x25,0x71,0x00,0xb2,0xa8,0x0e,0x40,0x12,0x31,0x01,0xa8,0x3c,0x26,0x00,0x85,0xd5,0x38,
0x20,0xeb,0x6a,0x03,0x24,0xdd,0x6d,0x01,0x03,0x44,0xdd,0xe5,0x80,0x2c,0xbb,0x1d,0x10,0xf5,0x94,0x05,
0x0c,0x90,0x4c,0x97,0x01,0xa2,0xee,0x36,0x40,0x92,0x31,0x06,0x48,0xca,0xc7,0x00,0x49,0xc6,0x18,0x20,
0xa9,0x6e,0x0f,0x38,0x20,0x9b,0xe8,0x00,0x54,0x1d,0x15,0x80,0xac,0xaa,0x02,0x50,0x95,0x57,0x04,0x02,
0x90,0x79,0x8c,0x03,0x82,0x8a,0x1d,0x98,0xd5,0xbd,0x1e,0xb6,0xc6,0x00,0x5e,0xd4,0x0e,0x2c,0xf0,0xda,
0x70,0x69,0x3b,0x30,0x2f,0x7b,0xdd,0x75,0xe9,0xc2,0x02,0xaf,0xf5,0xe0,0xb6,0x0b,0x8b,0x22,0xd6,0x9d,
0xdb,0x1d,0x3c,0x0a,0xef,0x0c,0x6a,0x1b,0x80,0xa4,0xa3,0x0f,0x16,0x4d,0x95,0x19,0x37,0xbd,0xd8,0xc1,
0xa2,0x99,0x36,0xa3,0x34,0x07,0x4b,0xa6,0xc7,0x1d,0xdd,0x2c,0x2c,0xba,0x19,0x77,0x70,0x73,0xb0,0x64,
0x67,0xc2,0xd1,0x49,0x00,0xb2,0x9e,0x09,0x40,0xd2,0xdd,0x07,0x8b,0x6e,0x3a,0x9c,0x5c,0x1f,0x2c,0xe9,
0xee,0x08,0x72,0x7d,0xb0,0xa4,0xbb,0xdd,0x31,0xcd,0xc5,0x02,0x50,0x55,0x77,0x00,0xb2,0xea,0x3e,0x58,
0x32,0xd3,0xe6,0x94,0xf8,0x62,0x17,0x0f,0x40,0xd2,0xdd,0x11,0x08,0x40,0xd2,0x3d,0x07,0x4b,0xba,0xdb,
0x9c,0x5c,0x5f,0xec,0x60,0xd1,0x4e,0xab,0x51,0x92,0x83,0x55,0xd9,0x6d,0xc1,0x4e,0x22,0x70,0xb0,0xa4,
0x7a,0x34,0x30,0xe9,0xc1,0x93,0xea,0x61,0xa7,0x34,0x0e,0x88,0xba,0xdb,0x01,0x49,0x77,0x3b,0xa0,0xca,
0x2a,0x03,0x64,0x11,0xa5,0x00,0x6f,0x23,0x1b,0xee,0x9d,0xe7,0x94,0x64,0x15,0x40,0xd0,0x95,0x03,0x8b,
0x36,0x32,0x42,0xe3,0x36,0x2c,0xe8,0x08,0x2f,0x4b,0x5a,0xf0,0xa2,0x3c,0x23,0x34,0x72,0xc1,0x8a,0x8e,
0x8c,0x34,0xdb,0x04,0x28,0x3a,0x22,0x61,0x45,0x79,0x45,0x98,0x1d,0x02,0x34,0x63,0x4e,0x80,0x6e,0xc2,
0x09,0xd0,0x54,0x04,0x01,0x8a,0x0d,0xa3,0x40,0xc0,0x8b,0x09,0xb3,0x8c,0xd8,0x08,0xa8,0x26,0x02,0x01,
0x55,0x78,0x22,0xa0,0xca,0x48,0x43,0x57,0xe9,0x69,0xa1,0x71,0x0c,0x5d,0xa4,0x85,0x87,0xd9,0x35,0x6c,
0x91,0x1e,0x96,0x96,0xd8,0x00,0x21,0x0d,0x3b,0x20,0xa4,0x25,0x07,0xa4,0x70,0x6a,0x80,0xdc,0x9a,0x1c,
0x50,0xf3,0x92,0x01,0x6a,0x3c,0x35,0x40,0x89,0xc7,0x16,0x70,0x40,0xb1,0x27,0x1e,0x70,0x40,0x89,0xc7,
0x06,0x28,0x61,0xd9,0x00,0x25,0x2d,0x2b,0x20,0xe7,0x25,0x06,0x84,0x5a,0x44,0x80,0xac,0x4f,0x52,0x9b,
0xe5,0x8a,0x14,0xc5,0x41,0x40,0x11,0x63,0x0d,0x4b,0xa6,0xd4,0xaa,0xec,0x1b,0x20,0xda,0x30,0x07,0x44,
0x6f,0xb6,0xf0,0xa4,0x2c,0xa3,0xa3,0x6a,0x00,0x92,0x89,0x08,0x40,0xd6,0x63,0x01,0x48,0x6e,0x2c,0x00,
0xc9,0x8f,0x06,0x20,0xb9,0xb1,0x00,0x24,0x3b,0x19,0x80,0xa2,0xdc,0x06,0xe6,0x6d,0x64,0x17,0xb7,0x4d,
0x84,0x13,0x9b,0x9e,0x69,0x2f,0x51,0x55,0x86,0x7b,0x98,0x5b,0x02,0x14,0x19,0x96,0x88,0xa4,0xc2,0x2b,
0x2d,0x2b,0x03,0xb2,0x0c,0x2f,0x78,0x76,0x11,0x65,0x1a,0x7b,0x60,0x8d,0x59,0x78,0x59,0x9a,0x85,0x45,
0x5a,0x33,0x2b,0x69,0x1c,0x10,0x44,0x8f,0x07,0x1c,0x90,0xb9,0x95,0x03,0x2a,0xf3,0x72,0x40,0x62,0xb1,
0x0e,0xa8,0x34,0x26,0x00,0x99,0x45,0x07,0xa0,0xb2,0xa8,0x08,0x04,0xa0,0xb2,0xe8,0x00,0x64,0x1e,0x15,
0x80,0xca,0xa3,0x22,0x10,0x81,0x08,0x38,0x20,0x8b,0x28,0x0f,0x04,0x20,0x89,0xa8,0x08,0x04,0xa0,0x8a,
0xc8,0x08,0x04,0x20,0x8b,0xa8,0x08,0x04,0xa0,0xf0,0xa8,0x08,0x44,0x20,0x00,0x59,0x44,0x05,0xa0,0x88,
0xc8,0x00,0x64,0x19,0x15,0x81,0x00,0x54,0x19,0x19,0x80,0x2c,0xa3,0x22,0x10,0x81,0x00,0x64,0x11,0x19,
0x80,0xa4,0x22,0x23,0x10,0x80,0xa4,0x2a,0x03,0x10,0x55,0x87,0x03,0xa2,0x37,0x73,0x40,0x28,0xae,0x06,
0x88,0x83,0xc4,0x00,0xbe,0x3b,0x1b,0xc0,0x8f,0x22,0x07,0x84,0xd1,0xec,0x01,0x03,0x84,0xd9,0x6c,0x01,
0x0b,0x18,0x20,0xb6,0x11,0x03,0xa4,0xde,0xec,0x80,0x54,0x56,0x3c,0xe0,0x80,0x9c,0x57,0x1c,0x90,0x4b,
0xb3,0x07,0x1c,0x90,0xeb,0x88,0x03,0x72,0x6f,0x76,0x40,0xae,0xcd,0x1e,0xd8,0xd8,0xc2,0x72,0x1e,0x8e,
0xa1,0x34,0x0e,0xc8,0xb5,0xd9,0x02,0x1e,0xd8,0x98,0x07,0x0c,0x90,0x6b,0xf1,0xc6,0x16,0x96,0x5b,0x71,
0x35,0xb6,0xd9,0xd8,0xc2,0x72,0x0b,0xae,0xa6,0xb4,0x0b,0xcb,0xb5,0xb8,0x1a,0xd3,0x18,0x20,0xf7,0x60,
0x0f,0x18,0x20,0xb5,0xe2,0x8d,0x6d,0x6c,0x63,0x1b,0x33,0x40,0xaa,0x4d,0x06,0x88,0xbd,0x58,0x01,0x31,
0x37,0x27,0xc2,0x87,0x66,0x5b,0x8b,0x5b,0xe8,0x10,0x8a,0xac,0x33,0x6e,0xe1,0x82,0x29,0xd1,0xf4,0xa4,
0x85,0xf1,0xd9,0xd9,0x2b,0x62,0x0f,0x3a,0x14,0xe3,0x98,0xb0,0xdc,0xe8,0x50,0x45,0xaa,0xdd,0x52,0xa3,
0x55,0x0a,0x89,0x8e,0x38,0x83,0x36,0x31,0x24,0x2b,0x63,0x2f,0x2a,0x64,0xa3,0x5a,0xb7,0xb4,0xe8,0x10,
0x87,0x63,0x4d,0xd6,0xa2,0xa3,0x1b,0xb1,0x31,0xc5,0x8b,0x8e,0x7e,0xd8,0x5a,0x95,0x6c,0x7a,0xd3,0x97,
0x3e,0x54,0x0c,0x23,0xd6,0xae,0x66,0xd1,0x21,0xb6,0xfa,0xb8,0xea,0x41,0xf9,0x14,0x1a,0xed,0xb2,0x13,
0xa3,0x6b,0xb3,0x97,0x58,0x09,0x94,0x0f,0xab,0x9a,0x66,0x3b,0xd0,0xd1,0xae,0x68,0x99,0x13,0x06,0xa4,
0x56,0x52,0x88,0xd0,0x9c,0xb9,0x26,0x59,0x23,0xc2,0x64,0xf6,0x2f,0x3b,0x8d,0x08,0x4b,0x28,0x2e,0x65,
0x0f,0x22,0xf4,0x42,0x99,0x96,0xbb,0xc8,0x90,0x57,0xa9,0x5a,0xf6,0x20,0x62,0x6d,0xa6,0x0b,0x59,0x03,
0x8f,0x23,0xd0,0xcf,0x25,0x0f,0x3c,0xf6,0x22,0x3e,0xb7,0xb5,0x88,0x58,0x87,0x64,0x4a,0xf6,0x22,0x63,
0x5e,0xa2,0x29,0xdb,0x8b,0x88,0xe9,0x14,0x6b,0x64,0x0f,0x22,0xe6,0x11,0xbc,0x94,0x35,0xf0,0xd8,0x86,
0xe9,0x5d,0xd6,0x20,0x62,0x1d,0xa6,0x4b,0xd9,0x8b,0x88,0x65,0x99,0xa7,0x64,0x4f,0x72,0x13,0x8b,0x88,
0x79,0x04,0x37,0x65,0x0f,0x22,0x96,0x61,0xbc,0x92,0xb2,0x88,0x58,0x97,0xf9,0x52,0xf2,0x22,0x62,0x3c,
0xa1,0x0d,0x39,0x9b,0xd8,0xc4,0x22,0x62,0x1d,0xa6,0x4b,0xd9,0x83,0x88,0x75,0x88,0x2f,0xa4,0x2c,0x22,
0xa6,0x65,0xde,0x50,0xb2,0x88,0x54,0x8e,0x69,0x42,0xe9,0x20,0x62,0x5d,0xa2,0x4d,0x25,0x8b,0x88,0x69,
0x85,0x36,0xe5,0x0c,0x22,0x96,0x11,0xbc,0xa4,0x3d,0xf0,0x58,0x56,0xf8,0x42,0xf6,0x20,0x62,0x1d,0x92,
0x73,0xc9,0x8b,0x08,0x69,0x89,0x27,0x6c,0x0d,0x22,0xa6,0x65,0x1a,0x77,0xb2,0x88,0x58,0x86,0x68,0xc2,
0xf6,0x22,0x62,0x6d,0x94,0x0d,0xcb,0x93,0x18,0x44,0x4c,0x4b,0xbc,0x16,0x79,0x10,0xc1,0xae,0x72,0x59,
0x9c,0x41,0x78,0xbf,0x22,0x65,0x55,0x06,0xe1,0x53,0xb3,0x95,0xd6,0x19,0x84,0x8b,0x23,0x5a,0x5e,0xb7,
0x11,0xba,0x94,0x78,0x44,0x9d,0x41,0xd8,0x12,0x12,0xee,0xb3,0x1b,0xe1,0x4a,0xa8,0x5b,0x34,0x4e,0x64,
0xd0,0x6d,0xe6,0x96,0x36,0x11,0x41,0x96,0x47,0x46,0xd2,0x44,0x64,0x19,0xe1,0x66,0x49,0x09,0xd0,0x74,
0x27,0x02,0x8a,0xae,0x70,0x64,0x36,0xe5,0x1e,0xea,0xc4,0x91,0xd5,0x95,0xb9,0xab,0x33,0x04,0x64,0xdf,
0x8a,0x80,0xea,0xda,0x13,0xd1,0x82,0x5b,0x84,0xc7,0x21,0x40,0x53,0x11,0x04,0x18,0xb6,0x94,0x01,0xc3,
0x56,0x30,0x60,0xb8,0x08,0x05,0x34,0x1b,0x21,0x80,0x6e,0x2a,0x04,0xd0,0x6d,0x84,0x00,0x9a,0x8d,0x60,
0x40,0xf1,0x6e,0x04,0x28,0x31,0x1c,0x01,0x25,0x84,0x23,0xa0,0x84,0x70,0x02,0x14,0x57,0x6e,0x80,0xe0,
0x3b,0x8e,0x1a,0x62,0x9b,0x65,0x51,0x39,0x4a,0xc8,0xae,0xd1,0x4e,0xe7,0x48,0x31,0x99,0x44,0x1b,0xed,
0x23,0xc7,0xe8,0xe2,0x63,0xb2,0x97,0x1c,0xa2,0x8b,0xb7,0x2a,0x59,0xb2,0x0f,0x6e,0x5e,0xe2,0xb4,0xc9,
0x3c,0x7b,0xb8,0xab,0xeb,0xa4,0x4b,0x57,0xee,0x6e,0x72,0x92,0xe6,0x95,0x9b,0x57,0x24,0x5e,0x7c,0xd2,
0x5e,0x71,0x2e,0x79,0x09,0xc1,0x46,0xfb,0x8a,0x9c,0x23,0x04,0xeb,0xe5,0xad,0x4a,0xae,0x70,0xf8,0xa0,
0x63,0xbc,0x55,0xf6,0xe6,0x97,0x10,0x74,0x4c,0x96,0xd0,0x1e,0x82,0x17,0x31,0x19,0x4a,0x77,0x89,0x99,
0x6b,0x77,0x0b,0xed,0xc3,0x47,0x66,0x3d,0xa1,0x4a,0x0e,0x1f,0x84,0x76,0x87,0xba,0x5e,0x42,0xe4,0xdc,
0xd3,0xc2,0x66,0x09,0x41,0x68,0x4f,0xb2,0xe2,0x25,0x46,0x6e,0xdd,0x49,0x8a,0x8f,0x10,0xb9,0x76,0x85,
0xa6,0x3a,0x7c,0x60,0xde,0xe3,0xa6,0xf8,0xf2,0x87,0xf7,0xdc,0x7b,0x9c,0xd5,0x2c,0xc1,0x0b,0xef,0x4e,
0x54,0xbd,0x84,0xc0,0xad,0x3b,0x49,0xcd,0x16,0x0e,0x1f,0x58,0x74,0xbb,0x28,0x59,0x7c,0xe0,0x3e,0x65,
0xa2,0x66,0xf1,0x81,0x7b,0x4f,0x10,0xd3,0x2d,0x6c,0x61,0x09,0x81,0x59,0x77,0xb0,0xda,0xc5,0x47,0x66,
0x3d,0x21,0x4c,0x37,0x7f,0xf9,0x25,0x78,0xe1,0xd3,0xce,0x4a,0x97,0x10,0xb8,0x4d,0x27,0x33,0xdd,0xc2,
0x12,0x22,0xb3,0x1e,0x17,0xa6,0x9b,0xdf,0xfc,0x12,0x3c,0xf7,0x9e,0x60,0xa6,0x4b,0x08,0xc2,0x7a,0x82,
0xd5,0x6c,0xe1,0x08,0x81,0x7b,0xb7,0x8b,0x92,0xcd,0x5f,0xfe,0xf2,0x47,0x08,0xc2,0xa6,0x9d,0xd5,0x6c,
0x61,0x0b,0x47,0x08,0xc2,0x7a,0x4c,0x1d,0x2f,0x21,0x08,0xeb,0x75,0x66,0xba,0x84,0x28,0x74,0xc6,0x59,
0xc9,0x12,0xa2,0x90,0xe9,0x24,0x25,0x4b,0x08,0x52,0x67,0x9c,0xd4,0x2e,0x21,0x0a,0x99,0x09,0x52,0xb3,
0xf8,0x20,0x6d,0xda,0x88,0xc9,0xe2,0xa3,0xb0,0x19,0x27,0x36,0x8b,0x0f,0x42,0xa7,0x13,0xb9,0x34,0x41,
0x9a,0xd8,0x52,0xf2,0x1c,0x14,0x23,0x7c,0x32,0x2c,0x55,0xe0,0xbd,0x88,0x4e,0x77,0xdb,0x89,0x8f,0xdc,
0xc3,0xc3,0x9a,0x24,0xbe,0x68,0x37,0x0d,0xb7,0x93,0xc4,0xa6,0x34,0xa2,0x2c,0x49,0xe0,0x93,0xb4,0xf0,
0xf0,0xd8,0x49,0x08,0x32,0x4a,0xdb,0x6c,0x37,0x41,0xaa,0x5e,0x09,0x31,0x3b,0x04,0x2d,0x7b,0x2c,0x34,
0xec,0xe1,0x9c,0x8e,0xd4,0x8e,0xb0,0x8b,0x8f,0xd9,0xb4,0x0b,0xed,0x2d,0x21,0x16,0x97,0x29,0xb4,0xb3,
0xc4,0x98,0x8b,0xab,0xc9,0xee,0x12,0x63,0x2d,0xce,0x92,0xc8,0x8b,0x8f,0xcd,0xa9,0x8b,0xad,0x2c,0x3e,
0x94,0xa6,0x0c,0x8f,0xb2,0x78,0x5f,0x4a,0x2d,0x3c,0xf6,0x10,0xbc,0xaa,0xe4,0xf2,0x38,0x43,0x30,0xa2,
0x5a,0xda,0x63,0x37,0x41,0xc9,0x58,0xad,0x72,0xd4,0x78,0x66,0x6b,0xb4,0xd2,0x4e,0xe2,0x71,0xea,0x8a,
0x4a,0xb7,0x49,0xe4,0xae,0x3c,0x32,0xd2,0x06,0xd1,0xea,0xb0,0x88,0x48,0x1a,0x78,0xa3,0xc3,0xa3,0x2c,
0xe9,0xa2,0x9a,0x12,0xf7,0x31,0xb6,0x01,0x08,0xb2,0x3a,0x00,0x51,0x55,0x06,0xa0,0xca,0xca,0x00,0x64,
0x3d,0xe5,0x80,0xe4,0x37,0x1d,0x90,0xfc,0x84,0x03,0xb2,0x1f,0x77,0x40,0x8e,0x6b,0x0e,0xc8,0x71,0x3d,
0x00,0xc5,0x9e,0x3b,0xa0,0xba,0x0f,0x03,0x54,0xf7,0x69,0x80,0x1c,0x96,0x15,0x90,0x7c,0x91,0x00,0x5c,
0x19,0x35,0x40,0x48,0xa1,0x0e,0x48,0xc9,0x35,0x00,0xd1,0x8e,0x05,0x20,0xdb,0x32,0x07,0x44,0x53,0x1e,
0x80,0xac,0xda,0x23,0x10,0x80,0x24,0x3b,0x02,0x90,0x54,0xa4,0x03,0xa2,0xac,0x5a,0x98,0x57,0x3d,0x96,
0x92,0x6e,0xe1,0x41,0x75,0x79,0x8a,0x3b,0x07,0x24,0x51,0xb5,0xf0,0x28,0xab,0x64,0xb0,0xcd,0xc0,0x82,
0xea,0x94,0xa5,0xd6,0x05,0x53,0x6e,0x33,0x3a,0xdc,0x26,0xca,0xca,0xad,0xc8,0xc8,0x9a,0xf0,0x28,0xaa,
0xbc,0xcd,0x6b,0xc0,0x0b,0x8f,0xf4,0x56,0xb5,0x81,0x2e,0xd2,0xdd,0xc6,0x94,0x06,0xac,0xf0,0x08,0x4b,
0x73,0x97,0xf0,0x28,0x2a,0xad,0x3d,0x69,0xc3,0x8c,0xee,0x4d,0x8f,0x2a,0x0b,0x33,0x66,0x37,0x2c,0xea,
0x2e,0xdc,0xa9,0x69,0xcf,0xac,0x6b,0x00,0x2f,0x27,0x17,0xe6,0x55,0xa7,0x65,0xcd,0x3f,0x58,0xf0,0xa5,
0x9a,0x55,0xcf,0x00,0xb1,0x14,0x19,0x20,0xd6,0x40,0x03,0xc4,0x1e,0x30,0xb0,0xd4,0x03,0xe2,0xa4,0xea,
0xc2,0x52,0x2f,0x88,0x95,0x28,0x06,0x48,0xbd,0xc9,0x00,0xa9,0xac,0x18,0x20,0xe5,0x13,0x03,0xa4,0xb6,
0x38,0xb0,0xd4,0x07,0xed,0xc4,0xea,0xc2,0x62,0x2b,0xf4,0x13,0xab,0x0b,0x8b,0xad,0xc9,0xcf,0xa4,0x1a,
0x20,0xd5,0x25,0x03,0xa4,0xb2,0xb4,0xb0,0x54,0x96,0xe4,0xc5,0xea,0xc2,0x62,0x1d,0xd2,0x53,0x29,0x0b,
0x4b,0x79,0x59,0x5e,0xa4,0x2e,0x2c,0xe5,0x25,0x3d,0xa3,0x6a,0x81,0x85,0xa5,0xb2,0xa4,0x2f,0x72,0x17,
0x16,0xf3,0x90,0x9e,0x58,0x59,0x58,0x4c,0xcb,0x72,0x26,0xdb,0x00,0x31,0x2d,0x2f,0x2c,0xa5,0x25,0x3d,
0x93,0x62,0x01,0x0b,0x2c,0x2c,0xc6,0x65,0x3e,0xb5,0xb3,0xb0,0x98,0x87,0xe4,0xc4,0xca,0xc2,0x62,0x5e,
0xd2,0x67,0xb9,0x06,0xc8,0xf9,0xd8,0x00,0x29,0x1e,0x1b,0x20,0xa5,0x63,0x03,0xa4,0x78,0xb2,0xb0,0x98,
0x96,0xe4,0xd4,0xb6,0x01,0x62,0x5c,0x5a,0x58,0x4a,0x4b,0x72,0x22,0xc7,0x00,0xa9,0x1c,0x6d,0xcc,0x00,
0x29,0x2e,0x2f,0x3c,0x86,0x65,0x3a,0xb5,0xbd,0xb0,0x98,0x86,0xe4,0xc4,0xee,0xc2,0x53,0x5c,0xd2,0x13,
0xb9,0x06,0x48,0xe9,0x48,0x01,0x29,0x1d,0x2d,0x2c,0xa6,0x21,0x3e,0x8b,0xba,0xb0,0x98,0x86,0xf4,0xd4,
0x8a,0x01,0x62,0x1e,0x54,0x40,0x0a,0x4b,0x0a,0x88,0xf1,0xb8,0x61,0xc1,0xbe,0x61,0x5b,0x78,0x01,0x04,
0xf7,0x5a,0x70,0xeb,0x4f,0xa5,0xbd,0x5a,0xc2,0x5c,0x2e,0xca,0x8d,0xa8,0x01,0x0f,0x76,0x44,0x33,0xaa,
0x06,0x22,0xfa,0x16,0x8d,0xac,0x8d,0x80,0xe4,0x57,0x09,0x90,0x74,0x3b,0x02,0x92,0x6b,0x4d,0x78,0xb1,
0x65,0x96,0x6e,0x97,0x00,0xc5,0x94,0x31,0xa0,0xc9,0x08,0x06,0x74,0x15,0xc6,0x80,0x21,0x22,0x18,0xd0,
0x6d,0xb9,0x00,0xba,0x8c,0x14,0x40,0xd7,0x15,0x02,0x18,0xa6,0x8d,0x01,0xc3,0x84,0x31,0x60,0x98,0x52,
0x02,0x74,0x1b,0x86,0x80,0x26,0x4b,0x0d,0x95,0x7d,0xa8,0x9b,0x26,0x33,0x58,0x8a,0x65,0xe1,0x9a,0x24,
0x60,0xd6,0x95,0xed,0xb4,0x5d,0x03,0x04,0xd5,0xee,0x80,0x8a,0xa6,0x1d,0x90,0xc8,0xa4,0x03,0x22,0x5f,
0x77,0x40,0x62,0x63,0x01,0xc8,0xb6,0xd9,0x00,0xa9,0x05,0x1b,0x20,0x95,0x41,0x07,0xa4,0x32,0x64,0x01,
0x03,0xa4,0x72,0x64,0x80,0x94,0x9f,0x0d,0x90,0xdd,0x8b,0x01,0xaa,0x7f,0x35,0x40,0xf5,0x6f,0x16,0x30,
0x40,0x8e,0xcf,0x0e,0x48,0x7e,0xd5,0x00,0xd1,0x8c,0x13,0x20,0x98,0x57,0x02,0x54,0x79,0x41,0x80,0xa2,
0x2e,0x09,0xd0,0x79,0x37,0x03,0x3a,0x9d,0x46,0x40,0xd2,0xeb,0x08,0x28,0xea,0x3c,0xe1,0xd1,0x8c,0x6a,
0x44,0xb2,0x82,0xa9,0xd2,0x16,0x95,0x4e,0x0d,0xe0,0x43,0xb1,0x03,0xa2,0x0b,0x09,0x40,0x34,0x63,0x01,
0xa8,0xba,0x3c,0x02,0x01,0x48,0xda,0xe3,0x60,0x41,0x45,0x76,0xbb,0xb7,0x86,0x3b,0x55,0x9d,0xed,0x6a,
0x0b,0x61,0x4c,0x55,0x67,0xb8,0x5b,0x58,0x91,0x62,0x39,0x2d,0xcf,0x01,0x41,0x45,0x05,0x20,0x99,0xf2,
0x00,0xa4,0xd0,0xea,0x80,0x98,0x9a,0x1d,0x90,0xea,0x90,0x01,0xf2,0x2c,0x32,0x40,0xca,0x27,0x0e,0x48,
0xf9,0xdd,0x01,0x29,0x7c,0x39,0x20,0xc5,0x0f,0x03,0xa4,0xf8,0x6a,0x80,0x94,0x4e,0x1c,0x90,0xdd,0x9b,
0x03,0xb2,0xfd,0x74,0x40,0xb6,0xaf,0x06,0xa8,0xf6,0xd9,0x00,0xd5,0x1f,0x19,0x20,0x87,0x43,0x03,0xd4,
0x70,0x64,0x01,0x03,0xe4,0xb4,0x68,0x80,0x9a,0x0e,0x2d,0x60,0x01,0x03,0xe4,0x78,0x68,0x01,0x03,0xd4,
0x74,0x64,0x80,0x5a,0x06,0x0d,0x50,0xd3,0xa2,0x05,0x1c,0x90,0xc3,0xb1,0x02,0x82,0x5d,0x4e,0xb8,0x8f,
0x41,0xb3,0xea,0x36,0x91,0xd1,0x34,0xfa,0x99,0x13,0x02,0xd4,0x32,0x40,0x80,0x92,0x8e,0x1d,0x90,0x79,
0x94,0x03,0xbc,0xe9,0x72,0x40,0x54,0xd1,0x0e,0x88,0xda,0xca,0x01,0x49,0x45,0x3a,0x20,0x8a,0xca,0x00,
0x64,0x5e,0x19,0x80,0x24,0x2a,0x1d,0x10,0x64,0xe7,0xc1,0x82,0x8a,0xa8,0xa5,0x6c,0x07,0xb3,0xbe,0x32,
0xcb,0xdc,0x2d,0xdc,0xfa,0x48,0xdf,0xb0,0xb7,0xb0,0xa0,0x2b,0xb5,0xba,0xd9,0xc1,0xa2,0xae,0xb0,0xcc,
0x7a,0x01,0x88,0xba,0xe3,0x62,0x17,0x73,0x40,0x2c,0x21,0x07,0x8f,0x2e,0xa4,0xda,0xa4,0x1f,0x3c,0xda,
0xb2,0x08,0xb5,0x17,0x80,0xe8,0x22,0x2e,0x76,0xb0,0x68,0xab,0xcc,0xd9,0xd9,0xc5,0x0e,0x16,0x6d,0x97,
0x0b,0x27,0x73,0x40,0x34,0x5d,0x01,0x48,0xaa,0xea,0x60,0xc1,0x75,0xba,0x73,0xba,0x46,0x98,0xd8,0xee,
0xae,0xe9,0x0a,0x67,0x7c,0xa7,0xb9,0x64,0x2b,0x52,0x34,0x95,0x61,0xec,0x34,0xe1,0xc1,0x4d,0x8a,0x49,
0xd6,0x46,0x27,0x6d,0x1e,0x63,0x4a,0x0e,0x96,0x64,0x44,0x8c,0xaa,0x75,0x40,0x32,0x1b,0x01,0x48,0x61,
0x34,0x00,0x39,0x95,0x38,0xa0,0x14,0x57,0x07,0xd4,0x52,0x1a,0x80,0x9a,0x5a,0x1c,0x50,0x72,0x8b,0x07,
0x22,0x10,0x80,0x92,0x5a,0x02,0x50,0x62,0x68,0x00,0x72,0x98,0x74,0x40,0xd6,0x9b,0x0a,0xf0,0x6a,0x53,
0x00,0xb2,0xb6,0x17,0x4c,0x96,0x8e,0x4e,0x4b,0x66,0x80,0x44,0xab,0x1d,0x10,0x59,0x8d,0x03,0x2a,0xf7,
0x09,0x40,0x55,0x55,0x01,0x48,0x76,0xca,0x01,0xc9,0x6f,0x05,0x20,0xb9,0xc9,0x00,0x64,0x57,0x19,0x80,
0xec,0x3a,0x03,0x90,0xec,0x76,0x00,0xb2,0x9e,0x3a,0x58,0x72,0xdb,0x1e,0xec,0xd8,0x03,0x07,0x8b,0x7e,
0xda,0x82,0x9c,0x1c,0x2c,0x86,0x69,0x4f,0xb2,0xed,0x80,0xe8,0xb6,0x0f,0x16,0xed,0x54,0x1a,0xba,0x3d,
0x78,0x52,0x55,0x99,0xe8,0x74,0x11,0x49,0x55,0x47,0x81,0xdb,0x45,0x64,0x19,0x95,0x03,0x4e,0x0f,0x91,
0x74,0x54,0x15,0x38,0x3b,0x44,0x34,0xd5,0x11,0xe0,0xf4,0x10,0x49,0x55,0x67,0x90,0x9a,0x4b,0x1e,0x22,
0xea,0xea,0x08,0x74,0xba,0x88,0x24,0xa3,0x33,0xd1,0xd9,0x26,0x36,0x71,0x88,0x24,0xbc,0x2b,0xc8,0xcd,
0x22,0x13,0xb7,0xea,0x60,0xcf,0x8b,0x88,0xdc,0x66,0x8a,0xd3,0x2e,0x22,0x72,0x9b,0x0e,0x49,0x37,0xf0,
0xc0,0x7d,0x27,0x34,0xdd,0xc0,0x83,0xb0,0xdd,0x94,0xb6,0x8b,0x08,0xc2,0xe6,0x46,0x3c,0x2f,0x32,0x72,
0xe9,0x5d,0xf5,0x3b,0x89,0x41,0x04,0xae,0x73,0xcd,0x59,0x07,0x11,0x84,0xed,0x15,0xa7,0x1d,0x78,0xe4,
0x32,0xd7,0x9c,0x76,0x11,0x89,0x69,0xef,0xaa,0xd7,0x45,0x24,0x2a,0x3d,0x6b,0xfa,0x06,0x91,0x99,0xf4,
0xae,0xea,0x1d,0x44,0xe4,0x3a,0xb7,0x92,0x75,0x10,0x81,0xdb,0x5e,0x49,0xd6,0x81,0x47,0xae,0xf3,0x23,
0x69,0x07,0x11,0x99,0xcd,0x9e,0xba,0x1d,0x44,0x60,0xbe,0x3b,0xe6,0x6d,0x90,0x99,0xc8,0xec,0xba,0xda,
0x41,0x24,0x26,0xb3,0x2f,0xee,0x06,0x11,0x05,0xdf,0x8d,0x24,0x6d,0x78,0x90,0x7a,0x1b,0xd2,0xb4,0x11,
0xd2,0xf6,0x75,0x6a,0x9b,0x44,0x18,0x55,0xdb,0x4d,0xad,0x03,0x25,0x4d,0x6f,0xa7,0xa4,0x76,0x78,0xe2,
0x5a,0x15,0xd6,0xc8,0x51,0x85,0x49,0x66,0x6a,0xea,0x40,0x16,0x21,0x1e,0x19,0x49,0x02,0x51,0xb9,0x46,
0x4e,0xc4,0x49,0x54,0x77,0xca,0x52,0x11,0x27,0x93,0x0c,0x18,0xce,0xb5,0x10,0x43,0x9b,0x72,0x46,0x1c,
0x06,0x8c,0x10,0xc6,0x80,0xe1,0x42,0x0a,0xd9,0xa5,0x9b,0xb6,0xdb,0x49,0x78,0x33,0x26,0xd6,0xe1,0x24,
0x90,0x4d,0x9b,0x45,0x86,0x1d,0xc7,0x55,0x6d,0x96,0x6d,0x4e,0x1c,0x11,0x95,0x87,0xb7,0xdb,0x31,0x44,
0x54,0x51,0x61,0x16,0xc5,0x30,0xce,0x45,0x58,0xb9,0x95,0xa0,0xb0,0x5a,0xa9,0x29,0x4a,0x83,0x82,0x46,
0xa5,0xa8,0x29,0x8d,0x72,0x90,0xf1,0xa8,0x14,0x13,0x27,0x45,0xa1,0xa9,0x9b,0x43,0xe4,0x0c,0x25,0x31,
0xd9,0x4c,0x62,0x32,0x94,0xc0,0x7d,0x5b,0x48,0xf1,0x90,0x03,0x8f,0x2d,0x43,0x87,0x43,0x0e,0xc2,0xb7,
0x1d,0x65,0x0d,0x39,0x08,0xdb,0x72,0x56,0xbc,0x64,0xaf,0x7c,0x23,0x84,0xd1,0x90,0xbd,0xd6,0x89,0x66,
0x45,0x4b,0xf6,0xca,0xda,0xcb,0xa5,0x0c,0xd9,0x0b,0x8f,0xaa,0xb0,0xd2,0x24,0xe9,0xbd,0x33,0x59,0x8e,
0x53,0x89,0xad,0xc9,0x30,0x25,0x46,0xf1,0x5c,0x27,0xdc,0x9d,0x58,0xa5,0x29,0x4d,0x4b,0x48,0x87,0x9d,
0xc5,0x07,0x5b,0xe3,0xa3,0xb4,0x8f,0x10,0x5c,0x54,0x8c,0xd1,0x3e,0x42,0x70,0x9e,0x31,0xaa,0xe4,0x08,
0xd1,0x5a,0xfa,0x28,0xd3,0x23,0x44,0xeb,0xe5,0x2b,0x4c,0xae,0x70,0xf8,0x68,0xbc,0xa3,0x55,0xf1,0x12,
0x82,0xf1,0xa9,0x12,0xc5,0x4b,0xf0,0xa6,0x26,0x93,0xe5,0x2c,0x21,0xa8,0xda,0x0a,0xa6,0xbd,0x84,0x20,
0x63,0x2a,0x90,0xce,0x10,0x82,0x8c,0xe9,0x00,0x66,0x93,0x5f,0x7c,0x10,0x31,0xed,0xa8,0x64,0xf1,0x4e,
0xd6,0x94,0xa1,0xd3,0xc9,0x0f,0xde,0xf3,0x9a,0x72,0x74,0x3b,0xb8,0x40,0x63,0x2a,0xd1,0xed,0x66,0x37,
0xbb,0xb8,0xc0,0x63,0x2a,0xc0,0xdd,0xe0,0x82,0xf4,0x69,0x03,0x37,0x83,0x8b,0xc2,0xa7,0x1d,0xd4,0x0d,
0x2e,0x88,0x98,0x72,0x70,0x3b,0x38,0x2f,0x62,0xd3,0x20,0xdd,0x64,0x07,0xe7,0x79,0x6c,0x05,0xa4,0x19,
0x9c,0x17,0x31,0xe5,0xe0,0x75,0xf1,0x41,0xf8,0xb4,0x83,0xda,0xc9,0x0d,0x2e,0x72,0x9f,0x0a,0x70,0x3b,
0xb8,0x20,0x62,0x53,0x21,0xed,0x66,0x27,0x37,0xb8,0x20,0x6c,0xca,0xc1,0xcd,0xe0,0x82,0x8c,0x6d,0x03,
0x2d,0x83,0x8b,0xd2,0xb7,0x1c,0x9c,0x0c,0x2e,0x08,0xdf,0x34,0x48,0xb3,0x58,0x2f,0x62,0x4b,0x21,0xed,
0x64,0x27,0x37,0xb8,0x20,0x7d,0xcb,0xc0,0xed,0xe4,0x06,0x17,0xa4,0x9d,0x33,0xb4,0x9d,0xdc,0xe0,0xa2,
0xd0,0x0b,0x85,0xb4,0x83,0x0b,0xd2,0xce,0x14,0xb2,0x0c,0xce,0x2b,0x3f,0x11,0x68,0xdd,0x38,0xeb,0x6a,
0xc5,0x21,0xf5,0xe0,0x8c,0xab,0xe1,0xc4,0xa4,0x8d,0xe3,0xb6,0x57,0x4b,0xa3,0x35,0x4e,0xa8,0x3e,0x0d,
0x0b,0xd7,0x38,0x25,0xeb,0xc4,0x35,0x5a,0xe3,0x68,0x98,0x51,0x73,0xbb,0x85,0xe3,0x6a,0xa6,0x5c,0xe3,
0x24,0x39,0xe8,0xce,0x4c,0x33,0x9d,0x78,0xcf,0x23,0x32,0x33,0x71,0xe2,0x23,0xf3,0x8c,0xf4,0x24,0x41,
0x28,0x52,0xc3,0xc3,0x9d,0x18,0x3e,0xf2,0xc8,0x08,0x8f,0xad,0x78,0xa5,0xab,0xd5,0x23,0x8e,0xe2,0xbd,
0x8c,0x0e,0x0b,0x3b,0x81,0xab,0x4a,0x23,0x3a,0xe4,0x36,0xde,0x29,0xeb,0x58,0x93,0x3d,0x04,0xa7,0xac,
0xab,0x85,0xf1,0xe0,0xbd,0xf1,0xa9,0x44,0x26,0x43,0x08,0x3a,0xb6,0x12,0x59,0x2f,0x31,0x28,0x9b,0x0a,
0x56,0xbd,0xc4,0xa8,0xb5,0xb3,0x59,0xc9,0x10,0x9c,0xb7,0xca,0x22,0xa5,0x83,0x17,0xa6,0x5b,0x4b,0xed,
0x36,0x5e,0xa8,0x5a,0x2b,0xb5,0xda,0x04,0xe6,0x7a,0xb4,0xd5,0x4c,0x12,0x50,0x9e,0xf1,0xa6,0x38,0x81,
0x43,0x75,0xc6,0x52,0xdc,0x26,0x92,0xec,0x1d,0x4f,0xb3,0xbd,0xf0,0x60,0x2d,0xfa,0x2c,0x8e,0x03,0x92,
0xac,0x74,0x40,0x94,0x55,0x0e,0xc8,0x32,0xca,0x01,0x55,0x79,0x3a,0x20,0xaa,0x28,0x07,0x44,0x53,0xed,
0x80,0xa8,0xab,0x23,0xe0,0x80,0x68,0xaa,0x1c,0x10,0x6c,0x97,0x03,0x82,0xaf,0x34,0x80,0x2f,0x11,0x0c,
0x08,0xd1,0x8b,0x01,0xc5,0x8b,0x0b,0xa0,0x15,0x36,0x05,0xb4,0x6a,0x22,0x80,0x96,0xc4,0x18,0x50,0x9c,
0x38,0x02,0xa2,0xf5,0x44,0x40,0x30,0x91,0x0c,0x28,0xda,0x4c,0x00,0xc3,0x97,0x2a,0x60,0xba,0x30,0x05,
0x4c,0x57,0xae,0x01,0x05,0x0c,0x3f,0xa6,0x80,0xe9,0xd6,0x15,0x30,0x5d,0x9b,0x02,0xa6,0xe9,0x50,0xc0,
0xb0,0xe3,0x02,0x68,0xbe,0x0c,0x01,0xdd,0x96,0x20,0xa0,0xe8,0x32,0x06,0xb4,0x3c,0xaa,0x80,0x96,0x5a,
0x06,0xde,0x4c,0xb1,0x8f,0x29,0x51,0x40,0xe8,0x6a,0x06,0x88,0xc5,0xd4,0x00,0xb1,0x04,0x3b,0x20,0x85,
0x96,0x00,0xa4,0xd0,0x1a,0x80,0x98,0xdb,0x0c,0x10,0xcb,0xa8,0x00,0x6c,0xf1,0x48,0x98,0x68,0x65,0xed,
0xd1,0xae,0x11,0xc1,0x6a,0x55,0x46,0xd2,0x86,0xa9,0x50,0x53,0xed,0x49,0x1b,0xa6,0x5c,0x5f,0x96,0xc5,
0x1d,0x98,0x93,0x75,0x99,0x56,0x4d,0x03,0x03,0x33,0xa6,0x37,0xca,0xab,0x4d,0x7c,0x60,0x46,0xf7,0x46,
0x4a,0xbd,0x81,0x59,0x35,0x9b,0x6e,0x75,0x0d,0x10,0x78,0xaf,0x02,0x02,0xab,0x1d,0x58,0x64,0xb1,0x1b,
0x94,0x7d,0x63,0x0b,0x4b,0x2c,0xa6,0x92,0xb2,0x6f,0x7c,0x61,0x49,0x78,0x77,0x42,0xfe,0x85,0x27,0xe9,
0x5d,0x01,0xfd,0x36,0x76,0xb0,0xa8,0xa2,0x4b,0xb1,0xdf,0xc1,0x92,0xaa,0x2a,0x85,0x6c,0x17,0x3b,0x58,
0xd2,0xd5,0xa9,0xd0,0xf5,0x62,0x1b,0xdb,0xf8,0xc6,0x36,0x7e,0xb1,0x83,0x47,0x53,0x9d,0x82,0xe9,0x3c,
0x70,0xb0,0x64,0xaa,0x53,0x21,0xeb,0xc1,0xa2,0xad,0x0e,0x85,0x6e,0x1b,0xdf,0xd8,0xc6,0x3d,0xb0,0x71,
0x0f,0x6c,0x6c,0x63,0x1b,0xdf,0xb8,0x07,0x36,0xb6,0xb1,0x8d,0x6f,0x6c,0x63,0x1b,0xdf,0x98,0x01,0x92,
0xae,0xde,0xd8,0xc2,0x93,0x89,0x09,0x83,0x6d,0x0b,0x8b,0xba,0x3a,0x0c,0xb6,0x1a,0x20,0xa9,0x68,0x0b,
0x6c,0x6c,0x63,0x0b,0x4b,0xda,0x27,0x15,0xba,0x6d,0x6c,0xe1,0x51,0xc5,0xa4,0xc1,0xb6,0x8d,0x6d,0xcc,
0x02,0x1b,0xdb,0xd8,0xc6,0x0c,0x90,0xb4,0x8d,0x01,0xb2,0xd4,0x31,0x40,0x52,0x3e,0x0b,0xcb,0x4a,0xa7,
0x85,0xba,0x19,0xa0,0x28,0x99,0x8d,0x2d,0x2c,0x2a,0x9b,0x52,0xdc,0x66,0x80,0x24,0x65,0x06,0x16,0x94,
0x6d,0x25,0x65,0x6f,0x38,0x4f,0xb3,0x11,0x9a,0xb4,0x10,0x2c,0xcf,0x7a,0x5a,0xdc,0x46,0x48,0x5b,0xdb,
0xa5,0x75,0x1a,0x61,0x74,0xdc,0x94,0xd5,0x99,0x44,0x23,0x84,0xed,0xad,0x96,0xba,0x8d,0x50,0xba,0x37,
0x4a,0xea,0x0e,0xc2,0xca,0xd8,0x19,0xa9,0xbb,0x08,0xaf,0x7c,0xbb,0x2d,0xea,0xc2,0xbd,0x8c,0xa9,0x96,
0x68,0x8b,0x08,0x32,0x3a,0x86,0xeb,0x1d,0x22,0xc8,0x28,0x6f,0x8e,0x7b,0xc8,0x24,0xa3,0xbc,0xd8,0xce,
0x22,0x82,0x8a,0x8a,0xa2,0x78,0x97,0xb8,0xc4,0x25,0x0e,0x11,0x65,0x54,0xa4,0x28,0xbe,0xc4,0x21,0x82,
0xf2,0xca,0xe2,0xb8,0x87,0x88,0xca,0xaa,0x93,0xed,0x1d,0x3c,0x6a,0xeb,0x76,0x76,0x76,0xf0,0xa0,0xbd,
0x2b,0xc4,0xde,0x21,0x82,0x8a,0xce,0x54,0xc7,0x9b,0x58,0x44,0x54,0x5e,0x19,0xe2,0x64,0x11,0x51,0x69,
0x77,0x88,0xbd,0x8d,0x2f,0x22,0x28,0xeb,0x72,0x89,0xb7,0x88,0x28,0xad,0x3b,0x24,0xee,0x22,0x82,0xf2,
0x2e,0xe7,0x24,0x8b,0x88,0xd2,0xaa,0x42,0xec,0x6c,0x62,0x11,0x51,0x5a,0x77,0x89,0xb3,0x4d,0x6c,0x62,
0x10,0x51,0x59,0x77,0x88,0x9d,0x41,0x26,0xa9,0x55,0x29,0x76,0x06,0x11,0xa5,0x75,0xa7,0xd8,0x9d,0xc4,
0xc0,0x83,0xb4,0xa9,0x14,0x67,0x13,0x1f,0x44,0x90,0xd6,0x5d,0x12,0xb7,0x91,0x41,0x59,0x77,0x48,0x92,
0x46,0x44,0x69,0x5d,0x29,0x71,0x1b,0x11,0xa4,0x4d,0xa5,0xda,0x6b,0x78,0x50,0x3e,0x1d,0xe2,0xac,0xe1,
0x51,0xea,0x74,0x8a,0xbd,0x46,0x04,0x69,0x33,0xa5,0x71,0x2b,0x91,0x48,0xa7,0x62,0x2a,0x25,0x49,0x21,
0xbc,0xb2,0xe9,0xb4,0x64,0x85,0xb0,0xda,0xb7,0xcb,0x9c,0x65,0x3c,0x11,0xc6,0xc4,0x76,0x5a,0xdd,0x40,
0x48,0x5b,0x5b,0x29,0x4d,0x02,0xe9,0x54,0x4c,0xb4,0xd4,0x75,0x84,0xb4,0x3d,0x5e,0xd2,0xd4,0x11,0x22,
0x74,0x77,0x69,0x53,0x87,0xf3,0xd8,0x93,0x65,0x49,0x3d,0x6e,0x08,0xe1,0x67,0xbc,0xac,0x8e,0x21,0x84,
0xef,0xb1,0x8a,0xa4,0x8a,0x30,0x21,0x52,0x3b,0xe2,0x2a,0x42,0x27,0x0f,0x9b,0x4a,0xa2,0x70,0x95,0x22,
0xb5,0x23,0xb5,0x22,0x6c,0x0c,0xf7,0xca,0x38,0x82,0x70,0xc9,0xc3,0xd2,0x9d,0x08,0x22,0x44,0x73,0x0f,
0x8f,0x23,0xc8,0x18,0x3d,0x3c,0xc3,0xb6,0xe0,0xa2,0x77,0xf7,0xf2,0xd8,0x82,0x88,0xc1,0x3c,0xdb,0x6d,
0x0b,0x26,0x24,0xf5,0x48,0xb7,0x03,0x20,0xc8,0x94,0xcc,0xcc,0xdd,0x89,0xa0,0x42,0xb2,0x88,0x30,0x27,
0x82,0x0b,0x31,0x3c,0x23,0xe2,0x00,0x08,0xca,0xe7,0x88,0x8c,0xb0,0x2d,0xa8,0x18,0x3c,0x3c,0xdd,0xb5,
0x50,0x42,0x0a,0x8f,0x08,0xdb,0x00,0x20,0xf0,0x10,0xc2,0xab,0xdc,0xca,0x03};
Talkie voice;
void setup() {
    voice.say(aida);
}
void loop() {
}
