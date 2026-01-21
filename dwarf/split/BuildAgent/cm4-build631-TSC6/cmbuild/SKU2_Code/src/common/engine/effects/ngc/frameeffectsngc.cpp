/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\effects\ngc\frameeffectsngc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282BD0 -> 0x802834A8
*/
// Range: 0x80282BD0 -> 0x80282FE8
static void CopyBufferToBufferScaled(void * destMem /* r23 */, int dstWidth /* r24 */, int dstHeight /* r25 */, int efbWidth /* r26 */, int efbHeight /* r27 */, const class TRect & viewport /* r28 */, class ENgcRenderStateCache * rsCache /* r29 */, const class EVec2 & normalizedSrcTexOffset /* r30 */, const class EVec2 & normalizedSrcTexWidth /* r31 */) {
    // Local variables
    class EVec2 windowOffset; // r1+0x8

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
}

// Range: 0x80282FE8 -> 0x802832C8
static void SetDefaultRenderStates() {
    // Local variables
    int texIndex; // r10

    // References
    // -> unsigned int ENgcRSLightFlagMap[4];
}

// Range: 0x802832C8 -> 0x802832CC
void MotionBlurNGC::Draw() {}

// Range: 0x802832CC -> 0x802832D0
void BloomNGC::Draw() {}

// Range: 0x802832D0 -> 0x802832D4
void DepthOfFieldNGC::Draw() {}

// Range: 0x802832D4 -> 0x802834A8
void DrawPrevFrameBufferToScreen() {
    // Local variables
    class ENgcRenderStateCache * rsCache; // r31
    struct _GXRenderModeObj renderMode; // r1+0x94
    class TRect viewport; // r1+0x28
    int prevW; // r1+0x14
    int prevH; // r1+0x10
    void * prevFrameMem; // r0
    struct _GXTexObj prevFrameTex; // r1+0x38
    float srcFactor; // f0
    float dstFactor; // f0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}


