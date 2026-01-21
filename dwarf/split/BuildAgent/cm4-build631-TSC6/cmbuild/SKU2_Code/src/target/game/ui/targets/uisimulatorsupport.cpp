/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\uisimulatorsupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E1954 -> 0x801E4230
*/
// Range: 0x801E1954 -> 0x801E19C4
void MakeCatalogMoneyString(unsigned short * pDst /* r29 */, int price /* r30 */) {
    // References
    // -> const unsigned short * const COLOR_RedText;
}

// Range: 0x801E19C4 -> 0x801E1A70
void MakeCatalogPriceMoneyString(unsigned short * dest /* r29 */, int price /* r30 */, unsigned char isRed /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> const unsigned short * const COLOR_RedText;
}

// Range: 0x801E1A70 -> 0x801E1B10
void MakeCatalogPricePetpointString(unsigned short * dest /* r30 */, int price /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> const unsigned short * const COLOR_RedText;
}

// Range: 0x801E1B10 -> 0x801E1B64
void ConvertSpacesToUnderscores(unsigned short * widestring /* r31 */) {
    // Local variables
    int length; // r0
    int i; // r0
}

// Range: 0x801E1B64 -> 0x801E1C00
unsigned char get_name(unsigned short * pDst /* r30 */) {
    // Local variables
    const unsigned short * const pName; // r31
}

// Range: 0x801E1C00 -> 0x801E1C88
unsigned char get_desc(unsigned short * pDst /* r31 */) {
    // Local variables
    const unsigned short * const pName; // r4
}

// Range: 0x801E1C88 -> 0x801E1CCC
class ObjSelector * get_obj_selector(int guid /* r31 */) {
    // Local variables
    class ObjectFolder * pObjectFolder; // r0
}

// Range: 0x801E1CCC -> 0x801E1CE0
struct ObjDefinition * get_definition() {}

// Range: 0x801E1CE0 -> 0x801E1DB4
struct FenceData * GetFenceDataFromWallStyle(int wallstyle /* r29 */) {
    // Local variables
    const struct FenceSet & fenceset; // r31
    struct FenceData * const * it; // r30
    const struct FenceData * pFenceData; // r3

    // References
    // -> static struct FenceData sFenceDataForWalls;
    // -> class EGlobal _globals;
}

// Range: 0x801E1DB4 -> 0x801E1DFC
int get_price() {
    // Local variables
    const struct ObjDefinition * pObjDefinition; // r0
}

// Range: 0x801E1DFC -> 0x801E1E38
unsigned char IsSkillCatalogRating() {}

// Range: 0x801E1E38 -> 0x801E1E54
unsigned char IsPlazaShopObject() {}

// Range: 0x801E1E54 -> 0x801E1E68
unsigned char IsPlazaShopCategory() {}

// Range: 0x801E1E68 -> 0x801E1E88
unsigned char SelectedSimIsPet() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E1E88 -> 0x801E1EA4
int GetSimoleonsPerPetPoint() {
    // Local variables
    float returnValue; // f0
}

// Range: 0x801E1EA4 -> 0x801E1EAC
float GetPlazaSellBackRate() {
    // Local variables
    float returnValue; // f1
}

// Range: 0x801E1EAC -> 0x801E1F78
int GetObjectValue(class cXObject * pObject /* r30 */) {
    // Local variables
    int result; // r31
    class ObjSelector * pObjSelector; // r0
    class ObjSelector * pObjMasterSel; // r0
    struct ObjDefinition * pObjDefinition; // r0
}

// Range: 0x801E1F78 -> 0x801E2000
unsigned char set_interactor_to_null() {
    // Local variables
    class InteractorManager * pIM; // r31
    enum InteractorType t; // r5
    class RayManipulator * pRM; // r31
    unsigned char result; // r0
}

// Range: 0x801E2000 -> 0x801E20D4
void SellObjectInHand() {
    // Local variables
    class GrabManipulator * pGrabManipulator; // r30
    class cXObject * sellingObj; // r29
    unsigned char bIsALight; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E20D4 -> 0x801E2110
void DeleteObjectInHand() {
    // Local variables
    class GrabManipulator * pGrabManipulator; // r0
}

// Range: 0x801E2110 -> 0x801E2204
unsigned char PlaceObjectInHandToCurrentFamilyInventory() {
    // Local variables
    class GrabManipulator * pGrabManipulator; // r31
    class InventoryItems * inventory; // r30
    class cXObject * sellingObj; // r29
    class ObjSelector * sellingObjSel; // r0
}

// Range: 0x801E2204 -> 0x801E2248
void NotifyInventoryOfObjectDeletion(class cXObject * pObject /* r31 */) {
    // Local variables
    class InventoryItems * pInventory; // r0
}

// Range: 0x801E2248 -> 0x801E22D0
void RecordPetPointsSpent(signed short numSpent /* r30 */) {
    // Local variables
    class PlayerFamilyImpl * family; // r31
    signed short previousNumSpent; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801E22D0 -> 0x801E2324
class InventoryItems * GetInventoryFromCurrentFamily() {
    // Local variables
    class InventoryItems * pInv; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E2324 -> 0x801E2484
unsigned char get_motives(unsigned int num_motives /* r25 */, int * motiveValuesOut /* r26 */, int * motiveIDsOut /* r27 */) {
    // Local variables
    class ObjSelector * masterSelector; // r29
    class multimap intmap; // r1+0x28
    unsigned int index; // r28
    int ratingvalue; // r1+0x1C
    struct rbtree_iterator it; // r1+0x18
}

// Range: 0x801E2484 -> 0x801E2520
class ObjSelector * FindSelectorContainingResData(class ObjSelector * pObjSelector /* r29 */) {
    // Local variables
    class ObjectFolder * pObjFolder; // r31
    class ObjSelector * pCurObjSelector; // r30
    int i; // r29
    struct ObjDefinition * pObjDefinition; // r0
}

// Range: 0x801E2520 -> 0x801E2558
struct ResData * GetResDataFromSelector() {}

// Range: 0x801E2558 -> 0x801E259C
unsigned int GetObjectIconFromSelector() {
    // Local variables
    const struct ResData * pResData; // r0
}

// Range: 0x801E259C -> 0x801E25EC
unsigned int GetObjectIconFromObject(class cXObject * pObject /* r31 */) {}

// Range: 0x801E25EC -> 0x801E26B0
unsigned char GetObjSelector3dDisplayInfo(struct ObjectDefinition * info /* r29 */) {
    // Local variables
    class ObjSelector * pResObjSelector; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r31
    struct ObjAnimDef & objanimdef; // r30
}

// Range: 0x801E26B0 -> 0x801E2750
void CreateObjectFolderSelectorArray(class ObjSelector * * * output /* r25 */, unsigned int * count /* r26 */) {
    // Local variables
    unsigned long index; // r30
    class ObjSelector * * selectorArray; // r29
    unsigned int selectorCount; // r28
    class ObjectFolder * pObjectFolder; // r27
    class ObjSelector * pObjSelector; // r4
}

// Range: 0x801E2750 -> 0x801E2774
SelectorFilterFunctor::SelectorFilterFunctor() {}

// Range: 0x801E2774 -> 0x801E2858
// this: r30
unsigned char SelectorFilterFunctor::ObjectAllowed(class ObjSelector * pObjSelector /* r31 */) {
    // Local variables
    const struct ObjDefinition * pObjDefinition; // r0
}

// Range: 0x801E2858 -> 0x801E2938
void CreateFilteredObjectFolderSelectorArray(class ObjSelector * * * filteredOutput /* r23 */, unsigned int * filteredOutputCount /* r24 */, class ObjSelector * * unfilteredInput /* r25 */, unsigned int unfilteredCount /* r26 */, class SelectorFilterFunctor * filter /* r27 */) {
    // Local variables
    unsigned long selectorindex; // r30
    class ObjSelector * * filteredArray; // r29
    unsigned int filteredItemCount; // r28
}

// Range: 0x801E2938 -> 0x801E2984
unsigned char play_sound(unsigned int resid /* r31 */) {}

// Range: 0x801E2984 -> 0x801E29D0
unsigned char IsBookUnlocked(int num /* r31 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class IGoalUnlock * pGoalUnlock; // r0
}

// Range: 0x801E29D0 -> 0x801E2A28
unsigned char IsPageUnlocked(int booknum /* r30 */, int pagenum /* r31 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class IGoalUnlock * pGoalUnlock; // r0
}

// Range: 0x801E2A28 -> 0x801E2AC8
int GetGoalState(int booknum /* r28 */, int pagenum /* r29 */, int goalnum /* r30 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class IGoalUnlock * pGoalUnlock; // r31
}

// Range: 0x801E2AC8 -> 0x801E2B0C
unsigned char IsMotiveUnlocked(int motive /* r31 */) {
    // Local variables
    class Neighborhood * pNeighborhood; // r0
    class IGoalUnlock * pGoalUnlock; // r0
}

// Range: 0x801E2B0C -> 0x801E2B98
unsigned char IsDeathImminentOrNoSim() {
    // Local variables
    unsigned char rc; // r31
    float hungerMotive; // f1

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801E2B98 -> 0x801E2CDC
unsigned char CreateGrabObjectMenu(class TNodeList & objlist /* r28 */) {
    // Local variables
    class ActionMenu * pActionMenu; // r30
    class ISimInstance * pIobject; // r0
    class cXObject * pObj; // r29
    class BString2 name; // r1+0xC
    int shaderid; // r0
    class ERShader * pShader; // r1+0x8
    class NLIteratorPtrType * nli; // r28

    // References
    // -> class GameData _gd;
}

// Range: 0x801E2CDC -> 0x801E2D2C
unsigned char ClearActionMenu() {
    // Local variables
    class ActionMenu * pActionMenu; // r3

    // References
    // -> class GameData _gd;
}

// Range: 0x801E2D2C -> 0x801E2D60
class IGoalUnlock * GetUnlockManagerFromFamily() {
    // Local variables
    class Neighborhood * ngh; // r0
}

// Range: 0x801E2D60 -> 0x801E2D6C
NumericalInputSpinner::NumericalInputSpinner() {}

// Range: 0x801E2D6C -> 0x801E2DF4
// this: r29
void NumericalInputSpinner::Update(unsigned int filterID /* r30 */) {
    // Local variables
    class EController * pCtrl; // r31

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801E2DF4 -> 0x801E2E04
void NumericalInputSpinner::NotifyInputHappened() {}

// Range: 0x801E2E04 -> 0x801E2E0C
int NumericalInputSpinner::GetFramesPressed() {}

// Range: 0x801E2E0C -> 0x801E2E98
// this: r31
FireMarshall::FireMarshall() {
    // Local variables
    float firevalue; // f0

    // References
    // -> float m_SavedFenceValue;
    // -> float m_SavedWallValue;
}

// Range: 0x801E2E98 -> 0x801E2EFC
void FireMarshall::EnforceFireCode() {
    // Local variables
    float firevalue; // f0

    // References
    // -> class GameData _gd;
}

// Range: 0x801E2EFC -> 0x801E2FB4
// this: r31
void FireMarshall::LaunchWarnings() {}

// Range: 0x801E2FB4 -> 0x801E3020
float FireMarshall::GetObjectFireValue() {
    // Local variables
    float object_meter; // f1

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801E3020 -> 0x801E30AC
float FireMarshall::GetCompositeFireValue(unsigned char recalculate /* r31 */) {
    // Local variables
    float object_meter; // f0
    float wall_fence_meter; // f1
    int totalrooms; // r1+0x8
}

// Range: 0x801E30AC -> 0x801E3100
// this: r31
unsigned char FireMarshall::AllowPlacement() {}

// Range: 0x801E3100 -> 0x801E3250
// this: r27
void FireMarshall::SpawnFirecodeDialog(char * bodyText /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E3250 -> 0x801E32D8
// this: r31
void FireMarshall::UpdateFireCode() {
    // Local variables
    float firevalue; // f0
}

// Range: 0x801E32D8 -> 0x801E32E4
void FireMarshall::DialogSelectionCallback() {}

// Range: 0x801E32E4 -> 0x801E32F0
void FireMarshall::DialogClosedCallback() {}

// Range: 0x801E32F0 -> 0x801E340C
// this: r30
TutorialGUIManager::TutorialGUIManager() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport18TutorialGUIManager;
}

// Range: 0x801E340C -> 0x801E3484
// this: r30
TutorialGUIManager::~TutorialGUIManager() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport18TutorialGUIManager;
}

// Range: 0x801E3484 -> 0x801E34F8
char * TutorialGUIManager::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
}

// Range: 0x801E34F8 -> 0x801E3768
// this: r22
void TutorialGUIManager::TryCreateTutorialDialog(enum TutorialUnlockIndex index /* r23 */, char * titleid /* r24 */, char * bodyid /* r25 */, unsigned char bUseNewUIStrings /* r26 */, unsigned char bMarkDialogAsViewed /* r27 */, void (* pTutorialDialogCallback)(int) /* r28 */) {
    // Local variables
    class IGoalUnlock * goalUnlock; // r29
    unsigned char prompted; // r0
    unsigned char disabled; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E3768 -> 0x801E37C4
// this: r31
void TutorialGUIManager::DialogSelectionCallback() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E37C4 -> 0x801E3820
// this: r31
void TutorialGUIManager::DialogClosedCallback() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E3820 -> 0x801E3864
// this: r31
UICatalogItemObject::UICatalogItemObject() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport19UICatalogItemObject;
}

// Range: 0x801E3864 -> 0x801E38BC
// this: r31
void UICatalogItemObject::Initialize() {
    // Local variables
    const struct ResData * pResData; // r0
}

// Range: 0x801E38BC -> 0x801E38C4
void UICatalogItemObject::GetName() {}

// Range: 0x801E38C4 -> 0x801E38CC
void UICatalogItemObject::GetDesc() {}

// Range: 0x801E38CC -> 0x801E38D4
int UICatalogItemObject::GetPrice() {
    // Local variables
    int price; // r0
}

// Range: 0x801E38D4 -> 0x801E3914
int UICatalogItemObject::GetUnlockLevel() {
    // Local variables
    struct ObjDefinition * def; // r0
}

// Range: 0x801E3914 -> 0x801E392C
unsigned char UICatalogItemObject::GetMotives(int * motiveValuesOut /* r0 */) {}

// Range: 0x801E392C -> 0x801E3970
unsigned char UICatalogItemObject::IsPutInHand() {}

// Range: 0x801E3970 -> 0x801E3988
unsigned char UICatalogItemObject::CanAddToInventory() {}

// Range: 0x801E3988 -> 0x801E3A10
// this: r30
void UICatalogItemObject::AddToInventory(class InventoryItems * pInventory /* r31 */) const {}

// Range: 0x801E3A10 -> 0x801E3A18
unsigned char UICatalogItemObject::Get3DShader() {}

// Range: 0x801E3A18 -> 0x801E3A20
unsigned char UICatalogItemObject::IsRecentlyUnlocked() {}

// Range: 0x801E3A20 -> 0x801E3A24
void UICatalogItemObject::SetRecentlyUnlockedStatus() {}

// Range: 0x801E3A24 -> 0x801E3A68
// this: r31
UICatalogItemIngredient::UICatalogItemIngredient() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport23UICatalogItemIngredient;
}

// Range: 0x801E3A68 -> 0x801E3AA0
// this: r31
void UICatalogItemIngredient::Initialize() {}

// Range: 0x801E3AA0 -> 0x801E3AF0
void UICatalogItemIngredient::GetName(unsigned short * dest /* r31 */) {
    // Local variables
    class ELocString name; // r1+0x8
}

// Range: 0x801E3AF0 -> 0x801E3B40
void UICatalogItemIngredient::GetDesc(unsigned short * dest /* r31 */) {
    // Local variables
    class ELocString desc; // r1+0x8
}

// Range: 0x801E3B40 -> 0x801E3B4C
int UICatalogItemIngredient::GetPrice() {}

// Range: 0x801E3B4C -> 0x801E3B58
int UICatalogItemIngredient::GetUnlockLevel() {}

// Range: 0x801E3B58 -> 0x801E3BC0
unsigned char UICatalogItemIngredient::GetMotives() {}

// Range: 0x801E3BC0 -> 0x801E3BC8
unsigned char UICatalogItemIngredient::CanAddToInventory() {}

// Range: 0x801E3BC8 -> 0x801E3BE0
// this: r5
void UICatalogItemIngredient::AddToInventory() const {}

// Range: 0x801E3BE0 -> 0x801E3BF8
// this: r6
void UICatalogItemIngredient::AddToInventory() const {}

// Range: 0x801E3BF8 -> 0x801E3C30
unsigned char UICatalogItemIngredient::GetBigShader(unsigned int * output /* r31 */) {}

// Range: 0x801E3C30 -> 0x801E3C38
unsigned char UICatalogItemIngredient::IsRecentlyUnlocked() {}

// Range: 0x801E3C38 -> 0x801E3C3C
void UICatalogItemIngredient::SetRecentlyUnlockedStatus() {}

// Range: 0x801E3C3C -> 0x801E3C80
// this: r31
UICatalogItemInventoryToken::UICatalogItemInventoryToken() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport27UICatalogItemInventoryToken;
}

// Range: 0x801E3C80 -> 0x801E3CC0
// this: r31
void UICatalogItemInventoryToken::Initialize(const struct InventoryTokens * invToken /* r0 */) {}

// Range: 0x801E3CC0 -> 0x801E3D24
void UICatalogItemInventoryToken::GetName(unsigned short * dest /* r31 */) {
    // Local variables
    class ELocString temp; // r1+0x8
}

// Range: 0x801E3D24 -> 0x801E3D88
void UICatalogItemInventoryToken::GetDesc(unsigned short * dest /* r31 */) {
    // Local variables
    class ELocString temp; // r1+0x8
}

// Range: 0x801E3D88 -> 0x801E3D90
int UICatalogItemInventoryToken::GetPrice() {}

// Range: 0x801E3D90 -> 0x801E3D98
int UICatalogItemInventoryToken::GetUnlockLevel() {}

// Range: 0x801E3D98 -> 0x801E3E40
// this: r29
unsigned char UICatalogItemInventoryToken::GetMotives(int * motiveValuesOut /* r30 */, int * motiveIDsOut /* r31 */) const {
    // Local variables
    class IngredientManager * pIngredientManager; // r0
    const struct IngredientToken * pIngredientToken; // r0
}

// Range: 0x801E3E40 -> 0x801E3E48
unsigned char UICatalogItemInventoryToken::CanAddToInventory() {}

// Range: 0x801E3E48 -> 0x801E3E60
// this: r5
void UICatalogItemInventoryToken::AddToInventory() const {}

// Range: 0x801E3E60 -> 0x801E3E78
// this: r6
void UICatalogItemInventoryToken::AddToInventory() const {}

// Range: 0x801E3E78 -> 0x801E3EDC
// this: r30
unsigned char UICatalogItemInventoryToken::GetBigShader(unsigned int * output /* r31 */) {}

// Range: 0x801E3EDC -> 0x801E3EEC
unsigned char UICatalogItemInventoryToken::IsEatFromInventory() {}

// Range: 0x801E3EEC -> 0x801E3EFC
unsigned char UICatalogItemInventoryToken::IsPutInHand() {}

// Range: 0x801E3EFC -> 0x801E3F0C
unsigned char UICatalogItemInventoryToken::IsCultivatable() {}

// Range: 0x801E3F0C -> 0x801E3F14
unsigned char UICatalogItemInventoryToken::IsRecentlyUnlocked() {}

// Range: 0x801E3F14 -> 0x801E3F18
void UICatalogItemInventoryToken::SetRecentlyUnlockedStatus() {}

// Range: 0x801E3F18 -> 0x801E3F60
// this: r31
UICatalogItemClothing::UICatalogItemClothing() {
    // References
    // -> struct [anonymous] __vt__Q218UISimulatorSupport21UICatalogItemClothing;
}

// Range: 0x801E3F60 -> 0x801E3FDC
// this: r30
void UICatalogItemClothing::Initialize(class InventoryItem * pInventoryItem /* r31 */) {}

// Range: 0x801E3FDC -> 0x801E4094
// this: r30
void UICatalogItemClothing::GetName(unsigned short * dest /* r31 */) const {}

// Range: 0x801E4094 -> 0x801E414C
// this: r30
void UICatalogItemClothing::GetDesc(unsigned short * dest /* r31 */) const {}

// Range: 0x801E414C -> 0x801E4154
int UICatalogItemClothing::GetPrice() {}

// Range: 0x801E4154 -> 0x801E415C
int UICatalogItemClothing::GetUnlockLevel() {}

// Range: 0x801E415C -> 0x801E4164
unsigned char UICatalogItemClothing::GetMotives() {}

// Range: 0x801E4164 -> 0x801E416C
unsigned char UICatalogItemClothing::CanAddToInventory() {}

// Range: 0x801E416C -> 0x801E417C
// this: r5
void UICatalogItemClothing::AddToInventory() const {}

// Range: 0x801E417C -> 0x801E418C
// this: r5
void UICatalogItemClothing::AddToInventory() const {}

// Range: 0x801E418C -> 0x801E4224
// this: r30
unsigned char UICatalogItemClothing::GetBigShader(unsigned int * output /* r31 */) {}

// Range: 0x801E4224 -> 0x801E422C
unsigned char UICatalogItemClothing::IsRecentlyUnlocked() {}

// Range: 0x801E422C -> 0x801E4230
void UICatalogItemClothing::SetRecentlyUnlockedStatus() {}


