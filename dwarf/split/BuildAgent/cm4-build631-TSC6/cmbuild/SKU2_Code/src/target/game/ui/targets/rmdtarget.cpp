/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\rmdtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C13D4 -> 0x801C2060
*/
// Range: 0x801C13D4 -> 0x801C1700
// this: r30
RMDTarget::RMDTarget(int type /* r26 */, int goalIndex /* r27 */) {
    // Local variables
    unsigned int typeId; // r0

    // References
    // -> static unsigned int RMD_Audio_Samples[6];
    // -> static const char * const RMD_model;
    // -> static struct rmdModelInfo_s RMD_Model_Ids[6];
    // -> static char * const RMD_Button_Strings[6];
    // -> class EGlobal _globals;
    // -> static char * const RMD_Title_Strings[6];
    // -> static const char * const RMD_btn_A3;
    // -> static const char * const RMD_btn_A2;
    // -> static const char * const RMD_btn_A1;
    // -> static const char * const RMD_title_A3;
    // -> static const char * const RMD_title_A2;
    // -> static const char * const RMD_title_A1;
    // -> static const char * const RMD_bg;
    // -> static const char * const RMD_title;
    // -> static const char * const RMD_btn_text;
    // -> static const char * const show_tween_RMD;
    // -> static const char * const hide_tween_RMD;
    // -> static const char * const RMD_SELECT_BUTTON;
    // -> static const char * const RMD_exists;
    // -> struct [anonymous] __vt__9RMDTarget;
}

// Range: 0x801C1700 -> 0x801C17F4
// this: r30
RMDTarget::~RMDTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const RMD_model;
    // -> struct [anonymous] __vt__9RMDTarget;
}

// Range: 0x801C17F4 -> 0x801C192C
// this: r29
void RMDTarget::SetVariable(const char * szCommand /* r30 */) {
    // Local variables
    class UIReflow reflow; // r1+0x20
    class UIReflow reflow; // r1+0x8

    // References
    // -> static const char * const hide_tween_RMD;
    // -> static const char * const show_tween_RMD;
    // -> static const char * const RMD_SELECT_BUTTON;
}

// Range: 0x801C192C -> 0x801C19B0
// this: r29
char * RMDTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const RMD_exists;
}

// Range: 0x801C19B0 -> 0x801C1A98
// this: r29
unsigned short * RMDTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30

    // References
    // -> static const char * const RMD_btn_text;
    // -> static const char * const RMD_title;
}

// Range: 0x801C1A98 -> 0x801C1AF4
void RMDTarget::Update() {
    // References
    // -> float _dt;
}

// Range: 0x801C1AF4 -> 0x801C1E4C
// this: r29
void RMDTarget::SetupWidgets() {
    // Local variables
    class EVec2 strSize; // r1+0x28
    class UIReflow reflow; // r1+0x40
    class AptParagraph paragraph; // r1+0x58
    class EVec4 vColor; // r1+0x30
    class EVec2 vTL; // r1+0x20
    class EVec2 vBodyBox; // r1+0x18
    int tmpWidth; // r5
    unsigned int titleBgWidth; // r30
    unsigned int btnBgWidth; // r30
}

// Range: 0x801C1E4C -> 0x801C1EFC
// this: r31
void RMDTarget::UnloadDialog() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801C1EFC -> 0x801C1FC0
void RMDTarget::StartShowTween() {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801C1FC0 -> 0x801C2060
void RMDTarget::StartHideTween() {
    // Local variables
    class UIReflow reflow; // r1+0x8
}


