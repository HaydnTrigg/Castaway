/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cheats.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020F830 -> 0x80212A1C
*/
// Range: 0x8020F830 -> 0x8020F870
// this: r31
ECheats::ECheats() {}

// Range: 0x8020F870 -> 0x8020F8D8
// this: r30
ECheats::~ECheats() {}

// Range: 0x8020F8D8 -> 0x80211EF4
// this: r29
void ECheats::Init(const class EGlobal & Globals /* r30 */) {
    // Local variables
    unsigned char bOldSoundValue; // r28

    // References
    // -> class EApp * _pApp;
    // -> class EGlobal _globals;
    // -> signed short sDumpTFBACount;
    // -> unsigned char sDumpTFBA;
    // -> unsigned char sUseScalingInteractionRange;
    // -> signed short sMaxIterations;
    // -> unsigned char sTraceOnlyOnPrimBreak;
    // -> float sTooLongInTickTime;
    // -> float sTooLongInPrimTime;
    // -> unsigned char sTestingTooLongInPrim;
    // -> unsigned char cheatShowAllPlans;
    // -> unsigned char cheatIgnoreResources;
    // -> unsigned char cheatIgnoreRequirements;
    // -> unsigned char s_enableProfiling;
}

// Range: 0x80211EF4 -> 0x80211F28
// this: r31
void ECheats::Reset() {}

// Range: 0x80211F28 -> 0x80211F5C
// this: r31
void ECheats::EmptyLookupList() {}

// Range: 0x80211F5C -> 0x80211F68
void ECheats::ReadCheatsFile() {}

// Range: 0x80211F68 -> 0x80211F6C
void ECheats::WriteCheatsFile() {}

// Range: 0x80211F6C -> 0x80211F70
void ECheats::Update() {}

// Range: 0x80211F70 -> 0x8021206C
// this: r28
void ECheats::EnableCheats() {
    // Local variables
    struct HashIterator pCheat; // r1+0x20
    class ECheatLookup & cheat; // r29

    // References
    // -> class CheatMenuParams s_cheatMenuParams;
}

// Range: 0x8021206C -> 0x8021213C
// this: r29
void ECheats::DisableCheats() {
    // Local variables
    struct HashIterator pCheat; // r1+0x20
    class ECheatLookup & cheat; // r30

    // References
    // -> class CheatMenuParams s_cheatMenuParams;
}

// Range: 0x8021213C -> 0x802121E8
// this: r26
ECheatLookup::ECheatLookup(int index /* r0 */, enum CheatType type /* r27 */, void * pVar /* r28 */, const char * pDescr /* r29 */, unsigned char extraNewLine /* r30 */, unsigned char addToMenu /* r31 */) {}

// Range: 0x802121E8 -> 0x802124A4
// this: r29
void ECheatLookup::WriteCheat(class EFile * pFile /* r30 */, int & cnt /* r31 */) {
    // Local variables
    char s[256]; // r1+0x8
    int len; // r0
    int numTab; // r7
    int i; // r8
}

// Range: 0x802124A4 -> 0x802124FC
void ECheatDMI::GetDescription(char * szBuffer /* r30 */, int bufLen /* r31 */) {}

// Range: 0x802124FC -> 0x80212628
// this: r30
void ECheatDMI::GetValue(char * szBuffer /* r31 */) {}

// Range: 0x80212628 -> 0x802128AC
// this: r30
void ECheatDMI::ButtonPress(enum EDebugMenuButton button /* r31 */) {}

// Range: 0x802128AC -> 0x80212A0C
// this: r29
void ECheatDMI::ButtonPress(enum EDebugMenuButton button /* r30 */) {
    // Local variables
    int inc; // r0
    unsigned char & val; // r0
    int sval; // r4
    signed char & val; // r0
    int sval; // r4
    signed short & val; // r0
    int sval; // r4
}

// Range: 0x80212A0C -> 0x80212A14
enum CheatType ECheatDMI::GetType() {}

// Range: 0x80212A14 -> 0x80212A1C
void * ECheatDMI::GetVariable() {}


