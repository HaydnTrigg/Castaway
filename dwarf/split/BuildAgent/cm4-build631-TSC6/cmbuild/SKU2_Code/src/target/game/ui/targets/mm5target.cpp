/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\mm5target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CECC4 -> 0x801D0230
*/
// Range: 0x801CECC4 -> 0x801CF340
// this: r30
MMUTarget::MMUTarget() {
    // Local variables
    unsigned long index; // r27

    // References
    // -> class EFontManager _fontman;
    // -> class AptViewer * _gpAptViewer;
    // -> class EControllerManager * _pCtrlMan;
    // -> class ESimsApp _app;
    // -> class GameData _gd;
    // -> static const char * const MMU_LOT_INDEX;
    // -> static const char * const MMU_NGH_INDEX;
    // -> static const char * const MMU_SET_DEVMENU_STATE;
    // -> static const char * const MMU_CANCEL_BUTTON;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MMUTarget;
}

// Range: 0x801CF340 -> 0x801CF49C
// this: r30
MMUTarget::~MMUTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MMUTarget;
}

// Range: 0x801CF49C -> 0x801CF708
// this: r28
void MMUTarget::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const MMU_CANCEL_BUTTON;
}

// Range: 0x801CF708 -> 0x801CF868
// this: r28
char * MMUTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30

    // References
    // -> static unsigned char g_ShowFreePlayLots;
    // -> class GameData _gd;
}

// Range: 0x801CF868 -> 0x801CFA4C
// this: r28
unsigned short * MMUTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    const unsigned short * name; // r0
    const unsigned short * name; // r0
    unsigned short * outString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CFA4C -> 0x801CFA90
// this: r31
void MMUTarget::OnButtonChange() {
    // Local variables
    int button_number; // r0
}

// Range: 0x801CFA90 -> 0x801CFB8C
// this: r31
void MMUTarget::OnButtonSelect() {
    // Local variables
    int button_number; // r0
    enum MMU_MAIN_SCREEN_CHOICE button_selected; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801CFB8C -> 0x801CFC2C
void MMUTarget::SetupCAS() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CFC2C -> 0x801CFCFC
// this: r30
void MMUTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801CFCFC -> 0x801CFD00
void MMUTarget::Draw() {}

// Range: 0x801CFD00 -> 0x801CFD58
// this: r31
void MMUTarget::OnStartGameComplete() {}

// Range: 0x801CFD58 -> 0x801CFDFC
// this: r29
void MMUTarget::LaunchNewGame() {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801CFDFC -> 0x801CFE58
void MMUTarget::LaunchSavedGame() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CFE58 -> 0x801CFE7C
unsigned short * MMUTarget::GetListItemName() {}

// Range: 0x801CFE7C -> 0x801CFF38
unsigned short * MMUTarget::GetNGHListItemName() {
    // Local variables
    unsigned int index; // r1+0x8
    char item_name[255]; // r1+0xC
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30

    // References
    // -> char NghFileNames[16][16];
}

// Range: 0x801CFF38 -> 0x801CFFF8
unsigned short * MMUTarget::GetLotListItemName(const char * szVar /* r30 */) {
    // Local variables
    unsigned int index; // r31
    char * houseName; // r0
    const unsigned short * item_name; // r31
    unsigned short * outString; // r30
    unsigned short * outString; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CFFF8 -> 0x801CFFFC
void MMUTarget::OnCancelKeyPressed() {}

// Range: 0x801CFFFC -> 0x801D0000
void MMUTarget::OnSquareKeyPressed() {}

// Range: 0x801D0000 -> 0x801D0054
// this: r31
void MMUTarget::RemoveKeyboard() {}

// Range: 0x801D0054 -> 0x801D01E8
// this: r28
void MMUTarget::CreateNewGameDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D01E8 -> 0x801D01FC
void MMUTarget::OnNewGameDialogClose() {}

// Range: 0x801D01FC -> 0x801D0204
unsigned char MMUTarget::ShouldShowNewGameDialog() {}

// Range: 0x801D0204 -> 0x801D0230
unsigned char MMUTarget::update_icons() {}


