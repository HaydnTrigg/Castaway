/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\cas_personal_target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801972A4 -> 0x801987D4
*/
// Range: 0x801972A4 -> 0x80197780
// this: r28
CASPersonalTarget::CASPersonalTarget(class CasMediator & mediator /* r29 */, unsigned char bLoadPersonality /* r31 */) {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__17CASPersonalTarget;
}

// Range: 0x80197780 -> 0x80197860
// this: r29
CASPersonalTarget::~CASPersonalTarget() {
    // Local variables
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__17CASPersonalTarget;
}

// Range: 0x80197860 -> 0x80197B5C
// this: r27
void CASPersonalTarget::SetVariable(const char * szCommand /* r28 */, const char * szParams /* r29 */) {
    // Local variables
    signed char curVal; // r30
    unsigned int nZodiacSign; // r0
    char szZodiacSignNum[3]; // r1+0x14
    char * const szParams[1]; // r1+0x10
    int itemNum; // r30
    int direction; // r0
    char itemNumStr[3]; // r1+0xC
    char directionStr[3]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80197B5C -> 0x80197BDC
// this: r31
void CASPersonalTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80197BDC -> 0x80197C4C
// this: r29
void CASPersonalTarget::HandlePersonalityAnimation(const char * szParams /* r30 */) {
    // Local variables
    class CasSimRenderer * animRenderer; // r31
}

// Range: 0x80197C4C -> 0x80197D8C
signed short CASPersonalTarget::ConvertFromPersonalityTextToEnum(const char * personalityStr /* r31 */) {}

// Range: 0x80197D8C -> 0x8019800C
// this: r28
char * CASPersonalTarget::GetVariable(const char * szVar /* r27 */) {
    // Local variables
    char * retStr; // r29
    class CasSimDescription * pSimDesc; // r28
    unsigned int nZodiacSign; // r0
    char szZodiacSignNum[3]; // r1+0xC
    char * const szParams[1]; // r1+0x8
}

// Range: 0x8019800C -> 0x80198284
// this: r29
unsigned short * CASPersonalTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x18
    signed short signNum; // r0
    signed short aspNum; // r0
    int itemNum; // r0
    unsigned short * pResultString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80198284 -> 0x801984F0
void CASPersonalTarget::ParseSignText(unsigned short * outStr /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801984F0 -> 0x801984FC
void CASPersonalTarget::ParseDescriptionText() {}

// Range: 0x801984FC -> 0x801987B8
void CASPersonalTarget::ParsePersonalityText(const char * personalityText /* r29 */, unsigned short * outStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801987B8 -> 0x801987BC
void CASPersonalTarget::SetVariableSubnav() {}

// Range: 0x801987BC -> 0x801987C0
void CASPersonalTarget::GetLocalizableSubnav() {}

// Range: 0x801987C0 -> 0x801987D4
signed char CASPersonalTarget::GetSavedPersVal() {}


