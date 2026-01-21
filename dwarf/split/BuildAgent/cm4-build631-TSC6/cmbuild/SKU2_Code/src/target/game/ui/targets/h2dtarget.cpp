/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\h2dtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A85A8 -> 0x801AB014
*/
// Range: 0x801A85A8 -> 0x801A89F0
// this: r28
H2DTarget::H2DTarget() {
    // Local variables
    class cXPerson * pPerson; // r3

    // References
    // -> class GameData _gd;
    // -> class EFontManager _fontman;
    // -> static const char * const HUD_SetNoTab;
    // -> static const char * const HUD_SetCurrTab;
    // -> static const char * const HUD_rgKey;
    // -> static const char * const H2D_R2;
    // -> static const char * const H2D_CANCEL;
    // -> static const char * const H2D_SELECT;
    // -> static const char * const H2D_PAUSE;
    // -> static const char * const H2D_SQUARE;
    // -> static const char * const H2D_IsWideScreen;
    // -> static const char * const H2D_MaxHoverItems;
    // -> static const char * const H2D_exists;
    // -> unsigned int m_nPauseRefCount;
    // -> class EGlobal _globals;
    // -> class EGraphics * _pGfx;
    // -> float m_fSuperHudFade_MaxAlpha;
    // -> struct [anonymous] __vt__9H2DTarget;
}

// Range: 0x801A89F0 -> 0x801A8C94
// this: r29
H2DTarget::~H2DTarget() {
    // References
    // -> class EGlobal _globals;
    // -> unsigned int m_nPauseRefCount;
    // -> struct [anonymous] __vt__9H2DTarget;
}

// Range: 0x801A8C94 -> 0x801A91EC
// this: r31
void H2DTarget::SetVariable(const char * szCommand /* r30 */, const char * szParams /* r28 */) {
    // Local variables
    class cXPerson * pSelectedPerson; // r30
    class Neighborhood & hood; // r28
    class Neighbor * pSelf; // r28
    unsigned short name[255]; // r1+0x208
    unsigned short last_name[255]; // r1+0x8
    const class BString2 & p_name; // r30
    const class BString2 & b_last_name; // r28
    int i; // r28

    // References
    // -> static const char * const HUD_SetNoTab;
    // -> float m_fSuperHudFade_MaxAlpha;
    // -> static const char * const HUD_SetCurrTab;
    // -> static const char * const HUD_rgKey;
    // -> static const char * const H2D_R2;
    // -> static const char * const H2D_CANCEL;
    // -> class GameData _gd;
    // -> static const char * const H2D_SELECT;
    // -> class EGlobal _globals;
    // -> static const char * const H2D_PAUSE;
}

// Range: 0x801A91EC -> 0x801A92C8
// this: r28
unsigned char H2DTarget::DoProcessDPDMovt() {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801A92C8 -> 0x801A93B0
char * H2DTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
    char wsString[8]; // r1+0x10
    char wsString[8]; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
    // -> static const char * const H2D_IsWideScreen;
    // -> static const char * const H2D_MaxHoverItems;
    // -> static const char * const H2D_exists;
}

// Range: 0x801A93B0 -> 0x801A9484
// this: r30
void H2DTarget::SetSuperHUDAlpha() {
    // Local variables
    char alphaString[8]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A9484 -> 0x801A9F88
// this: r30
void H2DTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8
    float xLimit; // f0
    float yLimit; // f3
    float dx; // f30
    float dy; // f0
    float distanceMoved; // f0
    int slice; // r0
    class EController * pController; // r29
    unsigned char textCalloutPressed; // r28
    unsigned char cancelPressed; // r28
    unsigned char notifySim; // r29
    class InteractorManager * interactorManager; // r27
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0
    class EController * pController; // r0
    class EController * pController; // r27

    // References
    // -> static const char * const H2D_R2;
    // -> static const char * const H2D_CANCEL;
    // -> static const char * const H2D_SELECT;
    // -> static const char * const H2D_PAUSE;
    // -> static const char * const H2D_SQUARE;
    // -> static float delayTimer;
    // -> class GameData _gd;
    // -> float _dt;
    // -> static int count;
    // -> float m_fSuperHudFade_MaxAlpha;
    // -> float m_fSuperHudFade_FrameAlphaDecrement;
    // -> float m_fSuperHudFade_FrameThreshold;
    // -> float m_fSuperHudFade_CursorMovtThreshold;
    // -> class EGraphics * _pGfx;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801A9F88 -> 0x801AA224
// this: r29
void H2DTarget::Draw(class ERC * prc /* r30 */) {
    // Local variables
    class BString2 gameOverString; // r1+0xC
    class AptParagraph paragraph; // r1+0x90
    class EVec4 vColor; // r1+0x40
    class EVec2 vTL; // r1+0x18
    class EVec2 vBR; // r1+0x10
    float ew; // f29
    float drawAreaWidth; // f28
    float fontSize; // f27
    float printWidth; // f1
    class EMat4 mat; // r1+0x50
    class EVec4 vColorScale; // r1+0x30
    class EVec4 vColorTranslate; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AA224 -> 0x801AA2B4
void H2DTarget::IncPause(unsigned char playMusic /* r31 */) {
    // References
    // -> unsigned int m_nPauseRefCount;
}

// Range: 0x801AA2B4 -> 0x801AA370
void H2DTarget::ReleasePause() {
    // References
    // -> class GameData _gd;
    // -> unsigned int m_nPauseRefCount;
}

// Range: 0x801AA370 -> 0x801AA3E4
// this: r30
unsigned char H2DTarget::CloseSidePanels() const {
    // Local variables
    unsigned char ret; // r31
}

// Range: 0x801AA3E4 -> 0x801AA4C0
// this: r30
void H2DTarget::SelectedPersonChanged(class cXPerson * person /* r31 */) {
    // Local variables
    unsigned char isPet; // r31
    unsigned char panelBroughtDown; // r3

    // References
    // -> class GameData _gd;
}

// Range: 0x801AA4C0 -> 0x801AA534
// this: r30
void H2DTarget::ACTCancelModeExited() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AA534 -> 0x801AA598
// this: r30
void H2DTarget::SpawnIntroThoughtBalloon(class UIDialog * pDialog /* r31 */) {}

// Range: 0x801AA598 -> 0x801AA5AC
void H2DTarget::SpawnModelessDialog() {}

// Range: 0x801AA5AC -> 0x801AA5B4
void H2DTarget::TryCreateTutorialDialog() {}

// Range: 0x801AA5B4 -> 0x801AA5C8
void H2DTarget::CleanupModelessDialogs() {}

// Range: 0x801AA5C8 -> 0x801AA5E0
int H2DTarget::CountModelessDialogs() {}

// Range: 0x801AA5E0 -> 0x801AA5F4
void H2DTarget::AddAction() {}

// Range: 0x801AA5F4 -> 0x801AA608
void H2DTarget::AddActionSimSwitcher() {}

// Range: 0x801AA608 -> 0x801AA61C
void H2DTarget::ActivateSimSwitcher() {}

// Range: 0x801AA61C -> 0x801AA630
void H2DTarget::DeactivateSimSwitcher() {}

// Range: 0x801AA630 -> 0x801AA648
unsigned char H2DTarget::IsSimSwitcherActive() {}

// Range: 0x801AA648 -> 0x801AA660
class cXPerson * H2DTarget::GetSimSwitcherPlayer() {}

// Range: 0x801AA660 -> 0x801AA674
void H2DTarget::RemoveAction() {}

// Range: 0x801AA674 -> 0x801AA688
void H2DTarget::RemoveAllActions() {}

// Range: 0x801AA688 -> 0x801AA6C0
unsigned char H2DTarget::IsActionQueueAvailable() {
    // Local variables
    unsigned char rc; // r0
}

// Range: 0x801AA6C0 -> 0x801AA71C
// this: r31
unsigned char H2DTarget::IsActionMenuFlashReady() {
    // Local variables
    unsigned char rc; // r3
}

// Range: 0x801AA71C -> 0x801AA730
void H2DTarget::MOTInWarning() {}

// Range: 0x801AA730 -> 0x801AA73C
void H2DTarget::RewardMomentDialogClosed() {}

// Range: 0x801AA73C -> 0x801AA840
unsigned char H2DTarget::ShouldH2DBeVisible() {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801AA840 -> 0x801AAA20
// this: r28
void H2DTarget::DisplayFastForwardState(enum eFastForwardState state /* r29 */) {
    // Local variables
    unsigned char hasId; // r3

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
}

// Range: 0x801AAA20 -> 0x801AAAA8
// this: r31
void H2DTarget::RelationshipChangeOccured() {}

// Range: 0x801AAAA8 -> 0x801AAD80
// this: r31
void H2DTarget::UpdateSpeedControls() {
    // Local variables
    class EController * pCtrl; // r0
    class ObjectModule * pObj; // r0
    unsigned char bShouldPause; // r0
    unsigned char bIsPaused; // r3
    unsigned int soundid; // r29

    // References
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
    // -> class GameData _gd;
}

// Range: 0x801AAD80 -> 0x801AAD8C
unsigned char H2DTarget::EnableSpeedControls() {}

// Range: 0x801AAD8C -> 0x801AAF10
// this: r24
unsigned char H2DTarget::AutolaunchCrafting(int mode /* r25 */) {
    // Local variables
    unsigned char rc; // r31
    class PlanManager * pPlanManager; // r30
    const struct Plan * pPlanData; // r29
    enum eKFTType clothingType; // r28
    enum eKFTType nonClothingType; // r27
    unsigned char twoNonClothingTypesFound; // r26

    // References
    // -> class GameData _gd;
    // -> enum eKFTType m_object;
}

// Range: 0x801AAF10 -> 0x801AAF18
signed short H2DTarget::GetCraftingResult() {
    // References
    // -> signed short m_planCrafted;
}

// Range: 0x801AAF18 -> 0x801AAF94
void H2DTarget::ToggleHutObjectTransparency() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AAF94 -> 0x801AAFF8
// this: r31
void H2DTarget::RegisterMotivesForDPD(int x /* r10 */, int y /* r0 */) {
    // Local variables
    char keyString[32]; // r1+0x8
}

// Range: 0x801AAFF8 -> 0x801AAFFC
void H2DTarget::NotifyLotEndOccured() {}

// Range: 0x801AAFFC -> 0x801AB014
void H2DTarget::NotifyLotStartOccured() {}


