/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\proptable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D54E4 -> 0x800D56DC
*/
// Range: 0x800D54E4 -> 0x800D5514
class PropTable * PropTable::CreateInstance() {}

// Range: 0x800D5514 -> 0x800D5534
void PropTable::DestroyInstance() {}

// Range: 0x800D5534 -> 0x800D5578
// this: r31
PropTableImpl::PropTableImpl() {
    // References
    // -> struct [anonymous] __vt__13PropTableImpl;
}

// Range: 0x800D5578 -> 0x800D55D0
// this: r30
PropTableImpl::~PropTableImpl() {}

// Range: 0x800D55D0 -> 0x800D5664
// this: r28
int PropTableImpl::Load(unsigned int fileID /* r30 */, signed short resID /* r29 */) {
    // Local variables
    class iResFile * pFile; // r0
    const struct ResFile * pData; // r0
    const struct PropRefTable * pProp; // r0
}

// Range: 0x800D5664 -> 0x800D56C0
// this: r30
struct PropRef * PropTableImpl::GetEntry(int entryNum /* r31 */) {
    // Local variables
    struct PropRef * aref; // r0
}

// Range: 0x800D56C0 -> 0x800D56CC
signed short PropTableImpl::GetID() {}

// Range: 0x800D56CC -> 0x800D56D4
int PropTableImpl::CountEntries() {}

// Range: 0x800D56D4 -> 0x800D56DC
char * PropTableImpl::GetEntryName() {}


