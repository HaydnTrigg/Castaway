/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\castarget_tsc6.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E50C -> 0x80196E88
*/
// Range: 0x8018E50C -> 0x8018E7E0
// this: r28
CASTargetTSC6::CASTargetTSC6(unsigned char skipUI /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASTargetTSC6;
}

// Range: 0x8018E838 -> 0x8018EAA0
// this: r30
CASTargetTSC6::~CASTargetTSC6() {
    // Local variables
    class UIScreenManager * pUISM; // r28
    unsigned int i; // r27

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASTargetTSC6;
}

// Range: 0x8018EAA0 -> 0x8018EE18
// this: r29
void CASTargetTSC6::Init(unsigned char bSkipUI /* r30 */) {
    // Local variables
    unsigned int i; // r26

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8018EE18 -> 0x8018EFD0
// this: r29
unsigned char CASTargetTSC6::IsShutdown() {
    // Local variables
    unsigned char rc; // r30
    class UIScreenManager * pUISM; // r3
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8018EFD0 -> 0x8018F050
void CASTargetTSC6::PreloadGridIconShaders() {
    // Local variables
    int i; // r28

    // References
    // -> class ERShader * s_pGridIconShaders[17];
    // -> unsigned int kGRID_SHADERS_IDS[17];
    // -> class EShaderManager _shaderman;
}

// Range: 0x8018F050 -> 0x8018F0B8
void CASTargetTSC6::UnloadGridIconShaders() {
    // Local variables
    int i; // r29

    // References
    // -> class ERShader * s_pGridIconShaders[17];
}

// Range: 0x8018F0B8 -> 0x8018F1B4
void CASTargetTSC6::PreloadIdleAnimations() {
    // Local variables
    unsigned int nNumAnimationsPerGender; // r0
    unsigned int i; // r29
    unsigned int i; // r26

    // References
    // -> class ERCharacter * s_pIdleAnimCharacters;
    // -> class ECharacterManager _characterman;
    // -> unsigned int s_nCasMaleSimAnimations[39];
    // -> class EAnimManager _animman;
    // -> class ERAnim * * s_pIdleAnimations;
    // -> unsigned int s_nCasFemaleSimAnimations[39];
}

// Range: 0x8018F1B4 -> 0x8018F264
void CASTargetTSC6::UnloadIdleAnimations() {
    // Local variables
    unsigned int nNumAnimationsPerGender; // r0
    unsigned int nNumAnimations; // r29
    unsigned int i; // r28

    // References
    // -> class ERCharacter * s_pIdleAnimCharacters;
    // -> class ERAnim * * s_pIdleAnimations;
}

// Range: 0x8018F264 -> 0x8018F5C4
// this: r28
void CASTargetTSC6::SetVariable(const char * szVar /* r29 */, const char * szValue /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x8018F5C4 -> 0x8018F91C
// this: r31
void CASTargetTSC6::SetVariable_CGR_Hit(const char * szValue /* r30 */) {
    // Local variables
    int bHitOption; // r0
    int option; // r0
    class InventoryItems * pInventory; // r0
    enum eBodyPart bodyPart; // r30
    class CasSimDescription * pSimDesc; // r0
    class SimBodyPart * pSimBodyPart; // r30
    unsigned char nMaxTexture; // r0
    int changeEvent; // r1+0xC

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018F91C -> 0x8018FAFC
// this: r31
void CASTargetTSC6::SetVariable_CGR_Delete(const char * szValue /* r29 */) {
    // Local variables
    int bHitOption; // r0
    int option; // r0
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r0
    class InventoryItem * pItem; // r30
    class ClothingItem * pClothingItem; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018FAFC -> 0x8018FCE8
// this: r28
void CASTargetTSC6::SetVariable_CMU_morphVal(const char * szVar /* r30 */, const char * szValue /* r29 */) {
    // Local variables
    char buf[3]; // r1+0x8
    int slider; // r0
    enum eMorphRegion currMorphRegion; // r31
    enum eSpecies species; // r30
    class CasSimDescription * pSimDesc; // r0
    float fMorphValue; // f30
    float fScale; // f0
    enum eMorphTargetRegion morphTargetParamRegion; // r29
    enum eLatticeMorphRegion latticeMorphParamRegion; // r29
}

// Range: 0x8018FCE8 -> 0x8018FE9C
// this: r30
void CASTargetTSC6::SetVariable_CMU_sexSet(const char * szValue /* r31 */) {
    // Local variables
    class EString strCostumeName; // r1+0xC
    class EString strDatasetName; // r1+0x8
    class ERDataset * pRes; // r3
    class ERDataset * pRes; // r3

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8018FE9C -> 0x8018FF90
// this: r30
void CASTargetTSC6::SetVariable_CMU_Randomize() {
    // Local variables
    class CasSimDescription * pSimDesc; // r31
}

// Range: 0x8018FF90 -> 0x8018FFF0
// this: r31
void CASTargetTSC6::SetVariable_CHT_Accept() {}

// Range: 0x8018FFF0 -> 0x801902AC
// this: r28
void CASTargetTSC6::SetVariable_CAS_nav(const char * szValue /* r29 */) {
    // Local variables
    unsigned char bNavResult; // r0
    unsigned int nTotalPersVal; // r31
    signed char i; // r30
    class CasSimDescription * pSimDesc; // r30
    signed char i; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801902AC -> 0x801903B8
// this: r30
void CASTargetTSC6::OnButtonSelect(const char * szParams /* r31 */) {
    // Local variables
    int button_number; // r0
    enum eCASMenuButtons button_selected; // r4
}

// Range: 0x801903B8 -> 0x80190470
// this: r31
void CASTargetTSC6::OnButtonSelect_GenderScreen() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80190470 -> 0x80190590
// this: r31
void CASTargetTSC6::OnButtonSelect_MainScreen() {}

// Range: 0x80190590 -> 0x801905EC
void CASTargetTSC6::OnButtonSelect_BodyScreen() {}

// Range: 0x801905EC -> 0x801906A8
// this: r31
void CASTargetTSC6::OnButtonSelect_BodyMorphBodyScreen() {}

// Range: 0x801906A8 -> 0x801907E0
// this: r31
void CASTargetTSC6::OnButtonSelect_BodyMorphHeadScreen() {}

// Range: 0x801907E0 -> 0x80190994
// this: r31
void CASTargetTSC6::OnButtonSelect_FashionScreen() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80190994 -> 0x80190AD0
// this: r30
void CASTargetTSC6::OnButtonSelect_FashionHeadScreen(enum eCASMenuButtons button_selected /* r31 */) {}

// Range: 0x80190AD0 -> 0x80190AF0
void CASTargetTSC6::OnButtonSelect_FashionTopScreen() {}

// Range: 0x80190AF0 -> 0x80190B18
void CASTargetTSC6::OnButtonSelect_FashionBottomScreen() {}

// Range: 0x80190B18 -> 0x80190B40
void CASTargetTSC6::OnButtonSelect_FashionAccessoriesScreen() {}

// Range: 0x80190B40 -> 0x80190CC8
// this: r26
void CASTargetTSC6::OnButtonSelect_FashionDesignScreen() {
    // Local variables
    class InventoryItems * pInventory; // r29
    signed short nCurrentDyesInInventory[9]; // r1+0x1C
    signed short color; // r28
    signed short nDiff; // r27
}

// Range: 0x80190CC8 -> 0x80190E58
// this: r30
void CASTargetTSC6::OnButtonChange(const char * szParams /* r31 */) {
    // Local variables
    int button_number; // r0
}

// Range: 0x80190E58 -> 0x8019117C
// this: r29
void CASTargetTSC6::HandleArrowButton(const char * szValue /* r30 */) {
    // Local variables
    int option; // r0
    int changeEvent; // r1+0x8
    enum eCASMenuButtons button; // r30
}

// Range: 0x8019117C -> 0x8019148C
// this: r28
char * CASTargetTSC6::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
    unsigned char bUseArchetype; // r0
    unsigned char bIsDeletable; // r0
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r0
    class InventoryItem * pItem; // r31
    class ClothingItem * pClothingItem; // r0
    class InventoryItems * pInventory; // r0
    signed short nCurrentDyesInInventory[9]; // r1+0x10
}

// Range: 0x8019148C -> 0x801915F8
// this: r30
float CASTargetTSC6::GetVariable_CMU_iniMorph(const char * szVar /* r29 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r31
    char buf[3]; // r1+0x8
    int slider; // r0
    enum eMorphRegion currMorphRegion; // r30
    float fScale; // f31
    enum eSpecies species; // r29
    enum eLatticeMorphRegion latticeMorphParamRegion; // r30
    enum eMorphTargetRegion morphTargetParamRegion; // r30
}

// Range: 0x801915F8 -> 0x80191788
// this: r29
unsigned short * CASTargetTSC6::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x80191788 -> 0x8019193C
// this: r28
void CASTargetTSC6::GetLocalizable_GenderScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019193C -> 0x80191BD8
// this: r28
void CASTargetTSC6::GetLocalizable_MainScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80191BD8 -> 0x80191FC4
// this: r28
void CASTargetTSC6::GetLocalizable_BodyScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // Local variables
    char buf[10]; // r1+0x30
    class CasSimDescription * pSimDesc; // r0
    char buf[10]; // r1+0x24
    class CasSimDescription * pSimDesc; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80191FC4 -> 0x801921C0
// this: r28
void CASTargetTSC6::GetLocalizable_BodyMorphBodyScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801921C0 -> 0x80192474
// this: r28
void CASTargetTSC6::GetLocalizable_BodyMorphHeadScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192474 -> 0x80192718
// this: r28
void CASTargetTSC6::GetLocalizable_FashionScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192718 -> 0x80192D40
// this: r31
void CASTargetTSC6::GetLocalizable_FashionHeadScreen(const char * szVar /* r28 */, unsigned short * wideStr /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192D40 -> 0x80192EA4
// this: r28
void CASTargetTSC6::GetLocalizable_FashionTopScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192EA4 -> 0x801930B0
// this: r28
void CASTargetTSC6::GetLocalizable_FashionBottomScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801930B0 -> 0x801932CC
// this: r28
void CASTargetTSC6::GetLocalizable_FashionAccessoriesScreen(const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801932CC -> 0x80193648
// this: r28
void CASTargetTSC6::GetLocalizable_FashionDesignScreen(const char * szVar /* r27 */, unsigned short * wideStr /* r29 */) {
    // Local variables
    char buf[3]; // r1+0x2C
    int buttonIndex; // r0
    enum eCASMenuButtons actualButton; // r0
    char buf[8]; // r1+0x30
    int buttonIndex; // r0
    enum eCASMenuButtons actualButton; // r30
    char outputStr[32]; // r1+0x38

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80193648 -> 0x80193958
// this: r30
void CASTargetTSC6::InstallCMUFlashCommands() {}

// Range: 0x80193958 -> 0x80193970
void CASTargetTSC6::HideFlashUIScreen() {}

// Range: 0x80193970 -> 0x801939EC
// this: r31
void CASTargetTSC6::RefreshCurrentScreen() {
    // Local variables
    char highlightedButton[8]; // r1+0x10
    char * const params[2]; // r1+0x8
}

// Range: 0x801939EC -> 0x80193A74
// this: r30
void CASTargetTSC6::RefreshFlashUIScreen(struct CASUIScreenState & newScreen /* r31 */) {
    // Local variables
    char highlightedButton[8]; // r1+0x10
    char * const params[2]; // r1+0x8
}

// Range: 0x80193A74 -> 0x80193B7C
// this: r31
void CASTargetTSC6::RestorePreviousFlashScreen(unsigned char bRefresh /* r30 */) {}

// Range: 0x80193B7C -> 0x80193C00
// this: r29
void CASTargetTSC6::InitializeToScreen(struct CASUIScreenState & currScreen /* r30 */, enum eScreenName screenId /* r31 */) {}

// Range: 0x80193C00 -> 0x80193D34
// this: r31
void CASTargetTSC6::OverlayNewFlashScreen(enum eScreenName screenId /* r30 */) {
    // Local variables
    struct CASUIScreenState newScreen; // r1+0x48
}

// Range: 0x80193D34 -> 0x80193DD0
// this: r30
void CASTargetTSC6::OverlayNewFlashScreenHidePrevious(enum eScreenName screenId /* r31 */) {
    // Local variables
    struct CASUIScreenState newScreen; // r1+0x8
}

// Range: 0x80193DD0 -> 0x80193E34
// this: r31
void CASTargetTSC6::OverlayGridScreenHideCurrentScreen() {}

// Range: 0x80193E34 -> 0x80193E98
// this: r30
void CASTargetTSC6::OverlayPersonalScreen(unsigned char mode /* r31 */) {}

// Range: 0x80193E98 -> 0x80193EEC
// this: r31
void CASTargetTSC6::OverlayArchetypeScreen() {}

// Range: 0x80193EEC -> 0x80194208
// this: r29
int CASTargetTSC6::BuildButtonString(char * buttonStr /* r31 */, enum eCASMenuButtons * fashionDesignButtons /* r30 */) {
    // Local variables
    int numButtons; // r0
}

// Range: 0x80194208 -> 0x80194254
int CASTargetTSC6::GetExtraButtons() {
    // Local variables
    int extraButtons; // r3
}

// Range: 0x80194254 -> 0x80194444
// this: r25
int CASTargetTSC6::FashionDesignBuildButtonStr(char * buttonStr /* r26 */, enum eCASMenuButtons * fashionDesignButtons /* r27 */) {
    // Local variables
    class BitFlags nModFlags; // r1+0xC
    int changeEvent; // r1+0x8
    int subOption; // r21
    int buttonIndex; // r31
    unsigned char displayDyeCount; // r30
    class CasSimState * pSimState; // r29
    class CasSimDescription * pSimDesc; // r28
    int nCurPartFocus; // r20
    unsigned char bTestMod; // r3
    enum eBodyPart bodyPart; // r0
}

// Range: 0x80194444 -> 0x801944F4
enum eMorphRegion CASTargetTSC6::ConvertIndexToMorphRegion() {}

// Range: 0x801944F4 -> 0x801946CC
unsigned char CASTargetTSC6::ConvertPartUIFocusOptionToChangeEvent() {
    // Local variables
    unsigned char retResult; // r3
}

// Range: 0x801946CC -> 0x80194758
enum eBodyPart CASTargetTSC6::ConvertPartUIFocusToBodyPart() {}

// Range: 0x80194758 -> 0x80194A10
// this: r30
void CASTargetTSC6::PrintCurrentAndMaxOptionString(char * outputStr /* r31 */, int curPartUIFocus /* r25 */, int suboptionNum /* r26 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r29
    int currOption; // r28
    int maxOption; // r27
    enum eBodyPart bodyPart; // r4
    class SimBodyPart * pBodyPart; // r29
    class SimBodyPart * pBodyPart; // r29
    class SimBodyPart * pBodyPart; // r29
    int nNumPossibleStyles; // r28
    int nCurrentOption; // r0
}

// Range: 0x80194A10 -> 0x80194B28
// this: r29
void CASTargetTSC6::LaunchKeyboard() {
    // Local variables
    struct KeyboardWorkOrder KeyboardWorkorder[2]; // r1+0x8
}

// Range: 0x80194B28 -> 0x80194B9C
// this: r31
void CASTargetTSC6::RemoveKeyboard() {}

// Range: 0x80194B9C -> 0x80194C48
// this: r28
void CASTargetTSC6::SaveName() {
    // Local variables
    unsigned short * firstName; // r30
    unsigned short * lastName; // r29
}

// Range: 0x80194C48 -> 0x80194DD0
// this: r29
void CASTargetTSC6::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8
    unsigned int i; // r30

    // References
    // -> float _dt;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80194DD0 -> 0x80194E98
// this: r30
void CASTargetTSC6::Draw(class ERC * prc /* r31 */) {}

// Range: 0x80194E98 -> 0x80194EE4
void CASTargetTSC6::GotoInitialScreen() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80194EE4 -> 0x801952F0
// this: r30
int CASTargetTSC6::GetCurrentUIFocus(struct CASUIScreenState & screen /* r31 */) const {}

// Range: 0x801952F0 -> 0x8019532C
unsigned char CASTargetTSC6::IsViewingMirror() {}

// Range: 0x8019532C -> 0x801953B4
// this: r31
void CASTargetTSC6::EnterCASEditMode() {}

// Range: 0x801953B4 -> 0x801954F4
// this: r30
void CASTargetTSC6::StartupMediator(unsigned char bSkipUI /* r31 */) {
    // Local variables
    int nCASMode; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801954F4 -> 0x80195630
// this: r31
void CASTargetTSC6::ShutdownMediator() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80195630 -> 0x801959E4
// this: r29
void CASTargetTSC6::ChangeMediator(int nSimNum /* r30 */, class CasSimState * pCharState /* r25 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r0
    unsigned int nSlotNum; // r26
    int neighborId; // r0
    unsigned int i; // r25
    class CasSimDescription & simDesc; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801959E4 -> 0x80195A98
class CasScene * CASTargetTSC6::CreateScene() {
    // Local variables
    class CasScene * pScene; // r31
}

// Range: 0x80195A98 -> 0x80195BA4
// this: r31
void CASTargetTSC6::BroadcastNewFocus() {
    // Local variables
    int uiFocus; // r30
    enum FocusArea eventFocus; // r0
}

// Range: 0x80195BA4 -> 0x80195BE8
// this: r31
void CASTargetTSC6::GobackAndRestore() {}

// Range: 0x80195BE8 -> 0x80195CA8
// this: r30
void CASTargetTSC6::BackoutAndShutdown(unsigned char saveBeforeQuit /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80195CA8 -> 0x80195D4C
// this: r29
unsigned char CASTargetTSC6::UnloadLastScreen() {
    // Local variables
    class UIScreenManager * pUISM; // r31
    unsigned char rc; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80195D4C -> 0x80195D8C
// this: r31
void CASTargetTSC6::GotoGame() {}

// Range: 0x80195D8C -> 0x80195E88
// this: r30
void CASTargetTSC6::Shutdown() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80195E88 -> 0x80195FE8
// this: r24
void CASTargetTSC6::SpawnYesNoDialog(enum eCASDialogNavOptions navOption /* r25 */, const unsigned short * msg /* r26 */, const unsigned short * title /* r27 */, int preselected /* r28 */, class CBFunctor1 * pCallback /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80195FE8 -> 0x80196148
// this: r31
void CASTargetTSC6::DialogYesNoSelectionCallback(int selection /* r30 */) {}

// Range: 0x80196148 -> 0x8019628C
// this: r31
void CASTargetTSC6::DeleteSelectedClothingItem() {
    // Local variables
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r29
    class InventoryItem * pItem; // r28
    class ClothingItem * pClothingItem; // r27
}

// Range: 0x8019628C -> 0x80196458
// this: r28
void CASTargetTSC6::ChangeToSelectedArchetype() {
    // Local variables
    class CasSimDescription & storedSimDescription; // r30
    enum eArchetype archetype; // r29
    class EString strCostumeName; // r1+0xC
    class EString strDatasetName; // r1+0x8
    class ERDataset * pRes; // r3
    class CasSimDescription newSimDescription; // r1+0x28

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80196458 -> 0x8019645C
void CASTargetTSC6::DialogNoSelectionCallback() {}

// Range: 0x8019645C -> 0x80196568
// this: r27
void CASTargetTSC6::SpawnOKDialog(const unsigned short * msg /* r28 */, const unsigned short * title /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80196568 -> 0x801965A0
// this: r31
void CASTargetTSC6::DialogOKSelectionCallback() {}

// Range: 0x801965A0 -> 0x80196930
// this: r30
void CASTargetTSC6::AddBonusClothingItem(int nCheatID /* r31 */) {
    // Local variables
    class InventoryItems * pInventory; // r25
    enum eBodyPart bodyPart[5]; // r1+0x2C
    class EString strClothingSetName[5]; // r1+0x18
    int nNumAddedClothingItems; // r24
    int i; // r24
    unsigned char bCreatedSuccessfully; // r23
    int i; // r22
    signed short nClothingItemID; // r0
    int i; // r22

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80196930 -> 0x80196AE4
// this: r26
unsigned char CASTargetTSC6::SaveCASDataToNeighborhood() {
    // Local variables
    unsigned char bResult; // r29
    int source; // r0
    int nFirstSim; // r28
    int i; // r27
    class StackString2 * pFamilyName; // r27
    class CasSimDescription & simDesc; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80196AE4 -> 0x80196E88
// this: r26
void CASTargetTSC6::SaveSimToFamilySlot(int nSimNum /* r27 */) {
    // Local variables
    unsigned int nSlotNum; // r29
    int neighborId; // r0
    unsigned int i; // r24
    class ENeighborhoodCustomChar & simCustomData; // r28
    unsigned short * firstName; // r24
    unsigned short * lastName; // r25
    class CasSimDescription * pSimDesc; // r24
    int neighborId; // r24
    class Neighbor * pNeighbor; // r0
    int familyNum; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}


