/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngctexture.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CF2E8 -> 0x802CF7FC
*/
// Range: 0x802CF2E8 -> 0x802CF32C
// this: r31
ENgcTexture::ENgcTexture() {
    // References
    // -> struct [anonymous] __vt__11ENgcTexture;
}

// Range: 0x802CF32C -> 0x802CF3CC
// this: r30
ENgcTexture::~ENgcTexture() {
    // References
    // -> class ETextureManager _textureman;
    // -> struct [anonymous] __vt__11ENgcTexture;
}

// Range: 0x802CF3CC -> 0x802CF3E0
unsigned char ENgcTexture::Lock() {}

// Range: 0x802CF3E0 -> 0x802CF3F4
void ENgcTexture::Unlock() {}

// Range: 0x802CF3F4 -> 0x802CF408
void ENgcTexture::Invalidate() {}

// Range: 0x802CF408 -> 0x802CF41C
unsigned char ENgcTexture::UpdateBegin() {}

// Range: 0x802CF41C -> 0x802CF430
void * ENgcTexture::UpdateMipLevel() {}

// Range: 0x802CF430 -> 0x802CF444
void * ENgcTexture::UpdatePalette() {}

// Range: 0x802CF444 -> 0x802CF458
void * ENgcTexture::UpdatePaletteDeswizzled() {}

// Range: 0x802CF458 -> 0x802CF46C
void ENgcTexture::UpdateEnd() {}

// Range: 0x802CF46C -> 0x802CF6E4
// this: r30
unsigned char ENgcTexture::Create(const struct ETextureDef & td /* r31 */) {
    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802CF6E4 -> 0x802CF6F8
void ENgcTexture::Select() {}

// Range: 0x802CF6F8 -> 0x802CF704
unsigned int ENgcTexture::GetGXTexFmt() {}

// Range: 0x802CF704 -> 0x802CF70C
void ENgcTexture::FlushImageMemoryRange() {}

// Range: 0x802CF70C -> 0x802CF720
int ENgcTexture::GetTEVStageCount() {}

// Range: 0x802CF720 -> 0x802CF734
int ENgcTexture::GetTEXCount() {}

// Range: 0x802CF734 -> 0x802CF754
void ENgcTexture::ClearTileFlags() {}

// Range: 0x802CF754 -> 0x802CF774
void ENgcTexture::ClearSwizzleFlag() {}

// Range: 0x802CF774 -> 0x802CF794
void ENgcTexture::SetSwizzleFlag() {}

// Range: 0x802CF794 -> 0x802CF7FC
// this: r31
void ENgcTexture::CopyFrameBufferIntoTexture() {}


