/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\trctarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F4A6C -> 0x801F60CC
*/
// Range: 0x801F4A6C -> 0x801F4D8C
// this: r28
TRCTarget::TRCTarget() {
    // References
    // -> static const char * const TRC_loaded;
    // -> struct [anonymous] __vt__9TRCTarget;
}

// Range: 0x801F4D8C -> 0x801F4E28
// this: r30
TRCTarget::~TRCTarget() {
    // References
    // -> struct [anonymous] __vt__9TRCTarget;
}

// Range: 0x801F4E28 -> 0x801F4E2C
void TRCTarget::SelectionCallback() {}

// Range: 0x801F4E2C -> 0x801F4E30
void TRCTarget::ZeroInputCallback() {}

// Range: 0x801F4E30 -> 0x801F4E34
void TRCTarget::Update() {}

// Range: 0x801F4E34 -> 0x801F4F54
// this: r29
void TRCTarget::HideDialog() {
    // Local variables
    class UIScreenManager * pUISM; // r30
    class EController * pCtrl; // r0

    // References
    // -> class GameData _gd;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801F4F54 -> 0x801F4FE0
// this: r31
void TRCTarget::ShowCoreDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F4FE0 -> 0x801F5074
// this: r31
void TRCTarget::ShowExtensionDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F5074 -> 0x801F5124
// this: r30
void TRCTarget::ShowBatteryLowDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F5124 -> 0x801F5278
// this: r29
void TRCTarget::SpawnDialog() {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801F5278 -> 0x801F53EC
// this: r28
char * TRCTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801F53EC -> 0x801F5560
// this: r29
unsigned short * TRCTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    int num; // r0
    unsigned short * outString; // r30
}

// Range: 0x801F5560 -> 0x801F5758
// this: r29
void TRCTarget::SetVariable(const char * szCommand /* r31 */) {
    // Local variables
    class UIScreenManager * pUISM; // r0

    // References
    // -> class EGlobal _globals;
    // -> static const char * const TRC_loaded;
}

// Range: 0x801F5758 -> 0x801F5A10
// this: r29
void TRCTarget::CalculateBackgroundSize() {
    // Local variables
    class EVec2 vTLdummy; // r1+0x60
    class EVec2 bodyTextSize; // r1+0x58
    float backdropHeight; // f31
    class EVec2 titleTextSize; // r1+0x50
}

// Range: 0x801F5A10 -> 0x801F5BB8
// this: r29
float TRCTarget::CalculateMaxOptionWidth() {
    // Local variables
    float optionWidth; // f31
    class EVec2 size; // r1+0x60
    class EVec2 vTLdummy; // r1+0x58
    class EVec2 vBRdummy; // r1+0x50
}

// Range: 0x801F5BB8 -> 0x801F5C70
class EVec2 TRCTarget::GetOptionTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801F5C70 -> 0x801F60BC
// this: r31
void TRCTarget::SetupWidgets() {
    // Local variables
    int i; // r28
    float titleY; // f31
    float optionsY; // f31
    int i; // r28
    int i; // r28

    // References
    // -> char * TRC_buttonN_Table[3];
}

// Range: 0x801F60BC -> 0x801F60CC
void TRCTarget::HideDialog() {}


