/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simbodypart.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004337C -> 0x80048BD0
*/
// Range: 0x8004337C -> 0x80043404
// this: r30
SimBodyPart::SimBodyPart() {
    // References
    // -> struct [anonymous] __vt__11SimBodyPart;
}

// Range: 0x80043404 -> 0x8004346C
// this: r30
SimBodyPart::~SimBodyPart() {}

// Range: 0x8004346C -> 0x8004355C
// this: r30
void SimBodyPart::Init() {}

// Range: 0x8004355C -> 0x80043634
// this: r29
void SimBodyPart::Init(unsigned char bMale /* r30 */) {}

// Range: 0x80043634 -> 0x80043714
// this: r30
void SimBodyPart::DoStream(class ReconBuffer * r /* r31 */) {}

// Range: 0x80043714 -> 0x800437B0
// this: r30
void SimBodyPart::CopyFrom(const class SimBodyPart * pBodyPart /* r31 */) {}

// Range: 0x800437B0 -> 0x800438B8
// this: r30
void SimBodyPart::CopyFromClothingItem(class ClothingItem * pClothingItem /* r31 */) {}

// Range: 0x800438B8 -> 0x80043AD8
class SimBodyPart * SimBodyPart::CreateInstance(unsigned char bMale /* r30 */) {
    // Local variables
    class SimBodyPart * pBodyPart; // r31
}

// Range: 0x80043AD8 -> 0x80043AF4
unsigned char SimBodyPart::GetCharacterFlag() {}

// Range: 0x80043AF4 -> 0x80043B10
void SimBodyPart::SetCharacterFlag() {}

// Range: 0x80043B10 -> 0x80043BB4
// this: r30
char * SimBodyPart::GetCharacterType() const {
    // Local variables
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r0
}

// Range: 0x80043BB4 -> 0x80043BC8
void SimBodyPart::AssertWithInfo() {}

// Range: 0x80043BC8 -> 0x80043D00
// this: r28
unsigned char SimBodyPart::IsValid(unsigned char bAutoFix /* r29 */, unsigned char bThrowBombs /* r30 */) {}

// Range: 0x80043D00 -> 0x80043E08
// this: r29
unsigned char SimBodyPart::IsValidClothingSetIndex(unsigned char bAutoFix /* r30 */, unsigned char bThrowBombs /* r31 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80043E08 -> 0x80043F48
// this: r29
unsigned char SimBodyPart::IsValidModelIndex(unsigned char bAutoFix /* r30 */, unsigned char bThrowBombs /* r31 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80043F48 -> 0x80044024
// this: r28
unsigned char SimBodyPart::IsValidModelCodeIndex(unsigned char bAutoFix /* r29 */, unsigned char bThrowBombs /* r30 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80044024 -> 0x80044124
// this: r28
unsigned char SimBodyPart::IsValidStyleIndex(unsigned char bAutoFix /* r29 */, unsigned char bThrowBombs /* r30 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80044124 -> 0x80044224
// this: r29
unsigned char SimBodyPart::IsValidTextureIndex(unsigned char bAutoFix /* r30 */, unsigned char bThrowBombs /* r31 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80044224 -> 0x80044344
// this: r28
unsigned char SimBodyPart::IsValidDegradationState(unsigned char bAutoFix /* r29 */, unsigned char bThrowBombs /* r30 */) {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80044344 -> 0x8004435C
void SimBodyPart::Validate() {}

// Range: 0x8004435C -> 0x800443F0
// this: r30
void SimBodyPart::SetClothingSetIndex(unsigned char nClothingSetIndex /* r31 */) {}

// Range: 0x800443F0 -> 0x800443F8
struct BodyPartGeometryTSC6 * SimBodyPart::GetClothingSetData() {}

// Range: 0x800443F8 -> 0x80044400
struct BodyPartTypeInfoTSC6 * SimBodyPart::GetBodyPartTypeInfo() {}

// Range: 0x80044400 -> 0x80044458
// this: r31
unsigned char SimBodyPart::GetNumPossibleClothingSets() const {}

// Range: 0x80044458 -> 0x80044484
unsigned char SimBodyPart::GetNumPossibleModelCodes() {}

// Range: 0x80044484 -> 0x800444B8
unsigned char SimBodyPart::GetNumPossibleStyles() {}

// Range: 0x800444B8 -> 0x80044580
// this: r26
unsigned char SimBodyPart::GetNumValidStyles(unsigned char nModelCodeIndex /* r27 */) const {
    // Local variables
    unsigned char nNumPossibleStyles; // r0
    unsigned char nNumValidStyles; // r29
    int i; // r28
    unsigned char nModelIndex; // r0
}

// Range: 0x80044580 -> 0x800445E4
// this: r30
unsigned char SimBodyPart::GetNumPossibleModels() const {}

// Range: 0x800445E4 -> 0x80044610
unsigned char SimBodyPart::GetNumPossibleTextureVariations() {}

// Range: 0x80044610 -> 0x80044668
// this: r31
unsigned char SimBodyPart::GetNumPossibleDegradationStates() const {}

// Range: 0x80044668 -> 0x80044758
// this: r31
unsigned char SimBodyPart::IsGeneric() const {}

// Range: 0x80044758 -> 0x800447F0
// this: r28
void SimBodyPart::CalculateNameBase(char * szBuffer /* r29 */) const {}

// Range: 0x800447F0 -> 0x80044848
void SimBodyPart::CalculateNameStyle(char * szBuffer /* r31 */) {
    // Local variables
    const char * szStyleCode; // r5
}

// Range: 0x80044848 -> 0x800448D4
void SimBodyPart::CalculateNameTextureVariation(char * szBuffer /* r30 */) {
    // Local variables
    const char * szTextureVariation; // r31
}

// Range: 0x800448D4 -> 0x800448F0
// this: r5
void SimBodyPart::CalculateNameDegradationState() const {}

// Range: 0x800448F0 -> 0x80044900
void SimBodyPart::CalculateNameLowRes() {}

// Range: 0x80044900 -> 0x80044964
// this: r30
char * SimBodyPart::GetModelCode() const {}

// Range: 0x80044964 -> 0x800449F8
// this: r30
char * SimBodyPart::GetStyleCode() const {}

// Range: 0x800449F8 -> 0x80044A68
// this: r31
char * SimBodyPart::GetClothingSetName() const {}

// Range: 0x80044A68 -> 0x80044AE0
// this: r30
char * SimBodyPart::GetTextureVariationName() const {}

// Range: 0x80044AE0 -> 0x80044B60
// this: r29
class EString SimBodyPart::GetModelName(const class SimBodyPart * const this /* r30 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x8
}

// Range: 0x80044B60 -> 0x80044CB8
// this: r29
class EString SimBodyPart::GetTextureName(unsigned char bLowRes /* r30 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x10
    class EString strName; // r1+0x8
}

// Range: 0x80044CB8 -> 0x80044E10
// this: r29
class EString SimBodyPart::GetReflectionMaskName(unsigned char bLowRes /* r30 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x10
    class EString strName; // r1+0x8
}

// Range: 0x80044E10 -> 0x80044ED8
// this: r29
class EString SimBodyPart::GetIconTextureName(const class SimBodyPart * const this /* r30 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x8
}

// Range: 0x80044ED8 -> 0x80044F58
// this: r30
unsigned int SimBodyPart::GetModelID() const {}

// Range: 0x80044F58 -> 0x80044FEC
// this: r30
unsigned int SimBodyPart::GetTextureID(unsigned char bLowRes /* r31 */) const {
    // Local variables
    class EString strTextureName; // r1+0x8
}

// Range: 0x80044FEC -> 0x80045080
// this: r30
unsigned int SimBodyPart::GetReflectionMaskID(unsigned char bLowRes /* r31 */) const {
    // Local variables
    class EString strReflectionMaskName; // r1+0x8
}

// Range: 0x80045080 -> 0x800450E0
unsigned int SimBodyPart::GetIconTextureID() {
    // Local variables
    class EString strIconTextureName; // r1+0x8
}

// Range: 0x800450E0 -> 0x800451D4
// this: r29
unsigned char SimBodyPart::GetDefaultClothingSetIndex(unsigned char bMale /* r30 */) const {
    // Local variables
    const struct CostumesTSC6 * pCostumeData; // r0
    unsigned char nClothingSetIndex; // r0
}

// Range: 0x800451D4 -> 0x8004523C
// this: r31
void SimBodyPart::SetToDefault() {}

// Range: 0x8004523C -> 0x80045270
unsigned char SimBodyPart::GetNudeClothingSetIndex() {}

// Range: 0x80045270 -> 0x800452D8
// this: r31
void SimBodyPart::SetToNude() {}

// Range: 0x800452D8 -> 0x800454CC
// this: r31
void SimBodyPart::SetToRandom(int nChanceForBodyPart /* r27 */) {
    // Local variables
    int nRandom; // r0
    class vector clothingSetlist; // r1+0x10
    int nNumClothingSets; // r0
    unsigned char nNudeClothingIndex; // r0
    unsigned char bDone; // r27
    int nNumPossibleTextureVariations; // r30
}

// Range: 0x800454CC -> 0x800454D4
unsigned char SimBodyPart::CalculateModelCodeIndexFromStyleIndex() {}

// Range: 0x800454D4 -> 0x800454DC
unsigned char SimBodyPart::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x800454DC -> 0x800454E4
unsigned char SimBodyPart::CalculateModelCodeIndexFromModelIndex() {}

// Range: 0x800454E4 -> 0x800454EC
unsigned char SimBodyPart::CalculateStyleIndexFromModelIndex() {}

// Range: 0x800454EC -> 0x8004560C
// this: r30
void SimBodyPart::SwitchToFirstAvailableDegradationStage() {
    // Local variables
    unsigned char i; // r31
}

// Range: 0x8004560C -> 0x800457E4
// this: r31
void SimBodyPart::SwitchToFirstAvailableStyle() {
    // Local variables
    unsigned char i; // r30
}

// Range: 0x800457E4 -> 0x800459F8
// this: r31
void SimBodyPart::AdjustToLegalStyle() {
    // Local variables
    unsigned char bFoundLegalSyle; // r30
    unsigned char i; // r29
}

// Range: 0x800459F8 -> 0x80045A78
// this: r30
unsigned char SimBodyPart::GetArmorValue(enum eDamageType armorType /* r31 */) {}

// Range: 0x80045A78 -> 0x80045AD0
// this: r31
unsigned int SimBodyPart::GetHitPointsPerDegradationState() {}

// Range: 0x80045AD0 -> 0x80045AE8
unsigned char SimBodyPart::GetIsDamaged() {}

// Range: 0x80045AE8 -> 0x80045AFC
void SimBodyPart::SetIsDamaged() {}

// Range: 0x80045AFC -> 0x80045B14
int SimBodyPart::GetCurrentHitPoints() {}

// Range: 0x80045B14 -> 0x80045B28
void SimBodyPart::SetCurrentHitPoints() {}

// Range: 0x80045B28 -> 0x80045DB4
// this: r30
class BitFlags SimBodyPart::Degrade(class SimBodyPart * const this /* r31 */) {
    // Local variables
    const struct BodyPartStyleInfoTSC6 * pBodyPartStyleInfoCurrent; // r0
    unsigned char nOriginalModelIndex; // r27
    const struct BodyPartStyleInfoTSC6 * pBodyPartStyleInfoNext; // r0
}

// Range: 0x80045DB4 -> 0x80045F50
// this: r29
class BitFlags SimBodyPart::Repair(class SimBodyPart * const this /* r30 */) {
    // Local variables
    const struct BodyPartStyleInfoTSC6 * pBodyPartStyleInfoCurrent; // r0
}

// Range: 0x80045F50 -> 0x8004615C
// this: r30
class BitFlags SimBodyPart::ApplyDamage(class SimBodyPart * const this /* r31 */, const struct DamageEvent & damage /* r25 */, signed short nArmorMultiplier /* r26 */) {
    // Local variables
    signed short nDamageTaken; // r28
    int i; // r27
    signed short nArmor; // r3
    signed short nDamageTemp; // r0
    signed short nMaxHitPoints; // r27
    class BitFlags nTempDegRepResult; // r1+0x8
}

// Range: 0x8004615C -> 0x80046340
// this: r23
class ETexture * SimBodyPart::CreateIcon(class SimModelTSC6 * pSimModel /* r24 */, class EVec3 * pCameraPos /* r31 */, class EVec3 * pCameraTarget /* r30 */, float fCameraFOV /* f31 */, unsigned int nBackgroundImageID /* r25 */, int nIconWidth /* r26 */, int nIconHeight /* r27 */, int nIconDepth /* r28 */, unsigned char bUseShadowMap /* r29 */) {
    // Local variables
    class EVec3 cameraPos; // r1+0x2C
    class EVec3 cameraTarget; // r1+0x20
    unsigned int nAnimID; // r31
    enum eSpecies species; // r30
    class SimImageMaker simImageMaker; // r1+0x38
    class ETexture * pImage; // r30

    // References
    // -> class EVec3 kDefaultCameraUp;
}

// Range: 0x80046340 -> 0x800464D4
// this: r28
void SimBodyPart::GetRequiredDyesForTextureVariation(unsigned char nTextureIndex /* r29 */, signed short * nDyesRequired /* r30 */) {
    // Local variables
    signed short color; // r0
    const char * pTextureNamePtr; // r6
}

// Range: 0x800464D4 -> 0x80046864
// this: r28
unsigned int SimBodyPart::GetValidClothingSetIndexes(class vector & l /* r29 */) {
    // Local variables
    unsigned int numParts; // r31
    unsigned char bIsMale; // r24
    unsigned char bUseArchetype; // r0
    class SimBodyPart * pBodyPart; // r30
    unsigned char numOptions; // r0
    unsigned char nNudeIndex; // r0
    struct ClothingSetIndexInfo info; // r1+0x20
    unsigned char i; // r21
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    struct ClothingSetIndexInfo info; // r1+0x18
    signed short nNeighborID; // r0
    class InventoryItems * pInventory; // r21
    class vector clothingItemList; // r1+0x28
    class ClothingItem * * iter; // r21
    class ClothingItem * pClothingItem; // r22
    struct ClothingSetIndexInfo info; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80046864 -> 0x80046ADC
// this: r31
unsigned char SimBodyPart::GetClothingSetUIIndex() const {
    // Local variables
    unsigned char bIsMale; // r29
    unsigned char bUseArchetype; // r0
    unsigned char numOptions; // r0
    unsigned char nNudeIndex; // r0
    int nUIIndex; // r26
    unsigned char i; // r25
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    signed short nNeighborID; // r0
    class InventoryItems * pInventory; // r25
    class vector clothingItemList; // r1+0x10
    class ClothingItem * * iter; // r25
    int nUIIndex; // r26
    signed short nClothingInstanceID; // r27
    class ClothingItem * pClothingItem; // r27

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80046ADC -> 0x80046BA4
// this: r31
void SimBodyPartHead::Validate() {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x80046BA4 -> 0x80046C0C
unsigned char SimBodyPartHead::CalculateModelIndexFromModelCodeIndexAndStyleIndex(unsigned char nModelCodeIndex /* r30 */, unsigned char nStyleIndex /* r31 */) {}

// Range: 0x80046C0C -> 0x80046C6C
unsigned char SimBodyPartHead::CalculateModelCodeIndexFromModelIndex(unsigned char nModelIndex /* r31 */) {}

// Range: 0x80046C6C -> 0x80046CD0
unsigned char SimBodyPartHead::CalculateStyleIndexFromModelIndex(unsigned char nModelIndex /* r31 */) {}

// Range: 0x80046CD0 -> 0x80046DE0
// this: r29
void SimBodyPartFacialFeature::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {}

// Range: 0x80046DE0 -> 0x80046EA8
// this: r30
void SimBodyPartFacialFeature::CopyFrom(const class SimBodyPart * pBodyPart /* r31 */) {
    // Local variables
    const class SimBodyPartFacialFeature * pBodyPartFacialFeature; // r0
}

// Range: 0x80046EA8 -> 0x80046FE0
// this: r29
class EString SimBodyPartFacialFeature::GetTextureName(unsigned char bLowRes /* r30 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x10
    class EString strName; // r1+0x8
}

// Range: 0x80046FE0 -> 0x80046FE8
unsigned char SimBodyPartFacialFeature::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x80046FE8 -> 0x80046FF0
unsigned char SimBodyPartFacialFeature::CalculateStyleIndexFromModelIndex() {}

// Range: 0x80046FF0 -> 0x80047030
// this: r31
void SimBodyPartFacialFeature::SwitchToFirstAvailableDegradationStage() {}

// Range: 0x80047030 -> 0x800470D0
// this: r30
unsigned char SimBodyPartFacialFeature::GetArmorValue(enum eDamageType armorType /* r31 */) {}

// Range: 0x800470D0 -> 0x80047370
// this: r24
unsigned int SimBodyPartFacialFeature::GetValidClothingSetIndexes(class vector & l /* r25 */) {
    // Local variables
    unsigned int numParts; // r29
    unsigned char bIsMale; // r20
    unsigned char bUseArchetype; // r0
    class SimBodyPart * pBodyPart; // r28
    unsigned char numOptions; // r0
    unsigned char nNudeIndex; // r0
    struct ClothingSetIndexInfo info; // r1+0x10
    signed short nCurrentCreativitySkill; // r27
    int nNeighborID; // r22
    class Neighbor * pNeighbor; // r0
    unsigned char i; // r26
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char nRequiredHairBeardLength; // r3
    struct ClothingSetIndexInfo info; // r1+0x8
}

// Range: 0x80047370 -> 0x80047564
// this: r26
unsigned char SimBodyPartFacialFeature::GetClothingSetUIIndex() const {
    // Local variables
    unsigned char bIsMale; // r23
    unsigned char bUseArchetype; // r0
    class SimBodyPart * pBodyPart; // r30
    unsigned char numOptions; // r0
    unsigned char nNudeIndex; // r0
    signed short nCurrentCreativitySkill; // r29
    int nNeighborID; // r24
    class Neighbor * pNeighbor; // r0
    int nUIIndex; // r28
    unsigned char i; // r27
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char nRequiredHairBeardLength; // r3
}

// Range: 0x80047564 -> 0x80047674
// this: r29
void SimBodyPartHair::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {}

// Range: 0x80047674 -> 0x8004773C
// this: r30
void SimBodyPartHair::CopyFrom(const class SimBodyPart * pBodyPart /* r31 */) {
    // Local variables
    const class SimBodyPartHair * pSimBodyPartHair; // r0
}

// Range: 0x8004773C -> 0x800477FC
// this: r31
void SimBodyPartHair::Validate() {
    // Local variables
    char szErr[512]; // r1+0x8
}

// Range: 0x800477FC -> 0x80047928
// this: r27
class EString SimBodyPartHair::GetTextureName(const class SimBodyPartHair * const this /* r28 */, unsigned char bLowRes /* r29 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x8
}

// Range: 0x80047928 -> 0x80047AB0
// this: r28
class EString SimBodyPartHair::GetReflectionMaskName(unsigned char bLowRes /* r29 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x10
    class EString strName; // r1+0x8
}

// Range: 0x80047AB0 -> 0x80047BC0
// this: r28
class EString SimBodyPartHair::GetIconTextureName(const class SimBodyPartHair * const this /* r29 */) const {
    // Local variables
    char szBuffer[256]; // r1+0x8
}

// Range: 0x80047BC0 -> 0x80047C38
// this: r30
char * SimBodyPartHair::GetModelCode() const {
    // Local variables
    unsigned char nModelCodeIndex; // r31
}

// Range: 0x80047C38 -> 0x80047C68
char * SimBodyPartHair::GetModelCodeForTexture() {}

// Range: 0x80047C68 -> 0x80047D1C
// this: r30
unsigned int SimBodyPartHair::GetModelID() const {
    // Local variables
    unsigned char nModelIndex; // r31
}

// Range: 0x80047D1C -> 0x80047D6C
unsigned char SimBodyPartHair::CalculateModelIndexFromModelCodeIndexAndStyleIndex(unsigned char nModelCodeIndex /* r30 */, unsigned char nStyleIndex /* r31 */) {}

// Range: 0x80047D6C -> 0x80047DB4
unsigned char SimBodyPartHair::CalculateModelCodeIndexFromModelIndex(unsigned char nModelIndex /* r31 */) {
    // Local variables
    unsigned char nNumStyles; // r0
}

// Range: 0x80047DB4 -> 0x80047E04
unsigned char SimBodyPartHair::CalculateStyleIndexFromModelIndex(unsigned char nModelIndex /* r31 */) {}

// Range: 0x80047E04 -> 0x80047E44
// this: r31
void SimBodyPartHair::SwitchToFirstAvailableDegradationStage() {}

// Range: 0x80047E44 -> 0x80047F10
// this: r29
void SimBodyPartHair::UpdateRelatedData() {
    // Local variables
    class SimBodyPart * pSimBodyPart; // r30
}

// Range: 0x80047F10 -> 0x80047FB0
// this: r30
unsigned char SimBodyPartHair::GetArmorValue(enum eDamageType armorType /* r31 */) {}

// Range: 0x80047FB0 -> 0x800481B8
// this: r25
unsigned int SimBodyPartHair::GetValidClothingSetIndexes(class vector & l /* r26 */) {
    // Local variables
    unsigned int numParts; // r30
    unsigned char bIsMale; // r21
    unsigned char bUseArchetype; // r0
    class SimBodyPart * pBodyPart; // r29
    unsigned char numOptions; // r0
    signed short nCurrentCreativitySkill; // r28
    int nNeighborID; // r22
    class Neighbor * pNeighbor; // r0
    unsigned char i; // r27
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char nRequiredHairBeardLength; // r3
    struct ClothingSetIndexInfo info; // r1+0x8
}

// Range: 0x800481B8 -> 0x80048368
// this: r31
unsigned char SimBodyPartHair::GetClothingSetUIIndex() const {
    // Local variables
    unsigned char bIsMale; // r29
    unsigned char bUseArchetype; // r0
    class SimBodyPart * pBodyPart; // r27
    unsigned char numOptions; // r0
    signed short nCurrentCreativitySkill; // r26
    int nNeighborID; // r30
    class Neighbor * pNeighbor; // r0
    int nUIIndex; // r25
    unsigned char i; // r24
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char nRequiredHairBeardLength; // r3
}

// Range: 0x80048368 -> 0x8004840C
// this: r31
void SimBodyPartTorso::Validate() {
    // Local variables
    unsigned char numStyles; // r0
    char szErr[512]; // r1+0x8
}

// Range: 0x8004840C -> 0x80048414
unsigned char SimBodyPartTorso::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x80048414 -> 0x8004841C
unsigned char SimBodyPartTorso::CalculateStyleIndexFromModelIndex() {}

// Range: 0x8004841C -> 0x8004845C
void SimBodyPartTorso::UpdateRelatedData() {
    // Local variables
    class SimBodyPartSleeves * pBodyPartSleeves; // r0
}

// Range: 0x8004845C -> 0x8004849C
// this: r31
class BitFlags SimBodyPartTorso::Degrade() {}

// Range: 0x8004849C -> 0x800484DC
// this: r31
class BitFlags SimBodyPartTorso::Repair() {}

// Range: 0x800484DC -> 0x800484E4
unsigned char SimBodyPartLowerBody::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x800484E4 -> 0x800484EC
unsigned char SimBodyPartLowerBody::CalculateStyleIndexFromModelIndex() {}

// Range: 0x800484EC -> 0x800484F4
unsigned char SimBodyPartShoes::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x800484F4 -> 0x800484FC
unsigned char SimBodyPartShoes::CalculateStyleIndexFromModelIndex() {}

// Range: 0x800484FC -> 0x800485F8
// this: r31
void SimBodyPartHat::Validate() {
    // Local variables
    char szErr[512]; // r1+0x208
    char szErr[512]; // r1+0x8
}

// Range: 0x800485F8 -> 0x80048600
unsigned char SimBodyPartHat::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x80048600 -> 0x80048608
unsigned char SimBodyPartHat::CalculateStyleIndexFromModelIndex() {}

// Range: 0x80048608 -> 0x8004866C
// this: r31
void SimBodyPartHat::UpdateRelatedData() {}

// Range: 0x8004866C -> 0x80048674
unsigned char SimBodyPartArmAccessory::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x80048674 -> 0x8004867C
unsigned char SimBodyPartArmAccessory::CalculateStyleIndexFromModelIndex() {}

// Range: 0x8004867C -> 0x800487A8
// this: r30
unsigned int SimBodyPartBelt::GetModelID() const {
    // Local variables
    class SimBodyPart * pBodyPartTorso; // r31
}

// Range: 0x800487A8 -> 0x8004899C
// this: r30
void SimBodyPartSleeves::Validate() {
    // Local variables
    class SimBodyPart * pBodyPartTorso; // r29
    char szErr[512]; // r1+0x408
    char szErr[512]; // r1+0x208
    unsigned char numStyles; // r0
    char szErr[512]; // r1+0x8
}

// Range: 0x8004899C -> 0x800489FC
// this: r31
void SimBodyPartSleeves::CalculateModelOffset() {
    // Local variables
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r0
}

// Range: 0x800489FC -> 0x80048A00
void SimBodyPartSleeves::SwitchToFirstAvailableDegradationStage() {}

// Range: 0x80048A00 -> 0x80048B5C
// this: r30
void SimBodyPartSleeves::SwitchToMatchTorsoSettings() {
    // Local variables
    class SimBodyPart * pBodyPartTorso; // r31
}

// Range: 0x80048B5C -> 0x80048B6C
unsigned char SimBodyPartSleeves::CalculateModelIndexFromModelCodeIndexAndStyleIndex() {}

// Range: 0x80048B6C -> 0x80048BD0
// this: r30
unsigned char SimBodyPartSleeves::CalculateStyleIndexFromModelIndex(unsigned char nModelIndex /* r31 */) const {}


