# TalkieFreematBitCharStreamSplitter
Contribute tool for 
https://github.com/going-digital/Talkie

https://github.com/ArminJo/Talkie

https://github.com/going-digital/Talkie/tree/master/Talkie/encoder/freemat

When you convert on Freemat wav file to firmware you get ling bit sequence like 

`101000101010111101011010101110110010101011000101001001000111001001011010110011110001`

This tool converts it to format like

`const uint8_t input1[] PROGMEM = {0x45,0xf5,0x5a,0xdd,0x54,0xa3,0x24,0x4e,0x5a,0xf3,0x08,0x8f,0x9a,0x14,0x69,0x2a,0x32,0xcc,0xce,0x62,`

Executable included, built against NET4.0
