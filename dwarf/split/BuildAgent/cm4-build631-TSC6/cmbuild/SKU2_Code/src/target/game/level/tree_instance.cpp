/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\tree_instance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009674C -> 0x80096A04
*/
// Range: 0x8009674C -> 0x800967A0
// this: r30
TreeInstance::TreeInstance(enum eTreeType eType /* r31 */) {
    // References
    // -> struct [anonymous] __vt__12TreeInstance;
}

// Range: 0x800967A0 -> 0x80096814
// this: r30
TreeInstance::~TreeInstance() {
    // References
    // -> struct [anonymous] __vt__12TreeInstance;
}

// Range: 0x80096814 -> 0x80096818
void TreeInstance::Init() {}

// Range: 0x80096818 -> 0x800968D0
// this: r31
void TreeInstance::SetupCharacter() {
    // Local variables
    enum eBranchStyle ebranchStyle; // r4
}

// Range: 0x800968D0 -> 0x800968DC
float TreeInstance::GetLength() {}

// Range: 0x800968DC -> 0x800968F0
float TreeInstance::GetArea() {
    // Local variables
    float area; // f1
}

// Range: 0x800968F0 -> 0x80096920
void TreeInstance::RegisterTreeInstance() {}

// Range: 0x80096920 -> 0x80096964
// this: r30
void TreeInstance::RegisterBranchStyle(enum eBranchStyle branchStyle /* r31 */) {}

// Range: 0x80096964 -> 0x80096A04
// this: r30
class EVec3 TreeInstance::GetTreeTipPos() {
    // Local variables
    int numNodes; // r0
    class EMat4 pos; // r1+0x18
    class EVec3 retVal; // r1+0x8
}


