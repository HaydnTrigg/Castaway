/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\ppctarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D81A8 -> 0x801D9248
*/
// Range: 0x801D81A8 -> 0x801D8464
// this: r30
PPCTarget::PPCTarget() {
    // Local variables
    class StackString2 strMoney; // r1+0x70

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PPCTarget;
}

// Range: 0x801D8464 -> 0x801D8508
// this: r30
PPCTarget::~PPCTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PPCTarget;
}

// Range: 0x801D8508 -> 0x801D86C4
// this: r29
void PPCTarget::SetVariable(const char * szCommand /* r30 */) {}

// Range: 0x801D86C4 -> 0x801D8820
char * PPCTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801D8820 -> 0x801D890C
// this: r29
unsigned short * PPCTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801D890C -> 0x801D89C4
// this: r31
void PPCTarget::Update() {}

// Range: 0x801D89C4 -> 0x801D8A0C
unsigned char PPCTarget::OnDpadUp() {}

// Range: 0x801D8A0C -> 0x801D8A54
unsigned char PPCTarget::OnDpadDown() {}

// Range: 0x801D8A54 -> 0x801D8AEC
// this: r31
unsigned char PPCTarget::OnDpadLeft() {}

// Range: 0x801D8AEC -> 0x801D8BDC
// this: r31
unsigned char PPCTarget::OnDpadRight() {
    // Local variables
    int numFramesPressed; // r0
}

// Range: 0x801D8BDC -> 0x801D8C98
// this: r30
void PPCTarget::RefreshLocalizables() {
    // Local variables
    class StackString2 strMoney; // r1+0x8
}

// Range: 0x801D8C98 -> 0x801D8D40
// this: r30
void PPCTarget::CapConversionAmount() {}

// Range: 0x801D8D40 -> 0x801D8D74
// this: r31
int PPCTarget::SimoleonsToConvert() {}

// Range: 0x801D8D74 -> 0x801D8E1C
// this: r31
unsigned char PPCTarget::OnSelect() {}

// Range: 0x801D8E1C -> 0x801D8E90
// this: r30
void PPCTarget::CommitTransaction() {
    // Local variables
    int simFunds; // r0
}

// Range: 0x801D8E90 -> 0x801D8E9C
void PPCTarget::ShowPPCMenu() {}

// Range: 0x801D8E9C -> 0x801D8F54
// this: r31
void PPCTarget::ShowPPCMenu_Begin() {}

// Range: 0x801D8F54 -> 0x801D8F60
void PPCTarget::HidePPCMenu() {}

// Range: 0x801D8F60 -> 0x801D900C
// this: r31
void PPCTarget::HidePPCMenu_Begin() {}

// Range: 0x801D900C -> 0x801D911C
// this: r29
void PPCTarget::UpdateSelectionState(int newState /* r30 */) {}

// Range: 0x801D911C -> 0x801D9248
// this: r28
void PPCTarget::UpdateSwfArrowState(enum PPCArrowState leftState /* r29 */, enum PPCArrowState rightState /* r30 */, unsigned char openReflow /* r31 */) {}


