/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_window.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A1C0C -> 0x802A2BEC
*/
// Range: 0x802A1C0C -> 0x802A1CB0
// this: r31
EWindow::EWindow() {
    // References
    // -> struct [anonymous] __vt__7EWindow;
}

// Range: 0x802A1CB0 -> 0x802A1D20
// this: r31
EWindow::~EWindow() {
    // References
    // -> class E3DWindow * m_pCurrent3DWindow;
    // -> class EWindow * m_pCurrentWindow;
}

// Range: 0x802A1D20 -> 0x802A1DB8
// this: r31
void EWindow::SetRenderSurface() {
    // Local variables
    class TRect rect; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802A1DB8 -> 0x802A1ED0
void EWindow::ScaleForScreenshot() {
    // References
    // -> class EVec3 m_globalOffset;
    // -> class EVec3 m_globalScale;
}

// Range: 0x802A1ED0 -> 0x802A1F58
void EWindow::ScaleOutputRectForScreenshot() {
    // Local variables
    float w; // f7
    float h; // f8
    float offx; // f1
    float offy; // f0

    // References
    // -> class EVec3 m_globalOffset;
    // -> class EVec3 m_globalScale;
}

// Range: 0x802A1F58 -> 0x802A22B0
// this: r30
void EWindow::Select(class ERC * prc /* r31 */) {
    // Local variables
    class TRect rOrigOut; // r1+0x58
    class TRect rOrigClipOutClamped; // r1+0x48
    class TRect rOut; // r1+0x38
    class TRect pScissorRect; // r1+0x28
    class TRect rScreen; // r1+0x18
    class TRect rOutClip; // r1+0x8

    // References
    // -> class EShader * m_gLastShaderSet;
    // -> class E3DWindow * m_pCurrent3DWindow;
    // -> class EWindow * m_pCurrentWindow;
    // -> class EVec3 m_globalScale;
    // -> class EVec3 m_globalOffset;
    // -> class EGraphics * _pGfx;
}

// Range: 0x802A22B0 -> 0x802A23D8
// this: r31
void EWindow::CalcWindowMat() {
    // Local variables
    float inWidth; // f0
    float inHeight; // f0
    float xScale; // f31
    float yScale; // f30
}

// Range: 0x802A23D8 -> 0x802A251C
void EWindow::CalcClip() {}

// Range: 0x802A251C -> 0x802A2670
void EWindow::SetClip() {}

// Range: 0x802A2670 -> 0x802A2774
// this: r31
void EWindow::SetInputCoordinates() {}

// Range: 0x802A2774 -> 0x802A2968
// this: r31
void EWindow::SetOutputCoordinates() {}

// Range: 0x802A2968 -> 0x802A2BEC
static void __sinit_\engine_graphics_unity_cpp() {
    // References
    // -> class EVec3 m_globalOffset;
    // -> class EVec3 m_globalScale;
    // -> class EMutex m_updateListMutex;
    // -> class TLinkedList m_updateList;
    // -> class ETypeInfo * gpTypeInfo_EMorphWeightChannelNodeDataPos;
    // -> class DepthFade g_depthFade;
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo * gpTypeInfo_EFontData;
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo * gpTypeInfo_EFontSize;
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo * gpTypeInfo_EFontPage;
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo * gpTypeInfo_EFontCharacter;
    // -> class ETypeInfo m_typeInfo;
    // -> class ProtectedAllocPool g_poolDL;
    // -> unsigned char g_dlPoolBuffer[67664];
    // -> class EDebugPrim _debugprim;
    // -> class ETypeInfo * gpTypeInfo_EAnimNodeDataPos;
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo m_typeInfo;
    // -> struct EACNodeState tempNodeStates[3][128];
    // -> static float kBlendZRotationCutoff;
}


