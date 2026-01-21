/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_submodelshader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029C1B0 -> 0x802A1AC4
*/
// Range: 0x8029C1B0 -> 0x8029C5F0
void RaycastLastHit::ExtractVertexData(class RaycastLastHit & first /* r28 */, class RaycastLastHit & second /* r29 */, class EVec3 * firstVerts /* r30 */, class EVec3 * secondVerts /* r31 */) {
    // Local variables
    class EIStaticSubModel * pLevelModel; // r25
    unsigned short * pIndicies; // r10
    unsigned int indexStride; // r9
    signed short * pPositions; // r4
    unsigned int offset; // r5
}

// Range: 0x8029C5F0 -> 0x8029C7A4
int RaycastLastHit::CoincidenceTest(class EVec3 * shared /* r30 */) {
    // Local variables
    int coincidence; // r31
    class EVec3 firstVerts[3]; // r1+0x8C
    class EVec3 secondVerts[3]; // r1+0x68
    int i; // r6
    int j; // r0
}

// Range: 0x8029C7A4 -> 0x8029C880
// this: r31
ESubModelShader::ESubModelShader() {}

// Range: 0x8029C880 -> 0x8029C8EC
// this: r30
ESubModelShader::~ESubModelShader() {}

// Range: 0x8029C8EC -> 0x8029C930
// this: r31
void ESubModelShader::DelRefSubResources() {}

// Range: 0x8029C930 -> 0x8029C97C
// this: r31
void ESubModelShader::AddRefSubResources() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8029C97C -> 0x8029C9CC
// this: r5
unsigned char ESubModelShader::TryIncrementSubResources() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8029C9CC -> 0x8029CBA0
void ESubModelShader::DeallocateStripData(struct ESMSStrip * pStrip /* r28 */, unsigned char bNotPositions /* r29 */) {
    // Local variables
    int i; // r29

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029CBA0 -> 0x8029CC04
// this: r31
void ESubModelShader::Deallocate() {}

// Range: 0x8029CC04 -> 0x8029CC94
// this: r31
void ESubModelShader::DeallocateDisplayList() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029CC94 -> 0x8029CD1C
// this: r28
void ESubModelShader::FreeStripResource(unsigned char bNotPositions /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029CD1C -> 0x8029CDEC
// this: r28
void ESubModelShader::FreeMorphStripResource() {
    // Local variables
    int i; // r29
}

// Range: 0x8029CDEC -> 0x8029CE98
// this: r27
void ESubModelShader::FreeLatticeResource() {
    // Local variables
    int i; // r28

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8029CE98 -> 0x8029CFF8
// this: r9
unsigned int ESubModelShader::CreateRCPrimitive(struct ESMSStrip * pStrip /* r31 */) {}

// Range: 0x8029CFF8 -> 0x8029D070
void ESubModelShader::CreateVertexMorphRCPrimitive() {}

// Range: 0x8029D070 -> 0x8029D154
void ESubModelShader::ReadPositions(class EFile * s /* r30 */, struct ESMSStrip * pStrip /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029D154 -> 0x8029D240
void ESubModelShader::ReadNormalsOld(class EFile * s /* r30 */, struct ESMSStrip * pStrip /* r31 */) {
    // Local variables
    unsigned int i; // r27
    signed char n[4]; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029D240 -> 0x8029D444
void ESubModelShader::ReadWeights(class EFile * s /* r30 */, struct ESMSStrip * pStrip /* r31 */) {
    // Local variables
    unsigned char matrixUsed[4]; // r1+0x8
    unsigned int c; // r4
    int d; // r4

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029D444 -> 0x8029D5CC
void ESubModelShader::ReadMorphDeltas(class EFile * s /* r26 */, struct ESMSStrip * pStrip /* r31 */) {
    // Local variables
    int numMorphDeltas; // r29
    int arraySize; // r28
    int i; // r27
    signed short temp; // r6
    int i; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029D5CC -> 0x8029DEF0
void ESubModelShader::OptimizeStripsForMemory(struct ESMSStrip * pStrip /* r28 */, int stripLength /* r29 */, unsigned char dualUVs /* r30 */) {
    // Local variables
    int numVerts; // r26
    int numComponents; // r25
    unsigned short * pos; // r27
    unsigned short * remapping; // r31
    unsigned short * orgPos; // r11
    int numUnique; // r24
    int orgIx; // r12
    unsigned char found; // r19
    int uniqueIx; // r20
    unsigned char isDifferent; // r21
    int i; // r0
    unsigned short * posIx; // r4
    int i; // r5
    int uvSize; // r24
    unsigned short * uvs; // r23
    unsigned short * remapping; // r22
    unsigned short * orgUVs; // r10
    int numUnique; // r31
    int orgIx; // r11
    unsigned char found; // r18
    int uniqueIx; // r12
    unsigned char isDifferent; // r17
    int i; // r0
    int i; // r21
    unsigned short * uvIx; // r5
    int i; // r0
    unsigned char * normals; // r21
    unsigned short * remapping; // r22
    unsigned char * orgNormals; // r11
    int numUnique; // r23
    int orgIx; // r12
    unsigned char found; // r17
    int uniqueIx; // r18
    unsigned char isDifferent; // r19
    int i; // r0
    unsigned short * nrmIx; // r4
    int i; // r5

    // References
    // -> static int _ngcStatSavingsFrom8bitIndices;
    // -> static int _ngcStatNumStrips8bit;
    // -> static int _ngcStatSavingsFromCollapsingArrays;
    // -> class EGraphics * _pGfx;
    // -> static int _ngcStatNumStripsFixedPoint;
    // -> static int _ngcStatNumStripsTotal;
}

// Range: 0x8029DEF0 -> 0x8029E290
// this: r25
void ESubModelShader::RebuildGXDisplayList(struct ESMSStrip * pStrip /* r26 */, unsigned int dlIndexOffset /* r27 */) {
    // Local variables
    int newdlsize; // r28
    unsigned char * buffer; // r29
    struct _GDLObj dlObj; // r1+0x8
    enum _GXVtxFmt format; // r0
    int i; // r28
    unsigned short index; // r24
    unsigned int stride; // r24
    struct _GDLObj * __GDCurrentDL'179; // r0

    // References
    // -> struct _GDLObj * __GDCurrentDL;
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029E290 -> 0x8029E45C
// this: r28
unsigned int ESubModelShader::ReadIndices(class EFile * s /* r29 */, struct ESMSStrip * pStrip /* r30 */, int modelVersion /* r31 */) {
    // Local variables
    unsigned int stripLength; // r1+0x14
    unsigned char indexStride; // r1+0x8
    unsigned int dlsize; // r1+0x10
    unsigned int dlIndexOffset; // r1+0xC

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029E45C -> 0x8029EA58
// this: r20
void ESubModelShader::Read(class EFile * s /* r21 */, int modelVersion /* r22 */) {
    // Local variables
    unsigned int shaderId; // r1+0x14
    unsigned int nStrips; // r1+0x10
    unsigned int cStrip; // r16
    unsigned char present; // r1+0xA
    unsigned char done; // r29
    int nMatrices; // r28
    int nModeChanges; // r27
    unsigned char weighting; // r26
    unsigned char setWeighted; // r25
    struct ESMSStrip * pStrip; // r24
    unsigned int currentStrip; // r23
    unsigned char command; // r1+0x9
    unsigned short sourcePos; // r1+0xC
    unsigned char bufferPos; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
    // -> class EShaderManager _shaderman;
}

// Range: 0x8029EA58 -> 0x8029EA5C
void ESubModelShader::DrawWireFrame() {}

// Range: 0x8029EA5C -> 0x8029EB3C
// this: r27
void ESubModelShader::AllocateStripsMorph() {
    // Local variables
    int numVerts; // r4
    int numStrips; // r0
    int i; // r28

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029EB3C -> 0x8029EC58
// this: r31
void ESubModelShader::AllocateMorphTargetArray(unsigned int numCurrentBrowseMorphTargets /* r28 */, unsigned int numMorphRegions /* r29 */) {
    // Local variables
    int i; // r6
}

// Range: 0x8029EC58 -> 0x8029ED1C
// this: r29
unsigned char ESubModelShader::RegisterCurrentBrowseMorphTarget(class ESubModelShader * pMorphTarget /* r30 */, int currentBrowseMorphTargetIndex /* r31 */) {
    // Local variables
    int i; // r0
}

// Range: 0x8029ED1C -> 0x8029ED30
void ESubModelShader::UnregisterCurrentBrowseMorphTarget() {}

// Range: 0x8029ED30 -> 0x8029ED50
void ESubModelShader::UnregisterUserSelectedMorphTarget() {}

// Range: 0x8029ED50 -> 0x8029EDD8
void ESubModelShader::PromoteCurrentBrowseMorphTarget() {
    // Local variables
    int i; // r0
    int currentBrowseMorphTargetIndex; // r7
}

// Range: 0x8029EDD8 -> 0x8029EE7C
// this: r28
void ESubModelShader::ResetStripsMorph() {
    // Local variables
    int numVerts; // r0
    int numStrips; // r0
    int i; // r29
}

// Range: 0x8029EE7C -> 0x8029F2EC
// this: r31
unsigned char ESubModelShader::BuildDisplayListStripsMorph() {
    // Local variables
    class EVec3 vertSrc; // r1+0x80
    class EVec3 vertDelta; // r1+0x74
    class EVec3 vertDst; // r1+0x68
    int i; // r5
    int j; // r6
    int c; // r30
    signed short * srcVertList; // r7
    signed short * dstVertList; // r8
    float * srcVertList; // r12
    float * dstVertList; // r29
    int nTris; // r28
    class ERC * prc; // r27
    unsigned int d; // r26

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029F2EC -> 0x8029F834
unsigned char ESubModelShader::ApplyMorphTargetsToStripsMorph() {
    // Local variables
    class EVec3 vertDelta; // r1+0xBC
    class EVec3 vertDst; // r1+0xB0
    int i; // r9
    int j; // r10
    int k; // r11
    signed short * dstVertList; // r12
    signed short * targetVertList; // r27
    signed short * targetVertList; // r27
    float * dstVertList; // r7
    float * targetVertList; // r8
    float * targetVertList; // r8
}

// Range: 0x8029F834 -> 0x8029FA70
// this: r29
unsigned char ESubModelShader::CreateLatticeList(class TArray * volumeList /* r30 */) {
    // Local variables
    int * idList; // r31
    int i; // r25
    unsigned char found; // r9
    int h; // r10
    int i; // r0
    int j; // r11
    int i; // r7

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8029FA70 -> 0x8029FC0C
// this: r29
void ESubModelShader::AllocateLatticeParameterVerts() {
    // Local variables
    int i; // r9
    int j; // r10
    int k; // r11
    int i; // r30

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8029FC0C -> 0x8029FF78
// this: r24
void ESubModelShader::CreateLatticeParameterVerts() {
    // Local variables
    class EVec3 vert; // r1+0x38
    int i; // r26
    int j; // r25
    int k; // r7
    signed short * vertList; // r5
    float * vertList; // r5
    int i; // r6
}

// Range: 0x8029FF78 -> 0x802A0344
// this: r27
void ESubModelShader::ApplyLatticesToStripsMorph() {
    // Local variables
    int vertIdx; // r6
    int stripIdx; // r5
    class EVec3 vertDelta; // r1+0x98
    class EVec3 vertSrc; // r1+0x8C
    class EVec3 vertNew; // r1+0x80
    int i; // r29
    int j; // r28
    signed short * vertDstList; // r3
    signed short * vertSrcList; // r5
    float * vertDstList; // r5
    float * vertSrcList; // r4
}

// Range: 0x802A0344 -> 0x802A082C
// this: r24
void ESubModelShader::BuildDisplayList(struct ESMBuildDisplayListData * pD /* r25 */) {
    // Local variables
    unsigned char wallMode; // r28
    float minX; // f27
    float maxX; // f26
    int c; // r29
    int nTris; // r27
    class ERC * prc; // r26
    unsigned char useUnoptimizedFlexRenderer; // r4
    unsigned int d; // r31
    unsigned char * vertWeights; // r0
    unsigned int i; // r7
    float x; // f0
    unsigned char weight; // r8
    unsigned char invWeight; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802A082C -> 0x802A0C14
// this: r26
void ESubModelShader::BuildDisplayList(const char * owner /* r24 */, unsigned char wallMode /* r27 */, float minX /* f26 */, float maxX /* f27 */) {
    // Local variables
    int nTris; // r30
    class ERC * prc; // r29
    unsigned char useUnoptimizedFlexRenderer; // r4
    int c; // r28
    unsigned int d; // r24
    unsigned char * vertWeights; // r0
    unsigned int i; // r7
    float x; // f0
    unsigned char weight; // r8
    unsigned char invWeight; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802A0C14 -> 0x802A0CB8
void ESubModelShader::GetMinMaxX() {
    // Local variables
    int c; // r10
    signed short * pos; // r11
    unsigned int v; // r12
    float x; // f1
}

// Range: 0x802A0CB8 -> 0x802A0CC0
unsigned char ESubModelShader::CanColorBeModified() {}

// Range: 0x802A0CC0 -> 0x802A102C
void ESubModelShader::TransformModelUV() {
    // Local variables
    float scale_x; // f0
    float scale_y; // f1
    float translate_x; // f2
    float translate_y; // f3
    unsigned char dualUVs; // r6
    int uvSize; // r7
    int stripIdx; // r8
    signed short * tcs; // r11
    float u; // f4
    float v; // f4
    float u2; // f4
    float v2; // f4
    unsigned int vertIdx; // r12
    int stripIdx; // r11
    float * tcs; // r12
    float u; // f4
    float v; // f4
    float u2; // f4
    float v2; // f4
    unsigned int vertIdx; // r31
}

// Range: 0x802A102C -> 0x802A1434
static unsigned char _RayTriIntersection(const class EVec3 & ray_pos /* r23 */, const class EVec3 & ray_dir /* r24 */, const class EVec3 & V0 /* r25 */, const class EVec3 & V1 /* r26 */, const class EVec3 & V2 /* r27 */, float & hit_dist /* r28 */, class EVec3 & hit_pos /* r29 */, unsigned char bBackfaces /* r30 */) {
    // Local variables
    class EVec3 v0v1; // r1+0x50
    class EVec3 v0v2; // r1+0x44
    class EVec3 normal; // r1+0x38
    class EVec3 P; // r1+0x2C
    unsigned char inter; // r31
    float d; // f30
    float NdD; // f0
    float t; // f0
    int i1; // r0
    int i2; // r3
    float u0; // f6
    float u1; // f7
    float u2; // f8
    float v0; // f9
    float v1; // f10
    float v2; // f11
    float alpha; // f1
    float beta; // f4
}

// Range: 0x802A1434 -> 0x802A1670
unsigned char ESubModelShader::RaycastIntersectionStripLast() {
    // Local variables
    unsigned char bIndexed; // r0
    unsigned short * pIndicies; // r29
    signed short * pPositions; // r9
    unsigned int indexStride; // r30
    unsigned int offset; // r3
    class EVec3 Vs[3]; // r1+0x8
}

// Range: 0x802A1670 -> 0x802A1954
unsigned char ESubModelShader::RaycastIntersectionStrip(const class EVec3 & ray_pos /* r18 */, const class EVec3 & ray_dir /* r19 */, class EVec3 & hit_pos /* r20 */, float & hit_dist /* r21 */, unsigned char bFirst /* r22 */, class RaycastLastHit * lastHit /* r23 */) {
    // Local variables
    unsigned char bHit; // f15
    unsigned char bIndexed; // r3
    unsigned short * pIndicies; // r28
    signed short * pPositions; // r27
    unsigned short * pFlags; // r26
    unsigned int nIndicies; // r14
    unsigned int indexStride; // r25
    class EVec3 Verts[3]; // r1+0x8
    unsigned int iVert; // r24
}

// Range: 0x802A1954 -> 0x802A1AC4
// this: r23
unsigned char ESubModelShader::RaycastIntersection(const class EVec3 & ray_pos /* r24 */, const class EVec3 & ray_dir /* r25 */, class EVec3 & hit_pos /* r26 */, float & hit_dist /* r27 */, unsigned char bFirst /* r28 */, unsigned char bIgnoreLast /* r29 */, class RaycastLastHit * lastHit /* r30 */) {
    // Local variables
    unsigned char bHit; // r31
    int iStrip; // r21
}


