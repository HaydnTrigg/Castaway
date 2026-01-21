/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\plntarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F3044 -> 0x801F3EB4
*/
// Range: 0x801F3044 -> 0x801F33DC
// this: r31
PLNTarget::PLNTarget() {
    // Local variables
    int i; // r28

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> struct PLNIconData PLNIconDataTable[15];
    // -> static const char * const BBS_item;
    // -> static const char * const BBS_section1;
    // -> static const char * const BBS_section0;
    // -> static const char * const BBS_title;
    // -> static const char * const BBS_noTitle;
    // -> static const char * const BBS_horiz;
    // -> static const char * const BBS_iniSelect;
    // -> static const char * const BBS_config;
    // -> static const char * const BBS_exists;
    // -> static const char * const BBS_Cancel;
    // -> static const char * const BBS_Hit;
    // -> static const char * const BBS_Hilite;
    // -> static const char * const tsc5_catalog_sections_ready;
    // -> signed short m_planCrafted;
    // -> int PLNLastIndex;
    // -> struct [anonymous] __vt__9PLNTarget;
}

// Range: 0x801F33DC -> 0x801F34AC
// this: r30
PLNTarget::~PLNTarget() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PLNTarget;
}

// Range: 0x801F34AC -> 0x801F3990
// this: r31
void PLNTarget::SetVariable(const char * szVar /* r28 */, const char * zValue /* r29 */) {
    // Local variables
    int group; // r1+0xC
    int item; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> int PLNLastIndex;
    // -> struct PLNIconData PLNIconDataTable[15];
}

// Range: 0x801F3990 -> 0x801F3BD0
// this: r29
char * PLNTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * pResultString; // r31
    int grid; // r1+0xC
    int item; // r1+0x8
    enum eKFTType kftType; // r3
    unsigned char usable; // r3
    int i; // r30

    // References
    // -> static const char * const BBS_OpenAsChild;
    // -> static const char * const BBS_noTitle;
    // -> static const char * const BBS_horiz;
    // -> enum eKFTType m_object;
    // -> struct PLNIconData PLNIconDataTable[15];
    // -> static const char * const BBS_iniSelect;
    // -> static const char * const BBS_config;
    // -> static const char * const BBS_exists;
}

// Range: 0x801F3BD0 -> 0x801F3D88
// this: r29
unsigned short * PLNTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x18
    unsigned short * pResultString; // r31

    // References
    // -> struct PLNIconData PLNIconDataTable[15];
    // -> class EGlobal _globals;
}

// Range: 0x801F3D88 -> 0x801F3E7C
// this: r31
void PLNTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class GameData _gd;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801F3E7C -> 0x801F3EB4
unsigned char PLNTarget::FlashScreenReady() {
    // References
    // -> class EGlobal _globals;
}


