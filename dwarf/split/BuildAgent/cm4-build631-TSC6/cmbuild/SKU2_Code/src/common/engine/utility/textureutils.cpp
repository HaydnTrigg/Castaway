/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\textureutils.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F9498 -> 0x802FAAE4
*/
// Range: 0x802F9498 -> 0x802F960C
unsigned char TextureUtils::LoadTexture(unsigned int nResID /* r0 */, class ETexture * pDest /* r28 */, float * pTintColor /* r29 */) {
    // Local variables
    unsigned char bRet; // r30

    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802F960C -> 0x802F9768
class ETexture * TextureUtils::CreateTexture8(const unsigned int * srcPalette /* r29 */) {
    // Local variables
    struct ETextureDef td; // r1+0x10
    class ETexture * pTexture; // r31
    unsigned char bSrcTextureSwizzled; // r30
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned int * destPalette; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802F9768 -> 0x802F9B78
unsigned char TextureUtils::CopyTexture32To8(class ETexture * pSrc /* r27 */, class ETexture * pDest /* r28 */) {
    // Local variables
    class ERTQuantize4D * pQuantizer; // r31
    int pitchX; // r1+0x10
    int pitchY; // r1+0xC
    unsigned int x; // r19
    unsigned int y; // r20
    unsigned char colorArray[4]; // r1+0x8
    unsigned int color; // r7
    unsigned int srcWidth; // r0
    unsigned int srcHeight; // r0
    unsigned int destWidth; // r0
    unsigned int destHeight; // r0
    unsigned char bSrcTextureSwizzled; // r30
    unsigned int * srcPixels; // r0
    unsigned char bDestTextureSwizzled; // r29
    unsigned char * destPixels; // r0
    unsigned int * palette; // r0
    unsigned int paletteSize; // r0
}

// Range: 0x802F9B78 -> 0x802F9E14
unsigned char TextureUtils::CopyTexture8To32(class ETexture * pSrc /* r25 */, class ETexture * pDest /* r26 */, float * pTintColor /* r27 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // r30
    unsigned char bDestTextureSwizzled; // r29
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned int x; // r0
    unsigned int y; // r4
    unsigned int color; // r22
    unsigned int destWidth; // r28
    unsigned char * srcPixels; // r0
    unsigned int * palette; // r0
    unsigned int * destPixels; // r0
    unsigned int srcWidth; // r0
    unsigned int srcHeight; // r5
}

// Range: 0x802F9E14 -> 0x802FA0B4
unsigned char TextureUtils::CopyTexture32To32(class ETexture * pSrc /* r24 */, class ETexture * pDest /* r25 */, float * pTintColor /* r26 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // r31
    unsigned char bDestTextureSwizzled; // r30
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned int x; // r0
    unsigned int y; // r11
    unsigned int srcWidth; // r29
    unsigned int srcHeight; // r28
    unsigned int destWidth; // r27
    unsigned int * srcPixels; // r0
    unsigned int * destPixels; // r0
    unsigned int color; // r12
}

// Range: 0x802FA0B4 -> 0x802FA2DC
unsigned char TextureUtils::CopyTexture8To8(class ETexture * pSrc /* r30 */, class ETexture * pDest /* r31 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // r25
    unsigned char bDestTextureSwizzled; // r24
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned int y; // r23
    unsigned int srcWidth; // r22
    unsigned int srcHeight; // r21
    unsigned int destWidth; // r20
    unsigned int * srcPixels; // r0
    unsigned int * destPixels; // r0
    unsigned int * srcPalette; // r20
    unsigned int * destPalette; // r0
}

// Range: 0x802FA2DC -> 0x802FA5A8
unsigned char TextureUtils::CopyTexture32To32Half(class ETexture * pSrc /* f0 */, class ETexture * pDest /* f1 */, unsigned char nAlphaThreshold /* r28 */, unsigned int nReplacementColor /* r29 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // f16
    unsigned char bDestTextureSwizzled; // f15
    int pitchX; // r1+0x14
    int pitchY; // r1+0x10
    unsigned int srcHeight; // r14
    unsigned int destWidth; // r31
    unsigned int destHeight; // f12
    unsigned int index; // r30
    unsigned int * largePixels; // r0
    unsigned int * smallPixels; // r0
    unsigned int j; // r6
    unsigned int * row1; // r7
    unsigned int * row2; // r8
    unsigned int i; // r0
    unsigned int newPixel; // r11
}

// Range: 0x802FA5A8 -> 0x802FA6D0
void TextureUtils::VerticalFlip(class ETexture * pSrc /* r25 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // r31
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned char * pixels; // [invalid]
    unsigned int rowSize; // r30
    unsigned char * rowSwap; // r29
    unsigned char * row1; // r28
    unsigned char * row2; // r27
    int rowCount; // r26
}

// Range: 0x802FA6D0 -> 0x802FA8DC
void TextureUtils::MakeTextureSepiaTone(class ETexture * pSrc /* r22 */) {
    // Local variables
    unsigned char bSrcTextureSwizzled; // r29
    int pitchX; // r1+0x14
    int pitchY; // r1+0x10
    void * rawPixels; // r28
    unsigned int * origPixels32; // r0
    unsigned short * origPixels16; // r0
    unsigned char * origPixels8; // r0
    unsigned int offset; // r31
    unsigned char origColorArray[4]; // r1+0xC
    unsigned char sepiaColorArray[4]; // r1+0x8
    unsigned int nWidth; // r27
    unsigned int nHeight; // r26
    unsigned int nDepth; // r25
    unsigned int y; // r24
    unsigned int x; // r23
}

// Range: 0x802FA8DC -> 0x802FA9AC
void TextureUtils::ConvertColorArrayToSepia() {
    // Local variables
    unsigned char tVal; // r0
}

// Range: 0x802FA9AC -> 0x802FAA08
unsigned char TextureUtils::PrepareTextureForUpdateBegin() {
    // Local variables
    unsigned char bSwizzled; // r31
}

// Range: 0x802FAA08 -> 0x802FAA2C
void TextureUtils::PostUpdateEnd() {}

// Range: 0x802FAA2C -> 0x802FAAE4
unsigned int TextureUtils::BlendPixels32() {
    // Local variables
    unsigned int newTemp; // r6
    unsigned int oldTemp; // r3
    unsigned int blendTemp; // r0
    unsigned char red; // r8
    unsigned char green; // r4
    unsigned char blue; // r10
}


