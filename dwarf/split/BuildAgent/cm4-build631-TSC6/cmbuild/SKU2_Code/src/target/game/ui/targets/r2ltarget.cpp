/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\r2ltarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BFDEC -> 0x801C1370
*/
// Range: 0x801BFDEC -> 0x801C015C
// this: r31
R2LTarget::R2LTarget() {
    // Local variables
    int i; // r25
    int i; // r25

    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
    // -> static char * const R2L_gLevelTable[20];
    // -> static char * const R2L_gHeadTable[20];
    // -> static const char * const R2L_TabIcon0;
    // -> static char * const R2L_gValTable[20];
    // -> static const char * const R2L_Title;
    // -> static const char * const R2L_RelationshipLevel;
    // -> static const char * const R2L_RelationshipValue;
    // -> static const char * const R2L_Description;
    // -> static const char * const R2L_FullName;
    // -> static const char * const R2L_ShowHelp;
    // -> static const char * const R2L_ShadMax;
    // -> static const char * const R2L_Hi;
    // -> static const char * const R2L_ShadToItem;
    // -> static const char * const R2L_TotInv;
    // -> static const char * const R2L_exists;
    // -> struct [anonymous] __vt__9R2LTarget;
}

// Range: 0x801C015C -> 0x801C0290
// this: r29
R2LTarget::~R2LTarget() {
    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
    // -> struct [anonymous] __vt__9R2LTarget;
}

// Range: 0x801C02F8 -> 0x801C065C
// this: r30
void R2LTarget::SetVariable(const char * szCommand /* r27 */, const char * szParams /* r28 */) {
    // Local variables
    int item; // r1+0x10
    int grid; // r1+0xC
    int item; // r1+0x8
    class R2LRecord * rec; // r29
    int relationshipLevel; // r28
    class Neighbor * myNeighbor; // r0

    // References
    // -> static const char * const R2L_ShowHelp;
    // -> static const char * const R2L_ShadMax;
    // -> static unsigned int R2L_IconHappyFaceShaders[10];
    // -> static char * const R2L_gLevelTable[20];
    // -> class GameData _gd;
    // -> static char * const R2L_gHeadTable[20];
    // -> static const char * const R2L_ShadToItem;
    // -> static const char * const R2L_Hi;
}

// Range: 0x801C065C -> 0x801C0708
// this: r29
char * R2LTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const R2L_TotInv;
}

// Range: 0x801C0708 -> 0x801C0BD8
// this: r30
unsigned short * R2LTarget::GetLocalizable(const char * szVar /* r27 */) {
    // Local variables
    unsigned short * wideStr; // r31
    int grid; // r1+0x3C
    int item; // r3
    unsigned short numStr[32]; // r1+0x50
    class R2LRecord * record; // r28
    class BString2 fullName; // r1+0x38
    unsigned short numStr[8]; // r1+0x40
    class R2LRecord * rec; // r3
    unsigned short * outString; // r28

    // References
    // -> static const char * const R2L_Title;
    // -> static const char * const R2L_RelationshipLevel;
    // -> static const char * const R2L_RelationshipValue;
    // -> static const char * const R2L_Description;
    // -> class EGlobal _globals;
    // -> static const char * const R2L_FullName;
}

// Range: 0x801C0BD8 -> 0x801C0D7C
int sort_records_by_name(void * recordAsVoid1 /* r27 */, void * recordAsVoid2 /* r28 */) {
    // Local variables
    int result; // r3
    const class R2LRecord * const record1; // r0
    const class R2LRecord * const record2; // r0
    unsigned char r1InFamily; // r0
    unsigned char r2InFamily; // r0
    unsigned char r1OnLot; // r29
    unsigned char r2OnLot; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801C0D7C -> 0x801C0DFC
// this: r31
void R2LTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801C0DFC -> 0x801C0E00
void R2LTarget::SpawnSummaryDialog() {}

// Range: 0x801C0E00 -> 0x801C107C
// this: r26
void R2LTarget::SetupRelationships() {
    // Local variables
    class cXPerson * pPerson; // r27
    class vector relList; // r1+0x10
    class Neighborhood & hood; // r28
    class Neighbor * pSelf; // r28
    int i; // r27
    class Neighbor * pNeighbor; // r27

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801C107C -> 0x801C133C
// this: r30
void R2LTarget::ChangeSelection(int newSelection /* r28 */) {
    // Local variables
    const struct RelationshipTable * pRelTab; // r31
    class R2LRecord * rec; // r29
    class Neighbor * myNeighbor; // r0
    unsigned char bShaderInstalled; // r31
    class ERShader * pShader; // r1+0x8

    // References
    // -> static unsigned int R2L_IconHappyFaceShaders[10];
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> static const char * const R2L_Person2D;
    // -> static const char * const R2L_RelationshipLevelIcon;
}

// Range: 0x801C133C -> 0x801C1340
void R2LTarget::onHelpDialogSelection() {}

// Range: 0x801C1340 -> 0x801C1370
void R2LTarget::SetTabState() {
    // References
    // -> static const char * const R2L_TabIcon0;
}


