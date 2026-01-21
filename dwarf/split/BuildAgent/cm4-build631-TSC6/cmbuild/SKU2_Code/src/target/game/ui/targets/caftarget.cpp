/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\caftarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80188694 -> 0x8018C448
*/
// Range: 0x80188694 -> 0x80188B84
// this: r29
CAFTarget::CAFTarget(unsigned char bSkipUI /* r30 */) {
    // Local variables
    unsigned int nClockCycleCount; // r0

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> class PlumbBobParms s_plumbBobParms;
    // -> struct [anonymous] __vt__9CAFTarget;
}

// Range: 0x80188B84 -> 0x80188E30
// this: r30
CAFTarget::~CAFTarget() {
    // Local variables
    unsigned int i; // r26
    class SimModelTSC6 * pSimModel; // r25
    int iGuid; // r24
    unsigned int i; // r24

    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__9CAFTarget;
}

// Range: 0x80188E30 -> 0x80188F98
// this: r28
void CAFTarget::Init() {
    // Local variables
    unsigned int i; // r29
    int i; // r29

    // References
    // -> class GameData _gd;
}

// Range: 0x80188F98 -> 0x80189090
// this: r31
void CAFTarget::StartupMediator() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80189090 -> 0x80189128
// this: r30
void CAFTarget::AddFamilyMember(int nCharNum /* r31 */) {
    // Local variables
    class CasSimDescription & simDesc; // r4

    // References
    // -> class GameData _gd;
}

// Range: 0x80189128 -> 0x801891E8
// this: r29
void CAFTarget::ShutdownMediator() {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x801891E8 -> 0x80189344
// this: r30
unsigned char CAFTarget::IsShutdown() {
    // Local variables
    unsigned char rc; // r31
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80189344 -> 0x801893E0
// this: r30
void CAFTarget::Shutdown() {}

// Range: 0x801893E0 -> 0x80189400
void CAFTarget::PlayClosingSequence() {}

// Range: 0x80189400 -> 0x80189424
unsigned char CAFTarget::IsClosingSequenceComplete() {}

// Range: 0x80189424 -> 0x80189444
void CAFTarget::PauseClosingSequence() {}

// Range: 0x80189444 -> 0x80189464
void CAFTarget::UnpauseClosingSequence() {}

// Range: 0x80189464 -> 0x80189560
// this: r26
void CAFTarget::UpdateSimAnimationTracksForNewSlide() {
    // Local variables
    unsigned int i; // r27
    unsigned int index; // r0
    class EACTrack * pTrack; // r0

    // References
    // -> unsigned int kSnapshotSimAnimations[6][6];
}

// Range: 0x80189560 -> 0x801895D0
// this: r29
void CAFTarget::UpdateSimAnimations() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> float _dt;
}

// Range: 0x801895D0 -> 0x8018963C
// this: r29
void CAFTarget::FreezeSimAnimations() {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8018963C -> 0x80189768
// this: r26
void CAFTarget::SetupSimsForCAF() {
    // Local variables
    unsigned int i; // r27
    unsigned int index; // r0
    class EACTrack * pTrack; // r0

    // References
    // -> unsigned int kSnapshotSimAnimations[6][6];
}

// Range: 0x80189768 -> 0x80189AFC
// this: r28
void CAFTarget::SetVariable(const char * szVar /* r29 */, const char * szValue /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80189AFC -> 0x80189C9C
// this: r29
void CAFTarget::SaveNewCharacter(class CasSimDescription & simDesc /* r31 */, int charSlot /* r30 */, unsigned char newSimInSlot /* r28 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80189C9C -> 0x80189E90
// this: r27
char * CAFTarget::GetVariable(const char * szVar /* r28 */) {
    // Local variables
    char * retStr; // r29
}

// Range: 0x80189E90 -> 0x8018A058
// this: r28
unsigned short * CAFTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    unsigned short * outString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018A058 -> 0x8018A060
void CAFTarget::ResetToCAFMainMode() {}

// Range: 0x8018A060 -> 0x8018A064
void CAFTarget::LoadInitialScreen() {}

// Range: 0x8018A064 -> 0x8018A1D4
// this: r31
void CAFTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> float _dt;
}

// Range: 0x8018A1D4 -> 0x8018A250
// this: r29
void CAFTarget::UpdateRenderer() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> float _dt;
}

// Range: 0x8018A250 -> 0x8018A520
// this: r31
void CAFTarget::UpdateSelectorMode() {
    // Local variables
    class EController * pCtrl; // r30
    int lastMember; // r0
    int origCharSlot; // r28
    enum eSpecies species; // r0

    // References
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8018A520 -> 0x8018A5A4
// this: r30
void CAFTarget::Draw(class ERC * prc /* r31 */) {}

// Range: 0x8018A5A4 -> 0x8018A794
// this: r30
void CAFTarget::DrawRenderer(class ERC * prc /* r27 */) {
    // Local variables
    unsigned int i; // r29
    class EMat4 orient; // r1+0x38
    unsigned int nIndex; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018A794 -> 0x8018A8B8
// this: r28
void CAFTarget::DrawTarget(class ERC * prc /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8018A8B8 -> 0x8018AA30
// this: r28
void CAFTarget::DrawPlumbBob(class ERC * prc /* r29 */) {
    // Local variables
    class CasSimRenderer * pSimRenderer; // r31
    class EVec3 vHead; // r1+0x14
    unsigned int nBoneNumber; // r30

    // References
    // -> static class EVec3 kCARPlumbBobLightDir;
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x8018AA30 -> 0x8018AB7C
// this: r31
void CAFTarget::onButtonSelect() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018AB7C -> 0x8018ABE4
// this: r30
unsigned char CAFTarget::IsFreeFamilySlot() {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x8018ABE4 -> 0x8018AC6C
// this: r28
int CAFTarget::GetFirstFreeFamilySlot() {
    // Local variables
    int returnVal; // r31
    unsigned char bDone; // r30
    int i; // r29
}

// Range: 0x8018AC6C -> 0x8018ACDC
// this: r29
int CAFTarget::CountFamilyMembers() {
    // Local variables
    int cnt; // r31
    int i; // r30
}

// Range: 0x8018ACDC -> 0x8018AD18
unsigned char CAFTarget::FamilyMembersMax() {
    // Local variables
    int count; // r0
}

// Range: 0x8018AD18 -> 0x8018AD80
// this: r30
int CAFTarget::LastFilledFamilyMemberSlot() {
    // Local variables
    int i; // r31
}

// Range: 0x8018AD80 -> 0x8018B284
// this: r31
void CAFTarget::HandleCAS() {
    // Local variables
    class ERDataset * pRes; // r3
    class CasSimDescription * pTempDesc; // r30
    int currCharSlot; // r29
    class CasSimDescription * pSimDesc; // r0
    unsigned char bSimsCreated; // r29
    unsigned int i; // r28

    // References
    // -> class EDatasetManager _datasetman;
    // -> float _dt;
}

// Range: 0x8018B284 -> 0x8018B35C
// this: r31
void CAFTarget::EnterCAS() {}

// Range: 0x8018B35C -> 0x8018B444
// this: r31
void CAFTarget::EnterCASForEdit() {}

// Range: 0x8018B444 -> 0x8018B4D4
// this: r28
unsigned char CAFTarget::FamilyHasOneSim() {
    // Local variables
    unsigned char bGotoGame; // r30
    unsigned int i; // r29
}

// Range: 0x8018B4D4 -> 0x8018B550
// this: r29
void CAFTarget::ResetCharacterRotations() {
    // Local variables
    int i; // r30
}

// Range: 0x8018B550 -> 0x8018B5A0
void CAFTarget::LoadCAFUIScreen() {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018B5A0 -> 0x8018B604
void CAFTarget::UnLoadCAFUIScreen() {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018B604 -> 0x8018B778
// this: r26
unsigned char CAFTarget::SaveCASDataToNeighborhood() {
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

// Range: 0x8018B778 -> 0x8018B98C
// this: r30
void CAFTarget::SaveCharToFamilySlot(int nCharNum /* r27 */) {
    // Local variables
    class ENeighborhoodCustomChar & simCustomData; // r28
    class CasSimDescription * pSimDesc; // r27

    // References
    // -> class GameData _gd;
}

// Range: 0x8018B98C -> 0x8018B9DC
// this: r31
void CAFTarget::GotoGame() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018B9DC -> 0x8018BA14
// this: r31
void CAFTarget::EnterSimSelectorMode() {}

// Range: 0x8018BA14 -> 0x8018BA18
void CAFTarget::ExitSimSelectorMode() {}

// Range: 0x8018BA18 -> 0x8018BA7C
// this: r31
void CAFTarget::HideFlashUIScreen() {}

// Range: 0x8018BA7C -> 0x8018BAE4
// this: r31
void CAFTarget::RefreshFlashUIScreen() {}

// Range: 0x8018BAE4 -> 0x8018BB04
void CAFTarget::SetCAFMode() {}

// Range: 0x8018BB04 -> 0x8018BB80
// this: r28
void CAFTarget::SetFidgetModeForAllSims(unsigned char bFidgeting /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8018BB80 -> 0x8018BCE0
void CAFTarget::DeleteAllClothingItemsInInventoryForAllSims() {
    // Local variables
    class InventoryItems * pInventory; // r30
    class vector itemList; // r1+0x10
    class ClothingItem * * iter; // r29
    class ClothingItem * pClothingItem; // r28
    class Neighbor * pNeighbor; // r31
    class CasSimDescription * pSimDesc; // r31
    class SimBodyPart * pSimBodyPart; // r31
    class ClothingItem * pSimClothingItem; // r0
}

// Range: 0x8018BCE0 -> 0x8018BE28
// this: r24
void CAFTarget::SpawnYesNoDialog(enum eCAFDialogNavOptions navOption /* r25 */, const unsigned short * msg /* r26 */, const unsigned short * title /* r27 */, int preselected /* r28 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018BE28 -> 0x8018C05C
// this: r31
void CAFTarget::DialogYesNoSelectionCallback() {
    // Local variables
    int selectedFamily; // r30
    class Family * pFamily; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x8018C05C -> 0x8018C108
// this: r31
void CAFTarget::DialogNoSelectionCallback() {}

// Range: 0x8018C108 -> 0x8018C214
// this: r27
void CAFTarget::SpawnOKDialog(const unsigned short * msg /* r28 */, const unsigned short * title /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018C214 -> 0x8018C24C
// this: r31
void CAFTarget::DialogOKSelectionCallback() {}

// Range: 0x8018C24C -> 0x8018C260
void CAFTarget::SetTargetState() {}

// Range: 0x8018C260 -> 0x8018C320
// this: r26
unsigned int CAFTarget::PickFreeSimPositionNum(class CasSimRenderer * pCurrCharRenderer /* r27 */) {
    // Local variables
    unsigned int nPositionNum; // r30
    unsigned char bPositionNumIsFree; // r29
    unsigned int nCharSlot; // r28
}

// Range: 0x8018C320 -> 0x8018C408
// this: r29
void CAFTarget::DeallocateMorphResources(int iSimSlot /* r30 */) {
    // Local variables
    int iCurrentSim; // r30
}

// Range: 0x8018C408 -> 0x8018C420
static void __sinit_\game_ui_targets_cas_unity_cpp() {
    // References
    // -> static class EVec3 kCARPlumbBobLightDir;
}


