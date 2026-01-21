/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\ingtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AB0CC -> 0x801AE410
*/
// Range: 0x801AB0CC -> 0x801AB0E4
RefrigeratorIngredient::RefrigeratorIngredient() {}

// Range: 0x801AB0E4 -> 0x801AB148
void RefrigeratorIngredient::GetName(unsigned short * output /* r31 */) {
    // Local variables
    class ELocString name; // r1+0x8
}

// Range: 0x801AB148 -> 0x801AB1AC
void RefrigeratorIngredient::GetDescription(unsigned short * output /* r31 */) {
    // Local variables
    class ELocString desc; // r1+0x8
}

// Range: 0x801AB1AC -> 0x801AB268
// this: r28
void RefrigeratorIngredient::GetCostString(unsigned short * output /* r29 */) {
    // Local variables
    unsigned long len; // r30

    // References
    // -> const unsigned short * const COLOR_RedText;
}

// Range: 0x801AB268 -> 0x801AB2B8
void RefrigeratorIngredient::GetMotValue(unsigned short * output /* r31 */) {}

// Range: 0x801AB2B8 -> 0x801AB2F8
int RefrigeratorIngredient::GetMotValueInt() {}

// Range: 0x801AB2F8 -> 0x801AB350
// this: r31
unsigned int RefrigeratorIngredient::GetShader() {}

// Range: 0x801AB350 -> 0x801AB3A8
// this: r31
unsigned int RefrigeratorIngredient::GetLargeShader() {}

// Range: 0x801AB3A8 -> 0x801AB3D0
int RefrigeratorIngredient::GetCount() {}

// Range: 0x801AB3D0 -> 0x801AB450
// this: r31
void RefrigeratorIngredient::ConsumeForMeal() {
    // Local variables
    class InventoryItems * pInventory; // r0
    int cost; // r6
}

// Range: 0x801AB450 -> 0x801AB4F8
// this: r30
unsigned char RefrigeratorIngredient::MoveToPlate(int & plateCost /* r31 */) {}

// Range: 0x801AB4F8 -> 0x801AB59C
// this: r30
unsigned char RefrigeratorIngredient::MoveToFridge(int & plateCost /* r31 */) {}

// Range: 0x801AB59C -> 0x801AB618
// this: r31
unsigned char RefrigeratorIngredient::AvailableForMeal() {}

// Range: 0x801AB618 -> 0x801AB640
unsigned char RefrigeratorIngredient::AvailableOnPlate() {}

// Range: 0x801AB640 -> 0x801AB648
struct IngredientToken * RefrigeratorIngredient::GetIngredient() {}

// Range: 0x801AB648 -> 0x801AB70C
// this: r29
void RefrigeratorIngredient::Initialize(const struct IngredientToken * pIngredient /* r30 */) {
    // Local variables
    class InventoryItems * pInventory; // r31
    int index; // r4
    class InventoryItem * pItem; // r0
}

// Range: 0x801AB70C -> 0x801AB714
int RefrigeratorTab::GetCount() {}

// Range: 0x801AB714 -> 0x801AB73C
class RefrigeratorIngredient * RefrigeratorTab::GetItem() {}

// Range: 0x801AB73C -> 0x801AB74C
void RefrigeratorTab::Initialize() {}

// Range: 0x801AB74C -> 0x801AB770
void RefrigeratorTab::AddIngredient() {}

// Range: 0x801AB770 -> 0x801AB7AC
unsigned int RefrigeratorTab::GetShader() {}

// Range: 0x801AB7AC -> 0x801AB7F4
void RefrigeratorTab::GetName(unsigned short * output /* r31 */) {}

// Range: 0x801AB7F4 -> 0x801AB818
class RefrigeratorIngredient * RefrigeratorManager::GetItem() {}

// Range: 0x801AB818 -> 0x801AB998
// this: r25
void RefrigeratorManager::Initialize() {
    // Local variables
    class IngredientManager * pIngredientManager; // r29
    struct IngredientType * types[9]; // r1+0x8
    int tabIndex; // r28
    class InventoryItems * pInventory; // r28
    int allCount; // r0
    int i; // r27
    class InventoryItem * pItem; // r26
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r26
    int tab; // r0
}

// Range: 0x801AB998 -> 0x801AB9BC
class RefrigeratorTab * RefrigeratorManager::GetTab() {}

// Range: 0x801AB9BC -> 0x801AB9E4
int RefrigeratorManager::GetTabFromIng() {}

// Range: 0x801AB9E4 -> 0x801AB9FC
int RefrigeratorManager::GetTabIndexFromIngID() {
    // Local variables
    int tab; // r3
}

// Range: 0x801AB9FC -> 0x801ABA18
PlateManager::PlateManager() {}

// Range: 0x801ABA18 -> 0x801ABAD0
// this: r29
unsigned char PlateManager::AddIngredient(class RefrigeratorIngredient * pIng /* r30 */, int index /* r31 */) {}

// Range: 0x801ABAD0 -> 0x801ABB60
// this: r29
unsigned char PlateManager::RemoveIngredient(class RefrigeratorIngredient * pIng /* r30 */, int index /* r31 */) {}

// Range: 0x801ABB60 -> 0x801ABBD4
// this: r28
void PlateManager::ConsumeIngredients() {
    // Local variables
    int i; // r29
}

// Range: 0x801ABBD4 -> 0x801ABBDC
int PlateManager::GetMealCost() {}

// Range: 0x801ABBDC -> 0x801ABC38
unsigned char PlateManager::ReadyForMeal() {
    // Local variables
    int i; // r0
}

// Range: 0x801ABC38 -> 0x801ABC48
class RefrigeratorIngredient * PlateManager::GetItem() {}

// Range: 0x801ABC48 -> 0x801ABC7C
struct IngredientToken * PlateManager::GetIngredient() {
    // Local variables
    class RefrigeratorIngredient * pIng; // r0
}

// Range: 0x801ABC7C -> 0x801ABFAC
unsigned char PlateManager::configure_object(signed short foodObjectID /* r29 */, const struct IngredientToken * ing1 /* r26 */, const struct IngredientToken * ing2 /* r27 */, const struct IngredientToken * ing3 /* r31 */, const struct IngredientToken * ing4 /* r28 */) {
    // Local variables
    class IngredientManager * pIngredientManager; // r30
    class cXObject * pFoodObject; // r29
    struct IngredientToken * ingList[4]; // r1+0x10
    signed short ingTypeList[4]; // r1+0x8
    unsigned long i; // r0
    const struct FoodResult * pFoodResult; // r0
    int i; // r28
}

// Range: 0x801ABFAC -> 0x801AC010
void add_attr(class cXObject * pObj /* r29 */, int id /* r30 */, int value /* r31 */) {}

// Range: 0x801AC010 -> 0x801AC020
int INGTarget::SetRefrigeratorLevel(int level /* r0 */) {
    // Local variables
    int result; // r0

    // References
    // -> int m_sRefrigeratorLevel;
}

// Range: 0x801AC020 -> 0x801AC028
int INGTarget::GetMealMultiplier() {
    // References
    // -> int m_sNumberOfItemsToTransfer;
}

// Range: 0x801AC028 -> 0x801AC83C
// this: r30
INGTarget::INGTarget() {
    // Local variables
    unsigned long index; // r27

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> unsigned int MotiveShaderIDs[18];
    // -> class EGlobal _globals;
    // -> int m_sRefrigeratorLevel;
    // -> int m_sNumberOfItemsToTransfer;
    // -> static const char * const INGTargetName;
    // -> struct [anonymous] __vt__9INGTarget;
}

// Range: 0x801AC83C -> 0x801AC990
// this: r29
INGTarget::~INGTarget() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9INGTarget;
}

// Range: 0x801AC990 -> 0x801ACEA8
// this: r28
void INGTarget::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // Local variables
    class RefrigeratorIngredient * pIng; // r31
    int numCellsNeeded; // r1+0x10
    int shaderIndex; // r1+0xC
    int itemIndex; // r1+0x8
    unsigned int resID; // r31
    class RefrigeratorIngredient * pIng; // r0
    int tabIndex; // r0
    int iVal; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801ACEA8 -> 0x801AD3B0
// this: r28
char * INGTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
    int numItems; // r0
    char * countString; // r31
    char * unavString; // r31

    // References
    // -> int m_sRefrigeratorLevel;
}

// Range: 0x801AD3B0 -> 0x801AD87C
// this: r29
unsigned short * INGTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x468
    class RefrigeratorTab * tab; // r0
    class RefrigeratorIngredient * pRefIng; // r30
    signed short id; // r0
    char numStr[32]; // r1+0x48
    class BString2 temp; // r1+0x20
    class RefrigeratorIngredient * pRefIng; // r30
    class RefrigeratorIngredient * pRefIng; // r30
    signed short id; // r0
    char numStr[32]; // r1+0x28
    class BString2 temp; // r1+0x1C
    unsigned int index; // r1+0x18
    int scanresult; // r0
    class RefrigeratorIngredient * pRefIng; // r0
    unsigned int index; // r1+0x14
    int scanresult; // r0
    class RefrigeratorIngredient * pRefIng; // r0
    int num; // r0
    char numStr[1024]; // r1+0x68
    class BString2 tempStr; // r1+0x10
    unsigned short * pResultString; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AD87C -> 0x801AD998
// this: r30
void INGTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x801AD998 -> 0x801ADA58
// this: r27
char * INGTarget::GetCountList() {
    // Local variables
    int numItems; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class RefrigeratorIngredient * pIng; // r0
    int count; // r0
}

// Range: 0x801ADA58 -> 0x801ADB34
// this: r27
char * INGTarget::GetUnavailableList() {
    // Local variables
    int numItems; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class RefrigeratorIngredient * pIng; // r0
}

// Range: 0x801ADB34 -> 0x801ADB98
// this: r31
void INGTarget::UpdateCurrentItemInfo() {
    // Local variables
    class RefrigeratorIngredient * pRefIng; // r0
}

// Range: 0x801ADB98 -> 0x801ADD00
// this: r28
void INGTarget::InstallTabShaders(unsigned long tabIndex /* r29 */) {
    // Local variables
    class RefrigeratorTab * tab; // r0
    unsigned long i; // r30
    class RefrigeratorTab * tab; // r0

    // References
    // -> static unsigned long prevTabIndex;
}

// Range: 0x801ADD00 -> 0x801ADDA0
// this: r29
void INGTarget::InstallCurrentTabShaders() {
    // Local variables
    unsigned long i; // r30
    class RefrigeratorTab * tab; // r0
}

// Range: 0x801ADDA0 -> 0x801ADE30
// this: r29
void INGTarget::UpdatePlateShaders() {
    // Local variables
    int i; // r30
    class RefrigeratorIngredient * pRefIng; // r0
}

// Range: 0x801ADE30 -> 0x801ADF24
// this: r28
unsigned char INGTarget::EndDialog(unsigned char bAccepted /* r29 */) {}

// Range: 0x801ADF24 -> 0x801ADF34
class RefrigeratorIngredient * INGTarget::GetCurrentIngredient() {}

// Range: 0x801ADF34 -> 0x801ADF40
class RefrigeratorIngredient * INGTarget::GetCurrentMixIngredient() {}

// Range: 0x801ADF40 -> 0x801ADF7C
void INGTarget::onHelpDialogSelection() {}

// Range: 0x801ADF7C -> 0x801ADF90
void INGTarget::exit_ingredients_dialog_selection_callback() {}

// Range: 0x801ADF90 -> 0x801ADFE8
void INGTarget::ShowHelpDialog() {
    // Local variables
    const char * button_string_id; // r8

    // References
    // -> char * const ING_HelpBodyIDs[2];
}

// Range: 0x801ADFE8 -> 0x801AE150
// this: r30
void INGTarget::SetFlashVisibilityState() {
    // Local variables
    int i; // r31
    int i; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AE150 -> 0x801AE410
// this: r27
unsigned char AutoFood::AutonomousFoodSelection(int foodObjectId /* r28 */, int level /* r29 */) {
    // Local variables
    int useCount; // r31
    int foodTabs[9]; // r1+0x18
    int foodTabsCount; // r30
    int i; // r23
    int tabCount; // r0
    class RefrigeratorIngredient * pIng; // r0
    unsigned char found; // r22
    int j; // r21
    int i; // r21
    int j; // r22
    int k; // r0
    int temp; // r5
    int pickCount; // [invalid]
    struct IngredientToken * pIngredientTokens[4]; // r1+0x8
    int i; // r21
    int tab; // r22
    int tabCount; // r0
    int which; // r23
    int failsafe; // r20
    class RefrigeratorIngredient * pIng; // r19
    unsigned char bAccepted; // r0
    class InventoryItems * pInventory; // r19
    int i; // r20
}


