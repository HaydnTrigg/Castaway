/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\bg.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020592C -> 0x80205D2C
*/
// Range: 0x8020592C -> 0x8020595C
static void BGExec_LoadDefaultNeighborhood() {
    // References
    // -> class BG _bg;
    // -> class GameData _gd;
}

// Range: 0x8020595C -> 0x8020599C
void BGCall_LoadDefaultNeighborhood() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x8020599C -> 0x80205A14
static void BGExec_LoadHouse() {
    // References
    // -> class BG _bg;
    // -> class EGlobal _globals;
}

// Range: 0x80205A14 -> 0x80205A54
void BGCall_LoadHouse() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80205A54 -> 0x80205A88
static void BGExec_CurHouseInit() {
    // References
    // -> class BG _bg;
    // -> class EGlobal _globals;
}

// Range: 0x80205A88 -> 0x80205AC8
void BGCall_CurHouseInit() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80205AC8 -> 0x80205B00
static void BGExec_FlushResQueue() {
    // References
    // -> class BG _bg;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x80205B00 -> 0x80205B40
void BGCall_FlushResQueue() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80205B40 -> 0x80205BA0
static void BGExec_SetCurHouse() {
    // Local variables
    enum TransitionType tt; // r0

    // References
    // -> class BG _bg;
    // -> class EGlobal _globals;
}

// Range: 0x80205BA0 -> 0x80205BE0
void BGCall_SetCurHouse() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80205BE0 -> 0x80205C10
void BGCall_SetGameModeAndResumeSounds() {}

// Range: 0x80205C10 -> 0x80205CDC
static void BGExec_CASTargetInit() {
    // Local variables
    int CasMode; // r0

    // References
    // -> class BG _bg;
    // -> static unsigned char s_casTargetSkipUI;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80205CDC -> 0x80205D2C
void BGCall_CASTargetInit(unsigned char skipUI /* r31 */) {
    // References
    // -> class Background * _pBackground;
    // -> static unsigned char s_casTargetSkipUI;
    // -> class BG _bg;
}


