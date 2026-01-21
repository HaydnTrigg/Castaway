/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\skincompositor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800424D8 -> 0x8004337C
*/
// Range: 0x800424D8 -> 0x80042538
// this: r31
SkinCompositor::SkinCompositor() {}

// Range: 0x80042538 -> 0x80042590
// this: r30
SkinCompositor::~SkinCompositor() {}

// Range: 0x80042590 -> 0x80042680
// this: r30
void SkinCompositor::Reset(unsigned short nDestSize /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80042680 -> 0x80042688
void SkinCompositor::CreateSkinQuadrantHiRes() {}

// Range: 0x80042688 -> 0x80042690
void SkinCompositor::CreateSkinQuadrantLoRes() {}

// Range: 0x80042690 -> 0x800427B8
unsigned char SkinCompositor::CreateSkinQuadrantPrecomposited(class ERTexture * pSimPartsTexture /* r28 */, unsigned int nResID /* r29 */, unsigned char bHighRes /* r30 */) {
    // Local variables
    class ERTexture * pRTexture; // r31
    struct ETextureDef td; // r1+0x8
    unsigned char bRet; // r30

    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x800427B8 -> 0x8004282C
// this: r30
void SkinCompositor::CreateSkin(class CasSimDescription & simDesc /* r31 */) {
    // References
    // -> unsigned short gSimPartsMapSizeMultiplier_Game;
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
}

// Range: 0x8004282C -> 0x800428DC
// this: r30
void SkinCompositor::InitScratchpadTextures(unsigned short destSize /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x800428DC -> 0x8004296C
// this: r30
void SkinCompositor::InitSkinTexture() {
    // Local variables
    class ETexture * skinTexture; // r31

    // References
    // -> unsigned short gSimPartsMapSizeMultiplier_Game;
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
}

// Range: 0x8004296C -> 0x8004299C
void SkinCompositor::FinalizeSkinTexture() {}

// Range: 0x8004299C -> 0x80042BF4
// this: r31
void SkinCompositor::LoadAllTextureLayers(const class CasSimDescription & simDesc /* r26 */) {
    // Local variables
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    unsigned char bSwizzled; // r29
    unsigned int * destPixels; // r0
    unsigned char bBaseTextureSwizzled; // r28
    struct TextureBlendInfo textureBlendInfo[16]; // r1+0x10
    unsigned int nNumTattoos; // r0
    unsigned int i; // r27
    unsigned int numParts; // r0
    unsigned int i; // r27

    // References
    // -> unsigned char s_fullAlphaValue;
}

// Range: 0x80042C28 -> 0x800432C0
// this: r15
void SkinCompositor::BlendTexture(const struct TextureBlendInfo & textureBlendInfo /* r16 */) {
    // Local variables
    class TRect quadrantRect; // r1+0x38
    class ERTexture * blendTexture; // f19
    class ERTexture * reflectionMaskTexture; // f18
    unsigned char * reflectionMaskNewPixels; // f17
    unsigned int * reflectionMaskPalette; // r25
    int pitchX; // r1+0x34
    int pitchY; // r1+0x30
    unsigned int baseWidth; // r0
    unsigned int copyWidth; // r1+0x2C
    unsigned int copyHeight; // r1+0x28
    unsigned int blendWidth; // r1+0x24
    unsigned int blendHeight; // r1+0x20
    unsigned int reflectionWidth; // r1+0x1C
    unsigned int reflectionHeight; // r1+0x18
    unsigned int x; // r24
    unsigned int y; // r14
    unsigned int baseOffset; // r23
    unsigned int blendOffset; // r7
    unsigned char pixelAlphaValue; // r22
    unsigned char bBlendMapIsPalettized; // r21
    unsigned char bReflectionMaskIsPalettized; // r20
    unsigned char bReflectionMaskTextureSwizzled; // f7
    unsigned char bBlendTextureSwizzled; // f6
    unsigned int blendPixelValue; // r19
    unsigned int basePixelValue; // r18
    void * blendPixels; // r0
    unsigned int * blendPalette; // r17

    // References
    // -> unsigned char s_fullAlphaValue;
    // -> class ETextureManager _textureman;
    // -> unsigned short gSimPartsMapSizeMultiplier_Game;
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
}

// Range: 0x800432C0 -> 0x8004337C
// this: r27
void SkinCompositor::GetFinalReflectionMask() {
    // Local variables
    unsigned short x; // r30
    unsigned short y; // r29
    unsigned int offset; // r28
    unsigned char colorArray[4]; // r1+0x8
}


