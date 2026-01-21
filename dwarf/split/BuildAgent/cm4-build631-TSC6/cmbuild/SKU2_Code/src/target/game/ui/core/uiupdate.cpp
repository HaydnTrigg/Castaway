/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiupdate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187370 -> 0x80187798
*/
// Range: 0x80187370 -> 0x80187410
// this: r29
UIUpdateTable::UIUpdateTable() {
    // Local variables
    class UpdateTableRecord * prev; // r31
    int i; // r30

    // References
    // -> struct [anonymous] __vt__13UIUpdateTable;
}

// Range: 0x80187410 -> 0x801874CC
// this: r29
UIUpdateTable::~UIUpdateTable() {
    // Local variables
    class UpdateTableRecord * record; // r5
    class UpdateTableRecord * next; // r31

    // References
    // -> struct [anonymous] __vt__13UIUpdateTable;
}

// Range: 0x801874CC -> 0x80187598
void UIUpdateTable::AddRecord() {
    // Local variables
    class UpdateTableRecord * newRecord; // r8
    class UpdateTableRecord * record; // r7
    unsigned char done; // r6
}

// Range: 0x80187598 -> 0x8018763C
void UIUpdateTable::RemoveRecord() {}

// Range: 0x8018763C -> 0x8018769C
unsigned char UIUpdateTable::InstallEntry() {
    // Local variables
    class UpdateTableRecord * record; // r7
}

// Range: 0x8018769C -> 0x801876F0
unsigned char UIUpdateTable::UnInstallEntry() {
    // Local variables
    class UpdateTableRecord * record; // r5
    class UpdateTableRecord * next; // r6
}

// Range: 0x801876F0 -> 0x80187748
void UIUpdateTable::ExecuteUpdatesPreFlash() {
    // Local variables
    class UpdateTableRecord * record; // r3
    class UpdateTableRecord * next; // r31
}

// Range: 0x80187748 -> 0x80187798
void UIUpdateTable::ExecuteUpdatesPostFlash() {
    // Local variables
    class UpdateTableRecord * record; // r3
    class UpdateTableRecord * next; // r31
}


