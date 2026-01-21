/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngctextureutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D15E8 -> 0x802D1CC8
*/
// Range: 0x802D15E8 -> 0x802D16B0
void ENgcTextureUtil::SwizzleToRGB5A3(unsigned char * image /* r23 */, unsigned char * dest /* r24 */) {
    // Local variables
    int columns; // r30
    int rows; // r29
    int twidth; // r28
    int r; // r27
    int c; // r26
    unsigned char * src; // r25
}

// Range: 0x802D16B0 -> 0x802D1768
void ENgcTextureUtil::SwizzleToC4(unsigned char * image /* r20 */, unsigned char * dest /* r21 */) {
    // Local variables
    int kTilesInX; // r29
    int kTilesInY; // r28
    int kPitch; // r27
    unsigned char * source; // r26
    int y; // r25
    int x; // r24
    unsigned char * dst; // r23
    int row; // r22
}

// Range: 0x802D1768 -> 0x802D1820
void ENgcTextureUtil::SwizzleToC8(unsigned char * image /* r20 */, unsigned char * dest /* r21 */) {
    // Local variables
    int kTilesInX; // r29
    int kTilesInY; // r28
    int kPitch; // r27
    unsigned char * source; // r26
    int y; // r25
    int x; // r24
    unsigned char * dst; // r23
    int row; // r22
}

// Range: 0x802D1820 -> 0x802D19B4
void ENgcTextureUtil::SwizzleToRGBA8() {
    // Local variables
    int columns; // r7
    int rows; // r5
    unsigned char * src; // r8
    unsigned char * dst; // r6
    int r; // r9
    int c; // r10
    unsigned char * pDst; // r11
    unsigned char * pSrc; // r12
    int i; // r0
}

// Range: 0x802D19B4 -> 0x802D1A7C
void ENgcTextureUtil::SwizzleFromRGB5A3(unsigned char * dest /* r23 */, unsigned char * image /* r24 */) {
    // Local variables
    int columns; // r30
    int rows; // r29
    int twidth; // r28
    int r; // r27
    int c; // r26
    unsigned char * src; // r25
}

// Range: 0x802D1A7C -> 0x802D1B34
void ENgcTextureUtil::SwizzleFromC8(unsigned char * dest /* r20 */, unsigned char * image /* r21 */) {
    // Local variables
    int kTilesInX; // r29
    int kTilesInY; // r28
    int kPitch; // r27
    unsigned char * source; // r26
    int y; // r25
    int x; // r24
    unsigned char * dst; // r23
    int row; // r22
}

// Range: 0x802D1B34 -> 0x802D1CC8
void ENgcTextureUtil::SwizzleFromRGBA8() {
    // Local variables
    int columns; // r7
    int rows; // r5
    unsigned char * src; // r3
    unsigned char * dst; // r8
    int r; // r9
    int c; // r10
    unsigned char * pDst; // r11
    unsigned char * pSrc; // r12
    int i; // r0
}


