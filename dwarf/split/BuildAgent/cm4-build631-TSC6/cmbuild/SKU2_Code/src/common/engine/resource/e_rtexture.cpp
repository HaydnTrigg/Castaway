/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rtexture.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E9888 -> 0x802EA09C
*/
// Range: 0x802E9888 -> 0x802E98C8
ERTexture::ERTexture() {
    // References
    // -> struct [anonymous] __vt__9ERTexture;
}

// Range: 0x802E98C8 -> 0x802E9958
// this: r30
ERTexture::~ERTexture() {
    // References
    // -> class ETextureManager _textureman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__9ERTexture;
}

// Range: 0x802E9958 -> 0x802E9994
// this: r30
void ERTexture::Attach(class ETexture * pTexture /* r31 */) {}

// Range: 0x802E9994 -> 0x802E99DC
// this: r31
void ERTexture::Deallocate() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E99DC -> 0x802E9A78
// this: r30
void ERTexture::Refresh(class EFile * pFile /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E9A78 -> 0x802E9CE4
// this: r30
void ERTexture::LoadFromFile(class EFile * s /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x10
    int nImages; // r0
    int xSize; // r27
    int ySize; // r26
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    void * pImg; // r0
    int i; // r25
    unsigned int pImage; // r24
    int bytesToReadForImageRow; // r23
    int paddedBytesPerRow; // r0
    int y; // r22
    void * pPalette; // r4

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E9CE4 -> 0x802E9D84
// this: r30
void ERTexture::Load(class EFile & s /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
}

// Range: 0x802E9D84 -> 0x802E9D8C
void ERTexture::Load() {}

// Range: 0x802E9D8C -> 0x802EA00C
// this: r30
void ERTexture::LoadFromMemory(unsigned char * pData /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x10
    int xSize; // r27
    int ySize; // r26
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    void * pImg; // r0
    int i; // r25
    unsigned int pImage; // r24
    int bytesToReadForImageRow; // r23
    int y; // r22
    void * pPalette; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802EA00C -> 0x802EA09C
// this: r30
unsigned char ERTexture::IsSafeToDelete() {
    // Local variables
    int p; // r31

    // References
    // -> class ERenderer * _pRend;
}


