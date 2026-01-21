/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uidraw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801822EC -> 0x8018272C
*/
// Range: 0x801822EC -> 0x8018238C
// this: r29
UIDrawTable::UIDrawTable() {
    // Local variables
    class DrawTableRecord * prev; // r31
    int i; // r30

    // References
    // -> struct [anonymous] __vt__11UIDrawTable;
}

// Range: 0x8018238C -> 0x80182448
// this: r29
UIDrawTable::~UIDrawTable() {
    // Local variables
    class DrawTableRecord * record; // r5
    class DrawTableRecord * next; // r31

    // References
    // -> struct [anonymous] __vt__11UIDrawTable;
}

// Range: 0x80182448 -> 0x80182514
void UIDrawTable::AddRecord() {
    // Local variables
    class DrawTableRecord * newRecord; // r8
    class DrawTableRecord * record; // r7
    unsigned char done; // r6
}

// Range: 0x80182514 -> 0x801825B8
void UIDrawTable::RemoveRecord() {}

// Range: 0x801825B8 -> 0x80182618
unsigned char UIDrawTable::InstallEntry() {
    // Local variables
    class DrawTableRecord * record; // r7
}

// Range: 0x80182618 -> 0x8018266C
unsigned char UIDrawTable::UnInstallEntry() {
    // Local variables
    class DrawTableRecord * record; // r5
    class DrawTableRecord * next; // r6
}

// Range: 0x8018266C -> 0x801826CC
void UIDrawTable::ExecuteDrawsPreFlash(class ERC * prc /* r30 */) {
    // Local variables
    class DrawTableRecord * record; // r3
    class DrawTableRecord * next; // r31
}

// Range: 0x801826CC -> 0x8018272C
void UIDrawTable::ExecuteDrawsPostFlash(class ERC * prc /* r30 */) {
    // Local variables
    class DrawTableRecord * record; // r3
    class DrawTableRecord * next; // r31
}


