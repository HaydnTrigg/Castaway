/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\simulation\tree_branch_manager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80025D30 -> 0x80027440
*/
// Range: 0x80025D30 -> 0x80025DF4
// this: r28
TreeBranchManager::TreeBranchManager() {}

// Range: 0x80025EB4 -> 0x80025FF4
// this: r27
void TreeBranchManager::Update() {
    // Local variables
    unsigned int j; // r29
    unsigned int i; // r28
    unsigned int j; // r28
    unsigned int i; // r29
    unsigned int i; // r28
    unsigned int i; // r28

    // References
    // -> float _dt;
}

// Range: 0x80025FF4 -> 0x80026044
enum eBranchAnimControllers TreeBranchManager::GetBranchControllerForStyle() {}

// Range: 0x80026044 -> 0x80026088
class TreeBranchManager * TreeBranchManager::GetManager() {
    // References
    // -> class TreeBranchManager * s_pTreeBranchManager;
}

// Range: 0x80026088 -> 0x800261E4
// this: r25
void TreeBranchManager::Init() {
    // Local variables
    unsigned int j; // r30
    unsigned int i; // r31
    unsigned int i; // r29
    class EVec3 orient; // r1+0x14
    unsigned int j; // r27
    unsigned int i; // r26
    class EVec3 rot; // r1+0x8
}

// Range: 0x800261E4 -> 0x800262D4
// this: r25
void TreeBranchManager::ComputeMidLotData() {
    // Local variables
    unsigned int j; // r27
    unsigned int i; // r26
}

// Range: 0x800262D4 -> 0x80026310
unsigned int TreeBranchManager::GetBranchCharID() {}

// Range: 0x80026310 -> 0x8002634C
unsigned int TreeBranchManager::GetBranchModelID() {}

// Range: 0x8002634C -> 0x800263A0
unsigned int TreeBranchManager::GetPalmBranchModelID() {}

// Range: 0x800263A0 -> 0x80026444
// this: r27
void TreeBranchManager::InitAddtionalPalmBranchInstances() {
    // Local variables
    unsigned int i; // r28
    unsigned int modelId; // r3

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80026444 -> 0x80026564
// this: r24
void TreeBranchManager::BuildBranchDigests() {
    // Local variables
    class DigestGeomShaderPtr * digest; // r28
    int cSubModel; // r27
    class ESubModel & sm; // r26
    int cSubModelShader; // r25
    class ESubModelShader & sms; // r24

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80026564 -> 0x8002665C
// this: r26
void TreeBranchManager::DoLightingCalculations() {
    // Local variables
    struct ELights & lightsOut; // r28
    class EVec3 vTargetPos; // r1+0x14
    const class RoomData * rd; // r0
    int i; // r27
}

// Range: 0x8002665C -> 0x8002683C
// this: r29
void TreeBranchManager::AssignRandomBranches(class TreeInstance * pTree /* r30 */) {
    // Local variables
    unsigned int randBranchOmit; // r31
    unsigned int randNum[8]; // r1+0x8
    unsigned int i; // r26
    unsigned int firstOffset; // r12
    unsigned int secondOffset; // r26
    unsigned int branchCtrlIdx; // r0
    unsigned int i; // r26
    unsigned int i; // r26
}

// Range: 0x8002683C -> 0x80026A28
// this: r29
void TreeBranchManager::AssignRandomBranches(class ISimInstance * pTree /* r30 */) {
    // Local variables
    unsigned int randBranchOmit; // r31
    unsigned int randNum[8]; // r1+0x8
    unsigned int i; // r26
    unsigned int firstOffset; // r26
    unsigned int secondOffset; // r27
    unsigned int branchCtrlIdx; // r0
    unsigned int i; // r26
    unsigned int i; // r26
}

// Range: 0x80026A28 -> 0x80026A98
class AngularSpring * TreeBranchManager::CreateAngularSpring(class EVec3 & orient /* r30 */, float mass /* f30 */, float xArea /* f31 */, unsigned char bEnableGravityUpdate /* r31 */) {}

// Range: 0x80026A98 -> 0x80026BA0
class EVec3 TreeBranchManager::GetBranchCompositeEulerRotation(class EVec3 * eulerRot /* r30 */) {
    // Local variables
    enum eBranchPitch ePitch; // r31
    float radYaw; // f31
    float rotY; // f30
    class EMat4 rotMat; // r1+0x8
}

// Range: 0x80026BA0 -> 0x80026C30
class EVec3 TreeBranchManager::GetBranchDirection(class EVec3 * branch /* r31 */) {
    // Local variables
    class EVec3 eulerRot; // r1+0x28
    class EQuat rotQ; // r1+0x18
    class EMat4 rotMat; // r1+0x38
}

// Range: 0x80026C30 -> 0x80026D6C
void TreeBranchManager::AnimateBranch(struct EACNodeState * nodes /* r25 */) {
    // Local variables
    class BranchInstance * pBranch; // r27
    class AngularSpring * pBranchSpring; // r26
    unsigned int nNodes; // r0
    unsigned int i; // r25
    struct EACNodeState newNodeState; // r1+0x20
    float mulfac; // f1
}

// Range: 0x80026D6C -> 0x80026D7C
class AngularSpring * TreeBranchManager::GetBranchSpring() {}

// Range: 0x80026D7C -> 0x80026DC4
// this: r30
class EVec3 & TreeBranchManager::GetLastPosition(unsigned int branchOrient /* r31 */) {
    // Local variables
    unsigned int branchCtrlIdx; // r0
}

// Range: 0x80026DC4 -> 0x80026E24
// this: r29
void TreeBranchManager::SetLastPosition(const class EVec3 & vec /* r30 */, unsigned int branchOrient /* r31 */) {
    // Local variables
    unsigned int branchCtrlIdx; // r0
}

// Range: 0x80026E24 -> 0x80027228
// this: r19
void TreeBranchManager::Draw(class ERC * prc /* r20 */) {
    // Local variables
    class E3DWindow * pWin; // r25
    unsigned int j; // r24
    unsigned int i; // r23
    class BranchInstance * pBranchInstance; // r22
    struct ListIterator iter; // r1+0x2C
    struct ListIterator iterBegin; // r1+0x28
    struct ListIterator iterEnd; // r1+0x24
    class TreeInstance * pTree; // r21
    class EVec3 tipPos; // r1+0x54
    class EVec3 deltaPos; // r1+0x48
    unsigned int visFlags; // r0
    float instAlpha; // f0
    struct ListIterator iter; // r1+0x20
    struct ListIterator iterBegin; // r1+0x1C
    struct ListIterator iterEnd; // r1+0x18
    class ISimInstance * pTree; // r21
    class EVec3 tipPos; // r1+0x3C
    class EVec3 deltaPos; // r1+0x30
    unsigned int visFlags; // r0
    float instAlpha; // f0
}

// Range: 0x80027228 -> 0x8002729C
// this: r26
void TreeBranchManager::SetLevel(class ERLevel * pLevel /* r27 */) {
    // Local variables
    unsigned int j; // r29
    unsigned int i; // r28
}

// Range: 0x8002729C -> 0x8002731C
void TreeBranchManager::DoAnimation() {
    // Local variables
    unsigned int j; // r29
    unsigned int i; // r28
}

// Range: 0x8002731C -> 0x80027388
void TreeBranchManager::RemoveEdithObjectInstance(class ISimInstance * pInstance /* r27 */) {
    // Local variables
    unsigned int j; // r29
    unsigned int i; // r28
}

// Range: 0x80027388 -> 0x800273F4
void TreeBranchManager::RemoveMidLotObjectInstance(class TreeInstance * pInstance /* r27 */) {
    // Local variables
    unsigned int j; // r29
    unsigned int i; // r28
}

// Range: 0x800273F4 -> 0x80027440
void TreeBranchManager::Reset() {
    // Local variables
    unsigned int i; // r30
}


