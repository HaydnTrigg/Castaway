/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrenderstatecache.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CA22C -> 0x802CC148
*/
// Range: 0x802CA22C -> 0x802CA7B0
// this: r29
void ENgcRenderStateCache::InitToDefaults(unsigned short viWidth /* r30 */, unsigned short viHeight /* r31 */) {
    // Local variables
    int i; // r0
    enum _GXTevStageID stage; // r0

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
    // -> unsigned int ENgcRSLightFlagMap[4];
    // -> struct _GXColor _gxBlack;
}

// Range: 0x802CA7B0 -> 0x802CA828
void ENgcRenderStateCache::SaveState() {
    // References
    // -> struct ENgcRenderStateStack s_stateStack[9];
    // -> int s_stackPos;
}

// Range: 0x802CA828 -> 0x802CA8D4
void ENgcRenderStateCache::RestoreState() {
    // References
    // -> struct ENgcRenderStateStack s_stateStack[9];
    // -> int s_stackPos;
}

// Range: 0x802CA8D4 -> 0x802CA940
void ENgcRenderStateCache::SaveViewportState() {
    // References
    // -> struct ENgcRSViewportStack s_viewportStack[5];
    // -> int s_vpStackPos;
}

// Range: 0x802CA940 -> 0x802CA9C0
void ENgcRenderStateCache::RestoreViewportState() {
    // References
    // -> struct ENgcRSViewportStack s_viewportStack[5];
    // -> int s_vpStackPos;
}

// Range: 0x802CA9C0 -> 0x802CB140
// this: r29
void ENgcRenderStateCache::Reset(unsigned char isWeighted /* r30 */) {
    // Local variables
    int w; // r5
    int i; // r27
    float mv[3][4]; // r1+0x10
    enum _GXProjectionType projectionType; // r4
    int i; // r25
    enum _GXTevStageID s; // r0
    int i; // r30
    enum _GXTevStageID s; // r0
    int light; // r27
    int c; // r26
    int i; // r26
    int pass; // r24

    // References
    // -> static enum _GXLightID _gxLightId[8];
    // -> float projMtx[4][4];
    // -> float screenOrthoMtx[4][4];
    // -> float rectOrthoMtx[4][4];
}

// Range: 0x802CB140 -> 0x802CC034
// this: r28
void ENgcRenderStateCache::Apply(unsigned char isWeighted /* r29 */) {
    // Local variables
    int w; // r5
    int i; // r26
    float mv[3][4]; // r1+0x10
    enum _GXProjectionType projectionType; // r4
    int i; // [invalid]
    enum _GXTevStageID s; // r24
    int i; // [invalid]
    enum _GXTevStageID s; // r29
    unsigned int lightModifiedVar; // r29
    int light; // r27
    int c; // r26
    int i; // r29
    int pass; // r23

    // References
    // -> unsigned int ENgcRSLightFlagMap[4];
    // -> static enum _GXLightID _gxLightId[8];
    // -> unsigned int ENgcRSTevFlagMap[16];
    // -> float projMtx[4][4];
    // -> float screenOrthoMtx[4][4];
    // -> float rectOrthoMtx[4][4];
}

// Range: 0x802CC034 -> 0x802CC148
void SetOrthoProjectionMode() {
    // Local variables
    float offset1; // f0
    float offset2; // f0

    // References
    // -> float screenOrthoMtx[4][4];
    // -> class ENgcRenderer _ngcRenderer;
    // -> float rectOrthoMtx[4][4];
    // -> class EGraphics * _pGfx;
}


