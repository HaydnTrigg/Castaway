/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\game_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F62D0 -> 0x801F62D0
*/
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041C940
static const char * kFrameEffectDisableStr; // size: 0x4, address: 0x805D9E48
static const char * kNoteValueSeparator; // size: 0x4, address: 0x805D9E50
// total size: 0x0
struct ERQTable {};
// total size: 0xC
class TArray {
    // Members
protected:
    class EString * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x34
struct FrameEffectsBloomDataElement {
    // Members
    float frameAmp; // offset 0x0, size 0x4
    float bloomThreshold; // offset 0x4, size 0x4
    float bloomAmp; // offset 0x8, size 0x4
    float bloomFrameBlends00; // offset 0xC, size 0x4
    float bloomFrameBlends01; // offset 0x10, size 0x4
    float bloomFrameBlends10; // offset 0x14, size 0x4
    float bloomFrameBlends11; // offset 0x18, size 0x4
    float bloomFrameBlends20; // offset 0x1C, size 0x4
    float bloomFrameBlends21; // offset 0x20, size 0x4
    float bloomFrameBlends30; // offset 0x24, size 0x4
    float bloomFrameBlends31; // offset 0x28, size 0x4
    float fadeInTime; // offset 0x2C, size 0x4
    float fadeOutTime; // offset 0x30, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x14
struct FrameEffectsMotionBlurDataElement {
    // Members
    float colorOffset; // offset 0x0, size 0x4
    float previousFrameBlendAmount; // offset 0x4, size 0x4
    int downSampleLevel; // offset 0x8, size 0x4
    float fadeInTime; // offset 0xC, size 0x4
    float fadeOutTime; // offset 0x10, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x1C
struct FrameEffectsDepthOfFieldDataElement {
    // Members
    int downSampleLevel; // offset 0x0, size 0x4
    float tintR; // offset 0x4, size 0x4
    float tintG; // offset 0x8, size 0x4
    float tintB; // offset 0xC, size 0x4
    float blurFactor; // offset 0x10, size 0x4
    float fadeInTime; // offset 0x14, size 0x4
    float fadeOutTime; // offset 0x18, size 0x4
};
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041C97C
float gRebootTimer; // size: 0x4, address: 0x805DBB78
char m_nameOfNgh[16]; // size: 0x10, address: 0x80493D98
// total size: 0x2
struct /* @class$43709game_unity_cpp */ {
    // Members
    unsigned short btn; // offset 0x0, size 0x2
};
// total size: 0x28
class PlayerCheats {
    // Members
    class EClock m_cheatClock; // offset 0x0, size 0x10
    float m_fCurrentMS; // offset 0x10, size 0x4
    int m_currentBtnIndex; // offset 0x14, size 0x4
    unsigned char m_bPurgeButtons; // offset 0x18, size 0x1
    // total size: 0x2
    struct /* @class$43709game_unity_cpp */ {
        // Members
        unsigned short btn; // offset 0x0, size 0x2
    } m_btnMemory[6]; // offset 0x1A, size 0xC
};
class PlayerCheats g_playerCheats; // size: 0x28, address: 0x80493DB8
int s_startLot; // size: 0x4, address: 0x805D9E6C
char rebootName[256]; // size: 0x100, address: 0x80493DE0
class ESimsApp _app; // size: 0x488, address: 0x80493EF0
// total size: 0x4
struct LocalizationShaders {
    // Members
    unsigned int shaders; // offset 0x0, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct LocalizationShaders * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
int aProfile; // size: 0x4, address: 0x805DBB7C
static unsigned char bEnabledHBM; // size: 0x1, address: 0x805DBB80
static float hbmTime; // size: 0x4, address: 0x805DBB84
static float colourScale[4]; // size: 0x10, address: 0x80494378
static float colourTranslate[4]; // size: 0x10, address: 0x80494388
static class EMat4 vertexMatrix; // size: 0x40, address: 0x80494398
static unsigned char bAptAuxAsyncFlashLoadQueueEmpty; // size: 0x1, address: 0x805D9E92
static struct AptAuxLayerInfo gLevelInfo[60]; // size: 0x780, address: 0x804943E8
static struct _FILE * savedInputsFile; // size: 0x4, address: 0x805DBB88
static struct AptSavedInputRecord * gaSavedInputs; // size: 0x4, address: 0x805DBB8C
static int gnSavedInputFileSize; // size: 0x4, address: 0x805DBB90
// total size: 0x110
struct LoadParams {
    // Members
    char szName[256]; // offset 0x0, size 0x100
    struct AptAuxLayerInfo * pLevel; // offset 0x100, size 0x4
    class AptSharedPtr pAsyncLoadContext; // offset 0x104, size 0x4
    void * pMainData; // offset 0x108, size 0x4
    void * pConstTable; // offset 0x10C, size 0x4
};
static struct LoadParams * aFinishedLoads[256]; // size: 0x400, address: 0x80494B68
static int nFinishedLoads; // size: 0x4, address: 0x805DBB94
static class ERC * gPrc; // size: 0x4, address: 0x805DBB98
static class EClock * aptClock; // size: 0x4, address: 0x805DBB9C
static class UIObjectBase * gpUiObjectList[1]; // size: 0x4, address: 0x805DBBA0
static unsigned char gbFinishedFlashInit; // size: 0x1, address: 0x805DBBA4
static const char * gszFlashInitFile; // size: 0x4, address: 0x805DBBA8
int iUseStencil; // size: 0x4, address: 0x805DBBAC
int iUseStencilCCR; // size: 0x4, address: 0x805DBBB0
int _clampAptColorsAt128; // size: 0x4, address: 0x805DBBB4
class ERFont * gpFont; // size: 0x4, address: 0x805DBBB8
static class EVec2 pWXH[350]; // size: 0xAF0, address: 0x80494F68
static class ERTexture * gpTextures[350]; // size: 0x578, address: 0x80495A58
static class EShader * gpShaders[350]; // size: 0x578, address: 0x80495FD0
static int gTextureSlots[350]; // size: 0x578, address: 0x80496548
struct psystem * g_pTextParticleSystem; // size: 0x4, address: 0x805DBBBC
// total size: 0x564
class FPHeap {
    // Members
    class EAHeap m_baseHeap; // offset 0x0, size 0x564
};
// total size: 0x8
struct AptAuxIDToChar {
    // Members
private:
    enum AptAuxCharacterType eType; // offset 0x0, size 0x4
    void * pData; // offset 0x4, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
enum AptAuxCharacterType {
    AptAuxCharacterType_None = 0,
    AptAuxCharacterType_Geometry = 1,
    AptAuxCharacterType_Texture = 2,
};
// total size: 0x20
struct AptCXForm {
    // Members
    float scale[4]; // offset 0x0, size 0x10
    float translate[4]; // offset 0x10, size 0x10
};
enum AptMaskRenderOperation {
    AptMaskRenderOperation_Subtract = -1,
    AptMaskRenderOperation_None = 0,
    AptMaskRenderOperation_Add = 1,
};
struct AllocatedString allocStrings[250]; // size: 0x2710, address: 0x80496AC0
// total size: 0x28
struct AllocatedString {
    // Members
    int bUsed; // offset 0x0, size 0x4
    unsigned int nColour; // offset 0x4, size 0x4
    float fLeft; // offset 0x8, size 0x4
    float fTop; // offset 0xC, size 0x4
    float fRight; // offset 0x10, size 0x4
    float fBottom; // offset 0x14, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x18, size 0x4
    float fontSize; // offset 0x1C, size 0x4
    char * szText; // offset 0x20, size 0x4
    class AptParagraph * pParagraph; // offset 0x24, size 0x4
};
struct AllocatedString defaultAllocString; // size: 0x28, address: 0x804991D0
// total size: 0x70
struct AptAllocateStringParameters {
    // Members
    const char * szFontName; // offset 0x0, size 0x4
    float x0; // offset 0x4, size 0x4
    float y0; // offset 0x8, size 0x4
    float x1; // offset 0xC, size 0x4
    float y1; // offset 0x10, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x14, size 0x4
    enum AptStringAlignment eBoxAlignment; // offset 0x18, size 0x4
    int nMaxScroll; // offset 0x1C, size 0x4
    float fStrLen; // offset 0x20, size 0x4
    int bMultiline; // offset 0x24, size 0x4
    int bWordWrap; // offset 0x28, size 0x4
    unsigned int nColour; // offset 0x2C, size 0x4
    unsigned int nBackColor; // offset 0x30, size 0x4
    unsigned int nBorderColor; // offset 0x34, size 0x4
    int bBackground; // offset 0x38, size 0x4
    int bBorder; // offset 0x3C, size 0x4
    float fTextWidth; // offset 0x40, size 0x4
    float fTextHeight; // offset 0x44, size 0x4
    float fFontHeight; // offset 0x48, size 0x4
    int nLineOffset; // offset 0x4C, size 0x4
    int * pnNumLines; // offset 0x50, size 0x4
    const char * szString; // offset 0x54, size 0x4
    unsigned int eFlags; // offset 0x58, size 0x4
    void * pCurrString; // offset 0x5C, size 0x4
    unsigned int nFontStyle; // offset 0x60, size 0x4
    int nIndent; // offset 0x64, size 0x4
    int nLeftMargin; // offset 0x68, size 0x4
    int nRightMargin; // offset 0x6C, size 0x4
};
// total size: 0xC08
class Queue {
    // Members
protected:
    struct LoadingFlashItems fElems[256]; // offset 0x0, size 0xC00
    unsigned int fFirst; // offset 0xC00, size 0x4
    unsigned int fLast; // offset 0xC04, size 0x4
};
class Queue loadingQueue; // size: 0xC08, address: 0x804991F8
// total size: 0xC
struct LoadingFlashItems {
    // Members
    struct LoadParams * pLP; // offset 0x0, size 0x4
    int nId; // offset 0x4, size 0x4
    class EString * szBaseFilename; // offset 0x8, size 0x4
};
// total size: 0x18
class ERFlash : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class FlashBigFile * m_bigFileData; // offset 0x14, size 0x4
};
// total size: 0x4
class AptSharedPtr {
    // Members
public:
    struct AptFile * pData; // offset 0x0, size 0x4
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
    struct AptAuxIDToChar * mpBegin; // offset 0x0, size 0x4
    struct AptAuxIDToChar * mpEnd; // offset 0x4, size 0x4
    struct AptAuxIDToChar * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct AptAuxIDToChar * mIterator; // offset 0x0, size 0x4
};
static int _aptTriangleUVidx[12]; // size: 0x30, address: 0x8044DD40
static class EVec4 WT_COLOR; // size: 0x10, address: 0x80499E00
class EMat4 s_restoreMatrix; // size: 0x40, address: 0x80499E10
// total size: 0x38
class AptShaderWord : public AptWord {
    // Members
    float m_spaceWidth; // offset 0x30, size 0x4
    int m_buttonIndex; // offset 0x34, size 0x4
};
class AptViewer * _gpAptViewer; // size: 0x4, address: 0x805DBBC0
// total size: 0x3C
struct AptInitParmsT {
    // Members
    int iButtonSetSize; // offset 0x0, size 0x4
    int iInputSetSize; // offset 0x4, size 0x4
    int iListenerSetSize; // offset 0x8, size 0x4
    int iActionPoolSize; // offset 0xC, size 0x4
    int iMaxIntervalFunctions; // offset 0x10, size 0x4
    int iMaxButtonInstances; // offset 0x14, size 0x4
    int iMaxNewMovieClipsPerFrame; // offset 0x18, size 0x4
    int iMaxQueuedInputs; // offset 0x1C, size 0x4
    int iStackSize; // offset 0x20, size 0x4
    int iCallStackDepth; // offset 0x24, size 0x4
    int iDeferedVectorSize; // offset 0x28, size 0x4
    int iStringPoolSize; // offset 0x2C, size 0x4
    int iRegArraySize; // offset 0x30, size 0x4
    int iZombieVectorSize; // offset 0x34, size 0x4
    unsigned char bDefaultMouseWheelFlag; // offset 0x38, size 0x1
    unsigned char bPrintZombieDump; // offset 0x39, size 0x1
};
static class QTimer s_qtimerInside; // size: 0x8, address: 0x805DBBC8
static class QTimer s_qtimerOutside; // size: 0x8, address: 0x805DBBD0
float repeatSeconds; // size: 0x4, address: 0x805DBBD8
int repeatRate[4]; // size: 0x10, address: 0x80499E68
int repeatCount[4]; // size: 0x10, address: 0x80499E78
static float timeAcc; // size: 0x4, address: 0x805DBBDC
enum AptInputController {
    AptInputController_Keyboard = 0,
    AptInputController_Mouse = 1,
    AptInputController_Gamepad0 = 2,
    AptInputController_Gamepad1 = 3,
    AptInputController_Gamepad2 = 4,
    AptInputController_Gamepad3 = 5,
    AptInputController_Gamepad4 = 6,
    AptInputController_Gamepad5 = 7,
    AptInputController_Gamepad6 = 8,
    AptInputController_Gamepad7 = 9,
    AptInputController_NumControllers = 10,
};
class BG _bg; // size: 0x1, address: 0x805DBBE0
unsigned char s_bBGComplete; // size: 0x1, address: 0x805DBBE1
static unsigned char s_casTargetSkipUI; // size: 0x1, address: 0x805DBBE2
enum CameraMode m_modeDef; // size: 0x4, address: 0x805D9F94
class NewControlParms s_newControlParms; // size: 0xB4, address: 0x80499EA0
class SimsCameraParameters s_params; // size: 0x1A0, address: 0x80499F60
static unsigned char old_camera_mode; // size: 0x1, address: 0x805DBBE3
static unsigned char blueprintCamReset; // size: 0x1, address: 0x805D9F98
static float delta; // size: 0x4, address: 0x805D9F9C
static class EVec2 defaultPosition; // size: 0x8, address: 0x805DBBE8
class CameraManager * s_pCameraManager; // size: 0x4, address: 0x805DBBF0
// total size: 0x4
class CameraManager {
    // Static members
    static class CameraManager * s_pCameraManager; // size: 0x4

    // Members
    class ESimsCam * m_pCamera; // offset 0x0, size 0x4
};
// total size: 0xC
struct HashIterator {
    // Members
    struct HashList * pList; // offset 0x0, size 0x4
    int i; // offset 0x4, size 0x4
    class ECheatLookup * node; // offset 0x8, size 0x4
};
class RaycastLastHit m_lastHit; // size: 0x30, address: 0x8049A100
// total size: 0x1
class CollisionMap {
    // Static members
    static class RaycastLastHit m_lastHit; // size: 0x30
};
// total size: 0x14
class Intersection {
    // Members
public:
    class EVec2 m_vPosition; // offset 0x0, size 0x8
    class EVec2 m_vNormal; // offset 0x8, size 0x8
    float m_fT; // offset 0x10, size 0x4
};
struct EBtnToCmdAssoc g_simsCtrlCommands[73]; // size: 0x248, address: 0x8044FD50
int g_simsCtrlNumCommands; // size: 0x4, address: 0x805D9FF0
class ESimsDataManager _simsdataman; // size: 0xD5C, address: 0x8049A13C
// total size: 0x30
class EDummyFile : public EFile {
    // Members
public:
    unsigned int m_uOffset; // offset 0x2C, size 0x4
};
static class EDummyFile _dummyFile; // size: 0x30, address: 0x8049AEA8
// total size: 0x10
class ObjectSaveTypeTable2 {
    // Members
public:
    class vector datasetList; // offset 0x0, size 0x10
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectSaveTypeTable2 * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
static char * s_houseNames[27]; // size: 0x6C, address: 0x804500E8
unsigned int m_tileCount; // size: 0x4, address: 0x805DBBF4
unsigned int m_wallCount; // size: 0x4, address: 0x805DBBF8
class WallFadeParms * s_wallFadeParms; // size: 0x4, address: 0x805D9FF4
class WallFadeParms s_wallFadeParmsDC; // size: 0x30, address: 0x8049AEE8
class WallFadeParms s_wallFadeParmsClassic; // size: 0x30, address: 0x8049AF28
enum WallTypes (* _wallEndCapFnTab[8])(class CTilePt &, class TileWalls &, enum TileWallsSegment, enum DiagonalSideSelector); // size: 0x20, address: 0x80450198
unsigned char (* _WallSplitTestFnTab[6])(class TileWalls &, class CTilePt &); // size: 0x18, address: 0x804501B8
int m_nInstances; // size: 0x4, address: 0x805DBBFC
// total size: 0x400
class EIFenceWall : public EIWallPart {
    // Static members
    static int m_nInstances; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8049AF58
class ETypeInfo * gpTypeInfo_EIFenceWall; // size: 0x4, address: 0x805DBC00
// total size: 0x10
class EWallSetup {
    // Members
public:
    float xoff; // offset 0x0, size 0x4
    float yoff; // offset 0x4, size 0x4
    float rot; // offset 0x8, size 0x4
    float pad; // offset 0xC, size 0x4
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8049AF80
class ETypeInfo * gpTypeInfo_EIWallPart; // size: 0x4, address: 0x805DBC04
static unsigned int kWallShaderOrder[5]; // size: 0x14, address: 0x80450214
// total size: 0x38
class DepthFade {
    // Members
    class EVec3 m_camPos; // offset 0x0, size 0xC
    class EVec3 m_camDir; // offset 0xC, size 0xC
    float m_depth; // offset 0x18, size 0x4
    float m_radius; // offset 0x1C, size 0x4
    float m_attenuation; // offset 0x20, size 0x4
    unsigned char m_changed; // offset 0x24, size 0x1
    class EVec4 m_fadePlane; // offset 0x28, size 0x10
};
// total size: 0x38
class EFenceWall : public ERoomWall {};
enum TileWallsSegment _segTab[6]; // size: 0x18, address: 0x80450330
// total size: 0x8
struct ProcStandardWallsInfo {
    // Members
    class TNodeList * pSegWallList; // offset 0x0, size 0x4
    enum TileWallsSegment seg; // offset 0x4, size 0x4
};
static class EVec3 _vGhostGreen; // size: 0xC, address: 0x8049AFA8
static struct ELights _ESim_GreenLight; // size: 0xF8, address: 0x8049AFB8
float fBobDur; // size: 0x4, address: 0x805D9FF8
class EVec3 vSkillMeterColor; // size: 0xC, address: 0x8049B0B0
class EVec3 vRepairMeterColor; // size: 0xC, address: 0x8049B0BC
float OuterColorScaler; // size: 0x4, address: 0x805D9FFC
float fBobHeight; // size: 0x4, address: 0x805DBC08
float fRotateZ; // size: 0x4, address: 0x805DBC0C
float fTranslateZ; // size: 0x4, address: 0x805DA000
float bobrange[2]; // size: 0x8, address: 0x805DA008
float fpbobtime; // size: 0x4, address: 0x805DBC10
int pbobS0; // size: 0x4, address: 0x805DBC14
int pbobS1; // size: 0x4, address: 0x805DA010
volatile class ESim * s_changingSim; // size: 0x4, address: 0x805DBC18
static class EVec3 bigPosVal; // size: 0xC, address: 0x8049B0C8
int s_nNumInitializingSims; // size: 0x4, address: 0x805DBC1C
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8049B0D8
class ETypeInfo * gpTypeInfo_ESim; // size: 0x4, address: 0x805DBC20
// total size: 0x1
struct SkillMeterParams {
    // Static members
    static float fpbobtime; // size: 0x4
    static int pbobS1; // size: 0x4
    static int pbobS0; // size: 0x4
    static float bobrange[2]; // size: 0x8
    static float fTranslateZ; // size: 0x4
    static float fRotateZ; // size: 0x4
    static float fBobHeight; // size: 0x4
    static float OuterColorScaler; // size: 0x4
    static class EVec3 vRepairMeterColor; // size: 0xC
    static class EVec3 vSkillMeterColor; // size: 0xC
    static float fBobDur; // size: 0x4
};
unsigned int gValueIndexShaders[10]; // size: 0x28, address: 0x80450400
// total size: 0x24
struct SpriteData {
    // Members
    class EVec2 m_vWH; // offset 0x0, size 0x8
    class EVec3 m_vPos; // offset 0x8, size 0xC
    class EVec4 m_vColor; // offset 0x14, size 0x10
};
// total size: 0xF8
class ESpriteRender {
    // Static members
    static float SKILLMETER_POP_MAXSIZE; // size: 0x4
    static float SKILLMETER_TRANSITION_TIME; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char bMarked; // offset 0x4, size 0x1
    unsigned char bMarkedAsNew; // offset 0x5, size 0x1
    int m_skillMeterState; // offset 0x8, size 0x4
    float m_skillMeterValue; // offset 0xC, size 0x4
    float m_skillMeterTransitionTime; // offset 0x10, size 0x4
    class ERModel * m_pSkillMeter; // offset 0x14, size 0x4
    class cXObject * m_pObj; // offset 0x18, size 0x4
    unsigned int m_shaderId; // offset 0x1C, size 0x4
    class ERShader * m_shader; // offset 0x20, size 0x4
    unsigned int m_shaderBackId; // offset 0x24, size 0x4
    class ERShader * m_shaderBack; // offset 0x28, size 0x4
    unsigned int m_shaderOverlayId; // offset 0x2C, size 0x4
    class ERShader * m_shaderOverlay; // offset 0x30, size 0x4
    class ERShader * m_shaderOnes; // offset 0x34, size 0x4
    int m_shaderOnesId; // offset 0x38, size 0x4
    class ERShader * m_shaderTens; // offset 0x3C, size 0x4
    int m_shaderTensId; // offset 0x40, size 0x4
    struct SpriteData m_foreData; // offset 0x44, size 0x24
    struct SpriteData m_backData; // offset 0x68, size 0x24
    struct SpriteData m_overlayData; // offset 0x8C, size 0x24
    class EOrderTableData m_otd; // offset 0xB0, size 0x3C
    class EVec3 m_sortPos; // offset 0xEC, size 0xC
};
enum TileWallsSegment s_wallConfigIdMap[6]; // size: 0x18, address: 0x80450428
class EWallSetup g_wallConfigs[6]; // size: 0x60, address: 0x8049B148
// total size: 0x28
struct WallResSet {
    // Members
    unsigned int wall[9]; // offset 0x0, size 0x24
    enum EPortalType portalType; // offset 0x24, size 0x4
};
// total size: 0x258
struct WallTable {
    // Members
    struct WallResSet standard; // offset 0x0, size 0x28
    struct WallResSet door[4]; // offset 0x28, size 0xA0
    struct WallResSet window[10]; // offset 0xC8, size 0x190
};
struct WallTable g_wallTable; // size: 0x258, address: 0x80450440
// total size: 0x24
struct DiagWallTable {
    // Members
    unsigned int wall[9]; // offset 0x0, size 0x24
};
struct DiagWallTable g_diagWallTable; // size: 0x24, address: 0x80450698
static const unsigned short * s_NintendoLicenseText; // size: 0x4, address: 0x805DA014
class GameData _gd; // size: 0xBC, address: 0x8049B1B4
class QTimer s_stageTimer; // size: 0x8, address: 0x805DBC28
class QTimer s_frameTimer; // size: 0x8, address: 0x805DBC30
int s_iStage; // size: 0x4, address: 0x805DBC38
int s_iStageCntMax; // size: 0x4, address: 0x805DBC3C
const float * s_pStageDelta; // size: 0x4, address: 0x805DBC40
float s_fScaleFactor; // size: 0x4, address: 0x805DBC44
float s_fWorstIterationTime; // size: 0x4, address: 0x805DBC48
int s_iWorstIterationStageStart; // size: 0x4, address: 0x805DBC4C
int s_iWorstIterationStageEnd; // size: 0x4, address: 0x805DBC50
float s_fStageDelta[64]; // size: 0x100, address: 0x8049B288
float s_fStageDeltaRecip[64]; // size: 0x100, address: 0x8049B388
float s_fStageDeltaActual[64]; // size: 0x100, address: 0x8049B488
float s_fStageTotal; // size: 0x4, address: 0x805DBC54
static unsigned short _sNoCtrlMessageBuff[80]; // size: 0xA0, address: 0x8049B588
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
    class ENeighborhoodCustomChar * * mpBegin; // offset 0x0, size 0x4
    class ENeighborhoodCustomChar * * mpEnd; // offset 0x4, size 0x4
    class ENeighborhoodCustomChar * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
class EInstance s_DaveRemoveTheSuck; // size: 0x78, address: 0x8049B638
// total size: 0x4
class EffectsPreRenderVisitor : public EffectsVisitor {
    // Static members
    static class EInstance s_DaveRemoveTheSuck; // size: 0x78
};
class GameEffectsManager * s_pSingleton; // size: 0x4, address: 0x805DBC58
// total size: 0x1
class GameEffectsManager {
    // Static members
    static class GameEffectsManager * s_pSingleton; // size: 0x4
};
class EGlobal _globals; // size: 0x400, address: 0x8049B6C0
class EVec2 _defULTextureCoord; // size: 0x8, address: 0x805DBC60
class EVec2 _defLRTextureCoord; // size: 0x8, address: 0x805DBC68
int MAX_INTERACTIONS; // size: 0x4, address: 0x805DE9D4
class EVec4 _vBlueBack; // size: 0x10, address: 0x8049BAC0
class EVec4 _BLUEBLACK; // size: 0x10, address: 0x8049BAD0
class EVec4 _WHITE; // size: 0x10, address: 0x8049BAE0
class EVec4 _BLACK; // size: 0x10, address: 0x8049BAF0
class EVec4 _YELLOW; // size: 0x10, address: 0x8049BB00
class EVec4 _BLUE; // size: 0x10, address: 0x8049BB10
class EVec4 _RED; // size: 0x10, address: 0x8049BB20
class EVec4 _GREEN; // size: 0x10, address: 0x8049BB30
class EVec4 _CYAN; // size: 0x10, address: 0x8049BB40
class EVec4 _MAJENTA; // size: 0x10, address: 0x8049BB50
class EVec4 _GREAY; // size: 0x10, address: 0x8049BB60
class EVec4 _LT_GREAY; // size: 0x10, address: 0x8049BB70
class EVec4 _DK_GREAY; // size: 0x10, address: 0x8049BB80
class EVec4 _ORANGE; // size: 0x10, address: 0x8049BB90
class EVec4 _LT_BLUE; // size: 0x10, address: 0x8049BBA0
class EVec4 _PRESSED; // size: 0x10, address: 0x8049BBB0
static const unsigned short * const _pEmptyString; // size: 0x4, address: 0x805DE9D8
static class ELocString _emptyString; // size: 0x4, address: 0x805DBC70
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct WallSet * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct FloorSet * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct FenceSet * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct WorldData * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x4
struct NewUIStrings {
    // Members
    class ELocString string; // offset 0x0, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0xC
struct GenderStrings {
    // Members
    class ELocString maleString; // offset 0x0, size 0x4
    class ELocString femaleString; // offset 0x4, size 0x4
    signed short index; // offset 0x8, size 0x2
};
// total size: 0x0
struct ERQTable {};
// total size: 0x4
struct PDAStrings {
    // Members
    class ELocString string; // offset 0x0, size 0x4
};
// total size: 0x8
struct WantCategory {
    // Members
    int categoryId; // offset 0x0, size 0x4
    class VECTOR items; // offset 0x4, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct WantCategory * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0xC
struct WantItem {
    // Members
    unsigned short id; // offset 0x0, size 0x2
    class ELocString string; // offset 0x4, size 0x4
    unsigned int icon; // offset 0x8, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct WantItem * pData; // offset 0x0, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct RelationshipTable * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x4
struct MemCardStrings {
    // Members
    class ELocString string; // offset 0x0, size 0x4
};
// total size: 0x14
struct SpriteProperties {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float xpos; // offset 0x8, size 0x4
    float ypos; // offset 0xC, size 0x4
    float zpos; // offset 0x10, size 0x4
};
// total size: 0xC
struct SpriteIdToResIdNode {
    // Members
    unsigned int resID; // offset 0x0, size 0x4
    unsigned int shaderID; // offset 0x4, size 0x4
    struct SpriteProperties * m_pProps; // offset 0x8, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct SpriteIdToResIdNode * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct ECntrMdlLkupTable * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct AnimRef * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x1
class HoodManager {
    // Static members
    static class EFamilyConstructData * s_pFamilyConstructData; // size: 0x4
};
// total size: 0x28
class StackString2 : public StringBuffer2 {
    // Members
    unsigned short fChars[16]; // offset 0x8, size 0x20
};
// total size: 0x4
class RelationsCmp {
    // Members
public:
    int m_player; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectSaveTypeTable3 {
    // Members
public:
    class HouseRecon * const m_pOwner; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectSaveIDTable {
    // Members
public:
    class HouseRecon * const m_pOwner; // offset 0x0, size 0x4
};
// total size: 0x1C
struct HRSelector {
    // Members
    int guid; // offset 0x0, size 0x4
    int initTreeVersion; // offset 0x4, size 0x4
    int mainTreeVersion; // offset 0x8, size 0x4
    signed short type; // offset 0xC, size 0x2
    signed short objectType; // offset 0xE, size 0x2
    class BString tempStr; // offset 0x10, size 0x4
    class ObjSelector * pObjSel; // offset 0x14, size 0x4
    unsigned char bDiscard; // offset 0x18, size 0x1
};
// total size: 0x8
struct HRObject {
    // Members
    signed short id; // offset 0x0, size 0x2
    struct HRSelector * pHRSel; // offset 0x4, size 0x4
};
// total size: 0x16008
class HouseRecon {
    // Members
public:
    struct HRObject m_objects[4096]; // offset 0x0, size 0x8000
    int m_iNumObjects; // offset 0x8000, size 0x4
    struct HRSelector m_selectors[2048]; // offset 0x8004, size 0xE000
    int m_iNumSelectors; // offset 0x16004, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectSaveTypeTable3 * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectSaveIDTable * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
class EVec3 _mFloorVecZero; // size: 0xC, address: 0x8049BBC0
class FastAllocPool * g_eIFloorAllocPool; // size: 0x4, address: 0x805DBC74
void * g_pFloorAllocPoolBuffer; // size: 0x4, address: 0x805DBC78
unsigned int m_nAlloced; // size: 0x4, address: 0x805DBC7C
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
class TRedBlackTree m_floors; // size: 0xC, address: 0x8049BBD8
class ERShader * m_sCeilingShader; // size: 0x4, address: 0x805DBC80
class EFloorShdTblNode _eFloorOrderTable[72]; // size: 0x480, address: 0x8049BBF0
unsigned char m_bTableInited; // size: 0x1, address: 0x805DBC84
class TNodeList m_stripsForLighting[40]; // size: 0x1E0, address: 0x8049C080
// total size: 0x10
class EFloorShdTblNode {
    // Static members
    static class TNodeList m_stripsForLighting[40]; // size: 0x1E0
    static unsigned int m_grassShaderId; // size: 0x4
    static int _m_nStrips; // size: 0x4
    static class EFloorShdTblNode _eFloorOrderTable[72]; // size: 0x480
    static unsigned char m_bTableInited; // size: 0x1

    // Members
protected:
    class ERShader * m_pShader; // offset 0x0, size 0x4
    class TNodeList m_stripList; // offset 0x4, size 0xC
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x4
struct /* @class$81164game_unity_cpp */ {
    // Members
    unsigned char m_room; // offset 0x0, size 0x1
    unsigned char m_row; // offset 0x1, size 0x1
    unsigned char m_col0; // offset 0x2, size 0x1
    unsigned char m_col1; // offset 0x3, size 0x1
};
union /* @class$81163game_unity_cpp */ {
    // total size: 0x4
    struct /* @class$81164game_unity_cpp */ {
        // Members
        unsigned char m_room; // offset 0x0, size 0x1
        unsigned char m_row; // offset 0x1, size 0x1
        unsigned char m_col0; // offset 0x2, size 0x1
        unsigned char m_col1; // offset 0x3, size 0x1
    } m_bitf; // offset 0x0, size 0x4
    unsigned int m_mask; // offset 0x0, size 0x4
};
// total size: 0x4
class EFloorStripInfo {
    // Members
protected:
    union /* @class$81163game_unity_cpp */ {
        // total size: 0x4
        struct /* @class$81164game_unity_cpp */ {
            // Members
            unsigned char m_room; // offset 0x0, size 0x1
            unsigned char m_row; // offset 0x1, size 0x1
            unsigned char m_col0; // offset 0x2, size 0x1
            unsigned char m_col1; // offset 0x3, size 0x1
        } m_bitf; // offset 0x0, size 0x4
        unsigned int m_mask; // offset 0x0, size 0x4
    } m_data; // offset 0x0, size 0x4
};
static class EVec3 _lightingBuffer[3969]; // size: 0xBA0C, address: 0x8049C260
// total size: 0x3
struct EFloorVertexSpan {
    // Members
    unsigned char m_row; // offset 0x0, size 0x1
    unsigned char m_start; // offset 0x1, size 0x1
    unsigned char m_end; // offset 0x2, size 0x1
};
unsigned char m_bRebuildFloors; // size: 0x1, address: 0x805DBC85
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7C70
class ETypeInfo * gpTypeInfo_EIFloor; // size: 0x4, address: 0x805DBC88
// total size: 0x10
struct EFloorTileStrip {
    // Members
    class EFloorStripInfo m_strip; // offset 0x0, size 0x4
    int m_numVertices; // offset 0x4, size 0x4
    void * m_vertexData; // offset 0x8, size 0x4
    int m_vertexDataSize; // offset 0xC, size 0x4
};
float _newlightint; // size: 0x4, address: 0x805DA0D4
class EVec3 _hlcolor; // size: 0xC, address: 0x804A7C98
class EVec3 _hlcolor2; // size: 0xC, address: 0x804A7CA4
class ERShader * m_pWhiteShader; // size: 0x4, address: 0x805DBC8C
unsigned char _ISOM_bUpdateWarn; // size: 0x1, address: 0x805DBC90
unsigned char _ISOM_bInitWarn; // size: 0x1, address: 0x805DBC91
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7CB0
class ETypeInfo * gpTypeInfo_ISimsObjectModel; // size: 0x4, address: 0x805DBC94
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7CD8
class ETypeInfo * gpTypeInfo_ISimsWallObjectModel; // size: 0x4, address: 0x805DBC98
// total size: 0x5B8
class ISimsWallObjectModel : public ISimsObjectModel {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28
};
// total size: 0x10
class EIObjTileBoundRect {
    // Members
protected:
    class EVec4 m_vLRBT; // offset 0x0, size 0x10
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7D00
class ETypeInfo * gpTypeInfo_ISimsMultiTileObjectModel; // size: 0x4, address: 0x805DBC9C
// total size: 0x14
struct MtuliTileTweakLookupEntry {
    // Members
    unsigned int wbid; // offset 0x0, size 0x4
    unsigned int indxMap[4]; // offset 0x4, size 0x10
};
// total size: 0x5B8
class ISimsMultiTileObjectModel : public ISimsObjectModel {
    // Static members
    static class EVec2 vOffSets[4]; // size: 0x20
    static struct MtuliTileTweakLookupEntry _MtuliTileTweekLookupArr[]; // size: 0x0
    static class ETypeInfo m_typeInfo; // size: 0x28
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7D28
class ETypeInfo * gpTypeInfo_ISimsCounterTopObject; // size: 0x4, address: 0x805DBCA0
// total size: 0x5B8
class ISimsCounterTopObject : public ISimsObjectModel {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7D50
class ETypeInfo * gpTypeInfo_IShrubObject; // size: 0x4, address: 0x805DBCA4
// total size: 0x5B8
class IShrubObject : public ISimsObjectModel {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0x20
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x10
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0xC
struct model_dat {
    // Members
    int size; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    float cost; // offset 0x8, size 0x4
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
// total size: 0x10
struct pair {
    // Members
    class ERModel * const first; // offset 0x0, size 0x4
    struct model_dat second; // offset 0x4, size 0xC
};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
struct ELights _ERRORLightCur; // size: 0xF8, address: 0x804A7D78
class EVec3 _ERRORLight; // size: 0xC, address: 0x804A7E70
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804A7E80
class ETypeInfo * gpTypeInfo_ISimInstance; // size: 0x4, address: 0x805DBCA8
// total size: 0x10
struct LanguageEntry {
    // Members
    int m_iLanguageIndex; // offset 0x0, size 0x4
    int m_qlangId; // offset 0x4, size 0x4
    unsigned int m_shaderId; // offset 0x8, size 0x4
    class ELocString m_languageLabel; // offset 0xC, size 0x4
};
static struct LanguageEntry s_languageMenu[7]; // size: 0x70, address: 0x80450E18
// total size: 0x4
struct LanguageNames {
    // Members
    class VECTOR languageName; // offset 0x0, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct LanguageNames * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
static unsigned char s_bDrawPressStart; // size: 0x1, address: 0x805DBCAC
static class EVec3 s_camEye; // size: 0xC, address: 0x804A7EA8
static class EVec3 s_camTarget; // size: 0xC, address: 0x804A7EB4
static class EVec3 s_camUp; // size: 0xC, address: 0x804A7EC0
static class EVec3 s_glowColor; // size: 0xC, address: 0x804A7ECC
static class EVec3 s_plumbBobLightColor; // size: 0xC, address: 0x804A7ED8
static class EVec3 s_plumbBobLightDir; // size: 0xC, address: 0x804A7EE4
static class EVec3 s_plumbBobAmbientColor; // size: 0xC, address: 0x804A7EF0
int m_messageNumber; // size: 0x4, address: 0x805DA0E0
// total size: 0x2000
struct EChecksummedConfigBuffer {
    // Members
    unsigned int Checksum; // offset 0x0, size 0x4
    unsigned int Version; // offset 0x4, size 0x4
    char Buffer[8184]; // offset 0x8, size 0x1FF8
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class OptionsRecon * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
static class EVec3 s_interactorColor; // size: 0xC, address: 0x804A7EFC
class PlumbBob * s_pPlumbBob; // size: 0x4, address: 0x805DBCB0
class PlumbBobParms s_plumbBobParms; // size: 0x58, address: 0x804A7F18
// total size: 0x44
class ScrollingTextBox {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    unsigned short * m_pString; // offset 0x4, size 0x4
    class EVec2 m_vTL; // offset 0x8, size 0x8
    class EVec2 m_vBR; // offset 0x10, size 0x8
    class EVec2 m_vScrollVelocity; // offset 0x18, size 0x8
    class EVec2 m_vCurPos; // offset 0x20, size 0x8
    class EVec4 * m_pvTextColor; // offset 0x28, size 0x4
    float m_fTextPointSize; // offset 0x2C, size 0x4
    class EVec2 m_vTextSize; // offset 0x30, size 0x8
    class EVec2 m_vTextSubOffset; // offset 0x38, size 0x8
    class ERShader * m_pLEDShader; // offset 0x40, size 0x4
};
class ERShader * m_pHeadBorder; // size: 0x4, address: 0x805DBCB4
// total size: 0x1
class SimRenderer {};
// total size: 0x1
class SimsMemCardWrap {
    // Static members
    static const char * saveFileName; // size: 0x4
};
static float fFrameTime; // size: 0x4, address: 0x805DBCB8
static float fCurrentTime; // size: 0x4, address: 0x805DBCBC
static float fPrevTime; // size: 0x4, address: 0x805DBCC0
static unsigned int uFrameTime; // size: 0x4, address: 0x805DBCC4
static unsigned int uCurrentTime; // size: 0x4, address: 0x805DBCC8
static unsigned int uPrevTime; // size: 0x4, address: 0x805DBCCC
static float fDelta; // size: 0x4, address: 0x805DBCD0
static class EClock * gpClock; // size: 0x4, address: 0x805DBCD4
class BString2 _sHoursLookup; // size: 0x4, address: 0x805DBCD8
class BString2 _sHours24Lookup; // size: 0x4, address: 0x805DBCDC
class BString2 _sMinLookup; // size: 0x4, address: 0x805DBCE0
class BString2 _sAM_PMLookup; // size: 0x4, address: 0x805DBCE4
class BString2 _sNum; // size: 0x4, address: 0x805DBCE8
class BString2 _sAmount; // size: 0x4, address: 0x805DBCEC
class BString2 _sName; // size: 0x4, address: 0x805DBCF0
class BString2 _sLiquidate; // size: 0x4, address: 0x805DBCF4
class BString2 _sDlrSgn; // size: 0x4, address: 0x805DBCF8
class BString2 _s1000s; // size: 0x4, address: 0x805DBCFC
class BString2 _s100s; // size: 0x4, address: 0x805DBD00
class BString2 _sColon; // size: 0x4, address: 0x805DBD04
class BString2 _sComma; // size: 0x4, address: 0x805DBD08
class BString2 _sLbrack; // size: 0x4, address: 0x805DBD0C
class BString2 _sRbrack; // size: 0x4, address: 0x805DBD10
class BString2 _sButtonSymbol; // size: 0x4, address: 0x805DBD14
class BString2 _sNewLine; // size: 0x4, address: 0x805DBD18
class BString2 _sAButtNGC; // size: 0x4, address: 0x805DBD1C
class BString2 _sBButtNGC; // size: 0x4, address: 0x805DBD20
class BString2 _sXButtNGC; // size: 0x4, address: 0x805DBD24
class BString2 _sYButtNGC; // size: 0x4, address: 0x805DBD28
class BString2 _sLButtNGC; // size: 0x4, address: 0x805DBD2C
class BString2 _sRButtNGC; // size: 0x4, address: 0x805DBD30
class BString2 _sZButtNGC; // size: 0x4, address: 0x805DBD34
class BString2 _sLanalogButtNGC; // size: 0x4, address: 0x805DBD38
class BString2 _sRanalogButtNGC; // size: 0x4, address: 0x805DBD3C
class BString2 _sSelectButtNGC; // size: 0x4, address: 0x805DBD40
class BString2 _sStartButtNGC; // size: 0x4, address: 0x805DBD44
class BString2 _sWallButtonButtNGC; // size: 0x4, address: 0x805DBD48
class BString2 _sCenterCursorButtonButtNGC; // size: 0x4, address: 0x805DBD4C
class BString2 _sDpadButtNGC; // size: 0x4, address: 0x805DBD50
class BString2 _sHungerButtNGC; // size: 0x4, address: 0x805DBD54
class BString2 _sComfortButtNGC; // size: 0x4, address: 0x805DBD58
class BString2 _sHygieneButtNGC; // size: 0x4, address: 0x805DBD5C
class BString2 _sBladderButtNGC; // size: 0x4, address: 0x805DBD60
class BString2 _sEnergyButtNGC; // size: 0x4, address: 0x805DBD64
class BString2 _sFunButtNGC; // size: 0x4, address: 0x805DBD68
class BString2 _sSocialButtNGC; // size: 0x4, address: 0x805DBD6C
class BString2 _sRoomButtNGC; // size: 0x4, address: 0x805DBD70
class BString2 _sGButtNGC; // size: 0x4, address: 0x805DBD74
class BString2 _sDButtNGC; // size: 0x4, address: 0x805DBD78
class BString2 _sIButtNGC; // size: 0x4, address: 0x805DBD7C
class BString2 _ssxButtNGC; // size: 0x4, address: 0x805DBD80
class BString2 _sdxButtNGC; // size: 0x4, address: 0x805DBD84
class BString2 _sDpadUpButtNGC; // size: 0x4, address: 0x805DBD88
class BString2 _sDpadDownButtNGC; // size: 0x4, address: 0x805DBD8C
class BString2 _sDpadLeftButtNGC; // size: 0x4, address: 0x805DBD90
class BString2 _sDpadRightButtNGC; // size: 0x4, address: 0x805DBD94
class BString2 _sThe1TextNGC; // size: 0x4, address: 0x805DBD98
class BString2 _sThe2TextNGC; // size: 0x4, address: 0x805DBD9C
class BString2 _sThe3TextNGC; // size: 0x4, address: 0x805DBDA0
class BString2 _sButton1NGC; // size: 0x4, address: 0x805DBDA4
class BString2 _sButton2NGC; // size: 0x4, address: 0x805DBDA8
class BString2 _sButton3NGC; // size: 0x4, address: 0x805DBDAC
enum eUnlockDisplayType {
    eUnlockDisplayType_None = 0,
    eUnlockDisplayType_object = 1,
    eUnlockDisplayType_person = 2,
    eUnlockDisplayType_LAST = 3,
};
enum eUnlockDisplayStates {
    eUnlockDisplayStates_None = 0,
    eUnlockDisplayStates_Init = 1,
    eUnlockDisplayStates_WaitForStart = 2,
    eUnlockDisplayStates_Active = 3,
    eUnlockDisplayStates_Done = 4,
    eUnlockDisplayStates_LAST = 5,
};
// total size: 0x78
class CUnlockDisplayObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class CUnlockDisplayObject * m_next; // offset 0x4, size 0x4
protected:
    enum eUnlockDisplayType m_objectType; // offset 0x8, size 0x4
    enum eUnlockDisplayStates m_state; // offset 0xC, size 0x4
    unsigned char m_bDrawEnable; // offset 0x10, size 0x1
    class EAnimController * m_pAC; // offset 0x14, size 0x4
    class ERModel * m_pModel; // offset 0x18, size 0x4
    int m_colorIndex; // offset 0x1C, size 0x4
    class EIStaticModel * m_staticModel; // offset 0x20, size 0x4
    class ERAnim * m_pAnimation; // offset 0x24, size 0x4
    class EMat4 * m_pmOrient; // offset 0x28, size 0x4
    float m_radius; // offset 0x2C, size 0x4
    unsigned int m_modelID; // offset 0x30, size 0x4
    unsigned int m_characterID; // offset 0x34, size 0x4
    unsigned int m_animationID; // offset 0x38, size 0x4
    unsigned int m_animationLoops; // offset 0x3C, size 0x4
    class EVec3 m_vPos; // offset 0x40, size 0xC
    class EVec3 m_vRot; // offset 0x4C, size 0xC
    class EVec3 m_vRotAdd; // offset 0x58, size 0xC
    class EVec3 m_centerPoint; // offset 0x64, size 0xC
    unsigned char m_bPlayAndHold; // offset 0x70, size 0x1
    unsigned char m_bTrigger; // offset 0x71, size 0x1
    unsigned char m_bReady; // offset 0x72, size 0x1
    unsigned char m_bDone; // offset 0x73, size 0x1
    unsigned char m_bHasDrawn; // offset 0x74, size 0x1
    unsigned char m_bSimple; // offset 0x75, size 0x1
};
// total size: 0x80
class CUnlockDisplayObjectSim : public CUnlockDisplayObject {
    // Members
    class cXPerson * m_pPerson; // offset 0x78, size 0x4
    class ESim * m_pESim; // offset 0x7C, size 0x4
};
unsigned short __floatstrbuff[32]; // size: 0x40, address: 0x804A81F8
unsigned char _S_bit_count[256]; // size: 0x100, address: 0x80451098
unsigned char _S_first_one[256]; // size: 0x100, address: 0x80451198
float s_minShallowWaterTilt; // size: 0x4, address: 0x805DBDB0
float s_minWaterTilt; // size: 0x4, address: 0x805DA124
float s_minWaterZoom; // size: 0x4, address: 0x805DA128
float s_heightWaterOffset; // size: 0x4, address: 0x805DA12C
struct CameraParameters s_defaultCameraParams[16]; // size: 0x180, address: 0x804A8238
float kHomeLotSimCamMinZoomForHeightOffset; // size: 0x4, address: 0x805DA130
float kZoomBasedHeightOffset; // size: 0x4, address: 0x805DA134
float kHomeLotSimCamMinZoom; // size: 0x4, address: 0x805DA138
float kHomeLotSimCamMaxZoom; // size: 0x4, address: 0x805DA13C
float kPetPlazaLotPetCamMinZoom; // size: 0x4, address: 0x805DA140
float kPetPlazaLotPetCamMaxZoom; // size: 0x4, address: 0x805DA144
float kHomeLotPetCamMinZoom; // size: 0x4, address: 0x805DA148
float kHomeLotPetCamMaxZoom; // size: 0x4, address: 0x805DA14C
float kPetCamNearPlaneAtMinZoom; // size: 0x4, address: 0x805DA150
float kTiltForLandStiffness; // size: 0x4, address: 0x805DA154
float kMinimumInterpStiffness; // size: 0x4, address: 0x805DA158
float kMinimumCameraHeight; // size: 0x4, address: 0x805DA15C
float kMinimumTilt; // size: 0x4, address: 0x805DBDB4
float kMaximumTilt; // size: 0x4, address: 0x805DA160
// total size: 0x1
class WaterCameraTweakTool {
    // Static members
    static float s_heightWaterOffset; // size: 0x4
    static float s_minWaterZoom; // size: 0x4
    static float s_minWaterTilt; // size: 0x4
    static float s_minShallowWaterTilt; // size: 0x4
};
class WaterCameraTweakTool _gWaterCameraTweakTool; // size: 0x1, address: 0x805DBDB8
// total size: 0x1
class TerrainCameraTweakTool {
    // Static members
    static float kTerrainMulfac; // size: 0x4
    static float kMinimumCameraHeight; // size: 0x4
    static float kMinimumInterpStiffness; // size: 0x4
    static float kTiltForLandStiffness; // size: 0x4
    static float kTerrainHeightLevel1; // size: 0x4
    static float kPetCamNearPlaneAtMinZoom; // size: 0x4
    static float kHomeLotPetCamMaxZoom; // size: 0x4
    static float kHomeLotPetCamMinZoom; // size: 0x4
    static float kPetPlazaLotPetCamMaxZoom; // size: 0x4
    static float kPetPlazaLotPetCamMinZoom; // size: 0x4
    static float kHomeLotSimCamMaxZoom; // size: 0x4
    static float kHomeLotSimCamMinZoom; // size: 0x4
    static float kHomeLotSimCamMinZoomForHeightOffset; // size: 0x4
    static float kZoomBasedHeightOffset; // size: 0x4
    static float kPetPlazaLotSimCamMaxZoom; // size: 0x4
    static float kPetPlazaLotSimCamMinZoom; // size: 0x4
    static float kMaximumTilt; // size: 0x4
    static float kMinimumTilt; // size: 0x4
    static struct CameraParameters s_defaultCameraParams[16]; // size: 0x180
};
class TerrainCameraTweakTool _gTerrainCameraTweakTool; // size: 0x1, address: 0x805DBDBC
class EVec3 kDefaultSimPosition; // size: 0xC, address: 0x804A83B8
// total size: 0xCC
class CachedSimRenderer {
    // Static members
    static class EVec3 kDefaultSimPosition; // size: 0xC

    // Members
    class SimModelTSC6 * m_pSimModel; // offset 0x0, size 0x4
    class EAnimController m_AC; // offset 0x4, size 0xAC
    class EVec3 m_vPos; // offset 0xB0, size 0xC
    float m_fRot; // offset 0xBC, size 0x4
    const char * m_szAnim; // offset 0xC0, size 0x4
    unsigned int m_index; // offset 0xC4, size 0x4
    unsigned char m_bUseBoneRendering; // offset 0xC8, size 0x1
};
// total size: 0x18
struct {} __vt__23CUnlockDisplayObjectSim; // size: 0x18, address: 0x80451298
// total size: 0x18
struct {} __vt__20CUnlockDisplayObject; // size: 0x18, address: 0x804512B0
// total size: 0x14
struct {} __vt__33SimpleReconObject<12OptionsRecon>; // size: 0x14, address: 0x804512C8
// total size: 0x20
struct {} __vt__11LanguageSel; // size: 0x20, address: 0x804512E0
// total size: 0x14
struct {} __vt__41SimpleReconObject<20ObjectSaveTypeTable3>; // size: 0x14, address: 0x80451300
// total size: 0x14
struct {} __vt__38SimpleReconObject<17ObjectSaveIDTable>; // size: 0x14, address: 0x80451314
// total size: 0x18
struct {} __vt__23EffectsPreRenderVisitor; // size: 0x18, address: 0x80451368
// total size: 0x18
struct {} __vt__Q27Effects14EffectsVisitor; // size: 0x18, address: 0x80451380
// total size: 0x20
struct {} __vt__8MenuPane; // size: 0x20, address: 0x80451398
// total size: 0x10
struct {} __vt__11FlashPiMenu; // size: 0x10, address: 0x80451408
// total size: 0xC
struct {} __vt__13ESpriteRender; // size: 0xC, address: 0x80451418
// total size: 0xE0
struct {} __vt__7EIFloor; // size: 0xE0, address: 0x80451428
// total size: 0x14
struct {} __vt__41SimpleReconObject<20ObjectSaveTypeTable2>; // size: 0x14, address: 0x80451508
// total size: 0x34
struct {} __vt__10EDummyFile; // size: 0x34, address: 0x8045151C
// total size: 0x15C
struct {} __vt__12IShrubObject; // size: 0x15C, address: 0x80451550
// total size: 0x15C
struct {} __vt__21ISimsCounterTopObject; // size: 0x15C, address: 0x804516AC
// total size: 0x15C
struct {} __vt__25ISimsMultiTileObjectModel; // size: 0x15C, address: 0x80451808
// total size: 0x15C
struct {} __vt__20ISimsWallObjectModel; // size: 0x15C, address: 0x80451964
// total size: 0x15C
struct {} __vt__16ISimsObjectModel; // size: 0x15C, address: 0x80451AC0
// total size: 0x14
struct {} __vt__11ESims3DHead; // size: 0x14, address: 0x80451C1C
// total size: 0xC
struct {} __vt__13PlumbBobParms; // size: 0xC, address: 0x80451C30
// total size: 0x20
struct {} __vt__9ECheatDMI; // size: 0x20, address: 0x80451C40
// total size: 0xC
struct {} __vt__11IAptXmlImpl; // size: 0xC, address: 0x80451C60
// total size: 0xC
struct {} __vt__14CLoadingScreen; // size: 0xC, address: 0x80451C6C
// total size: 0xC
struct {} __vt__7AptLine; // size: 0xC, address: 0x80451C84
// total size: 0x18
struct {} __vt__13AptShaderWord; // size: 0x18, address: 0x80451C90
// total size: 0x18
struct {} __vt__7AptWord; // size: 0x18, address: 0x80451CA8
// total size: 0xC
struct {} __vt__9AptFormat; // size: 0xC, address: 0x80451CC0
// total size: 0xC
struct {} __vt__16ScrollingTextBox; // size: 0xC, address: 0x80451CCC
// total size: 0xC
struct {} __vt__14CUnlockDisplay; // size: 0xC, address: 0x80451CD8
// total size: 0x15C
struct {} __vt__4ESim; // size: 0x15C, address: 0x80451CE4
// total size: 0xF0
struct {} __vt__10ESimShadow; // size: 0xF0, address: 0x80451E40
// total size: 0x158
struct {} __vt__12ISimInstance; // size: 0x158, address: 0x80451F30
// total size: 0x1C
struct {} __vt__16IBaseSimInstance; // size: 0x1C, address: 0x80452088
// total size: 0x10
struct {} __vt__8ESimsCam; // size: 0x10, address: 0x804520A8
// total size: 0xC
struct {} __vt__15NewControlParms; // size: 0xC, address: 0x804520B8
// total size: 0xC
struct {} __vt__20SimsCameraParameters; // size: 0xC, address: 0x804520C4
// total size: 0x14
struct {} __vt__15EMemoryMeterWin; // size: 0x14, address: 0x804520D0
// total size: 0x34
struct {} __vt__16ESimsDataManager; // size: 0x34, address: 0x80452108
// total size: 0x74
struct {} __vt__8ESimsApp; // size: 0x74, address: 0x8045213C
// total size: 0x1C
struct {} __vt__10EFenceWall; // size: 0x1C, address: 0x804521B0
// total size: 0x1C
struct {} __vt__9ERoomWall; // size: 0x1C, address: 0x804521CC
// total size: 0xF4
struct {} __vt__11EIFenceWall; // size: 0xF4, address: 0x804521E8
// total size: 0xF4
struct {} __vt__10EIWallPart; // size: 0xF4, address: 0x804522DC
// total size: 0xC
struct {} __vt__13WallFadeParms; // size: 0xC, address: 0x804523D0
// total size: 0x10
struct {} __vt__17EPictureInPicture; // size: 0x10, address: 0x804523E0
// total size: 0x14
struct {} __vt__13Panelstateman; // size: 0x14, address: 0x804523F0
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class CachedSimData * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ENeighborhoodCustomChar * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct use_first {};
// total size: 0x1
class TArrayERAnimAllocator {};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
enum AptAuxUnitType {
    AptAuxUnitType_None = 0,
    AptAuxUnitType_TriSolid = 1,
    AptAuxUnitType_TriLinear = 2,
    AptAuxUnitType_TriRadial = 3,
    AptAuxUnitType_TriTiled = 4,
    AptAuxUnitType_TriClipped = 5,
    AptAuxUnitType_LineSolid = 6,
};
// total size: 0x8
struct AptAuxPrimList {
    // Members
    int nPrims; // offset 0x0, size 0x4
    float * pData; // offset 0x4, size 0x4
};
// total size: 0x4
struct AptAuxUnitTriSolid {
    // Members
    unsigned int nColour; // offset 0x0, size 0x4
};
// total size: 0x5C
struct AptAuxUnitTriTiled {
    // Members
    unsigned int nColour; // offset 0x0, size 0x4
    float afMatrix[16]; // offset 0x4, size 0x40
    unsigned int nBitmapCharID; // offset 0x44, size 0x4
    int nTextureID; // offset 0x48, size 0x4
    float afUVs[4]; // offset 0x4C, size 0x10
};
// total size: 0x4
struct AptAuxUnitLineSolid {
    // Members
    unsigned int nColour; // offset 0x0, size 0x4
};
union /* @class$41886game_unity_cpp */ {
    struct AptAuxUnitTriSolid triSolid; // offset 0x0, size 0x4
    struct AptAuxUnitTriTiled triTiled; // offset 0x0, size 0x5C
    struct AptAuxUnitTriTiled triClipped; // offset 0x0, size 0x5C
    struct AptAuxUnitLineSolid lineSolid; // offset 0x0, size 0x4
};
// total size: 0x68
struct AptAuxUnit {
    // Members
    enum AptAuxUnitType eType; // offset 0x0, size 0x4
    struct AptAuxPrimList prims; // offset 0x4, size 0x8
    union { // inferred
        union /* @class$41886game_unity_cpp */ {
            struct AptAuxUnitTriSolid triSolid; // offset 0x0, size 0x4
            struct AptAuxUnitTriTiled triTiled; // offset 0x0, size 0x5C
            struct AptAuxUnitTriTiled triClipped; // offset 0x0, size 0x5C
            struct AptAuxUnitLineSolid lineSolid; // offset 0x0, size 0x4
        } __anon$41887; // offset 0xC, size 0x5C
        struct AptAuxUnitTriSolid triSolid; // offset 0xC, size 0x4
        struct AptAuxUnitTriTiled triTiled; // offset 0xC, size 0x5C
        struct AptAuxUnitTriTiled triClipped; // offset 0xC, size 0x5C
        struct AptAuxUnitLineSolid lineSolid; // offset 0xC, size 0x4
    };
};
// total size: 0xC
struct AptAuxShape {
    // Members
    int nID; // offset 0x0, size 0x4
    int nUnits; // offset 0x4, size 0x4
    struct AptAuxUnit * * apUnits; // offset 0x8, size 0x4
};
// total size: 0x8
struct AptAuxTexRemap {
    // Members
    int nOrigID; // offset 0x0, size 0x4
    int nNewID; // offset 0x4, size 0x4
};
// total size: 0x2C
struct AptAuxGeoInfo {
    // Members
    char szMagic[24]; // offset 0x0, size 0x18
    int nShapeIDs; // offset 0x18, size 0x4
    struct AptAuxShape * aShapes; // offset 0x1C, size 0x4
    int nRemappedTextures; // offset 0x20, size 0x4
    struct AptAuxTexRemap * remappedTextures; // offset 0x24, size 0x4
    void * textureAssets; // offset 0x28, size 0x4
};
// total size: 0x8
class FlashBigFile {
    // Members
    unsigned char * m_header; // offset 0x0, size 0x4
    unsigned char * * m_files; // offset 0x4, size 0x4
};
// total size: 0x20
struct AptAuxLayerInfo {
    // Members
    int bInUse; // offset 0x0, size 0x4
    class FlashBigFile * pBigData; // offset 0x4, size 0x4
    struct AptAuxGeoInfo * pGEOData; // offset 0x8, size 0x4
    class vector aIDToChar; // offset 0xC, size 0x10
    void * pMainData; // offset 0x1C, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    class EDebugMenuItem * m_pHead; // offset 0x0, size 0x4
    class EDebugMenuItem * m_pTail; // offset 0x4, size 0x4
};
// total size: 0xC
class CheatMenuParams {
    // Static members
    static class CheatMenuParams s_cheatMenuParams; // size: 0xC

    // Members
    class TLinkedList m_cheatList; // offset 0x0, size 0x8
    unsigned int m_cheatCount; // offset 0x8, size 0x4
};
// total size: 0x10
struct _DOGMA_MemPool {
    // Members
protected:
    struct _DOGMA_MemPool * mpNextPool; // offset 0x0, size 0x4
    unsigned long mnPoolSize; // offset 0x4, size 0x4
    unsigned long mnPoolFree; // offset 0x8, size 0x4
    unsigned char mPoolStart; // offset 0xC, size 0x1
};
// total size: 0xC
struct _OutsideAllocationT {
    // Members
    struct _OutsideAllocationT * pNext; // offset 0x0, size 0x4
    struct _OutsideAllocationT * pPrev; // offset 0x4, size 0x4
private:
    unsigned char returnedMemory[1]; // offset 0x8, size 0x1
};
// total size: 0x20
class DOGMA_PoolManager {
    // Members
protected:
    unsigned int * * mpaFirstFreeBySize; // offset 0x0, size 0x4
    struct _DOGMA_MemPool * mpFirstPool; // offset 0x4, size 0x4
    unsigned long mnOverflowPoolSize; // offset 0x8, size 0x4
    unsigned long mnMaxSizeAllocation; // offset 0xC, size 0x4
    unsigned int mnOffsetToStoreNext : 8; // offset 0x10, size 0x4
    unsigned int mnOffsetToStoreSize : 8; // offset 0x10, size 0x4
    unsigned int mnOffsetToStorePrev : 8; // offset 0x10, size 0x4
    unsigned int mnMinimumAllocationSize : 4; // offset 0x10, size 0x4
    unsigned int mbStoreFreeBlockSize : 1; // offset 0x10, size 0x4
    unsigned int mbDoublyLinkFreeList : 1; // offset 0x10, size 0x4
    unsigned int mbTrackOutsideAllocations : 1; // offset 0x10, size 0x4
    struct _OutsideAllocationT * mpFirstOutSideAllocation; // offset 0x14, size 0x4
public:
    unsigned int mnItemsAllocated; // offset 0x18, size 0x4
    unsigned int mnItemsFreed; // offset 0x1C, size 0x4
};
// total size: 0x18
struct AptMatrix {
    // Members
    float a; // offset 0x0, size 0x4
    float b; // offset 0x4, size 0x4
    float c; // offset 0x8, size 0x4
    float d; // offset 0xC, size 0x4
    float tx; // offset 0x10, size 0x4
    float ty; // offset 0x14, size 0x4
};
// total size: 0x20
struct AptSysClock {
    // Members
    int Second; // offset 0x0, size 0x4
    int Minute; // offset 0x4, size 0x4
    int Hour; // offset 0x8, size 0x4
    int Day; // offset 0xC, size 0x4
    int Date; // offset 0x10, size 0x4
    int Month; // offset 0x14, size 0x4
    int Year; // offset 0x18, size 0x4
    int Hundredths; // offset 0x1C, size 0x4
};
enum AptGetBytesEnum {
    AptGetBytesEnum_MovieClip = 0,
    AptGetBytesEnum_Sound = 1,
    AptGetBytesEnum_XML = 2,
    AptGetBytesEnum_LoadVars = 3,
};
// total size: 0xAC
struct AptUserFunctions {
    // Members
    void * (* pfnMemAlloc)(unsigned long); // offset 0x0, size 0x4
    void (* pfnMemFree)(void *); // offset 0x4, size 0x4
    void (* pfnMemFreeSize)(void *, unsigned long); // offset 0x8, size 0x4
    void (* pfnAssertFail)(char *, char *, unsigned int); // offset 0xC, size 0x4
    void (* pfnSetBackgroundColour)(unsigned int); // offset 0x10, size 0x4
    void (* pfnDebugPrint)(char *); // offset 0x14, size 0x4
    void (* pfnDebugAddSavedInput)(struct AptSavedInputRecord *, int); // offset 0x18, size 0x4
    void (* pfnDebugSetScreenGrabPending)(char *); // offset 0x1C, size 0x4
    void (* pfnLoadAnimation)(char *, class AptSharedPtr); // offset 0x20, size 0x4
    void (* pfnFreeAnimation)(void *); // offset 0x24, size 0x4
    void (* pfnFreeConstantTable)(void *); // offset 0x28, size 0x4
    void (* pfnLoadAnimationCompleted)(char *, char *); // offset 0x2C, size 0x4
    void (* pfnCommand)(char *, char *); // offset 0x30, size 0x4
    class AptValue * (* pfnLoadVariables)(char *); // offset 0x34, size 0x4
    class AptValue * (* pfnLoadVariablesNULL)(); // offset 0x38, size 0x4
    void (* pfnSetExternVariable)(char *, char *); // offset 0x3C, size 0x4
    class AptValue * (* pfnGetExternVariable)(char *); // offset 0x40, size 0x4
    void (* pfnSendVariables)(char *, char *, char *, char *, int); // offset 0x44, size 0x4
    void * (* pfnAllocateString)(struct AptAllocateStringParameters *); // offset 0x48, size 0x4
    void (* pfnDeallocateString)(void *, unsigned int); // offset 0x4C, size 0x4
    void (* pfnDrawString)(void *, enum AptMaskRenderOperation); // offset 0x50, size 0x4
    void * (* pfnLoadSound)(void *, int, char *); // offset 0x54, size 0x4
    void (* pfnFreeSound)(void *); // offset 0x58, size 0x4
    void (* pfnStartSound)(void *, char *); // offset 0x5C, size 0x4
    void (* pfnStartSoundStream)(void *, int); // offset 0x60, size 0x4
    void * (* pfnLoadTexture)(void *, int); // offset 0x64, size 0x4
    void (* pfnFreeTexture)(void *); // offset 0x68, size 0x4
    void (* pfnBindTexture)(void *, int, void *); // offset 0x6C, size 0x4
    void * (* pfnLoadRenderingUnit)(void *, int); // offset 0x70, size 0x4
    void (* pfnFreeRenderingUnit)(void *); // offset 0x74, size 0x4
    void (* pfnSetVertexMatrix)(struct AptMatrix *); // offset 0x78, size 0x4
    void (* pfnSetColourTransform)(struct AptCXForm *); // offset 0x7C, size 0x4
    void (* pfnDrawRenderingUnit)(void *, enum AptMaskRenderOperation); // offset 0x80, size 0x4
    void (* pfnCustomControlRender)(char *, char *, void *, char *); // offset 0x84, size 0x4
    unsigned char (* pfnCustomControlUpdate)(void *); // offset 0x88, size 0x4
    int (* pfnPointHitTest)(float, float, void *); // offset 0x8C, size 0x4
    void (* pfnGetRealTimeClock)(struct AptSysClock *, unsigned char); // offset 0x90, size 0x4
    int (* pfnGetBytesTotal)(char *, enum AptGetBytesEnum); // offset 0x94, size 0x4
    int (* pfnGetBytesLoaded)(char *, enum AptGetBytesEnum); // offset 0x98, size 0x4
    void (* pfnUninitializedVarAccess)(char *); // offset 0x9C, size 0x4
    float (* pfnGetStageHeight)(); // offset 0xA0, size 0x4
    float (* pfnGetStageWidth)(); // offset 0xA4, size 0x4
    void (* pfnCustomSavedInputHandler)(void *, unsigned int); // offset 0xA8, size 0x4
};
// total size: 0xC
class EWiiMemoryCard : public EMemoryCard {
    // Members
protected:
    int m_nandOperationCount; // offset 0x4, size 0x4
    int m_language; // offset 0x8, size 0x4
};
// total size: 0xD44
class EffectsSequencerManager : public EResourceManager {};
// total size: 0xD44
class ESoundTrackDataManager : public EResourceManager {};

