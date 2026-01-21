/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcgraphics.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B51C0 -> 0x802B5BA8
*/
// Range: 0x802B51C0 -> 0x802B5220
// this: r30
ENgcGraphics::~ENgcGraphics() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802B5220 -> 0x802B535C
// this: r29
unsigned char ENgcGraphics::Init() {
    // Local variables
    struct EShaderDef sd; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B535C -> 0x802B53EC
// this: r31
void ENgcGraphics::InitShadowSurface() {
    // Local variables
    struct ETextureDef td; // r1+0x8
}

// Range: 0x802B53EC -> 0x802B54D8
void ENgcGraphics::PrepareFrameBufferToRenderShadow(class ERC * prc /* r31 */) {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B54D8 -> 0x802B54E0
void ENgcGraphics::CopyFrameBufferToShadowTexture() {}

// Range: 0x802B54E0 -> 0x802B553C
void ENgcGraphics::SetBackgroundColor(const class EVec3 & color /* r29 */, int alpha /* r30 */, unsigned char clear /* r31 */) {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B553C -> 0x802B5540
void ENgcGraphics::GetScreenShot() {}

// Range: 0x802B5540 -> 0x802B5588
// this: r30
void ENgcGraphics::Destroy(class ERenderSurface * pSurf /* r31 */) {}

// Range: 0x802B5588 -> 0x802B55D8
class EDL * ENgcGraphics::AllocDL() {
    // References
    // -> struct [anonymous] __vt__6ENgcDL;
}

// Range: 0x802B55D8 -> 0x802B55FC
void ENgcGraphics::FreeDL() {}

// Range: 0x802B55FC -> 0x802B5680
class ERC * ENgcGraphics::AllocRC() {
    // References
    // -> static class ENgcRC _ngcImmediateRC;
}

// Range: 0x802B5680 -> 0x802B56AC
void ENgcGraphics::FreeRC() {}

// Range: 0x802B56AC -> 0x802B56E8
class ETexture * ENgcGraphics::AllocTexture() {
    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802B56E8 -> 0x802B570C
void ENgcGraphics::FreeTexture() {}

// Range: 0x802B570C -> 0x802B5748
class EShader * ENgcGraphics::AllocShader() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802B5748 -> 0x802B576C
void ENgcGraphics::FreeShader() {}

// Range: 0x802B576C -> 0x802B579C
class ERenderSurface * ENgcGraphics::AllocRenderSurface() {}

// Range: 0x802B579C -> 0x802B57C0
void ENgcGraphics::FreeRenderSurface() {}

// Range: 0x802B57C0 -> 0x802B57F0
class EMovie * ENgcGraphics::AllocMovie() {}

// Range: 0x802B57F0 -> 0x802B5814
void ENgcGraphics::FreeMovie() {}

// Range: 0x802B5814 -> 0x802B5AF8
// this: r25
void ENgcGraphics::EndFrame() {
    // Local variables
    class ERC * prc; // r28
    char szBuffer[32]; // r1+0x30
    int pos; // r0
    float leftIndent; // f30
    float topIndent; // f29
    class EVec2 vSize; // r1+0x28
    float numspace; // f25
    float yspace; // f28
    class EWindow win; // r1+0x50
    class ERC * prc; // r27
    int i; // r26

    // References
    // -> int _ngcPerf0StatCount;
    // -> struct ENgcPerfStat _ngcPerf0Stats[12];
    // -> static unsigned char _ngcDrawPerfStats;
    // -> unsigned char _ngcPerfStatsEnabled;
}

// Range: 0x802B5AF8 -> 0x802B5BA4
// this: r28
void ENgcGraphics::DrawCensorRects(class ERC * prc /* r29 */) {
    // Local variables
    int c; // r30
    class EVec2 screenUL; // r1+0x10
    class EVec2 screenLR; // r1+0x8
    float z; // f1
}

// Range: 0x802B5BA4 -> 0x802B5BA8
void ENgcGraphics::ProcessFrameEffects() {}


