/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\mottarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B48E0 -> 0x801B5B30
*/
// Range: 0x801B48E0 -> 0x801B4C88
// this: r31
MOTTarget::MOTTarget() {
    // Local variables
    int i; // r26

    // References
    // -> class GameData _gd;
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
    // -> static const char * const MOT_textBG7;
    // -> static const char * const MOT_textBG6;
    // -> static const char * const MOT_textBG5;
    // -> static const char * const MOT_textBG4;
    // -> static const char * const MOT_textBG3;
    // -> static const char * const MOT_textBG2;
    // -> static const char * const MOT_textBG1;
    // -> static const char * const MOT_textBG0;
    // -> static const char * const MOT_icon_text7;
    // -> static const char * const MOT_loaded;
    // -> static const char * const MOT_text_hide_callback;
    // -> static const char * const MOT_text_show_callback;
    // -> static const char * const MOT_hide_callback;
    // -> static const char * const MOT_show_callback;
    // -> static const char * const MOT_icon_alarm;
    // -> static const char * const MOT_exists;
    // -> struct [anonymous] __vt__9MOTTarget;
}

// Range: 0x801B4C88 -> 0x801B4D40
// this: r30
MOTTarget::~MOTTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MOTTarget;
}

// Range: 0x801B4D40 -> 0x801B4E3C
// this: r30
void MOTTarget::SetVariable(const char * szCommand /* r31 */) {
    // References
    // -> static const char * const MOT_loaded;
    // -> static const char * const MOT_hide_callback;
    // -> static const char * const MOT_show_callback;
    // -> static const char * const MOT_short_text_container;
    // -> static const char * const MOT_text_hide_callback;
    // -> static const char * const MOT_text_show_callback;
}

// Range: 0x801B4E3C -> 0x801B4F68
// this: r29
char * MOTTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const MOT_icon_alarm;
    // -> static const char * const MOT_exists;
}

// Range: 0x801B4F68 -> 0x801B50F0
unsigned short * MOTTarget::GetLocalizable(const char * szVar /* r31 */) {
    // Local variables
    unsigned short * wideStr; // r30
    unsigned short * outString; // r31

    // References
    // -> class EGlobal _globals;
    // -> static const char * const MOT_icon_text7;
}

// Range: 0x801B50F0 -> 0x801B514C
// this: r30
void MOTTarget::SetAlpha(unsigned int value /* r31 */) {}

// Range: 0x801B514C -> 0x801B5314
// this: r30
void MOTTarget::Update() {
    // References
    // -> static const char * const MOT_text_hide_callback;
    // -> static const char * const MOT_text_show_callback;
    // -> static const char * const MOT_short_text_container;
    // -> static const char * const MOT_hide_callback;
    // -> static const char * const MOT_show_callback;
}

// Range: 0x801B5314 -> 0x801B54E8
// this: r26
void MOTTarget::ShowMotives() {
    // Local variables
    int i; // r30
    int yPosition; // r29
    int bkgH; // r31
    char nameStr[256]; // r1+0x8
    int i; // r28
    int motiveID; // r27
}

// Range: 0x801B54E8 -> 0x801B5500
// this: r4
unsigned char MOTTarget::HideMotives() {
    // Local variables
    unsigned char ret; // r0
}

// Range: 0x801B5500 -> 0x801B588C
// this: r25
void MOTTarget::UpdateMotiveBars() {
    // Local variables
    unsigned char skipAnimation; // r27
    class cXPerson * person; // r3
    int item; // r26
    int change; // r5
    int base; // r6
    int frame; // r24
    char pBar[64]; // r1+0x48
    char pAnim[64]; // r1+0x8
    int item; // r24
    int minMeter; // r27
    int motiveBar; // r28
    int motiveID; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801B588C -> 0x801B59C4
// this: r29
int MOTTarget::ReadMotiveBar(int barNumber /* r30 */) {
    // Local variables
    class cXPerson * pPerson; // r31
    int motiveNumber; // r0
    int motiveValue; // r5
    int motiveChange; // r6
    float scaleNumber; // f31
    float fraction; // f1
}

// Range: 0x801B59C4 -> 0x801B5A48
// this: r27
void MOTTarget::ResetRealMotiveValues() {
    // Local variables
    int barNumber; // r29
    int motiveNumber; // r0
    class cXPerson * pPerson; // r28
    int motiveValue; // r0
}

// Range: 0x801B5A48 -> 0x801B5A54
void MOTTarget::SelectedPersonChanged() {}

// Range: 0x801B5A54 -> 0x801B5A5C
void MOTTarget::SetTextButtonPressed() {}

// Range: 0x801B5A5C -> 0x801B5AC4
int MOTTarget::MapMotiveIDFromBar() {}

// Range: 0x801B5AC4 -> 0x801B5B30
// this: r29
int MOTTarget::CountUnlockedMotives() {
    // Local variables
    int count; // r31
    int i; // r30
    int motiveID; // r0
}


