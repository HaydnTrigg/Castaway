/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\game_statemachine_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016A62C -> 0x8016A62C
*/
class StateMachineManager * s_pStateMachineManager; // size: 0x4, address: 0x805DBA28
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class StateMachineState * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class StateMachine * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x7C
class CreateASimBaseState : public StateMachineFlow {
    // Members
    unsigned char m_bWaitingForBG; // offset 0x75, size 0x1
    unsigned char m_bWaitingForExit; // offset 0x76, size 0x1
    unsigned char m_bAccepted; // offset 0x77, size 0x1
    unsigned char m_bCanceled; // offset 0x78, size 0x1
};
enum CheatType {
    CHEAT_TYPE_NONE = 0,
    CHEAT_TYPE_VERSION = 1,
    CHEAT_TYPE_BOOL = 2,
    CHEAT_TYPE_U8 = 3,
    CHEAT_TYPE_S8 = 4,
    CHEAT_TYPE_LOG_LEVEL = 5,
    CHEAT_TYPE_S16 = 6,
    CHEAT_TYPE_STRING = 7,
    CHEAT_TYPE_FLOAT = 8,
    CHEAT_TYPE_MAX = 9,
};
enum EDebugMenuButton {
    E_DMB_LEFT = 0,
    E_DMB_RIGHT = 1,
};
// total size: 0xC
class EDebugMenuItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EDebugMenuItem * m_pLast; // offset 0x4, size 0x4
    class EDebugMenuItem * m_pNext; // offset 0x8, size 0x4
};
// total size: 0x10
class ECheatDMI : public EDebugMenuItem {
    // Members
    class ECheatLookup * m_pVariable; // offset 0xC, size 0x4
};
// total size: 0x5C
class ECheatLookup {
    // Members
public:
    class ECheatLookup * pNextHash; // offset 0x0, size 0x4
private:
    int m_index; // offset 0x4, size 0x4
    char m_name[64]; // offset 0x8, size 0x40
    const char * m_pDescription; // offset 0x48, size 0x4
    enum CheatType m_type; // offset 0x4C, size 0x4
    void * m_pVar; // offset 0x50, size 0x4
    unsigned char m_bAddToMenu; // offset 0x54, size 0x1
    unsigned char m_bExtraNewLine; // offset 0x55, size 0x1
    class ECheatDMI * m_pDMI; // offset 0x58, size 0x4
};
// total size: 0x100
struct HashList {
    // Members
    class ECheatLookup * table[64]; // offset 0x0, size 0x100
};
// total size: 0x108
class ECheats {
    // Members
protected:
    struct HashList m_cheatLookup; // offset 0x0, size 0x100
    int m_nextCheatIndex; // offset 0x100, size 0x4
    unsigned char m_AlreadyReadCheatsFromFile; // offset 0x104, size 0x1
    unsigned char m_bCheatsOn; // offset 0x105, size 0x1
};
// total size: 0x1
class BG {
    // Static members
    static unsigned char s_bBGComplete; // size: 0x1
};
// total size: 0x48
class ESleep {
    // Members
protected:
    class ESemaphore m_semaphore; // offset 0x0, size 0x18
    struct OSAlarm m_alarm; // offset 0x18, size 0x30
};
// total size: 0xD44
class EFlashManager : public EResourceManager {};
enum eK2yboardMode {
    eK2yboardMode_EnteringText = 0,
    eK2yboardMode_Cancelling = 1,
    eK2yboardMode_Accepting = 2,
};
// total size: 0x10
struct KeyboardInputItem {
    // Members
    char * m_TitleLookup; // offset 0x0, size 0x4
    unsigned short * m_ScratchSpaceString; // offset 0x4, size 0x4
    unsigned short * m_DestinationString; // offset 0x8, size 0x4
    unsigned int m_MaxStringLength; // offset 0xC, size 0x4
};
enum K2Y_INPUT_MAXIMUM {
    K2Y_SIM_NAME = 0,
    K2Y_PET_NAME = 1,
    K2Y_GENERIC_NAME = 2,
};
// total size: 0xC
struct KeyboardWorkOrder {
    // Members
    char * m_TitleLookup; // offset 0x0, size 0x4
    const unsigned short * m_DefaultText; // offset 0x4, size 0x4
    unsigned short * m_DestinationString; // offset 0x8, size 0x4
};
// total size: 0x14C
class K2YTarget : public UIObjectBase, public CasListener {
    // Static members
    static unsigned short * m_currentEntryPtr; // size: 0x4

    // Members
    enum eK2yboardMode m_Mode; // offset 0xAC, size 0x4
    struct KeyboardInputItem * m_workItems; // offset 0xB0, size 0x4
    int m_numWorkItems; // offset 0xB4, size 0x4
    int m_currentWorkItem; // offset 0xB8, size 0x4
    unsigned char m_Initialized; // offset 0xBC, size 0x1
    unsigned char m_screenLoaded; // offset 0xBD, size 0x1
    char * m_RouterSetVariable; // offset 0xC0, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xC4, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xF4, size 0x50
    class EVec2 m_CursorPoint; // offset 0x144, size 0x8
};
// total size: 0xB4
class PRGTarget : public UIObjectBase {
    // Members
    unsigned char m_bPRGLoaded; // offset 0xA4, size 0x1
    unsigned int m_ControllerFilterID; // offset 0xA8, size 0x4
    int m_SkipStats; // offset 0xAC, size 0x4
    int m_SkipSections; // offset 0xB0, size 0x4
};
enum O2T_TopLevelState {
    eStateO2TargetAudio = 0,
    eStateO2TargetMusicSelection = 1,
    eStateO2TargetOptions = 2,
    eStateO2TargetCardinal = 3,
};
// total size: 0x344
class O2TTarget : public UIObjectBase {
    // Static members
    static signed char m_DelayInitiateFreeWill; // size: 0x1
    static unsigned char m_bFreeWillClassic; // size: 0x1
    static unsigned char m_bFreeWill; // size: 0x1
    static unsigned char m_bCameraRotate; // size: 0x1
    static unsigned char m_bCameraRotateDC; // size: 0x1
    static unsigned char m_bRumbleOn; // size: 0x1
    static signed char m_CurrentVoiceVolume; // size: 0x1
    static signed char m_CurrentAmbientVolume; // size: 0x1
    static signed char m_CurrentMusicVolume; // size: 0x1
    static signed char m_CurrentSFXVolume; // size: 0x1
    static class O2TTarget * m_pSingletonPtr; // size: 0x4

    // Members
    unsigned char m_O2TLoaded; // offset 0xA4, size 0x1
    enum O2T_TopLevelState m_CurrentTopLevelState; // offset 0xA8, size 0x4
    enum O2T_TopLevelState m_PreviousTopLevelState; // offset 0xAC, size 0x4
    unsigned char m_bSaveActive; // offset 0xB0, size 0x1
    int m_SaveGameState; // offset 0xB4, size 0x4
    int m_OptionsSate; // offset 0xB8, size 0x4
    int m_CurrentGameState; // offset 0xBC, size 0x4
    int m_CurrentOptionsState; // offset 0xC0, size 0x4
    class UIDialog m_QuitDialog; // offset 0xC4, size 0xA0
    class UIDialog m_SaveSettingsDialog; // offset 0x164, size 0xA0
    unsigned int m_ControllerFilterID; // offset 0x204, size 0x4
    class HelpDialog m_HelpDialog; // offset 0x208, size 0xA8
    unsigned char m_bAttemptingToQuit; // offset 0x2B0, size 0x1
    unsigned char m_bIsCancelling; // offset 0x2B1, size 0x1
    unsigned char m_bDialogActive; // offset 0x2B2, size 0x1
    class MSSTarget * m_pMSSTarget; // offset 0x2B4, size 0x4
public:
    unsigned char m_bSelfDestruct; // offset 0x2B8, size 0x1
private:
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x2BC, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x2EC, size 0x50
    class EVec2 m_CursorPoint; // offset 0x33C, size 0x8
};
enum ING_FoodCreationMode {
    kModeViewIngredients = 0,
    kModeMixIngredients = 1,
    kModeMixIngredientsGroup = 2,
};
// total size: 0x14
class PlateManager {
    // Members
    int m_PlateCost; // offset 0x0, size 0x4
    class RefrigeratorIngredient * m_Ingredients[4]; // offset 0x4, size 0x10
};
// total size: 0x1D8C
class INGTarget : public UIObjectBase, public HelpDialogCallback {
    // Static members
    static unsigned long ING_helpcount; // size: 0x4
    static char * const ING_HelpBodyIDs[]; // size: 0x0
    static int m_sNumberOfItemsToTransfer; // size: 0x4
    static int m_sRefrigeratorLevel; // size: 0x4

    // Members
protected:
    class UIStringGenerator m_GridShaderTable; // offset 0xA8, size 0x8
    class UIStringGenerator m_MixShaderTable; // offset 0xB0, size 0x8
    class UIStringGenerator m_TabShaderTable; // offset 0xB8, size 0x8
    class UIStringGenerator m_MotiveShaderTable; // offset 0xC0, size 0x8
    enum ING_FoodCreationMode m_DialogMode; // offset 0xC8, size 0x4
    int m_FoodObjectID; // offset 0xCC, size 0x4
    unsigned int m_filterId; // offset 0xD0, size 0x4
    class HelpDialog m_HelpDialog; // offset 0xD4, size 0xA8
    unsigned long m_HelpIndex; // offset 0x17C, size 0x4
    class RefrigeratorManager m_FridgeManager; // offset 0x180, size 0x1B48
    class PlateManager m_PlateManager; // offset 0x1CC8, size 0x14
    unsigned long m_CurrentTabIndex; // offset 0x1CDC, size 0x4
    unsigned long m_CurrentCellIndex; // offset 0x1CE0, size 0x4
    unsigned long m_CurrentMixCellIndex; // offset 0x1CE4, size 0x4
    int m_RecipeState; // offset 0x1CE8, size 0x4
    class UIObjectBase * m_pRCPTarget; // offset 0x1CEC, size 0x4
    float m_nDialogTimer; // offset 0x1CF0, size 0x4
    unsigned char m_timeoutOccured; // offset 0x1CF4, size 0x1
    int m_CURSecondaryRefId; // offset 0x1CF8, size 0x4
    unsigned char m_loadPending; // offset 0x1CFC, size 0x1
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x1D00, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x1D30, size 0x50
    class EVec2 m_CursorPoint; // offset 0x1D80, size 0x8
    int m_FCIRowIndex; // offset 0x1D88, size 0x4
};
// total size: 0x4
class ShopItem {
    // Members
    class UICatalogItemBase * m_pItem; // offset 0x0, size 0x4
};
// total size: 0x8
class SelectorFilterFunctor {
    // Members
public:
    signed short m_functionFlags; // offset 0x0, size 0x2
    signed short m_maximumAspiration; // offset 0x2, size 0x2
    signed short m_buildModeType; // offset 0x4, size 0x2
    unsigned char m_allowFlagZeroObjects; // offset 0x6, size 0x1
    unsigned char m_forceCorrectBMT; // offset 0x7, size 0x1
};
// total size: 0x8
class MSOItemManager {
    // Members
    class ShopItem * m_StoreItems; // offset 0x0, size 0x4
    unsigned int m_ShopItemCount; // offset 0x4, size 0x4
};
// total size: 0x1A8
class MSOTarget : public UIObjectBase, public HelpDialogCallback {
    // Static members
    static int m_ReturnPoints; // size: 0x4
    static signed short m_ReturnTokenID; // size: 0x2
    static int m_ReturnGUID; // size: 0x4
    static int m_ShopLevel; // size: 0x4

    // Members
protected:
    class UIStringGenerator m_GridShaderTable; // offset 0xA8, size 0x8
    class UIStringGenerator m_MotiveShaderTable; // offset 0xB0, size 0x8
    unsigned int m_ControllerFilterID0; // offset 0xB8, size 0x4
    class HelpDialog m_HelpDialog; // offset 0xBC, size 0xA8
    unsigned long m_HelpIndex; // offset 0x164, size 0x4
    unsigned long m_CurrentCellIndex; // offset 0x168, size 0x4
    unsigned char m_bInitialized; // offset 0x16C, size 0x1
    unsigned char m_BoughtItem; // offset 0x16D, size 0x1
    unsigned char m_Use3DShader; // offset 0x16E, size 0x1
    unsigned char m_ClosedDialog; // offset 0x16F, size 0x1
    unsigned char m_AllowMultiplePurchases; // offset 0x170, size 0x1
    unsigned char m_ReturnTokensToSimulator; // offset 0x171, size 0x1
    int m_TokenPurchaseFactor; // offset 0x174, size 0x4
    class MSOItemManager m_ItemManager; // offset 0x178, size 0x8
    int m_MotiveIDs[4]; // offset 0x180, size 0x10
    int m_MotiveValues[4]; // offset 0x190, size 0x10
    class UICatalogItemBase * m_LastBoughtItem; // offset 0x1A0, size 0x4
    int m_PreviousMusicMode; // offset 0x1A4, size 0x4
};
enum PPCSelectionState {
    PPC_ADJUSTING = 0,
    PPC_CONVERT = 1,
    PPC_DONE = 2,
    PPC_COUNT = 3,
};
// total size: 0x4
class NumericalInputSpinner {
    // Members
    int m_framesPressed; // offset 0x0, size 0x4
};
enum PPCArrowState {
    PPC_ARROW_DISABLED = 0,
    PPC_ARROW_READY = 1,
    PPC_ARROW_HIT = 2,
};
// total size: 0xD4
class PPCTarget : public UIObjectBase {
    // Members
    class UIReflow m_reflow; // offset 0xA4, size 0x18
    unsigned char m_PPCLoaded; // offset 0xBC, size 0x1
    unsigned char m_PPCActive; // offset 0xBD, size 0x1
    unsigned char m_PPCActiveNext; // offset 0xBE, size 0x1
    unsigned char m_tweenActive; // offset 0xBF, size 0x1
    unsigned char m_PPCAllowCancel; // offset 0xC0, size 0x1
    unsigned int m_ControllerFilterID; // offset 0xC4, size 0x4
    int m_PetPointsToConvert; // offset 0xC8, size 0x4
    enum PPCSelectionState m_SelectionState; // offset 0xCC, size 0x4
    class NumericalInputSpinner m_InputSpinner; // offset 0xD0, size 0x4
};
enum SVQMode {
    SVQ_QuitToMainMenu = 0,
    SVQ_QuitToNeighborhoodScreen = 1,
};
enum SQVDialogState {
    SVQState_NonPlazaRoot = 0,
    SVQState_PlazaRoot = 1,
    SVQState_NeighborhoodRoot = 2,
    SVQState_QuitConfirm = 3,
    SVQState_End = 4,
};
// total size: 0x158
class SVQTarget : public UIObjectBase {
    // Members
    unsigned char m_bSVQLoaded; // offset 0xA4, size 0x1
    enum SVQMode m_Mode; // offset 0xA8, size 0x4
    enum SQVDialogState m_BackoutState; // offset 0xAC, size 0x4
    unsigned int m_ControllerFilterID; // offset 0xB0, size 0x4
    unsigned int m_DialogIconID; // offset 0xB4, size 0x4
    class UIDialog m_QuitDialog; // offset 0xB8, size 0xA0
};
enum KNLSelectionState {
    KNL_ADJUSTING = 0,
    KNL_BOARD = 1,
    KNL_DONE = 2,
    KNL_COUNT = 3,
};
enum KNLArrowState {
    KNL_ARROW_DISABLED = 0,
    KNL_ARROW_READY = 1,
    KNL_ARROW_HIT = 2,
};
// total size: 0xD8
class KNLTarget : public UIObjectBase {
    // Static members
    static int m_sUserEnteredDays; // size: 0x4
    static int m_sCostPerKennelDay; // size: 0x4
    static int m_sMaximumKennelDays; // size: 0x4

    // Members
    class UIReflow m_reflow; // offset 0xA4, size 0x18
    unsigned char m_KNLLoaded; // offset 0xBC, size 0x1
    unsigned char m_KNLActive; // offset 0xBD, size 0x1
    unsigned char m_KNLActiveNext; // offset 0xBE, size 0x1
    unsigned char m_tweenActive; // offset 0xBF, size 0x1
    int m_lastUpdateFrame; // offset 0xC0, size 0x4
    int m_framesPressed; // offset 0xC4, size 0x4
    unsigned int m_ControllerFilterID; // offset 0xC8, size 0x4
    int m_DaysToDitchPet; // offset 0xCC, size 0x4
    enum KNLSelectionState m_SelectionState; // offset 0xD0, size 0x4
    class NumericalInputSpinner m_InputSpinner; // offset 0xD4, size 0x4
};
// total size: 0x1D4
class KBXTarget : public UIObjectBase, public HelpDialogCallback {
    // Static members
    static class Neighbor * m_spNeighbor; // size: 0x4

    // Members
protected:
    class UIDialog m_UIDialog; // offset 0xA8, size 0xA0
    unsigned int m_ControllerFilterID0; // offset 0x148, size 0x4
    unsigned char m_bInitialized; // offset 0x14C, size 0x1
    class K2YTarget * m_pK2YTarget; // offset 0x150, size 0x4
    unsigned short m_InputBufferFirstName[32]; // offset 0x154, size 0x40
    unsigned short m_InputBufferLastName[32]; // offset 0x194, size 0x40
};
enum ePLNLaunch {
    ePLNLaunch_shelterPlans = 0,
    ePLNLaunch_clothingPlans = 1,
    ePLNLaunch_toolsPlans = 2,
    ePLNLaunch_wallPlans = 3,
    ePLNLaunch_doorPlans = 4,
    ePLNLaunch_windowPlans = 5,
    ePLNLaunch_roofPlans = 6,
    ePLNLaunch_seatingPlans = 7,
    ePLNLaunch_bedPlans = 8,
    ePLNLaunch_lightingPlans = 9,
    ePLNLaunch_surfacePlans = 10,
    ePLNLaunch_plumbingPlans = 11,
    ePLNLaunch_firepitPlans = 12,
    ePLNLaunch_leisurePlans = 13,
    ePLNLaunch_otherPlans = 14,
    ePLNLaunch_cardinal = 15,
};
// total size: 0x18
struct PLNIconData {
    // Members
    int shaderId; // offset 0x0, size 0x4
    const char * dbStringName; // offset 0x4, size 0x4
    const char * interfaceShaderName; // offset 0x8, size 0x4
    const char * interfaceUsableName; // offset 0xC, size 0x4
    enum ePLNLaunch launch; // offset 0x10, size 0x4
    enum eKFTType kftType; // offset 0x14, size 0x4
};
// total size: 0x13C
class PLNTarget : public UIObjectBase {
    // Static members
    static enum eKFTType m_object; // size: 0x4
    static int PLNLastIndex; // size: 0x4
    static struct PLNIconData PLNIconDataTable[15]; // size: 0x168

    // Members
    unsigned int m_filterId; // offset 0xA4, size 0x4
    int m_currentCell; // offset 0xA8, size 0x4
    class KFTTarget * m_pKFTTarget; // offset 0xAC, size 0x4
    int m_notifyCompleted; // offset 0xB0, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xB4, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xE4, size 0x50
    class EVec2 m_CursorPoint; // offset 0x134, size 0x8
};
enum eCLPLaunch {
    eCLPLaunch_hats = 0,
    eCLPLaunch_shirts = 1,
    eCLPLaunch_pants = 2,
    eCLPLaunch_shoes = 3,
    eCLPLaunch_arm = 4,
    eCLPLaunch_waist = 5,
    eCLPLaunch_jewelry = 6,
    eCLPLaunch_cardinal = 7,
};
// total size: 0x10
struct PLNIconData {
    // Members
    int shaderId; // offset 0x0, size 0x4
    const char * dbStringName; // offset 0x4, size 0x4
    const char * interfaceShaderName; // offset 0x8, size 0x4
    enum eCLPLaunch launch; // offset 0xC, size 0x4
};
// total size: 0x13C
class CLPTarget : public UIObjectBase {
    // Static members
    static int CLPLastIndex; // size: 0x4
    static struct PLNIconData CLPIconDataTable[7]; // size: 0x70

    // Members
    unsigned int m_filterId; // offset 0xA4, size 0x4
    int m_currentCell; // offset 0xA8, size 0x4
    class KFTTarget * m_pKFTTarget; // offset 0xAC, size 0x4
    int m_notifyCompleted; // offset 0xB0, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xB4, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xE4, size 0x50
    class EVec2 m_CursorPoint; // offset 0x134, size 0x8
};
// total size: 0x13C
class COLTarget : public UIObjectBase {
    // Static members
    static int m_treasure_map_shaders[9]; // size: 0x24
    static int m_heiroglyphics_shaders[9]; // size: 0x24

    // Members
    class UIStringGenerator m_shaderNameTable; // offset 0xA4, size 0x8
    int m_tab; // offset 0xAC, size 0x4
    unsigned int m_filterId; // offset 0xB0, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xB4, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xE4, size 0x50
    class EVec2 m_CursorPoint; // offset 0x134, size 0x8
};
// total size: 0x14
struct TabPage {
    // Members
    int goalState[4]; // offset 0x0, size 0x10
    unsigned char unlocked; // offset 0x10, size 0x1
};
// total size: 0x54
struct BookTab {
    // Members
    int tabShaderId; // offset 0x0, size 0x4
    int tabShaderHiId; // offset 0x4, size 0x4
    int tabShaderDiId; // offset 0x8, size 0x4
    struct TabPage pages[3]; // offset 0xC, size 0x3C
    int currentPage; // offset 0x48, size 0x4
    int totalPagesUnlocked; // offset 0x4C, size 0x4
    unsigned char unlocked; // offset 0x50, size 0x1
};
// total size: 0x164
class GOLTarget : public UIObjectBase {
    // Members
    class UIStringGenerator m_tabIconTable; // offset 0xA4, size 0x8
    class UIStringGenerator m_goalTextTable; // offset 0xAC, size 0x8
    class UIStringGenerator m_checkmarkShaderTable; // offset 0xB4, size 0x8
    int m_currentTab; // offset 0xBC, size 0x4
    struct BookTab * m_tabs[6]; // offset 0xC0, size 0x18
    unsigned int m_filterId; // offset 0xD8, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xDC, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x10C, size 0x50
    class EVec2 m_CursorPoint; // offset 0x15C, size 0x8
};
// total size: 0x1C
class ERBinary : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    void * m_pData; // offset 0x14, size 0x4
    unsigned int m_dataSize; // offset 0x18, size 0x4
};
// total size: 0x15C
class InLevelBaseState : public StateMachineFlow {
    // Members
protected:
    enum InteractorType m_InteractorType; // offset 0x78, size 0x4
    class UIDialog m_UIDialog; // offset 0x7C, size 0xA0
    class PRGTarget * m_pPRGTarget; // offset 0x11C, size 0x4
    class O2TTarget * m_pO2TTarget; // offset 0x120, size 0x4
    class INGTarget * m_pINGTarget; // offset 0x124, size 0x4
    class MSOTarget * m_pMSOTarget; // offset 0x128, size 0x4
    class NV5Target * m_pNV5Target; // offset 0x12C, size 0x4
    class PPCTarget * m_pPPCTarget; // offset 0x130, size 0x4
    class SVQTarget * m_pSVQTarget; // offset 0x134, size 0x4
    class KNLTarget * m_pKNLTarget; // offset 0x138, size 0x4
    class KBXTarget * m_pKBXTarget; // offset 0x13C, size 0x4
    class PLNTarget * m_pPLNTarget; // offset 0x140, size 0x4
    class CLPTarget * m_pCLPTarget; // offset 0x144, size 0x4
    class COLTarget * m_pCOLTarget; // offset 0x148, size 0x4
    class GOLTarget * m_pGOLTarget; // offset 0x14C, size 0x4
    unsigned int m_nPreloadingDataID; // offset 0x150, size 0x4
    class ERBinary * m_pRandomPetsBin; // offset 0x154, size 0x4
    unsigned char m_bPauseMenuActive; // offset 0x158, size 0x1
    unsigned char m_bResumeSimulation; // offset 0x159, size 0x1
};
enum MMU_MODE {
    MAIN_SCREEN = 0,
    NGH_SCREEN = 1,
    LOT_SCREEN = 2,
};
enum MMU_MAIN_SCREEN_CHOICE {
    MMU_CONTINUE_EXISTING_NEIGHBORHOOD = 0,
    MMU_CREDIT_CHOICE = 1,
    MMU_CREATE_NEW_NEIGHBORHOOD = 2,
    MMU_MAIN_SCREEN_CHOICE_CARDINAL = 3,
};
enum MMU_MAIN_MENU_MODE {
    MMU_TOP_LEVEL = 0,
    MMU_CREDITS = 1,
    MMU_KEYBOARD = 2,
    MMU_MAIN_MENU_CARDINAL = 3,
};
// total size: 0x1C
struct RandomLotInfo {
    // Members
    int nLotNumber; // offset 0x0, size 0x4
    class EVec3 cameraEye; // offset 0x4, size 0xC
    class EVec3 cameraTarget; // offset 0x10, size 0xC
};
// total size: 0x90
class CHouseSelectMap {
    // Static members
    static struct RandomLotInfo s_lots[]; // size: 0x0
    static float s_fNextLotBaseWaitTime; // size: 0x4
    static float kFadeInTime; // size: 0x4
    static float kFadeOutTime; // size: 0x4

    // Members
    class ESimsCam * m_pCamera; // offset 0x0, size 0x4
    int m_nNumChooseableLots; // offset 0x4, size 0x4
    int m_nRandomLotIndex; // offset 0x8, size 0x4
    class ERLevel * m_pWorldBg; // offset 0xC, size 0x4
    unsigned int m_nLevelID; // offset 0x10, size 0x4
    class GameTime m_currentTime; // offset 0x14, size 0x4
    class ERModel * m_pWorldSceneryModel; // offset 0x18, size 0x4
    class ERAnim * m_pWorldSceneryAnim; // offset 0x1C, size 0x4
    class ERCharacter * m_pWorldSceneryChar; // offset 0x20, size 0x4
    class ISimInstance * m_pWorldSceneryInstance; // offset 0x24, size 0x4
    class ISimsObjectModel * m_pWorldSimObjModel; // offset 0x28, size 0x4
    struct ObjAnimDef m_worldSceneryObjAnimDef; // offset 0x2C, size 0x20
    class EAnimController * m_pAC; // offset 0x4C, size 0x4
    float m_timeInHours; // offset 0x50, size 0x4
    float m_timeScale; // offset 0x54, size 0x4
    float m_dt; // offset 0x58, size 0x4
    unsigned int m_nLotDatasetID; // offset 0x5C, size 0x4
    unsigned char m_bAnimateEnable; // offset 0x60, size 0x1
    unsigned char m_bWaitingForWorldLoad; // offset 0x61, size 0x1
    unsigned char m_bWaitingForDatasetLoad; // offset 0x62, size 0x1
    int m_nNextLoadState; // offset 0x64, size 0x4
    float m_fNextLotWaitTime; // offset 0x68, size 0x4
    int m_nNextRandomLotIndex; // offset 0x6C, size 0x4
    class ERLevel * m_pNextWorldBg; // offset 0x70, size 0x4
    unsigned int m_nNextLevelID; // offset 0x74, size 0x4
    unsigned int m_nNextLotDatasetID; // offset 0x78, size 0x4
    class Fader m_fader; // offset 0x7C, size 0x10
    unsigned char m_bWaitingForNextWorldLoad; // offset 0x8C, size 0x1
    unsigned char m_bWaitingForNextDatasetLoad; // offset 0x8D, size 0x1
    unsigned char m_bNextLotCountdownPaused; // offset 0x8E, size 0x1
};
// total size: 0xA8
class MMSTarget : public UIObjectBase {
    // Members
    class CHouseSelectMap * m_BackgroundLot; // offset 0xA4, size 0x4
};
// total size: 0x200
class MMUTarget : public UIObjectBase {
    // Members
    unsigned char m_bInitialized; // offset 0xA4, size 0x1
    enum MMU_MODE m_currentMode; // offset 0xA8, size 0x4
    enum MMU_MODE m_previousMode; // offset 0xAC, size 0x4
    unsigned int m_lotSelected; // offset 0xB0, size 0x4
    unsigned int m_nghSelected; // offset 0xB4, size 0x4
    enum MMU_MAIN_SCREEN_CHOICE m_CurrentTopLevelChoice; // offset 0xB8, size 0x4
    enum MMU_MAIN_SCREEN_CHOICE m_PreviousTopLevelChoice; // offset 0xBC, size 0x4
    class CRDTarget * m_pCRDTarget; // offset 0xC0, size 0x4
    class UIDialog m_Dialog; // offset 0xC4, size 0xA0
    class ERFont * m_pFont; // offset 0x164, size 0x4
    enum MMU_MAIN_MENU_MODE m_MainMenuMode; // offset 0x168, size 0x4
    class K2YTarget * m_pK2YTarget; // offset 0x16C, size 0x4
    unsigned char m_UseAlternateIcon[3]; // offset 0x170, size 0x3
    class MMSTarget * m_pMMSTarget; // offset 0x174, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x178, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x1A8, size 0x50
    class EVec2 m_CursorPoint; // offset 0x1F8, size 0x8
};
// total size: 0xB4
class EALTarget : public UIObjectBase, public HelpDialogCallback {
    // Members
protected:
    unsigned int m_ControllerFilterID0; // offset 0xA8, size 0x4
    unsigned char m_bInitialized; // offset 0xAC, size 0x1
    unsigned char m_bDone; // offset 0xAD, size 0x1
    int m_buttonCombo; // offset 0xB0, size 0x4
};
// total size: 0x18
struct PAZItemInfo {
    // Members
    int mItemID; // offset 0x0, size 0x4
    const char * mFlashShaderName; // offset 0x4, size 0x4
    unsigned int mShaderId; // offset 0x8, size 0x4
    const char * mTabNameID; // offset 0xC, size 0x4
    int mAcceptID; // offset 0x10, size 0x4
    int mCancelID; // offset 0x14, size 0x4
};
// total size: 0x140
class PAZTarget : public UIObjectBase {
    // Members
    unsigned char m_bPAZLoaded; // offset 0xA4, size 0x1
    const struct PAZItemInfo * m_pItemInfoArray; // offset 0xA8, size 0x4
    unsigned int m_ControllerFilterID; // offset 0xAC, size 0x4
    unsigned int m_SelectedItem; // offset 0xB0, size 0x4
    unsigned char m_launchFromLiveMode; // offset 0xB4, size 0x1
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xB8, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xE8, size 0x50
    class EVec2 m_CursorPoint; // offset 0x138, size 0x8
};
static int goingToCasStage; // size: 0x4, address: 0x805DBA2C
enum eMUResult {
    eMUResult_None = 0,
    eMUResult_Success = 1,
    eMUResult_Failed = 2,
    eMUResult_Quit = 3,
};
// total size: 0x8
class PetsHomeButton {
    // Members
    class TRCHomeButton * pHomeButton; // offset 0x0, size 0x4
    unsigned char m_bOldDPDState; // offset 0x4, size 0x1
};
enum HomeInputType {
    INPUT_KPAD = 0,
    INPUT_WPAD = 1,
};
enum HomeMenuState {
    MENU_NOTVISIBLE = 0,
    MENU_VISIBLE = 1,
};
// total size: 0x8
struct Vec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
struct MEMAllocatorFunc {
    // Members
    void * (* pfAlloc)(struct MEMAllocator *, unsigned long); // offset 0x0, size 0x4
    void (* pfFree)(struct MEMAllocator *, void *); // offset 0x4, size 0x4
};
// total size: 0x10
struct MEMAllocator {
    // Members
    const struct MEMAllocatorFunc * pFunc; // offset 0x0, size 0x4
    void * pHeap; // offset 0x4, size 0x4
    unsigned long heapParam1; // offset 0x8, size 0x4
    unsigned long heapParam2; // offset 0xC, size 0x4
};
// total size: 0x40
struct HBMDataInfo {
    // Members
    void * layoutBuf; // offset 0x0, size 0x4
    void * spkSeBuf; // offset 0x4, size 0x4
    void * msgBuf; // offset 0x8, size 0x4
    void * configBuf; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    int (* sound_callback)(int, int); // offset 0x14, size 0x4
    int backFlag; // offset 0x18, size 0x4
    int region; // offset 0x1C, size 0x4
    int cursor; // offset 0x20, size 0x4
    int messageFlag; // offset 0x24, size 0x4
    unsigned long configBufSize; // offset 0x28, size 0x4
    unsigned long memSize; // offset 0x2C, size 0x4
    float frameDelta; // offset 0x30, size 0x4
    struct Vec2 adjust; // offset 0x34, size 0x8
    struct MEMAllocator * pAllocator; // offset 0x3C, size 0x4
};
enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
// total size: 0x24
struct TPLHeader {
    // Members
    unsigned short height; // offset 0x0, size 0x2
    unsigned short width; // offset 0x2, size 0x2
    unsigned long format; // offset 0x4, size 0x4
    char * data; // offset 0x8, size 0x4
    enum _GXTexWrapMode wrapS; // offset 0xC, size 0x4
    enum _GXTexWrapMode wrapT; // offset 0x10, size 0x4
    enum _GXTexFilter minFilter; // offset 0x14, size 0x4
    enum _GXTexFilter magFilter; // offset 0x18, size 0x4
    float LODBias; // offset 0x1C, size 0x4
    unsigned char edgeLODEnable; // offset 0x20, size 0x1
    unsigned char minLOD; // offset 0x21, size 0x1
    unsigned char maxLOD; // offset 0x22, size 0x1
    unsigned char unpacked; // offset 0x23, size 0x1
};
enum _GXTlutFmt {
    GX_TL_IA8 = 0,
    GX_TL_RGB565 = 1,
    GX_TL_RGB5A3 = 2,
    GX_MAX_TLUTFMT = 3,
};
// total size: 0xC
struct TPLClutHeader {
    // Members
    unsigned short numEntries; // offset 0x0, size 0x2
    unsigned char unpacked; // offset 0x2, size 0x1
    unsigned char pad8; // offset 0x3, size 0x1
    enum _GXTlutFmt format; // offset 0x4, size 0x4
    char * data; // offset 0x8, size 0x4
};
// total size: 0x8
struct TPLDescriptor {
    // Members
    struct TPLHeader * textureHeader; // offset 0x0, size 0x4
    struct TPLClutHeader * CLUTHeader; // offset 0x4, size 0x4
};
// total size: 0xC
struct TPLPalette {
    // Members
    unsigned long versionNumber; // offset 0x0, size 0x4
    unsigned long numDescriptors; // offset 0x4, size 0x4
    struct TPLDescriptor * descriptorArray; // offset 0x8, size 0x4
};
// total size: 0xC
struct Vec {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x1C
struct /* @class$587game_statemachine_unity_cpp */ {
    // Members
    struct Vec2 stick; // offset 0x0, size 0x8
    struct Vec acc; // offset 0x8, size 0xC
    float acc_value; // offset 0x14, size 0x4
    float acc_speed; // offset 0x18, size 0x4
};
// total size: 0x24
struct /* @class$588game_statemachine_unity_cpp */ {
    // Members
    unsigned long hold; // offset 0x0, size 0x4
    unsigned long trig; // offset 0x4, size 0x4
    unsigned long release; // offset 0x8, size 0x4
    struct Vec2 lstick; // offset 0xC, size 0x8
    struct Vec2 rstick; // offset 0x14, size 0x8
    float ltrigger; // offset 0x1C, size 0x4
    float rtrigger; // offset 0x20, size 0x4
};
union KPADEXStatus {
    // total size: 0x1C
    struct /* @class$587game_statemachine_unity_cpp */ {
        // Members
        struct Vec2 stick; // offset 0x0, size 0x8
        struct Vec acc; // offset 0x8, size 0xC
        float acc_value; // offset 0x14, size 0x4
        float acc_speed; // offset 0x18, size 0x4
    } fs; // offset 0x0, size 0x1C
    // total size: 0x24
    struct /* @class$588game_statemachine_unity_cpp */ {
        // Members
        unsigned long hold; // offset 0x0, size 0x4
        unsigned long trig; // offset 0x4, size 0x4
        unsigned long release; // offset 0x8, size 0x4
        struct Vec2 lstick; // offset 0xC, size 0x8
        struct Vec2 rstick; // offset 0x14, size 0x8
        float ltrigger; // offset 0x1C, size 0x4
        float rtrigger; // offset 0x20, size 0x4
    } cl; // offset 0x0, size 0x24
};
// total size: 0x84
struct KPADStatus {
    // Members
    unsigned long hold; // offset 0x0, size 0x4
    unsigned long trig; // offset 0x4, size 0x4
    unsigned long release; // offset 0x8, size 0x4
    struct Vec acc; // offset 0xC, size 0xC
    float acc_value; // offset 0x18, size 0x4
    float acc_speed; // offset 0x1C, size 0x4
    struct Vec2 pos; // offset 0x20, size 0x8
    struct Vec2 vec; // offset 0x28, size 0x8
    float speed; // offset 0x30, size 0x4
    struct Vec2 horizon; // offset 0x34, size 0x8
    struct Vec2 hori_vec; // offset 0x3C, size 0x8
    float hori_speed; // offset 0x44, size 0x4
    float dist; // offset 0x48, size 0x4
    float dist_vec; // offset 0x4C, size 0x4
    float dist_speed; // offset 0x50, size 0x4
    struct Vec2 acc_vertical; // offset 0x54, size 0x8
    unsigned char dev_type; // offset 0x5C, size 0x1
    signed char wpad_err; // offset 0x5D, size 0x1
    signed char dpd_valid_fg; // offset 0x5E, size 0x1
    unsigned char data_format; // offset 0x5F, size 0x1
    union KPADEXStatus ex_status; // offset 0x60, size 0x24
};
// total size: 0x10
struct HBMKPadData {
    // Members
    struct KPADStatus * kpad; // offset 0x0, size 0x4
    struct Vec2 pos; // offset 0x4, size 0x8
    unsigned long use_devtype; // offset 0xC, size 0x4
};
// total size: 0x40
struct HBMControllerData {
    // Members
    struct HBMKPadData wiiCon[4]; // offset 0x0, size 0x40
};
enum FadeState {
    FADE_IN = 0,
    FADE_OUT = 1,
    FADE_RESET = 2,
    FADE_NONE = 3,
};
enum State {
    OFF = 0,
    ON = 1,
};
enum IconState {
    eAlphaInIcon = 0,
    ePauseIcon = 1,
    eAlphaOutIcon = 2,
};
enum HBMSelectBtnNum {
    HBM_SELECT_NULL = -1,
    HBM_SELECT_HOMEBTN = 0,
    HBM_SELECT_BTN1 = 1,
    HBM_SELECT_BTN2 = 2,
    HBM_SELECT_BTN3 = 3,
    HBM_SELECT_BTN4 = 4,
    HBM_SELECT_MAX = 5,
};
// total size: 0x8
struct _GXVtxDescList {
    // Members
    enum _GXAttr attr; // offset 0x0, size 0x4
    enum _GXAttrType type; // offset 0x4, size 0x4
};
enum _GXCompCnt {
    GX_POS_XY = 0,
    GX_POS_XYZ = 1,
    GX_NRM_XYZ = 0,
    GX_NRM_NBT = 1,
    GX_NRM_NBT3 = 2,
    GX_CLR_RGB = 0,
    GX_CLR_RGBA = 1,
    GX_TEX_S = 0,
    GX_TEX_ST = 1,
};
enum _GXCompType {
    GX_U8 = 0,
    GX_S8 = 1,
    GX_U16 = 2,
    GX_S16 = 3,
    GX_F32 = 4,
    GX_RGB565 = 0,
    GX_RGB8 = 1,
    GX_RGBX8 = 2,
    GX_RGBA4 = 3,
    GX_RGBA6 = 4,
    GX_RGBA8 = 5,
};
// total size: 0x10
struct _GXVtxAttrFmtList {
    // Members
    enum _GXAttr attr; // offset 0x0, size 0x4
    enum _GXCompCnt cnt; // offset 0x4, size 0x4
    enum _GXCompType type; // offset 0x8, size 0x4
    unsigned char frac; // offset 0xC, size 0x1
};
// total size: 0x50
struct PadControl {
    // Members
    struct Vec2 vAccelHistory[5]; // offset 0x0, size 0x28
    struct Vec2 vPrevAccel; // offset 0x28, size 0x8
    struct Vec2 vDPDHistory[2]; // offset 0x30, size 0x10
    struct Vec2 vPrevDPD; // offset 0x40, size 0x8
    unsigned int accelCount; // offset 0x48, size 0x4
    unsigned int dpdCount; // offset 0x4C, size 0x4
};
// total size: 0xC
struct TRCWiiInit {
    // Members
    void * (* pAllocAlignFunc)(char *, int, int); // offset 0x0, size 0x4
    void * (* pAllocFunc)(char *, int); // offset 0x4, size 0x4
    unsigned char (* pFreeFunc)(void *); // offset 0x8, size 0x4
};
// total size: 0x31C4
class TRCHomeButton {
    // Static members
    static struct TRCWiiInit msInitParams; // size: 0xC
    static class TRCHomeButton * m_pInstance; // size: 0x4

    // Members
    char mHomeMenuDirectory[32]; // offset 0x0, size 0x20
    enum HomeInputType m_HomeMenu_InputType; // offset 0x20, size 0x4
    enum HomeMenuState m_HomeMenu_State; // offset 0x24, size 0x4
    struct HBMDataInfo m_hbmInfo; // offset 0x28, size 0x40
    struct TPLPalette * m_pIconTpl; // offset 0x68, size 0x4
    void * m_pIconBmpData; // offset 0x6C, size 0x4
    struct HBMControllerData m_ConData; // offset 0x70, size 0x40
    void * m_pHomeMenuSoundBuffer; // offset 0xB0, size 0x4
    enum FadeState m_FadeState; // offset 0xB4, size 0x4
    enum State m_HomeBtnSwitch_State; // offset 0xB8, size 0x4
    enum State m_DrawModeFlag_State; // offset 0xBC, size 0x4
    enum State m_HomeMenuInited_State; // offset 0xC0, size 0x4
    enum State m_BanIconSwitch_State; // offset 0xC4, size 0x4
    enum IconState m_BanIconMode_State; // offset 0xC8, size 0x4
    unsigned long m_BanIconTime; // offset 0xCC, size 0x4
    unsigned char m_BanIconAlpha; // offset 0xD0, size 0x1
    unsigned char m_bEnabled; // offset 0xD1, size 0x1
    unsigned char m_bWideScreen; // offset 0xD2, size 0x1
    unsigned char m_bInitialized; // offset 0xD3, size 0x1
    enum HBMSelectBtnNum m_ShutdownButton; // offset 0xD4, size 0x4
    struct _GXVtxDescList m_VertAttr_List[27]; // offset 0xD8, size 0xD8
    struct _GXVtxAttrFmtList m_VertexFmt_List[8][27]; // offset 0x1B0, size 0xD80
    float m_CurrentProjMtx[7]; // offset 0xF30, size 0x1C
    struct KPADStatus m_Kpads[4][16]; // offset 0xF4C, size 0x2100
    int m_Wpad_Result[4]; // offset 0x304C, size 0x10
    unsigned long m_Pad_Type[4]; // offset 0x305C, size 0x10
    int m_Kpad_Read[4]; // offset 0x306C, size 0x10
    struct PadControl mWpad_Control[4]; // offset 0x307C, size 0x140
    int m_BanOffsetX; // offset 0x31BC, size 0x4
    int m_BanOffsetY; // offset 0x31C0, size 0x4
};
static unsigned int g_levelShaders[4]; // size: 0x10, address: 0x80430660
// total size: 0x20
class LiveModeInitState : public StateMachineState {
    // Members
    unsigned int m_asyncDatasetId; // offset 0x1C, size 0x4
};
// total size: 0x1C
class ChangeHouseDemolishHouse : public StateMachineState {};
// total size: 0x1C
class ChangeHouseSaveHouse : public StateMachineState {};
// total size: 0x1C
class ChangeHouseUnloadHouse : public StateMachineState {};
// total size: 0x20
class ChangeHouseLoadHouse : public StateMachineState {
    // Members
    unsigned int m_asyncDatasetId; // offset 0x1C, size 0x4
};
// total size: 0x78
class LiveModeChangeHouseStateMachine : public StateMachine {};
static float Accumulator; // size: 0x4, address: 0x805DBA30
static unsigned char FlipFlop; // size: 0x1, address: 0x805D8A08
class LoadingScreenStateMachine * s_pSM; // size: 0x4, address: 0x805DBA34
// total size: 0x1C
class LoadingScreenWaitingForLoadState : public StateMachineState {};
// total size: 0x1C
class LoadingScreenUpdateState : public StateMachineState {};
// total size: 0x1C
class IrisTransitionOutState : public StateMachineState {};
// total size: 0x1C
class IrisTransitionInState : public StateMachineState {};
enum eReturnOperation {
    eReturnOperation_None = 0,
    eReturnOperation_LAST = 1,
};
// total size: 0x20
class MUStatesProcessRequests : public StateMachineState {
    // Members
public:
    enum eReturnOperation m_returnOperation; // offset 0x1C, size 0x4
};
enum eReturnOperation {
    eReturnOperation_None = 0,
    eReturnOperation_halfTime = 1,
    eReturnOperation_loadInfo = 2,
    eReturnOperation_2ndHalfTime = 3,
    eReturnOperation_retryError = 4,
    eReturnOperation_LAST = 5,
};
// total size: 0x24
class MUStatesLoadHouse : public StateMachineState {
    // Members
public:
    enum eReturnOperation m_returnOperation; // offset 0x1C, size 0x4
    float m_fMinimumDisplayTime; // offset 0x20, size 0x4
};
enum eReturnOperation {
    eReturnOperation_None = 0,
    eReturnOperation_saveNewGame = 1,
    eReturnOperation_saveFailed = 2,
    eReturnOperation_yesOrQuit = 3,
    eReturnOperation_LAST = 4,
};
// total size: 0x20
class MUStatesTransitionAutoSaveExisting : public StateMachineState {
    // Members
public:
    enum eReturnOperation m_returnOperation; // offset 0x1C, size 0x4
};
enum eReturnOperation {
    eReturnOperation_None = 0,
    eReturnOperation_saveFailedOk = 1,
    eReturnOperation_retryError = 2,
    eReturnOperation_LAST = 3,
};
// total size: 0x24
class MUStatesTransitionSaveExistingGame : public StateMachineState {
    // Members
public:
    enum eReturnOperation m_returnOperation; // offset 0x1C, size 0x4
    float m_minimumDisplayTime; // offset 0x20, size 0x4
};
enum eMUResult m_result; // size: 0x4, address: 0x805DBA38
enum eMURequest {
    eMURequest_None = 0,
    eMURequest_loadHouse = 1,
    eMURequest_transitionAutoSaveExisting = 2,
    eMURequest_LAST = 3,
};
enum eMURequest m_resultRequest; // size: 0x4, address: 0x805DBA3C
enum eMURequest m_pendingRequest; // size: 0x4, address: 0x805DBA40
// total size: 0x78
class MUStateMachine : public StateMachine {
    // Static members
    static enum eMURequest m_pendingRequest; // size: 0x4
    static enum eMURequest m_resultRequest; // size: 0x4
    static enum eMUResult m_result; // size: 0x4
};
// total size: 0x20
class PreGameState : public StateMachineState {
    // Members
    unsigned int m_nASyncDatasetID; // offset 0x1C, size 0x4
};
// total size: 0x7C
class PreGameCreateAFamilyState : public CreateASimBaseState {};
// total size: 0x7C
class InLevelCreateASimState : public CreateASimBaseState {};
// total size: 0x78
class PreGameSetupState : public StateMachineFlow {};
enum eTikiState {
    eTikiState_none = 0,
    eTikiState_unlit = 1,
    eTikiState_lit = 2,
};
enum eLotShaderState {
    eLotShaderState_none = 0,
    eLotShaderState_not_visible = 1,
    eLotShaderState_visible = 2,
    eLotShaderState_visible_highlight = 3,
    eLotShaderState_blocked = 4,
    eLotShaderState_blocked_highlight = 5,
    eLotShaderState_wrong_island = 6,
    eLotShaderState_cardinal = 7,
};
// total size: 0xC
struct LotRecord {
    // Members
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char blocked; // offset 0x1, size 0x1
    unsigned char highlight; // offset 0x2, size 0x1
    unsigned char plumbbob; // offset 0x3, size 0x1
    enum eTikiState tiki; // offset 0x4, size 0x4
    enum eLotShaderState shaderState; // offset 0x8, size 0x4
};
enum eMapState {
    eMapState_map = 0,
    eMapState_legend = 1,
};
// total size: 0x10
struct LotRect {
    // Members
    int lx; // offset 0x0, size 0x4
    int ty; // offset 0x4, size 0x4
    int rx; // offset 0x8, size 0x4
    int by; // offset 0xC, size 0x4
};
// total size: 0x1EC
class LSMTarget : public UIObjectBase {
    // Static members
    static int m_scrollTimeTable[3][3]; // size: 0x24
    static int m_islandCenterPointTable[3][2]; // size: 0x18
    static unsigned int m_litTikiShaderTable[4]; // size: 0x10
    static unsigned int m_plumbbobShaderTable[4]; // size: 0x10
    static unsigned int m_blockedHighlightShaderTable[27]; // size: 0x6C
    static unsigned int m_blockedShaderTable[27]; // size: 0x6C
    static unsigned int m_visibleHighlightShaderTable[27]; // size: 0x6C
    static unsigned int m_visibleShaderTable[27]; // size: 0x6C
    static unsigned int m_wrongIslandShaderTable[27]; // size: 0x6C
    static struct LotRect m_LotRectTable[27]; // size: 0x1B0

    // Members
    unsigned int m_filterId; // offset 0xA4, size 0x4
    struct LotRecord * m_lots[27]; // offset 0xA8, size 0x6C
    class UIReflow m_reflow; // offset 0x114, size 0x18
    class UIStringGenerator m_shaderNameTable; // offset 0x12C, size 0x8
    class UIStringGenerator m_tikiShaderNameTable; // offset 0x134, size 0x8
    int m_lotHighlighted; // offset 0x13C, size 0x4
    int m_currentLot; // offset 0x140, size 0x4
    int m_homeLot; // offset 0x144, size 0x4
    int m_offsetX; // offset 0x148, size 0x4
    int m_offsetY; // offset 0x14C, size 0x4
    int m_neighborId; // offset 0x150, size 0x4
    int m_updateCounter; // offset 0x154, size 0x4
    enum eMapState m_displayState; // offset 0x158, size 0x4
    int m_currentIsland; // offset 0x15C, size 0x4
    int m_desiredIsland; // offset 0x160, size 0x4
    unsigned char m_tweenActive; // offset 0x164, size 0x1
    unsigned char m_infoTweenActive; // offset 0x165, size 0x1
    unsigned char m_infoTweenActive2; // offset 0x166, size 0x1
    int m_displayInfoLot; // offset 0x168, size 0x4
    int m_lastDisplayInfoLot; // offset 0x16C, size 0x4
    unsigned char m_infoBoxOpen; // offset 0x170, size 0x1
    int m_openBoxLength; // offset 0x174, size 0x4
    int m_infoBoxCloseDelayCounter; // offset 0x178, size 0x4
    class CursorMovementTracker m_CursorTracker; // offset 0x17C, size 0x50
    class EVec2 m_CursorPoint; // offset 0x1CC, size 0x8
    unsigned char m_lotHightlightInitialized; // offset 0x1D4, size 0x1
    int m_directionHighlighted; // offset 0x1D8, size 0x4
    float m_CurrentXStickDeflection; // offset 0x1DC, size 0x4
    float m_CurrentYStickDeflection; // offset 0x1E0, size 0x4
    float m_StickDeflectionThreshold; // offset 0x1E4, size 0x4
    int m_lastFireFrame; // offset 0x1E8, size 0x4
};
// total size: 0x80
class NeighborhoodState : public StateMachineFlow {
    // Members
    class LSMTarget * m_pLSMTarget; // offset 0x78, size 0x4
    unsigned char m_datasetLoading; // offset 0x7C, size 0x1
};
static class EVec4 s_press_start_color; // size: 0x10, address: 0x804939C0
static class EVec2 s_press_start_position; // size: 0x8, address: 0x805DBA48
static class StartScreenVars * s_pVars; // size: 0x4, address: 0x805DBA50
// total size: 0x2C
class StartScreenVars {
    // Members
public:
    float m_fStartDoneTime; // offset 0x0, size 0x4
    float m_fStartTimeout; // offset 0x4, size 0x4
    float m_fFlashTimer; // offset 0x8, size 0x4
    unsigned char m_bDrawPrompt; // offset 0xC, size 0x1
    class EVec2 m_vBarPos; // offset 0x10, size 0x8
    float m_fBarWidth; // offset 0x18, size 0x4
    float m_fHighestProgress; // offset 0x1C, size 0x4
    class EWindow * m_pClipWin; // offset 0x20, size 0x4
    unsigned char m_bDrawFirstTime; // offset 0x24, size 0x1
    unsigned char m_bMovieNeedsFading; // offset 0x25, size 0x1
    unsigned char m_bDelayStart; // offset 0x26, size 0x1
    unsigned char m_bAttractMode; // offset 0x27, size 0x1
    float m_pressStartDelayTimer; // offset 0x28, size 0x4
};
// total size: 0x78
class TheSimsStartScreenStateMachine : public StateMachine {};
// total size: 0x80
class StartScreenStartState : public StateMachineFlow {
    // Members
    class ERShader * m_pBg; // offset 0x78, size 0x4
    class ERShader * m_pLogo; // offset 0x7C, size 0x4
};
enum eGameState m_stateRequest; // size: 0x4, address: 0x805DBA54
enum eGameState m_stateCurrent; // size: 0x4, address: 0x805DBA58
enum eGameState m_stateLast; // size: 0x4, address: 0x805DBA5C
// total size: 0x50
class TheSimsNGCLicenseState : public StateMachineState {
    // Members
    class ERFont * m_pFont; // offset 0x1C, size 0x4
    unsigned short m_szLicenseText[21]; // offset 0x20, size 0x2A
    float m_fAlpha; // offset 0x4C, size 0x4
};
// total size: 0xD44
class EFontManager : public EResourceManager {};
// total size: 0x3C
class TheSimsNGCHealthWarningState : public StateMachineState {
    // Members
    class Wrapper * m_pLogoWrapper; // offset 0x1C, size 0x4
    class BackgroundPane * m_pLogoPane; // offset 0x20, size 0x4
    class Fader m_fader; // offset 0x24, size 0x10
    unsigned int m_shaderIdScreenA; // offset 0x34, size 0x4
    unsigned int m_shaderIdScreenB; // offset 0x38, size 0x4
};
// total size: 0x60
class BackgroundPane : public WrapperPaneBase {};
// total size: 0x34
class TheSimsWiiNunchuckRequiredState : public StateMachineState {
    // Members
    class Wrapper * m_pLogoWrapper; // offset 0x1C, size 0x4
    class BackgroundPane * m_pLogoPane; // offset 0x20, size 0x4
    class Fader m_fader; // offset 0x24, size 0x10
};
enum _PADWiiBatteryStatus {
    PAD_BATTERY_LEVEL_CRITICAL = 0,
    PAD_BATTERY_LEVEL_LOW = 1,
    PAD_BATTERY_LEVEL_MEDIUM = 2,
    PAD_BATTERY_LEVEL_HIGH = 3,
    PAD_BATTERY_LEVEL_MAX = 4,
};
// total size: 0x10
struct _WiiPadInfo {
    // Members
    unsigned char dpd; // offset 0x0, size 0x1
    unsigned char speaker; // offset 0x1, size 0x1
    unsigned char attach; // offset 0x2, size 0x1
    unsigned char lowBat; // offset 0x3, size 0x1
    unsigned char nearempty; // offset 0x4, size 0x1
    enum _PADWiiBatteryStatus battery; // offset 0x8, size 0x4
    unsigned char led; // offset 0xC, size 0x1
    unsigned short reserved; // offset 0xE, size 0x2
};
// total size: 0x24
struct ControllerStatus {
    // Members
    struct _WiiPadInfo vitalStats; // offset 0x0, size 0x10
    unsigned char coreConnected; // offset 0x10, size 0x1
    unsigned int typeNotification; // offset 0x14, size 0x4
    unsigned long extensionType; // offset 0x18, size 0x4
    unsigned char extensionConnected; // offset 0x1C, size 0x1
    unsigned int userTypeNotified; // offset 0x20, size 0x4
};
// total size: 0x114
class TRCStateMachine : public StateMachine {
    // Members
    float m_checkBatteryDelay; // offset 0x78, size 0x4
    float m_checkNunchukDelay; // offset 0x7C, size 0x4
    struct ControllerStatus mControllerStatus[4]; // offset 0x80, size 0x90
    unsigned long mPadType; // offset 0x110, size 0x4
};
// total size: 0x1C
class TheSimsEAMovieState : public StateMachineState {
    // Members
    unsigned char m_aptDisabled; // offset 0x19, size 0x1
};
// total size: 0x1C
class TheSimsMemCardCheckState : public StateMachineState {};
// total size: 0x34
class TheSimsMaxisLogoState : public StateMachineState {
    // Members
    class Wrapper * m_pLogoWrapper; // offset 0x1C, size 0x4
    class BackgroundPane * m_pLogoPane; // offset 0x20, size 0x4
    class Fader m_fader; // offset 0x24, size 0x10
};
// total size: 0x24
class TheSimsSimsIntroMovieState : public StateMachineState {
    // Members
    float m_fAlpha; // offset 0x1C, size 0x4
    unsigned char m_bFadeOut; // offset 0x20, size 0x1
    unsigned char m_aptDisabled; // offset 0x21, size 0x1
};
static int frames; // size: 0x4, address: 0x805DBA60
// total size: 0x60
class TheSimsEnterMainMenuState : public StateMachineState {
    // Members
    unsigned char m_bGlobalsDatasetLoaded; // offset 0x19, size 0x1
    unsigned int m_nMainMenuDatasetID; // offset 0x1C, size 0x4
    char m_szMainMenuDatasetName[64]; // offset 0x20, size 0x40
};
// total size: 0x78
class TheSimsMainMenuState : public StateMachineFlow {};
// total size: 0x20
class TheSimsChooseLanguageState : public StateMachineState {
    // Members
    class LanguageSel * m_pLanguageSel; // offset 0x1C, size 0x4
};
// total size: 0xEC
class LanguageSel : private Wrapper {
    // Members
    class ERQuickdata * m_pSimsUIData; // offset 0xC0, size 0x4
    class ERQuickdata * m_pUrbzUIData; // offset 0xC4, size 0x4
    class ERFont * m_pFont; // offset 0xC8, size 0x4
    class MenuPane * m_pMenuPane; // offset 0xCC, size 0x4
    int m_iShowMenu; // offset 0xD0, size 0x4
    unsigned char m_bWaitingForShowMenu; // offset 0xD4, size 0x1
    int m_iCurrentItem; // offset 0xD8, size 0x4
    int m_iDefaultItem; // offset 0xDC, size 0x4
    unsigned char m_bDone; // offset 0xE0, size 0x1
    class QTimer m_timeoutTimer; // offset 0xE4, size 0x8
};
// total size: 0x78
class TheSimsStateMachine : public StateMachineFlow {};
// total size: 0x1C
class UrbzModeNewGameState : public StateMachineState {};
// total size: 0x15C
class InLevelStoryState : public InLevelBaseState {};
// total size: 0xC
class DummyMode : public EGameState {};
static int s_oldLot; // size: 0x4, address: 0x805DBA64
// total size: 0x1
class SerializeUIGameData {
    // Static members
    static unsigned char m_bInitialized; // size: 0x1
    static unsigned int * m_pBuffer; // size: 0x4
    static unsigned int * m_pLoadBuffers[4]; // size: 0x10
};
static unsigned int s_batteryTimeout; // size: 0x4, address: 0x805D8A20
static unsigned int s_delayTimeout; // size: 0x4, address: 0x805DBA68
// total size: 0x1C
class TRCBatteryLowState : public StateMachineState {};
// total size: 0x24
class TRCNunchukReconnectState : public StateMachineState {
    // Members
    class EController * m_pCtrl; // offset 0x1C, size 0x4
    unsigned int m_filterId; // offset 0x20, size 0x4
};
// total size: 0x1C
class TRCNunchukDisconnectState : public StateMachineState {};
// total size: 0x1C
class TRCCoreDisconnectState : public StateMachineState {};
// total size: 0x1C
class TRCDelayState : public StateMachineState {};
// total size: 0x1C
class TRCReadyState : public StateMachineState {};
// total size: 0x24
struct {} __vt__18TRCBatteryLowState; // size: 0x24, address: 0x80430AD0
// total size: 0x24
struct {} __vt__25TRCNunchukDisconnectState; // size: 0x24, address: 0x80430AF4
// total size: 0x24
struct {} __vt__24TRCNunchukReconnectState; // size: 0x24, address: 0x80430B18
// total size: 0x24
struct {} __vt__22TRCCoreDisconnectState; // size: 0x24, address: 0x80430B3C
// total size: 0x24
struct {} __vt__13TRCDelayState; // size: 0x24, address: 0x80430B60
// total size: 0x24
struct {} __vt__13TRCReadyState; // size: 0x24, address: 0x80430B84
// total size: 0x20
struct {} __vt__7Wrapper; // size: 0x20, address: 0x80430BA8
// total size: 0x20
struct {} __vt__14BackgroundPane; // size: 0x20, address: 0x80430BC8
// total size: 0x24
struct {} __vt__20UrbzModeNewGameState; // size: 0x24, address: 0x80430C38
// total size: 0x24
struct {} __vt__21StartScreenStartState; // size: 0x24, address: 0x80430C5C
// total size: 0x24
struct {} __vt__30TheSimsStartScreenStateMachine; // size: 0x24, address: 0x80430C80
// total size: 0x24
struct {} __vt__17NeighborhoodState; // size: 0x24, address: 0x80430CA4
// total size: 0x24
struct {} __vt__17PreGameSetupState; // size: 0x24, address: 0x80430CC8
// total size: 0x24
struct {} __vt__22InLevelCreateASimState; // size: 0x24, address: 0x80430CEC
// total size: 0x24
struct {} __vt__25PreGameCreateAFamilyState; // size: 0x24, address: 0x80430D10
// total size: 0x24
struct {} __vt__12PreGameState; // size: 0x24, address: 0x80430D34
// total size: 0x24
struct {} __vt__34MUStatesTransitionSaveExistingGame; // size: 0x24, address: 0x80430D58
// total size: 0x24
struct {} __vt__34MUStatesTransitionAutoSaveExisting; // size: 0x24, address: 0x80430D7C
// total size: 0x24
struct {} __vt__17MUStatesLoadHouse; // size: 0x24, address: 0x80430DA0
// total size: 0x24
struct {} __vt__23MUStatesProcessRequests; // size: 0x24, address: 0x80430DC4
// total size: 0x24
struct {} __vt__20ChangeHouseLoadHouse; // size: 0x24, address: 0x80430DE8
// total size: 0x24
struct {} __vt__22ChangeHouseUnloadHouse; // size: 0x24, address: 0x80430E0C
// total size: 0x24
struct {} __vt__20ChangeHouseSaveHouse; // size: 0x24, address: 0x80430E30
// total size: 0x24
struct {} __vt__24ChangeHouseDemolishHouse; // size: 0x24, address: 0x80430E54
// total size: 0x20
struct {} __vt__9ELiveMode; // size: 0x20, address: 0x80430E78
// total size: 0x24
struct {} __vt__31LiveModeChangeHouseStateMachine; // size: 0x24, address: 0x80430E98
// total size: 0x24
struct {} __vt__17LiveModeInitState; // size: 0x24, address: 0x80430EBC
// total size: 0x24
struct {} __vt__15TRCStateMachine; // size: 0x24, address: 0x80430EE0
// total size: 0x24
struct {} __vt__17InLevelStoryState; // size: 0x24, address: 0x80430F04
// total size: 0x24
struct {} __vt__16InLevelBaseState; // size: 0x24, address: 0x80430F28
// total size: 0x24
struct {} __vt__22IrisTransitionOutState; // size: 0x24, address: 0x80430F4C
// total size: 0x24
struct {} __vt__21IrisTransitionInState; // size: 0x24, address: 0x80430F70
// total size: 0x24
struct {} __vt__24LoadingScreenUpdateState; // size: 0x24, address: 0x80430F94
// total size: 0x24
struct {} __vt__32LoadingScreenWaitingForLoadState; // size: 0x24, address: 0x80430FB8
// total size: 0x24
struct {} __vt__25LoadingScreenStateMachine; // size: 0x24, address: 0x80430FDC
// total size: 0x20
struct {} __vt__9DummyMode; // size: 0x20, address: 0x80431000
// total size: 0x24
struct {} __vt__20TheSimsMainMenuState; // size: 0x24, address: 0x80431020
// total size: 0x24
struct {} __vt__25TheSimsEnterMainMenuState; // size: 0x24, address: 0x80431044
// total size: 0x24
struct {} __vt__26TheSimsSimsIntroMovieState; // size: 0x24, address: 0x80431068
// total size: 0x24
struct {} __vt__21TheSimsMaxisLogoState; // size: 0x24, address: 0x8043108C
// total size: 0x24
struct {} __vt__19TheSimsEAMovieState; // size: 0x24, address: 0x804310B0
// total size: 0x24
struct {} __vt__24TheSimsMemCardCheckState; // size: 0x24, address: 0x804310D4
// total size: 0x24
struct {} __vt__31TheSimsWiiNunchuckRequiredState; // size: 0x24, address: 0x804310F8
// total size: 0x24
struct {} __vt__28TheSimsNGCHealthWarningState; // size: 0x24, address: 0x8043111C
// total size: 0x24
struct {} __vt__22TheSimsNGCLicenseState; // size: 0x24, address: 0x80431140
// total size: 0x24
struct {} __vt__26TheSimsChooseLanguageState; // size: 0x24, address: 0x80431164
// total size: 0x24
struct {} __vt__19CreateASimBaseState; // size: 0x24, address: 0x80431188
// total size: 0x24
struct {} __vt__19TheSimsStateMachine; // size: 0x24, address: 0x804311AC
// total size: 0x24
struct {} __vt__16StateMachineFlow; // size: 0x24, address: 0x804311D0
// total size: 0x20
struct {} __vt__10EGameState; // size: 0x20, address: 0x804311F8
// total size: 0x20
struct {} __vt__12UIObjectBase; // size: 0x20, address: 0x80431228
// total size: 0x24
struct {} __vt__14MUStateMachine; // size: 0x24, address: 0x80431248
// total size: 0x24
struct {} __vt__12StateMachine; // size: 0x24, address: 0x8043126C
// total size: 0x24
struct {} __vt__17StateMachineState; // size: 0x24, address: 0x80431290
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class StateMachineStatus * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class Background {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
class ArcFileInfo {
    // Members
    char * m_name; // offset 0x0, size 0x4
    char * m_manager; // offset 0x4, size 0x4
    unsigned int m_sourceLen; // offset 0x8, size 0x4
    unsigned int m_copyStart; // offset 0xC, size 0x4
    unsigned char m_upToDate; // offset 0x10, size 0x1
};
// total size: 0x630
class HDDThread : public EThread {
    // Members
    class ArcFileInfo m_arcInfo[32]; // offset 0x33C, size 0x280
    unsigned char m_doDelete; // offset 0x5BC, size 0x1
    unsigned char m_doCopy; // offset 0x5BD, size 0x1
    unsigned char m_doFormat; // offset 0x5BE, size 0x1
    unsigned char m_doTest; // offset 0x5BF, size 0x1
    unsigned int m_readSpeed[7]; // offset 0x5C0, size 0x1C
    unsigned int m_writeSpeed[7]; // offset 0x5DC, size 0x1C
    unsigned int m_sceReadSpeed[7]; // offset 0x5F8, size 0x1C
    unsigned int m_sceWriteSpeed[7]; // offset 0x614, size 0x1C
};

