/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E091C -> 0x802E3D2C
*/
// Range: 0x802E091C -> 0x802E0A54
void ERModel::InitializeWhatShouldBeMetaData() {
    // References
    // -> static class hash_map * weWantFourBones;
}

// Range: 0x802E0A54 -> 0x802E0C54
// this: r29
ERModel::ERModel() {
    // References
    // -> struct [anonymous] __vt__7ERModel;
}

// Range: 0x802E0C54 -> 0x802E0DB0
// this: r29
ERModel::~ERModel() {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> class EModelManager _modelman;
    // -> struct [anonymous] __vt__7ERModel;
}

// Range: 0x802E0DB0 -> 0x802E0DC0
void ERModel::Refresh() {}

// Range: 0x802E0DC0 -> 0x802E0E24
// this: r29
void ERModel::DelRefSubResources() {
    // Local variables
    int c; // r30
}

// Range: 0x802E0E24 -> 0x802E0E88
// this: r29
void ERModel::AddRefSubResources() {
    // Local variables
    int c; // r30
}

// Range: 0x802E0E88 -> 0x802E0F28
// this: r29
unsigned char ERModel::TryIncrementSubResources() {
    // Local variables
    int c; // r30
    int undo; // r30
}

// Range: 0x802E0F28 -> 0x802E1358
// this: r30
void ERModel::LoadFromFile(class EFile * s /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x14
    unsigned int size; // r1+0x10
    int i; // r28

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802E1358 -> 0x802E1414
void CopyTArray(class TArray & array /* r28 */, class EFile * s /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x8
    int i; // r30
}

// Range: 0x802E1414 -> 0x802E14D0
void CopyTArray(class TArray & array /* r28 */, class EFile * s /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x8
    int i; // r30
}

// Range: 0x802E14D0 -> 0x802E158C
void CopyTArray(class TArray & array /* r28 */, class EFile * s /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x8
    int i; // r30
}

// Range: 0x802E158C -> 0x802E163C
void CopyTArray(class TArray & array /* r28 */, class EFile * s /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x8
    int i; // r30
}

// Range: 0x802E163C -> 0x802E164C
void ERModel::LoadModel() {}

// Range: 0x802E164C -> 0x802E186C
// this: r31
void ERModel::FinishLoad() {
    // Local variables
    unsigned int id; // r0
    float minX; // r1+0xC
    float maxX; // r1+0x8
    int c; // r29
    int c; // r29
    struct ESMBuildDisplayListData data; // r1+0x20
    int c; // r29

    // References
    // -> static class hash_map * weWantFourBones;
}

// Range: 0x802E186C -> 0x802E1954
int ERModel::GetShaderCount() {
    // Local variables
    int nShaders; // r8
    int cSubModel; // r9
}

// Range: 0x802E1954 -> 0x802E19D4
// this: r31
class EMat4 * ERModel::GetScaleMatrix() {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802E19D4 -> 0x802E1A1C
// this: r31
void ERModel::DeallocateScaleMatrix() {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802E1A1C -> 0x802E1B18
// this: r29
void ERModel::CalcOrientedBoundSphere(const class EMat4 & mOrient /* r30 */, class EBoundSphere & sphereOut /* r31 */) {
    // Local variables
    float maxScale; // f0
}

// Range: 0x802E1B18 -> 0x802E1B8C
// this: r28
void ERModel::DrawGeometry(class ERC * prc /* r29 */) {
    // Local variables
    int cSubModel; // r30
}

// Range: 0x802E1B8C -> 0x802E1C00
// this: r28
void ERModel::DrawAsShadow(class ERC * prc /* r29 */) {
    // Local variables
    int cSubModel; // r30
}

// Range: 0x802E1C00 -> 0x802E1C74
// this: r28
void ERModel::Draw(class ERC * prc /* r29 */) {
    // Local variables
    int cSubModel; // r30
}

// Range: 0x802E1C74 -> 0x802E1EAC
// this: r28
void ERModel::DrawHierarchical(class ERC * prc /* r29 */, class EMat4 * mNodes /* r30 */, struct EACNodeState * nodeStates /* r31 */) {
    // Local variables
    class EVec4 vPlane; // r1+0x18
    class TFloatTree sortedSubModels; // r1+0x8
    int cSubModel; // r26
    float dist; // f0
    class FTIteratorPtrType * fi; // r26
    int cSubModel; // r26
    int nodeIx; // r0

    // References
    // -> class E3DWindow * m_pCurrent3DWindow;
}

// Range: 0x802E1EAC -> 0x802E2C58
// this: r31
void ERModel::WeldSharedVerts(float weldDistance /* f26 */) {
    // Local variables
    unsigned char intVerts; // r18
    float wd2; // f28
    class ERModel * pModels[2]; // r1+0x18
    int longestAxis; // f21
    float longestAxisLength; // f2
    int d; // r0
    float axisLength; // f0
    class EAllocGroup ag; // r1+0x140
    class TFloatTree weldVerts[2]; // r1+0x128
    int csm; // r30
    int cm; // f18
    int csms; // r27
    int cstrip; // r28
    unsigned int cv; // r29
    struct EWeldVert * pwv; // r0
    float longestAxisValue; // f1
    int csms; // f13
    int cstrip; // f12
    unsigned int cv; // r17
    class EVec3 vPos; // r1+0xEC
    float axisPos; // f27
    class EVec3 vTotalPos[2]; // r1+0x110
    class EVec3 vTotalNormal[2]; // r1+0xF8
    int nWelds[2]; // r1+0x10
    class FTIteratorPtrType * i[2]; // r1+0x8
    int cnm; // r16
    class FTIteratorPtrType * li; // r15
    float key; // f0
    struct EWeldVert * pwv; // r0
    class EVec3 pwvPos; // r1+0xE0
    class EVec3 vNormal; // r1+0xD4
    class FTIteratorPtrType * ni; // r15
    float key; // f0
    struct EWeldVert * pwv; // r0
    class EVec3 pwvPos; // r1+0xC8
    class EVec3 vNormal; // r1+0xBC
    class EVec3 vAveragePos; // r1+0xB0
    class EVec3 vAverageNormal; // r1+0xA4
    class FTIteratorPtrType * li; // r20
    float key; // f0
    struct EWeldVert * pwv; // r0
    class EVec3 pwvPos; // r1+0x98
    class FTIteratorPtrType * ni; // r20
    float key; // f0
    struct EWeldVert * pwv; // r0
    class EVec3 pwvPos; // r1+0x8C
}

// Range: 0x802E2C58 -> 0x802E2C5C
void ERModel::RebuildAfterWelding() {}

// Range: 0x802E2C5C -> 0x802E2E24
// this: r29
void ERModel::AllocateMorphTargetArray(unsigned int numCurrentBrowseMorphTargets /* r30 */, unsigned int numMorphRegions /* r31 */) {
    // Local variables
    int i; // r6
    int i; // r6
    int i; // r27
}

// Range: 0x802E2E24 -> 0x802E2F28
// this: r29
unsigned char ERModel::RegisterCurrentBrowseMorphTarget(class ERModel * pMorphTarget /* r30 */, int currentBrowseMorphTargetIndex /* r31 */) {
    // Local variables
    int i; // r26
}

// Range: 0x802E2F28 -> 0x802E2FF8
// this: r29
class ERModel * ERModel::RegisterCurrentBrowseMorphTarget(int currentBrowseMorphTargetIndex /* r30 */) {
    // Local variables
    unsigned char status; // r0

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802E2FF8 -> 0x802E3070
// this: r30
void ERModel::UnregisterAllMorphTargets() {
    // Local variables
    int currentBrowseMorphTargetIndex; // r31
    int userSelectedMorphTargetIndex; // r31
}

// Range: 0x802E3070 -> 0x802E30F0
// this: r29
void ERModel::UnregisterCurrentBrowseMorphTargets() {
    // Local variables
    int morphTargetIndex; // r30
}

// Range: 0x802E30F0 -> 0x802E31DC
// this: r27
void ERModel::UnregisterCurrentBrowseMorphTarget(int currentBrowseMorphTargetIndex /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x802E31DC -> 0x802E323C
void ERModel::UnregisterCurrentBrowseMorphTarget() {
    // Local variables
    unsigned char found; // r7
    int currentBrowseMorphTargetIndex; // r8
}

// Range: 0x802E323C -> 0x802E3314
void ERModel::CopyWeightsFromUserSelectedToCurrentBrowse() {
    // Local variables
    int i; // r0
    class ERModel * pUserSelectedMorphTarget; // r7
    int currentBrowseMorphTargetIndex; // r8
    class ERModel * pCurrentBrowseMorphTarget; // r9
}

// Range: 0x802E3314 -> 0x802E3370
// this: r29
void ERModel::UnregisterUserSelectedMorphTargetInRegion() {
    // Local variables
    int i; // r30
}

// Range: 0x802E3370 -> 0x802E345C
// this: r27
void ERModel::UnregisterUserSelectedMorphTarget(int userSelectedMorphTargetIndex /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x802E345C -> 0x802E3600
// this: r30
void ERModel::PromoteCurrentBrowseMorphTarget(int morphRegionIndex /* r31 */) {
    // Local variables
    int i; // r0
    int currentBrowseMorphTargetIndex; // r9
    int promotionIndexArray[2]; // r1+0x8
    int promotionIndex; // r10
}

// Range: 0x802E3600 -> 0x802E3668
unsigned char ERModel::SetCurrentBrowseMorphTargetWeight() {}

// Range: 0x802E3668 -> 0x802E36AC
void ERModel::ClearCurrentBrowseMorphTargetWeights() {
    // Local variables
    int currentBrowseMorphTargetIndex; // r6
}

// Range: 0x802E36AC -> 0x802E371C
// this: r29
void ERModel::ResetStripsMorph() {
    // Local variables
    int i; // r30
}

// Range: 0x802E371C -> 0x802E37D8
// this: r28
unsigned char ERModel::ApplyMorphTargetsToStripsMorph() {
    // Local variables
    unsigned char status; // r30
    int i; // r29
}

// Range: 0x802E37D8 -> 0x802E3874
// this: r29
void ERModel::ApplyLatticesToStripsMorph() {
    // Local variables
    int i; // r30
    int i; // r30
}

// Range: 0x802E3874 -> 0x802E38EC
// this: r29
void ERModel::BuildDisplayListStripsMorph() {
    // Local variables
    int i; // r30
}

// Range: 0x802E38EC -> 0x802E39CC
// this: r29
void ERModel::CleanMorphTargets(unsigned char bNoReset /* r30 */) {}

// Range: 0x802E39CC -> 0x802E3ABC
// this: r29
void ERModel::FreeAllMorphTargetAndLatticeResource(unsigned char bNoReset /* r30 */) {}

// Range: 0x802E3ABC -> 0x802E3B08
void ERModel::SetLatticeWeight() {}

// Range: 0x802E3B08 -> 0x802E3B3C
int ERModel::GetNumLatticeKeyframes() {}

// Range: 0x802E3B3C -> 0x802E3B44
int ERModel::GetNumLattices() {}

// Range: 0x802E3B44 -> 0x802E3BAC
// this: r29
void ERModel::CreateLatticeParameterVerts() {
    // Local variables
    int i; // r30
}

// Range: 0x802E3BAC -> 0x802E3C10
// this: r29
void ERModel::FreeLatticeResource() {
    // Local variables
    int i; // r30
}

// Range: 0x802E3C10 -> 0x802E3C88
// this: r29
unsigned char ERModel::HasModifiableColor() {
    // Local variables
    int i; // r30
}

// Range: 0x802E3C88 -> 0x802E3D2C
// this: r23
void ERModel::TransformModelUV(const class EVec2 & scale /* r24 */, const class EVec2 & translate /* r25 */, unsigned int altShaderID /* r26 */, const class EVec2 & altScale /* r27 */, const class EVec2 & altTranslate /* r28 */, unsigned char bTranslateFirstUV /* r29 */) {
    // Local variables
    int i; // r30
}


