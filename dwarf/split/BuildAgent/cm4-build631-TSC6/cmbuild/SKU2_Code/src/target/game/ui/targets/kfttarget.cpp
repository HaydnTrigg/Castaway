/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\kfttarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801ED1C0 -> 0x801EFF98
*/
// Range: 0x801ED1C0 -> 0x801ED884
// this: r29
KFTTarget::KFTTarget(enum eKFTType mode /* r30 */, class UIObjectBase * parent /* r25 */) {
    // Local variables
    int i; // r27
    unsigned char found; // r4
    int i; // r25
    int i; // r25
    unsigned char fail; // r27
    struct KFTRecord * pRec; // r3

    // References
    // -> class EGlobal _globals;
    // -> static const char * const KFT_SND_SEL_PLAN;
    // -> static const char * const KFT_SND_OPEN;
    // -> static const char * const KFT_SND_CANCEL;
    // -> static const char * const KFT_SND_SEL;
    // -> static const char * const KFT_SND_ERR;
    // -> static const char * const KFT_SND_BROWSE;
    // -> struct KFTModeShader ModeShaderTable[34];
    // -> static const char * const KFT_TitleIcon;
    // -> static const char * const KFT_ObjDisp2D;
    // -> static const char * const KFT_PlanDescription;
    // -> static const char * const KFT_PlanName;
    // -> static const char * const KFT_ScreenTitle;
    // -> static const char * const KFT_Hover;
    // -> static const char * const KFT_ShadToItem;
    // -> static const char * const KFT_ShadMax;
    // -> static const char * const KFT_ScrollCB;
    // -> static const char * const KFT_Hi;
    // -> static const char * const KFT_HideCallback;
    // -> static const char * const KFT_ShowCallback;
    // -> static const char * const KFT_Pause;
    // -> static const char * const KFT_Cancel;
    // -> static const char * const KFT_Accept;
    // -> static const char * const KFT_Display3D;
    // -> static const char * const KFT_Circle;
    // -> static const char * const KFT_UnavInv;
    // -> static const char * const KFT_NewInv;
    // -> static const char * const KFT_TotInv;
    // -> static const char * const KFT_EnableBuildCallout;
    // -> static const char * const KFT_MotiveBoxCount;
    // -> static const char * const KFT_ResourceBoxCount;
    // -> static const char * const KFT_SelectedCell;
    // -> static const char * const KFTTargetName;
    // -> int m_lastIndex;
    // -> signed short m_planCrafted;
    // -> int m_lastMode;
    // -> enum eKFTType m_object;
    // -> struct [anonymous] __vt__9KFTTarget;
}

// Range: 0x801ED884 -> 0x801EDA30
// this: r29
KFTTarget::~KFTTarget() {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> int m_lastIndex;
    // -> struct [anonymous] __vt__9KFTTarget;
}

// Range: 0x801EDA30 -> 0x801EDB34
// this: r26
void KFTTarget::DeleteAllRecords() {
    // Local variables
    struct KFTRecord * const * it; // r28
    struct KFTRecord * pRec; // r27
    int i; // r29
}

// Range: 0x801EDB34 -> 0x801EDB44
void KFTTarget::EnterToolMode() {
    // References
    // -> static const char * const KFT_SND_BROWSE;
}

// Range: 0x801EDB44 -> 0x801EDB5C
void KFTTarget::ExitToolMode() {
    // References
    // -> static const char * const KFT_SND_BROWSE;
}

// Range: 0x801EDB5C -> 0x801EDB64
unsigned char KFTTarget::InToolMode() {}

// Range: 0x801EDB64 -> 0x801EE0B0
// this: r31
void KFTTarget::SetVariable(const char * szVar /* r26 */, const char * zValue /* r25 */) {
    // Local variables
    struct KFTRecord * pRec; // r28
    unsigned char playErrorSound; // r27
    class PlanManager * pPlanManager; // r0
    const struct Plan * pPlan; // r0
    unsigned char placementOk; // r26
    unsigned char found; // r4
    int i; // r25
    unsigned char hutOrWallSegment; // r25
    int i; // r26
    enum eKFTIMToolMode mode; // r25
    int testCell; // r1+0x14
    int numCellsNeeded; // r1+0x10
    int gridShaderIndex; // r1+0xC
    int itemIndex; // r1+0x8
    struct KFTRecord * pRec; // r25

    // References
    // -> class EGlobal _globals;
    // -> static const char * const KFT_ShadToItem;
    // -> static const char * const KFT_ShadMax;
    // -> static const char * const KFT_ScrollCB;
    // -> static const char * const KFT_Hover;
    // -> int m_lastIndex;
    // -> static const char * const KFT_Hi;
    // -> static const char * const KFT_HideCallback;
    // -> static const char * const KFT_ShowCallback;
    // -> static const char * const KFT_Pause;
    // -> static const char * const KFT_Cancel;
    // -> class GameData _gd;
    // -> struct HutData HutDataTable[39];
    // -> signed short m_planCrafted;
    // -> static const char * const KFT_Accept;
}

// Range: 0x801EE0B0 -> 0x801EE558
// this: r27
char * KFTTarget::GetVariable(const char * szVar /* r28 */) {
    // Local variables
    unsigned char bTestSize; // r31
    char * pResultString; // r30
    int resNum; // r1+0xC
    struct KFTRecord * pRec; // r0
    int ptsNum; // r1+0x8
    struct KFTRecord * pRec; // r0
    char cellStr[32]; // r1+0x18
    int resourceCount; // r29
    struct KFTRecord * pRec; // r0
    int i; // r0
    int count; // r29
    struct KFTRecord * pRec; // r0
    int i; // r0
    unsigned char rc; // r29
    struct KFTRecord * pRec; // r4
    int count; // r0
    int i; // r29
    char tackStr[8]; // r1+0x10
    char * unavString; // r29
    class EController * pCtrl; // r0
    unsigned char pressed; // r0

    // References
    // -> static const char * const KFT_Display3D;
    // -> class EControllerManager * _pCtrlMan;
    // -> static const char * const KFT_Circle;
    // -> static const char * const KFT_UnavInv;
    // -> static const char * const KFT_NewInv;
    // -> static const char * const KFT_TotInv;
    // -> static const char * const KFT_EnableBuildCallout;
    // -> static const char * const KFT_MotiveBoxCount;
    // -> static const char * const KFT_ResourceBoxCount;
    // -> static const char * const KFT_SelectedCell;
    // -> static const char * const KFT_exists;
}

// Range: 0x801EE558 -> 0x801EE974
// this: r28
unsigned short * KFTTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x48
    unsigned char found; // r4
    int i; // r29
    struct KFTRecord * pRec; // r0
    struct KFTRecord * pRec; // r0
    int resNum; // r1+0x20
    struct KFTRecord * pRec; // r0
    int resNum; // r1+0x1C
    struct KFTRecord * pRec; // r0
    int haveCount; // r29
    int needCount; // r30
    char numStr[32]; // r1+0x28
    class BString2 numStr2; // r1+0x18
    int resNum; // r1+0x14
    struct KFTRecord * pRec; // r0
    int resNum; // r1+0x10
    struct KFTRecord * pRec; // r0
    unsigned short * pResultString; // r29

    // References
    // -> static const char * const KFT_PlanDescription;
    // -> static const char * const KFT_PlanName;
    // -> struct PLNIconData PLNIconDataTable[15];
    // -> class EGlobal _globals;
    // -> static const char * const KFT_ScreenTitle;
}

// Range: 0x801EE974 -> 0x801EEA08
// this: r31
void KFTTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801EEA08 -> 0x801EEA90
// this: r30
unsigned char KFTTarget::end_dialog(unsigned char bAccepted /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801EEA90 -> 0x801EEC70
// this: r30
void KFTTarget::UpdatedSelectedItemInfo() {
    // Local variables
    struct KFTRecord * pRec; // r31
    int i; // r27
    unsigned int resid; // r29
    unsigned int resid; // r29
    unsigned int resid; // r26

    // References
    // -> static const char * const KFT_ObjDisp2D;
    // -> unsigned int MotiveShaderIDs[18];
}

// Range: 0x801EEC70 -> 0x801EED40
// this: r29
void KFTTarget::BlankAllGridItemShaders() {
    // Local variables
    int i; // r31
    unsigned int blank; // r30
}

// Range: 0x801EED40 -> 0x801EEDE4
// this: r31
void KFTTarget::VisibilityCallFunction() {}

// Range: 0x801EEDE4 -> 0x801EEE50
// this: r31
void KFTTarget::ExitBBHMode() {
    // Local variables
    class PlanManager * pPlanManager; // r0
    const struct Plan * pPlan; // r0

    // References
    // -> signed short m_planCrafted;
}

// Range: 0x801EEE50 -> 0x801EEF24
// this: r28
char * KFTTarget::GetUnavailableList() {
    // Local variables
    int size; // r31
    char * retData; // r30
    char * retInsert; // r31
    int i; // r29
    struct KFTRecord * pRec; // r4
}

// Range: 0x801EEF24 -> 0x801EEF88
// this: r30
struct KFTRecord * KFTTarget::GetCurrentItem() {}

// Range: 0x801EEF88 -> 0x801EF06C
unsigned char KFTTarget::IsCraftingRequirementsMet(struct KFTRecord * pRec /* r28 */) {
    // Local variables
    unsigned char satisfied; // r30
    int i; // r29
}

// Range: 0x801EF06C -> 0x801EF130
// this: r28
void KFTTarget::PopulateRecordsForMode(enum eKFTType type /* r29 */) {
    // Local variables
    const struct Plan * pPlanData; // r31
    class PlanManager * pPlanManager; // r30
}

// Range: 0x801EF130 -> 0x801EF534
// this: r30
unsigned char KFTTarget::AddRecord(const struct Plan * pPlanData /* r31 */) {
    // Local variables
    class BString2 temp; // r1+0x10
    class ELocString name; // r1+0xC
    int i; // r23
    struct KFTRecord * pRec; // r1+0x8
    char str[1028]; // r1+0x38
    class InventoryItems * pFamilyInventory; // r22
    struct InventoryTokens * pResource; // r21
    int count; // r0
    int level; // r21
    int count; // r0
    char numStr[32]; // r1+0x18

    // References
    // -> unsigned char cheatIgnoreResources;
    // -> class GameData _gd;
}

// Range: 0x801EF534 -> 0x801EF554
unsigned char KFTTarget::IsClothingType() {}

// Range: 0x801EF554 -> 0x801EF574
unsigned char KFTTarget::IsCraftingBenchType() {}

// Range: 0x801EF574 -> 0x801EF5D8
unsigned char KFTTarget::HasPlanType(enum eKFTType type /* r29 */, enum eKFTType benchType /* r30 */) {
    // Local variables
    unsigned char rc; // r31
    class PlanManager * pPlanManager; // r0
    const struct Plan * pPlan; // r0
}

// Range: 0x801EF5D8 -> 0x801EF624
// this: r31
KFTInteractorManager::KFTInteractorManager() {}

// Range: 0x801EF624 -> 0x801EF6B4
// this: r30
KFTInteractorManager::~KFTInteractorManager() {}

// Range: 0x801EF6B4 -> 0x801EF704
// this: r31
void KFTInteractorManager::Initialize() {}

// Range: 0x801EF704 -> 0x801EF77C
// this: r29
void KFTInteractorManager::EnterToolMode(struct KFTRecord * pRec /* r30 */, enum eKFTIMToolMode mode /* r31 */) {}

// Range: 0x801EF77C -> 0x801EF7E0
// this: r30
void KFTInteractorManager::ExitInteractionMode(unsigned char bPlaced /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801EF7E0 -> 0x801EF860
// this: r31
void KFTInteractorManager::Update() {
    // References
    // -> float _dt;
}

// Range: 0x801EF860 -> 0x801EF8D4
// this: r28
void KFTInteractorManager::UpdateBBHState(struct BBHPriceInfo * info /* r29 */, unsigned int shaderId /* r30 */, int mode /* r31 */) {}

// Range: 0x801EF8D4 -> 0x801EF9D4
// this: r28
void KFTInteractorManager::EnterPlaceMode() {
    // Local variables
    class ObjSelector * pObjSelector; // r29
    struct BBHPriceInfo priceInfo; // r1+0x8
    struct PlaceManipulatorParams params; // r1+0x18
}

// Range: 0x801EF9D4 -> 0x801EFB18
// this: r29
void KFTInteractorManager::EnterHutPlacementMode(int planId /* r30 */) {
    // Local variables
    struct BBHPriceInfo priceInfo; // r1+0x8
    struct HutPlaceManipulatorParams params; // r1+0x18
    int i; // r7

    // References
    // -> class EGlobal _globals;
    // -> struct HutData HutDataTable[39];
}

// Range: 0x801EFB18 -> 0x801EFB34
void KFTInteractorManager::static_PlaceManipulatorCallback() {
    // Local variables
    class KFTInteractorManager * pThis; // r0
}

// Range: 0x801EFB34 -> 0x801EFB50
void KFTInteractorManager::static_HutPlaceManipulatorCallback() {
    // Local variables
    class KFTInteractorManager * pThis; // r0
}

// Range: 0x801EFB50 -> 0x801EFD04
// this: r29
unsigned char KFTInteractorManager::PlaceModeCallback(const struct CallbackData * pData /* r30 */) {
    // Local variables
    const struct CallbackData * pPlaceData; // r0
    class cXObject * pObject; // r31
    class Behavior * beh; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x801EFD04 -> 0x801EFDCC
// this: r31
unsigned char KFTInteractorManager::HutPlaceModeCallback() {
    // References
    // -> class GameData _gd;
}

// Range: 0x801EFDCC -> 0x801EFF04
// this: r29
void KFTTarget::SetupCraftingCamera() {
    // Local variables
    class ESimsCam * pSimsCam; // r31
    class SimsCameraParameters * pParams; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x801EFF04 -> 0x801EFF98
// this: r30
void KFTTarget::RestoreCamera() {
    // Local variables
    class ESimsCam * pSimsCam; // r31
    class SimsCameraParameters * pParams; // r4

    // References
    // -> class GameData _gd;
}


