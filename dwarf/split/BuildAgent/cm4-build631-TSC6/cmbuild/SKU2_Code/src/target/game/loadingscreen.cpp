/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\loadingscreen.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023C500 -> 0x8023D270
*/
// Range: 0x8023C500 -> 0x8023C694
// this: r29
CLoadingScreen::CLoadingScreen(enum eLoadingScreenMode mode /* r31 */) {
    // References
    // -> int m_messageNumber;
    // -> static unsigned char s_bDrawPressStart;
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__14CLoadingScreen;
}

// Range: 0x8023C694 -> 0x8023C7B4
// this: r29
CLoadingScreen::~CLoadingScreen() {
    // Local variables
    class FrameEffectsManager * feMgr; // r0
    class DepthOfField * dofObj; // r31

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__14CLoadingScreen;
}

// Range: 0x8023C7B4 -> 0x8023C82C
char * CLoadingScreen::ModeToText() {}

// Range: 0x8023C82C -> 0x8023C8BC
void CLoadingScreen::InitAsync() {
    // Local variables
    class FrameEffectsManager * feMgr; // r0
    class DepthOfField * dofObj; // r31
    struct DepthOfFieldSettings settings; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8023C8BC -> 0x8023CA38
// this: r31
void CLoadingScreen::Update() {
    // Local variables
    float fadeOutFactor; // f2
    float walkSpeed; // f3
    int i; // r5
}

// Range: 0x8023CA38 -> 0x8023D230
// this: r29
void CLoadingScreen::DrawTopmost(class ERC * prc /* r30 */, float alpha /* f23 */) {
    // Local variables
    class E3DWindow * win; // r31
    float fNear; // f19
    float fFar; // f20
    float scale; // f27
    float xsize; // f26
    float ysize; // f25
    float gait; // f24
    float fx; // f0
    float fx2; // f0
    float fy; // f0
    float fy2; // f0
    float startx; // f0
    int feet; // r23
    int feet; // r23
    class BString2 loading; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> static class EVec3 s_camUp;
    // -> static class EVec3 s_camTarget;
    // -> static class EVec3 s_camEye;
    // -> class EGraphics * _pGfx;
    // -> class ESimsApp _app;
}

// Range: 0x8023D230 -> 0x8023D270
unsigned short * CLoadingScreen::GetLoadString() {
    // References
    // -> class EGlobal _globals;
}


