/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\game_interactor_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004DE60 -> 0x8004DE60
*/
float c_SelectionConeAngle; // size: 0x4, address: 0x805DB6B8
class EVec3 s_invalidPos; // size: 0xC, address: 0x8048C790
enum DCStatus {
    kDCStatusNoFreeMove = 0,
    kDCStatusFreeMove = 1,
    kDCStatusSnapTo = 2,
    kDCStatusCameraDirectorInControl = 3,
};
// total size: 0xB8
class DirectInteractor : public Interactor, public PlumbBobOwner {
    // Static members
    static class EVec3 s_invalidPos; // size: 0xC

    // Members
    enum DCStatus m_controlStatus; // offset 0x6C, size 0x4
    unsigned char m_posInited; // offset 0x70, size 0x1
    unsigned char m_swapControlModes; // offset 0x71, size 0x1
    class cXPerson * m_pPlayer; // offset 0x74, size 0x4
    float m_normalConeRadians; // offset 0x78, size 0x4
    class PlumbBob * m_pPlumbBob; // offset 0x7C, size 0x4
    unsigned char m_bPlumbBobParticlesInitialized; // offset 0x80, size 0x1
    unsigned char m_bAutonomy; // offset 0x81, size 0x1
    unsigned char m_bCancelTimerActive; // offset 0x82, size 0x1
    float m_fCancelTimer; // offset 0x84, size 0x4
    unsigned char m_simSwitcherMode; // offset 0x88, size 0x1
    int m_simSwitcherCountDown; // offset 0x8C, size 0x4
    float m_ClosestDistanceToWallAllowedForRun; // offset 0x90, size 0x4
    unsigned char m_stickMovementOccured; // offset 0x94, size 0x1
    unsigned char m_playerMoveOccured; // offset 0x95, size 0x1
    int m_actionProximity; // offset 0x98, size 0x4
    class TNodeList m_lastObjList; // offset 0x9C, size 0xC
    class ISimInstance * m_pISimAdvanceRight; // offset 0xA8, size 0x4
    class ISimInstance * m_pISimAdvanceLeft; // offset 0xAC, size 0x4
    class ISimInstance * m_pISimExpandMenu; // offset 0xB0, size 0x4
    unsigned char m_dcObjectChange; // offset 0xB4, size 0x1
    unsigned char m_usingEdithMenu; // offset 0xB5, size 0x1
};
enum InterestFadeType {
    kInterestFade_NoObjects = 0,
    kInterestFade_NonInteractableObjects = 1,
    kInterestFade_AllObjects = 2,
};
// total size: 0x6C
class Interactor {
    // Static members
    static class BluePrintGrid * s_pBPG; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int m_playerId; // offset 0x4, size 0x4
    class ESimsCam * m_pCamera; // offset 0x8, size 0x4
    class EVec3 m_pos; // offset 0xC, size 0xC
    class EVec3 m_lastPos; // offset 0x18, size 0xC
    class EVec3 m_snapPos; // offset 0x24, size 0xC
    unsigned char m_bSnapTo; // offset 0x30, size 0x1
    unsigned char m_bAction; // offset 0x31, size 0x1
    class EVec2 m_StickInputValueRead[2]; // offset 0x34, size 0x10
    class EVec2 m_ControllerCursorPosition; // offset 0x44, size 0x8
    unsigned char m_bStickCentered[2]; // offset 0x4C, size 0x2
    int m_DrawState; // offset 0x50, size 0x4
    class EVec2 m_extents; // offset 0x54, size 0x8
    float m_idleTime; // offset 0x5C, size 0x4
    enum InterestFadeType m_interestFade; // offset 0x60, size 0x4
    enum CursorState m_BaseCursorState; // offset 0x64, size 0x4
    int m_CURRefID; // offset 0x68, size 0x4
};
// total size: 0x14
class FlashPiMenu {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class cXObject * m_pGoHereOb; // offset 0x4, size 0x4
    unsigned char m_bExit; // offset 0x8, size 0x1
    struct DirectControlData m_dcData; // offset 0xC, size 0x8
};
// total size: 0x8
struct DirectControlData {
    // Members
    class cXObject * pFocusObject; // offset 0x0, size 0x4
    unsigned char bShortMenuEnable; // offset 0x4, size 0x1
    unsigned char bExpandedMenuLock; // offset 0x5, size 0x1
    unsigned char bInDirectControl; // offset 0x6, size 0x1
};
// total size: 0x8
class PiecewisePt {
    // Members
public:
    float fX; // offset 0x0, size 0x4
    float fY; // offset 0x4, size 0x4
};
// total size: 0x10
class PiecewiseFn {
    // Members
    class PiecewisePt * fPoints; // offset 0x0, size 0x4
    float * fReciprocals; // offset 0x4, size 0x4
    int fNumPoints; // offset 0x8, size 0x4
    int fMaxPoints; // offset 0xC, size 0x4
};
// total size: 0x14
class MotiveCurve : public PiecewiseFn {
    // Members
    int fMotive; // offset 0x10, size 0x4
};
// total size: 0x8
class MotiveCurveSet {
    // Members
protected:
    class MotiveCurve * fCurves; // offset 0x0, size 0x4
    int fNumCurves; // offset 0x4, size 0x4
};
// total size: 0x8
class MotiveCurveTable : public MotiveCurveSet {};
// total size: 0x20
struct ModelessDialog {
    // Members
    unsigned char m_bDialogHasContinue; // offset 0x0, size 0x1
    class BString2 m_DialogText; // offset 0x4, size 0x4
    class BString2 m_DialogTitle; // offset 0x8, size 0x4
    class BString2 m_DialogContinueText; // offset 0xC, size 0x4
    class ERShader * m_pIconShader; // offset 0x10, size 0x4
    signed short m_iconHeight; // offset 0x14, size 0x2
    signed short m_iconWidth; // offset 0x16, size 0x2
    int m_timeoutMS; // offset 0x18, size 0x4
    struct ModelessDialog * m_pNext; // offset 0x1C, size 0x4
};
enum eDialogState {
    eDialogState_None = 0,
    eDialogState_WaitingToDisplay = 1,
    eDialogState_Visible = 2,
    eDialogState_WaitingToHide = 3,
};
// total size: 0xE4
class HUDTarget : public UIObjectBase {
    // Static members
    static class ERFont * m_pFont; // size: 0x4

    // Members
    unsigned int m_clockFrames; // offset 0xA4, size 0x4
    class MotiveCurveTable * m_pHudMotiveCurveArray; // offset 0xA8, size 0x4
    unsigned short m_hudMode; // offset 0xAC, size 0x2
    unsigned short m_hudJobLevel; // offset 0xAE, size 0x2
    float m_nDialogTimer; // offset 0xB0, size 0x4
    struct ModelessDialog * m_pModelessDialogs; // offset 0xB4, size 0x4
    struct ModelessDialog * m_pModelessDialogTail; // offset 0xB8, size 0x4
    unsigned int m_nModelessDialogCount; // offset 0xBC, size 0x4
    enum eDialogState m_dialogState; // offset 0xC0, size 0x4
    unsigned char m_bInstalledIcon; // offset 0xC4, size 0x1
    unsigned char m_bHUDInitialized; // offset 0xC5, size 0x1
    unsigned int m_nHUDState; // offset 0xC8, size 0x4
    unsigned int m_nPlayerHUDState; // offset 0xCC, size 0x4
    int m_nPlayerTutorial; // offset 0xD0, size 0x4
    int m_hudCtrlFilterIDs; // offset 0xD4, size 0x4
    unsigned int m_transitionRequested; // offset 0xD8, size 0x4
    int m_jobActivePlayerNum; // offset 0xDC, size 0x4
    class H2DTarget * m_pH2DTarget; // offset 0xE0, size 0x4
};
// total size: 0xC
class MemCardSaveLoad {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int m_loadResult; // offset 0x4, size 0x4
    int m_saveResult; // offset 0x8, size 0x4
};
enum WidgetState {
    WIDGETSTATE_INVISIBLE = 0,
    WIDGETSTATE_INITIALIZING = 1,
    WIDGETSTATE_VISIBLE = 2,
    WIDGETSTATE_RETURN = 3,
    WIDGETSTATE_UNLOADING = 4,
    WIDGETSTATE_UNLOADED = 5,
};
enum NoSpaceType {
    NOSPACE = 0,
    NOSPACE_FOLDERS = 1,
    NOSPACE_FILES = 2,
};
// total size: 0x1E4
class M2MTarget : public UIObjectBase, private UIDialog {
    // Static members
    static int MAX_SS_ITEMS; // size: 0x4

    // Members
    class MemoryDevicePort_t m_port; // offset 0x144, size 0x8
    class MemCardSaveLoad * m_saveLoadTarget; // offset 0x14C, size 0x4
    int m_mode; // offset 0x150, size 0x4
    int m_entryMode; // offset 0x154, size 0x4
    class UIReflow reflow; // offset 0x158, size 0x18
    unsigned char m_M2MLoaded; // offset 0x170, size 0x1
    class BString2 m_body; // offset 0x174, size 0x4
    class BString2 m_item_text[8]; // offset 0x178, size 0x20
    unsigned char m_selectionMemory[8]; // offset 0x198, size 0x8
    int m_bootcheckresults[2]; // offset 0x1A0, size 0x8
    int m_boxHeight; // offset 0x1A8, size 0x4
    unsigned int m_optionHeight; // offset 0x1AC, size 0x4
    enum WidgetState m_widgetState; // offset 0x1B0, size 0x4
    enum WidgetState m_widgetStatePrev; // offset 0x1B4, size 0x4
    unsigned int m_filterId; // offset 0x1B8, size 0x4
    unsigned char m_bMemCard1Available; // offset 0x1BC, size 0x1
    unsigned char m_bMemCard2Available; // offset 0x1BD, size 0x1
    unsigned char m_bSelectionMade; // offset 0x1BE, size 0x1
    int m_numberOfItems; // offset 0x1C0, size 0x4
    int m_selection; // offset 0x1C4, size 0x4
    enum eGameState m_destState; // offset 0x1C8, size 0x4
public:
    unsigned char m_bInCreateASim; // offset 0x1CC, size 0x1
    unsigned char m_bInNeightborhood; // offset 0x1CD, size 0x1
private:
    class WiiMoteToMenuInteractor m_WiiMoteToMenuInteractor; // offset 0x1D0, size 0x14
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x8
struct ButtonSemantic {
    // Members
    enum ECTRL_CMD eCntrCmd; // offset 0x0, size 0x4
    enum InteractorCommand eInteractorCmd; // offset 0x4, size 0x4
};
// total size: 0x8
struct StickSemantic {
    // Members
    signed short nStick; // offset 0x0, size 0x2
    signed short nAxis; // offset 0x2, size 0x2
    enum InteractorCommand eInteractorCmd; // offset 0x4, size 0x4
};
enum PlumbBob_MotionState {
    PLUMB_BOB_MOTION_NONE = 0,
    PLUMB_BOB_MOTION_SNAP_TO_TARGET = 1,
    PLUMB_BOB_MOTION_GRAVITATE_TO_TARGET = 2,
    PLUMB_BOB_MOTION_MOVE_TO_TARGET = 3,
    PLUMB_BOB_MOTION_SETTLING = 4,
    PLUMB_BOB_BOUNCE = 5,
    PLUMB_BOB_BOUNCE_AND_HOLD = 6,
    PLUMB_BOB_BOUNCE_HOLD = 7,
    PLUMB_BOB_MOTION_MAX = 8,
};
enum PlumbBob_EffectState {
    PLUMB_BOB_EFFECT_NONE = 0,
    PLUMB_BOB_EFFECT_POP = 1,
    PLUMB_BOB_EFFECT_MAX = 2,
};
enum PlumbBob_MorphState {
    PLUMB_BOB_MORPHTARGET_PLUMBBOB = 0,
    PLUMB_BOB_MORPHTARGET_ARROW = 1,
    PLUMB_BOB_MORPHTARGET_REPSTAR = 2,
    PLUMB_BOB_MORPHTARGET_REPSTAR_BROKEN = 3,
    PLUMB_BOB_MORPHTARGET_MAX = 4,
};
// total size: 0x78
class PlumbBobModel {
    // Members
public:
    float m_scale; // offset 0x0, size 0x4
    float m_zScale; // offset 0x4, size 0x4
    float m_tilt; // offset 0x8, size 0x4
    class EVec3 m_position; // offset 0xC, size 0xC
    float m_baseHeightOffset; // offset 0x18, size 0x4
    float m_currentHeightOffset; // offset 0x1C, size 0x4
    unsigned char m_bBob; // offset 0x20, size 0x1
    unsigned char m_bRotate; // offset 0x21, size 0x1
private:
    class ERModel * m_pModel; // offset 0x24, size 0x4
    class ERModel * m_pShadow; // offset 0x28, size 0x4
    float m_bobTime; // offset 0x2C, size 0x4
    float m_bobTheta; // offset 0x30, size 0x4
    int m_bobDir; // offset 0x34, size 0x4
    class EMat4 m_modelMatrix; // offset 0x38, size 0x40
};
// total size: 0x10
class PlumbBobStackEntry {
    // Members
    class EVec3 m_targetPos; // offset 0x0, size 0xC
    class PlumbBobOwner * m_pOwner; // offset 0xC, size 0x4
};
// total size: 0x44
class PlumbBobStack {
    // Members
    int m_stackDepth; // offset 0x0, size 0x4
    class PlumbBobStackEntry m_stack[4]; // offset 0x4, size 0x40
};
// total size: 0x1F4
class PlumbBob : public Physics {
    // Static members
    static class PlumbBob * s_pPlumbBob; // size: 0x4
    static class PlumbBobParms s_plumbBobParms; // size: 0x58

    // Members
    struct ELights m_lights; // offset 0x30, size 0xF8
    class EVec3 m_targetPos; // offset 0x128, size 0xC
    class EVec3 m_momentum; // offset 0x134, size 0xC
    float m_morphScale; // offset 0x140, size 0x4
    float m_effectScale; // offset 0x144, size 0x4
    int m_scaleDirection; // offset 0x148, size 0x4
    int m_morphDirection; // offset 0x14C, size 0x4
    float m_morphDuration_secs; // offset 0x150, size 0x4
    class BitFlags m_flags; // offset 0x154, size 0x4
    enum PlumbBob_MotionState m_state; // offset 0x158, size 0x4
    enum PlumbBob_EffectState m_effect; // offset 0x15C, size 0x4
    enum PlumbBob_MorphState m_morphTarget; // offset 0x160, size 0x4
    class PlumbBobModel * m_pModel; // offset 0x164, size 0x4
    int m_bounceCnt; // offset 0x168, size 0x4
    class PlumbBobOwner * m_pOwner; // offset 0x16C, size 0x4
    class PlumbBobStack m_ownerStack; // offset 0x170, size 0x44
    class EOrderTableData m_shadowOtd; // offset 0x1B4, size 0x3C
    int m_frameUpdateCount; // offset 0x1F0, size 0x4
};
// total size: 0x10
class IObjectList {
    // Members
    class vector m_objs; // offset 0x0, size 0x10
};
// total size: 0xC
class InfluenceMap {
    // Members
    int m_xSize; // offset 0x0, size 0x4
    int m_ySize; // offset 0x4, size 0x4
    class IObjectList * m_map; // offset 0x8, size 0x4
};
// total size: 0x18
class PlacementSpec {
    // Static members
    static unsigned char sLookingForRoof; // size: 0x1

    // Members
public:
    unsigned char inWorld; // offset 0x0, size 0x1
    class FTilePt location; // offset 0x4, size 0x8
    class cXObject * container; // offset 0xC, size 0x4
    int slotNum; // offset 0x10, size 0x4
    int level; // offset 0x14, size 0x4
};
// total size: 0x18
class HierarchySite {
    // Members
public:
    unsigned char inWorld; // offset 0x0, size 0x1
    class FTilePt location; // offset 0x4, size 0x8
    class cXObject * container; // offset 0xC, size 0x4
    int slotNum; // offset 0x10, size 0x4
    int level; // offset 0x14, size 0x4
};
// total size: 0x4
class iterator {
    // Members
    class Interaction * m_pInteraction; // offset 0x0, size 0x4
};
// total size: 0x8
class InteractionList {
    // Members
    class Interaction * m_pFirst; // offset 0x0, size 0x4
    class Interaction * m_pLast; // offset 0x4, size 0x4
};
// total size: 0x1C
class ObjTestSim {
    // Static members
    static class TTabScratchEntry * sCheckTreeModEntry; // size: 0x4
    static class Interaction * sInteraction; // size: 0x4
    static class InteractionList * sMenu; // size: 0x4
    static class ObjTestSim * sMenuBuilder; // size: 0x4

    // Members
    class cXPerson * fPerson; // offset 0x0, size 0x4
    class cXObject * fStackObject; // offset 0x4, size 0x4
    signed short fTempStash[8]; // offset 0x8, size 0x10
    class cXPerson * fStashed; // offset 0x18, size 0x4
};
static class EVec3 last_pos; // size: 0xC, address: 0x8048C79C
// total size: 0x60
class MenuItem {
    // Members
public:
    class cXObject * m_pObj; // offset 0x0, size 0x4
    class Interaction m_action; // offset 0x4, size 0x40
    class BString2 m_strLabel; // offset 0x44, size 0x4
    char * m_strLabelUTF8; // offset 0x48, size 0x4
    unsigned int m_shaderID; // offset 0x4C, size 0x4
    class ERShader * m_pShader; // offset 0x50, size 0x4
    unsigned char m_bDisabled; // offset 0x54, size 0x1
    class MenuItem * m_pSubmenu; // offset 0x58, size 0x4
    class MenuItem * m_pNext; // offset 0x5C, size 0x4
};
enum ScrollArrowEnableSetting {
    SCROLL_ARROW_ENABLE_NEITHER = 0,
    SCROLL_ARROW_ENABLE_TOP = 1,
    SCROLL_ARROW_ENABLE_BOTTOM = 2,
};
enum ObjectArrowEnableSetting {
    OBJECT_ENABLE_NEITHER = 0,
    OBJECT_ENABLE_PREVIOUS = 1,
    OBJECT_ENABLE_NEXT = 2,
};
// total size: 0x1F4
class ActionMenu : public UIObjectBase {
    // Static members
    static float m_sfTiltChangeThreshold; // size: 0x4
    static float m_ActionMenuPNObjectIcon_Height; // size: 0x4
    static float m_ActionMenuPNObjectIcon_Width; // size: 0x4
    static float m_ActionMenuPNObjectIcon_Y; // size: 0x4
    static float m_ActionMenuScroll_Fraction; // size: 0x4
    static float m_ActionMenuScroll_Width; // size: 0x4
    static float m_ActionMenuPosition_ItemHeight; // size: 0x4
    static float m_ActionMenuPosition_ItemWidth; // size: 0x4
    static float m_ActionMenuPosition_BottomY; // size: 0x4
    static float m_ActionMenuNextObjectIcon_X; // size: 0x4
    static float m_ActionMenuPreviousObjectIcon_X; // size: 0x4
    static float m_ActionMenuPosition_BottomX; // size: 0x4

    // Members
    unsigned int m_nMenuItemCount; // offset 0xA4, size 0x4
    unsigned int m_nMenuSelect; // offset 0xA8, size 0x4
    class MenuItem m_menu; // offset 0xAC, size 0x60
    class MenuItem * m_pMenuStack[8]; // offset 0x10C, size 0x20
    unsigned int m_nMenuSelectStack[8]; // offset 0x12C, size 0x20
    unsigned int m_nMenuFramingStack[8]; // offset 0x14C, size 0x20
    unsigned int m_nMenuDepth; // offset 0x16C, size 0x4
    unsigned char m_bShaderInstalled; // offset 0x170, size 0x1
    unsigned int m_framingIndex; // offset 0x174, size 0x4
    unsigned int m_filterId; // offset 0x178, size 0x4
    unsigned char m_IMUVisible; // offset 0x17C, size 0x1
    unsigned char m_IMUUsable; // offset 0x17D, size 0x1
    unsigned char m_markForClose; // offset 0x17E, size 0x1
    unsigned char m_ghostFlag; // offset 0x17F, size 0x1
    unsigned char m_ownsCursor; // offset 0x180, size 0x1
    char * m_IMUItemsTable[12]; // offset 0x184, size 0x30
    class cXObject * m_pSelectedObject; // offset 0x1B4, size 0x4
    unsigned char m_2LineMore; // offset 0x1B8, size 0x1
    unsigned char m_inDirectControl; // offset 0x1B9, size 0x1
    unsigned char m_IsFlashVisible; // offset 0x1BA, size 0x1
    unsigned char m_flashReady; // offset 0x1BB, size 0x1
    unsigned char m_bRightArrow; // offset 0x1BC, size 0x1
    unsigned char m_bLeftArrow; // offset 0x1BD, size 0x1
    unsigned char m_bRightArrow_LastSentToApt; // offset 0x1BE, size 0x1
    unsigned char m_bLeftArrow_LastSentToApt; // offset 0x1BF, size 0x1
    unsigned char m_bDPDOverMenu; // offset 0x1C0, size 0x1
    unsigned char m_inAnInteraction; // offset 0x1C1, size 0x1
    unsigned char m_refreshToZero; // offset 0x1C2, size 0x1
    class BString2 m_lastSelectionName; // offset 0x1C4, size 0x4
    int m_harvestCount; // offset 0x1C8, size 0x4
    int m_lastHarvestCount; // offset 0x1CC, size 0x4
    float m_harvestCountTimer; // offset 0x1D0, size 0x4
    class WiiMoteToMenuInteractor m_WiiMoteToMenuInteractor; // offset 0x1D4, size 0x14
    int m_iScrollOffset; // offset 0x1E8, size 0x4
    enum ScrollArrowEnableSetting m_ScrollButtonEnable; // offset 0x1EC, size 0x4
    enum ObjectArrowEnableSetting m_ObjectButtonEnable; // offset 0x1F0, size 0x4
};
// total size: 0xA4
class UIQDTarget : public UIObjectBase {};
// total size: 0xAC
class UIRouter : public UIObjectBase {
    // Members
public:
    class GetVariableCommandTable * m_pGVCTable; // offset 0xA4, size 0x4
    class SetVariableCommandTable * m_pSVCTable; // offset 0xA8, size 0x4
};
// total size: 0x30
class Physics {
    // Members
    class EVec3 m_physicsPos; // offset 0x0, size 0xC
    class EVec3 m_physicsVelocity; // offset 0xC, size 0xC
    class EVec3 m_physicsAcceleration; // offset 0x18, size 0xC
    float m_physicsVelocityDrag; // offset 0x24, size 0x4
    float m_physicsVelocityMax; // offset 0x28, size 0x4
    float m_physicsAccelerationScale; // offset 0x2C, size 0x4
};
enum InteractorCommand {
    EICMD_INVALID = -1,
    EICMD_ACCEPT_1 = 0,
    EICMD_ACCEPT_2 = 1,
    EICMD_ACCEPT_3 = 2,
    EICMD_ACCEPT_4 = 3,
    EICMD_CANCEL = 4,
    EICMD_CURSOR_ROTATE_CW = 5,
    EICMD_CURSOR_ROTATE_CCW = 6,
    EICMD_CURSOR_TRANSLATE_X = 7,
    EICMD_CURSOR_TRANSLATE_Y = 8,
    EICMD_CURSOR_NAV_UP = 9,
    EICMD_CURSOR_NAV_DOWN = 10,
    EICMD_CURSOR_NAV_LEFT = 11,
    EICMD_CURSOR_NAV_RIGHT = 12,
    EICMD_CAMERA_ROTATE_CW = 13,
    EICMD_CAMERA_ROTATE_CCW = 14,
    EICMD_CAMERA_TRANSLATE_X = 15,
    EICMD_CAMERA_TRANSLATE_Y = 16,
    EICMD_SWITCH_SIM_NEXT = 17,
    EICMD_SWITCH_SIM_PREV = 18,
    EICMD_SWITCH_TARGETING_MODE = 19,
    EICMD_CHANGE_CONTROL_MODE = 20,
    EICMD_PLAYER_MOVE_X = 21,
    EICMD_PLAYER_MOVE_Y = 22,
    EICMD_SHOW_CATALOG = 23,
    EICMD_EXIT_TOOL = 24,
    EICMD_UNDO = 25,
    EICMD_PAN = 26,
    EICMD_CLONE = 27,
    EICMD_CHANGE_TOOL = 28,
    EICMD_TRACK_CONTROLLER_CURSOR_X = 29,
    EICMD_TRACK_CONTROLLER_CURSOR_Y = 30,
    EICMD_COUNT = 31,
};
// total size: 0x78
class StateMachineFlow : public StateMachine {
    // Static members
    static enum eGameState m_stateLast; // size: 0x4
    static enum eGameState m_stateCurrent; // size: 0x4
    static enum eGameState m_stateRequest; // size: 0x4
};
// total size: 0x4
class ISimInstanceHandleGenerator {
    // Members
protected:
    unsigned int m_lastHandle; // offset 0x0, size 0x4
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0x14
class EIObjectMan {
    // Members
protected:
    class ISimInstanceHandleGenerator m_handleGen; // offset 0x0, size 0x4
    class TRedBlackTree m_objects; // offset 0x4, size 0xC
    class EHouse * m_pHouse; // offset 0x10, size 0x4
};
// total size: 0x28
struct FloorPainterParams : public InteractorParams {
    // Members
    struct FloorData floorData; // offset 0x14, size 0x8
    int tileCount; // offset 0x1C, size 0x4
    class vector * pInvStockChanges; // offset 0x20, size 0x4
    unsigned char bIsPlaceMode; // offset 0x24, size 0x1
};
// total size: 0x14
struct InteractorParams {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    enum InteractorType type; // offset 0x4, size 0x4
    int iPlayerID; // offset 0x8, size 0x4
    int uiCallbackUserData; // offset 0xC, size 0x4
    void (* fnNotificationCallBack)(struct CallbackData *); // offset 0x10, size 0x4
};
// total size: 0x218
class FloorPainter : public RayManipulator {
    // Static members
    static int UNLIMITED_STOCK; // size: 0x4

    // Members
    unsigned char m_StateFlags; // offset 0x1A1, size 0x1
    class EVec3 m_AnchorPos; // offset 0x1A4, size 0xC
    class EVec3 m_previewSortPos; // offset 0x1B0, size 0xC
    int m_tilesAvailable; // offset 0x1BC, size 0x4
    struct FloorPainterParams m_params; // offset 0x1C0, size 0x28
    class vector m_InvStockList; // offset 0x1E8, size 0x10
    int * m_removedTiles; // offset 0x1F8, size 0x4
    unsigned char m_IsAnchorDrawingOn; // offset 0x1FC, size 0x1
    struct UndoRedoCommand m_UndoRedoCommand; // offset 0x200, size 0x18
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct InvStock * mpBegin; // offset 0x0, size 0x4
    struct InvStock * mpEnd; // offset 0x4, size 0x4
    struct InvStock * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x8
struct InvStock {
    // Members
    int guid; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
};
// total size: 0x1A4
class RayManipulator : public BlueprintInteractor {
    // Members
    class EVec3 m_RayIntersectPos; // offset 0x70, size 0xC
    class EVec3 m_LastSelectedRayIntersectPos; // offset 0x7C, size 0xC
    unsigned char m_bResetArrow; // offset 0x88, size 0x1
    unsigned char m_bObjectHighlighted; // offset 0x89, size 0x1
    class EVec3 m_RayDirectionLast; // offset 0x8C, size 0xC
    class RayPicker m_RayPicker; // offset 0x98, size 0x1C
    float m_MaxCursorSpeed; // offset 0xB4, size 0x4
    class EVec3 m_CameraRotationPoint; // offset 0xB8, size 0xC
    class EVec3 m_PreviousWallHitPos; // offset 0xC4, size 0xC
    float m_CurrentCursorSpeed; // offset 0xD0, size 0x4
    class vector m_RayHitObjectList; // offset 0xD4, size 0x10
    class vector m_FinalObjectsHitByRay; // offset 0xE4, size 0x10
    class EIWallPart * m_NearestWall; // offset 0xF4, size 0x4
    class vector m_vNearestWalls; // offset 0xF8, size 0x10
    class vector m_FinalObjectsHitByRayWithWalls; // offset 0x108, size 0x10
    float m_FloorPosScaleFactor; // offset 0x118, size 0x4
    float m_CameraSpeedScaleFactor; // offset 0x11C, size 0x4
    float m_ScreenWidth; // offset 0x120, size 0x4
    float m_ScreenHeight; // offset 0x124, size 0x4
    unsigned short m_TextureWidth; // offset 0x128, size 0x2
    unsigned short m_TextureHeight; // offset 0x12A, size 0x2
    unsigned char m_TextureDepth; // offset 0x12C, size 0x1
    float m_cameraPanningSpeed; // offset 0x130, size 0x4
    float m_LotScaleFactor; // offset 0x134, size 0x4
    float m_MinimumCameraTurnRadius; // offset 0x138, size 0x4
    class CursorMovementTracker m_CursorTracker; // offset 0x13C, size 0x50
    class EVec2 m_CursorPoint; // offset 0x18C, size 0x8
protected:
    class EVec2 m_CameraDelta; // offset 0x194, size 0x8
    float m_FloorOffset; // offset 0x19C, size 0x4
    unsigned char m_bIsPanningMode; // offset 0x1A0, size 0x1
};
// total size: 0x70
class BlueprintInteractor : public Interactor {
    // Static members
    static class EVec3 m_vUp; // size: 0xC
    static float m_lastRotAng; // size: 0x4
    static float m_lastZoom; // size: 0x4
    static unsigned int m_lastCamMode; // size: 0x4
    static float m_lastMaxZoom; // size: 0x4
    static float m_lastTilt; // size: 0x4
    static unsigned char m_blueprintModeChangeInteractor; // size: 0x1
    static unsigned char m_lastBlueprintMode; // size: 0x1
    static unsigned char m_blueprintMode; // size: 0x1

    // Members
    int m_blueprintCURRefId; // offset 0x6C, size 0x4
};
// total size: 0x1C
struct CallbackData : public CallbackData {
    // Members
    unsigned char m_IsRemoveMode; // offset 0xC, size 0x1
    unsigned char m_IsArmed; // offset 0xD, size 0x1
    int m_TileCount; // offset 0x10, size 0x4
    class vector * m_pInvStockList; // offset 0x14, size 0x4
    struct FloorData * m_pFloorData; // offset 0x18, size 0x4
};
// total size: 0xC
struct CallbackData {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    enum ClientNotificationState state; // offset 0x4, size 0x4
    unsigned int uiUserData; // offset 0x8, size 0x4
};
// total size: 0x18
struct UndoRedoCommand {
    // Members
    int m_CommandID; // offset 0x0, size 0x4
    int m_ObjectGUID; // offset 0x4, size 0x4
    signed short m_ObjectID; // offset 0x8, size 0x2
    signed short m_ObjectDir; // offset 0xA, size 0x2
    class FTilePt m_ObjectPos; // offset 0xC, size 0x8
    int m_Price; // offset 0x14, size 0x4
};
enum eSidePanelVisible {
    eSidePanelVisible_None = 0,
    eSidePanelVisible_Motives = 1,
    eSidePanelVisible_RelationshipSidePanel = 2,
};
enum TutorialUnlockIndex {
    kTutorial_TutorialComplete = 0,
    kTutorial_PetVillageComplete = 1,
    kTutorial_WantsPanel = 32,
    kTutorial_ClassicControl = 33,
    kTutorial_BuildBuy = 34,
    kTutorial_PetInteraction = 35,
    kTutorial_PetWant = 36,
    kTutorial_PetTrick = 37,
    kTutorial_StoreUpgrade = 38,
    kTutorial_GoneToVillage = 39,
    kTutorial_BuildBuyWalls = 40,
    kTutorial_BuildBuyFloors = 41,
    kTutorial_PopupsDisabled = 42,
    kTutorial_PopupsPrompted = 43,
    kTutorial_OnPlaza = 44,
    kTutorial_StoreInteraction = 45,
    kTutorial_ATM = 46,
    kTutorial_Trainer = 47,
    kTutorial_PlazaUpgrade = 48,
    kTutorial_WelcomeWagon = 49,
    kTutorial_BuildBuyWallpaper = 50,
    kTutorial_WantsFears = 51,
    kTutorial_Relationships = 52,
    kTutorial_Career = 53,
    kTutorial_Skills = 54,
    kTutorial_Personality = 55,
};
// total size: 0x14C
class TutorialGUIManager : public UIObjectBase {
    // Members
    class UIDialog m_UIDialog; // offset 0xA4, size 0xA0
    unsigned char m_TutorialIsActive; // offset 0x144, size 0x1
    void (* m_pTutorialDialogCallback)(int); // offset 0x148, size 0x4
};
enum eFastForwardState {
    eFastForwardState_none = 0,
    eFastForwardState_fast = 1,
    eFastForwardState_very_fast = 2,
    eFastForwardState_pause = 3,
};
// total size: 0x338
class H2DTarget : public UIObjectBase {
    // Static members
    static float m_fCursorXLimit_Widescreen; // size: 0x4
    static float m_fCursorYLimit; // size: 0x4
    static float m_fCursorXLimit; // size: 0x4
    static float m_fSuperHudFade_MaxAlpha; // size: 0x4
    static float m_fSuperHudFade_FrameAlphaDecrement; // size: 0x4
    static float m_fSuperHudFade_FrameThreshold; // size: 0x4
    static float m_fSuperHudFade_CursorMovtThreshold; // size: 0x4
    static unsigned int m_nPauseRefCount; // size: 0x4

    // Members
    class ERFont * m_pFont; // offset 0xA4, size 0x4
    class MODTarget * m_pMODTarget; // offset 0xA8, size 0x4
public:
    class ActionMenu * m_pActionMenu; // offset 0xAC, size 0x4
    unsigned char m_StartFire; // offset 0xB0, size 0x1
private:
    class MOTTarget * m_pMOTTarget; // offset 0xB4, size 0x4
    class RSPTarget * m_pRSPTarget; // offset 0xB8, size 0x4
    class ACTTarget * m_pACTTarget; // offset 0xBC, size 0x4
    class ITBTarget * m_pITBTarget; // offset 0xC0, size 0x4
    class MDITarget * m_pMDITarget; // offset 0xC4, size 0x4
    class RMDTarget * m_pRMDTarget; // offset 0xC8, size 0x4
public:
    class SWSTarget * m_pSWSTarget; // offset 0xCC, size 0x4
private:
    class KFTTarget * m_pKFTTarget; // offset 0xD0, size 0x4
    int m_pausePlayer; // offset 0xD4, size 0x4
    int m_rmdType; // offset 0xD8, size 0x4
    int m_rmdUnlockIndex; // offset 0xDC, size 0x4
    unsigned char m_spawnRMD; // offset 0xE0, size 0x1
    unsigned char m_deleteRMDTarget; // offset 0xE1, size 0x1
    unsigned char m_textButtonPressed; // offset 0xE2, size 0x1
    unsigned int m_filterId; // offset 0xE4, size 0x4
    unsigned char m_cancelButtonPressed; // offset 0xE8, size 0x1
    int m_cancelButtonDownCount; // offset 0xEC, size 0x4
    unsigned char m_cancelModeEnabled; // offset 0xF0, size 0x1
    unsigned int m_cancelModeFilter; // offset 0xF4, size 0x4
    enum eSidePanelVisible m_openedPanel; // offset 0xF8, size 0x4
    int m_deferredLoadCounter; // offset 0xFC, size 0x4
    float m_time; // offset 0x100, size 0x4
    class TutorialGUIManager m_tutorialManager; // offset 0x104, size 0x14C
    unsigned char m_EnableSpeedControls; // offset 0x250, size 0x1
    unsigned int m_nLastSpeedButtons; // offset 0x254, size 0x4
    unsigned int m_nSpeedButtons; // offset 0x258, size 0x4
    int m_nLastSpeedState; // offset 0x25C, size 0x4
    int m_nSpeedState; // offset 0x260, size 0x4
    unsigned char m_enableGameOverDraw; // offset 0x264, size 0x1
    int m_gameOverStage; // offset 0x268, size 0x4
    int notifyKFTCompleteOccured; // offset 0x26C, size 0x4
    class UIReflow m_reflow; // offset 0x270, size 0x18
    int m_pauseTimer; // offset 0x288, size 0x4
    int m_fastforwardTimer; // offset 0x28C, size 0x4
    enum eFastForwardState m_fastForwardState; // offset 0x290, size 0x4
    unsigned char m_endOfGameFlag; // offset 0x294, size 0x1
    unsigned char m_bPauseMenuActive; // offset 0x295, size 0x1
    unsigned int m_SelectedItem; // offset 0x298, size 0x4
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x29C, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x2CC, size 0x50
    class EVec2 m_CursorPoint; // offset 0x31C, size 0x8
    class EVec2 m_prevCursorPoint; // offset 0x324, size 0x8
    unsigned char m_bSuperHudVisible; // offset 0x32C, size 0x1
    unsigned char m_bHudReturnPending; // offset 0x32D, size 0x1
    unsigned char m_bIsPaused; // offset 0x32E, size 0x1
    unsigned char m_bSuperHudHover; // offset 0x32F, size 0x1
    int m_iSuperHudFade_CursorMovtCounter; // offset 0x330, size 0x4
    int m_SuperHudAlpha; // offset 0x334, size 0x4
};
static int useStickPanning; // size: 0x4, address: 0x805D85A4
float m_BottomCursorLimit; // size: 0x4, address: 0x805DB6C0
float m_TopCursorLimit; // size: 0x4, address: 0x805DB6C4
static float controllerPadding; // size: 0x4, address: 0x805D85A8
class BluePrintGrid * s_pBPG; // size: 0x4, address: 0x805DB6C8
// total size: 0x18
class ECullPlane {
    // Members
    class EVec4 m_plane; // offset 0x0, size 0x10
    unsigned char m_boxNegVertex[3]; // offset 0x10, size 0x3
    unsigned char m_boxPosVertex[3]; // offset 0x13, size 0x3
};
// total size: 0xC4
class PyramidFade {
    // Members
public:
    void * m_excludeFromFade[2]; // offset 0x0, size 0x8
private:
    class ECullPlane m_planeRight; // offset 0x8, size 0x18
    class ECullPlane m_planeLeft; // offset 0x20, size 0x18
    class ECullPlane m_planeFar; // offset 0x38, size 0x18
    class ECullPlane m_planeBottom; // offset 0x50, size 0x18
    class ECullPlane m_planeTop; // offset 0x68, size 0x18
    class EVec2 m_farCenter; // offset 0x80, size 0x8
    class EVec2 m_depth; // offset 0x88, size 0x8
    class EVec2 m_depthSign; // offset 0x90, size 0x8
    class EVec3 m_CameraPos; // offset 0x98, size 0xC
    class EVec3 m_SimPos; // offset 0xA4, size 0xC
    unsigned char m_depthNegVertex[2]; // offset 0xB0, size 0x2
    unsigned char m_isEnabled; // offset 0xB2, size 0x1
    unsigned char m_isPointTest; // offset 0xB3, size 0x1
    float m_excludeFromFadeHeight; // offset 0xB4, size 0x4
    float m_alphaMin; // offset 0xB8, size 0x4
    unsigned char m_isInstantFade; // offset 0xBC, size 0x1
    enum InterestFadeType m_interestFade; // offset 0xC0, size 0x4
};
// total size: 0x20
class InstanceData {
    // Members
    class compact_map m_commandMapping; // offset 0x0, size 0x14
    int m_controllerFilterID; // offset 0x14, size 0x4
    class Interactor * m_pInteractor; // offset 0x18, size 0x4
    int m_initialControlLockoutCounter; // offset 0x1C, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x14
class compact_map {
    // Members
    class vector _M_t; // offset 0x0, size 0x10
protected:
    struct less _M_key_compare; // offset 0x10, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    struct pair * first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0xC
struct pair {
    // Members
    enum InteractorCommand first; // offset 0x0, size 0x4
    struct pair second; // offset 0x4, size 0x8
};
// total size: 0x8
struct pair {
    // Members
    unsigned char first; // offset 0x0, size 0x1
    enum ECTRL_CMD second; // offset 0x4, size 0x4
};
// total size: 0x8
class InteractorInputManager {
    // Members
    class InstanceData * m_pInstanceData; // offset 0x0, size 0x4
    int m_nActivePlayers; // offset 0x4, size 0x4
};
static unsigned char cButtonCmdUp; // size: 0x1, address: 0x805D85B6
class InteractorManager * s_pInteractorManager; // size: 0x4, address: 0x805DB6CC
class InteractorInputManager * s_pInputManager; // size: 0x4, address: 0x805DB6D0
class InteractorVisualizer * s_pVisualizer; // size: 0x4, address: 0x805DB6D4
// total size: 0x50
class InteractorManager {
    // Static members
    static class InteractorVisualizer * s_pVisualizer; // size: 0x4
    static class InteractorInputManager * s_pInputManager; // size: 0x4
    static class InteractorManager * s_pInteractorManager; // size: 0x4

    // Members
    unsigned char m_bIsInitialized; // offset 0x0, size 0x1
    struct InteractorParams m_Params; // offset 0x4, size 0x8
    class vector m_PlayerInteractorSets; // offset 0xC, size 0x10
    class vector m_ActiveInteractorSet; // offset 0x1C, size 0x10
    class vector m_ChangeInteractorTypeSet; // offset 0x2C, size 0x10
    unsigned char m_ChangePlayerInteractorFlags; // offset 0x3C, size 0x1
    class vector m_InteractorInfo; // offset 0x40, size 0x10
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct InteractorInfo * mpBegin; // offset 0x0, size 0x4
    struct InteractorInfo * mpEnd; // offset 0x4, size 0x4
    struct InteractorInfo * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct ActiveInteractor * mpBegin; // offset 0x0, size 0x4
    struct ActiveInteractor * mpEnd; // offset 0x4, size 0x4
    struct ActiveInteractor * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class vector * mpBegin; // offset 0x0, size 0x4
    class vector * mpEnd; // offset 0x4, size 0x4
    class vector * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class Interactor * * mpBegin; // offset 0x0, size 0x4
    class Interactor * * mpEnd; // offset 0x4, size 0x4
    class Interactor * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x8
struct InteractorParams {
    // Members
    int m_ActivePlayerCount; // offset 0x0, size 0x4
    int m_MaxPlayerCount; // offset 0x4, size 0x4
};
// total size: 0x10
struct InteractorInfo {
    // Members
    class EVec2 m_floorPos; // offset 0x0, size 0x8
    class EVec2 m_extents; // offset 0x8, size 0x8
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    const struct InteractorParams * second; // offset 0x4, size 0x4
};
enum InteractorType {
    INVALID_TYPE = -1,
    DIRECT_INTERACTOR = 0,
    RAY_INTERACTOR = 1,
    SIM_INTERACTOR = 2,
    GRAB_MANIPULATOR = 3,
    WALL_MANIPULATOR = 4,
    WALL_PAINTER = 5,
    FLOOR_PAINTER = 6,
    PLACE_MANIPULATOR = 7,
    SOCIALMODE_INTERACTOR = 8,
    HUT_PLACE_MANIPULATOR = 9,
    INTERACTOR_TYPE_COUNT = 10,
};
// total size: 0x8
struct ActiveInteractor {
    // Members
    enum InteractorType m_Type; // offset 0x0, size 0x4
    class Interactor * m_Interactor; // offset 0x4, size 0x4
};
// total size: 0x7C
class InteractorResourceSet {
    // Members
    class compact_map m_ModelResourceMap; // offset 0x0, size 0x14
    class compact_map m_ShaderResourceMap; // offset 0x14, size 0x14
    class compact_map m_TextureResourceMap; // offset 0x28, size 0x14
    class vector m_ModelLoadRequestSet; // offset 0x3C, size 0x10
    class vector m_ShaderLoadRequestSet; // offset 0x4C, size 0x10
    class vector m_TextureLoadRequestSet; // offset 0x5C, size 0x10
    class vector m_DrawOrderTableDataSet; // offset 0x6C, size 0x10
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class EOrderTableData * mpBegin; // offset 0x0, size 0x4
    class EOrderTableData * mpEnd; // offset 0x4, size 0x4
    class EOrderTableData * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x14
class compact_map {
    // Members
    class vector _M_t; // offset 0x0, size 0x10
protected:
    struct less _M_key_compare; // offset 0x10, size 0x1
};
// total size: 0x14
class compact_map {
    // Members
    class vector _M_t; // offset 0x0, size 0x10
protected:
    struct less _M_key_compare; // offset 0x10, size 0x1
};
// total size: 0x14
class compact_map {
    // Members
    class vector _M_t; // offset 0x0, size 0x10
protected:
    struct less _M_key_compare; // offset 0x10, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    struct pair * first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class ERModel * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    struct pair * first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class ERShader * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class ERTexture * second; // offset 0x4, size 0x4
};
// total size: 0x6
struct PlacementData {
    // Members
    signed short m_ContainerID; // offset 0x0, size 0x2
    signed short m_SlotNum; // offset 0x2, size 0x2
    unsigned char m_bPlacedInSlot; // offset 0x4, size 0x1
    unsigned char m_bOrientToContainer; // offset 0x5, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct InteractorParams * second; // offset 0x4, size 0x4
};
enum IMSnapType {
    IM_SNAP_NONE = 0,
    IM_SNAP_CENTER = 1,
    IM_SNAP_CORNER = 2,
    IM_SNAP_X_EDGE = 3,
    IM_SNAP_Y_EDGE = 4,
};
// total size: 0x18
class House : public Commander {
    // Members
public:
    class Family * fFamily; // offset 0x10, size 0x4
    class BString fHouseDesc; // offset 0x14, size 0x4
};
// total size: 0x158
class cXMTObject : public cXObject {
    // Members
public:
    class cXMTObject * fMultiNext; // offset 0x138, size 0x4
    class cXMTObject * fLeadObject; // offset 0x13C, size 0x4
    int fNormXOff; // offset 0x140, size 0x4
    int fNormYOff; // offset 0x144, size 0x4
    int fNormLevelOff; // offset 0x148, size 0x4
    int fXOff; // offset 0x14C, size 0x4
    int fYOff; // offset 0x150, size 0x4
    int fLevelOff; // offset 0x154, size 0x4
};
static enum eCTilePtDir _PerpTilePointTab[9]; // size: 0x24, address: 0x8041AF80
// total size: 0x8
struct PatternSellCount {
    // Members
    enum WallPattern pattern; // offset 0x0, size 0x4
    unsigned int sellCount; // offset 0x4, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
class ERC * s_pERC; // size: 0x4, address: 0x805DB6D8
static class EVec3 white; // size: 0xC, address: 0x8048C7A8
static class EVec3 green; // size: 0xC, address: 0x8048C7B4
static class EVec3 red; // size: 0xC, address: 0x8048C7C0
static class EVec3 brown; // size: 0xC, address: 0x8048C7CC
float s_gridDrawOffset[27]; // size: 0x6C, address: 0x80428420
// total size: 0x114
class InteractorVisualizer {
    // Static members
    static float s_gridDrawOffset[27]; // size: 0x6C
    static class ERC * s_pERC; // size: 0x4

    // Members
    class EOrderTableData * m_pDefaultDrawOrderTableData[2]; // offset 0x0, size 0x8
    class compact_map m_InteractorResourcesMap; // offset 0x8, size 0x14
    struct ELights m_Lights; // offset 0x1C, size 0xF8
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct pair * mpBegin; // offset 0x0, size 0x4
    struct pair * mpEnd; // offset 0x4, size 0x4
    struct pair * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x14
class compact_map {
    // Members
    class vector _M_t; // offset 0x0, size 0x10
protected:
    struct less _M_key_compare; // offset 0x10, size 0x1
};
static class EVec3 previewPos; // size: 0xC, address: 0x8048C7D8
// total size: 0x8
struct FloorData {
    // Members
    const struct FloorTile * floorTile; // offset 0x0, size 0x4
    int id; // offset 0x4, size 0x4
};
// total size: 0x22C
class WallPainter : public RayManipulator {
    // Static members
    static float m_wallHeight; // size: 0x4
    static float m_paperToolHeight; // size: 0x4
    static int UNLIMITED_STOCK; // size: 0x4

    // Members
    class EVec3 m_anchorPoint; // offset 0x1A4, size 0xC
    class EVec3 m_anchorPointDrawPos; // offset 0x1B0, size 0xC
    class EVec3 m_holdPos; // offset 0x1BC, size 0xC
    float m_cursorRotationAdjustment; // offset 0x1C8, size 0x4
    unsigned int m_StateFlags; // offset 0x1CC, size 0x4
    const struct WallTile * m_paperTileType; // offset 0x1D0, size 0x4
    int m_segmentsThatRemainToBeBuilt; // offset 0x1D4, size 0x4
    int m_affectedWalls; // offset 0x1D8, size 0x4
    class vector m_patternSellList; // offset 0x1DC, size 0x10
    struct WallPainterParams m_params; // offset 0x1EC, size 0x24
    unsigned char m_IsAnchorDrawingOn; // offset 0x210, size 0x1
    unsigned char m_IsValidAnchorPoint; // offset 0x211, size 0x1
    struct UndoRedoCommand m_UndoRedoCommand; // offset 0x214, size 0x18
};
static class EVec3 previewPos; // size: 0xC, address: 0x8048C7E4
// total size: 0x8
struct WallData {
    // Members
    const struct FenceData * fenceData; // offset 0x0, size 0x4
    int id; // offset 0x4, size 0x4
};
// total size: 0x4
class HelpDialogCallback {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xA8
class HelpDialog : public UIDialog {
    // Members
public:
    unsigned char m_useWarningIcon; // offset 0xA0, size 0x1
    unsigned char m_enabled; // offset 0xA1, size 0x1
    class HelpDialogCallback * m_callBack; // offset 0xA4, size 0x4
};
// total size: 0x314
class WallManipulator : public RayManipulator {
    // Static members
    static int m_textGetModeInvalid; // size: 0x4
    static int m_textGetModeSellValid; // size: 0x4
    static int m_textGetModeValidFence; // size: 0x4
    static int m_textGetModeValid; // size: 0x4
    static float m_affectedWallToolFenceHeight; // size: 0x4
    static float m_affectedWallToolHeight; // size: 0x4
    static float m_wallToolHeight; // size: 0x4
    static int UNLIMITED_STOCK; // size: 0x4

    // Members
protected:
    class EVec3 m_anchorPoint; // offset 0x1A4, size 0xC
    class EVec3 m_anchorPointDrawPos; // offset 0x1B0, size 0xC
    class vector m_fenceSellList; // offset 0x1BC, size 0x10
    class vector m_paperSellList; // offset 0x1CC, size 0x10
    class vector m_doorWindowSellList; // offset 0x1DC, size 0x10
    class vector m_WallFadeOffList; // offset 0x1EC, size 0x10
    class EVec3 m_vOff; // offset 0x1FC, size 0xC
private:
    unsigned int m_StateFlags; // offset 0x208, size 0x4
    int m_segmentsThatCanBeBuilt; // offset 0x20C, size 0x4
    int m_affectedWalls; // offset 0x210, size 0x4
    int m_selectionLength; // offset 0x214, size 0x4
    enum WallStyle m_style; // offset 0x218, size 0x4
    struct WallData m_fenceData; // offset 0x21C, size 0x8
    struct WallManipulatorParams m_params; // offset 0x224, size 0x28
    unsigned char m_IsDrawingEnabled; // offset 0x24C, size 0x1
    class CWallArray * m_pWallArray; // offset 0x250, size 0x4
    struct UndoRedoCommand m_UndoRedoCommand; // offset 0x254, size 0x18
    class HelpDialog m_HelpDialog; // offset 0x26C, size 0xA8
};
enum SimInteractorState {
    FOLLOWING_SIM = 0,
    FREE_MOVE = 1,
    WAITING_FOR_MENU = 2,
};
// total size: 0x20C
class SimInteractor : public Interactor, public PlumbBobOwner {
    // Static members
    static float s_rumbleIntensityForWell; // size: 0x4
    static float s_distanceToCutAfterSelect2; // size: 0x4
    static float s_gravityWellTimeToAct; // size: 0x4
    static class EVec3 s_invalidPos; // size: 0xC
    static float s_gravityWellVelocity; // size: 0x4
    static float m_closeToSimThreshold; // size: 0x4
    static float s_beamGrowDuration; // size: 0x4
    static float s_beamStartGrowTime; // size: 0x4

    // Members
    class FadeSquare m_fadeSquare[10]; // offset 0x6C, size 0xF0
    int m_nextFadeSquare; // offset 0x15C, size 0x4
    float m_time; // offset 0x160, size 0x4
    float m_timeToSnap; // offset 0x164, size 0x4
    unsigned char m_bSetupCutToSimWasRequested; // offset 0x168, size 0x1
    unsigned char m_bRequestedImmediateCutTo; // offset 0x169, size 0x1
    unsigned int m_savePlumbBobShadowId; // offset 0x16C, size 0x4
    unsigned char m_bPlumbBobParticlesInitialized; // offset 0x170, size 0x1
    unsigned char m_bPlumbBobReturnHasStarted; // offset 0x171, size 0x1
    class PlumbBob * m_pPlumbBob; // offset 0x174, size 0x4
    class Physics m_physics; // offset 0x178, size 0x30
    class EVec3 m_gravityWell; // offset 0x1A8, size 0xC
    float m_gravityWellDist2; // offset 0x1B4, size 0x4
    class EBound3 m_gravityWellBound; // offset 0x1B8, size 0x18
    class EVec3 m_gravityWellLast; // offset 0x1D0, size 0xC
    class EVec3 m_lastGravityWellInfluence; // offset 0x1DC, size 0xC
    float m_gravityWellTimer; // offset 0x1E8, size 0x4
    enum SimInteractorState m_state; // offset 0x1EC, size 0x4
    class EVec3 m_lastRumbleWell; // offset 0x1F0, size 0xC
    const class cXObject * m_gravityObject; // offset 0x1FC, size 0x4
    const class cXObject * m_lastGravityObject; // offset 0x200, size 0x4
    unsigned char m_simSwitcherMode; // offset 0x204, size 0x1
    int m_simSwitcherCountDown; // offset 0x208, size 0x4
};
static float xOffset; // size: 0x4, address: 0x805DB6E0
static float yOffset; // size: 0x4, address: 0x805DB6E8
// total size: 0x8
struct pair {
    // Members
    struct pair * first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x80
struct pair {
    // Members
    class Interactor * first; // offset 0x0, size 0x4
    class InteractorResourceSet second; // offset 0x4, size 0x7C
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class EOrderTableData * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    unsigned int * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1C
class PlacementObject {
    // Members
    class cXObject * m_ObjInHand; // offset 0x0, size 0x4
    class cXMTObject * m_pGridObjLead; // offset 0x4, size 0x4
    class FTilePt m_originalPos; // offset 0x8, size 0x8
    signed short m_originalDir; // offset 0x10, size 0x2
    unsigned char m_bDrawOverrideFlag; // offset 0x12, size 0x1
    class FTilePt m_bOverrideLocation; // offset 0x14, size 0x8
};
// total size: 0x1C
struct ObjectManipulatorParams : public InteractorParams {
    // Members
    class FireMarshall * m_pFireMarshall; // offset 0x14, size 0x4
    unsigned char m_IsInventoryMode; // offset 0x18, size 0x1
};
struct UndoRedoCommand m_UndoRedoCommand; // size: 0x18, address: 0x8048C7F0
// total size: 0x1F8
class ObjectManipulator : public RayManipulator {
    // Static members
    static struct UndoRedoCommand m_UndoRedoCommand; // size: 0x18

    // Members
protected:
    const char * m_szControllerFilterDebugName; // offset 0x1A4, size 0x4
    class PlacementObject m_PlacementObject; // offset 0x1A8, size 0x1C
    class EVec3 m_gravityWell; // offset 0x1C4, size 0xC
    float m_gravityWellDist2; // offset 0x1D0, size 0x4
    unsigned char m_IsCursorModelEnabled; // offset 0x1D4, size 0x1
    class EVec3 m_GrabOffset; // offset 0x1D8, size 0xC
    unsigned char m_UseOffsetGrabMath; // offset 0x1E4, size 0x1
    unsigned char m_RefocusingOnSelectedObject; // offset 0x1E5, size 0x1
    int m_RefocusSafeFramesCountdown; // offset 0x1E8, size 0x4
    class FTilePt m_OldSnapPosTile; // offset 0x1EC, size 0x8
    unsigned char m_IsInventoryMode; // offset 0x1F4, size 0x1
    unsigned char m_bJustPickedUpObject; // offset 0x1F5, size 0x1
    unsigned char m_bMoveEnabled; // offset 0x1F6, size 0x1
};
// total size: 0x8
struct OverlapData {
    // Members
    const class EBound3 * m_pBound; // offset 0x0, size 0x4
    const class cXObject * m_pObject; // offset 0x4, size 0x4
};
// total size: 0x28
struct GrabManipulatorParams : public ObjectManipulatorParams {
    // Members
    unsigned char m_IsCloneMode; // offset 0x19, size 0x1
    unsigned char m_UseStartPos; // offset 0x1A, size 0x1
    class EVec3 m_StartPos; // offset 0x1C, size 0xC
};
// total size: 0x18
struct CallbackData : public CallbackData {
    // Members
    unsigned char m_IsCloneMode; // offset 0xC, size 0x1
    class cXObject * m_pCurrentObject; // offset 0x10, size 0x4
    unsigned char m_bAddToInventorySuccessful; // offset 0x14, size 0x1
};
// total size: 0x224
class GrabManipulator : public ObjectManipulator {
    // Members
    struct GrabManipulatorParams m_params; // offset 0x1F8, size 0x28
    int m_actionTakenFrame; // offset 0x220, size 0x4
};
enum eDestroyObjectContext {
    kDOC_None = 0,
    kDOC_Delete = 1,
    kDOC_Sell = 2,
    kDOC_Inventory = 3,
};
// total size: 0x18
struct CallbackData : public CallbackData {
    // Members
    unsigned char m_RestartPlacement; // offset 0xC, size 0x1
    int m_ObjSelectorGUID; // offset 0x10, size 0x4
    class cXObject * m_PlacedObject; // offset 0x14, size 0x4
};
// total size: 0x28
struct PlaceManipulatorParams : public ObjectManipulatorParams {
    // Members
    int m_ObjectGUID; // offset 0x1C, size 0x4
    unsigned char m_ColorIndex; // offset 0x20, size 0x1
    unsigned char m_bSetDirection; // offset 0x21, size 0x1
    signed short m_Direction; // offset 0x22, size 0x2
    unsigned char m_AllowCancel; // offset 0x24, size 0x1
};
// total size: 0x220
class PlaceManipulator : public ObjectManipulator {
    // Members
    struct PlaceManipulatorParams m_params; // offset 0x1F8, size 0x28
};
// total size: 0x18
class BluePrintGrid {
    // Static members
    static unsigned int m_Palette[7]; // size: 0x1C
    static unsigned char m_Colors[7][4]; // size: 0x1C
    static class cXObject * m_pObjectInHand; // size: 0x4
    static unsigned char m_bGridModeHasChanged; // size: 0x1
    static enum GridMode m_gridMode; // size: 0x4

    // Members
    int m_xSize; // offset 0x0, size 0x4
    int m_ySize; // offset 0x4, size 0x4
    int m_xCount; // offset 0x8, size 0x4
    int m_yCount; // offset 0xC, size 0x4
    int m_segmentCount; // offset 0x10, size 0x4
    class GridSegment * m_gridSegments; // offset 0x14, size 0x4
};
enum RotateDirection {
    CW = 0,
    CCW = 1,
};
// total size: 0x18
struct CallbackData : public CallbackData {
    // Members
    unsigned char m_RestartPlacement; // offset 0xC, size 0x1
    int m_ObjSelectorGUID; // offset 0x10, size 0x4
    class cXObject * m_PlacedObject; // offset 0x14, size 0x4
};
// total size: 0x44
struct HutPlaceManipulatorParams : public ObjectManipulatorParams {
    // Members
    int m_ObjectGUID; // offset 0x1C, size 0x4
    unsigned char m_ColorIndex; // offset 0x20, size 0x1
    unsigned char m_bSetDirection; // offset 0x21, size 0x1
    signed short m_Direction; // offset 0x22, size 0x2
    unsigned char m_AllowCancel; // offset 0x24, size 0x1
    unsigned char m_UseStartPos; // offset 0x25, size 0x1
    class EVec3 m_StartPos; // offset 0x28, size 0xC
    class CTilePt m_cTilePtLastPlace; // offset 0x34, size 0x3
    class HutRecipe * m_pHutRecipe; // offset 0x38, size 0x4
    class HUTIO * m_pHutio; // offset 0x3C, size 0x4
    int m_binaryGUID; // offset 0x40, size 0x4
};
// total size: 0x23C
class HutPlaceManipulator : public ObjectManipulator {
    // Members
    struct HutPlaceManipulatorParams m_params; // offset 0x1F8, size 0x44
};
static signed short lastPlacementDir; // size: 0x2, address: 0x805D85C4
// total size: 0xC
class HUTIO {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class cXMTObject * m_placementObject; // offset 0x4, size 0x4
    class cXObject * m_objInHand; // offset 0x8, size 0x4
};
// total size: 0x50
class HutRecipe {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class TNodeList m_floorList; // offset 0x4, size 0xC
    class TNodeList m_wallList; // offset 0x10, size 0xC
    class TNodeList m_objectList; // offset 0x1C, size 0xC
    class TNodeList m_objectFloorList; // offset 0x28, size 0xC
    class vector m_footprintList; // offset 0x34, size 0x10
    unsigned char m_initialized; // offset 0x44, size 0x1
    int m_sizeX; // offset 0x48, size 0x4
    int m_sizeY; // offset 0x4C, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x8
class HRObjectFloorRecord {
    // Members
public:
    class CTilePt cTilePt; // offset 0x0, size 0x3
    void * __vptr$; // offset 0x4, size 0x4
};
// total size: 0x10
class HRObjectRecord {
    // Members
public:
    class CTilePt cTilePt; // offset 0x0, size 0x3
    int rotation; // offset 0x4, size 0x4
    int guid; // offset 0x8, size 0x4
    void * __vptr$; // offset 0xC, size 0x4
};
// total size: 0x1C
class HRWallRecord {
    // Members
public:
    class CTilePt cTilePt; // offset 0x0, size 0x3
    enum TileWallsSegment segment; // offset 0x4, size 0x4
    enum DiagonalSideSelector idws; // offset 0x8, size 0x4
    enum WallPattern iwpat; // offset 0xC, size 0x4
    enum WallPattern owpat; // offset 0x10, size 0x4
    enum FloorPattern ifpat; // offset 0x14, size 0x4
    void * __vptr$; // offset 0x18, size 0x4
};
// total size: 0xC
class HRFloorRecord {
    // Members
public:
    class CTilePt cTilePt; // offset 0x0, size 0x3
    enum FloorPattern pattern; // offset 0x4, size 0x4
    void * __vptr$; // offset 0x8, size 0x4
};
class RayInteractor * m_SingletonRayInteractor; // size: 0x4, address: 0x805DB6F0
class EVec3 s_invalidPos; // size: 0xC, address: 0x8048C808
float m_CameraSpeedScaleFactor; // size: 0x4, address: 0x805D85C8
float m_ScreenWidth; // size: 0x4, address: 0x805D85CC
float m_ScreenHeight; // size: 0x4, address: 0x805D85D0
float m_sCameraPanningSpeed; // size: 0x4, address: 0x805D85D4
float m_LotScaleFactor; // size: 0x4, address: 0x805D85D8
float m_sMinimumCameraTurnRadius; // size: 0x4, address: 0x805D85DC
enum RayInteractorState {
    FOLLOWING_SIM = 0,
    FREE_MOVE = 1,
    WAITING_FOR_MENU = 2,
};
// total size: 0x1B4
class RayInteractor : public Interactor, public PlumbBobOwner {
    // Static members
    static float m_sMinimumCameraTurnRadius; // size: 0x4
    static float m_LotScaleFactor; // size: 0x4
    static float m_sCameraPanningSpeed; // size: 0x4
    static unsigned char m_TextureDepth; // size: 0x1
    static unsigned short m_TextureHeight; // size: 0x2
    static unsigned short m_TextureWidth; // size: 0x2
    static float m_ScreenHeight; // size: 0x4
    static float m_ScreenWidth; // size: 0x4
    static float m_CameraSpeedScaleFactor; // size: 0x4
    static float m_FloorPosScaleFactor; // size: 0x4
    static class RayInteractor * m_SingletonRayInteractor; // size: 0x4
    static float s_distanceToCutAfterSelect2; // size: 0x4
    static class EVec3 s_invalidPos; // size: 0xC
    static float m_closeToSimThreshold; // size: 0x4
    static float s_beamGrowDuration; // size: 0x4
    static float s_beamStartGrowTime; // size: 0x4

    // Members
    float m_time; // offset 0x6C, size 0x4
    float m_timeToSnap; // offset 0x70, size 0x4
    unsigned char m_bSetupCutToSimWasRequested; // offset 0x74, size 0x1
    unsigned char m_bRequestedImmediateCutTo; // offset 0x75, size 0x1
    unsigned int m_savePlumbBobShadowId; // offset 0x78, size 0x4
    unsigned char m_bPlumbBobParticlesInitialized; // offset 0x7C, size 0x1
    unsigned char m_bPlumbBobReturnHasStarted; // offset 0x7D, size 0x1
    class PlumbBob * m_pPlumbBob; // offset 0x80, size 0x4
    class Physics m_physics; // offset 0x84, size 0x30
    enum RayInteractorState m_state; // offset 0xB4, size 0x4
    class EVec3 m_lastRumbleWell; // offset 0xB8, size 0xC
    class EVec3 m_RayIntersectPos; // offset 0xC4, size 0xC
    class EVec3 m_LastSelectedRayIntersectPos; // offset 0xD0, size 0xC
    unsigned char m_bSquareKeyPressed; // offset 0xDC, size 0x1
    unsigned char m_bResetArrow; // offset 0xDD, size 0x1
    unsigned char m_bObjectHighlighted; // offset 0xDE, size 0x1
    class vector m_RayHitObjectList; // offset 0xE0, size 0x10
    class vector m_FinalObjectsHitByRay; // offset 0xF0, size 0x10
    class EIWallPart * m_NearestWall; // offset 0x100, size 0x4
    class vector m_vNearestWalls; // offset 0x104, size 0x10
    class EVec3 m_RayDirectionLast; // offset 0x114, size 0xC
    class RayPicker m_RayPicker; // offset 0x120, size 0x1C
    unsigned char m_simSwitcherMode; // offset 0x13C, size 0x1
    int m_simSwitcherCountDown; // offset 0x140, size 0x4
    unsigned char m_bCursorPointsToGround; // offset 0x144, size 0x1
    unsigned char m_bCameraSetup; // offset 0x145, size 0x1
public:
    class EVec3 m_CameraRotationPoint; // offset 0x148, size 0xC
    class CursorMovementTracker m_CursorTracker; // offset 0x154, size 0x50
    class EVec2 m_CursorPoint; // offset 0x1A4, size 0x8
    class EVec2 m_CameraDelta; // offset 0x1AC, size 0x8
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class EInstance * * mpBegin; // offset 0x0, size 0x4
    class EInstance * * mpEnd; // offset 0x4, size 0x4
    class EInstance * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class ISimInstance * * mpBegin; // offset 0x0, size 0x4
    class ISimInstance * * mpEnd; // offset 0x4, size 0x4
    class ISimInstance * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0xC
class CursorStackItem {
    // Members
public:
    int m_refId; // offset 0x0, size 0x4
    unsigned char m_bOn; // offset 0x4, size 0x1
    char * m_pDebugString; // offset 0x8, size 0x4
};
// total size: 0x240
class CURTarget : public UIObjectBase {
    // Static members
    static int m_sAlphaValueMax; // size: 0x4
    static int m_sAlphaValueLow; // size: 0x4
    static class CURTarget * s_SingletonCURTarget; // size: 0x4

    // Members
    unsigned char m_bIsVisible; // offset 0xA4, size 0x1
    int m_CurrentPixelX; // offset 0xA8, size 0x4
    int m_CurrentPixelY; // offset 0xAC, size 0x4
    int m_PreviousPixelX; // offset 0xB0, size 0x4
    int m_PreviousPixelY; // offset 0xB4, size 0x4
    int m_ScreenLeftCursorCutoff; // offset 0xB8, size 0x4
    int m_ScreenRightCursorCutoff; // offset 0xBC, size 0x4
    int m_ScreenTopCursorCutoff; // offset 0xC0, size 0x4
    int m_ScreenBottomCursorCutoff; // offset 0xC4, size 0x4
    int m_AlphaValue; // offset 0xC8, size 0x4
    enum CursorState m_CursorState; // offset 0xCC, size 0x4
    unsigned char m_bHighlighted; // offset 0xD0, size 0x1
    unsigned char m_bUseClamping; // offset 0xD1, size 0x1
    int m_currentCURRefID; // offset 0xD4, size 0x4
    class CursorStackItem m_cursorStack[30]; // offset 0xD8, size 0x168
};
enum CursorState {
    kCursorState_Arrow = 0,
    kCursorState_Feet = 1,
    kCursorState_Grab = 2,
    kCursorState_Place = 3,
    kCursorState_Copy = 4,
    kCursorState_Paste = 5,
    kCursorState_Floor = 6,
    kCursorState_Wall = 7,
    kCursorState_Wallpaper = 8,
    kCursorState_Demolish = 9,
    kCursorState_Family = 10,
    kCursorState_Panning = 11,
    kCursorState_Disabled = 12,
};
static int frame_number; // size: 0x4, address: 0x805DB6F4
// total size: 0x20
class SimsObjAnimDef {
    // Members
public:
    struct ObjAnimDef animDef; // offset 0x0, size 0x20
};
// total size: 0xC
class TArray {
    // Members
protected:
    class EILight * * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x5B8
class ISimsObjectModel : public ISimInstance {
    // Static members
    static class ERShader * m_pWhiteShader; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class EHouse * m_pEHouse; // offset 0x4C4, size 0x4
    unsigned int m_bAnimSleep : 1; // offset 0x4C8, size 0x4
    unsigned int m_bWasHidden : 1; // offset 0x4C8, size 0x4
    unsigned int m_bAmOutside : 1; // offset 0x4C8, size 0x4
    unsigned int m_bSubModel : 1; // offset 0x4C8, size 0x4
    unsigned int m_bNetWasHidden : 1; // offset 0x4C8, size 0x4
protected:
    int p1blendidx[2]; // offset 0x4CC, size 0x8
    int p2blendidx[2]; // offset 0x4D4, size 0x8
    unsigned int m_curShdId; // offset 0x4DC, size 0x4
    unsigned int m_lastGraphic; // offset 0x4E0, size 0x4
public:
    unsigned int m_nTracks; // offset 0x4E4, size 0x4
protected:
    float m_time; // offset 0x4E8, size 0x4
    float m_fRot; // offset 0x4EC, size 0x4
    float m_burpTime; // offset 0x4F0, size 0x4
    int m_lastdir; // offset 0x4F4, size 0x4
    class EVec3 m_vPos; // offset 0x4F8, size 0xC
    class EVec3 m_vDir; // offset 0x504, size 0xC
    class ERShader * m_pCurShader; // offset 0x510, size 0x4
    class SimsObjAnimDef m_curState; // offset 0x514, size 0x20
    class TNodeList m_ParticleObjs; // offset 0x534, size 0xC
    class EIStaticModel * m_pShadow; // offset 0x540, size 0x4
    class TNodeList m_subModelList; // offset 0x544, size 0xC
    class EIWallPart * m_pWall; // offset 0x550, size 0x4
    class EILight * m_pLightBulb; // offset 0x554, size 0x4
    class TArray m_animatedLights; // offset 0x558, size 0xC
    float hold_ftheta; // offset 0x564, size 0x4
    class EVec3 hold_vPos; // offset 0x568, size 0xC
    class EVec3 hold_vScale; // offset 0x574, size 0xC
    float m_fAnimInterval; // offset 0x580, size 0x4
    int m_iAnimDuration; // offset 0x584, size 0x4
    unsigned char m_iAnimPlaying; // offset 0x588, size 0x1
    unsigned char m_loopAnimTags; // offset 0x589, size 0x1
    unsigned char m_loopedOnce; // offset 0x58A, size 0x1
    unsigned char m_pauseAnim; // offset 0x58B, size 0x1
    class vector m_eventQueue; // offset 0x58C, size 0x10
    unsigned int m_AnimPending; // offset 0x59C, size 0x4
    unsigned int m_ModelPending; // offset 0x5A0, size 0x4
    unsigned char m_bAnimLoaded; // offset 0x5A4, size 0x1
    unsigned char m_bModelLoaded; // offset 0x5A5, size 0x1
private:
    int bLastSplitLevel; // offset 0x5A8, size 0x4
    class ERModel * m_pTrackBase; // offset 0x5AC, size 0x4
    float m_scaletime; // offset 0x5B0, size 0x4
};
// total size: 0x18
class FadeSquare {
    // Members
    class EVec3 m_pos; // offset 0x0, size 0xC
    class ERModel * m_model; // offset 0xC, size 0x4
    float m_time; // offset 0x10, size 0x4
    unsigned char m_fading; // offset 0x14, size 0x1
    unsigned char m_initEffect; // offset 0x15, size 0x1
};
class EVec3 s_invalidPos; // size: 0xC, address: 0x8048C814
// total size: 0x7C
class SocialModeInteractor : public Interactor {
    // Members
    signed short m_ChosenActionID; // offset 0x6C, size 0x2
    unsigned int m_externalFilterId; // offset 0x70, size 0x4
    unsigned int m_internalFilterId; // offset 0x74, size 0x4
    int m_timeOut; // offset 0x78, size 0x4
};
// total size: 0xA8
class FireMarshall {
    // Static members
    static float m_SavedFenceValue; // size: 0x4
    static float m_SavedWallValue; // size: 0x4

    // Members
    unsigned char m_seenFireCodeFirstThreshold; // offset 0x0, size 0x1
    unsigned char m_seenFireCodeSecondThreshold; // offset 0x1, size 0x1
    unsigned char m_spawnFireCodeDialogFirstThreshold; // offset 0x2, size 0x1
    unsigned char m_spawnFireCodeDialogSecondThreshold; // offset 0x3, size 0x1
    unsigned char m_spawnFireCodeDialog; // offset 0x4, size 0x1
    unsigned char m_placedObjectAfterSecondWarning; // offset 0x5, size 0x1
    unsigned char m_hasDialogOpen; // offset 0x6, size 0x1
    class UIDialog m_UIDialog; // offset 0x8, size 0xA0
};
// total size: 0x28
struct WallManipulatorParams : public InteractorParams {
    // Members
    unsigned char m_inFenceMode; // offset 0x14, size 0x1
    unsigned char m_inSellMode; // offset 0x15, size 0x1
    struct WallData m_fenceData; // offset 0x18, size 0x8
    int m_segmentsThatCanBeBuilt; // offset 0x20, size 0x4
    class FireMarshall * m_pFireMarshall; // offset 0x24, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct PatternSellCount * mpBegin; // offset 0x0, size 0x4
    struct PatternSellCount * mpEnd; // offset 0x4, size 0x4
    struct PatternSellCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct FenceSellCount * mpBegin; // offset 0x0, size 0x4
    struct FenceSellCount * mpEnd; // offset 0x4, size 0x4
    struct FenceSellCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
enum ClientNotificationState {
    CNS_OPERATION_STATE_INVALID = -1,
    CNS_OPERATION_STATE_SUCCESS = 0,
    CNS_OPERATION_STATE_CANCEL = 1,
    CNS_OPERATION_STATE_GRAB_REMOVE_FROM_WORLD = 2,
    CNS_OPERATION_STATE_GRAB_PICKUP = 3,
    CNS_SESSION_CANCEL = 4,
    CNS_SESSION_SWAP_TOOLS = 5,
    CNS_EVENT_AVAILABLE_BUILD_ITEM_COUNT_CHANGED = 6,
    CNS_SHOW_CATALOG = 7,
    CNS_EXIT_TOOL = 8,
    CNS_EVENT_EYEDROPPER_ACTIVATED = 9,
    CNS_EVENT_UNDO = 10,
    CNS_OPERATION_STATE_COUNT = 11,
};
// total size: 0x48
struct CallbackData : public CallbackData {
    // Members
    struct WallData * m_pWallData; // offset 0xC, size 0x4
    int m_numChangeInNumSegments; // offset 0x10, size 0x4
    unsigned char m_IsArmed; // offset 0x14, size 0x1
    class vector m_returnedFenceSellList; // offset 0x18, size 0x10
    class vector m_returnedPaperSellList; // offset 0x28, size 0x10
    class vector m_returnedDoorWindowSellList; // offset 0x38, size 0x10
};
// total size: 0x8
struct FenceSellCount {
    // Members
    enum WallStyle fenceStyle; // offset 0x0, size 0x4
    unsigned int sellCount; // offset 0x4, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    float * mpBegin; // offset 0x0, size 0x4
    float * mpEnd; // offset 0x4, size 0x4
    float * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x168
class cXPortal : public cXMTObject {
    // Members
public:
    class vector fRouteScoreTable; // offset 0x158, size 0x10
};
static float kCursorBaseAdditionalRotation; // size: 0x4, address: 0x805DB6F8
// total size: 0x8
struct WallPaperData {
    // Members
    const struct WallTile * wallTile; // offset 0x0, size 0x4
    int id; // offset 0x4, size 0x4
};
// total size: 0x24
struct WallPainterParams : public InteractorParams {
    // Members
    unsigned char m_inRemoveMode; // offset 0x14, size 0x1
    struct WallPaperData m_paperData; // offset 0x18, size 0x8
    int m_segmentsThatCanBeBuilt; // offset 0x20, size 0x4
};
// total size: 0x2C
struct CallbackData : public CallbackData {
    // Members
    unsigned int m_itemID; // offset 0xC, size 0x4
    unsigned char m_IsArmed; // offset 0x10, size 0x1
    int m_numChangeInNumSegments; // offset 0x14, size 0x4
    class vector m_returnedSellList; // offset 0x18, size 0x10
    struct WallPaperData * m_pWallPaperData; // offset 0x28, size 0x4
};
unsigned char m_blueprintMode; // size: 0x1, address: 0x805DB6FC
unsigned char m_lastBlueprintMode; // size: 0x1, address: 0x805DB6FD
unsigned char m_blueprintModeChangeInteractor; // size: 0x1, address: 0x805DB6FE
float m_lastTilt; // size: 0x4, address: 0x805DB700
float m_lastMaxZoom; // size: 0x4, address: 0x805DB704
unsigned int m_lastCamMode; // size: 0x4, address: 0x805DB708
float m_lastZoom; // size: 0x4, address: 0x805DB70C
float m_lastRotAng; // size: 0x4, address: 0x805DB710
class EVec3 m_vUp; // size: 0xC, address: 0x8048C820
// total size: 0x14
class GridSegment {
    // Members
public:
    int m_x0; // offset 0x0, size 0x4
    int m_x1; // offset 0x4, size 0x4
    int m_y0; // offset 0x8, size 0x4
    int m_y1; // offset 0xC, size 0x4
private:
    class ERShader * m_pShader; // offset 0x10, size 0x4
};
unsigned char m_Colors[7][4]; // size: 0x1C, address: 0x8041B170
unsigned int m_Palette[7]; // size: 0x1C, address: 0x8048C82C
enum GridMode {
    kGridModeNormal = 0,
};
unsigned char m_bGridModeHasChanged; // size: 0x1, address: 0x805D860B
class cXObject * m_pObjectInHand; // size: 0x4, address: 0x805DB714
static int frame_number; // size: 0x4, address: 0x805DB718
static int frame_number; // size: 0x4, address: 0x805DB71C
// total size: 0x70
struct {} __vt__Q216InteractorModule19HutPlaceManipulator; // size: 0x70, address: 0x80428C60
// total size: 0xC
struct {} __vt__Q316InteractorModule19HutPlaceManipulator25HutPlaceManipulatorParams; // size: 0xC, address: 0x80428CD0
// total size: 0xC
struct {} __vt__Q316InteractorModule19HutPlaceManipulator12CallbackData; // size: 0xC, address: 0x80428CDC
// total size: 0xC
struct {} __vt__5HUTIO; // size: 0xC, address: 0x80428CE8
// total size: 0xC
struct {} __vt__9HutRecipe; // size: 0xC, address: 0x80428CF4
// total size: 0x70
struct {} __vt__Q216InteractorModule13RayInteractor; // size: 0x70, address: 0x80428D00
// total size: 0x6C
struct {} __vt__Q216InteractorModule20SocialModeInteractor; // size: 0x6C, address: 0x80428D70
// total size: 0x70
struct {} __vt__Q216InteractorModule15WallManipulator; // size: 0x70, address: 0x80428DE0
// total size: 0xC
struct {} __vt__Q316InteractorModule15WallManipulator21WallManipulatorParams; // size: 0xC, address: 0x80428E50
// total size: 0xC
struct {} __vt__Q316InteractorModule15WallManipulator12CallbackData; // size: 0xC, address: 0x80428E5C
// total size: 0x70
struct {} __vt__Q216InteractorModule11WallPainter; // size: 0x70, address: 0x80428E68
// total size: 0xC
struct {} __vt__Q316InteractorModule11WallPainter17WallPainterParams; // size: 0xC, address: 0x80428ED8
// total size: 0xC
struct {} __vt__Q316InteractorModule11WallPainter12CallbackData; // size: 0xC, address: 0x80428EE4
// total size: 0x70
struct {} __vt__Q216InteractorModule16PlaceManipulator; // size: 0x70, address: 0x80428EF0
// total size: 0xC
struct {} __vt__Q316InteractorModule16PlaceManipulator22PlaceManipulatorParams; // size: 0xC, address: 0x80428F60
// total size: 0xC
struct {} __vt__Q316InteractorModule16PlaceManipulator12CallbackData; // size: 0xC, address: 0x80428F6C
// total size: 0x70
struct {} __vt__Q216InteractorModule15GrabManipulator; // size: 0x70, address: 0x80428F78
// total size: 0xC
struct {} __vt__Q316InteractorModule15GrabManipulator21GrabManipulatorParams; // size: 0xC, address: 0x80428FE8
// total size: 0xC
struct {} __vt__Q316InteractorModule15GrabManipulator12CallbackData; // size: 0xC, address: 0x80428FF4
// total size: 0x70
struct {} __vt__Q216InteractorModule17ObjectManipulator; // size: 0x70, address: 0x80429000
// total size: 0xC
struct {} __vt__Q316InteractorModule17ObjectManipulator23ObjectManipulatorParams; // size: 0xC, address: 0x80429070
// total size: 0x74
struct {} __vt__Q216InteractorModule13SimInteractor; // size: 0x74, address: 0x8042907C
// total size: 0x70
struct {} __vt__Q216InteractorModule12FloorPainter; // size: 0x70, address: 0x804290F0
// total size: 0xC
struct {} __vt__Q316InteractorModule12FloorPainter18FloorPainterParams; // size: 0xC, address: 0x80429160
// total size: 0xC
struct {} __vt__Q316InteractorModule12FloorPainter12CallbackData; // size: 0xC, address: 0x8042916C
// total size: 0x70
struct {} __vt__Q216InteractorModule14RayManipulator; // size: 0x70, address: 0x80429178
// total size: 0x6C
struct {} __vt__Q216InteractorModule19BlueprintInteractor; // size: 0x6C, address: 0x804291E8
// total size: 0x6C
struct {} __vt__Q216InteractorModule16DirectInteractor; // size: 0x6C, address: 0x80429254
// total size: 0x6C
struct {} __vt__Q216InteractorModule10Interactor; // size: 0x6C, address: 0x804292C0
// total size: 0xC
struct {} __vt__Q316InteractorModule10Interactor16InteractorParams; // size: 0xC, address: 0x8042932C
// total size: 0xC
struct {} __vt__Q316InteractorModule10Interactor12CallbackData; // size: 0xC, address: 0x80429338
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct InvStock * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct FenceSellCount * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct PatternSellCount * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    signed short * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class Interactor * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct ActiveInteractor * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct fill_imp {};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class vector * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct InteractorInfo * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct pair * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ISimInstance * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class EInstance * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class CTilePt * mIterator; // offset 0x0, size 0x4
};
// total size: 0xC
class HeightFade {
    // Members
    float m_viewHeight; // offset 0x0, size 0x4
    float m_ceilingAlpha; // offset 0x4, size 0x4
    unsigned char m_forceCeilingTransparent; // offset 0x8, size 0x1
};
// total size: 0x58
class PlumbBobParms {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EVec3 m_playerColor; // offset 0x4, size 0xC
    float m_bobRange[2]; // offset 0x10, size 0x8
    float m_height; // offset 0x18, size 0x4
    float m_ambScale; // offset 0x1C, size 0x4
    float m_pi_burp_dur; // offset 0x20, size 0x4
    float m_bobThetaScale; // offset 0x24, size 0x4
    float m_acceleration; // offset 0x28, size 0x4
    float m_velocityDrag; // offset 0x2C, size 0x4
    float m_velocityMax; // offset 0x30, size 0x4
    float m_mass; // offset 0x34, size 0x4
    float m_tumbleRate; // offset 0x38, size 0x4
    float m_zoomMaxScale; // offset 0x3C, size 0x4
    float m_bounceZ; // offset 0x40, size 0x4
    float m_bounceUpVel; // offset 0x44, size 0x4
    float m_bounceMaxVel; // offset 0x48, size 0x4
    float m_bounceGravity; // offset 0x4C, size 0x4
    int m_bounceCount; // offset 0x50, size 0x4
    float m_recip_pi_burp_dur; // offset 0x54, size 0x4
};
enum eGameState {
    GAMESTATE_NONE = 0,
    GAMESTATE_MAINMENU = 1,
    GAMESTATE_FREEPLAY_MANAGER = 2,
    GAMESTATE_CREATEASIM = 3,
    GAMESTATE_CREATEASIM_PLAYER1_BACKOUT = 4,
    GAMESTATE_CREATEASIM_PLAYER2_BACKOUT = 5,
    GAMESTATE_CREATEAFAMILY = 6,
    GAMESTATE_CAF_ANIMATION = 7,
    GAMESTATE_WARDROBE = 8,
    GAMESTATE_ENTER_LEVEL = 9,
    GAMESTATE_HUD = 10,
    GAMESTATE_GIVESOCIAL_INVENTORY = 11,
    GAMESTATE_CULTIVATABLE_INVENTORY = 12,
    GAMESTATE_FASTTOOLS_INVENTORY = 13,
    GAMESTATE_PAUSE_MENU_INVENTORY = 14,
    GAMESTATE_PET_POINTS_CONVERSION = 15,
    GAMESTATE_PET_KENNEL = 16,
    GAMESTATE_INGAME_MOVIE = 17,
    GAMESTATE_PLAZASHOP_BAKERY = 18,
    GAMESTATE_PLAZASHOP_TOYSTORE = 19,
    GAMESTATE_PLAZASHOP_EMPORIUM = 20,
    GAMESTATE_PLAZASHOP_SMOOTHIE = 21,
    GAMESTATE_PLAZASHOP_ICE_CREAM = 22,
    GAMESTATE_PLAZASHOP_COFFEE = 23,
    GAMESTATE_PLAZA_PET_PURVEYOR = 24,
    GAMESTATE_INGAME_KEYBOARD = 25,
    GAMESTATE_PAUSE_MENU = 26,
    GAMESTATE_PAUSE_MENU_MIX_ING = 27,
    GAMESTATE_PAUSE_MENU_BUY = 28,
    GAMESTATE_PAUSE_MENU_GAME_SUBMENU = 29,
    GAMESTATE_PAUSE_MENU_GAME_OPTIONS = 30,
    GAMESTATE_PAUSE_MENU_GAME_SAVE = 31,
    GAMESTATE_PAUSE_DEATH_TOMBSTONE_PLAYER1 = 32,
    GAMESTATE_MEMORY_TARGET = 33,
    GAMESTATE_MEMORY_TARGET_LOAD_ACCEPTED = 34,
    GAMESTATE_MEMORY_TARGET_LOAD_CANCELED = 35,
    GAMESTATE_MEMORY_TARGET_BOOTCHECK_ACCEPTED = 36,
    GAMESTATE_MEMORY_TARGET_BOOTCHECK_CANCELED = 37,
    GAMESTATE_PAUSE_MENU_PERSONAL_INFO = 38,
    GAMESTATE_PAUSE_MENU_OPTIONS = 39,
    GAMESTATE_PAUSE_MENU_SAVE_QUIT = 40,
    GAMESTATE_PAUSE_MENU_SAVE_QUIT_NGH = 41,
    GAMESTATE_PAUSE_MENU_NEIGHBORHOOD = 42,
    GAMESTATE_PAUSE_MENU_OBJECT_CATALOG = 43,
    GAMESTATE_PAUSE_MENU_PLANS = 44,
    GAMESTATE_PAUSE_MENU_CLOTHING_PLANS = 45,
    GAMESTATE_PAUSE_MENU_COLLECTIBLES = 46,
    GAMESTATE_PAUSE_MENU_GOALS = 47,
    GAMESTATE_MEMORY_TARGET_DIRECT = 48,
    GAMESTATE_PREGAME = 49,
    GAMESTATE_NEIGHBORHOOD = 50,
    GAMESTATE_PREGAME_SAVEMENU = 51,
    GAMESTATE_MAX = 52,
};

