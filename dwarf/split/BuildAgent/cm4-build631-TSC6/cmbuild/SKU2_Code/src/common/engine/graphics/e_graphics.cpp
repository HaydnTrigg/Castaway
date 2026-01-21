/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_graphics.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80294730 -> 0x802959DC
*/
// Range: 0x80294730 -> 0x80294810
// this: r31
EGraphics::EGraphics() {
    // References
    // -> struct [anonymous] __vt__9EGraphics;
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
}

// Range: 0x80294810 -> 0x8029489C
// this: r30
EGraphics::~EGraphics() {
    // References
    // -> unsigned char m_shutdownComplete;
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
    // -> struct [anonymous] __vt__9EGraphics;
}

// Range: 0x8029489C -> 0x802948A0
void EGraphics::ManagedShutdown() {}

// Range: 0x802948A0 -> 0x80294924
// this: r31
unsigned char EGraphics::Init() {
    // References
    // -> class EScheduler * _pSched;
}

// Range: 0x80294924 -> 0x802949C0
// this: r29
void EGraphics::DeselectTextures() {
    // Local variables
    class ERC * prc; // r31
    int r; // r30

    // References
    // -> class EShader * m_gLastShaderSet;
}

// Range: 0x802949C0 -> 0x80294A10
// this: r31
void EGraphics::BeginFrame() {
    // References
    // -> class EWindow * m_pCurrentWindow;
    // -> int _evenodd;
    // -> class EScheduler * _pSched;
}

// Range: 0x80294A10 -> 0x80294A7C
// this: r31
void EGraphics::EndFrame() {
    // References
    // -> int _evenodd;
    // -> class EScheduler * _pSched;
    // -> class EEngine * _pEngine;
}

// Range: 0x80294A7C -> 0x80294A80
void EGraphics::DoSwapBuffer() {}

// Range: 0x80294A80 -> 0x80294A84
void EGraphics::DoSetupFrameBuffer() {}

// Range: 0x80294A84 -> 0x80294AF8
// this: r31
void EGraphics::Flush() {
    // References
    // -> class EScheduler * _pSched;
    // -> class EApp * _pApp;
}

// Range: 0x80294AF8 -> 0x80294B50
void EGraphics::GetOutputRect() {}

// Range: 0x80294B50 -> 0x80294C00
// this: r31
void EGraphics::SetWiiWideScreen() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80294C00 -> 0x80294C20
int GetWidescreenOffset() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80294C20 -> 0x80294C28
float EGraphics::GetScreenAspect() {}

// Range: 0x80294C28 -> 0x80294C38
float EGraphics::SetScreenAspect() {
    // Local variables
    float oldAspect; // f0
}

// Range: 0x80294C38 -> 0x80294C5C
void EGraphics::GetScissorRect() {}

// Range: 0x80294C5C -> 0x80294C80
void EGraphics::SetBackgroundColor() {}

// Range: 0x80294C80 -> 0x80294CA4
void EGraphics::GetBackgroundColor() {}

// Range: 0x80294CA4 -> 0x80294DD8
class EDL * EGraphics::AllocDL() {
    // References
    // -> struct [anonymous] __vt__3EDL;
    // -> class ProtectedAllocPool g_poolDL;
}

// Range: 0x80294DD8 -> 0x80294DFC
void EGraphics::FreeDL() {}

// Range: 0x80294DFC -> 0x80294E2C
class ERC * EGraphics::AllocRC() {}

// Range: 0x80294E2C -> 0x80294E50
void EGraphics::FreeRC() {}

// Range: 0x80294E50 -> 0x80294ECC
// this: r29
class ERC * EGraphics::Open(enum RCMode mode /* r30 */) {
    // Local variables
    class ERC * pRC; // r31
}

// Range: 0x80294ECC -> 0x80294F9C
// this: r28
class EDL * EGraphics::Close(class ERC * pRC /* r29 */) {
    // Local variables
    class EDL * pDL; // r30
    enum RCMode mode; // r31
}

// Range: 0x80294F9C -> 0x80294FB0
void EGraphics::Execute() {
    // References
    // -> class EScheduler * _pSched;
}

// Range: 0x80294FB0 -> 0x80294FC4
void EGraphics::Destroy() {}

// Range: 0x80294FC4 -> 0x80294FD4
void EGraphics::DeallocateDL() {}

// Range: 0x80294FD4 -> 0x80295084
// this: r29
class ETexture * EGraphics::CreateTexture(const struct ETextureDef & tsd /* r30 */) {
    // Local variables
    class ETexture * pTexture; // r31
}

// Range: 0x80295084 -> 0x80295144
// this: r29
void EGraphics::Destroy(class ETexture * pTexture /* r30 */) {
    // Local variables
    int p; // r31

    // References
    // -> class ERenderer * _pRend;
}

// Range: 0x80295144 -> 0x802951E8
// this: r29
class EShader * EGraphics::CreateShader(struct EShaderDef & sd /* r30 */) {
    // Local variables
    class EShader * pShader; // r31
}

// Range: 0x802951E8 -> 0x80295234
// this: r31
void EGraphics::Destroy() {}

// Range: 0x80295234 -> 0x802952E4
// this: r29
class ERenderSurface * EGraphics::CreateRenderSurface(const struct ERenderSurfaceDef & rsd /* r30 */) {
    // Local variables
    class ERenderSurface * pSurf; // r31
}

// Range: 0x802952E4 -> 0x80295354
// this: r30
void EGraphics::Destroy(class ERenderSurface * pSurf /* r31 */) {}

// Range: 0x80295354 -> 0x80295364
class EMovie * EGraphics::CreateMovie() {
    // Local variables
    class EMovie * pMovie; // r0
}

// Range: 0x80295364 -> 0x80295374
void EGraphics::Destroy() {}

// Range: 0x80295374 -> 0x802953C4
void * EGraphics::AllocVertexData(unsigned long size /* r31 */) {
    // Local variables
    void * p; // r0
}

// Range: 0x802953C4 -> 0x8029540C
void EGraphics::FreeVertexData(void * data /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029540C -> 0x802954E8
// this: r29
void EGraphics::ComputeViewport(struct EViewport & vp /* r30 */, const class TRect & rect /* r31 */) {
    // Local variables
    float farZ; // f0
    float nearZ; // f0
    float halfWidth; // f7
    float halfHeight; // f2
    float halfDepth; // f9
}

// Range: 0x802954E8 -> 0x80295550
// this: r31
void EGraphics::SetUpNormalMapMatrix() {}

// Range: 0x80295550 -> 0x802955E0
// this: r29
void EGraphics::LoadSystemFont() {
    // Local variables
    const char * szName; // r0
    unsigned int nFontID; // r30

    // References
    // -> class EFontManager _fontman;
}

// Range: 0x802955E0 -> 0x80295894
// this: r27
void EGraphics::DrawTiming() {
    // Local variables
    class ERC * prc; // r29
    class EWindow win; // r1+0x60
    char szBuffer[32]; // r1+0x40
    int pos; // r28
    float leftIndent; // f31
    float topIndent; // f30
    class EVec2 vSize; // r1+0x38
    float numspace; // f29
    float yspace; // f28

    // References
    // -> float _retracetime;
    // -> float _cputime;
    // -> int _fps;
}

// Range: 0x80295894 -> 0x8029594C
// this: r28
void EGraphics::DisplayTiming(unsigned char enable /* r29 */) {
    // References
    // -> class EFontManager _fontman;
}

// Range: 0x8029594C -> 0x802959C8
void EGraphics::SetCensorRect() {}

// Range: 0x802959C8 -> 0x802959DC
class EVec2 EGraphics::GetFrameBufferTextureCoordinate() {}


