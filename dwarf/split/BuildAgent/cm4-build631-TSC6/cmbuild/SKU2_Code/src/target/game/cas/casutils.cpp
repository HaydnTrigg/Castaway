/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\casutils.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80031AF4 -> 0x80032608
*/
// Range: 0x80031AF4 -> 0x80031B74
struct BodyPartTypeInfoTableTSC6 * CasUtils::GetBodyPartTypeInfoTable() {
    // Local variables
    class ERQuickdata * pCASQuickdata; // r3
    const struct ERQTable * pBodyPartTypeInfoTable; // r1+0x8

    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EGlobal _globals;
}

// Range: 0x80031B74 -> 0x80031C18
struct SimPartsTSC6 * CasUtils::GetBodyData(unsigned char bMale /* r30 */) {
    // Local variables
    class ERQuickdata * pCASQuickdata; // r31
    const struct ERQTable * pSimPartsTableTemp; // r1+0xC
    const struct SimPartsTSC6 * pBodyData; // r1+0x8

    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EGlobal _globals;
}

// Range: 0x80031C18 -> 0x80031CB8
struct BodyPartGeometryTSC6 * CasUtils::GetClothingSetData(unsigned char bMale /* r29 */, unsigned char nClothingSetIndex /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
    const struct SimPartsTSC6 * pBodyData; // r0
}

// Range: 0x80031CB8 -> 0x80031D50
struct CostumesTSC6 * CasUtils::GetCostumeData(const char * szCostumeName /* r30 */) {
    // Local variables
    class ERQuickdata * pCASQuickdata; // r31
    const struct ERQTable * pCostumesTable; // r1+0xC
    const struct CostumesTSC6 * pCostumeData; // r1+0x8

    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EGlobal _globals;
}

// Range: 0x80031D50 -> 0x80031DAC
unsigned char CasUtils::GetBodyPartIndex() {
    // Local variables
    enum eBodyPart equivalentBodyPart; // r0
}

// Range: 0x80031DAC -> 0x80031E24
unsigned char CasUtils::GetBodyPartDBIndex() {
    // Local variables
    enum eBodyPart equivalentBodyPart; // r3
}

// Range: 0x80031E24 -> 0x80031F1C
enum eBodyPart CasUtils::GetS2CEquivalentBodyPart() {}

// Range: 0x80031F1C -> 0x80031F7C
char * CasUtils::GetBodyPartName(enum eBodyPart bodyPart /* r30 */) {
    // Local variables
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r31
}

// Range: 0x80031F7C -> 0x80032014
enum eBodyPart CasUtils::GetBodyPartByName(const char * szBodyPartName /* r29 */) {
    // Local variables
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r31
    int i; // r30
    const struct BodyPartTypeInfoTSC6 * pBodyPartTypeInfo; // r0
}

// Range: 0x80032014 -> 0x800320DC
unsigned char CasUtils::GetClothingSetIndexByName(unsigned char bMale /* r30 */, const char * szClothingSetName /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
    const struct SimPartsTSC6 * pBodyData; // r0
    int i; // r30
}

// Range: 0x800320DC -> 0x8003212C
unsigned char CasUtils::GetNumTattooTextures(enum eTattooLocation tattooLocation /* r31 */) {
    // Local variables
    const struct SimPartsTSC6 * pBodyData; // r0
}

// Range: 0x8003212C -> 0x80032230
class EString CasUtils::GetTattooIconTextureName(class EString * strTattooIconName /* r26 */, unsigned char bMale /* r30 */, enum eTattooLocation tattooLocation /* r27 */, unsigned char nIndex /* r28 */) {
    // Local variables
    const struct SimPartsTSC6 * pBodyData; // r0
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r31
}

// Range: 0x80032230 -> 0x80032274
unsigned int CasUtils::GetNoneIconTextureID() {
    // Local variables
    char szName[128]; // r1+0x8
}

// Range: 0x80032274 -> 0x800322EC
unsigned char CasUtils::UseArchetype() {
    // Local variables
    unsigned char bUsingArchetype; // r31
    int nCASMode; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x800322EC -> 0x8003233C
signed short CasUtils::GetCASNeighborID() {
    // Local variables
    int nNeighborID; // r3

    // References
    // -> class GameData _gd;
}

// Range: 0x8003233C -> 0x80032390
class InventoryItems * CasUtils::GetCASInventory() {
    // Local variables
    class InventoryItems * pInventory; // r3
    unsigned char bUsingArchetype; // r0
    signed short nNeighborID; // r0
}

// Range: 0x80032390 -> 0x80032414
unsigned char CasUtils::CalculateClothingSetIndexInfoFlags(enum eBodyPart bodyPart /* r0 */) {
    // Local variables
    unsigned char nFlags; // r31
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
}

// Range: 0x80032414 -> 0x800324E4
class EString CasUtils::GetArchetypeCostumeName(class EString * strName /* r30 */, enum eArchetype archetype /* r31 */) {}

// Range: 0x800324E4 -> 0x8003252C
unsigned int CasUtils::GetGameStateTextureID() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8003252C -> 0x80032608
unsigned int CasUtils::GetGameStateTextureID(const char * szBaseName /* r31 */) {
    // Local variables
    class EString strName; // r1+0xC
    class EString strName; // r1+0x8

    // References
    // -> class EGlobal _globals;
}


