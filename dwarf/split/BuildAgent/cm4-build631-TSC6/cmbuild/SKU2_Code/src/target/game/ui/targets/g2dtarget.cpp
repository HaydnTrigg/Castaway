/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\g2dtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A588C -> 0x801A8584
*/
// Range: 0x801A588C -> 0x801A5C50
// this: r27
G2DTarget::G2DTarget() {
    // References
    // -> unsigned char m_bInitComplete;
    // -> static const char * const G2D_loaded;
    // -> struct [anonymous] __vt__9G2DTarget;
}

// Range: 0x801A5C50 -> 0x801A5D54
// this: r29
G2DTarget::~G2DTarget() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> unsigned char m_bInitComplete;
    // -> struct [anonymous] __vt__9G2DTarget;
}

// Range: 0x801A5D54 -> 0x801A5EE8
// this: r28
char * G2DTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801A5EE8 -> 0x801A5F38
void G2DDummyPrintf() {}

// Range: 0x801A5F38 -> 0x801A6108
// this: r27
unsigned short * G2DTarget::GetLocalizable(const char * szVar /* r28 */) {
    // Local variables
    unsigned short * wideStr; // r29
    int num; // r0
    unsigned short * outString; // r30
}

// Range: 0x801A6108 -> 0x801A64D8
// this: r31
void G2DTarget::SetVariable(const char * szCommand /* r28 */, const char * szParams /* r30 */) {
    // Local variables
    int save; // r5
    int save; // r5

    // References
    // -> static const char * const G2D_loaded;
}

// Range: 0x801A64D8 -> 0x801A65C0
// this: r26
void G2DTarget::ReflowButtonSelection() {
    // Local variables
    int sel[3]; // r1+0x8
    int i; // r0
    int i; // r27

    // References
    // -> char * G2D_buttonN_Table[3];
}

// Range: 0x801A65C0 -> 0x801A68EC
// this: r31
void G2DTarget::Update() {
    // Local variables
    class UIReflow reflow; // r1+0x18
    class EController * pCtrl; // r29
    class EVec2 dummy; // r1+0x10
    unsigned int selectedItem; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class AptViewer * _gpAptViewer;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x801A68EC -> 0x801A6934
void G2DTarget::HideDialog() {}

// Range: 0x801A6934 -> 0x801A6990
// this: r31
void G2DTarget::HideDialogCursor() {}

// Range: 0x801A6990 -> 0x801A69B8
void G2DTarget::HideDialogRunCallbacks() {}

// Range: 0x801A69B8 -> 0x801A69C0
unsigned char G2DTarget::IsG2DActive() {}

// Range: 0x801A69C0 -> 0x801A69C8
unsigned char G2DTarget::IsG2DSpawned() {}

// Range: 0x801A69C8 -> 0x801A69CC
void G2DTarget::PushAptButtonFilters() {}

// Range: 0x801A69CC -> 0x801A6A00
// this: r31
void G2DTarget::PushAptButtonFiltersForPlayer() {}

// Range: 0x801A6A00 -> 0x801A6A58
// this: r31
void G2DTarget::PopAptButtonFilters() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A6A58 -> 0x801A6D38
// this: r30
void G2DTarget::SpawnDialog(class UIDialog * dialogSetup /* r31 */) {
    // Local variables
    class InteractorManager * pIntMgr; // r29
    class Interactor * pInteractor; // r0

    // References
    // -> class GameData _gd;
    // -> unsigned int g_g2dDialogTimeout;
    // -> class EGlobal _globals;
}

// Range: 0x801A6D38 -> 0x801A71E4
// this: r31
void G2DTarget::CalculateBackgroundSize() {
    // Local variables
    unsigned short * wideStr; // r29
    class EVec2 vTLdummy; // r1+0xB0
    float backdropHeight; // f31
    class EVec2 body1TextSize; // r1+0xA8
    class EVec2 body1TextSize; // r1+0xA0
    class EVec2 body2TextSize; // r1+0x98
    class EVec2 body1TextSize; // r1+0x90
    class EVec2 titleTextSize; // r1+0x88
}

// Range: 0x801A71E4 -> 0x801A7474
// this: r31
void G2DTarget::CalculateBody1AndBody2() {
    // Local variables
    class EVec2 vTLdummy; // r1+0x20
    class EVec4 vColor; // r1+0x28
    class AptParagraph paragraph; // r1+0x38
    class BString2 body1[2]; // r1+0x18
    class BString2 body2[2]; // r1+0x10
    int current; // r27
    int previous; // r28
    int lineBoundary; // r26
    int bodyEnd; // r0
    int body; // r25
    class BString2 & b1; // r24
    class BString2 & b2; // r23
    int wordEnd; // r22
    int wordLen; // r22
    class BString2 word; // r1+0xC
}

// Range: 0x801A7474 -> 0x801A7628
// this: r29
float G2DTarget::CalculateMaxOptionWidth() {
    // Local variables
    float optionWidth; // f31
    class EVec2 size; // r1+0x60
    class EVec2 vTLdummy; // r1+0x58
    class EVec2 vBRdummy; // r1+0x50
}

// Range: 0x801A7628 -> 0x801A76F4
class EVec2 G2DTarget::GetOptionTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, float fontSize /* f31 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801A76F4 -> 0x801A7C8C
// this: r31
void G2DTarget::SetupWidgets() {
    // Local variables
    int i; // r28
    float titleY; // f31
    float optionsY; // f31
    int i; // r28
    int i; // r28

    // References
    // -> char * G2D_buttonN_Table[3];
}

// Range: 0x801A7C8C -> 0x801A7DAC
// this: r29
void G2DTarget::UnloadDialog() {}

// Range: 0x801A7DAC -> 0x801A7F64
// this: r27
void G2DTarget::SetShaders(class UIDialog * dialogSetup /* r28 */) {
    // Local variables
    signed short pictureHeight; // r30
    signed short pictureWidth; // r29
}

// Range: 0x801A7F64 -> 0x801A7F84
void G2DTarget::ExecuteSelectionCallback() {}

// Range: 0x801A7F84 -> 0x801A7FA4
void G2DTarget::ExecuteZeroInputCallback() {}

// Range: 0x801A7FA4 -> 0x801A8030
// this: r31
void G2DTarget::ExecuteDialogClosedCallback() {
    // Local variables
    class CBFunctor0 * save_cb; // r0
}

// Range: 0x801A8030 -> 0x801A833C
// this: r29
void G2DTarget::SetupDialogData(class UIDialog * dialogSetup /* r30 */) {}

// Range: 0x801A833C -> 0x801A83C4
// this: r30
void G2DTarget::UnloadUI() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801A83C4 -> 0x801A83D8
unsigned char G2DTarget::CheckPlayerInput() {}

// Range: 0x801A83D8 -> 0x801A845C
// this: r31
unsigned char G2DTarget::ServiceG2DShutdown() {
    // Local variables
    unsigned char rc; // r4
}

// Range: 0x801A845C -> 0x801A84E8
// this: r30
UIDialog::~UIDialog() {}

// Range: 0x801A84E8 -> 0x801A84FC
void UIDialog::SpawnDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A84FC -> 0x801A8574
// this: r31
void UIDialog::HideDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A8574 -> 0x801A8584
void UIDialog::HideDialogCursor() {
    // References
    // -> class EGlobal _globals;
}


