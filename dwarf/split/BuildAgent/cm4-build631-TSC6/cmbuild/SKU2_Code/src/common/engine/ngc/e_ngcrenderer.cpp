/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrenderer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BB5C4 -> 0x802C5C00
*/
// Range: 0x802BB5C4 -> 0x802BB8F0
// this: r31
ENgcRenderer::ENgcRenderer() {
    // References
    // -> int _tvHZ;
    // -> class ERenderer * _pRend;
    // -> int _iVideoMode;
    // -> struct [anonymous] __vt__12ENgcRenderer;
}

// Range: 0x802BB8F0 -> 0x802BB960
// this: r30
ENgcRenderer::~ENgcRenderer() {
    // References
    // -> class ERenderer * _pRend;
}

// Range: 0x802BB960 -> 0x802BB970
class ETexture * ENgcRenderer::GetCurrentTexture() {}

// Range: 0x802BB970 -> 0x802BB974
unsigned char ENgcRenderer::Init() {}

// Range: 0x802BB974 -> 0x802BBDE8
void * ENgcRenderer::CreateGXDisplayList(class EDL * pDL /* r20 */, enum _GXPrimitive prim /* r29 */, int nIndices /* r21 */, const unsigned short * indices /* r22 */, int nVerts /* r27 */, const float * texcoords /* r23 */, const unsigned char * colors /* r24 */, const signed char * normals /* r25 */, unsigned int & byteCount /* r30 */, unsigned char dualTexCoords /* r26 */) {
    // Local variables
    int components; // r3
    int indexSize; // r8
    void * gxDL; // r28
    struct _GDLObj dlObj; // r1+0x8
    int i; // r29
    unsigned char index; // r30
    int i; // r27
    unsigned short index; // r0
    class EAutoMutex gatekeeper'210; // r20

    // References
    // -> struct _GDLObj * __GDCurrentDL;
    // -> class EMutex _ngcCreateGXMutex;
}

// Range: 0x802BBDE8 -> 0x802BC25C
void * ENgcRenderer::CreateGXDisplayList(class EDL * pDL /* r20 */, enum _GXPrimitive prim /* r29 */, int nIndices /* r21 */, const unsigned short * indices /* r22 */, int nVerts /* r27 */, const signed short * texcoords /* r23 */, const unsigned char * colors /* r24 */, const signed char * normals /* r25 */, unsigned int & byteCount /* r30 */, unsigned char dualTexCoords /* r26 */) {
    // Local variables
    int components; // r3
    int indexSize; // r8
    void * gxDL; // r28
    struct _GDLObj dlObj; // r1+0x8
    int i; // r29
    unsigned char index; // r30
    int i; // r27
    unsigned short index; // r0
    class EAutoMutex gatekeeper'210; // r20

    // References
    // -> struct _GDLObj * __GDCurrentDL;
    // -> class EMutex _ngcCreateGXMutex;
}

// Range: 0x802BC25C -> 0x802BC6B4
void * ENgcRenderer::CreateGXDisplayList(class EDL * pDL /* r22 */, enum _GXPrimitive prim /* r28 */, int nVerts /* r23 */, const float * texcoords /* r24 */, const unsigned char * colors /* r25 */, const signed char * normals /* r26 */, unsigned int & byteCount /* r30 */, unsigned char dualTexCoords /* r27 */) {
    // Local variables
    int components; // r3
    int indexSize; // r8
    void * gxDL; // r29
    struct _GDLObj dlObj; // r1+0x8
    int i; // r30
    int i; // r28
    class EAutoMutex gatekeeper'202; // r22

    // References
    // -> struct _GDLObj * __GDCurrentDL;
    // -> class EMutex _ngcCreateGXMutex;
}

// Range: 0x802BC6B4 -> 0x802BCBD0
void * ENgcRenderer::CreateGXDisplayList(class EDL * pDL /* r31 */, enum _GXPrimitive prim /* r30 */, int nVerts /* r21 */, const signed short * xyzs /* r22 */, const signed short * texcoords /* r23 */, const unsigned char * colors /* r24 */, const signed char * normals /* r25 */, unsigned int & byteCount /* r28 */, unsigned char dualTexCoords /* r26 */, unsigned char skinned /* r27 */) {
    // Local variables
    int components; // r3
    int indexSize; // r0
    int skinningFactor; // r8
    void * gxDL; // r29
    struct _GDLObj dlObj; // r1+0x8
    int i; // r30
    unsigned char maxWeightIx; // r28
    int i; // r28
    unsigned char maxWeightIx; // r30
    class EAutoMutex gatekeeper'240; // r19

    // References
    // -> struct _GDLObj * __GDCurrentDL;
    // -> class EMutex _ngcCreateGXMutex;
}

// Range: 0x802BCBD0 -> 0x802BCC60
// this: r30
void ENgcRenderer::SetClearColor() {
    // Local variables
    unsigned char * gxcolor; // r31

    // References
    // -> static unsigned char clear_alpha;
}

// Range: 0x802BCC60 -> 0x802BCC80
void * ENgcRenderer::GetExternalFrameBuffer() {}

// Range: 0x802BCC80 -> 0x802BCD60
void ENgcRenderer::VIPreRetraceCallback(unsigned long retraceCount /* r31 */) {
    // References
    // -> long s_missedVBlanks;
    // -> int _fps;
    // -> int _tvHZ;
    // -> int _d_retraces;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EEvent * s_frameEvent;
    // -> class EMutex s_copyMutex;
    // -> void * s_frameXfb;
    // -> static unsigned int lastSwap;
    // -> unsigned char s_frameAvailable;
    // -> class EScheduler * _pSched;
}

// Range: 0x802BCD60 -> 0x802BCD64
void ENgcRenderer::VIPostRetraceCallback() {}

// Range: 0x802BCD64 -> 0x802BCD78
void ENgcRenderer::BreakPtCallback() {
    // References
    // -> unsigned char s_breakPointSet;
    // -> unsigned char s_frameAvailable;
}

// Range: 0x802BCD78 -> 0x802BCD80
void ENgcRenderer::DrawSyncCallback() {
    // References
    // -> unsigned short s_lastTokenFromGX;
}

// Range: 0x802BCD80 -> 0x802BCD88
int ENgcRenderer::GetNumberOfFullScenePasses() {}

// Range: 0x802BCD88 -> 0x802BCD90
void ENgcRenderer::BeginFullScenePass() {}

// Range: 0x802BCD90 -> 0x802BCD98
void ENgcRenderer::EndFullScenePass() {}

// Range: 0x802BCD98 -> 0x802BD018
// this: r29
void ENgcRenderer::InitGX(struct _GXRenderModeObj * rMode /* r30 */) {
    // Local variables
    unsigned long hi; // r1+0xC
    unsigned long lo; // r1+0x8
    float yScale; // f0

    // References
    // -> float projMtx[4][4];
    // -> float screenOrthoMtx[4][4];
    // -> float rectOrthoMtx[4][4];
}

// Range: 0x802BD018 -> 0x802BD3DC
void ENgcRenderer::InitGXVertexFormats() {}

// Range: 0x802BD3DC -> 0x802BDB74
// this: r29
unsigned char ENgcRenderer::InitVideo(int & screenx /* r30 */, int & screeny /* r31 */) {
    // Local variables
    struct _GXRenderModeObj defRenderMode; // r1+0xC
    unsigned short verticlePixels; // r0
    unsigned char interlaced; // r15
    int i; // r16
    unsigned char * xfb; // r0
    int numOfFullScenePasses; // r0
    int i; // r18

    // References
    // -> class EGraphics * _pGfx;
    // -> static struct _GXLightObj gBasePointLightObj;
    // -> static struct _GXLightObj gBaseDirLightObj;
    // -> struct _GXRenderModeObj GXNtsc480Prog;
    // -> struct _GXRenderModeObj GXNtsc480IntDf;
    // -> struct _GXRenderModeObj GXPal528IntDf;
    // -> int _iVideoMode;
}

// Range: 0x802BDB74 -> 0x802BDD74
// this: r30
void ENgcRenderer::InitData() {
    // References
    // -> static unsigned char clear_alpha;
}

// Range: 0x802BDD74 -> 0x802BE1AC
// this: r26
void ENgcRenderer::ClearRect(class EVec4 & rect /* r27 */) {
    // Local variables
    unsigned char u8color[4]; // r1+0x8

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
    // -> unsigned int ENgcRSLightFlagMap[4];
}

// Range: 0x802BE1AC -> 0x802BE2DC
// this: r31
void ENgcRenderer::EndFrame() {
    // Local variables
    class EEvent * event; // r29
    void * fifoRead; // r1+0xC
    void * fifoWrite; // r1+0x8
    struct GXFifoObj fifo; // r1+0x10
    unsigned char restore; // r29

    // References
    // -> unsigned char s_breakPointSet;
    // -> void * s_frameXfb;
    // -> class EEvent * s_frameEvent;
    // -> class EMutex s_copyMutex;
}

// Range: 0x802BE2DC -> 0x802BEC38
// this: r24
void ENgcRenderer::UpdateLightingEquation() {
    // Local variables
    struct _GXColor shadowColor; // r1+0x3C
    struct _GXColor ambient; // r1+0x38
    int lightCount; // r27
    unsigned int mask; // r26
    struct _GXLightObj lightObj; // r1+0x58
    struct Vec dirVec; // r1+0x4C
    struct Vec posVec; // r1+0x40
    int i; // r25
    struct _GXColor gxColor; // r1+0x34
    float r; // f26
    struct _GXColor gxColor; // r1+0x30
    float k2; // f3

    // References
    // -> class EGlobal _globals;
    // -> static struct _GXLightObj gBasePointLightObj;
    // -> static struct _GXLightObj gBaseDirLightObj;
    // -> struct _GXColor _gxWhite;
    // -> unsigned int ENgcRSLightFlagMap[4];
}

// Range: 0x802BEC38 -> 0x802BEC58
void ENgcRenderer::SetLightingOff() {}

// Range: 0x802BEC58 -> 0x802BECE4
// this: r30
void ENgcRenderer::Execute() {
    // Local variables
    struct EDLEntry * pCurrentEntry; // r4
    unsigned int command; // r3

    // References
    // -> void (ENgcRenderer::* m_jumpTable[77])(void *, void *, struct EDLEntry *);
}

// Range: 0x802BECE4 -> 0x802BECFC
void ReflectionCoord() {}

// Range: 0x802BECFC -> 0x802BED0C
void ENgcRenderer::TriStrip(struct EDLEntry * pe /* r5 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x802BED0C -> 0x802BF0AC
// this: r29
void ENgcRenderer::TriStrip(const struct EGEVert * verts /* r30 */, int nVerts /* r31 */) {
    // Local variables
    int i; // r26
    struct Vec tc; // r1+0x20
    struct Vec p; // r1+0x14
    struct Vec n; // r1+0x8
    int i; // r0
}

// Range: 0x802BF0AC -> 0x802BF3CC
// this: r23
void ENgcRenderer::WeightedBlend(int nVerts /* r24 */, const float * pos /* r25 */, const signed char * normals /* r26 */, const float * tcs /* r27 */, const unsigned char * colors /* r28 */, const unsigned char * weights /* r29 */, unsigned char dualTexCoords /* r30 */) {
    // Local variables
    struct Vec v; // r1+0x44
    struct Vec n; // r1+0x38
    struct Vec outPos; // r1+0x2C
    struct Vec outNorm; // r1+0x20
    int i; // r31
    int cm; // r18
    unsigned int weight; // r0
    int weightsUsed; // r17
    struct Vec vecWeight; // r1+0x14
    struct Vec vecWeightN; // r1+0x8
    float fweight; // f27

    // References
    // -> static int numWeights[4];
}

// Range: 0x802BF3CC -> 0x802BF41C
void ENgcRenderer::TriStripPacked() {
    // Local variables
    unsigned int * p32; // r0
    float * xyzs; // r0
    float * texcoords; // r0
    unsigned char * colors; // r0
    signed char * normals; // r0
    unsigned char * weights; // r0
    unsigned char * pCallDL; // r0
}

// Range: 0x802BF41C -> 0x802BFBA0
// this: r26
void ENgcRenderer::TriStripPacked(int nVerts /* r27 */, const float * pos /* r28 */, const float * texcoords /* r29 */, const unsigned char * colors /* r30 */, const signed char * normals /* r31 */, const unsigned char * weights /* r24 */, const unsigned char * pCallDL /* r23 */, unsigned char dualTexCoords /* r22 */) {
    // Local variables
    enum _GXAttrType type; // r25
    const float * pPos; // [invalid]
    const signed char * pNormals; // [invalid]
    const unsigned char * pColors; // [invalid]
    const float * pTexcoords; // [invalid]
    int i; // r24
    struct Vec tc; // r1+0x70
    struct Vec p; // r1+0x64
    struct Vec n; // r1+0x58
    const float * pPos; // [invalid]
    const signed char * pNormals; // [invalid]
    const unsigned char * pColors; // [invalid]
    const float * pTexcoords; // [invalid]
    int i; // r0
    unsigned short * baseptr; // r24
    int i; // r23
    int p0; // r0
    int n0; // r0
    int c0; // r0
    int t0; // r0
    struct Vec tc; // r1+0x4C
    struct Vec p; // r1+0x40
    struct Vec n; // r1+0x34
    unsigned char * baseptr; // r23
    int i; // r24
    int p0; // r0
    int n0; // r0
    int c0; // r0
    int t0; // r0
    struct Vec tc; // r1+0x28
    struct Vec p; // r1+0x1C
    struct Vec n; // r1+0x10
}

// Range: 0x802BFBA0 -> 0x802C0438
// this: r27
void ENgcRenderer::TriStripPackedInt(struct EDLEntry * pe /* r20 */) {
    // Local variables
    int nVerts; // r25
    unsigned int dlSize; // r24
    unsigned char flags; // r0
    unsigned char dualTexCoords; // r23
    unsigned char skinned; // r22
    unsigned int * p32; // r0
    signed short * pos; // [invalid]
    signed short * texcoords; // [invalid]
    unsigned char * colors; // [invalid]
    signed char * normals; // [invalid]
    unsigned char * weights; // r10
    unsigned char numWeightMatrices; // r0
    unsigned char * pCallDL; // r21
    enum _GXAttrType type; // r20
    unsigned short * baseptr; // r20
    int i; // r21
    int p0; // r4
    int n0; // r3
    int c0; // r0
    int t0; // r0
    struct Vec p; // r1+0x88
    struct Vec n; // r1+0x7C
    struct Vec tc; // r1+0x70
    signed short u; // r0
    signed short v; // r0
    unsigned char * baseptr; // r20
    int i; // r21
    int p0; // r4
    int n0; // r3
    int c0; // r0
    int t0; // r0
    struct Vec p; // r1+0x64
    struct Vec n; // r1+0x58
    struct Vec tc; // r1+0x4C
    signed short u; // r0
    signed short v; // r0
    signed short * pPos; // [invalid]
    signed char * pNormals; // [invalid]
    unsigned int * pColors; // [invalid]
    signed short * pTexcoords; // [invalid]
    int i; // r20
    struct Vec p; // r1+0x40
    struct Vec n; // r1+0x34
    struct Vec tc; // r1+0x28
    signed short u; // r0
    signed short v; // r0
    signed short * pPos; // r31
    signed char * pNormals; // r30
    unsigned int * pColors; // r29
    signed short * pTexcoords; // r28
    int i; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x802C0438 -> 0x802C0448
void ENgcRenderer::LineList(struct EDLEntry * pe /* r5 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x802C0448 -> 0x802C0614
// this: r29
void ENgcRenderer::LineList(const struct EGEVert * verts /* r30 */, int nVerts /* r31 */) {
    // Local variables
    int i; // r0
}

// Range: 0x802C0614 -> 0x802C0644
void ENgcRenderer::DisplayList() {}

// Range: 0x802C0644 -> 0x802C0650
void ENgcRenderer::Goto() {}

// Range: 0x802C0650 -> 0x802C0684
void ENgcRenderer::End() {}

// Range: 0x802C0684 -> 0x802C068C
void ENgcRenderer::SaveState() {}

// Range: 0x802C068C -> 0x802C0694
void ENgcRenderer::RestoreState() {}

// Range: 0x802C0694 -> 0x802C06E4
void ENgcRenderer::Viewport() {
    // Local variables
    struct EViewport * pVp; // r4
    float left; // f1
    float top; // f2
    float right; // f5
    float bottom; // f0
    float w; // f3
    float h; // f4

    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C06E4 -> 0x802C0718
void ENgcRenderer::SetViewport() {}

// Range: 0x802C0718 -> 0x802C073C
void ENgcRenderer::ClipRect() {
    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C073C -> 0x802C081C
// this: r30
void ENgcRenderer::Scissor() {
    // Local variables
    class TRect * frect; // r31
    float w; // f31
    float h; // f30
}

// Range: 0x802C081C -> 0x802C082C
void ENgcRenderer::ModelMatrices(struct EDLEntry * pe /* r5 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802C082C -> 0x802C0958
void ENgcRenderer::ModelMatrices() {
    // Local variables
    int numIt; // r7
    const unsigned long long * src; // r4
    unsigned long long * dst; // r8
    int i; // r9
}

// Range: 0x802C0958 -> 0x802C0A38
// this: r31
void ENgcRenderer::ModelMatrixIndex() {}

// Range: 0x802C0A38 -> 0x802C0B3C
// this: r27
void ENgcRenderer::ModelMatrixIndices(struct EDLEntry * pe /* r28 */) {
    // Local variables
    struct EDLEntryCommandU8 * p; // r0
    int i; // r29
    int index; // r0
}

// Range: 0x802C0B3C -> 0x802C0BEC
// this: r31
void ENgcRenderer::ViewMatrix() {
    // Local variables
    class EMat4 * pmView; // r5
}

// Range: 0x802C0BEC -> 0x802C0CD8
// this: r31
void ENgcRenderer::ProjectionMatrix() {
    // Local variables
    class EMat4 * pmProjection; // r6
    float a; // f1
    float b; // f3
    float nearPlane; // f1
    float farPlane; // f2

    // References
    // -> float projMtx[4][4];
}

// Range: 0x802C0CD8 -> 0x802C0D74
void ENgcRenderer::WindowMatrix() {
    // Local variables
    class EMat4 * pmWindow; // r5

    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C0D74 -> 0x802C0E2C
// this: r31
void ENgcRenderer::TextureMatrix() {
    // Local variables
    class EMat4 * pTextureMatrix; // r4
}

// Range: 0x802C0E2C -> 0x802C0E74
// this: r31
void ENgcRenderer::Texture(struct EDLEntry * pe /* r5 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802C0E74 -> 0x802C0F94
// this: r27
unsigned char ENgcRenderer::SetTexture(class ENgcTexture * pNewTexture /* r28 */, int renderPass /* r29 */) {
    // Local variables
    class ETexture * pOldTexture; // r3
    int texcount; // r31
    int i; // r30
}

// Range: 0x802C0F94 -> 0x802C1008
void ENgcRenderer::EnableGeometryModes() {
    // Local variables
    unsigned int modes; // r6
}

// Range: 0x802C1008 -> 0x802C107C
void ENgcRenderer::DisableGeometryModes() {
    // Local variables
    unsigned int modes; // r6
}

// Range: 0x802C107C -> 0x802C10E8
void ENgcRenderer::SetGeometryModes() {
    // Local variables
    unsigned int modes; // r6
}

// Range: 0x802C10E8 -> 0x802C110C
void ENgcRenderer::EnableRasterModes() {}

// Range: 0x802C110C -> 0x802C1130
void ENgcRenderer::DisableRasterModes() {}

// Range: 0x802C1130 -> 0x802C114C
void ENgcRenderer::SetRasterModes() {}

// Range: 0x802C114C -> 0x802C115C
void ENgcRenderer::SetAlpha() {}

// Range: 0x802C115C -> 0x802C11AC
// this: r31
void ENgcRenderer::SetFogValues(float intensity /* f31 */) {
    // Local variables
    struct _GXColor gxColor; // r1+0x8
}

// Range: 0x802C11AC -> 0x802C1338
void ENgcRenderer::Lights() {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
    struct ELights * pLights; // r8
    int i; // r5

    // References
    // -> float _gxAmbientLightMultiplier;
    // -> float _gxDiffuseLightMultiplier;
}

// Range: 0x802C1338 -> 0x802C1680
// this: r31
void ENgcRenderer::Rect() {
    // Local variables
    float * pf; // r30
    class EVec2 vUpperLeft; // r1+0x48
    class EVec2 vLowerRight; // r1+0x40
    class EVec2 vUpperLeftTC; // r1+0x38
    class EVec2 vLowerRightTC; // r1+0x30
    class EVec2 vUpperRight; // r1+0x28
    class EVec2 vLowerLeft; // r1+0x20
    class EVec2 vUpperRightTC; // r1+0x18
    class EVec2 vLowerLeftTC; // r1+0x10
    class EVec4 vColor; // r1+0x50
    unsigned char color[4]; // r1+0x8
    float z; // f31

    // References
    // -> int _ngcSkip2D;
}

// Range: 0x802C1680 -> 0x802C1A40
// this: r31
void ENgcRenderer::DirectRect() {
    // Local variables
    class ENgcTexture * pTexture; // r30
    float * pf; // r0
    class EVec2 vUpperLeft; // r1+0x20
    class EVec2 vScale; // r1+0x18
    class EVec4 vColor; // r1+0x28
    unsigned char color[4]; // r1+0x8
    float z; // f31
    float tex_x; // f4
    float tex_y; // f9
    class EVec2 vLowerRight; // r1+0x10
    float temp; // f0
    float temp; // f1

    // References
    // -> int _ngcSkip2D;
}

// Range: 0x802C1A40 -> 0x802C1A90
void ENgcRenderer::Material() {
    // Local variables
    struct EMaterial * pm; // r4
}

// Range: 0x802C1A90 -> 0x802C1AA8
void ENgcRenderer::MipMapSetup() {
    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C1AA8 -> 0x802C1AC0
void ENgcRenderer::Debug() {
    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C1AC0 -> 0x802C1B10
// this: r31
void ENgcRenderer::GeometrySetup() {}

// Range: 0x802C1B10 -> 0x802C1B6C
void ENgcRenderer::ZTest() {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
    unsigned char zbTest; // r8
    unsigned char zbMethod; // r9
    unsigned char zbWrite; // r10
    unsigned char compare; // r5
    unsigned char update; // r6

    // References
    // -> static enum _GXCompare _gxZCompareMap[7];
}

// Range: 0x802C1B6C -> 0x802C1C0C
void ENgcRenderer::AlphaTest() {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
    int alphaMethod; // r7
    unsigned char alphaThreshold; // r8
    class ENgcRenderStateCache * rsCache; // r0

    // References
    // -> static enum _GXCompare _gxAlphaCompareMap[8];
}

// Range: 0x802C1C0C -> 0x802C1D60
// this: r30
void ENgcRenderer::RenderSurface() {
    // Local variables
    class ENgcRenderSurface * pSurface; // r31
    class EVec4 rect; // r1+0x18
    class EVec4 color; // r1+0x8

    // References
    // -> static class ENgcRenderSurface * s_pRSurface;
}

// Range: 0x802C1D60 -> 0x802C1D78
void ENgcRenderer::TriIndexed() {
    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C1D78 -> 0x802C1D90
void ENgcRenderer::SaveImageData() {
    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C1D90 -> 0x802C1DAC
void ENgcRenderer::SpriteListPacked() {
    // Local variables
    unsigned int * p32; // r0
    float * xyzs; // r0
    float * texcoords; // r0
    unsigned char * colors; // r0
    signed char * normals; // r0
    unsigned char * weights; // r0
}

// Range: 0x802C1DAC -> 0x802C2000
// this: r27
void ENgcRenderer::SpriteListPacked(int nVerts /* r28 */, const float * xyzs /* r29 */, const float * texcoords /* r30 */, const unsigned char * colors /* r31 */) {
    // Local variables
    int i; // r25
    struct Vec p1; // r1+0x14
    struct Vec p2; // r1+0x8
}

// Range: 0x802C2000 -> 0x802C2050
void ENgcRenderer::QuadList() {
    // Local variables
    unsigned int * p32; // r0
    float * xyzs; // r0
    float * texcoords; // r0
    unsigned char * colors; // r0
    signed char * normals; // r0
    unsigned char * weights; // r0
    unsigned char * pCallDL; // r0
}

// Range: 0x802C2050 -> 0x802C2748
// this: r22
void ENgcRenderer::QuadList(int nVerts /* r23 */, const float * xyzs /* r24 */, const float * texcoords /* r25 */, const unsigned char * colors /* r26 */, const signed char * normals /* r27 */, const unsigned char * weights /* r30 */, const unsigned char * pCallDL /* r29 */, unsigned char dualTexcoords /* r28 */) {
    // Local variables
    enum _GXAttrType type; // r4
    const float * pPos; // [invalid]
    const signed char * pNormals; // [invalid]
    const unsigned char * pColors; // [invalid]
    const float * pTexcoords; // [invalid]
    int i; // r30
    struct Vec tc; // r1+0x68
    struct Vec p; // r1+0x5C
    struct Vec n; // r1+0x50
    const float * pPos; // [invalid]
    const signed char * pNormals; // [invalid]
    const unsigned char * pColors; // [invalid]
    const float * pTexcoords; // [invalid]
    int i; // r0
    unsigned short * baseptr; // r30
    int i; // r29
    int p0; // r0
    int n0; // r0
    int c0; // r0
    int t0; // r0
    struct Vec tc; // r1+0x44
    struct Vec p; // r1+0x38
    struct Vec n; // r1+0x2C
    unsigned char * baseptr; // r29
    int i; // r30
    int p0; // r0
    int n0; // r0
    int c0; // r0
    int t0; // r0
    struct Vec tc; // r1+0x20
    struct Vec p; // r1+0x14
    struct Vec n; // r1+0x8
}

// Range: 0x802C2748 -> 0x802C2774
void ENgcRenderer::SetCombineMode() {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
    unsigned int mode; // r5
}

// Range: 0x802C2774 -> 0x802C2790
void ENgcRenderer::SetBlendMode() {
    // Local variables
    unsigned int mask; // r5
}

// Range: 0x802C2790 -> 0x802C3004
// this: r26
void ENgcRenderer::MovieFrame() {
    // Local variables
    class ENgcMovie * pMovie; // r27
    int status; // r0
    int i; // r23
    int i; // r23

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
    // -> unsigned int ENgcRSLightFlagMap[4];
    // -> static unsigned char bPausedDueToDiskError;
}

// Range: 0x802C3004 -> 0x802C33FC
// this: r29
void ENgcRenderer::RectListRot(struct EDLEntry * pe /* r27 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
    class EVec4 vColor; // r1+0x30
    unsigned char color[4]; // r1+0x8
    float * pf; // r28
    float z; // f31
    int nRects; // r31
    float * args; // [invalid]
    float * verts; // r30
    int i; // r27
    class EVec2 vCenter; // r1+0x10
    class EMat4 m; // r1+0x70
    float ngcMatrix[3][4]; // r1+0x40
}

// Range: 0x802C33FC -> 0x802C36CC
// this: r29
void ENgcRenderer::RectList(struct EDLEntry * pe /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
    class EVec4 vColor; // r1+0x10
    unsigned char color[4]; // r1+0x8
    float * pf; // r0
    float z; // f31
    int nRects; // r31
    float * args; // [invalid]
    float * verts; // r30
    int i; // r0

    // References
    // -> static unsigned char singleOutput;
}

// Range: 0x802C36CC -> 0x802C38A8
// this: r31
void ENgcRenderer::Stencil(struct EDLEntry * pe /* r30 */) {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
    int write; // r3
    int test; // r30
    int alphaValue; // r29
}

// Range: 0x802C38A8 -> 0x802C38AC
void ENgcRenderer::NgcTexInvalidateAll() {}

// Range: 0x802C38AC -> 0x802C39B4
// this: r28
void ENgcRenderer::NgcGXDisplayListApplyAndCall(unsigned char * pCallDL /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    unsigned char inShadowGeometryMode; // r0
    unsigned char useMultiPassShaders; // r0
    int iPass; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x802C39B4 -> 0x802C3D64
// this: r23
void ENgcRenderer::NgcGXDisplayListInt(struct EDLEntry * pe /* r24 */) {
    // Local variables
    unsigned char dualTexCoords; // r0
    unsigned int * p32; // r0
    signed short * pos; // r30
    signed short * texcoords; // r29
    unsigned char * colors; // r28
    signed char * normals; // r27
    unsigned char * pCallDL; // r26
    unsigned int size; // r25
    unsigned short nVerts; // r25
    unsigned short * baseptr; // r26
    int i; // r24
    int p0; // r4
    int n0; // r3
    int c0; // r0
    int t0; // r0
    struct Vec p; // r1+0x28
    struct Vec n; // r1+0x1C
    struct Vec tc; // r1+0x10
    signed short u; // r0
    signed short v; // r0
}

// Range: 0x802C3D64 -> 0x802C40D4
// this: r22
void ENgcRenderer::NgcGXDisplayList(struct EDLEntry * pe /* r21 */) {
    // Local variables
    unsigned char dualTexCoords; // r30
    unsigned int * p32; // r0
    float * pos; // r29
    float * texcoords; // r28
    unsigned char * colors; // r27
    signed char * normals; // r26
    unsigned char * pCallDL; // r31
    unsigned int size; // r25
    unsigned short nVerts; // r25
    unsigned short * baseptr; // r24
    int i; // r23
    int p0; // r0
    int n0; // r0
    int c0; // r0
    int t0; // r0
    struct Vec tc; // r1+0x20
    struct Vec p; // r1+0x14
    struct Vec n; // r1+0x8
}

// Range: 0x802C40D4 -> 0x802C4418
// this: r22
void ENgcRenderer::NgcTriListInt(struct EDLEntry * pe /* r24 */) {
    // Local variables
    int nVerts; // r30
    unsigned char dualTexCoords; // r0
    unsigned int * p32; // r0
    signed short * pos; // r29
    signed short * texcoords; // r28
    unsigned char * colors; // r27
    signed char * normals; // r26
    unsigned char * weights; // r25
    void * pCallDL; // r24
    enum _GXAttrType type; // r23
    int i; // r0
}

// Range: 0x802C4418 -> 0x802C4718
// this: r23
void ENgcRenderer::NgcTriList(struct EDLEntry * pe /* r24 */) {
    // Local variables
    int nVerts; // r30
    unsigned char dualTexCoords; // r0
    unsigned int * p32; // r0
    float * pos; // r29
    float * texcoords; // r28
    unsigned char * colors; // r27
    signed char * normals; // r26
    unsigned char * weights; // r25
    void * pCallDL; // r24
    enum _GXAttrType type; // r4
    int i; // r0
}

// Range: 0x802C4718 -> 0x802C49C4
// this: r27
void ENgcRenderer::NgcScreenTriList() {
    // Local variables
    int nVerts; // r31
    unsigned int * p32; // r0
    float * pos; // r30
    float * texcoords; // r29
    unsigned char * colors; // r28
    int i; // r0
}

// Range: 0x802C49C4 -> 0x802C49C8
void ENgcRenderer::ReadMetrics() {}

// Range: 0x802C49C8 -> 0x802C49D4
void ENgcRenderer::Shader() {}

// Range: 0x802C49D4 -> 0x802C4ADC
void ENgcRenderer::SetShaderPass() {
    // Local variables
    unsigned char threshold; // r7

    // References
    // -> static float _ngcAlphaTestThresholdMultiplier;
}

// Range: 0x802C4ADC -> 0x802C4E30
// this: r29
void ENgcRenderer::SetShader(class ENgcShader * shd /* r30 */) {
    // Local variables
    const struct EShaderDef * def; // r0
    int i; // r6
    int pass; // r25
}

// Range: 0x802C4E30 -> 0x802C4E7C
void ENgcRenderer::ScrambleRect() {
    // Local variables
    struct EDLEntryCommandF32 * p; // r0
    float z; // f1
    float * pp; // r0
    class EVec2 ul; // r1+0x10
    class EVec2 lr; // r1+0x8
}

// Range: 0x802C4E7C -> 0x802C523C
// this: r24
void ENgcRenderer::ScrambleRect(const class EVec2 & ul /* r21 */, const class EVec2 & lr /* r20 */, float z /* f31 */) {
    // Local variables
    float width; // f2
    float height; // f0
    float maxDim; // f0
    int tx0; // [invalid]
    int ty0; // [invalid]
    int tx1; // [invalid]
    int ty1; // [invalid]
    unsigned int x0; // r0
    unsigned int y0; // r28
    unsigned int x1; // r3
    unsigned int y1; // r4
    float time; // f1
    unsigned long rSeed; // r27
    float zNorm; // f30
    unsigned int x; // r26
    unsigned int y; // r25
    int offset; // r0
    unsigned long oldValue; // r1+0xC
    unsigned long zEFB; // r1+0x8
    float zFarIntVal; // f29
    float zVal; // f0
    int i; // r21
    int j; // r20
    unsigned long zIntVal; // r0

    // References
    // -> class EClock _sysclock;
    // -> class EClockMan * _pClockMan;
    // -> static int _ngcScrambleRectPixels;
}

// Range: 0x802C523C -> 0x802C53D4
// this: r21
void ENgcRenderer::VertexMorph() {
    // Local variables
    int nVerts; // r25
    unsigned int * p32; // r0
    signed short * morphDeltasArray[4]; // r1+0x30
    int morphDeltaIndex; // r24
    signed short * pos; // r23
    struct Vec vecPos; // r1+0x20
    struct Vec vecDelta; // r1+0x14
    float morphTargetWeight; // f1
    signed short * morphDeltas; // r5
    signed short * morphDeltas3; // r0
    int i; // r22
}

// Range: 0x802C53D4 -> 0x802C53E8
void ENgcRenderer::VertexMorphEnd() {}

// Range: 0x802C53E8 -> 0x802C56D0
// this: r19
void ENgcRenderer::WeightedBlendInt(enum _GXPrimitive prim /* r18 */, int nVerts /* r24 */, signed short * pos /* r25 */, signed char * normals /* r26 */, signed short * tcs /* r27 */, unsigned char * colors /* r28 */, unsigned char * weights /* r29 */, unsigned char dualTexCoords /* r30 */) {
    // Local variables
    float savedMatrices[4][3][4]; // r1+0x48
    struct Vec v; // r1+0x3C
    struct Vec outPos; // r1+0x30
    struct Vec outNorm; // r1+0x24
    int i; // r31
    int maxWeight; // r20
    int maxWeightIx; // r19
    int cm; // r18
    unsigned char weight; // r1+0x8
    float fWeight; // f29
    struct Vec vecWeight; // r1+0x18
    signed char nx; // r0
    signed char ny; // r0
    signed char nz; // r0
}

// Range: 0x802C56D0 -> 0x802C56D8
class ENgcRenderStateCache * ENgcRenderer::GetRenderStateCache() {}

// Range: 0x802C56D8 -> 0x802C56E0
void * ENgcRenderer::GetPreviousFrameBuffer() {}

// Range: 0x802C56E0 -> 0x802C575C
struct _GXRenderModeObj ENgcRenderer::GetCurrentRenderMode() {}

// Range: 0x802C575C -> 0x802C57B8
// this: r29
void * ENgcRenderer::ParticleListBegin(unsigned int iParticles /* r30 */, unsigned int iParticleType /* r31 */) {}

// Range: 0x802C57B8 -> 0x802C5B5C
// this: r25
void ENgcRenderer::ParticleListEnd(unsigned int iParticles /* r26 */) {
    // Local variables
    struct EGEPackedParticle * p; // r29
    float m[3][4]; // r1+0x38
    int i; // r28
    struct Vec pos; // r1+0x2C
    struct Vec widthVec; // r1+0x20
    struct Vec heightVec; // r1+0x14
    struct Vec pos0; // r1+0x8
    unsigned char alpha; // r27
}

// Range: 0x802C5B5C -> 0x802C5B78
void ENgcRenderer::VertexMorphWeightsList() {}

// Range: 0x802C5B78 -> 0x802C5B80
unsigned char ENgcRenderer::EnablePrevFrameCopy() {}

// Range: 0x802C5B80 -> 0x802C5B88
unsigned char ENgcRenderer::ForceDisableFullSceneAA() {}

// Range: 0x802C5B88 -> 0x802C5B90
void ENgcRenderer::ForceDisableFog() {}

// Range: 0x802C5B90 -> 0x802C5BC8
void CheckRenderFIFOError() {
    // References
    // -> static int count;
    // -> long s_missedVBlanks;
    // -> unsigned char s_frameAvailable;
}

// Range: 0x802C5BC8 -> 0x802C5C00
void SyncPerEntity() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}


