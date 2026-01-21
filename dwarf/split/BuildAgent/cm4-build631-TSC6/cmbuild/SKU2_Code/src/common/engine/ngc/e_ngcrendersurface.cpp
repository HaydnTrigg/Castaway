/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrendersurface.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CC338 -> 0x802CC8B8
*/
// Range: 0x802CC338 -> 0x802CC380
// this: r31
ENgcRenderSurface::ENgcRenderSurface() {
    // References
    // -> struct [anonymous] __vt__17ENgcRenderSurface;
}

// Range: 0x802CC380 -> 0x802CC3D8
// this: r30
ENgcRenderSurface::~ENgcRenderSurface() {}

// Range: 0x802CC3D8 -> 0x802CC3F4
// this: r4
void ENgcRenderSurface::DestroySubtextures() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802CC3F4 -> 0x802CC3FC
class ETexture * ENgcRenderSurface::GetTexture() {}

// Range: 0x802CC3FC -> 0x802CC4B4
// this: r30
unsigned char ENgcRenderSurface::Create(const struct ERenderSurfaceDef & rsd /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802CC4B4 -> 0x802CC4B8
void ENgcRenderSurface::GetOutputRect() {}

// Range: 0x802CC4B8 -> 0x802CC4D4
void ENgcRenderSurface::SetBackgroundColor() {}

// Range: 0x802CC4D4 -> 0x802CC4F0
void ENgcRenderSurface::GetImageData() {}

// Range: 0x802CC4F0 -> 0x802CC7F8
// this: r26
unsigned char ENgcRenderSurface::CopyToTexture(class ETexture * destTexture /* r27 */) {
    // Local variables
    int px; // r1+0x14
    int py; // r1+0x10
    int dx; // r1+0xC
    int dy; // r1+0x8
    unsigned char success; // r30
    unsigned char * pDest; // r28
    unsigned int srcWidth; // r29
    unsigned int srcHeight; // r28
    unsigned int colorSrc; // r12
    unsigned short colorDst; // r8
    unsigned short * pDest; // r0
    unsigned long * pSrc; // r0
    unsigned int y; // r4
    unsigned int x; // r0
}

// Range: 0x802CC7F8 -> 0x802CC804
void ENgcRenderSurface::Select() {}

// Range: 0x802CC804 -> 0x802CC8B8
// this: r29
void ENgcRenderSurface::Deselect() {}


