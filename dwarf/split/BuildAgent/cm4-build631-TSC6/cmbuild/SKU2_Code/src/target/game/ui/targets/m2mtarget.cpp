/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\m2mtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0388 -> 0x801B372C
*/
// Range: 0x801B0388 -> 0x801B0908
// this: r30
M2MTarget::M2MTarget() {
    // Local variables
    int source; // r0
    class UIScreenManager * pUISM; // r27
    int j; // r28

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9M2MTarget;
}

// Range: 0x801B0908 -> 0x801B0A0C
// this: r30
M2MTarget::~M2MTarget() {
    // References
    // -> struct [anonymous] __vt__9M2MTarget;
}

// Range: 0x801B0A0C -> 0x801B0BC4
// this: r28
char * M2MTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801B0BC4 -> 0x801B0DF4
// this: r29
unsigned short * M2MTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned int nItem; // r4
    unsigned short * outString; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B0DF4 -> 0x801B0F4C
// this: r29
void M2MTarget::SetVariable(const char * szCommand /* r30 */) {
    // Local variables
    unsigned char bItemEnabled; // r0
}

// Range: 0x801B0F4C -> 0x801B101C
// this: r26
void M2MTarget::ReflowButtonSelection() {
    // Local variables
    int j; // r27

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B101C -> 0x801B1368
// this: r31
void M2MTarget::Update() {
    // Local variables
    unsigned int numSel; // r30
    unsigned int currentSel; // r29
    class EController * pCtrl; // r28
    unsigned char bCardInSlot1; // r1+0x9
    unsigned char bCardInSlot2; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801B1368 -> 0x801B14E8
// this: r31
void M2MTarget::PollLoadSaveTarget() {
    // Local variables
    int result; // r0
}

// Range: 0x801B14E8 -> 0x801B18D8
// this: r31
void M2MTarget::SelectionCallback(int selected /* r28 */) {
    // Local variables
    int source; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B18D8 -> 0x801B18DC
void M2MTarget::ZeroInputCallback() {}

// Range: 0x801B18DC -> 0x801B193C
// this: r31
void M2MTarget::DialogClosedCallback() {}

// Range: 0x801B193C -> 0x801B19DC
// this: r30
void M2MTarget::OnCancel() {}

// Range: 0x801B19DC -> 0x801B1B38
// this: r30
void M2MTarget::OnSaveLoadSucceed() {
    // Local variables
    int source; // r0
}

// Range: 0x801B1B38 -> 0x801B1C70
// this: r30
void M2MTarget::OnSaveLoadFailed(unsigned char retrySaveLoad /* r31 */) {}

// Range: 0x801B1C70 -> 0x801B1CB4
void M2MTarget::OnSlotSelectItemSelected() {}

// Range: 0x801B1CB4 -> 0x801B1CE0
int M2MTarget::OnGetNumItems() {
    // Local variables
    int n_result; // r3
}

// Range: 0x801B1CE0 -> 0x801B1CE8
int M2MTarget::GetDevice() {}

// Range: 0x801B1CE8 -> 0x801B1CF8
void M2MTarget::SetDevice() {}

// Range: 0x801B1CF8 -> 0x801B1E68
// this: r29
void M2MTarget::SpawnNoSpaceDialog(enum NoSpaceType dialogType /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B1E68 -> 0x801B1F40
// this: r30
void M2MTarget::SpawnConfirmStartNewGameDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B1F40 -> 0x801B2028
// this: r30
void M2MTarget::SpawnContinueNoMemCardDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2028 -> 0x801B2118
// this: r30
void M2MTarget::SpawnSaveBeforeQuitCASDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2118 -> 0x801B2208
// this: r30
void M2MTarget::SpawnSaveBeforeQuitGameDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2208 -> 0x801B22E0
// this: r30
void M2MTarget::SpawnNoSaveBeforeQuitDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B22E0 -> 0x801B2420
// this: r29
void M2MTarget::GetItemTextDeviceSelect(int device_ /* r31 */, unsigned short * retStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2420 -> 0x801B27E0
// this: r30
void M2MTarget::GetItemTextSaveGameSelect(int save_ /* r28 */, unsigned short * retStr /* r31 */) {
    // Local variables
    unsigned char bHasSave; // r1+0x8
    class MemoryDevicePort_t temp_port; // r1+0x50

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B27E0 -> 0x801B287C
// this: r31
unsigned char M2MTarget::IsItemEnabledDeviceSelect() {
    // Local variables
    unsigned char b_result; // r3
    enum EMC_OpStatus ops; // r0
}

// Range: 0x801B287C -> 0x801B28CC
unsigned char M2MTarget::IsItemEnabledSaveGameSelect() {
    // Local variables
    unsigned char b_result; // r1+0x8
    class MemoryDevicePort_t port; // r1+0x10
}

// Range: 0x801B28CC -> 0x801B28D4
unsigned char M2MTarget::DoesMemoryDeviceExist() {}

// Range: 0x801B28D4 -> 0x801B2920
// this: r31
void M2MTarget::StartLoadedGame() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2920 -> 0x801B2A24
// this: r31
void M2MTarget::ReturnFailureDestination() {
    // Local variables
    int source; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801B2A24 -> 0x801B2AB8
// this: r31
void M2MTarget::StartNGCMemoryCardBootChecks() {}

// Range: 0x801B2AB8 -> 0x801B2C5C
// this: r27
void M2MTarget::UpdateWidgetState() {
    // Local variables
    int j; // r29
    int j; // r28

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B2C5C -> 0x801B2D2C
// this: r30
void M2MTarget::FillWidget() {
    // Local variables
    int itemIndex; // r31
    unsigned char bItemEnabled; // r0
}

// Range: 0x801B2D2C -> 0x801B2DBC
// this: r31
void M2MTarget::HideWidget() {}

// Range: 0x801B2DBC -> 0x801B3128
// this: r30
void M2MTarget::SetupWidgetLayout() {
    // Local variables
    class EVec2 vBackdropPos; // r1+0x20
    class EVec2 vBodyBox; // r1+0x18
    class EVec2 vBodyPos; // r1+0x10
    void * scratch; // r0
    class AptParagraph paragraph; // r1+0x38
    class EVec4 vColor; // r1+0x28
    class EVec2 vTL; // r1+0x8
    float backdropHeight; // f31
    float optionsY; // f31
    int j; // r28

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B3128 -> 0x801B31FC
// this: r27
void M2MTarget::UpdateSelection(int direction_ /* r28 */) {
    // Local variables
    int save; // r30
    unsigned char bDone; // r29
}

// Range: 0x801B31FC -> 0x801B3260
unsigned char M2MTarget::IsItemEnabled() {
    // Local variables
    unsigned char b_result; // r5
}

// Range: 0x801B3260 -> 0x801B32AC
// this: r31
void M2MTarget::CalcNumItems() {}

// Range: 0x801B32AC -> 0x801B34A0
// this: r31
void M2MTarget::SetCurrState() {}

// Range: 0x801B34A0 -> 0x801B3550
// this: r30
void M2MTarget::UnloadDialog() {
    // Local variables
    int j; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B3550 -> 0x801B3618
// this: r31
void M2MTarget::PrepareNewGame() {
    // Local variables
    unsigned char bHasSpace; // r1+0x9
    unsigned int nHDDSpaceStatus; // r1+0xC
    unsigned char bHasSave; // r1+0x8
    class MemoryDevicePort_t temp_port; // r1+0x10
}

// Range: 0x801B3618 -> 0x801B36B4
// this: r30
void M2MTarget::PrepareLoadGame() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B36B4 -> 0x801B36E8
// this: r31
void M2MTarget::PushButtonFilters() {}

// Range: 0x801B36E8 -> 0x801B372C
// this: r31
void M2MTarget::PopButtonFilters() {}


