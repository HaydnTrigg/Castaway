/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\inventory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011B1F8 -> 0x8011DEA0
*/
// Range: 0x8011B1F8 -> 0x8011B2B8
// this: r31
InventoryItems::InventoryItems() {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0xC
    unsigned int i; // r0
    int maxTokenID; // r6
}

// Range: 0x8011B2B8 -> 0x8011B328
// this: r30
InventoryItems::~InventoryItems() {}

// Range: 0x8011B328 -> 0x8011B3D8
// this: r29
void InventoryItems::Clear() {
    // Local variables
    class InventoryItem * * i; // r30
    class InventoryItem * temp; // r3
}

// Range: 0x8011B3D8 -> 0x8011B428
class InventoryItems * InventoryItems::GetTribeInventory() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8011B428 -> 0x8011B480
class InventoryItems * InventoryItems::GetInitialFamilyInventory() {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class Family * pFamily; // r0
}

// Range: 0x8011B480 -> 0x8011B4F8
class InventoryItems * InventoryItems::GetInventoryByNeighborID(signed short nNeighborID /* r31 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class Neighbor * pNeighbor; // r0
    class Family * pFamily; // r0
}

// Range: 0x8011B4F8 -> 0x8011B5A4
struct InventoryTokens * InventoryItems::GetTokenFromID(signed short tokenID /* r31 */) {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0x8
    unsigned long i; // r7
}

// Range: 0x8011B5A4 -> 0x8011B650
signed short InventoryItems::GetTokenIDFromGUID(int guid /* r31 */) {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0x8
    unsigned long i; // r6
}

// Range: 0x8011B650 -> 0x8011B6F8
struct ClothingItems * InventoryItems::GetClothingItemLookupFromID(signed short nID /* r31 */) {
    // Local variables
    const struct ERQTable * pClothingItemsTable; // r1+0x8
    unsigned long i; // r6
}

// Range: 0x8011B6F8 -> 0x8011B74C
void InventoryItems::SetInstanceID(class InventoryItem * pItem /* r31 */) {
    // References
    // -> signed short s_nNextInstanceID;
}

// Range: 0x8011B74C -> 0x8011B7F0
// this: r28
class InventoryItem * InventoryItems::GetItemByInstanceID(signed short nInstanceID /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * pItem; // r30
}

// Range: 0x8011B7F0 -> 0x8011B92C
// this: r29
unsigned char InventoryItems::AddItem(class InventoryItem * item /* r1+0x8 */) {
    // Local variables
    int index; // r30
}

// Range: 0x8011B92C -> 0x8011BA44
// this: r27
void InventoryItems::AddTokenItem(signed short tokenid /* r28 */, signed short count /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * current; // r30
    class TokenItem * newItem; // r1+0x8
}

// Range: 0x8011BA44 -> 0x8011BB00
// this: r30
unsigned char InventoryItems::AddObjectItem(int guid /* r31 */) {
    // Local variables
    signed short tokenID; // r0
    class ObjectItem * newItem; // r1+0x8
}

// Range: 0x8011BB00 -> 0x8011BBF0
// this: r30
unsigned char InventoryItems::AddObjectItem(class cXObject * obj /* r31 */) {
    // Local variables
    signed short tokenID; // r0
    class ObjectItem * newItem; // r1+0x8
    int guid; // r0
}

// Range: 0x8011BBF0 -> 0x8011BD80
// this: r30
void InventoryItems::CheckForAddGoals(signed short tokenID /* r31 */) {}

// Range: 0x8011BD80 -> 0x8011BE04
// this: r30
unsigned char InventoryItems::AddOwnableItem(int guid /* r31 */) {
    // Local variables
    class OwnableItem * newItem; // r1+0x8
}

// Range: 0x8011BE04 -> 0x8011BEA4
// this: r30
unsigned char InventoryItems::AddOwnableItem(class cXObject * obj /* r31 */) {
    // Local variables
    class OwnableItem * newItem; // r1+0x8
}

// Range: 0x8011BEA4 -> 0x8011BFC0
// this: r28
void InventoryItems::AddClothingItem(signed short id /* r29 */) {
    // Local variables
    const struct ClothingItems * pClothingItemLookup; // r0
    enum eBodyPart bodyPart; // r30
    unsigned char nClothingSetIndex; // r0
    class ClothingItem * newItem; // r1+0xC
    class ClothingItem * newItem; // r1+0x8
    class IGoalUnlock * unlocks; // r0
}

// Range: 0x8011BFC0 -> 0x8011C028
// this: r29
void InventoryItems::LoadItemInfo(int index /* r30 */, class cXObject * obj /* r31 */) {}

// Range: 0x8011C028 -> 0x8011C0C0
// this: r28
int InventoryItems::GetObjectItemIndex(int guid /* r29 */) const {
    // Local variables
    int retval; // r31
    class InventoryItem * const * i; // r30
}

// Range: 0x8011C0C0 -> 0x8011C170
// this: r27
int InventoryItems::GetTokenItemIndex(signed short id /* r28 */) const {
    // Local variables
    int retval; // r31
    class InventoryItem * const * i; // r30
    class InventoryItem * current; // r29
}

// Range: 0x8011C170 -> 0x8011C23C
// this: r28
int InventoryItems::GetTokenItemCount(signed short id /* r29 */) const {
    // Local variables
    class InventoryItem * const * i; // r31
    class InventoryItem * current; // r30
}

// Range: 0x8011C23C -> 0x8011C2A8
// this: r31
int InventoryItems::GetTreasureMapPieceCount() {
    // Local variables
    class IGoalUnlock * unlocks; // r0
}

// Range: 0x8011C2A8 -> 0x8011C314
// this: r31
int InventoryItems::GetHieroglyphPieceCount() {
    // Local variables
    class IGoalUnlock * unlocks; // r0
}

// Range: 0x8011C314 -> 0x8011C37C
signed short InventoryItems::GetDyeTokenID() {}

// Range: 0x8011C37C -> 0x8011C414
// this: r29
void InventoryItems::GetDyesInInventory() {
    // Local variables
    signed short color; // r0
    int color; // r30
}

// Range: 0x8011C414 -> 0x8011C4D0
// this: r24
int InventoryItems::GetOwnableItemIndex(signed short ownerID /* r25 */, int guid /* r26 */) const {
    // Local variables
    int highestPoints; // r31
    int currentIndex; // r30
    int returnIndex; // r29
    class InventoryItem * const * i; // r28
    class InventoryItem * current; // r27
    int ownPoints; // r0
}

// Range: 0x8011C4D0 -> 0x8011C580
// this: r27
int InventoryItems::GetClothingItemIndex(signed short id /* r28 */) const {
    // Local variables
    int retval; // r31
    class InventoryItem * const * i; // r30
    class InventoryItem * current; // r29
}

// Range: 0x8011C580 -> 0x8011C6B8
// this: r29
void InventoryItems::RemoveItem(int index /* r31 */, signed short numToRemove /* r30 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * temp; // r30
}

// Range: 0x8011C6B8 -> 0x8011C700
// this: r31
unsigned char InventoryItems::RemoveObjectItem() {
    // Local variables
    int index; // r4
}

// Range: 0x8011C700 -> 0x8011C74C
// this: r31
unsigned char InventoryItems::RemoveOwnableItem() {
    // Local variables
    int index; // r4
}

// Range: 0x8011C74C -> 0x8011C7E4
// this: r29
unsigned char InventoryItems::RemoveTokenItem(signed short id /* r30 */, signed short numToRemove /* r31 */) {
    // Local variables
    int index; // r4
    class IGoalUnlock * unlocks; // r0
}

// Range: 0x8011C7E4 -> 0x8011C838
// this: r31
unsigned char InventoryItems::RemoveClothingItem() {
    // Local variables
    int index; // r4
}

// Range: 0x8011C838 -> 0x8011C8E4
// this: r27
unsigned char InventoryItems::RemoveItemByInstanceID(signed short nInstanceID /* r28 */, signed short numToRemove /* r29 */) {
    // Local variables
    int nIndex; // r31
    class InventoryItem * * i; // r30
    class InventoryItem * pItem; // r3
}

// Range: 0x8011C8E4 -> 0x8011C8EC
unsigned char InventoryItems::NotifyItemDestroyed() {}

// Range: 0x8011C8EC -> 0x8011CA54
// this: r27
void InventoryItems::MergeInventories(class InventoryItems * toMerge /* r28 */) {
    // Local variables
    class stack removedItems; // r1+0x10
    int oldIndex; // r1+0x8
    class InventoryItem * * item; // r30
    class InventoryItem * cur; // r29
    int index; // r0
    class InventoryItem * * i; // r0
}

// Range: 0x8011CAAC -> 0x8011CD24
// this: r24
void InventoryItems::PlaceAllItemsOnLot() {
    // Local variables
    class cXObject * mailbox; // r30
    signed short j; // r29
    class InventoryItem * * i; // r28
    class InventoryItem * cur; // r31
    class cXObject * obj; // r27
    class FTilePt start; // r1+0x8
    int level; // r26
    class FindGoodLocationParams fglp; // r1+0x10
    signed short origPlacemenFlags; // r0
    unsigned char success; // r25
    signed short objPrice; // r25
}

// Range: 0x8011CD24 -> 0x8011D008
// this: r27
void InventoryItems::DoStream(class ReconBuffer * rb /* r28 */, int version /* r29 */) {
    // Local variables
    signed short length; // r1+0xC
    signed char temp; // r1+0xA
    int i; // r30
    class InventoryItem * temp; // r1+0x18
    signed char category; // r1+0x9
    signed char category; // r1+0x8
    int newGatheredListSize; // r1+0x14
    int i; // r30
    int temp; // r1+0x10
}

// Range: 0x8011D008 -> 0x8011D08C
void InventoryItems::RunOnRemoveTree(class cXObject * obj /* r29 */, signed short index /* r30 */) {
    // Local variables
    int memberGuid; // r31
    signed short familyMember; // r0
    signed short valueArray[8]; // r1+0x8
}

// Range: 0x8011D08C -> 0x8011D110
void InventoryItems::RunOnAddTree(class cXObject * obj /* r29 */, signed short index /* r30 */) {
    // Local variables
    int memberGuid; // r31
    signed short familyMember; // r0
    signed short valueArray[8]; // r1+0x8
}

// Range: 0x8011D110 -> 0x8011D1D4
// this: r29
unsigned char InventoryItems::DoesSimHaveTool(signed short & toolToken /* r30 */) const {
    // Local variables
    signed short tokenID; // r1+0xA
    signed short tokenMaxID; // r1+0x8
    unsigned char retval; // r31
}

// Range: 0x8011D1D4 -> 0x8011D318
void InventoryItems::ResolveToolToToken() {}

// Range: 0x8011D318 -> 0x8011D3B4
void InventoryItems::RepairClothingItem(signed short nNeighborID /* r31 */, enum eBodyPart bodyPart /* r30 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class Neighbor * pNeighbor; // r31
    class CasSimDescription * pSimDesc; // r3
    class BitFlags nDegRepResult; // r1+0xC
}

// Range: 0x8011D3B4 -> 0x8011D43C
// this: r29
void InventoryItems::RepairAllClothingItemsToFull() {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * cur; // r30
}

// Range: 0x8011D43C -> 0x8011D4C8
unsigned char InventoryItems::IsClothingDamaged(signed short nNeighborID /* r30 */, enum eBodyPart bodyPart /* r31 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class Neighbor * pNeighbor; // r0
    class CasSimDescription * pSimDesc; // r0
    class SimBodyPart * pSimBodyPart; // r0
}

// Range: 0x8011D4C8 -> 0x8011D578
// this: r27
class ClothingItem * InventoryItems::GetClothingItem(signed short nNeighborID /* r28 */, enum eBodyPart bodyPart /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * cur; // r30
    class ClothingItem * pClothingItem; // r0
}

// Range: 0x8011D578 -> 0x8011D650
// this: r25
void InventoryItems::GetChooseableClothingItems(class vector & itemList /* r26 */, enum eBodyPart bodyPart /* r27 */, unsigned char bMale /* r28 */, signed short nNeighborID /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * cur; // r30
    class ClothingItem * pClothingItem; // r1+0x8
    signed short nTempNeighborID; // r0
}

// Range: 0x8011D650 -> 0x8011D6EC
// this: r28
void InventoryItems::GetAllClothingItems(class vector & itemList /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * cur; // r30
    class ClothingItem * pClothingItem; // r1+0x8
}

// Range: 0x8011D6EC -> 0x8011D7C4
// this: r26
class ClothingItem * InventoryItems::GetChoosableClothingItemByID(signed short clothingID /* r27 */, signed short neighborID /* r28 */, unsigned char bMale /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class InventoryItem * cur; // [invalid]
    class ClothingItem * pClothingItem; // r30
    signed short nTempNeighborID; // r0
}

// Range: 0x8011D7C4 -> 0x8011D934
unsigned char InventoryItems::PutOnClothingItem(signed short nNeighborID /* r27 */, class ClothingItem * pClothingItem /* r28 */) {
    // Local variables
    class Neighbor * pNeighbor; // r30
    class CasSimDescription * pSimDesc; // r29
    enum eBodyPart bodyPart; // r0
    class SimBodyPart * pSimBodyPart; // r29
    class ClothingItem * pCurrentClothingItem; // r0
}

// Range: 0x8011D934 -> 0x8011D9E0
// this: r27
signed short InventoryItems::GetClothingCount(signed short clothingID /* r28 */) {
    // Local variables
    signed short count; // r31
    class InventoryItem * * i; // r30
    class InventoryItem * cur; // r29
}

// Range: 0x8011D9E0 -> 0x8011DAA4
// this: r29
void InventoryItems::GimmeAllTools() {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0x8
    int i; // r30
}

// Range: 0x8011DAA4 -> 0x8011DB54
// this: r28
void InventoryItems::GimmeAllFood(signed short number /* r29 */) {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0x8
    int i; // r30
}

// Range: 0x8011DB54 -> 0x8011DC30
// this: r28
void InventoryItems::GimmeAllResources(signed short number /* r29 */) {
    // Local variables
    const struct ERQTable * pInventoryTable; // r1+0x8
    int i; // r30
}

// Range: 0x8011DC30 -> 0x8011DD40
// this: r28
void InventoryItems::Replenish(signed short amount /* r29 */) {
    // Local variables
    class InventoryItem * * i; // r31
    class TokenItem * pTokenItem; // r30
    signed short tokenAmount; // r0
}

// Range: 0x8011DD40 -> 0x8011DD90
void InventoryItems::MarkTokenAsBeingCollected() {
    // Local variables
    int longIndex; // r7
    int shortIndex; // r6
}

// Range: 0x8011DD90 -> 0x8011DDEC
unsigned char InventoryItems::HasTokenEverBeenCollected() {
    // Local variables
    int longIndex; // r7
    int shortIndex; // r5
}

// Range: 0x8011DDEC -> 0x8011DEA0
void InventoryItems::GiveBasicItems() {
    // Local variables
    class InventoryItems * pInventory; // r31
}


