/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\rsptarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DB330 -> 0x801DC1E0
*/
// Range: 0x801DB330 -> 0x801DB5A8
// this: r28
RSPTarget::RSPTarget() {
    // Local variables
    int i; // r29

    // References
    // -> class EGlobal _globals;
    // -> static char * const RSP_headShaderNames[8];
    // -> static const char * const RSP_pu7;
    // -> static const char * const RSP_pu6;
    // -> static const char * const RSP_pu5;
    // -> static const char * const RSP_pu4;
    // -> static const char * const RSP_pu3;
    // -> static const char * const RSP_pu2;
    // -> static const char * const RSP_pu1;
    // -> static const char * const RSP_pu0;
    // -> static const char * const RSP_rel7;
    // -> static const char * const RSP_rel6;
    // -> static const char * const RSP_rel5;
    // -> static const char * const RSP_rel4;
    // -> static const char * const RSP_rel3;
    // -> static const char * const RSP_rel2;
    // -> static const char * const RSP_rel1;
    // -> static const char * const RSP_rel0;
    // -> static const char * const RSP_hilite;
    // -> static const char * const RSP_exists;
    // -> struct [anonymous] __vt__9RSPTarget;
}

// Range: 0x801DB5A8 -> 0x801DB650
// this: r30
RSPTarget::~RSPTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9RSPTarget;
}

// Range: 0x801DB6B8 -> 0x801DB768
// this: r29
char * RSPTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const RSP_exists;
    // -> static const char * const RSP_hilite;
}

// Range: 0x801DB768 -> 0x801DB93C
// this: r28
unsigned short * RSPTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    int num; // r1+0xC
    char numStr[8]; // r1+0x10
    int num; // r1+0x8
    class RSPRecord * rec; // r31
    unsigned short * outString; // r31
}

// Range: 0x801DB93C -> 0x801DBAA4
// this: r31
void RSPTarget::Update() {
    // Local variables
    char pStr[8]; // r1+0x8

    // References
    // -> float _dt;
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801DBAA4 -> 0x801DBBD4
// this: r30
void RSPTarget::UpdateRelationshipSidePanel() {
    // Local variables
    char pStr[8]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
}

// Range: 0x801DBBD4 -> 0x801DBBEC
void RSPTarget::ShowRelationshipSidePanel() {}

// Range: 0x801DBBEC -> 0x801DBC04
// this: r4
unsigned char RSPTarget::HideRelationshipSidePanel() {
    // Local variables
    unsigned char ret; // r0
}

// Range: 0x801DBC04 -> 0x801DBC0C
unsigned char RSPTarget::IsRelationshipSidePanelActive() {}

// Range: 0x801DBC0C -> 0x801DBC18
void RSPTarget::SetTextButtonPressed() {}

// Range: 0x801DBC18 -> 0x801DBDDC
int sort_records_by_distance(void * recordAsVoid1 /* r27 */, void * recordAsVoid2 /* r28 */) {
    // Local variables
    int result; // r3
    const class RSPRecord * const record1; // r0
    const class RSPRecord * const record2; // r0
    unsigned char r1InFamily; // r0
    unsigned char r2InFamily; // r0
    unsigned char r1OnLot; // r29
    unsigned char r2OnLot; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DBDDC -> 0x801DBDFC
int sort_records_by_relationship() {}

// Range: 0x801DBDFC -> 0x801DC1D4
// this: r24
void RSPTarget::RefreshRelationships() {
    // Local variables
    int i; // r27
    class cXPerson * pPerson; // r28
    class cXPerson * interactionPerson; // r27
    class vector relList; // r1+0x10
    class Neighborhood & hood; // r25
    class Neighbor * pSelf; // r26
    int i; // r25
    class Neighbor * pNeighbor; // r0
    class Neighbor * pNeighbor; // r25
    class cXPerson * pPerson2; // r23
    class RSPRecord * rec; // r23
    class ERShader * pShader; // r1+0xC

    // References
    // -> class EGlobal _globals;
    // -> static char * const RSP_headShaderNames[8];
}

// Range: 0x801DC1D4 -> 0x801DC1E0
void RSPTarget::RelationshipChangeOccured() {}


