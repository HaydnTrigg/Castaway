/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simtexturepart.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004B798 -> 0x8004BD4C
*/
// Range: 0x8004B798 -> 0x8004B808
// this: r30
SimTexturePart::SimTexturePart() {
    // References
    // -> struct [anonymous] __vt__14SimTexturePart;
}

// Range: 0x8004B808 -> 0x8004B88C
// this: r30
SimTexturePart::~SimTexturePart() {
    // References
    // -> struct [anonymous] __vt__14SimTexturePart;
}

// Range: 0x8004B88C -> 0x8004B8DC
// this: r30
void SimTexturePart::Init(enum eSimPartsMapLocation nQuadrantNumber /* r31 */) {}

// Range: 0x8004B8DC -> 0x8004B948
void SimTexturePart::GetSkinTextureDef() {
    // References
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
    // -> unsigned short gSimPartsMapSizeMultiplier_Game;
}

// Range: 0x8004B948 -> 0x8004BC10
// this: r31
void SimTexturePart::Create(const char * szBaseName /* r25 */, unsigned char bHighRes /* r26 */) {
    // Local variables
    struct ETextureDef td; // r1+0x18
    class CasSimDescription & simDesc; // r29
    unsigned int nResID; // r28
    unsigned int nResIDDuplicateIndex; // r27
    class EString strNewName; // r1+0x10
    unsigned int nFreeUnreferencedResourcesCount; // r26
    class ETexture * pTexture; // r26

    // References
    // -> class EGraphics * _pGfx;
    // -> class ETextureManager _textureman;
}

// Range: 0x8004BC10 -> 0x8004BCF0
// this: r31
void SimTexturePart::Composite() {
    // Local variables
    class SkinCompositor skinCompositor; // r1+0x8
    unsigned int nResID; // r0
}

// Range: 0x8004BCF0 -> 0x8004BD3C
// this: r31
void SimTexturePart::Deallocate() {
    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x8004BD3C -> 0x8004BD4C
// this: r5
class ERTexture * SimTexturePart::SwapChangingData() {
    // Local variables
    class ERTexture * pOldTexture; // r0
}


