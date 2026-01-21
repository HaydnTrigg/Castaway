/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\game_ui_core_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017BBB8 -> 0x8017BBB8
*/
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041BC60
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041BC9C
float SAFE_LEFT; // size: 0x4, address: 0x805DD888
float SAFE_TOP; // size: 0x4, address: 0x805DD88C
float SAFE_RIGHT; // size: 0x4, address: 0x805DD890
float SAFE_BOTTOM; // size: 0x4, address: 0x805DD894
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0xA4
class SimpleOkDialog : public UIDialog {
    // Members
public:
    unsigned char m_enabled; // offset 0xA0, size 0x1
};
class UI2D * s_pInstance; // size: 0x4, address: 0x805DBA70
class UI3D * s_pInstance; // size: 0x4, address: 0x805DBA74
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
unsigned int UIAMBIENT_frontend[47]; // size: 0xBC, address: 0x8041BCC8
unsigned int UIAMBIENT_cas[24]; // size: 0x60, address: 0x8041BD88
unsigned int AMBIENT_Store_lengths[2]; // size: 0x8, address: 0x805D8A38
class UIAMBIENT * s_pInstance; // size: 0x4, address: 0x805DBA78
enum eUIAMBIENT_screen {
    eUIAMBIENT_screen_frontend = 0,
    eUIAMBIENT_screen_cas = 1,
    eUIAMBIENT_screen_cardinal = 2,
};
// total size: 0x60
class UIAMBIENT {
    // Static members
    static unsigned int AMBIENT_Store_lengths[2]; // size: 0x8
    static unsigned int UIAMBIENT_cas[24]; // size: 0x60
    static unsigned int UIAMBIENT_frontend[47]; // size: 0xBC
    static class UIAMBIENT * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int m_nextVoice; // offset 0x4, size 0x4
    struct EVoice * m_voice[3]; // offset 0x8, size 0xC
    class EResource * m_voiceLastPlayedSampleRes[3]; // offset 0x14, size 0xC
    unsigned int m_voiceLastPlayedSample[3]; // offset 0x20, size 0xC
    float m_voiceLeftVolume[3]; // offset 0x2C, size 0xC
    float m_voiceRightVolume[3]; // offset 0x38, size 0xC
    unsigned char m_voiceBind[3]; // offset 0x44, size 0x3
    unsigned char m_active; // offset 0x47, size 0x1
    float m_fDelayToNextSound; // offset 0x48, size 0x4
    enum eUIAMBIENT_screen m_store; // offset 0x4C, size 0x4
    const unsigned int * m_soundTable; // offset 0x50, size 0x4
    unsigned int m_soundTableCount; // offset 0x54, size 0x4
    unsigned int m_strobe; // offset 0x58, size 0x4
    unsigned int m_lastIndex; // offset 0x5C, size 0x4
};
class UIAUDIO * s_pInstance; // size: 0x4, address: 0x805DBA7C
class GetVariableCommandTable * s_pInstance; // size: 0x4, address: 0x805DBA80
class SetVariableCommandTable * s_pInstance; // size: 0x4, address: 0x805DBA84
class GetLocalizableCommandTable * s_pInstance; // size: 0x4, address: 0x805DBA88
struct UIDBData s_UIDBTable[49]; // size: 0x24C, address: 0x804939D0
unsigned char s_UIDBInitialized; // size: 0x1, address: 0x805DBA8C
// total size: 0x1
class UIDB {
    // Static members
    static unsigned char s_UIDBInitialized; // size: 0x1
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
class UIDrawTable * s_pInstance; // size: 0x4, address: 0x805DBA90
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
struct UIScreenData UIScreenDataTable[75]; // size: 0x5DC, address: 0x80431AC4
int m_groupNumber; // size: 0x4, address: 0x805DBA94
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
enum ValidationReturnType {
    ValidationReturnType_None = 0,
    ValidationReturnType_Success = 1,
    ValidationReturnType_Failure = 2,
};
// total size: 0x1C
class WidgetScreenFormat {
    // Members
    enum ValidationReturnType m_validationReturn; // offset 0x0, size 0x4
    const char * * m_ppTags; // offset 0x4, size 0x4
    const char * m_data; // offset 0x8, size 0x4
    unsigned int m_sizeAccumulator; // offset 0xC, size 0x4
    char * m_pOutputBlock; // offset 0x10, size 0x4
    char * m_pOutput; // offset 0x14, size 0x4
    const char * m_lastStartTag; // offset 0x18, size 0x4
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
class UIButtonImages * instance; // size: 0x4, address: 0x805DBA98
// total size: 0x1B0
class UIButtonImages {
    // Static members
    static class UIButtonImages * instance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    unsigned int buttonShaderIDs[35]; // offset 0x4, size 0x8C
    class ERShader * buttonShaders[35]; // offset 0x90, size 0x8C
    float buttonMinSizes[35]; // offset 0x11C, size 0x8C
    unsigned char m_bDoneAddRef; // offset 0x1A8, size 0x1
    int m_button_platform; // offset 0x1AC, size 0x4
};
class CURTarget * s_SingletonCURTarget; // size: 0x4, address: 0x805DBA9C
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
class UIUpdateTable * s_pInstance; // size: 0x4, address: 0x805DBAA0
// total size: 0x10
struct structDrawCBparams {
    // Members
    class EVec2 * TL; // offset 0x0, size 0x4
    class EVec2 * BR; // offset 0x4, size 0x4
    class EVec4 * nColourScale; // offset 0x8, size 0x4
    class EVec4 * nColourTranslate; // offset 0xC, size 0x4
};
struct structDrawCBparams s_drawCBparams; // size: 0x10, address: 0x80493C20
class UIUserDrawCBTable * s_pInstance; // size: 0x4, address: 0x805DBAA4
// total size: 0x14
class CBFunctor2 : public CBFunctorBase {
    // Members
    void (* thunk)(class CBFunctorBase &, class ERC *, struct structDrawCBparams *); // offset 0x10, size 0x4
};
// total size: 0x8
struct TagsAndTests {
    // Members
    const char * tagString; // offset 0x0, size 0x4
    enum WidgetLayoutValidationType testType; // offset 0x4, size 0x4
};
struct TagsAndTests ValidTagsAndTests[64]; // size: 0x200, address: 0x8041BE38
char * Widget_ActionQueue[684]; // size: 0xAB0, address: 0x804325F8
char * Widget_TutorialHide[8]; // size: 0x20, address: 0x804330A8
char * Widget_BuildBuyHUD[464]; // size: 0x740, address: 0x80433308
char * Widget_Credits[196]; // size: 0x310, address: 0x80433B08
char * Widget_ChallengeSocial[34]; // size: 0x88, address: 0x80433E38
char * Widget_FAMTarget[2195]; // size: 0x224C, address: 0x80434EF0
char * Widget_FireCodeMeter[137]; // size: 0x224, address: 0x80437180
char * Widget_G2D[315]; // size: 0x4EC, address: 0x8043752C
char * Widget_H2D[88]; // size: 0x160, address: 0x80437AD0
char * Widget_IntroThoughtBalloon[123]; // size: 0x1EC, address: 0x80437C98
char * Widget_LotSelectMap[1771]; // size: 0x1BAC, address: 0x804382EC
char * Widget_M2M[356]; // size: 0x590, address: 0x8043A060
char * Widget_ModelessDialog[134]; // size: 0x218, address: 0x8043A668
char * Widget_Motives[274]; // size: 0x448, address: 0x8043AA48
char * Widget_Pause[323]; // size: 0x50C, address: 0x8043AF84
char * Widget_PRGTarget[57]; // size: 0xE4, address: 0x8043B4C4
char * Widget_RewardMomentDialog[306]; // size: 0x4C8, address: 0x8043B698
char * Widget_Skills[961]; // size: 0xF04, address: 0x8043C00C
char * Widget_SimSwitcherHide[8]; // size: 0x20, address: 0x8043CF10
char * Widget_TRC[315]; // size: 0x4EC, address: 0x8043D094
char * Widget_WantsAndFears[553]; // size: 0x8A4, address: 0x8043D800
char * Widget_PetPointsConversionDialog[463]; // size: 0x73C, address: 0x8043E388
char * Widget_PetKennelDialog[440]; // size: 0x6E0, address: 0x8043ECF8
enum IterationType {
    IterationType_StructureTest = 0,
    IterationType_DataTest = 1,
    IterationType_Size = 2,
    IterationType_Output = 3,
};
enum WidgetLayoutValidationType {
    WidgetLayoutValidationType_None = 0,
    WidgetLayoutValidationType_X = 1,
    WidgetLayoutValidationType_Y = 2,
    WidgetLayoutValidationType_Z = 3,
    WidgetLayoutValidationType_H = 4,
    WidgetLayoutValidationType_W = 5,
    WidgetLayoutValidationType_Bool = 6,
    WidgetLayoutValidationType_Id = 7,
    WidgetLayoutValidationType_StringVar = 8,
    WidgetLayoutValidationType_ButtonName = 9,
    WidgetLayoutValidationType_ShaderType = 10,
    WidgetLayoutValidationType_Color = 11,
    WidgetLayoutValidationType_Alpha = 12,
    WidgetLayoutValidationType_Font = 13,
    WidgetLayoutValidationType_Swf = 14,
    WidgetLayoutValidationType_Mask = 15,
    WidgetLayoutValidationType_Trans = 16,
    WidgetLayoutValidationType_TextAlign = 17,
    WidgetLayoutValidationType_TextStyle = 18,
    WidgetLayoutValidationType_SetVarSupport = 19,
    WidgetLayoutValidationType_SwfFileSupport = 20,
    WidgetLayoutValidationType_ScreenSupport = 21,
    WidgetLayoutValidationType_SwfSupport = 22,
    WidgetLayoutValidationType_ShaderSupport = 23,
    WidgetLayoutValidationType_GetVarSupport = 24,
    WidgetLayoutValidationType_ButtonSound = 25,
};
// total size: 0xC
struct {} __vt__9UIAMBIENT; // size: 0xC, address: 0x8043F46C
// total size: 0x18
struct {} __vt__14SimpleOkDialog; // size: 0x18, address: 0x8043F478
// total size: 0x18
struct {} __vt__10HelpDialog; // size: 0x18, address: 0x8043F490
// total size: 0x20
struct {} __vt__9CURTarget; // size: 0x20, address: 0x8043F4A8
// total size: 0xC
struct {} __vt__14UIButtonImages; // size: 0xC, address: 0x8043F4C8
// total size: 0x20
struct {} __vt__8UIAnalog; // size: 0x20, address: 0x8043F4D8
// total size: 0x20
struct {} __vt__13UIAUDIOTarget; // size: 0x20, address: 0x8043F4F8
// total size: 0x20
struct {} __vt__15UIScreenManager; // size: 0x20, address: 0x8043F518
// total size: 0x20
struct {} __vt__10UIDBTarget; // size: 0x20, address: 0x8043F538
// total size: 0x20
struct {} __vt__8UIRouter; // size: 0x20, address: 0x8043F558
// total size: 0x20
struct {} __vt__10UIQDTarget; // size: 0x20, address: 0x8043F578
// total size: 0xC
struct {} __vt__7UIAUDIO; // size: 0xC, address: 0x8043F5B8
// total size: 0xC
struct {} __vt__Q27UIAUDIO13UIAUDIORecord; // size: 0xC, address: 0x8043F5C4
// total size: 0xC
struct {} __vt__4UI3D; // size: 0xC, address: 0x8043F5D0
// total size: 0xC
struct {} __vt__Q24UI3D10UI3DRecord; // size: 0xC, address: 0x8043F5DC
// total size: 0xC
struct {} __vt__4UI2D; // size: 0xC, address: 0x8043F5E8
// total size: 0xC
struct {} __vt__Q24UI2D10UI2DRecord; // size: 0xC, address: 0x8043F5F4
// total size: 0xC
struct {} __vt__17UIUserDrawCBTable; // size: 0xC, address: 0x8043F600
// total size: 0xC
struct {} __vt__Q217UIUserDrawCBTable21UserDrawCBTableRecord; // size: 0xC, address: 0x8043F60C
// total size: 0xC
struct {} __vt__11UIDrawTable; // size: 0xC, address: 0x8043F618
// total size: 0xC
struct {} __vt__Q211UIDrawTable15DrawTableRecord; // size: 0xC, address: 0x8043F624
// total size: 0xC
struct {} __vt__13UIUpdateTable; // size: 0xC, address: 0x8043F630
// total size: 0xC
struct {} __vt__Q213UIUpdateTable17UpdateTableRecord; // size: 0xC, address: 0x8043F63C
// total size: 0xC
struct {} __vt__26GetLocalizableCommandTable; // size: 0xC, address: 0x8043F648
// total size: 0xC
struct {} __vt__Q226GetLocalizableCommandTable32GetLocalizableCommandTableRecord; // size: 0xC, address: 0x8043F654
// total size: 0xC
struct {} __vt__23SetVariableCommandTable; // size: 0xC, address: 0x8043F660
// total size: 0xC
struct {} __vt__Q223SetVariableCommandTable29SetVariableCommandTableRecord; // size: 0xC, address: 0x8043F66C
// total size: 0xC
struct {} __vt__23GetVariableCommandTable; // size: 0xC, address: 0x8043F678
// total size: 0xC
struct {} __vt__Q223GetVariableCommandTable29GetVariableCommandTableRecord; // size: 0xC, address: 0x8043F684

