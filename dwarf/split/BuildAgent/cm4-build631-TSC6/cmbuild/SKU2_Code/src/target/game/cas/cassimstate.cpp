/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\cassimstate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003AA08 -> 0x8003B108
*/
// Range: 0x8003AA08 -> 0x8003AA8C
// this: r31
CasSimState::CasSimState() {
    // References
    // -> struct [anonymous] __vt__11CasSimState;
}

// Range: 0x8003AA8C -> 0x8003AB28
// this: r29
CasSimState::CasSimState(const class CasSimDescription & description /* r30 */, int charId /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11CasSimState;
}

// Range: 0x8003AB28 -> 0x8003ABEC
// this: r30
CasSimState::~CasSimState() {
    // References
    // -> struct [anonymous] __vt__11CasSimState;
}

// Range: 0x8003ABEC -> 0x8003AC78
// this: r29
void CasSimState::HandleEventInitCharacter(const class CasEventInitCharacter & event /* r30 */) {
    // Local variables
    class CasSimDescription & simDesc; // r31
}

// Range: 0x8003AC78 -> 0x8003AEB4
// this: r31
void CasSimState::HandleEventResetCharacter(const class CasEventResetCharacter & event /* r25 */) {
    // Local variables
    enum eSpecies prevSpecies; // r0
    enum eSpecies currSpecies; // r0
    unsigned char bMale; // r28
    unsigned short firstName[32]; // r1+0x58
    unsigned short lastName[32]; // r1+0x18
    unsigned char bUseArchetype; // r0
    signed short nNeighborID; // r28
    unsigned char bodyPart; // r27
    class SimBodyPart * pSimBodyPart; // r26
    class SimBodyPart * pOriginalSimBodyPart; // r25
    class ClothingItem * pCurrentClothingItem; // r26
    class ClothingItem * pOriginalClothingItem; // r25
}

// Range: 0x8003AEB4 -> 0x8003AED0
// this: r4
void CasSimState::HandleEventStoreCharacter() {}

// Range: 0x8003AED0 -> 0x8003AF8C
// this: r30
void CasSimState::HandleEventChangeCharacter(const class CasEventChangeCharacter & event /* r31 */) {
    // Local variables
    unsigned char oldIndex; // r1+0x9
    unsigned char newIndex; // r1+0x8
}

// Range: 0x8003AF8C -> 0x8003B100
// this: r29
void CasSimState::HandleEventMorphCharacter(const class CasEventMorphCharacter & event /* r30 */) {
    // Local variables
    enum eMorphTargetRegion morphTargetParamRegion; // r31
}

// Range: 0x8003B100 -> 0x8003B108
class CasSimDescription * CasSimState::GetSimDescription() {}


