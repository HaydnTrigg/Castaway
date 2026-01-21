/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\goltarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EA0E8 -> 0x801EB1DC
*/
// Range: 0x801EA0E8 -> 0x801EA65C
// this: r15
GOLTarget::GOLTarget() {
    // Local variables
    int i; // r19
    struct BookTab * pTab; // r18
    int o; // r17
    int p; // r16
    int i; // r14

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> static const char * const GOL_titleIcon;
    // -> static const char * const GOL_pageNum;
    // -> static const char * const GOL_desc;
    // -> static const char * const GOL_tabTitle;
    // -> static const char * const GOL_title;
    // -> static const char * const GOL_rgSizeY;
    // -> static const char * const GOL_rgSizeX;
    // -> static const char * const GOL_HoverTab;
    // -> static const char * const GOL_Rollover;
    // -> static const char * const GOL_rgOffSetY;
    // -> static const char * const GOL_rgOffSetX;
    // -> static const char * const GOL_rgKey;
    // -> static const char * const GOL_pageChange;
    // -> static const char * const GOL_cancel;
    // -> static const char * const GOL_tabChange;
    // -> static const char * const GOL_currentPage;
    // -> static const char * const GOL_pageCount;
    // -> static const char * const GOL_totalUnlockedTabs;
    // -> static const char * const GOL_totalTabs;
    // -> static const char * const GOL_initialTab;
    // -> static const char * const GOL_exists;
    // -> struct [anonymous] __vt__9GOLTarget;
}

// Range: 0x801EA65C -> 0x801EA748
// this: r29
GOLTarget::~GOLTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9GOLTarget;
}

// Range: 0x801EA748 -> 0x801EA7C8
// this: r31
void GOLTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801EA7C8 -> 0x801EAB48
// this: r31
void GOLTarget::SetVariable(const char * szCommand /* r27 */, const char * szParams /* r26 */) {
    // Local variables
    int tab; // r1+0xC
    int newPage; // r1+0x8
    struct BookTab * pTab; // r6
    int testpage; // r7
    int tabNum; // r0
    unsigned char highlightIcon; // r27
    int i; // r26

    // References
    // -> class EGlobal _globals;
    // -> static const char * const GOL_Rollover;
    // -> static const char * const GOL_rgSizeY;
    // -> static const char * const GOL_rgSizeX;
    // -> static const char * const GOL_rgOffSetY;
    // -> static const char * const GOL_rgOffSetX;
    // -> static const char * const GOL_rgKey;
    // -> static const char * const GOL_HoverTab;
    // -> static const char * const GOL_pageChange;
    // -> class GameData _gd;
    // -> static const char * const GOL_cancel;
    // -> static const char * const GOL_tabChange;
}

// Range: 0x801EAB48 -> 0x801EAD38
// this: r29
char * GOLTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
    int total; // r5
    int i; // r0

    // References
    // -> static const char * const GOL_currentPage;
    // -> static const char * const GOL_pageCount;
    // -> static const char * const GOL_totalUnlockedTabs;
    // -> static const char * const GOL_totalTabs;
    // -> static const char * const GOL_initialTab;
    // -> static const char * const GOL_exists;
}

// Range: 0x801EAD38 -> 0x801EAFD8
// this: r27
unsigned short * GOLTarget::GetLocalizable(const char * szVar /* r28 */) {
    // Local variables
    unsigned short * wideStr; // r31
    char dbString[256]; // r1+0x320
    char numStr[4]; // r1+0x1C
    char dbString[256]; // r1+0x220
    char dbString[256]; // r1+0x120
    struct BookTab * pTab; // r29
    int goalNum; // r0
    char dbString[256]; // r1+0x20
    unsigned short * outString; // r29

    // References
    // -> static const char * const GOL_pageNum;
    // -> static const char * const GOL_desc;
    // -> static const char * const GOL_tabTitle;
    // -> class EGlobal _globals;
    // -> static const char * const GOL_title;
}

// Range: 0x801EAFD8 -> 0x801EB0E4
// this: r29
void GOLTarget::ChangeTab(int tabNum /* r30 */) {
    // Local variables
    struct BookTab * pTab; // r31
}

// Range: 0x801EB0E4 -> 0x801EB1DC
// this: r25
void GOLTarget::UpdateGoalShaders() {
    // Local variables
    struct BookTab * pTab; // r27
    int i; // r26
}


