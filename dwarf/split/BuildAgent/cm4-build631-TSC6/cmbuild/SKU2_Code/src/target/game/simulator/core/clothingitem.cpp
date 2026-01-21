/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\clothingitem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E550 -> 0x8011EC50
*/
// Range: 0x8011E550 -> 0x8011E638
// this: r28
ClothingItem::ClothingItem(signed short nID /* r29 */, unsigned char bMale /* r31 */) {
    // Local variables
    const struct ClothingItems * pClothingItemLookup; // r0
    const struct BodyPartGeometryTSC6 * pBodyPartData; // r0

    // References
    // -> struct [anonymous] __vt__12ClothingItem;
}

// Range: 0x8011E638 -> 0x8011E72C
// this: r29
void ClothingItem::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed char tempInt8; // r1+0x8
}

// Range: 0x8011E72C -> 0x8011E7C8
// this: r30
void ClothingItem::CopyFromSimBodyPart(class SimBodyPart * pSimBodyPart /* r31 */) {}

// Range: 0x8011E7C8 -> 0x8011E7DC
// this: r5
struct BodyPartGeometryTSC6 * ClothingItem::GetClothingSetData() const {}

// Range: 0x8011E7DC -> 0x8011E83C
// this: r30
struct BodyPartTypeInfoTSC6 * ClothingItem::GetBodyPartTypeInfo() const {
    // Local variables
    const struct BodyPartTypeInfoTableTSC6 * pBodyPartTypeInfoTable; // r31
    unsigned char bodyPartIndex; // r0
}

// Range: 0x8011E83C -> 0x8011E858
struct ClothingItems * ClothingItem::GetClothingItemLookup() {}

// Range: 0x8011E858 -> 0x8011E88C
struct CatalogToken * ClothingItem::GetCatalogToken() {
    // Local variables
    const struct ClothingItems * pClothingItemLookup; // r0
}

// Range: 0x8011E88C -> 0x8011E910
// this: r31
unsigned char ClothingItem::IsDyable() {
    // Local variables
    const struct BodyPartTypeInfoTSC6 * pBodyPartTypeInfo; // r0
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
}

// Range: 0x8011E910 -> 0x8011E9C0
// this: r29
unsigned int ClothingItem::GetSmallIconID() {
    // Local variables
    unsigned int nIconTextureID; // r31
    class SimBodyPart * pBodyPart; // r30
    const struct CatalogToken * pCatalogToken; // r0
}

// Range: 0x8011E9C0 -> 0x8011EB84
// this: r27
void ClothingItem::RepairToFull() {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class Neighbor * pNeighbor; // r0
    class cXPerson * pPerson; // r31
    class CasSimDescription * pSimDesc; // r30
    unsigned char bChanged; // r29
    unsigned char bNeedToUpdateSimModel; // r28
    class BitFlags nDegRepResult; // r1+0xC
    class ESim * pESim; // r0
    class SimBodyPart * pSimBodyPart; // r28
    unsigned char bChanged; // r29
    class BitFlags nDegRepResult; // r1+0x8
}

// Range: 0x8011EB84 -> 0x8011EC50
signed short ClothingItem::FindClothingItemID(const char * szBodyPartName /* r25 */, const char * szClothingSetName /* r26 */) {
    // Local variables
    const struct ERQTable * pClothingItemsTable; // r1+0x8
    unsigned long i; // r27
}


