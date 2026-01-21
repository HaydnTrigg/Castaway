/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngctexturec8_32.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D0C14 -> 0x802D12E8
*/
// Range: 0x802D0C14 -> 0x802D0CA8
// this: r31
ENgcTextureC8_32::ENgcTextureC8_32() {
    // References
    // -> struct [anonymous] __vt__16ENgcTextureC8_32;
    // -> struct [anonymous] __vt__15ENgcTextureBase;
}

// Range: 0x802D0CA8 -> 0x802D0D68
// this: r29
ENgcTextureC8_32::~ENgcTextureC8_32() {
    // References
    // -> class ETextureManager _textureman;
    // -> struct [anonymous] __vt__16ENgcTextureC8_32;
}

// Range: 0x802D0D68 -> 0x802D0E1C
// this: r28
unsigned char ENgcTextureC8_32::Create(const struct ETextureDef & td /* r29 */) {
    // Local variables
    unsigned char status; // r30

    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802D0E1C -> 0x802D0E30
void ENgcTextureC8_32::SwizzleImage() {}

// Range: 0x802D0E30 -> 0x802D0E44
void ENgcTextureC8_32::UnswizzleImage() {}

// Range: 0x802D0E44 -> 0x802D0EF4
// this: r31
void * ENgcTextureC8_32::UpdatePaletteDeswizzled() {
    // Local variables
    unsigned long i; // r10
}

// Range: 0x802D0EF4 -> 0x802D102C
// this: r31
void ENgcTextureC8_32::UpdateEnd() {
    // Local variables
    unsigned char * color; // r8
    unsigned long i; // r9
}

// Range: 0x802D102C -> 0x802D12D8
// this: r30
void ENgcTextureC8_32::Select(int texturecount /* r31 */) {
    // References
    // -> static enum _GXTlut sTlut;
}

// Range: 0x802D12D8 -> 0x802D12E0
int ENgcTextureC8_32::GetTEVStageCount() {}

// Range: 0x802D12E0 -> 0x802D12E8
int ENgcTextureC8_32::GetTEXCount() {}


