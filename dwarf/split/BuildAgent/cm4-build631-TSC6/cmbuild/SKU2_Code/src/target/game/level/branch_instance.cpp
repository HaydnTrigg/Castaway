/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\branch_instance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800824EC -> 0x80082BE4
*/
// Range: 0x800824EC -> 0x8008252C
// this: r31
BranchInstance::BranchInstance() {
    // References
    // -> struct [anonymous] __vt__14BranchInstance;
}

// Range: 0x8008252C -> 0x800825B8
// this: r31
void BranchInstance::Init() {}

// Range: 0x800825B8 -> 0x80082610
// this: r30
BranchInstance::~BranchInstance() {}

// Range: 0x80082610 -> 0x80082690
// this: r28
void BranchInstance::UpdateDrawPosition(class EVec3 & drawPos /* r29 */) {
    // Local variables
    unsigned int nNodeCount; // r0
    unsigned int i; // r30
    class EMat4 & mat; // r0
}

// Range: 0x80082690 -> 0x800826F0
// this: r30
void BranchInstance::UpdateDrawRotation(class EVec3 & drawRot /* r31 */) {
    // Local variables
    class EQuat rotQ; // r1+0x8
}

// Range: 0x800826F0 -> 0x80082750
// this: r31
void BranchInstance::SetupCharacter() {}

// Range: 0x80082750 -> 0x80082780
void BranchInstance::RegisterBranchInstance() {}

// Range: 0x80082780 -> 0x80082788
void BranchInstance::SetLevel() {}

// Range: 0x80082788 -> 0x80082860
// this: r27
void BranchInstance::Draw(class ERC * prc /* r28 */, class TreeInstance * pTree /* r29 */, class InstanceData * pInstanceData /* r30 */) {
    // Local variables
    unsigned char bHasAlpha; // r31
    class EOrderTableData otd; // r1+0x8
}

// Range: 0x80082860 -> 0x80082864
void BranchInstance::DrawDigest() {}

// Range: 0x80082864 -> 0x8008293C
// this: r27
void BranchInstance::Draw(class ERC * prc /* r28 */, class ISimInstance * pTree /* r29 */, class InstanceData * pInstanceData /* r30 */) {
    // Local variables
    unsigned char bHasAlpha; // r31
    class EOrderTableData otd; // r1+0x8
}

// Range: 0x8008293C -> 0x80082A34
void BranchInstance::BranchMidOrderTableCallback(struct ELevelDrawData & renderParam /* r26 */) {
    // Local variables
    class BranchInstance * pInstance; // r31
    class InstanceData * pInstanceData; // r30
    class TreeInstance * pTree; // r29
    unsigned int iDigest; // r28
    float instAlpha; // f0
    class EVec3 tipPos; // r1+0x14
    unsigned int orientId; // r27
    unsigned int branchStyleId; // r29
    class EVec3 delta; // r1+0x8
    const class DigestGeomShaderPtr * pDigest; // r27
}

// Range: 0x80082A34 -> 0x80082B38
void BranchInstance::BranchSimOrderTableCallback(struct ELevelDrawData & renderParam /* r26 */) {
    // Local variables
    class BranchInstance * pInstance; // r31
    class InstanceData * pInstanceData; // r30
    class ISimInstance * pTree; // r29
    unsigned int iDigest; // r28
    float instAlpha; // f0
    class EVec3 tipPos; // r1+0x14
    unsigned int orientId; // r27
    unsigned int branchStyleId; // r29
    class EVec3 delta; // r1+0x8
    const class DigestGeomShaderPtr * pDigest; // r27
}

// Range: 0x80082B38 -> 0x80082BE4
// this: r30
unsigned int BranchInstance::VisibilityTest(class E3DWindow & win /* r31 */) {
    // Local variables
    class EVec3 bboxDiagLen; // r1+0x24
    float radiusBSphere; // f31
    class EMat4 & mat; // r0
    class EVec3 center; // r1+0x18
    class EBoundSphere sphere; // r1+0x8
}


