/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_submodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029B248 -> 0x8029C1B0
*/
// Range: 0x8029B248 -> 0x8029B288
// this: r31
ESubModel::ESubModel() {}

// Range: 0x8029B288 -> 0x8029B340
// this: r29
ESubModel::~ESubModel() {}

// Range: 0x8029B340 -> 0x8029B3A4
// this: r29
void ESubModel::DelRefSubResources() {
    // Local variables
    int c; // r30
}

// Range: 0x8029B3A4 -> 0x8029B408
// this: r29
void ESubModel::AddRefSubResources() {
    // Local variables
    int c; // r30
}

// Range: 0x8029B408 -> 0x8029B4A8
// this: r29
unsigned char ESubModel::TryIncrementSubResources() {
    // Local variables
    int c; // r30
    int undo; // r30
}

// Range: 0x8029B4A8 -> 0x8029B660
// this: r26
void ESubModel::Read(class EFile * s /* r27 */, int modelVersion /* r28 */) {
    // Local variables
    unsigned int numTrees; // r1+0x10
    unsigned int i; // r30
    unsigned int shaderId; // r1+0xC
    class EVec3 vMin; // r1+0x20
    class EVec3 vMax; // r1+0x14
    int count; // r1+0x8
    int i; // r29
}

// Range: 0x8029B660 -> 0x8029B700
// this: r27
void ESubModel::Draw(class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B700 -> 0x8029B790
// this: r27
void ESubModel::DrawGeometry(class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B790 -> 0x8029B82C
// this: r27
void ESubModel::DrawAsShadow(class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B82C -> 0x8029B8A0
// this: r28
void ESubModel::DrawWireFrame(class ERC * prc /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B8A0 -> 0x8029B914
// this: r28
void ESubModel::BuildDisplayList(struct ESMBuildDisplayListData * pDataExchange /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B914 -> 0x8029B980
// this: r27
void ESubModel::GetMinMaxX(float * minX /* r28 */, float * maxX /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B980 -> 0x8029B9E8
// this: r29
unsigned char ESubModel::BuildDisplayListStripsMorph() {
    // Local variables
    int i; // r30
}

// Range: 0x8029B9E8 -> 0x8029BA4C
// this: r29
void ESubModel::ResetStripsMorph() {
    // Local variables
    int i; // r30
}

// Range: 0x8029BA4C -> 0x8029BAD0
// this: r26
unsigned char ESubModel::ApplyMorphTargetsToStripsMorph(float * currentBrowseMorphTargetWeightList /* r27 */, float * userSelectedMorphTargetWeightList /* r28 */) {
    // Local variables
    unsigned char status; // r30
    int i; // r29
}

// Range: 0x8029BAD0 -> 0x8029BB34
// this: r29
void ESubModel::ApplyLatticesToStripsMorph() {
    // Local variables
    int i; // r30
}

// Range: 0x8029BB34 -> 0x8029BBA0
// this: r27
void ESubModel::AllocateMorphTargetArray(unsigned int numCurrentBrowseMorphTargets /* r28 */, unsigned int numMorphRegions /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BBA0 -> 0x8029BC14
// this: r27
unsigned char ESubModel::RegisterCurrentBrowseMorphTarget(class ESubModel * pMorphTarget /* r28 */, int currentBrowseMorphTargetIndex /* r29 */) {
    // Local variables
    unsigned char status; // r3
    int i; // r30
}

// Range: 0x8029BC14 -> 0x8029BC88
// this: r28
void ESubModel::UnregisterCurrentBrowseMorphTarget(int currentBrowseMorphTargetIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BC88 -> 0x8029BCFC
// this: r28
void ESubModel::UnregisterUserSelectedMorphTarget(int userSelectedMorphTargetIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BCFC -> 0x8029BD68
// this: r27
void ESubModel::PromoteCurrentBrowseMorphTarget(int * currentBrowseMorphTargetIndexArray /* r28 */, int morphRegionIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BD68 -> 0x8029BDDC
// this: r28
void ESubModel::CreateLatticeParameterVerts(class TArray * volumeList /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BDDC -> 0x8029BE40
// this: r29
void ESubModel::FreeLatticeResource() {
    // Local variables
    int i; // r30
}

// Range: 0x8029BE40 -> 0x8029BEB8
// this: r29
unsigned char ESubModel::HasModifiableColor() {
    // Local variables
    int i; // r30
}

// Range: 0x8029BEB8 -> 0x8029BF4C
// this: r22
void ESubModel::TransformModelUV(const class EVec2 & scale /* r23 */, const class EVec2 & translate /* r24 */, unsigned int altShaderID /* r25 */, const class EVec2 & altScale /* r26 */, const class EVec2 & altTranslate /* r27 */, unsigned char bIsWeldable /* r28 */, unsigned char bTranslateFirstUV /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BF4C -> 0x8029C0E0
// this: r19
unsigned char ESubModel::RaycastIntersection(const class EVec3 & ray_pos_unModified /* r25 */, const class EVec3 & ray_pos /* r26 */, const class EVec3 & ray_dir /* r27 */, class EVec3 & hit_pos /* r28 */, float & hit_dist /* r29 */, unsigned char bFirst /* r30 */, class RaycastLastHit * lastHit /* r31 */) {
    // Local variables
    unsigned char bHit; // r23
    class RBIteratorPtrType * iter; // r22
    class EQuadTree * pTree; // r24
    class TArray smsArray; // r1+0x14
    int numSMSPotentialHits; // r21
    int i; // r20
    class ESubModelShader * pShader; // r19
}

// Range: 0x8029C0E0 -> 0x8029C1B0
// this: r26
void ESubModel::CreateQuadTrees() {
    // Local variables
    unsigned int nSMS; // r28
    unsigned int i; // r27
    class EQuadTree * pTree; // r1+0x8
    class RBIteratorPtrType * iter; // r27
    class EQuadTree * pTree; // r0
}


