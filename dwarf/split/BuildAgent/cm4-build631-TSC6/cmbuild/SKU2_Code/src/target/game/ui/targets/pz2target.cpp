/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\pz2target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DA264 -> 0x801DB330
*/
// Range: 0x801DA264 -> 0x801DA6A4
// this: r30
PAZTarget::PAZTarget(unsigned char launchMode /* r28 */) {
    // Local variables
    int i; // r29
    class ERShader * pSimShader; // r1+0x8

    // References
    // -> class GameData _gd;
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> static const char * const PAZ_pet_points;
    // -> static const char * const PAZ_money;
    // -> static const char * const PAZ_sim_name;
    // -> static const char * const PAZ_TabName;
    // -> static const char * const PAZ_rgKey;
    // -> static const char * const PAZ_Cancel;
    // -> static const char * const PAZ_TabSelected;
    // -> static const char * const PAZ_SetCurrTab;
    // -> static const char * const PAZ_TabsReady;
    // -> static const char * const PAZ_HideOnCancel;
    // -> static const char * const PAZ_LaunchFromLiveMode;
    // -> static const char * const PAZ_On_Plaza;
    // -> static const char * const PAZ_BuildOnLotMode;
    // -> static const char * const PAZ_GetGameStatus;
    // -> static const char * const PAZ_iconState;
    // -> static const char * const PAZ_GetProgressStatus;
    // -> static const char * const PAZ_GetBuildBuyStatus;
    // -> static const char * const PAZ_GetTabIndex;
    // -> static const char * const PAZ_GetTabCount;
    // -> static const char * const PAZ_exists;
    // -> static unsigned long sInitialSelectedItem_Root;
    // -> enum eKFTType m_object;
    // -> static struct PAZItemInfo sRootItems[9];
    // -> struct [anonymous] __vt__9PAZTarget;
}

// Range: 0x801DA6A4 -> 0x801DA788
// this: r30
PAZTarget::~PAZTarget() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> static unsigned long sInitialSelectedItem_Root;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PAZTarget;
}

// Range: 0x801DA788 -> 0x801DACB0
// this: r28
void PAZTarget::SetVariable(const char * szCommand /* r29 */, const char * szValue /* r30 */) {
    // Local variables
    int neighborId; // r4
    int neighborId; // r30

    // References
    // -> static const char * const PAZ_TabsReady;
    // -> static const char * const PAZ_rgKey;
    // -> static const char * const PAZ_Cancel;
    // -> class GameData _gd;
    // -> static const char * const PAZ_TabSelected;
    // -> class EGlobal _globals;
    // -> static const char * const PAZ_SetCurrTab;
}

// Range: 0x801DACB0 -> 0x801DB07C
// this: r26
char * PAZTarget::GetVariable(const char * szVar /* r25 */) {
    // Local variables
    char * pResultString; // r28
    unsigned char bIsEnabled; // r29
    class ObjectModule * pObjectModule; // r0
    int i; // r27
    unsigned char bAllow; // r26
    int i; // r25

    // References
    // -> static struct PAZItemInfo sRootItems[9];
    // -> static const char * const PAZ_iconState;
    // -> static const char * const PAZ_exists;
    // -> static const char * const PAZ_LaunchFromLiveMode;
    // -> static const char * const PAZ_On_Plaza;
    // -> static const char * const PAZ_HideOnCancel;
    // -> static const char * const PAZ_BuildOnLotMode;
    // -> static const char * const PAZ_GetGameStatus;
    // -> static const char * const PAZ_GetProgressStatus;
    // -> class EGlobal _globals;
    // -> static const char * const PAZ_GetBuildBuyStatus;
    // -> static const char * const PAZ_GetTabIndex;
    // -> static const char * const PAZ_GetTabCount;
}

// Range: 0x801DB07C -> 0x801DB278
// this: r30
unsigned short * PAZTarget::GetLocalizable(const char * szVar /* r31 */) {
    // Local variables
    unsigned short widestring[8192]; // r1+0x18
    class BString2 first; // r1+0x10
    class BString2 last; // r1+0xC
    unsigned short * pResultString; // r31

    // References
    // -> static const char * const PAZ_pet_points;
    // -> static const char * const PAZ_money;
    // -> static const char * const PAZ_sim_name;
    // -> class EGlobal _globals;
    // -> static const char * const PAZ_TabName;
}

// Range: 0x801DB278 -> 0x801DB2F8
// this: r31
void PAZTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801DB2F8 -> 0x801DB330
unsigned char PAZTarget::FlashScreenReady() {
    // References
    // -> class EGlobal _globals;
}


