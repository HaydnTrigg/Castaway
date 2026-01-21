/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiuserdrawcb.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187798 -> 0x80187C60
*/
// Range: 0x80187798 -> 0x80187838
// this: r29
UIUserDrawCBTable::UIUserDrawCBTable() {
    // Local variables
    class UserDrawCBTableRecord * prev; // r31
    int i; // r30

    // References
    // -> struct [anonymous] __vt__17UIUserDrawCBTable;
}

// Range: 0x80187838 -> 0x801878F4
// this: r29
UIUserDrawCBTable::~UIUserDrawCBTable() {
    // Local variables
    class UserDrawCBTableRecord * record; // r5
    class UserDrawCBTableRecord * next; // r31

    // References
    // -> struct [anonymous] __vt__17UIUserDrawCBTable;
}

// Range: 0x801878F4 -> 0x80187960
void UIUserDrawCBTable::AddRecord() {
    // Local variables
    class UserDrawCBTableRecord * newRecord; // r8
}

// Range: 0x80187960 -> 0x80187A34
// this: r31
void UIUserDrawCBTable::RemoveRecord() {}

// Range: 0x80187A34 -> 0x80187AD0
// this: r28
unsigned char UIUserDrawCBTable::InstallEntry(const char * flashName /* r29 */, class CBFunctor2 * ftor /* r30 */, const char * name /* r31 */) {
    // Local variables
    class UserDrawCBTableRecord * record; // r0
}

// Range: 0x80187AD0 -> 0x80187B48
// this: r27
unsigned char UIUserDrawCBTable::UnInstallAllName(const char * name /* r28 */) {
    // Local variables
    unsigned char rc; // r31
    class UserDrawCBTableRecord * record; // r30
    class UserDrawCBTableRecord * next; // r29
}

// Range: 0x80187B48 -> 0x80187BAC
class UserDrawCBTableRecord * UIUserDrawCBTable::FindEntry(const char * flashName /* r30 */) {
    // Local variables
    class UserDrawCBTableRecord * record; // r31
}

// Range: 0x80187BAC -> 0x80187C60
// this: r30
void UIUserDrawCBTable::ExecuteCallback(class ERC * prc /* r31 */) {
    // Local variables
    class UserDrawCBTableRecord * record; // r0

    // References
    // -> struct structDrawCBparams s_drawCBparams;
}


