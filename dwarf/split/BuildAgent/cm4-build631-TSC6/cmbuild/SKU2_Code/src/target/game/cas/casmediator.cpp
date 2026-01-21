/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\casmediator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80029708 -> 0x80029B58
*/
// Range: 0x80029708 -> 0x80029794
// this: r30
CasMediator::CasMediator() {
    // References
    // -> struct [anonymous] __vt__11CasMediator;
}

// Range: 0x80029794 -> 0x80029824
// this: r30
CasMediator::~CasMediator() {
    // References
    // -> struct [anonymous] __vt__11CasMediator;
}

// Range: 0x80029824 -> 0x800298D4
// this: r29
void CasMediator::AddListener(class CasListener * listener /* r1+0x8 */) {
    // Local variables
    unsigned char bAlreadyAdded; // r31
    class CasListener * * itor; // r30
}

// Range: 0x800298D4 -> 0x8002996C
// this: r29
void CasMediator::RemoveListener(class CasListener * listener /* r30 */) {
    // Local variables
    class CasListener * * itor; // r31
}

// Range: 0x8002996C -> 0x800299E4
// this: r30
void CasMediator::RemoveAllListeners() {
    // Local variables
    class CasListener * * itor; // r31
}

// Range: 0x800299E4 -> 0x80029A70
// this: r29
void CasMediator::PostEvent(const class CasEvent & event /* r30 */) const {
    // Local variables
    class CasListener * const * itor; // r31
}

// Range: 0x80029A70 -> 0x80029AE4
// this: r30
void CasMediator::SetScene(class CasScene * pScene /* r31 */) {}

// Range: 0x80029AE4 -> 0x80029AF8
void CasMediator::DrawSim() {}

// Range: 0x80029AF8 -> 0x80029B10
void CasMediator::SetControllerFilterId() {}

// Range: 0x80029B10 -> 0x80029B30
unsigned int CasMediator::GetControllerFilterId() {}

// Range: 0x80029B30 -> 0x80029B48
class CasSimDescription * CasMediator::GetEditSimDescription() {}

// Range: 0x80029B48 -> 0x80029B58
void CasMediator::SetCasMode() {}


