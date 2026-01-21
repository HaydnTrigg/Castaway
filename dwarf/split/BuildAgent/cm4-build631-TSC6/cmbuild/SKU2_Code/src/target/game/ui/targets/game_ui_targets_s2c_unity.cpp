/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\game_ui_targets_s2c_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019AD0C -> 0x8019AD0C
*/
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041C0C0
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041C0FC
static const char * const AQU; // size: 0x4, address: 0x805DD908
static const char * const AQU_exists; // size: 0x4, address: 0x805DD90C
static const char * const AQU_show_callback; // size: 0x4, address: 0x805DD910
static const char * const AQU_hide_callback; // size: 0x4, address: 0x805DD914
// total size: 0x48
struct ACTRecord {
    // Members
    int nth; // offset 0x0, size 0x4
    unsigned char active; // offset 0x4, size 0x1
    unsigned char exiting; // offset 0x5, size 0x1
    unsigned char needsToExit; // offset 0x6, size 0x1
    int post; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    int tweenx; // offset 0x14, size 0x4
    int tweeny; // offset 0x18, size 0x4
    unsigned char tweenActive; // offset 0x1C, size 0x1
    char * containerName; // offset 0x20, size 0x4
    char * shaderName; // offset 0x24, size 0x4
    char * frameName; // offset 0x28, size 0x4
    char * callbackName; // offset 0x2C, size 0x4
    class BString2 name; // offset 0x30, size 0x4
    int actionID; // offset 0x34, size 0x4
    const class Interaction * action; // offset 0x38, size 0x4
    class cXPerson * person; // offset 0x3C, size 0x4
    struct ACTRecord * next; // offset 0x40, size 0x4
    struct ACTRecord * prev; // offset 0x44, size 0x4
};
// total size: 0x620
class ACTTarget : public UIObjectBase {
    // Members
    class EVec2 m_pos[9]; // offset 0xA4, size 0x48
    unsigned char m_ACTLoaded; // offset 0xEC, size 0x1
    unsigned char m_ACTActive; // offset 0xED, size 0x1
    unsigned char m_tweenActive; // offset 0xEE, size 0x1
    unsigned char m_displayState; // offset 0xEF, size 0x1
    struct ACTRecord * m_head; // offset 0xF0, size 0x4
    struct ACTRecord * m_tail; // offset 0xF4, size 0x4
    struct ACTRecord m_items[18]; // offset 0xF8, size 0x510
    unsigned char m_cancelModeEnabled; // offset 0x608, size 0x1
    struct ACTRecord * m_selectedCancelModeItem; // offset 0x60C, size 0x4
    struct ACTRecord * m_previousCancelModeItem; // offset 0x610, size 0x4
    class list m_list; // offset 0x614, size 0xC
};
// total size: 0xC
class ListBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4

    // Members
protected:
    struct ListNodeBase mNode; // offset 0x0, size 0x8
    class allocator mAllocator; // offset 0x8, size 0x1
};
// total size: 0xC
class list : public ListBase {};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x20
class iqRecord {
    // Members
public:
    class cXPerson * person; // offset 0x0, size 0x4
    const class Interaction * pAction; // offset 0x4, size 0x4
    int actionID; // offset 0x8, size 0x4
    class BString2 strName; // offset 0xC, size 0x4
    unsigned int shaderID; // offset 0x10, size 0x4
    class ERShader * pShader; // offset 0x14, size 0x4
    unsigned int insertGUID; // offset 0x18, size 0x4
    void * __vptr$; // offset 0x1C, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class iqRecord * mValue; // offset 0x8, size 0x4
};
static const char * const BBH_exists; // size: 0x4, address: 0x805DD920
static const char * const BBH_show_callback; // size: 0x4, address: 0x805DD924
static const char * const BBH_hide_callback; // size: 0x4, address: 0x805DD928
static const char * const BBH_mode; // size: 0x4, address: 0x805DD92C
static const char * const BBH_price; // size: 0x4, address: 0x805DD930
static const char * const BBH_money; // size: 0x4, address: 0x805DD934
static const char * const BBH_callout_undo; // size: 0x4, address: 0x805DD938
static const char * const BBH_item; // size: 0x4, address: 0x805DD93C
static const char * const BBH_puck; // size: 0x4, address: 0x805DD940
static const char * const BBH_icon_backdrop; // size: 0x4, address: 0x805DD944
static const char * const BBH_item_backdrop; // size: 0x4, address: 0x805DD948
static const char * const BBH_wii_button_1; // size: 0x4, address: 0x805DD94C
static const char * const BBH_wii_button_2; // size: 0x4, address: 0x805DD950
static const char * const BBH_wii_button_A; // size: 0x4, address: 0x805DD954
static const char * const BBH_wii_button_B; // size: 0x4, address: 0x805DD958
static const char * const BBH_wii_analog_stick; // size: 0x4, address: 0x805DD95C
static const char * const BBH_wii_button_C; // size: 0x4, address: 0x805DD960
static const char * const BBH_wii_button_Z; // size: 0x4, address: 0x805DD964
static const char * const BBH_wii_button_plus; // size: 0x4, address: 0x805DD968
static const char * const BBH_wii_button_minus; // size: 0x4, address: 0x805DD96C
static const char * const BBH_wii_move; // size: 0x4, address: 0x805DD970
static const char * const BBH_wii_grid; // size: 0x4, address: 0x805DD974
static const char * const BBH_wii_rotate; // size: 0x4, address: 0x805DD978
static const char * const BBH_wii_undo; // size: 0x4, address: 0x805DD97C
static const char * const BBH_wii_place; // size: 0x4, address: 0x805DD980
static const char * const BBH_wii_x; // size: 0x4, address: 0x805DD984
static const char * const BBH_wii_trash; // size: 0x4, address: 0x805DD988
static const char * const BBH_wii_floorplan; // size: 0x4, address: 0x805DD98C
static const char * const BBH_exit_text; // size: 0x4, address: 0x805DD990
char * IconStateNames[26]; // size: 0x68, address: 0x80441F68
char * SwfNameTable[5]; // size: 0x14, address: 0x80442020
static int ToolStates[2][10][5]; // size: 0x190, address: 0x8041C128
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
static int recordOfDollars; // size: 0x4, address: 0x805D9870
// total size: 0x114
class CRDTarget : public UIObjectBase {
    // Members
    unsigned char m_CRDLoaded; // offset 0xA4, size 0x1
    unsigned char m_CRDActive; // offset 0xA5, size 0x1
    unsigned char m_tweenActive; // offset 0xA6, size 0x1
    unsigned char m_displayState; // offset 0xA7, size 0x1
    int m_cheatTickCount; // offset 0xA8, size 0x4
    unsigned char m_cheatEnabled; // offset 0xAC, size 0x1
    int m_creditsDone; // offset 0xB0, size 0x4
    int m_startCredits; // offset 0xB4, size 0x4
    float m_creditsStartTime; // offset 0xB8, size 0x4
    float m_creditsFadeRange; // offset 0xBC, size 0x4
    float m_creditsSpeed; // offset 0xC0, size 0x4
    int m_nNextBlock; // offset 0xC4, size 0x4
    float m_nCreditsLineHeight; // offset 0xC8, size 0x4
    unsigned short * m_pCreditsText; // offset 0xCC, size 0x4
    unsigned short * m_pCreditsTextPos; // offset 0xD0, size 0x4
    unsigned char m_cheatState; // offset 0xD4, size 0x1
    class ERenderSurface * renderSurface; // offset 0xD8, size 0x4
    class EWindow * win; // offset 0xDC, size 0x4
    class EWindow * prevWin; // offset 0xE0, size 0x4
    struct ETextureDef def; // offset 0xE4, size 0x20
    class ETexture * pAlphaTex; // offset 0x104, size 0x4
    class EShader * pShad; // offset 0x108, size 0x4
    class UIObjectBase * m_pCallingTarget; // offset 0x10C, size 0x4
    unsigned int m_filterId; // offset 0x110, size 0x4
};
// total size: 0x14
class CBMemberTranslator2 : public CBFunctor2 {};
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
static class EVec2 textWidHei; // size: 0x8, address: 0x805DBAB8
static float yBaseOffset; // size: 0x4, address: 0x805DBAC0
static const char * const CSP_Cancel; // size: 0x4, address: 0x805DD9E8
static const char * const CSP_CurrTab; // size: 0x4, address: 0x805DD9EC
static const char * const CSP_ShowHelp; // size: 0x4, address: 0x805DD9F0
static const char * const CSP_exists; // size: 0x4, address: 0x805DD9F4
static const char * const CSP_CancelEnabled; // size: 0x4, address: 0x805DD9F8
static const char * const CSP_HasJob; // size: 0x4, address: 0x805DD9FC
static const char * const CSP_SkillValue0; // size: 0x4, address: 0x805DDA00
static const char * const CSP_SkillValue1; // size: 0x4, address: 0x805DDA04
static const char * const CSP_SkillValue2; // size: 0x4, address: 0x805DDA08
static const char * const CSP_SkillValue3; // size: 0x4, address: 0x805DDA0C
static const char * const CSP_SkillValue4; // size: 0x4, address: 0x805DDA10
static const char * const CSP_SkillValue5; // size: 0x4, address: 0x805DDA14
static const char * const CSP_SkillValue6; // size: 0x4, address: 0x805DDA18
static const char * const CSP_IsMale; // size: 0x4, address: 0x805DDA1C
static const char * const CSP_TraitVal0; // size: 0x4, address: 0x805DDA20
static const char * const CSP_TraitVal1; // size: 0x4, address: 0x805DDA24
static const char * const CSP_TraitVal2; // size: 0x4, address: 0x805DDA28
static const char * const CSP_TraitVal3; // size: 0x4, address: 0x805DDA2C
static const char * const CSP_TraitVal4; // size: 0x4, address: 0x805DDA30
static const char * const CSP_JobName; // size: 0x4, address: 0x805DDA34
static const char * const CSP_JobTime; // size: 0x4, address: 0x805DDA38
static const char * const CSP_JobDescription; // size: 0x4, address: 0x805DDA3C
static const char * const CSP_SkillName0; // size: 0x4, address: 0x805DDA40
static const char * const CSP_SkillName1; // size: 0x4, address: 0x805DDA44
static const char * const CSP_SkillName2; // size: 0x4, address: 0x805DDA48
static const char * const CSP_SkillName3; // size: 0x4, address: 0x805DDA4C
static const char * const CSP_SkillName4; // size: 0x4, address: 0x805DDA50
static const char * const CSP_SkillName5; // size: 0x4, address: 0x805DDA54
static const char * const CSP_SkillName6; // size: 0x4, address: 0x805DDA58
static const char * const CSP_SkillValueText0; // size: 0x4, address: 0x805DDA5C
static const char * const CSP_SkillValueText1; // size: 0x4, address: 0x805DDA60
static const char * const CSP_SkillValueText2; // size: 0x4, address: 0x805DDA64
static const char * const CSP_SkillValueText3; // size: 0x4, address: 0x805DDA68
static const char * const CSP_SkillValueText4; // size: 0x4, address: 0x805DDA6C
static const char * const CSP_SkillValueText5; // size: 0x4, address: 0x805DDA70
static const char * const CSP_SkillValueText6; // size: 0x4, address: 0x805DDA74
static const char * const CSP_ZodiacSignName; // size: 0x4, address: 0x805DDA78
static const char * const CSP_GenCode; // size: 0x4, address: 0x805DDA7C
static const char * const CSP_JobIcon; // size: 0x4, address: 0x805DDA80
static const char * const CSP_ZodiacIcon; // size: 0x4, address: 0x805DDA84
static const char * const CSP_TabIcon0; // size: 0x4, address: 0x805DDA88
static const char * const CSP_TabIcon1; // size: 0x4, address: 0x805DDA8C
static const char * const CSP_TabIcon2; // size: 0x4, address: 0x805DDA90
static const char * const CSP_SkillIcon0; // size: 0x4, address: 0x805DDA94
static const char * const CSP_SkillIcon1; // size: 0x4, address: 0x805DDA98
static const char * const CSP_SkillIcon2; // size: 0x4, address: 0x805DDA9C
static const char * const CSP_SkillIcon3; // size: 0x4, address: 0x805DDAA0
static const char * const CSP_SkillIcon4; // size: 0x4, address: 0x805DDAA4
static const char * const CSP_SkillIcon5; // size: 0x4, address: 0x805DDAA8
static unsigned int CSP_TabIconIds[3]; // size: 0xC, address: 0x8041C2B8
static unsigned int CSP_TabSelectedIconIds[3]; // size: 0xC, address: 0x8041C2C4
static unsigned int CSP_ZodiacIconIds[13]; // size: 0x34, address: 0x8041C2D0
static unsigned int CSP_JobIconIds[4]; // size: 0x10, address: 0x8041C308
static unsigned int CSP_SkillIconIds[6]; // size: 0x18, address: 0x8041C318
// total size: 0x1B4
class CSPTarget : public UIObjectBase, public HelpDialogCallback {
    // Members
    unsigned char m_CSPLoaded; // offset 0xA8, size 0x1
    enum eTabs m_selectedTab; // offset 0xAC, size 0x4
    unsigned int m_ControllerFilterID; // offset 0xB0, size 0x4
    int m_jobID; // offset 0xB4, size 0x4
    unsigned char m_isMale; // offset 0xB8, size 0x1
    int m_skillValues[7]; // offset 0xBC, size 0x1C
    int m_zodiacValues[5]; // offset 0xD8, size 0x14
    int m_zodiacSign; // offset 0xEC, size 0x4
    class BString2 m_zodiacSignStr; // offset 0xF0, size 0x4
    class HelpDialog m_helpDialog; // offset 0xF4, size 0xA8
    class UIReflow m_reflow; // offset 0x19C, size 0x18
};
enum eTabs {
    eTabs_Career = 0,
    eTabs_Skills = 1,
    eTabs_Personality = 2,
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
// total size: 0xCC
class FCMTarget : public UIObjectBase {
    // Members
    unsigned char m_FCMLoaded; // offset 0xA4, size 0x1
    unsigned char m_FCMActive; // offset 0xA5, size 0x1
    unsigned char m_tweenActive; // offset 0xA6, size 0x1
    unsigned char m_displayState; // offset 0xA7, size 0x1
    unsigned char m_tweenFire; // offset 0xA8, size 0x1
    unsigned char m_fireActive; // offset 0xA9, size 0x1
    unsigned char m_tweenZenith; // offset 0xAA, size 0x1
    int m_newZenith; // offset 0xAC, size 0x4
    int m_currentZenith; // offset 0xB0, size 0x4
    class UIReflow m_reflow; // offset 0xB4, size 0x18
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
static const char * const G2D_loaded; // size: 0x4, address: 0x805DDAB4
unsigned char m_bInitComplete; // size: 0x1, address: 0x805DBAC4
unsigned int g_g2dDialogTimeout; // size: 0x4, address: 0x805D98BC
char * G2D_buttonN_Table[3]; // size: 0xC, address: 0x80442B98
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
static const char * const H2D_exists; // size: 0x4, address: 0x805DDB00
static const char * const H2D_SQUARE; // size: 0x4, address: 0x805DDB04
static const char * const H2D_PAUSE; // size: 0x4, address: 0x805DDB08
static const char * const H2D_SELECT; // size: 0x4, address: 0x805DDB0C
static const char * const H2D_CANCEL; // size: 0x4, address: 0x805DDB10
static const char * const H2D_R2; // size: 0x4, address: 0x805DDB14
static const char * const HUD_rgKey; // size: 0x4, address: 0x805DDB18
static const char * const HUD_SetCurrTab; // size: 0x4, address: 0x805DDB1C
static const char * const HUD_SetNoTab; // size: 0x4, address: 0x805DDB20
static const char * const H2D_IsWideScreen; // size: 0x4, address: 0x805DDB24
static const char * const H2D_MaxHoverItems; // size: 0x4, address: 0x805DDB28
unsigned int m_nPauseRefCount; // size: 0x4, address: 0x805DBAC8
float m_fSuperHudFade_CursorMovtThreshold; // size: 0x4, address: 0x805DDB2C
float m_fSuperHudFade_FrameThreshold; // size: 0x4, address: 0x805DDB30
float m_fSuperHudFade_FrameAlphaDecrement; // size: 0x4, address: 0x805DDB34
float m_fSuperHudFade_MaxAlpha; // size: 0x4, address: 0x805DDB38
// total size: 0x20
class SWSRecord {
    // Members
public:
    class cXPerson * pPerson; // offset 0x0, size 0x4
    const class Interaction * pAction; // offset 0x4, size 0x4
    int actionID; // offset 0x8, size 0x4
    class BString2 strName; // offset 0xC, size 0x4
    unsigned int shaderID; // offset 0x10, size 0x4
    class ERShader * pShader; // offset 0x14, size 0x4
    const char * shaderName; // offset 0x18, size 0x4
    unsigned char deleted; // offset 0x1C, size 0x1
    unsigned char fake; // offset 0x1D, size 0x1
};
// total size: 0x268
class SWSTarget : public UIObjectBase {
    // Static members
    static char * s_SWSShaderNames[6][9]; // size: 0xD8

    // Members
    unsigned char m_SWSLoaded; // offset 0xA4, size 0x1
    unsigned char m_SWSActive; // offset 0xA5, size 0x1
    unsigned char m_displayState; // offset 0xA6, size 0x1
    unsigned int m_filterId; // offset 0xA8, size 0x4
    class cXPerson * m_cameraPerson; // offset 0xAC, size 0x4
    unsigned char m_loadUnloadPending; // offset 0xB0, size 0x1
    int m_column; // offset 0xB4, size 0x4
    int m_row; // offset 0xB8, size 0x4
    int m_highlighted_column; // offset 0xBC, size 0x4
    int m_highlighted_row; // offset 0xC0, size 0x4
    int m_displayRows[6]; // offset 0xC4, size 0x18
    int m_displayColumns; // offset 0xDC, size 0x4
    int m_startColumn; // offset 0xE0, size 0x4
    class SWSRecord * m_array[6][9]; // offset 0xE4, size 0xD8
    class cXPerson * m_currentPerson; // offset 0x1BC, size 0x4
    unsigned char m_SWSFlashLoaded; // offset 0x1C0, size 0x1
    float m_timer; // offset 0x1C4, size 0x4
    class BString2 m_fakeNameArray[6]; // offset 0x1C8, size 0x18
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x1E0, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x210, size 0x50
    class EVec2 m_CursorPoint; // offset 0x260, size 0x8
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
// total size: 0x20
class RSPRecord {
    // Members
public:
    unsigned int guid; // offset 0x0, size 0x4
    class Neighbor * pNeighbor; // offset 0x4, size 0x4
    class ERShader * shader; // offset 0x8, size 0x4
    int relValue; // offset 0xC, size 0x4
    unsigned char bIsMarried; // offset 0x10, size 0x1
    int distance; // offset 0x14, size 0x4
    class BString2 firstName; // offset 0x18, size 0x4
    class BString2 lastName; // offset 0x1C, size 0x4
};
// total size: 0xCC
class RSPTarget : public UIObjectBase {
    // Members
    unsigned char m_RSPLoaded; // offset 0xA4, size 0x1
    unsigned char m_RSPActive; // offset 0xA5, size 0x1
    unsigned char m_displayState; // offset 0xA6, size 0x1
    unsigned char m_textButtonPressed; // offset 0xA7, size 0x1
    unsigned char m_textPanelVisible; // offset 0xA8, size 0x1
    class RSPRecord * m_records; // offset 0xAC, size 0x4
    int m_recordCount; // offset 0xB0, size 0x4
    int m_displayCount; // offset 0xB4, size 0x4
    unsigned char m_updateImmediately; // offset 0xB8, size 0x1
    float m_updateCountDownTimer; // offset 0xBC, size 0x4
    float m_dtAccumulation; // offset 0xC0, size 0x4
    class cXPerson * m_lastSelectedSim; // offset 0xC4, size 0x4
    int m_socialHighlight; // offset 0xC8, size 0x4
};
static int count; // size: 0x4, address: 0x805DBACC
static float delayTimer; // size: 0x4, address: 0x805DBAD0
enum eSidePanelIcon {
    eSidePanelIcon_None = 0,
    eSidePanelIcon_UpDownArrowsIdle = 1,
    eSidePanelIcon_UpArrow = 2,
    eSidePanelIcon_DownArrow = 3,
    eSidePanelIcon_LeftRightArrowsIdle = 4,
    eSidePanelIcon_LeftArrow = 5,
    eSidePanelIcon_RightArrow = 6,
    eSidePanelIcon_RelationshipSidePanel = 7,
    eSidePanelIcon_Motives = 8,
    eSidePanelIcon_WantsAndFears = 9,
};
// total size: 0xC4
class MODTarget : public UIObjectBase {
    // Members
    unsigned char m_MODLoaded; // offset 0xA4, size 0x1
    unsigned char m_MODActive; // offset 0xA5, size 0x1
    unsigned char m_MODFLashLoaded; // offset 0xA6, size 0x1
    enum eSidePanelIcon m_dpadState; // offset 0xA8, size 0x4
    enum eSidePanelIcon m_dpadStateLast; // offset 0xAC, size 0x4
    int m_soundLockTimer; // offset 0xB0, size 0x4
    unsigned char m_firstMoodUpdate; // offset 0xB4, size 0x1
    unsigned char m_updateMoodOnce; // offset 0xB5, size 0x1
    int m_meterValue; // offset 0xB8, size 0x4
    int m_warningMotive; // offset 0xBC, size 0x4
    int m_lastWarningMotive; // offset 0xC0, size 0x4
};
static const char * const INGTargetName; // size: 0x4, address: 0x805DDB7C
const char * const ING_SndCancel; // size: 0x4, address: 0x805DDB80
char * const ING_HelpBodyIDs[2]; // size: 0x8, address: 0x805DDB88
int m_sRefrigeratorLevel; // size: 0x4, address: 0x805DBAD4
int m_sNumberOfItemsToTransfer; // size: 0x4, address: 0x805D98F4
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
static unsigned long prevTabIndex; // size: 0x4, address: 0x805DBAD8
static const char * const ITB_message_shdr; // size: 0x4, address: 0x805DDB94
enum eITBShowState {
    eITBShowState_None = 0,
    eITBShowState_SmallBubble = 1,
    eITBShowState_BigBubble = 2,
    eITBShowState_Text = 3,
    eITBShowState_FinishText = 4,
};
// total size: 0xB8
class ITBTarget : public UIObjectBase {
    // Members
    unsigned char m_ITBLoaded; // offset 0xA4, size 0x1
    unsigned char m_ITBActive; // offset 0xA5, size 0x1
    class BString2 * m_text; // offset 0xA8, size 0x4
    enum eITBShowState m_showState; // offset 0xAC, size 0x4
    unsigned char m_tweenActive; // offset 0xB0, size 0x1
    unsigned char m_displayState; // offset 0xB1, size 0x1
    float m_userReadTime; // offset 0xB4, size 0x4
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
unsigned short * m_currentEntryPtr; // size: 0x4, address: 0x805DBAE0
unsigned short * EmptyString; // size: 0x4, address: 0x805D9974
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
char * M2M_buttonN_Table[8]; // size: 0x20, address: 0x804442D0
char szItemTextID[15]; // size: 0xF, address: 0x804442F0
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
// total size: 0xB4
class MDITarget : public UIObjectBase {
    // Members
    struct ModelessDialog * m_pHead; // offset 0xA4, size 0x4
    int m_count; // offset 0xA8, size 0x4
    int m_boxHeight; // offset 0xAC, size 0x4
    unsigned char m_MDILoaded; // offset 0xB0, size 0x1
    unsigned char m_MDIActive; // offset 0xB1, size 0x1
    unsigned char m_tweenActive; // offset 0xB2, size 0x1
    unsigned char m_displayState; // offset 0xB3, size 0x1
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
// total size: 0x24
struct ModelessDialog {
    // Members
    class BString2 m_body; // offset 0x0, size 0x4
    class BString2 m_title; // offset 0x4, size 0x4
    class ERShader * m_pShader; // offset 0x8, size 0x4
    unsigned int m_shaderId; // offset 0xC, size 0x4
    class ERShader * m_pIconBackgroundShader; // offset 0x10, size 0x4
    unsigned int m_iconBackgroundShaderId; // offset 0x14, size 0x4
    int m_timer; // offset 0x18, size 0x4
    float m_textReadTimeFactor; // offset 0x1C, size 0x4
    struct ModelessDialog * m_pNext; // offset 0x20, size 0x4
};
static const char * const MOT_exists; // size: 0x4, address: 0x805DDBD4
static const char * const MOT_icon_alarm; // size: 0x4, address: 0x805DDBD8
static const char * const MOT_text_show_callback; // size: 0x4, address: 0x805DDBDC
static const char * const MOT_text_hide_callback; // size: 0x4, address: 0x805DDBE0
static const char * const MOT_show_callback; // size: 0x4, address: 0x805DDBE4
static const char * const MOT_hide_callback; // size: 0x4, address: 0x805DDBE8
static const char * const MOT_loaded; // size: 0x4, address: 0x805DDBEC
static const char * const MOT_icon_text7; // size: 0x4, address: 0x805DDBF0
static const char * const MOT_textBG0; // size: 0x4, address: 0x805DDBF4
static const char * const MOT_textBG1; // size: 0x4, address: 0x805DDBF8
static const char * const MOT_textBG2; // size: 0x4, address: 0x805DDBFC
static const char * const MOT_textBG3; // size: 0x4, address: 0x805DDC00
static const char * const MOT_textBG4; // size: 0x4, address: 0x805DDC04
static const char * const MOT_textBG5; // size: 0x4, address: 0x805DDC08
static const char * const MOT_textBG6; // size: 0x4, address: 0x805DDC0C
static const char * const MOT_textBG7; // size: 0x4, address: 0x805DDC10
static const char * const MOT_short_text_container; // size: 0x4, address: 0x805DDC14
enum eMotiveState {
    eMotiveState_None = 0,
    eMotiveState_Increase = 1,
    eMotiveState_Decrease = 2,
};
// total size: 0x1A8
class MOTTarget : public UIObjectBase {
    // Members
    unsigned char m_MOTLoaded; // offset 0xA4, size 0x1
    unsigned char m_MOTActive; // offset 0xA5, size 0x1
    unsigned char m_MOTFlashLoaded; // offset 0xA6, size 0x1
    unsigned char m_textTweenActive; // offset 0xA7, size 0x1
    unsigned char m_textButtonPressed; // offset 0xA8, size 0x1
    unsigned char m_textPanelVisible; // offset 0xA9, size 0x1
    int m_simulatorSetting[8]; // offset 0xAC, size 0x20
    int m_displaySetting[8]; // offset 0xCC, size 0x20
    int m_lastDisplayFrame[8]; // offset 0xEC, size 0x20
    int m_animationCounter[8]; // offset 0x10C, size 0x20
    int m_previousMotiveValue[8]; // offset 0x12C, size 0x20
    enum eMotiveState m_motiveState[8]; // offset 0x14C, size 0x20
    unsigned char m_tweenActive; // offset 0x16C, size 0x1
    unsigned char m_displayState; // offset 0x16D, size 0x1
    class cXPerson * m_selectedPerson; // offset 0x170, size 0x4
    unsigned char m_selectedPersonChanged; // offset 0x174, size 0x1
    class UIReflow m_reflow; // offset 0x178, size 0x18
    int m_MotiveX; // offset 0x190, size 0x4
    int m_MotiveY; // offset 0x194, size 0x4
    int m_MotiveWidth; // offset 0x198, size 0x4
    int m_Height; // offset 0x19C, size 0x4
    int m_numberUnlocked; // offset 0x1A0, size 0x4
    unsigned char m_forceUpdatePending; // offset 0x1A4, size 0x1
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
static const char * const O2T_Close_Screen; // size: 0x4, address: 0x805DDC1C
static const char * const O2T_Get_Cam_Rot_DC; // size: 0x4, address: 0x805DDC20
static const char * const O2T_invert_cam_rot; // size: 0x4, address: 0x805DDC24
static const char * const O2T_Vibrate; // size: 0x4, address: 0x805DDC28
static const char * const O2T_Free_Will; // size: 0x4, address: 0x805DDC2C
static const char * const O2T_Classic_Free_Will; // size: 0x4, address: 0x805DDC30
static const char * const O2T_sfx_vol; // size: 0x4, address: 0x805DDC34
static const char * const O2T_sfx_step; // size: 0x4, address: 0x805DDC38
static const char * const O2T_music_vol; // size: 0x4, address: 0x805DDC3C
static const char * const O2T_music_step; // size: 0x4, address: 0x805DDC40
static const char * const O2T_screen_x; // size: 0x4, address: 0x805DDC44
static const char * const O2T_screen_x_step; // size: 0x4, address: 0x805DDC48
static const char * const O2T_screen_y; // size: 0x4, address: 0x805DDC4C
static const char * const O2T_screen_y_step; // size: 0x4, address: 0x805DDC50
static const char * const O2T_Change_Main_State; // size: 0x4, address: 0x805DDC54
static const char * const O2T_Invert_DC_Cam; // size: 0x4, address: 0x805DDC58
static const char * const O2T_Time_Delay; // size: 0x4, address: 0x805DDC5C
static const char * const O2T_TabIcon0; // size: 0x4, address: 0x805DDC60
static const char * const O2T_TabIcon1; // size: 0x4, address: 0x805DDC64
static const char * const O2T_TabIcon2; // size: 0x4, address: 0x805DDC68
static const char * const O2T_titleIcon; // size: 0x4, address: 0x805DDC6C
static const char * const O2T_TitleText; // size: 0x4, address: 0x805DDC70
static const char * const O2T_rgKey; // size: 0x4, address: 0x805DDC74
static const char * const O2T_rgOffSetX; // size: 0x4, address: 0x805DDC78
static const char * const O2T_rgOffSetY; // size: 0x4, address: 0x805DDC7C
static const char * const O2T_Rollover; // size: 0x4, address: 0x805DDC80
static const char * const O2T_HoverTab; // size: 0x4, address: 0x805DDC84
static const char * const O2T_rgSizeX; // size: 0x4, address: 0x805DDC88
static const char * const O2T_rgSizeY; // size: 0x4, address: 0x805DDC8C
static const char * const O2T_Set_Wii_DPD_Zones; // size: 0x4, address: 0x805DDC90
class O2TTarget * m_pSingletonPtr; // size: 0x4, address: 0x805DBAE4
signed char m_CurrentSFXVolume; // size: 0x1, address: 0x805DBAE8
signed char m_CurrentMusicVolume; // size: 0x1, address: 0x805DBAE9
signed char m_CurrentAmbientVolume; // size: 0x1, address: 0x805DBAEA
signed char m_CurrentVoiceVolume; // size: 0x1, address: 0x805DBAEB
unsigned char m_bRumbleOn; // size: 0x1, address: 0x805DBAEC
unsigned char m_bCameraRotateDC; // size: 0x1, address: 0x805DBAED
unsigned char m_bCameraRotate; // size: 0x1, address: 0x805DBAEE
unsigned char m_bFreeWill; // size: 0x1, address: 0x805DBAEF
unsigned char m_bFreeWillClassic; // size: 0x1, address: 0x805DBAF0
signed char m_DelayInitiateFreeWill; // size: 0x1, address: 0x805D9A1F
// total size: 0xDC8
class MSSTarget : public UIObjectBase {
    // Members
public:
    class UIDialog m_UIDialog; // offset 0xA4, size 0xA0
    unsigned int m_ControllerFilterID; // offset 0x144, size 0x4
    int m_SelectedGenre; // offset 0x148, size 0x4
    int m_SelectedSong; // offset 0x14C, size 0x4
    unsigned int m_EditBuffer[6]; // offset 0x150, size 0x18
    char m_GetLocGenres[6][16]; // offset 0x168, size 0x60
    char m_GetLocSongs[6][16][16]; // offset 0x1C8, size 0x600
    char m_GetLocArtists[6][16][16]; // offset 0x7C8, size 0x600
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
static const char * const kUserDefined; // size: 0x4, address: 0x805DDCB0
static const char * const PCTTargetName; // size: 0x4, address: 0x805DDCB4
static const char * const CAT_exists; // size: 0x4, address: 0x805DDCB8
static const char * const CAT_GetTabCount; // size: 0x4, address: 0x805DDCBC
static const char * const CAT_GetInitialTab; // size: 0x4, address: 0x805DDCC0
static const char * const CAT_HiliteMoney; // size: 0x4, address: 0x805DDCC4
static const char * const CAT_HilitePoints; // size: 0x4, address: 0x805DDCC8
static const char * const CAT_ImageRotation; // size: 0x4, address: 0x805DDCCC
static const char * const CAT_InitVisible; // size: 0x4, address: 0x805DDCD0
static const char * const CAT_ItemCount; // size: 0x4, address: 0x805DDCD4
static const char * const CAT_SelectedCell; // size: 0x4, address: 0x805DDCD8
static const char * const CAT_SelectedTab; // size: 0x4, address: 0x805DDCDC
static const char * const CAT_ShowObjDisp2D; // size: 0x4, address: 0x805DDCE0
static const char * const CAT_ShowObjDisp3D; // size: 0x4, address: 0x805DDCE4
static const char * const CAT_UseFirstInfoLine; // size: 0x4, address: 0x805DDCE8
static const char * const CAT_UseSecondInfoLine; // size: 0x4, address: 0x805DDCEC
static const char * const CAT_UseGridBuyAni; // size: 0x4, address: 0x805DDCF0
static const char * const CAT_MotiveBoxCount; // size: 0x4, address: 0x805DDCF4
static const char * const CAT_UseMotiveText0; // size: 0x4, address: 0x805DDCF8
static const char * const CAT_UseMotiveText1; // size: 0x4, address: 0x805DDCFC
static const char * const CAT_UseMotiveText2; // size: 0x4, address: 0x805DDD00
static const char * const CAT_UseMotiveText3; // size: 0x4, address: 0x805DDD04
static const char * const CAT_FlowForward; // size: 0x4, address: 0x805DDD08
static const char * const CAT_TotInv; // size: 0x4, address: 0x805DDD0C
static const char * const CAT_NewInv; // size: 0x4, address: 0x805DDD10
static const char * const CAT_UnavInv; // size: 0x4, address: 0x805DDD14
static const char * const CAT_Accept; // size: 0x4, address: 0x805DDD18
static const char * const CAT_Cancel; // size: 0x4, address: 0x805DDD1C
static const char * const CAT_CurrTab; // size: 0x4, address: 0x805DDD20
static const char * const CAT_HideCallback; // size: 0x4, address: 0x805DDD24
static const char * const CAT_Pause; // size: 0x4, address: 0x805DDD28
static const char * const CAT_ShowCallback; // size: 0x4, address: 0x805DDD2C
static const char * const CAT_ShowHelp; // size: 0x4, address: 0x805DDD30
static const char * const CAT_TabsReady; // size: 0x4, address: 0x805DDD34
static const char * const CAT_Hi; // size: 0x4, address: 0x805DDD38
static const char * const CAT_ScrollCB; // size: 0x4, address: 0x805DDD3C
static const char * const CAT_ShadMax; // size: 0x4, address: 0x805DDD40
static const char * const CAT_ShadToItem; // size: 0x4, address: 0x805DDD44
static const char * const CAT_Money; // size: 0x4, address: 0x805DDD48
static const char * const CAT_MotiveValue0; // size: 0x4, address: 0x805DDD4C
static const char * const CAT_MotiveValue1; // size: 0x4, address: 0x805DDD50
static const char * const CAT_MotiveValue2; // size: 0x4, address: 0x805DDD54
static const char * const CAT_MotiveValue3; // size: 0x4, address: 0x805DDD58
static const char * const CAT_ObjDescription; // size: 0x4, address: 0x805DDD5C
static const char * const CAT_ObjInfo1; // size: 0x4, address: 0x805DDD60
static const char * const CAT_ObjInfo2; // size: 0x4, address: 0x805DDD64
static const char * const CAT_ObjName; // size: 0x4, address: 0x805DDD68
static const char * const CAT_ObjPrice; // size: 0x4, address: 0x805DDD6C
static const char * const CAT_Points; // size: 0x4, address: 0x805DDD70
static const char * const CAT_ScreenTitle; // size: 0x4, address: 0x805DDD74
static const char * const CAT_TabName; // size: 0x4, address: 0x805DDD78
static const char * const CAT_TitleIcon; // size: 0x4, address: 0x805DDD7C
static const char * const CAT_ObjDisp2D; // size: 0x4, address: 0x805DDD80
static const char * const CAT_ObjDisp3D; // size: 0x4, address: 0x805DDD84
static const char * const tsc5_catalog_sections_ready; // size: 0x4, address: 0x805DDD88
static const char * const BBS_Hilite; // size: 0x4, address: 0x805DDD8C
static const char * const BBS_Hit; // size: 0x4, address: 0x805DDD90
static const char * const BBS_Cancel; // size: 0x4, address: 0x805DDD94
static const char * const BBS_exists; // size: 0x4, address: 0x805DDD98
static const char * const BBS_config; // size: 0x4, address: 0x805DDD9C
static const char * const BBS_iniSelect; // size: 0x4, address: 0x805DDDA0
static const char * const BBS_horiz; // size: 0x4, address: 0x805DDDA4
static const char * const BBS_noTitle; // size: 0x4, address: 0x805DDDA8
static const char * const BBS_OpenAsChild; // size: 0x4, address: 0x805DDDAC
static const char * const BBS_title; // size: 0x4, address: 0x805DDDB0
static const char * const BBS_section0; // size: 0x4, address: 0x805DDDB4
static const char * const BBS_section1; // size: 0x4, address: 0x805DDDB8
static const char * const BBS_section; // size: 0x4, address: 0x805DDDBC
static const char * const BBS_icn_0_00; // size: 0x4, address: 0x805DDDC0
static const char * const BBS_icn_0_01; // size: 0x4, address: 0x805DDDC4
static const char * const BBS_icn_0_02; // size: 0x4, address: 0x805DDDC8
static const char * const BBS_icn_0_03; // size: 0x4, address: 0x805DDDCC
static const char * const BBS_icn_0_04; // size: 0x4, address: 0x805DDDD0
static const char * const BBS_icn_0_05; // size: 0x4, address: 0x805DDDD4
static const char * const BBS_icn_0_06; // size: 0x4, address: 0x805DDDD8
static const char * const BBS_icn_0_07; // size: 0x4, address: 0x805DDDDC
static const char * const BBS_icn_0_08; // size: 0x4, address: 0x805DDDE0
static const char * const BBS_icn_0_09; // size: 0x4, address: 0x805DDDE4
static const char * const BBS_icn_0_10; // size: 0x4, address: 0x805DDDE8
static const char * const BBS_icn_0_11; // size: 0x4, address: 0x805DDDEC
static const char * const BBS_icn_1_00; // size: 0x4, address: 0x805DDDF0
static const char * const BBS_icn_1_01; // size: 0x4, address: 0x805DDDF4
static const char * const BBS_icn_1_02; // size: 0x4, address: 0x805DDDF8
static const char * const BBS_icn_1_03; // size: 0x4, address: 0x805DDDFC
static const char * const BBS_icn_1_04; // size: 0x4, address: 0x805DDE00
static const char * const BBS_icn_1_05; // size: 0x4, address: 0x805DDE04
static const char * const BBS_icn_1_06; // size: 0x4, address: 0x805DDE08
// total size: 0x14
struct PCTTabInfo {
    // Members
    enum ePCTType mPCTType; // offset 0x0, size 0x4
    signed short mBuildModeType; // offset 0x4, size 0x2
    signed short mFunctionFlags; // offset 0x6, size 0x2
    int mIconID; // offset 0x8, size 0x4
    const char * mTabNameString; // offset 0xC, size 0x4
    const char * mShaderName; // offset 0x10, size 0x4
};
static struct PCTTabInfo BB5TabInfoForObjects[19]; // size: 0x17C, address: 0x80445A68
static struct PCTTabInfo BB5TabInfoForHutObjects[1]; // size: 0x14, address: 0x80445BF4
static struct PCTTabInfo BB5TabInfoForWalls[1]; // size: 0x14, address: 0x8041C35C
static struct PCTTabInfo BB5TabInfoForWallpaper[5]; // size: 0x64, address: 0x80445C98
static struct PCTTabInfo BB5TabInfoForFloors[4]; // size: 0x50, address: 0x80445D58
static struct PCTTabInfo BB5TabInfoForTools[10]; // size: 0xC8, address: 0x80445DD0
// total size: 0x360
class PCTTarget : public UIObjectBase {
    // Static members
    static int m_SavedHutTabIndex; // size: 0x4
    static int m_SavedFloorTabIndex; // size: 0x4
    static int m_SavedPaperTabIndex; // size: 0x4
    static int m_SavedObjectTabIndex; // size: 0x4
    static int m_SavedToolIndex; // size: 0x4

    // Members
    class UIStringGenerator m_GridShaderTable; // offset 0xA4, size 0x8
    class UIStringGenerator m_MotiveShaderTable; // offset 0xAC, size 0x8
    unsigned int m_ControllerFilterID; // offset 0xB4, size 0x4
    enum ePCTMode m_PCTMode; // offset 0xB8, size 0x4
    unsigned char m_IsCancelled; // offset 0xBC, size 0x1
    int m_SortType; // offset 0xC0, size 0x4
    unsigned int m_SelectorCount; // offset 0xC4, size 0x4
    class ObjSelector * * m_pSelectorArray; // offset 0xC8, size 0x4
    const struct PCTTabInfo * m_pTabInfo; // offset 0xCC, size 0x4
    unsigned int m_TabCount; // offset 0xD0, size 0x4
    unsigned int m_CurrentTabIndex; // offset 0xD4, size 0x4
    unsigned int m_CurrentColumnIndex; // offset 0xD8, size 0x4
    unsigned int m_CurrentGridIndex; // offset 0xDC, size 0x4
    class cCellInfo * m_pCellInfo; // offset 0xE0, size 0x4
    unsigned int m_CellInfoCount; // offset 0xE4, size 0x4
    unsigned char m_bShowObjDisp2D; // offset 0xE8, size 0x1
    unsigned char m_bShowObjDisp3D; // offset 0xE9, size 0x1
    int m_MotiveRatingIDs[4]; // offset 0xEC, size 0x10
    int m_MotiveRatingValues[4]; // offset 0xFC, size 0x10
    unsigned char m_IsPlaceMode; // offset 0x10C, size 0x1
    unsigned char m_IsVisible; // offset 0x10D, size 0x1
    unsigned char m_bUIDialogExecuting; // offset 0x10E, size 0x1
    class UIDialog m_UIDialog; // offset 0x110, size 0xA0
    class HelpDialog m_HelpDialog; // offset 0x1B0, size 0xA8
    unsigned char m_CanAffordObject; // offset 0x258, size 0x1
    int m_BuildItemPrice; // offset 0x25C, size 0x4
    unsigned int m_BuildItemShaderID; // offset 0x260, size 0x4
    class BBHTarget * m_pBBHTarget; // offset 0x264, size 0x4
    class vector m_ViewedGoalIDs; // offset 0x268, size 0x10
    class FireMarshall m_FireMarshall; // offset 0x278, size 0xA8
    class EController * m_pController; // offset 0x320, size 0x4
    unsigned char m_IsShiftKeyDown; // offset 0x324, size 0x1
    int m_BBTButtonID; // offset 0x328, size 0x4
    unsigned char m_ResetCatalog; // offset 0x32C, size 0x1
    unsigned char m_RestoreColumnIndex; // offset 0x32D, size 0x1
    int m_PrevCameraMode; // offset 0x330, size 0x4
    float m_PrevZoom; // offset 0x334, size 0x4
    float m_PrevTilt; // offset 0x338, size 0x4
    float m_PrevMinZoom; // offset 0x33C, size 0x4
    float m_PrevMaxZoom; // offset 0x340, size 0x4
    float m_PrevMinTilt; // offset 0x344, size 0x4
    float m_PrevMaxTilt; // offset 0x348, size 0x4
    int m_BBSSelectionIndex; // offset 0x34C, size 0x4
    unsigned int m_BBSControllerFilterID; // offset 0x350, size 0x4
    unsigned char m_BBS_OpenAsChild; // offset 0x354, size 0x1
    unsigned char m_bFlashFlowForward; // offset 0x355, size 0x1
    unsigned int m_GrassShaderID; // offset 0x358, size 0x4
    int m_SecondaryCURRefID; // offset 0x35C, size 0x4
};
union /* @class$52564game_ui_targets_s2c_unity_cpp */ {
    class ObjSelector * mpObjSelector; // offset 0x0, size 0x4
    const struct FenceData * mpFenceData; // offset 0x0, size 0x4
    const struct WallTile * mpWallTile; // offset 0x0, size 0x4
    const struct FloorTile * mpFloorTile; // offset 0x0, size 0x4
};
// total size: 0x14
class cCellInfo {
    // Members
public:
    enum ePCTType mPCTType; // offset 0x0, size 0x4
    int mItemID; // offset 0x4, size 0x4
    unsigned int mShaderID; // offset 0x8, size 0x4
    unsigned char mIsLocked; // offset 0xC, size 0x1
    unsigned char mIsNew; // offset 0xD, size 0x1
    union { // inferred
        union /* @class$52564game_ui_targets_s2c_unity_cpp */ {
            class ObjSelector * mpObjSelector; // offset 0x0, size 0x4
            const struct FenceData * mpFenceData; // offset 0x0, size 0x4
            const struct WallTile * mpWallTile; // offset 0x0, size 0x4
            const struct FloorTile * mpFloorTile; // offset 0x0, size 0x4
        } __anon$52565; // offset 0x10, size 0x4
        class ObjSelector * mpObjSelector; // offset 0x10, size 0x4
        const struct FenceData * mpFenceData; // offset 0x10, size 0x4
        const struct WallTile * mpWallTile; // offset 0x10, size 0x4
        const struct FloorTile * mpFloorTile; // offset 0x10, size 0x4
    };
};
int m_SavedToolIndex; // size: 0x4, address: 0x805DBAF4
int m_SavedObjectTabIndex; // size: 0x4, address: 0x805DBAF8
int m_SavedPaperTabIndex; // size: 0x4, address: 0x805DBAFC
int m_SavedFloorTabIndex; // size: 0x4, address: 0x805DBB00
int m_SavedHutTabIndex; // size: 0x4, address: 0x805DBB04
enum ePCTMode {
    kPCTMode_Tools = 0,
    kPCTMode_ObjectCatalog = 1,
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
static int plotPattern[9][2]; // size: 0x48, address: 0x80445FF8
enum ePCTInteractorState {
    kPCTIS_Other = 0,
    kPCTIS_ObjectIdle = 1,
    kPCTIS_ObjectInHand = 2,
    kPCTIS_WallIdle = 3,
    kPCTIS_WallAnchored = 4,
    kPCTIS_FloorIdle = 5,
    kPCTIS_FloorAnchored = 6,
    kPCTIS_PaperIdle = 7,
    kPCTIS_PaperAnchored = 8,
};
enum ePCTType {
    kPCTType_None = 0,
    kPCTType_Object = 1,
    kPCTType_Wall = 2,
    kPCTType_Wallpaper = 3,
    kPCTType_Floor = 4,
    kPCTType_HutObject = 5,
    kPCTType_COUNT = 6,
};
// total size: 0x1C
class multimap : public rbtree {};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x1C
class rbtree : public rb_base {
    // Static members
    static unsigned long kKeyAlignment; // size: 0x4
    static unsigned long kKeyAlignmentOffset; // size: 0x4
    static unsigned long kValueAlignment; // size: 0x4
    static unsigned long kValueAlignmentOffset; // size: 0x4

    // Members
public:
    struct rbtree_node_base mAnchor; // offset 0x4, size 0x10
    unsigned long mnSize; // offset 0x14, size 0x4
    class allocator mAllocator; // offset 0x18, size 0x1
};
// total size: 0x1
struct rb_base {
    // Members
    struct greater mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct GrabManipulatorParams * second; // offset 0x4, size 0x4
};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct HutPlaceManipulatorParams * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct PlaceManipulatorParams * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct WallManipulatorParams * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct WallPainterParams * second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    enum InteractorType first; // offset 0x0, size 0x4
    struct FloorPainterParams * second; // offset 0x4, size 0x4
};
static const char * const PRG_exists; // size: 0x4, address: 0x805DDE0C
static const char * const PRG_Sections; // size: 0x4, address: 0x805DDE10
static const char * const PRG_Section0; // size: 0x4, address: 0x805DDE14
static const char * const PRG_Section1; // size: 0x4, address: 0x805DDE18
static const char * const PRG_Section2; // size: 0x4, address: 0x805DDE1C
static const char * const PRG_Stat0; // size: 0x4, address: 0x805DDE20
static const char * const PRG_Stat1; // size: 0x4, address: 0x805DDE24
static const char * const PRG_Stat2; // size: 0x4, address: 0x805DDE28
static const char * const PRG_Stat3; // size: 0x4, address: 0x805DDE2C
static const char * const PRG_Stat4; // size: 0x4, address: 0x805DDE30
static const char * const PRG_Stat5; // size: 0x4, address: 0x805DDE34
static const char * const PRG_Stat6; // size: 0x4, address: 0x805DDE38
static const char * const PRG_Stat7; // size: 0x4, address: 0x805DDE3C
static const char * const PRG_Stat8; // size: 0x4, address: 0x805DDE40
static const char * const PRG_Stat9; // size: 0x4, address: 0x805DDE44
static const char * const PRG_Stat10; // size: 0x4, address: 0x805DDE48
static const char * const PRG_Stat11; // size: 0x4, address: 0x805DDE4C
static const char * const PRG_Stat12; // size: 0x4, address: 0x805DDE50
static const char * const PRG_StatVal0; // size: 0x4, address: 0x805DDE54
static const char * const PRG_StatVal1; // size: 0x4, address: 0x805DDE58
static const char * const PRG_StatVal2; // size: 0x4, address: 0x805DDE5C
static const char * const PRG_StatVal3; // size: 0x4, address: 0x805DDE60
static const char * const PRG_StatVal4; // size: 0x4, address: 0x805DDE64
static const char * const PRG_StatVal5; // size: 0x4, address: 0x805DDE68
static const char * const PRG_StatVal6; // size: 0x4, address: 0x805DDE6C
static const char * const PRG_StatVal7; // size: 0x4, address: 0x805DDE70
static const char * const PRG_StatVal8; // size: 0x4, address: 0x805DDE74
static const char * const PRG_StatVal9; // size: 0x4, address: 0x805DDE78
static const char * const PRG_StatVal10; // size: 0x4, address: 0x805DDE7C
static const char * const PRG_StatVal11; // size: 0x4, address: 0x805DDE80
static const char * const PRG_StatVal12; // size: 0x4, address: 0x805DDE84
static const char * const PRG_CANCEL_BUTTON; // size: 0x4, address: 0x805DDE88
const char * PRG_CLOSE_MENU; // size: 0x4, address: 0x805D9A50
// total size: 0xC
struct PersonalInfoStat {
    // Members
    int (* calculationFunction)(); // offset 0x0, size 0x4
    int (* possibleFucntion)(); // offset 0x4, size 0x4
    char * uiString; // offset 0x8, size 0x4
};
struct PersonalInfoStat m_StatusFetchers[13]; // size: 0x9C, address: 0x80446568
static const char * const PRG_TabIcon0; // size: 0x4, address: 0x805DDE8C
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
static const char * const R2L_exists; // size: 0x4, address: 0x805DDE90
static const char * const R2L_TotInv; // size: 0x4, address: 0x805DDE94
static const char * const R2L_ShadToItem; // size: 0x4, address: 0x805DDE98
static const char * const R2L_Hi; // size: 0x4, address: 0x805DDE9C
static const char * const R2L_ShadMax; // size: 0x4, address: 0x805DDEA0
static const char * const R2L_ShowHelp; // size: 0x4, address: 0x805DDEA4
static const char * const R2L_FullName; // size: 0x4, address: 0x805DDEA8
static const char * const R2L_Description; // size: 0x4, address: 0x805DDEAC
static const char * const R2L_RelationshipValue; // size: 0x4, address: 0x805DDEB0
static const char * const R2L_RelationshipLevel; // size: 0x4, address: 0x805DDEB4
static const char * const R2L_Title; // size: 0x4, address: 0x805DDEB8
static const char * const R2L_Person2D; // size: 0x4, address: 0x805DDEBC
static const char * const R2L_RelationshipLevelIcon; // size: 0x4, address: 0x805DDEC0
static const char * const R2L_TabIcon0; // size: 0x4, address: 0x805DDEC4
static unsigned int R2L_IconHappyFaceShaders[10]; // size: 0x28, address: 0x8041C370
static char * const R2L_gHeadTable[20]; // size: 0x50, address: 0x8041C398
static char * const R2L_gLevelTable[20]; // size: 0x50, address: 0x8041C3E8
static char * const R2L_gValTable[20]; // size: 0x50, address: 0x8041C438
// total size: 0x2E8
class R2LTarget : public UIObjectBase, public HelpDialogCallback {
    // Members
    unsigned int m_ControllerFilterID; // offset 0xA8, size 0x4
    class R2LRecord * m_records; // offset 0xAC, size 0x4
    int m_recordCount; // offset 0xB0, size 0x4
    int m_selectedRecord; // offset 0xB4, size 0x4
    int m_gridItems[20]; // offset 0xB8, size 0x50
    class BString2 m_description; // offset 0x108, size 0x4
    int m_relationshipValue; // offset 0x10C, size 0x4
    enum tRelationshipType m_relationshipLevel; // offset 0x110, size 0x4
    unsigned char m_summaryDialogVisible; // offset 0x114, size 0x1
    class UIDialog m_summaryDialog; // offset 0x118, size 0xA0
    class HelpDialog m_helpDialog; // offset 0x1B8, size 0xA8
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x260, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x290, size 0x50
    class EVec2 m_CursorPoint; // offset 0x2E0, size 0x8
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
// total size: 0x1C
class R2LRecord {
    // Members
public:
    unsigned int guid; // offset 0x0, size 0x4
    class Neighbor * pNeighbor; // offset 0x4, size 0x4
    class ERShader * shader; // offset 0x8, size 0x4
    class BString2 firstName; // offset 0xC, size 0x4
    class BString2 lastName; // offset 0x10, size 0x4
    int relValue; // offset 0x14, size 0x4
    unsigned char m_bIsMarried; // offset 0x18, size 0x1
    unsigned char m_bIsMaster; // offset 0x19, size 0x1
    unsigned char m_bIsMine; // offset 0x1A, size 0x1
    unsigned char m_bIsPack; // offset 0x1B, size 0x1
};
static const char * const RMD_exists; // size: 0x4, address: 0x805DDEC8
static const char * const RMD_SELECT_BUTTON; // size: 0x4, address: 0x805DDECC
static const char * const show_tween_RMD; // size: 0x4, address: 0x805DDED0
static const char * const hide_tween_RMD; // size: 0x4, address: 0x805DDED4
static const char * const RMD_title; // size: 0x4, address: 0x805DDED8
static const char * const RMD_btn_text; // size: 0x4, address: 0x805DDEDC
static const char * const RMD_model; // size: 0x4, address: 0x805DDEE0
static const char * const RMD_bg; // size: 0x4, address: 0x805DDEE4
static const char * const RMD_title_A1; // size: 0x4, address: 0x805DDEE8
static const char * const RMD_title_A2; // size: 0x4, address: 0x805DDEEC
static const char * const RMD_title_A3; // size: 0x4, address: 0x805DDEF0
static const char * const RMD_btn_A1; // size: 0x4, address: 0x805DDEF4
static const char * const RMD_btn_A2; // size: 0x4, address: 0x805DDEF8
static const char * const RMD_btn_A3; // size: 0x4, address: 0x805DDEFC
static char * const RMD_Title_Strings[6]; // size: 0x18, address: 0x8041C488
static char * const RMD_Button_Strings[6]; // size: 0x18, address: 0x8041C4A0
static unsigned int RMD_Audio_Samples[6]; // size: 0x18, address: 0x80446F18
// total size: 0xC
struct rmdModelInfo_s {
    // Members
    unsigned int modelId; // offset 0x0, size 0x4
    unsigned int charId; // offset 0x4, size 0x4
    unsigned int animId; // offset 0x8, size 0x4
};
static struct rmdModelInfo_s RMD_Model_Ids[6]; // size: 0x48, address: 0x80446F30
enum eState {
    eState_Default = 0,
    eState_ShowTween = 1,
    eState_Visible = 2,
    eState_HideTween = 3,
    eState_Unloading = 4,
};
// total size: 0xCC
class RMDTarget : public UIObjectBase {
    // Members
    unsigned char m_RMDLoaded; // offset 0xA4, size 0x1
    enum eState m_rmdState; // offset 0xA8, size 0x4
    unsigned int m_controllerFilterID; // offset 0xAC, size 0x4
    unsigned char m_pausedSimulator; // offset 0xB0, size 0x1
    int m_type; // offset 0xB4, size 0x4
    int m_goalIndex; // offset 0xB8, size 0x4
    class BString2 m_title; // offset 0xBC, size 0x4
    class BString2 m_buttonText; // offset 0xC0, size 0x4
    float m_nDialogTimer; // offset 0xC4, size 0x4
    unsigned char m_timeoutOccured; // offset 0xC8, size 0x1
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
// total size: 0x30
struct {} __vt__9R2LTarget; // size: 0x30, address: 0x80446FE8
// total size: 0x20
struct {} __vt__9PRGTarget; // size: 0x20, address: 0x80447018
// total size: 0x28
struct {} __vt__9PCTTarget; // size: 0x28, address: 0x80447050
// total size: 0x20
struct {} __vt__9O2TTarget; // size: 0x20, address: 0x80447078
// total size: 0x30
struct {} __vt__9INGTarget; // size: 0x30, address: 0x80447098
// total size: 0x20
struct {} __vt__9RMDTarget; // size: 0x20, address: 0x804470C8
// total size: 0x20
struct {} __vt__9MDITarget; // size: 0x20, address: 0x804470E8
// total size: 0x20
struct {} __vt__9ITBTarget; // size: 0x20, address: 0x80447108
// total size: 0x20
struct {} __vt__9MOTTarget; // size: 0x20, address: 0x80447128
// total size: 0x30
struct {} __vt__9CSPTarget; // size: 0x30, address: 0x80447148
// total size: 0xC
struct {} __vt__18HelpDialogCallback; // size: 0xC, address: 0x80447178
// total size: 0x44
struct {} __vt__9M2MTarget; // size: 0x44, address: 0x80447184
// total size: 0x54
struct {} __vt__9K2YTarget; // size: 0x54, address: 0x804471C8
// total size: 0x20
struct {} __vt__9CRDTarget; // size: 0x20, address: 0x80447220
// total size: 0x20
struct {} __vt__9BBHTarget; // size: 0x20, address: 0x80447240
// total size: 0x20
struct {} __vt__9FCMTarget; // size: 0x20, address: 0x80447260
// total size: 0xC
struct {} __vt__12AptParagraph; // size: 0xC, address: 0x80447280
// total size: 0x20
struct {} __vt__9ACTTarget; // size: 0x20, address: 0x80447290
// total size: 0xC
struct {} __vt__Q29ACTTarget8iqRecord; // size: 0xC, address: 0x804472B0
// total size: 0x20
struct {} __vt__9H2DTarget; // size: 0x20, address: 0x804472C0
// total size: 0x20
struct {} __vt__9G2DTarget; // size: 0x20, address: 0x804472E0
// total size: 0x18
struct {} __vt__8UIDialog; // size: 0x18, address: 0x80447300
// total size: 0x1
struct greater : public binary_function {};

