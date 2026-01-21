/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\lzsscompressor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F8690 -> 0x802F91DC
*/
// Range: 0x802F8690 -> 0x802F8830
static void InsertNode() {
    // Local variables
    int i; // r30
    int p; // r0
    int cmp; // r29
    unsigned char * key; // r28
    int match_length'93; // r6

    // References
    // -> static int match_position;
    // -> static unsigned short * dad;
    // -> static int match_length;
    // -> static unsigned short * rson;
    // -> static unsigned short * lson;
    // -> static unsigned char * text_buf;
}

// Range: 0x802F8830 -> 0x802F8950
static void DeleteNode() {
    // Local variables
    int q; // r4

    // References
    // -> static unsigned short * lson;
    // -> static unsigned short * rson;
    // -> static unsigned short * dad;
}

// Range: 0x802F8950 -> 0x802F8F18
int LZSSCompressor::Encode() {
    // Local variables
    int i; // r3
    int len; // r27
    int r; // r26
    int s; // r25
    int last_match_length; // r24
    int code_buf_ptr; // r23
    unsigned char code_buf[17]; // r1+0x8
    unsigned char mask; // r22

    // References
    // -> static int match_position;
    // -> static int match_length;
    // -> static unsigned short * dad;
    // -> static unsigned short * rson;
    // -> static unsigned short * lson;
    // -> static unsigned char * text_buf;
    // -> static unsigned long codesize;
    // -> static unsigned long textsize;
    // -> static unsigned char gIsOutBufferFull;
    // -> static unsigned char * gOutBufferEnd;
    // -> static unsigned char * gOutBuffer;
    // -> static unsigned char * gInBufferEnd;
    // -> static unsigned char * gInBuffer;
}

// Range: 0x802F8F18 -> 0x802F91DC
int LZSSCompressor::Decode(unsigned char * outBuffer /* r30 */) {
    // Local variables
    int i; // r3
    int j; // r8
    int k; // r10
    int r; // r4
    int c; // r7
    unsigned int flags; // r0

    // References
    // -> static unsigned char * text_buf;
    // -> static unsigned long codesize;
    // -> static unsigned long textsize;
    // -> static unsigned char gIsOutBufferFull;
    // -> static unsigned char * gOutBufferEnd;
    // -> static unsigned char * gOutBuffer;
    // -> static unsigned char * gInBufferEnd;
    // -> static unsigned char * gInBuffer;
}


