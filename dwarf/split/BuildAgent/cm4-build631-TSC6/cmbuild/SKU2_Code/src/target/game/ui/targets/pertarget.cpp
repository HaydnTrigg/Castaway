/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\pertarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D7924 -> 0x801D81A8
*/
// Range: 0x801D7924 -> 0x801D7AF4
// this: r30
PERTarget::PERTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const PER_titleIcon;
    // -> static const char * const PER_pet_test;
    // -> static const char * const PER_exists;
    // -> static const char * const PER_set_tab;
    // -> struct [anonymous] __vt__9PERTarget;
}

// Range: 0x801D7AF4 -> 0x801D7C14
// this: r30
PERTarget::~PERTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PERTarget;
}

// Range: 0x801D7C14 -> 0x801D7C18
void PERTarget::Update() {}

// Range: 0x801D7C18 -> 0x801D7D7C
// this: r29
void PERTarget::SetVariable(const char * szCommand /* r30 */, const char * szParams /* r31 */) {
    // Local variables
    unsigned int index; // r0
    unsigned int MapSimIndex[7]; // r1+0x24
    unsigned int index; // r0
    unsigned int MapSimIndex[7]; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> static const char * const PER_set_tab;
}

// Range: 0x801D7D7C -> 0x801D7E24
// this: r29
char * PERTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const PER_pet_test;
    // -> static const char * const PER_exists;
}

// Range: 0x801D7E24 -> 0x801D7EA4
unsigned short * PERTarget::GetLocalizable() {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801D7EA4 -> 0x801D7F14
void PERTarget::tutorial_dialog_callback() {
    // References
    // -> unsigned int m_HelpSubIndex;
    // -> enum TutorialUnlockIndex m_HelpIndex;
}

// Range: 0x801D7F14 -> 0x801D7F7C
static unsigned char show_tutorial(enum TutorialUnlockIndex index /* r11 */, char * titleid /* r10 */, char * bodyid /* r0 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801D7F7C -> 0x801D8170
// this: r29
void PERTarget::SelectTab(unsigned int whichTab /* r30 */) {
    // References
    // -> enum TutorialUnlockIndex m_HelpIndex;
    // -> unsigned int m_HelpSubIndex;
    // -> unsigned int m_lastTab;
}

// Range: 0x801D8170 -> 0x801D81A8
unsigned char PERTarget::FlashScreenReady() {
    // References
    // -> class EGlobal _globals;
}


