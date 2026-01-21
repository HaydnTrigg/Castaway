/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\simulation\tree_manager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80027E10 -> 0x8002827C
*/
// Range: 0x80027E10 -> 0x80027E40
// this: r31
TreeManager::TreeManager() {}

// Range: 0x80027E40 -> 0x80027ED4
// this: r30
void TreeManager::Update() {
    // Local variables
    int i; // r31

    // References
    // -> float _dt;
}

// Range: 0x80027ED4 -> 0x80027F18
class TreeManager * TreeManager::GetManager() {
    // References
    // -> class TreeManager * s_pTreeManager;
}

// Range: 0x80027F18 -> 0x80027FE8
// this: r31
void TreeManager::Init() {}

// Range: 0x80027FE8 -> 0x80028108
void TreeManager::AnimateTree(struct EACNodeState * nodes /* r27 */) {
    // Local variables
    class TreeInstance * pTree; // r29
    class LinearSpring2D * pTrunk; // r28
    unsigned int nNodes; // r0
    unsigned int i; // r27
    struct EACNodeState newNodeState; // r1+0x18
    float mulfac; // f30
}

// Range: 0x80028108 -> 0x80028214
void TreeManager::AnimateEdithTree(struct EACNodeState * nodes /* r27 */) {
    // Local variables
    class ISimInstance * pTree; // r29
    class LinearSpring2D * pTrunk; // r28
    unsigned int nNodes; // r0
    unsigned int i; // r27
    struct EACNodeState newNodeState; // r1+0x18
    float mulfac; // f31
}

// Range: 0x80028214 -> 0x80028230
class LinearSpring2D * TreeManager::GetTreeTrunkSpring() {}

// Range: 0x80028230 -> 0x8002827C
void TreeManager::Reset() {
    // Local variables
    unsigned int i; // r30
}


