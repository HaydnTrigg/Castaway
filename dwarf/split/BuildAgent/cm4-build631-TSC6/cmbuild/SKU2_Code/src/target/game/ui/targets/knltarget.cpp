/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\knltarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D9248 -> 0x801DA264
*/
// Range: 0x801D9248 -> 0x801D9530
// this: r29
KNLTarget::KNLTarget() {
    // References
    // -> int m_sUserEnteredDays;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9KNLTarget;
}

// Range: 0x801D9530 -> 0x801D95D4
// this: r30
KNLTarget::~KNLTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9KNLTarget;
}

// Range: 0x801D95D4 -> 0x801D97A4
// this: r29
void KNLTarget::SetVariable(const char * szCommand /* r30 */) {
    // References
    // -> int m_sUserEnteredDays;
}

// Range: 0x801D97A4 -> 0x801D9900
char * KNLTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801D9900 -> 0x801D99EC
// this: r29
unsigned short * KNLTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801D99EC -> 0x801D9AA4
// this: r31
void KNLTarget::Update() {}

// Range: 0x801D9AA4 -> 0x801D9AEC
unsigned char KNLTarget::OnDpadUp() {}

// Range: 0x801D9AEC -> 0x801D9B34
unsigned char KNLTarget::OnDpadDown() {}

// Range: 0x801D9B34 -> 0x801D9BD8
// this: r31
unsigned char KNLTarget::OnDpadLeft() {}

// Range: 0x801D9BD8 -> 0x801D9C70
// this: r31
unsigned char KNLTarget::OnDpadRight() {}

// Range: 0x801D9C70 -> 0x801D9D14
// this: r30
void KNLTarget::RefreshLocalizables() {
    // Local variables
    class StackString2 strMoney; // r1+0x8
}

// Range: 0x801D9D14 -> 0x801D9DDC
// this: r30
void KNLTarget::CapDitchAmount() {
    // References
    // -> int m_sMaximumKennelDays;
    // -> int m_sCostPerKennelDay;
}

// Range: 0x801D9DDC -> 0x801D9DEC
int KNLTarget::PetPointsToSpend() {
    // References
    // -> int m_sCostPerKennelDay;
}

// Range: 0x801D9DEC -> 0x801D9EA4
// this: r31
unsigned char KNLTarget::OnSelect() {}

// Range: 0x801D9EA4 -> 0x801D9EB0
void KNLTarget::ShowKNLMenu() {}

// Range: 0x801D9EB0 -> 0x801D9F68
// this: r31
void KNLTarget::ShowKNLMenu_Begin() {}

// Range: 0x801D9F68 -> 0x801D9F74
void KNLTarget::HideKNLMenu() {}

// Range: 0x801D9F74 -> 0x801DA020
// this: r31
void KNLTarget::HideKNLMenu_Begin() {}

// Range: 0x801DA020 -> 0x801DA130
// this: r29
void KNLTarget::UpdateSelectionState(int newState /* r30 */) {}

// Range: 0x801DA130 -> 0x801DA25C
// this: r28
void KNLTarget::UpdateSwfArrowState(enum KNLArrowState leftState /* r29 */, enum KNLArrowState rightState /* r30 */, unsigned char openReflow /* r31 */) {}

// Range: 0x801DA25C -> 0x801DA264
int KNLTarget::GetCostPerDay() {
    // References
    // -> int m_sCostPerKennelDay;
}


