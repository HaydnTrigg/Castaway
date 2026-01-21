/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\game_ui_targets_tsc5_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C2080 -> 0x801C2080
*/
static const char * const IMU_exists; // size: 0x4, address: 0x805DDF08
static const char * const IMU_DirectControl; // size: 0x4, address: 0x805DDF0C
static const char * const IMU_draw_one; // size: 0x4, address: 0x805DDF10
static const char * const IMU_show_arrow_right; // size: 0x4, address: 0x805DDF14
static const char * const IMU_show_arrow_left; // size: 0x4, address: 0x805DDF18
static const char * const IMU_IsWideScreen; // size: 0x4, address: 0x805DDF1C
static const char * const IMU_Choice; // size: 0x4, address: 0x805DDF20
static const char * const IMU_Highlight; // size: 0x4, address: 0x805DDF24
static const char * const IMU_ShowCallback; // size: 0x4, address: 0x805DDF28
static const char * const IMU_RefreshCallback; // size: 0x4, address: 0x805DDF2C
static const char * const IMU_HideCallback; // size: 0x4, address: 0x805DDF30
static const char * const IMU_loaded; // size: 0x4, address: 0x805DDF34
static const char * const IMU_Scroll; // size: 0x4, address: 0x805DDF38
static const char * const IMU_icon; // size: 0x4, address: 0x805DDF3C
static const char * const IMU_title; // size: 0x4, address: 0x805DDF40
static const char * const IMU_MoreText; // size: 0x4, address: 0x805DDF44
static const char * const IMU_count; // size: 0x4, address: 0x805DDF48
float m_ActionMenuPosition_BottomX; // size: 0x4, address: 0x805D9A80
float m_ActionMenuPreviousObjectIcon_X; // size: 0x4, address: 0x805D9A84
float m_ActionMenuNextObjectIcon_X; // size: 0x4, address: 0x805D9A88
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static unsigned char bLastChangeByWiimote; // size: 0x1, address: 0x805DBB08
static float fLastNunchukChange_TiltPosition; // size: 0x4, address: 0x805DBB0C
struct RandomLotInfo s_lots[26]; // size: 0x2D8, address: 0x804475B0
static unsigned int tutorialLockTable[8]; // size: 0x20, address: 0x8041C4B8
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static char * s_strMeterIcons[5]; // size: 0x14, address: 0x80447A20
static int tutorialStage; // size: 0x4, address: 0x805D9B30
class ERFont * m_pFont; // size: 0x4, address: 0x805DBB10
enum LoadState {
    STATE_INITIALIZING = -1,
    STATE_CHECKING = 0,
    STATE_CHECKCARD = 1,
    STATE_LOADCONFIRM = 2,
    STATE_STARTLOAD = 3,
    STATE_LOADING = 4,
    STATE_LOADFAILED = 5,
    STATE_LOADSUCCEEDED = 6,
    STATE_MEMCARDREMOVED = 7,
    STATE_NOSAVE = 8,
    STATE_WRONGDEVICE = 9,
    STATE_CARDDAMAGED = 10,
    STATE_CARDCORRUPT = 11,
    STATE_INVALIDSAVE = 12,
    STATE_FORMATDECIDE = 13,
    STATE_FORMATCONFIRM = 14,
    STATE_FORMATCANCEL = 15,
    STATE_FORMATFAIL = 16,
    STATE_STARTFORMAT = 17,
    STATE_FORMATTING = 18,
    STATE_FORMATSUCCESS = 19,
    STATE_DELETE_FILE = 20,
    STATE_RETURNNOCARD = 21,
    STATE_RETURNFAILED = 22,
    STATE_CHECKING_TIMED = 23,
};
// total size: 0x180
class LoadGameTarget : public UIObjectBase, public UIDialog, public MemCardSaveLoad {
    // Members
    class M2MTarget * m_M2MparentTarget; // offset 0x150, size 0x4
    unsigned char bCheckingBothSlots; // offset 0x154, size 0x1
    unsigned char bOnOtherSlot; // offset 0x155, size 0x1
    unsigned int m_curDiskOpenCount; // offset 0x158, size 0x4
    class MemoryDevicePort_t m_port; // offset 0x15C, size 0x8
    enum LoadState m_state; // offset 0x164, size 0x4
    unsigned char m_bSelectionMade; // offset 0x168, size 0x1
    int m_loadGamePass; // offset 0x16C, size 0x4
    int m_loadGameFlags; // offset 0x170, size 0x4
    unsigned char m_bContinueNoSpace; // offset 0x174, size 0x1
    unsigned char m_bLoadConfirmed; // offset 0x175, size 0x1
    unsigned char m_bPerformLoad; // offset 0x176, size 0x1
    int m_filterId; // offset 0x178, size 0x4
    float m_delayTimer; // offset 0x17C, size 0x4
};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static const char * const MMU_CANCEL_BUTTON; // size: 0x4, address: 0x805DDFE8
static const char * const MMU_SET_DEVMENU_STATE; // size: 0x4, address: 0x805DDFEC
static const char * const MMU_NGH_INDEX; // size: 0x4, address: 0x805DDFF0
static const char * const MMU_LOT_INDEX; // size: 0x4, address: 0x805DDFF4
char NghFileNames[16][16]; // size: 0x100, address: 0x80447D90
static unsigned char g_ShowFreePlayLots; // size: 0x1, address: 0x805D9B7F
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
static const char * const MSOTargetName; // size: 0x4, address: 0x805DDFF8
int m_ReturnGUID; // size: 0x4, address: 0x805DBB14
int m_ReturnPoints; // size: 0x4, address: 0x805DBB18
signed short m_ReturnTokenID; // size: 0x2, address: 0x805DBB1C
int m_ShopLevel; // size: 0x4, address: 0x805DBB20
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x1A8
class PlazaStoreBakery : public MSOTarget {};
// total size: 0x1A8
class PlazaStoreToystore : public MSOTarget {};
// total size: 0x1A8
class PlazaStoreEmporium : public MSOTarget {};
// total size: 0x1A8
class PlazaStoreSmoothie : public MSOTarget {};
// total size: 0x1A8
class PlazaStoreIceCream : public MSOTarget {};
// total size: 0x1A8
class PlazaStoreCoffee : public MSOTarget {};
static const char * const MSSTargetName; // size: 0x4, address: 0x805DDFFC
static const char * const MSS_exists; // size: 0x4, address: 0x805DE000
static const char * const MSS_entries; // size: 0x4, address: 0x805DE004
static const char * const MSS_hilite; // size: 0x4, address: 0x805DE008
static const char * const MSS_enable; // size: 0x4, address: 0x805DE00C
static const char * const MSS_play; // size: 0x4, address: 0x805DE010
static const char * const MSS_stop; // size: 0x4, address: 0x805DE014
unsigned int gMSSMusicIDs[6][16]; // size: 0x180, address: 0x80448938
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static const char * const CAT_ObjDisp2D; // size: 0x4, address: 0x805DE018
static const char * const CAT_XCallout; // size: 0x4, address: 0x805DE01C
static const char * const NV5TargetName; // size: 0x4, address: 0x805DE020
// total size: 0xC
struct NV5TabInfo {
    // Members
    const char * newUIString; // offset 0x0, size 0x4
    unsigned int defaultShader; // offset 0x4, size 0x4
    unsigned int highlightShader; // offset 0x8, size 0x4
};
static struct NV5TabInfo NV5Tabs[12]; // size: 0x90, address: 0x8041C4D8
static int NV5NumTabs[4]; // size: 0x10, address: 0x8041C568
static int NV5VisibilityTable[4][12]; // size: 0xC0, address: 0x8041C578
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
enum NV5_InventoryMode m_Mode; // size: 0x4, address: 0x805DBB24
int m_ReturnGUID; // size: 0x4, address: 0x805DBB28
signed short m_ReturnInventoryIndex; // size: 0x2, address: 0x805DBB2C
signed short m_ReturnInventoryTokenId; // size: 0x2, address: 0x805DBB2E
int m_restoreVisualTab[4]; // size: 0x10, address: 0x80493C80
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static const char * const PER_exists; // size: 0x4, address: 0x805DE030
static const char * const PER_titleIcon; // size: 0x4, address: 0x805DE034
static const char * const PER_set_tab; // size: 0x4, address: 0x805DE038
static const char * const PER_pet_test; // size: 0x4, address: 0x805DE03C
unsigned int m_lastTab; // size: 0x4, address: 0x805DBB30
enum TutorialUnlockIndex m_HelpIndex; // size: 0x4, address: 0x805D9BF0
unsigned int m_HelpSubIndex; // size: 0x4, address: 0x805DBB34
// total size: 0xB8
class PERTarget : public UIObjectBase {
    // Static members
    static unsigned int m_HelpSubIndex; // size: 0x4
    static enum TutorialUnlockIndex m_HelpIndex; // size: 0x4
    static unsigned int m_lastTab; // size: 0x4

    // Members
    unsigned char m_bPERLoaded; // offset 0xA4, size 0x1
    unsigned int m_ControllerFilterID; // offset 0xA8, size 0x4
    class R2LTarget * m_pR2LTarget; // offset 0xAC, size 0x4
    class CSPTarget * m_pCSPTarget; // offset 0xB0, size 0x4
    class PRGTarget * m_pPRGTarget; // offset 0xB4, size 0x4
};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
int m_sMaximumKennelDays; // size: 0x4, address: 0x805D9C10
int m_sCostPerKennelDay; // size: 0x4, address: 0x805D9C14
int m_sUserEnteredDays; // size: 0x4, address: 0x805DBB38
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static unsigned long sInitialSelectedItem_Root; // size: 0x4, address: 0x805DBB3C
static const char * const PAZ_exists; // size: 0x4, address: 0x805DE048
static const char * const PAZ_GetTabCount; // size: 0x4, address: 0x805DE04C
static const char * const PAZ_GetTabIndex; // size: 0x4, address: 0x805DE050
static const char * const PAZ_GetBuildBuyStatus; // size: 0x4, address: 0x805DE054
static const char * const PAZ_GetProgressStatus; // size: 0x4, address: 0x805DE058
static const char * const PAZ_GetGameStatus; // size: 0x4, address: 0x805DE05C
static const char * const PAZ_BuildOnLotMode; // size: 0x4, address: 0x805DE060
static const char * const PAZ_iconState; // size: 0x4, address: 0x805DE064
static const char * const PAZ_On_Plaza; // size: 0x4, address: 0x805DE068
static const char * const PAZ_LaunchFromLiveMode; // size: 0x4, address: 0x805DE06C
static const char * const PAZ_HideOnCancel; // size: 0x4, address: 0x805DE070
static const char * const PAZ_TabsReady; // size: 0x4, address: 0x805DE074
static const char * const PAZ_SetCurrTab; // size: 0x4, address: 0x805DE078
static const char * const PAZ_TabSelected; // size: 0x4, address: 0x805DE07C
static const char * const PAZ_Cancel; // size: 0x4, address: 0x805DE080
static const char * const PAZ_rgKey; // size: 0x4, address: 0x805DE084
static const char * const PAZ_TabName; // size: 0x4, address: 0x805DE088
static const char * const PAZ_sim_name; // size: 0x4, address: 0x805DE08C
static const char * const PAZ_money; // size: 0x4, address: 0x805DE090
static const char * const PAZ_pet_points; // size: 0x4, address: 0x805DE094
static struct PAZItemInfo sRootItems[9]; // size: 0xD8, address: 0x8041C670
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static const char * const RSP_exists; // size: 0x4, address: 0x805DE098
static const char * const RSP_hilite; // size: 0x4, address: 0x805DE09C
static const char * const RSP_rel0; // size: 0x4, address: 0x805DE0A0
static const char * const RSP_rel1; // size: 0x4, address: 0x805DE0A4
static const char * const RSP_rel2; // size: 0x4, address: 0x805DE0A8
static const char * const RSP_rel3; // size: 0x4, address: 0x805DE0AC
static const char * const RSP_rel4; // size: 0x4, address: 0x805DE0B0
static const char * const RSP_rel5; // size: 0x4, address: 0x805DE0B4
static const char * const RSP_rel6; // size: 0x4, address: 0x805DE0B8
static const char * const RSP_rel7; // size: 0x4, address: 0x805DE0BC
static const char * const RSP_pu0; // size: 0x4, address: 0x805DE0C0
static const char * const RSP_pu1; // size: 0x4, address: 0x805DE0C4
static const char * const RSP_pu2; // size: 0x4, address: 0x805DE0C8
static const char * const RSP_pu3; // size: 0x4, address: 0x805DE0CC
static const char * const RSP_pu4; // size: 0x4, address: 0x805DE0D0
static const char * const RSP_pu5; // size: 0x4, address: 0x805DE0D4
static const char * const RSP_pu6; // size: 0x4, address: 0x805DE0D8
static const char * const RSP_pu7; // size: 0x4, address: 0x805DE0DC
static const char * const RSP_shdr0; // size: 0x4, address: 0x805DE0E0
static const char * const RSP_shdr1; // size: 0x4, address: 0x805DE0E4
static const char * const RSP_shdr2; // size: 0x4, address: 0x805DE0E8
static const char * const RSP_shdr3; // size: 0x4, address: 0x805DE0EC
static const char * const RSP_shdr4; // size: 0x4, address: 0x805DE0F0
static const char * const RSP_shdr5; // size: 0x4, address: 0x805DE0F4
static const char * const RSP_shdr6; // size: 0x4, address: 0x805DE0F8
static const char * const RSP_shdr7; // size: 0x4, address: 0x805DE0FC
static char * const RSP_headShaderNames[8]; // size: 0x20, address: 0x80493C90
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
enum SaveState {
    STATE_STARTCHECKS = 0,
    STATE_CHECKCARD = 1,
    STATE_SAVECONFIRM = 2,
    STATE_MEMCARDREMOVED = 3,
    STATE_NOCARD = 4,
    STATE_WRONGDEVICE = 5,
    STATE_CARDDAMAGED = 6,
    STATE_CARDCORRUPT = 7,
    STATE_OVERWRITE = 8,
    STATE_NOSPACE = 9,
    STATE_FORMATDECIDE = 10,
    STATE_FORMATCONFIRM = 11,
    STATE_FORMATCANCEL = 12,
    STATE_FORMATFAIL = 13,
    STATE_STARTFORMAT = 14,
    STATE_FORMATTING = 15,
    STATE_FORMATSUCCESS = 16,
    STATE_STARTSAVING = 17,
    STATE_SAVING = 18,
    STATE_SAVINGFAILED = 19,
    STATE_SAVESUCCEEDED = 20,
    STATE_RETURNFAILED = 21,
    STATE_RETURNFAILEDRETRY = 22,
};
enum SaveGamePass {
    eSTAGE_0_PRESAVE = 0,
    eSTAGE_1_XBOX_SPAWNEXTRADIALOG = 1,
    eSTAGE_2_XBOX_FORCESELECTION = 2,
    eSTAGE_BG_WAITBEFORESAVE = 3,
    eSTAGE_BG_WAITBEFORESAVE2 = 4,
    eSTAGE_BG_WAITBEFORESAVE3 = 5,
    eSTAGE_3_SAVENOW = 6,
    eSTAGE_BG_WAITONSAVE = 7,
    eSTAGE_BG_WAITONSAVE2 = 8,
    eSTAGE_BG_WAITONSAVE3 = 9,
    eSTAGE_POSTSAVE = 10,
    eSTAGE_INACTIVE = 11,
};
// total size: 0x194
class SaveGameTarget : public UIObjectBase, public UIDialog, public MemCardSaveLoad {
    // Members
    class M2MTarget * m_M2MparentTarget; // offset 0x150, size 0x4
    unsigned char m_bCheckingBothSlots; // offset 0x154, size 0x1
    unsigned char m_bOnOtherSlot; // offset 0x155, size 0x1
    unsigned int m_curDiskOpenCount; // offset 0x158, size 0x4
    class MemoryDevicePort_t m_port; // offset 0x15C, size 0x8
    enum SaveState m_state; // offset 0x164, size 0x4
    unsigned char m_bSelectionMade; // offset 0x168, size 0x1
    enum SaveGamePass m_saveGamePass; // offset 0x16C, size 0x4
    int m_saveGameFlags; // offset 0x170, size 0x4
    enum EMC_OpStatus m_saveGameOps; // offset 0x174, size 0x4
    unsigned char m_bSaveSucceeded; // offset 0x178, size 0x1
    unsigned char m_bUpdateWalls; // offset 0x179, size 0x1
    unsigned char m_bSimulatorPaused; // offset 0x17A, size 0x1
    unsigned char m_bAttemptedFormat; // offset 0x17B, size 0x1
    unsigned char m_bFormatSucceeded; // offset 0x17C, size 0x1
    unsigned char m_bCardRemovedDuringSave; // offset 0x17D, size 0x1
    int m_filterId; // offset 0x180, size 0x4
    int m_nNumFramesToWait; // offset 0x184, size 0x4
    class QTimer m_saveTimer; // offset 0x188, size 0x8
    float m_minimumDisplayTime; // offset 0x190, size 0x4
};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
enum NoSpaceType {
    NOSPACE = 0,
    NOSPACE_FOLDERS = 1,
    NOSPACE_FILES = 2,
};
static const char * const SWS_exists; // size: 0x4, address: 0x805DE114
static const char * const SSH_exists; // size: 0x4, address: 0x805DE118
static const char * const SWS_sim_count; // size: 0x4, address: 0x805DE11C
static const char * const SWS_highlight_start; // size: 0x4, address: 0x805DE120
static const char * const SWS_act_count_0; // size: 0x4, address: 0x805DE124
static const char * const SWS_act_count_1; // size: 0x4, address: 0x805DE128
static const char * const SWS_act_count_2; // size: 0x4, address: 0x805DE12C
static const char * const SWS_act_count_3; // size: 0x4, address: 0x805DE130
static const char * const SWS_act_count_4; // size: 0x4, address: 0x805DE134
static const char * const SWS_act_count_5; // size: 0x4, address: 0x805DE138
static const char * const SWS_test_delete; // size: 0x4, address: 0x805DE13C
static const char * const SWS_highlight; // size: 0x4, address: 0x805DE140
static const char * const SWS_delete_action; // size: 0x4, address: 0x805DE144
static const char * const SWS_show_callback; // size: 0x4, address: 0x805DE148
static const char * const SWS_hide_callback; // size: 0x4, address: 0x805DE14C
static const char * const SWS_loaded; // size: 0x4, address: 0x805DE150
static const char * const SWS_Cancel; // size: 0x4, address: 0x805DE154
static const char * const SWS_rgKey; // size: 0x4, address: 0x805DE158
static const char * const SWS_rgOffSetX; // size: 0x4, address: 0x805DE15C
static const char * const SWS_rgOffSetY; // size: 0x4, address: 0x805DE160
static const char * const SWS_rgSizeX; // size: 0x4, address: 0x805DE164
static const char * const SWS_rgSizeY; // size: 0x4, address: 0x805DE168
static const char * const SWS_title; // size: 0x4, address: 0x805DE16C
static const char * const SWS_action; // size: 0x4, address: 0x805DE170
static const char * const SWS_aqn_0; // size: 0x4, address: 0x805DE174
static const char * const SWS_aqn_1; // size: 0x4, address: 0x805DE178
static const char * const SWS_aqn_2; // size: 0x4, address: 0x805DE17C
static const char * const SWS_aqn_3; // size: 0x4, address: 0x805DE180
static const char * const SWS_aqn_4; // size: 0x4, address: 0x805DE184
static const char * const SWS_aqn_5; // size: 0x4, address: 0x805DE188
static const char * const SWS_aqn_6; // size: 0x4, address: 0x805DE18C
static const char * const SWS_aqn_7; // size: 0x4, address: 0x805DE190
static const char * const SWS_dpad_shdr; // size: 0x4, address: 0x805DE194
static const char * const SWS_sn; // size: 0x4, address: 0x805DE198
static const char * const SWS_sh; // size: 0x4, address: 0x805DE19C
static const char * const SWS_sd; // size: 0x4, address: 0x805DE1A0
static const char * const SWS_sn00; // size: 0x4, address: 0x805DE1A4
static const char * const SWS_sn01; // size: 0x4, address: 0x805DE1A8
static const char * const SWS_sn02; // size: 0x4, address: 0x805DE1AC
static const char * const SWS_sn03; // size: 0x4, address: 0x805DE1B0
static const char * const SWS_sn04; // size: 0x4, address: 0x805DE1B4
static const char * const SWS_sn05; // size: 0x4, address: 0x805DE1B8
static const char * const SWS_sn06; // size: 0x4, address: 0x805DE1BC
static const char * const SWS_sn07; // size: 0x4, address: 0x805DE1C0
static const char * const SWS_sn08; // size: 0x4, address: 0x805DE1C4
static const char * const SWS_sn10; // size: 0x4, address: 0x805DE1C8
static const char * const SWS_sn11; // size: 0x4, address: 0x805DE1CC
static const char * const SWS_sn12; // size: 0x4, address: 0x805DE1D0
static const char * const SWS_sn13; // size: 0x4, address: 0x805DE1D4
static const char * const SWS_sn14; // size: 0x4, address: 0x805DE1D8
static const char * const SWS_sn15; // size: 0x4, address: 0x805DE1DC
static const char * const SWS_sn16; // size: 0x4, address: 0x805DE1E0
static const char * const SWS_sn17; // size: 0x4, address: 0x805DE1E4
static const char * const SWS_sn18; // size: 0x4, address: 0x805DE1E8
static const char * const SWS_sn20; // size: 0x4, address: 0x805DE1EC
static const char * const SWS_sn21; // size: 0x4, address: 0x805DE1F0
static const char * const SWS_sn22; // size: 0x4, address: 0x805DE1F4
static const char * const SWS_sn23; // size: 0x4, address: 0x805DE1F8
static const char * const SWS_sn24; // size: 0x4, address: 0x805DE1FC
static const char * const SWS_sn25; // size: 0x4, address: 0x805DE200
static const char * const SWS_sn26; // size: 0x4, address: 0x805DE204
static const char * const SWS_sn27; // size: 0x4, address: 0x805DE208
static const char * const SWS_sn28; // size: 0x4, address: 0x805DE20C
static const char * const SWS_sn30; // size: 0x4, address: 0x805DE210
static const char * const SWS_sn31; // size: 0x4, address: 0x805DE214
static const char * const SWS_sn32; // size: 0x4, address: 0x805DE218
static const char * const SWS_sn33; // size: 0x4, address: 0x805DE21C
static const char * const SWS_sn34; // size: 0x4, address: 0x805DE220
static const char * const SWS_sn35; // size: 0x4, address: 0x805DE224
static const char * const SWS_sn36; // size: 0x4, address: 0x805DE228
static const char * const SWS_sn37; // size: 0x4, address: 0x805DE22C
static const char * const SWS_sn38; // size: 0x4, address: 0x805DE230
static const char * const SWS_sn40; // size: 0x4, address: 0x805DE234
static const char * const SWS_sn41; // size: 0x4, address: 0x805DE238
static const char * const SWS_sn42; // size: 0x4, address: 0x805DE23C
static const char * const SWS_sn43; // size: 0x4, address: 0x805DE240
static const char * const SWS_sn44; // size: 0x4, address: 0x805DE244
static const char * const SWS_sn45; // size: 0x4, address: 0x805DE248
static const char * const SWS_sn46; // size: 0x4, address: 0x805DE24C
static const char * const SWS_sn47; // size: 0x4, address: 0x805DE250
static const char * const SWS_sn48; // size: 0x4, address: 0x805DE254
static const char * const SWS_sn50; // size: 0x4, address: 0x805DE258
static const char * const SWS_sn51; // size: 0x4, address: 0x805DE25C
static const char * const SWS_sn52; // size: 0x4, address: 0x805DE260
static const char * const SWS_sn53; // size: 0x4, address: 0x805DE264
static const char * const SWS_sn54; // size: 0x4, address: 0x805DE268
static const char * const SWS_sn55; // size: 0x4, address: 0x805DE26C
static const char * const SWS_sn56; // size: 0x4, address: 0x805DE270
static const char * const SWS_sn57; // size: 0x4, address: 0x805DE274
static const char * const SWS_sn58; // size: 0x4, address: 0x805DE278
char * s_SWSShaderNames[6][9]; // size: 0xD8, address: 0x80493CB0
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
unsigned int * m_pBuffer; // size: 0x4, address: 0x805DBB40
unsigned char m_bInitialized; // size: 0x1, address: 0x805DBB44
unsigned int * m_pLoadBuffers[4]; // size: 0x10, address: 0x80493D88
// total size: 0x1C
class IHRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class IHRecord * prev; // offset 0x4, size 0x4
    class IHRecord * next; // offset 0x8, size 0x4
    class IHRecord * parent; // offset 0xC, size 0x4
    class IHRecord * nextChild; // offset 0x10, size 0x4
    class Interaction * action; // offset 0x14, size 0x4
    class BString2 name; // offset 0x18, size 0x4
};
const unsigned short * const COLOR_RedText; // size: 0x4, address: 0x805DE280
unsigned int MotiveShaderIDs[18]; // size: 0x48, address: 0x8041C748
unsigned int RedMotiveShaderIDs[18]; // size: 0x48, address: 0x8041C790
static struct FenceData sFenceDataForWalls; // size: 0x14, address: 0x8044A540
float m_SavedWallValue; // size: 0x4, address: 0x805DBB48
float m_SavedFenceValue; // size: 0x4, address: 0x805DBB4C
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0xC
class UICatalogItemObject : public UICatalogItemBase {
    // Members
    class ObjSelector * m_pObjSelector; // offset 0x8, size 0x4
};
// total size: 0xC
class UICatalogItemIngredient : public UICatalogItemBase {
    // Members
    const struct IngredientToken * m_pIngredient; // offset 0x8, size 0x4
};
// total size: 0xC
class UICatalogItemInventoryToken : public UICatalogItemBase {
    // Members
    const struct InventoryTokens * m_pInventoryToken; // offset 0x8, size 0x4
};
// total size: 0x10
class UICatalogItemClothing : public UICatalogItemBase {
    // Members
    class ClothingItem * m_pClothingItem; // offset 0x8, size 0x4
    const struct CatalogToken * m_pCatalogToken; // offset 0xC, size 0x4
};
static const char * const EALTargetName; // size: 0x4, address: 0x805DE294
static const char * const EAL_exists; // size: 0x4, address: 0x805DE298
static const char * const EAL_start; // size: 0x4, address: 0x805DE29C
static const char * const EAL_end; // size: 0x4, address: 0x805DE2A0
static const char * const EAL_select; // size: 0x4, address: 0x805DE2A4
static const char * const EAL_cancel; // size: 0x4, address: 0x805DE2A8
static const char * const EAL_square; // size: 0x4, address: 0x805DE2AC
static const char * const EAL_circle; // size: 0x4, address: 0x805DE2B0
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
static const char * const KPK_exists; // size: 0x4, address: 0x805DE2B4
static const char * const K2Y_exists; // size: 0x4, address: 0x805DE2B8
static const char * const KPK_more; // size: 0x4, address: 0x805DE2BC
static const char * const KPK_valid; // size: 0x4, address: 0x805DE2C0
static const char * const KPK_left; // size: 0x4, address: 0x805DE2C4
static const char * const KPK_right; // size: 0x4, address: 0x805DE2C8
static const char * const KPK_bs; // size: 0x4, address: 0x805DE2CC
static const char * const KPK_add; // size: 0x4, address: 0x805DE2D0
static const char * const KPK_quit; // size: 0x4, address: 0x805DE2D4
static const char * const KPK_exit; // size: 0x4, address: 0x805DE2D8
static const char * const KPK_done; // size: 0x4, address: 0x805DE2DC
static const char * const KPK_user_text; // size: 0x4, address: 0x805DE2E0
static const char * const KPK_header; // size: 0x4, address: 0x805DE2E4
// total size: 0x604
class KPKTarget : public UIObjectBase, public CasListener {
    // Members
    class HelpDialog m_HelpDialog; // offset 0xAC, size 0xA8
    int m_inputLength; // offset 0x154, size 0x4
    unsigned short * m_pDest; // offset 0x158, size 0x4
    const unsigned short * m_header; // offset 0x15C, size 0x4
    unsigned char (* m_testFunc)(unsigned short *); // offset 0x160, size 0x4
    unsigned short m_userString[256]; // offset 0x164, size 0x200
    unsigned short m_displayString[256]; // offset 0x364, size 0x200
    unsigned int m_editIndex; // offset 0x564, size 0x4
    unsigned char m_Initialized; // offset 0x568, size 0x1
    unsigned char m_screenLoaded; // offset 0x569, size 0x1
    unsigned char m_allowUptoCount; // offset 0x56A, size 0x1
    char * m_RouterSetVariable; // offset 0x56C, size 0x4
    unsigned char m_pollDoneCalled; // offset 0x570, size 0x1
    class ELocString m_CursorString; // offset 0x574, size 0x4
    unsigned char m_suppressDashes; // offset 0x578, size 0x1
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x57C, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x5AC, size 0x50
    class EVec2 m_CursorPoint; // offset 0x5FC, size 0x8
};
static const char * const KBXTargetName; // size: 0x4, address: 0x805DE30C
class Neighbor * m_spNeighbor; // size: 0x4, address: 0x805DBB50
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
// total size: 0x14
class CBMemberTranslator1wRet : public CBFunctor1wRet {};
// total size: 0x2C
struct {} __vt__9KBXTarget; // size: 0x2C, address: 0x8044AAF0
// total size: 0x54
struct {} __vt__9KPKTarget; // size: 0x54, address: 0x8044AB1C
// total size: 0x2C
struct {} __vt__9EALTarget; // size: 0x2C, address: 0x8044AB70
// total size: 0x20
struct {} __vt__9SVQTarget; // size: 0x20, address: 0x8044ABA0
// total size: 0x20
struct {} __vt__9SWSTarget; // size: 0x20, address: 0x8044ABC0
// total size: 0x58
struct {} __vt__14SaveGameTarget; // size: 0x58, address: 0x8044ABE0
// total size: 0x20
struct {} __vt__9RSPTarget; // size: 0x20, address: 0x8044AC38
// total size: 0x20
struct {} __vt__9PAZTarget; // size: 0x20, address: 0x8044AC58
// total size: 0x20
struct {} __vt__9KNLTarget; // size: 0x20, address: 0x8044AC78
// total size: 0x20
struct {} __vt__9PPCTarget; // size: 0x20, address: 0x8044AC98
// total size: 0x20
struct {} __vt__9PERTarget; // size: 0x20, address: 0x8044ACB8
// total size: 0x2C
struct {} __vt__9NV5Target; // size: 0x2C, address: 0x8044ACD8
// total size: 0x20
struct {} __vt__9MSSTarget; // size: 0x20, address: 0x8044AD08
// total size: 0x38
struct {} __vt__16PlazaStoreCoffee; // size: 0x38, address: 0x8044AD28
// total size: 0x38
struct {} __vt__18PlazaStoreIceCream; // size: 0x38, address: 0x8044AD60
// total size: 0x38
struct {} __vt__18PlazaStoreSmoothie; // size: 0x38, address: 0x8044AD98
// total size: 0x38
struct {} __vt__18PlazaStoreEmporium; // size: 0x38, address: 0x8044ADD0
// total size: 0x38
struct {} __vt__18PlazaStoreToystore; // size: 0x38, address: 0x8044AE08
// total size: 0x38
struct {} __vt__16PlazaStoreBakery; // size: 0x38, address: 0x8044AE40
// total size: 0x38
struct {} __vt__9MSOTarget; // size: 0x38, address: 0x8044AE78
// total size: 0x20
struct {} __vt__9MMUTarget; // size: 0x20, address: 0x8044AEC0
// total size: 0x54
struct {} __vt__14LoadGameTarget; // size: 0x54, address: 0x8044AEE0
// total size: 0xC
struct {} __vt__8IHRecord; // size: 0xC, address: 0x8044AF34
// total size: 0x10
struct {} __vt__15MemCardSaveLoad; // size: 0x10, address: 0x8044AF40
// total size: 0x20
struct {} __vt__9HUDTarget; // size: 0x20, address: 0x8044AF60
// total size: 0x60
struct {} __vt__Q218UISimulatorSupport21UICatalogItemClothing; // size: 0x60, address: 0x8044AF80
// total size: 0x60
struct {} __vt__Q218UISimulatorSupport27UICatalogItemInventoryToken; // size: 0x60, address: 0x8044AFE0
// total size: 0x5C
struct {} __vt__Q218UISimulatorSupport23UICatalogItemIngredient; // size: 0x5C, address: 0x8044B040
// total size: 0x5C
struct {} __vt__Q218UISimulatorSupport19UICatalogItemObject; // size: 0x5C, address: 0x8044B09C
// total size: 0x5C
struct {} __vt__Q218UISimulatorSupport17UICatalogItemBase; // size: 0x5C, address: 0x8044B0F8
// total size: 0x20
struct {} __vt__Q218UISimulatorSupport18TutorialGUIManager; // size: 0x20, address: 0x8044B158
// total size: 0x20
struct {} __vt__10ActionMenu; // size: 0x20, address: 0x8044B178

