/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\svqtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E0984 -> 0x801E15F0
*/
// Range: 0x801E0984 -> 0x801E0AD8
// this: r29
SVQTarget::SVQTarget(enum SVQMode mode /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9SVQTarget;
}

// Range: 0x801E0AD8 -> 0x801E0B70
// this: r30
SVQTarget::~SVQTarget() {
    // References
    // -> struct [anonymous] __vt__9SVQTarget;
}

// Range: 0x801E0B70 -> 0x801E0B74
void SVQTarget::SetVariable() {}

// Range: 0x801E0B74 -> 0x801E0C04
unsigned short * SVQTarget::GetLocalizable() {
    // Local variables
    char text_item[255]; // r1+0x8
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801E0C04 -> 0x801E0C8C
// this: r29
char * SVQTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
}

// Range: 0x801E0C8C -> 0x801E0C94
void SVQTarget::Shutdown() {}

// Range: 0x801E0C94 -> 0x801E0C98
void SVQTarget::Update() {}

// Range: 0x801E0C98 -> 0x801E0CCC
void SVQTarget::SpawnDialogsBegin() {}

// Range: 0x801E0CCC -> 0x801E0E24
// this: r28
void SVQTarget::SpawnSaveQuitDialogBox(enum SQVDialogState state /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E0E24 -> 0x801E0E38
class ELocString SVQTarget::GetQuitWithoutSavingString() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E0E38 -> 0x801E0E50
class ELocString SVQTarget::GetWantToSaveString() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E0E50 -> 0x801E0F48
// this: r30
void SVQTarget::Setup_MainMenuPetPlazaDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E0F48 -> 0x801E106C
// this: r29
void SVQTarget::Setup_MainMenuStandardLotDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E106C -> 0x801E1174
// this: r29
void SVQTarget::Setup_NeighborhoodDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E1174 -> 0x801E1288
// this: r29
void SVQTarget::Setup_QuitConfirmDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E1288 -> 0x801E139C
// this: r29
void SVQTarget::Setup_DeathQuitConfirmDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E139C -> 0x801E13E4
// this: r31
void SVQTarget::OnCancelDialog() {}

// Range: 0x801E13E4 -> 0x801E149C
// this: r31
void SVQTarget::OnSaveQuitDialogClose() {}

// Range: 0x801E149C -> 0x801E14EC
void SVQTarget::OnPetPlazaQuitDialogClose() {}

// Range: 0x801E14EC -> 0x801E1544
void SVQTarget::OnNeighborhoodDialogClose() {}

// Range: 0x801E1544 -> 0x801E1590
// this: r31
void SVQTarget::OnQuitConfirmDialogClose() {}

// Range: 0x801E1590 -> 0x801E15A4
void SVQTarget::OnDeathQuitConfirmDialogClose() {}

// Range: 0x801E15A4 -> 0x801E15F0
// this: r31
void SVQTarget::OnSaveGameComplete() {}


