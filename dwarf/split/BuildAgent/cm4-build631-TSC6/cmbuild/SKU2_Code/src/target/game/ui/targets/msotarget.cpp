/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\msotarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D0274 -> 0x801D2498
*/
// Range: 0x801D0274 -> 0x801D0280
ShopItem::ShopItem() {}

// Range: 0x801D0280 -> 0x801D02F4
// this: r30
ShopItem::~ShopItem() {}

// Range: 0x801D02F4 -> 0x801D02FC
void ShopItem::Initialize() {}

// Range: 0x801D02FC -> 0x801D0304
class UICatalogItemBase * ShopItem::GetItem() {}

// Range: 0x801D0304 -> 0x801D0390
static int sort_shopitem_by_cost(void * pShopItemAsVoid2 /* r30 */) {
    // Local variables
    int value1; // r0
    int value2; // r0
}

// Range: 0x801D0390 -> 0x801D03A0
MSOItemManager::MSOItemManager() {}

// Range: 0x801D03A0 -> 0x801D05EC
// this: r29
void MSOItemManager::Initialize(class SelectorFilterFunctor * filter /* r30 */) {
    // Local variables
    class ObjSelector * * pSelectorArray; // r1+0x14
    unsigned int selectorCount; // r1+0x10
    class ObjSelector * * filteredArray; // r1+0xC
    unsigned int filteredCount; // r1+0x8
    class IngredientManager * pIngredientManager; // r27
    int ingredientCount; // r31
    struct IngredientToken * allings[375]; // r1+0x18
    int usedTokenCount; // r26
    int i; // r28
    unsigned int index; // r26
    unsigned int tokenIndex; // r26
    int i; // r25
}

// Range: 0x801D05EC -> 0x801D0618
unsigned char MSOItemManager::TokenItemAllowable() {}

// Range: 0x801D0618 -> 0x801D0688
// this: r30
MSOItemManager::~MSOItemManager() {}

// Range: 0x801D0688 -> 0x801D06BC
class UICatalogItemBase * MSOItemManager::GetStoreItem() {}

// Range: 0x801D06BC -> 0x801D06C4
int MSOItemManager::GetNumItems() {}

// Range: 0x801D06C4 -> 0x801D0B4C
// this: r29
MSOTarget::MSOTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const MSOTargetName;
    // -> int m_ReturnPoints;
    // -> signed short m_ReturnTokenID;
    // -> int m_ReturnGUID;
    // -> struct [anonymous] __vt__9MSOTarget;
}

// Range: 0x801D0B4C -> 0x801D0C20
// this: r30
MSOTarget::~MSOTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MSOTarget;
}

// Range: 0x801D0C20 -> 0x801D0E9C
// this: r28
void MSOTarget::SetVariable(const char * zVarName /* r29 */, const char * zValue /* r30 */) {
    // Local variables
    int numCellsNeeded; // r1+0x10
    int shaderIndex; // r1+0xC
    int itemIndex; // r1+0x8
    int resID; // r31
}

// Range: 0x801D0E9C -> 0x801D1334
// this: r28
char * MSOTarget::GetVariable(const char * zVarName /* r29 */) {
    // Local variables
    char * pResultString; // r30
    int count; // r5
    int i; // r0
    unsigned int index; // r1+0x8
    int scanresult; // r0
    char * newlyAvString; // r31
    char * unavString; // r31
}

// Range: 0x801D1334 -> 0x801D1654
// this: r29
unsigned short * MSOTarget::GetLocalizable(const char * zVarName /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x10
    const class UICatalogItemBase * pItem; // r0
    const class UICatalogItemBase * pItem; // r0
    const class UICatalogItemBase * pItem; // r30
    unsigned int index; // r1+0xC
    int scanresult; // r0
    unsigned short * pResultString; // r30
}

// Range: 0x801D1654 -> 0x801D1658
void MSOTarget::Update() {}

// Range: 0x801D1658 -> 0x801D181C
// this: r28
unsigned char MSOTarget::PurchaseSelectedItem() {
    // Local variables
    int fundsBuffer; // r0
    class InventoryItems * inventory; // r30
    int itemPrice; // r0
    unsigned char roomInInventory; // r29

    // References
    // -> int m_ReturnPoints;
}

// Range: 0x801D181C -> 0x801D194C
// this: r29
unsigned char MSOTarget::end_dialog(unsigned char bAccepted /* r30 */) {
    // Local variables
    class InventoryItems * inventory; // r31

    // References
    // -> signed short m_ReturnTokenID;
    // -> int m_ReturnGUID;
}

// Range: 0x801D194C -> 0x801D1B24
// this: r27
void MSOTarget::UpdateSelectedItemInfo() {
    // Local variables
    unsigned int resid; // r1+0x8
    class UICatalogItemBase * pShopItem; // r29
    struct ObjectDefinition info; // r1+0x10
    int i; // r28

    // References
    // -> unsigned int MotiveShaderIDs[18];
}

// Range: 0x801D1B24 -> 0x801D1B28
void MSOTarget::onHelpDialogSelection() {}

// Range: 0x801D1B28 -> 0x801D1B34
class UICatalogItemBase * MSOTarget::get_current_item() {}

// Range: 0x801D1B34 -> 0x801D1B44
class ELocString MSOTarget::GetShopName() {}

// Range: 0x801D1B44 -> 0x801D1B48
void MSOTarget::InitializeItemManager() {}

// Range: 0x801D1B48 -> 0x801D1C18
// this: r27
char * MSOTarget::GetUnavailableList() {
    // Local variables
    int numItems; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class UICatalogItemBase * item; // r0

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D1C18 -> 0x801D1CE4
// this: r27
char * MSOTarget::GetNewlyAvailableList() {
    // Local variables
    int numItems; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class UICatalogItemBase * item; // r0
}

// Range: 0x801D1CE4 -> 0x801D1D60
// this: r31
PlazaStoreBakery::PlazaStoreBakery() {
    // References
    // -> struct [anonymous] __vt__16PlazaStoreBakery;
}

// Range: 0x801D1D60 -> 0x801D1DB8
// this: r30
PlazaStoreBakery::~PlazaStoreBakery() {}

// Range: 0x801D1DB8 -> 0x801D1DD0
class ELocString PlazaStoreBakery::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D1DD0 -> 0x801D1E24
// this: r31
void PlazaStoreBakery::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D1E24 -> 0x801D1EA0
// this: r31
PlazaStoreToystore::PlazaStoreToystore() {
    // References
    // -> struct [anonymous] __vt__18PlazaStoreToystore;
}

// Range: 0x801D1EA0 -> 0x801D1EF8
// this: r30
PlazaStoreToystore::~PlazaStoreToystore() {}

// Range: 0x801D1EF8 -> 0x801D1F10
class ELocString PlazaStoreToystore::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D1F10 -> 0x801D1F64
// this: r31
void PlazaStoreToystore::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D1F64 -> 0x801D1FE8
// this: r31
PlazaStoreEmporium::PlazaStoreEmporium() {
    // References
    // -> struct [anonymous] __vt__18PlazaStoreEmporium;
}

// Range: 0x801D1FE8 -> 0x801D2040
// this: r30
PlazaStoreEmporium::~PlazaStoreEmporium() {}

// Range: 0x801D2040 -> 0x801D2058
class ELocString PlazaStoreEmporium::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2058 -> 0x801D20AC
// this: r31
void PlazaStoreEmporium::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D20AC -> 0x801D2138
// this: r31
PlazaStoreSmoothie::PlazaStoreSmoothie() {
    // References
    // -> struct [anonymous] __vt__18PlazaStoreSmoothie;
}

// Range: 0x801D2138 -> 0x801D2190
// this: r30
PlazaStoreSmoothie::~PlazaStoreSmoothie() {}

// Range: 0x801D2190 -> 0x801D21A8
class ELocString PlazaStoreSmoothie::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D21A8 -> 0x801D21F8
// this: r31
void PlazaStoreSmoothie::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D21F8 -> 0x801D2284
// this: r31
PlazaStoreIceCream::PlazaStoreIceCream() {
    // References
    // -> struct [anonymous] __vt__18PlazaStoreIceCream;
}

// Range: 0x801D2284 -> 0x801D22DC
// this: r30
PlazaStoreIceCream::~PlazaStoreIceCream() {}

// Range: 0x801D22DC -> 0x801D22F4
class ELocString PlazaStoreIceCream::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D22F4 -> 0x801D2348
// this: r31
void PlazaStoreIceCream::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}

// Range: 0x801D2348 -> 0x801D23D4
// this: r31
PlazaStoreCoffee::PlazaStoreCoffee() {
    // References
    // -> struct [anonymous] __vt__16PlazaStoreCoffee;
}

// Range: 0x801D23D4 -> 0x801D242C
// this: r30
PlazaStoreCoffee::~PlazaStoreCoffee() {}

// Range: 0x801D242C -> 0x801D2444
class ELocString PlazaStoreCoffee::GetShopName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2444 -> 0x801D2498
// this: r31
void PlazaStoreCoffee::InitializeItemManager() {
    // Local variables
    class SelectorFilterFunctor filter; // r1+0x8

    // References
    // -> int m_ShopLevel;
}


