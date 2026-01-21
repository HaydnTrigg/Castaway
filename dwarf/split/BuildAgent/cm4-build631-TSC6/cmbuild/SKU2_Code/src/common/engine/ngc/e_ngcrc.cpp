/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B88DC -> 0x802BB5C4
*/
// Range: 0x802B88DC -> 0x802B8918
// this: r31
ENgcRC::ENgcRC() {
    // References
    // -> struct [anonymous] __vt__6ENgcRC;
}

// Range: 0x802B8918 -> 0x802B8970
// this: r30
ENgcRC::~ENgcRC() {}

// Range: 0x802B8970 -> 0x802B8974
void ENgcRC::Init() {}

// Range: 0x802B8974 -> 0x802B89B8
void ENgcRC::EndCommand() {}

// Range: 0x802B89B8 -> 0x802B89F0
void ENgcRC::TriStrip() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B89F0 -> 0x802B8D0C
// this: r15
void ENgcRC::TriStrip(int nVerts /* r16 */, const float * xyzs /* r14 */, const float * texcoords /* r17 */, const unsigned char * colors /* r18 */, const signed char * normals /* r19 */, const unsigned char * weights /* r20 */, unsigned char dualTexcoords /* r21 */) {
    // Local variables
    int xyzsSize; // r31
    int texcoordsSize; // r30
    int normalsSize; // r29
    int weightsSize; // r28
    int colorsSize; // r27
    int memNeeded; // r4
    char * p; // r3
    float * xyzsDL; // r26
    float * texcoordsDL; // r25
    signed char * normalsDL; // r24
    unsigned char * weightsDL; // r23
    unsigned char * colorsDL; // r22
    void * gxDL; // r14
    unsigned int byteCount; // r1+0x10
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> static unsigned char _ngcUseGXDisplayList;
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B8D0C -> 0x802B8EEC
// this: r23
void ENgcRC::TriStripRef(int nVerts /* r24 */, const float * xyzs /* r25 */, const float * texcoords /* r26 */, const unsigned char * colors /* r27 */, const signed char * normals /* r28 */, const unsigned char * weights /* r29 */, unsigned char dualTexcoords /* r30 */) {
    // Local variables
    int xyzsSize; // r5
    int texcoordsSize; // r22
    int normalsSize; // r21
    int weightsSize; // r20
    int colorsSize; // r19
    void * gxDL; // r31
    unsigned int byteCount; // r1+0x10
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B8EEC -> 0x802B91E8
// this: r15
void ENgcRC::TriStrip(int nIndices /* r16 */, int nVerts /* r17 */, const unsigned short * indices /* r18 */, const float * xyzs /* r19 */, const float * texcoords /* r20 */, const unsigned char * colors /* r14 */, const signed char * normals /* f7 */, const unsigned char * weights /* r21 */) {
    // Local variables
    int xyzsSize; // r31
    int texcoordsSize; // r30
    int normalsSize; // r29
    int weightsSize; // r28
    int colorsSize; // r27
    int memNeeded; // r4
    char * p; // r3
    float * xyzsDL; // r26
    float * texcoordsDL; // r25
    signed char * normalsDL; // r24
    unsigned char * weightsDL; // r23
    unsigned char * colorsDL; // r22
    void * gxDL; // r14
    unsigned int byteCount; // r1+0x1C
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B91E8 -> 0x802B93C8
// this: r26
void ENgcRC::TriStripRef(int nIndices /* r18 */, int nVerts /* r27 */, const unsigned short * indices /* r19 */, const float * xyzs /* r28 */, const float * texcoords /* r29 */, const unsigned char * colors /* r30 */, const signed char * normals /* r31 */, const unsigned char * weights /* r20 */) {
    // Local variables
    int xyzsSize; // r4
    int texcoordsSize; // r25
    int normalsSize; // r24
    int weightsSize; // r23
    int colorsSize; // r22
    void * gxDL; // r21
    unsigned int byteCount; // r1+0x18
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B93C8 -> 0x802B95DC
// this: r22
void ENgcRC::TriStripRefNumWeights(int nVerts /* r23 */, const signed short * xyzs /* r24 */, const signed short * texcoords /* r25 */, const unsigned char * colors /* r26 */, const signed char * normals /* r27 */, unsigned char numWeightMatrices /* r28 */, const unsigned char * weights /* r29 */, unsigned char dualTexcoords /* r30 */) {
    // Local variables
    int xyzsSize; // r5
    int texcoordsSize; // r21
    int normalsSize; // r20
    int weightsSize; // r19
    int colorsSize; // r18
    void * gxDL; // r31
    unsigned int dlSize; // r1+0x18
    unsigned char skinned; // r18
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B95DC -> 0x802B98E0
// this: r15
void ENgcRC::TriStrip(int nIndices /* r16 */, int nVerts /* r17 */, const unsigned short * indices /* r18 */, const signed short * xyzs /* f4 */, const signed short * texcoords /* r19 */, const unsigned char * colors /* r20 */, const signed char * normals /* r14 */, unsigned char numWeightMatrices /* f8 */, const unsigned char * weights /* r21 */) {
    // Local variables
    int xyzsSize; // r31
    int texcoordsSize; // r30
    int normalsSize; // r29
    int weightsSize; // r28
    int colorsSize; // r27
    int memNeeded; // r4
    char * p; // r3
    signed short * xyzsDL; // r26
    signed short * texcoordsDL; // r25
    signed char * normalsDL; // r24
    unsigned char * weightsDL; // r23
    unsigned char * colorsDL; // r22
    void * gxDL; // r14
    unsigned int dlSize; // r1+0x1C
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B98E0 -> 0x802B9AD8
// this: r21
void ENgcRC::TriStripRef(int nIndices /* r22 */, int nVerts /* r23 */, const unsigned short * indices /* r24 */, const signed short * xyzs /* r25 */, const signed short * texcoords /* r26 */, const unsigned char * colors /* r27 */, const signed char * normals /* r28 */, unsigned char numWeightMatrices /* r29 */, const unsigned char * weights /* r30 */) {
    // Local variables
    int xyzsSize; // r4
    int texcoordsSize; // r20
    int normalsSize; // r19
    int weightsSize; // r18
    int colorsSize; // r17
    void * gxDL; // r31
    unsigned int dlSize; // r1+0x18
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802B9AD8 -> 0x802B9B34
// this: r31
void ENgcRC::TextureCacheInvalidate() {
    // Local variables
    struct EDLEntryCommandF32 * p; // r0
}

// Range: 0x802B9B34 -> 0x802B9D64
// this: r16
void ENgcRC::TriStripDL(const unsigned char * dl /* r17 */, int size /* r18 */, int nVerts /* r19 */, const float * xyzs /* r20 */, const float * texcoords /* r21 */, const unsigned char * colors /* r22 */, const signed char * normals /* r23 */) {
    // Local variables
    int xyzsSize; // r31
    int texcoordsSize; // r30
    int colorsSize; // r29
    int normalsSize; // r28
    int memNeeded; // r4
    char * p; // r3
    void * xyzsDL; // r27
    void * texcoordsDL; // r26
    void * colorsDL; // r25
    void * normalsDL; // r24
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x802B9D64 -> 0x802B9E94
// this: r23
void ENgcRC::TriStripDLRef(const unsigned char * dl /* r24 */, int size /* r25 */, int nVerts /* r26 */, const float * xyzs /* r27 */, const float * texcoords /* r28 */, const unsigned char * colors /* r29 */, const signed char * normals /* r30 */, unsigned char dualTexCoords /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x802B9E94 -> 0x802BA00C
// this: r23
void ENgcRC::TriStripDL(const unsigned char * dl /* r24 */, int size /* r25 */, int nVerts /* r26 */, const signed short * xyzs /* r27 */, const signed short * texcoords /* r28 */, const unsigned char * colors /* r29 */, const signed char * normals /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x802BA00C -> 0x802BA16C
// this: r22
void ENgcRC::TriStripDLRef(const unsigned char * dl /* r23 */, int size /* r24 */, int nVerts /* r25 */, const signed short * xyzs /* r26 */, const signed short * texcoords /* r27 */, const unsigned char * colors /* r28 */, const signed char * normals /* r29 */, unsigned char dualTexCoords /* r30 */, unsigned char vertexIntensity /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x802BA16C -> 0x802BA388
// this: r24
void ENgcRC::TriList(int nVerts /* r25 */, const signed short * xyzs /* r26 */, const signed short * texcoords /* r27 */, const unsigned char * colors /* r28 */, const signed char * normals /* r29 */, const unsigned char * weights /* r30 */, unsigned char dualTexCoords /* r31 */) {
    // Local variables
    void * gxDL; // r22
    unsigned int byteCount; // r1+0x18
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> static unsigned char _ngcUseGXDisplayList;
}

// Range: 0x802BA388 -> 0x802BA38C
void ENgcRC::TriList() {}

// Range: 0x802BA38C -> 0x802BA390
void ENgcRC::ScreenTriList() {}

// Range: 0x802BA390 -> 0x802BA3EC
// this: r31
void ENgcRC::ReadMetrics() {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802BA3EC -> 0x802BA40C
void ENgcRC::Shader() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA40C -> 0x802BA41C
void ENgcRC::SetVertexMorphingOnOrOff() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA41C -> 0x802BA428
void ENgcRC::ScrambleRect() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA428 -> 0x802BA438
void ENgcRC::ModelMatrixList() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA438 -> 0x802BA474
void ENgcRC::ModelMatrixIndex() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA474 -> 0x802BA51C
// this: r28
void ENgcRC::ModelMatrices(int matrixCount /* r29 */) {
    // Local variables
    int maxNum; // r31
    int i; // r30
}

// Range: 0x802BA51C -> 0x802BA5A0
void ENgcRC::DisplayList(class EDL * pDL /* r31 */) {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA5A0 -> 0x802BA5C8
void ENgcRC::Texture() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA5C8 -> 0x802BA5CC
void ENgcRC::SetMipMap() {}

// Range: 0x802BA5CC -> 0x802BA604
void ENgcRC::EnableGeometryModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA604 -> 0x802BA640
void ENgcRC::DisableGeometryModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA640 -> 0x802BA678
void ENgcRC::SetGeometryModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA678 -> 0x802BA6B4
void ENgcRC::EnableRasterModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA6B4 -> 0x802BA6F4
void ENgcRC::DisableRasterModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA6F4 -> 0x802BA730
void ENgcRC::SetRasterModes() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA730 -> 0x802BA768
void ENgcRC::Viewport() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA768 -> 0x802BA7BC
void ENgcRC::ClipRect() {
    // Local variables
    struct EDLEntryCommandU16andU32 pCommand[4]; // r1+0x8
    float * pf; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA7BC -> 0x802BA7F4
void ENgcRC::Scissor() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA7F4 -> 0x802BA82C
void ENgcRC::ViewMatrix() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA82C -> 0x802BA864
void ENgcRC::ProjectionMatrix() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA864 -> 0x802BA89C
void ENgcRC::WindowMatrix() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA89C -> 0x802BA8D0
void ENgcRC::SaveState() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA8D0 -> 0x802BA904
void ENgcRC::RestoreState() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA904 -> 0x802BA96C
void ENgcRC::Lights() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA96C -> 0x802BA9A4
void ENgcRC::Material() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA9A4 -> 0x802BA9B0
void ENgcRC::SetFogValues() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BA9B0 -> 0x802BAA48
void ENgcRC::Rect() {
    // Local variables
    struct EDLEntryCommandU16andU32 p[9]; // r1+0x8
    float * pf; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAA48 -> 0x802BAAB0
void ENgcRC::RectList() {
    // Local variables
    struct EDLEntryCommandU16andU32 pCommand[5]; // r1+0x8
    float * pf; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAAB0 -> 0x802BAB18
void ENgcRC::RectListRot() {
    // Local variables
    struct EDLEntryCommandU16andU32 pCommand[5]; // r1+0x8
    float * pf; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAB18 -> 0x802BAB90
void ENgcRC::DirectRect() {
    // Local variables
    struct EDLEntryCommandU16andU32 p[7]; // r1+0x8
    float * pf; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAB90 -> 0x802BABEC
void ENgcRC::EnvironmentMap() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802BABEC -> 0x802BAC84
void ENgcRC::TextureMatrix() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8
    unsigned int flags; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAC84 -> 0x802BACC0
void ENgcRC::RecalcMatrices() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BACC0 -> 0x802BACC4
void ENgcRC::GeometrySetup() {}

// Range: 0x802BACC4 -> 0x802BAD08
void ENgcRC::ZTest() {
    // Local variables
    struct EDLEntryCommandU8andU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAD08 -> 0x802BAF48
// this: r31
void ENgcRC::ZClear(float xUpperLeft /* f27 */, float yUpperLeft /* f28 */, float xLowerRight /* f29 */, float yLowerRight /* f30 */, float zval /* f31 */) {
    // References
    // -> class ENgcGraphics _ngcGfx;
}

// Range: 0x802BAF48 -> 0x802BAFC4
void ENgcRC::AlphaTest(float threshold /* f1 */) {
    // Local variables
    struct EDLEntryCommandU8andU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BAFC4 -> 0x802BB004
void ENgcRC::Stencil() {
    // Local variables
    struct EDLEntryCommandU8andU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB004 -> 0x802BB074
void ENgcRC::SetBlendMode() {
    // Local variables
    int k; // r0
    struct EDLEntryCommandU16andU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB074 -> 0x802BB0B0
void ENgcRC::SetCombineMode() {
    // Local variables
    struct EDLEntryCommandU16andU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB0B0 -> 0x802BB0BC
void ENgcRC::SetAlpha() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB0BC -> 0x802BB0F8
void ENgcRC::RenderSurface() {
    // Local variables
    struct EDLEntryCommandU32 p; // r1+0x8

    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB0F8 -> 0x802BB3B4
// this: r17
void ENgcRC::QuadList(int nVerts /* r18 */, const float * xyzs /* r23 */, const float * texcoords /* r19 */, const unsigned char * colors /* r20 */, const signed char * normals /* r21 */, unsigned char dualTexcoords /* r22 */) {
    // Local variables
    int xyzsSize; // r31
    int texcoordsSize; // r30
    int normalsSize; // r29
    int colorsSize; // r28
    int memNeeded; // r4
    char * p; // r3
    float * xyzsDL; // r27
    float * texcoordsDL; // r26
    signed char * normalsDL; // r25
    unsigned char * colorsDL; // r24
    unsigned char * weightsDL; // r23
    void * gxDL; // r19
    unsigned int byteCount; // r1+0x10
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0

    // References
    // -> static unsigned char _ngcUseGXDisplayList;
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB3B4 -> 0x802BB3DC
void ENgcRC::SpriteList() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB3DC -> 0x802BB414
void ENgcRC::LineList() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB414 -> 0x802BB418
void ENgcRC::Debug() {}

// Range: 0x802BB418 -> 0x802BB41C
void ENgcRC::ParticleListInfo() {}

// Range: 0x802BB41C -> 0x802BB428
void * ENgcRC::ParticleListBegin() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB428 -> 0x802BB434
void ENgcRC::ParticleListEnd() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB434 -> 0x802BB440
void ENgcRC::VertexMorphWeightsList() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802BB440 -> 0x802BB550
// this: r28
void ENgcRC::VertexMorphAndSyncCache(int nVerts /* r29 */, const signed short * xyzs /* r30 */, signed short * * morphDeltas /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x802BB550 -> 0x802BB5C4
// this: r31
void ENgcRC::VertexMorphAndSyncCacheEnd() {
    // Local variables
    struct EDLEntryCommandU32 * pCommand; // r0
}


