/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\coltarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E9458 -> 0x801EA0E8
*/
// Range: 0x801E9458 -> 0x801E97A4
// this: r29
COLTarget::COLTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const COL_tabIcon1;
    // -> static const char * const COL_tabIcon0;
    // -> static const char * const COL_titleIcon;
    // -> static const char * const COL_empty_msg;
    // -> static const char * const COL_tabTitle;
    // -> static const char * const COL_title;
    // -> static const char * const COL_desc;
    // -> static const char * const COL_cancel;
    // -> static const char * const COL_tabChange;
    // -> static const char * const COL_totalTabs;
    // -> static const char * const COL_initialTab;
    // -> static const char * const COL_setCounts;
    // -> static const char * const COL_totalCount;
    // -> static const char * const COL_exists;
    // -> struct [anonymous] __vt__9COLTarget;
}

// Range: 0x801E97A4 -> 0x801E9874
// this: r29
COLTarget::~COLTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9COLTarget;
}

// Range: 0x801E9874 -> 0x801E9A7C
// this: r28
void COLTarget::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // Local variables
    int tab; // r1+0xC
    int tab; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> static const char * const COL_cancel;
    // -> static const char * const COL_tabChange;
}

// Range: 0x801E9A7C -> 0x801E9BB4
// this: r29
char * COLTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
    int numPieces; // r0
    char * countsString; // r30

    // References
    // -> static const char * const COL_totalTabs;
    // -> static const char * const COL_initialTab;
    // -> static const char * const COL_setCounts;
    // -> static const char * const COL_totalCount;
    // -> static const char * const COL_exists;
}

// Range: 0x801E9BB4 -> 0x801E9C34
// this: r31
void COLTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801E9C34 -> 0x801E9E7C
// this: r28
unsigned short * COLTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    unsigned short * outString; // r31

    // References
    // -> static const char * const COL_empty_msg;
    // -> static const char * const COL_tabTitle;
    // -> static const char * const COL_title;
    // -> class EGlobal _globals;
    // -> static const char * const COL_desc;
}

// Range: 0x801E9E7C -> 0x801E9FC0
// this: r29
void COLTarget::ChangeTab(unsigned char bChangePanels /* r30 */) {
    // Local variables
    int i; // r30
    int i; // r30

    // References
    // -> int m_treasure_map_shaders[9];
    // -> int m_heiroglyphics_shaders[9];
    // -> static const char * const COL_tabIcon1;
    // -> static const char * const COL_tabIcon0;
}

// Range: 0x801E9FC0 -> 0x801E9FEC
int COLTarget::GetNumberOfPiecesThisTab() {}

// Range: 0x801E9FEC -> 0x801EA0E8
// this: r27
char * COLTarget::GetCountsString() {
    // Local variables
    int found; // r30
    class InventoryItems * pInventory; // r0
    int count; // r0
    int size; // r29
    char * retData; // r28
    char * retInsert; // r29
    int i; // r27
}


