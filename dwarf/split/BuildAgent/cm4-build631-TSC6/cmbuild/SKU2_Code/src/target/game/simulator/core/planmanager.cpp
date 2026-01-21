/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\planmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D051C -> 0x800D3B18
*/
// Range: 0x800D051C -> 0x800D0560
class PlanManager * PlanManager::GetInstance() {
    // References
    // -> class PlanManager * _pPlanManager;
}

// Range: 0x800D0560 -> 0x800D0618
// this: r30
unsigned char Plan::GetName(class ELocString & name /* r31 */) const {
    // Local variables
    class ObjSelector * sel; // r0

    // References
    // -> const unsigned short * tempClothingName;
}

// Range: 0x800D0618 -> 0x800D06D0
// this: r30
unsigned char Plan::GetDescription(class ELocString & desc /* r31 */) const {
    // Local variables
    class ObjSelector * sel; // r0

    // References
    // -> const unsigned short * tempClothingDesc;
}

// Range: 0x800D06D0 -> 0x800D0878
// this: r30
unsigned int Plan::GetLargeShaderSymbol() const {
    // Local variables
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r31
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r31
}

// Range: 0x800D0878 -> 0x800D0A20
// this: r30
unsigned int Plan::GetSmallShaderSymbol() const {
    // Local variables
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r31
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r31
}

// Range: 0x800D0A20 -> 0x800D0AC0
// this: r30
struct InventoryTokens * Plan::GetResource(int index /* r31 */) const {
    // Local variables
    struct InventoryTokens * token; // r3
}

// Range: 0x800D0AC0 -> 0x800D0B1C
// this: r30
int Plan::GetResourceCount(int index /* r31 */) const {}

// Range: 0x800D0B1C -> 0x800D0C30
// this: r27
unsigned char Plan::ChargeTheSimForThePlan() const {
    // Local variables
    class InventoryItems * inventory; // r29
    int i; // r28
    struct InventoryTokens * resource; // r0
    struct InventoryTokens * resource; // r0
    int index; // r28
}

// Range: 0x800D0C30 -> 0x800D0CBC
// this: r30
int Plan::GetRequirementType(int index /* r31 */) const {}

// Range: 0x800D0CBC -> 0x800D0D18
// this: r30
int Plan::GetRequirementLevel(int index /* r31 */) const {}

// Range: 0x800D0D18 -> 0x800D0E98
// this: r28
unsigned char Plan::DoesSimFillRequirement(int index /* r29 */, int crafting_object /* r30 */) const {
    // Local variables
    class InventoryItems * pInventory; // r30
    signed short tokenID; // r1+0x8
    int skillLevel; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800D0E98 -> 0x800D1128
// this: r30
unsigned int Plan::GetRequirementShader(int index /* r31 */) const {}

// Range: 0x800D1128 -> 0x800D1644
// this: r28
unsigned char Plan::GetRequirementName(int index /* r29 */, class ELocString & name /* r30 */) const {
    // Local variables
    class ObjSelector * pSel; // r0
    class ObjSelector * pSel; // r0
    class ObjSelector * pSel; // r0
    class ObjSelector * pSel; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800D1644 -> 0x800D1700
// this: r30
int Plan::GetCatalogMotive(int index /* r31 */) const {}

// Range: 0x800D1700 -> 0x800D175C
// this: r30
int Plan::GetCatalogValue(int index /* r31 */) const {}

// Range: 0x800D175C -> 0x800D17BC
signed short Plan::GetSkillToImprove() {}

// Range: 0x800D17BC -> 0x800D182C
// this: r30
unsigned char Plan::UnlockedToStart() const {
    // Local variables
    int i; // r31
}

// Range: 0x800D182C -> 0x800D18B0
// this: r31
unsigned char Plan::PutItemInHand() const {
    // Local variables
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r0
}

// Range: 0x800D18B0 -> 0x800D1920
// this: r30
unsigned char Plan::PutItemOnGround() const {
    // Local variables
    int i; // r31
}

// Range: 0x800D1920 -> 0x800D1988
unsigned char Plan::PutItemInInventory() {}

// Range: 0x800D1988 -> 0x800D19C0
unsigned char Plan::AddTokenToInventory() {}

// Range: 0x800D19C0 -> 0x800D1A70
// this: r31
signed short Plan::GetConstructionMotion() const {
    // Local variables
    signed short prop; // r0
}

// Range: 0x800D1A70 -> 0x800D1A78
signed short Plan::GetResourcePile() {}

// Range: 0x800D1A78 -> 0x800D1BE4
// this: r29
signed short Plan::GetToolUsed() const {
    // Local variables
    signed short propTool; // r31
    int i; // r30
}

// Range: 0x800D1BE4 -> 0x800D1CD0
signed short Plan::ResolveToolEnumToExistingToken(signed short toolEnum /* r31 */) {
    // Local variables
    class InventoryItems * pInventory; // r0
    signed short toolToken; // r1+0xC
    signed short toolToken; // r1+0xA
    signed short toolToken; // r1+0x8
}

// Range: 0x800D1CD0 -> 0x800D1D50
// this: r30
unsigned char Plan::ClayOrSandRequired() const {
    // Local variables
    int i; // r31
    struct InventoryTokens * resource; // r0
}

// Range: 0x800D1D50 -> 0x800D1D58
signed short Plan::GetTimeToMake() {}

// Range: 0x800D1D58 -> 0x800D1FB8
// this: r26
unsigned char Plan::TryToUnlockPlan(signed short event /* r22 */, int value /* r27 */, class cXPerson * person /* r28 */) const {
    // Local variables
    int i; // [invalid]
    int unlockCount; // r0
    int index; // r30
    int percentChance; // r29
    int skillLevel; // r22
    signed short tokenID; // r1+0x8
    class InventoryItems * pInventory; // r22
    int skillLevel; // r22
    int diceRoll; // r0
}

// Range: 0x800D1FB8 -> 0x800D20D8
// this: r28
unsigned char Plan::IsMadeAtObject() const {
    // Local variables
    int object; // r31
    int level; // r30
    int i; // r29
}

// Range: 0x800D20D8 -> 0x800D2160
// this: r30
PlanManager::PlanManager() {}

// Range: 0x800D2160 -> 0x800D2254
// this: r27
void PlanManager::LoadPlans() {
    // Local variables
    const struct ERQTable * pPlanData; // r1+0xC
    unsigned long i; // r28
    const struct Plan * plan; // r1+0x8
}

// Range: 0x800D2254 -> 0x800D2294
// this: r31
void PlanManager::UnloadPlans() {}

// Range: 0x800D2294 -> 0x800D2420
// this: r28
struct Plan * PlanManager::GetPlan(int filter /* r29 */, const struct Plan * lastPlan /* r30 */, int crafting_object /* r31 */) {
    // Local variables
    struct ListIterator planItr; // r1+0x24

    // References
    // -> unsigned char cheatShowAllPlans;
}

// Range: 0x800D2420 -> 0x800D274C
// this: r28
struct Plan * PlanManager::GetAnyPlan(int filter /* r29 */, const struct Plan * lastPlan /* r30 */, int crafting_object /* r31 */) {
    // Local variables
    struct ListIterator planItr; // r1+0x4C
}

// Range: 0x800D274C -> 0x800D2AD4
// this: r26
void PlanManager::SendNotification(signed char notification /* r29 */, signed short data /* r27 */, class cXPerson * person /* r28 */) {
    // Local variables
    signed short unlockEvent; // r31
    int unlockValue; // [invalid]
    unsigned char unlockedAnything; // r30
    const struct Plan * plan; // r0
    class cXObject * object; // r0
    class IGoalUnlock * unlocks; // r0
    class IGoalUnlock * unlocks; // r0
    class IGoalUnlock * unlocks; // r0
    class IGoalUnlock * unlocks; // r0
    class IGoalUnlock * unlocks; // r0
    class cXObject * object; // r0
    struct ListIterator planItr; // r1+0x14
    signed short planID; // r29
}

// Range: 0x800D2AD4 -> 0x800D2B44
// this: r31
unsigned char PlanManager::IsPlanUnlocked(signed short planID /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator sit; // r1+0x10

    // References
    // -> unsigned char cheatShowAllPlans;
}

// Range: 0x800D2B44 -> 0x800D2C88
// this: r31
struct Plan * PlanManager::GetPlanByID(signed short planID /* r1+0x8 */) {
    // Local variables
    struct ListIterator itr; // r1+0x24
}

// Range: 0x800D2C88 -> 0x800D2DB0
// this: r30
struct Plan * PlanManager::GetPlanByGUID(int guid /* r31 */) {
    // Local variables
    struct ListIterator itr; // r1+0x20
}

// Range: 0x800D2DB0 -> 0x800D2F08
// this: r30
struct Plan * PlanManager::GetPlanByTokenID(signed short tokenID /* r31 */) {
    // Local variables
    struct ListIterator itr; // r1+0x20
}

// Range: 0x800D2F08 -> 0x800D3058
// this: r28
void PlanManager::DoStream(class ReconBuffer * rb /* r30 */) {
    // Local variables
    signed short i; // r30
    signed short unlockedPlanCount; // r1+0xA
    signed short * unlockedPlanIds; // r29
    struct ListIterator itr; // r1+0x10
    signed short ID; // r1+0x8
}

// Range: 0x800D3058 -> 0x800D308C
// this: r31
void PlanManager::Reset() {}

// Range: 0x800D308C -> 0x800D3118
// this: r30
void PlanManager::LockEverything() {
    // Local variables
    struct ListIterator itr; // r1+0x8
}

// Range: 0x800D3118 -> 0x800D3230
// this: r31
unsigned char PlanManager::UnlockPlan(signed short id /* r1+0x8 */, unsigned char silent /* r30 */) {
    // Local variables
    struct ListIterator itr; // r1+0x1C
}

// Range: 0x800D3230 -> 0x800D3354
// this: r27
unsigned char PlanManager::UnlockGroupPlan(signed short groupID /* r28 */, unsigned char silent /* r29 */) {
    // Local variables
    unsigned char unlockedSomething; // r30
    struct ListIterator itr; // r1+0x18
}

// Range: 0x800D3354 -> 0x800D3434
// this: r30
void PlanManager::RelockPlan(signed short planID /* r31 */) {
    // Local variables
    struct ListIterator itr; // r1+0x18
}

// Range: 0x800D3434 -> 0x800D34F4
// this: r30
void PlanManager::Update() {
    // Local variables
    int shaderID; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800D34F4 -> 0x800D3994
unsigned char PlanManager::DoesPlanBelongInFilter(int filter /* r30 */, const struct Plan * plan /* r31 */) {
    // Local variables
    class ObjSelector * sel; // r0
    int buildModeType; // r0
    const struct InventoryTokens * token; // r0
    class ObjSelector * sel; // r31
    int functionFlags; // r4
    int functionFlags; // r0
}

// Range: 0x800D3994 -> 0x800D39B4
unsigned char PlanManager::IsPlanMadeAtObject() {}

// Range: 0x800D39B4 -> 0x800D39C8
void PlanManager::ToggleAllPlansInUI() {
    // References
    // -> unsigned char cheatShowAllPlans;
}

// Range: 0x800D39C8 -> 0x800D39DC
void PlanManager::ToggleIgnoreRequirements() {
    // References
    // -> unsigned char cheatIgnoreRequirements;
}

// Range: 0x800D39DC -> 0x800D39E4
unsigned char PlanManager::IgnoringRequirements() {
    // References
    // -> unsigned char cheatIgnoreRequirements;
}

// Range: 0x800D39E4 -> 0x800D3A78
// this: r30
void PlanManager::ForceAllPlansToUnlock() {
    // Local variables
    struct ListIterator planItr; // r1+0x10
    signed short planID; // r31
}

// Range: 0x800D3A78 -> 0x800D3B18
// this: r30
void PlanManager::ObjectPlanPlaced(int guid /* r31 */) {
    // Local variables
    class ObjSelector * sel; // r0
    signed short type; // r0
    const struct Plan * plan; // r0
}


