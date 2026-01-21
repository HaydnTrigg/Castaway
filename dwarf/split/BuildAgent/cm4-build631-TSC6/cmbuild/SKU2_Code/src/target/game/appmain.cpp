/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\appmain.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F83F8 -> 0x801FA434
*/
// Range: 0x801F83F8 -> 0x801F8430
void ESimsApp::SetStartLot(int lot /* r31 */) {
    // References
    // -> int s_startLot;
}

// Range: 0x801F8430 -> 0x801F8508
void ESimsApp::SetNghName(const char * name /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> char m_nameOfNgh[16];
}

// Range: 0x801F8508 -> 0x801F86E8
// this: r24
void ESimsApp::parseCommandLine() {
    // Local variables
    int argc; // r30
    const char * * argv; // r29
    int i; // r28
    const char * pArg; // r22
    char * nextSpace; // r27
    char * nextNextSpace; // r26
    int eatArgCnt; // r25
    const char * pSwitch; // r3
    const char * pSwitchArg; // r22
    int lot; // r0

    // References
    // -> int s_startLot;
    // -> char rebootName[256];
}

// Range: 0x801F86E8 -> 0x801F8734
// this: r31
ESimsApp::ESimsApp() {
    // References
    // -> struct [anonymous] __vt__8ESimsApp;
}

// Range: 0x801F8734 -> 0x801F878C
// this: r30
ESimsApp::~ESimsApp() {}

// Range: 0x801F878C -> 0x801F8864
// this: r31
void ESimsApp::Shutdown() {
    // References
    // -> class ELevelManager _levelman;
    // -> unsigned int _localizationShadersCount;
    // -> class EShaderManager _shaderman;
    // -> unsigned int * _localizationShaders;
    // -> class EQuickdataManager _quickdataman;
    // -> class Globs * globs;
    // -> class EGlobal _globals;
}

// Range: 0x801F8864 -> 0x801F8870
char * ESimsApp::GetBuildVersion() {}

// Range: 0x801F8870 -> 0x801F8874
int ESimsApp::GetDefaultLanguage() {
    // Local variables
    int language; // r0
}

// Range: 0x801F8874 -> 0x801F8CB4
// this: r28
void ESimsApp::Init() {
    // Local variables
    class QTimer timer; // r1+0x10
    int nAddRefIndex; // r0
    float fResManAddRefTimes[4]; // r1+0x58
    const struct ERQTable * pLocalizationShaderTable; // r1+0x8
    unsigned int i; // r6

    // References
    // -> unsigned int * _localizationShaders;
    // -> unsigned int _localizationShadersCount;
    // -> class GameData _gd;
    // -> unsigned char m_bInitialized;
    // -> class NghResFile * pNghResFile;
    // -> int g_simsCtrlNumCommands;
    // -> class EControllerManager * _pCtrlMan;
    // -> struct EBtnToCmdAssoc g_simsCtrlCommands[73];
    // -> class BString2 s_empty;
    // -> class EGlobal _globals;
    // -> class PlayerCheats g_playerCheats;
    // -> class ESoundEventManager g_soundeventman;
    // -> class ESoundTrackDataManager g_soundtrackdataman;
    // -> class ESocialAnimationSetManager g_socialanimationsetman;
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
    // -> class EModelManager _modelman;
    // -> class EDatasetManager _datasetman;
    // -> class ELevelManager _levelman;
    // -> class EShaderManager _shaderman;
    // -> class EQuickdataManager _quickdataman;
    // -> class PetsHomeButton _wiiHomeButton;
}

// Range: 0x801F8CB4 -> 0x801F8CCC
void PlayerCheats::StartClock() {
    // References
    // -> class EClockMan * _pClockMan;
}

// Range: 0x801F8CCC -> 0x801F8DA4
void ESimsApp::InitManagerArcOffsets1() {
    // Local variables
    class EFile * pFile; // r0

    // References
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
}

// Range: 0x801F8DA4 -> 0x801F910C
void ESimsApp::InitManagerArcOffsets2() {
    // Local variables
    class EFile * pFile; // r0

    // References
    // -> class EFlashManager _flashman;
    // -> class EffectsSequencerManager g_effectsSequencerMan;
    // -> class EffectsEmitterManager g_effectsEmitterMan;
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
    // -> class EEdithTreeSetMan _edithtreesetman;
    // -> class EBinaryManager _binaryman;
    // -> class ECharacterManager _characterman;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class ESoundEventManager g_soundeventman;
    // -> class EAnimManager _animman;
    // -> class EDatasetManager _datasetman;
    // -> class EQuickdataManager _quickdataman;
    // -> class EAmbientScoreManager g_ambientscoreman;
    // -> class ELevelManager _levelman;
}

// Range: 0x801F910C -> 0x801F9414
void ESimsApp::ShowInitialDisplay() {
    // Local variables
    unsigned int shaderIdScreenA; // r4
    int osLanguage; // r0
    class ERShader * pBg; // r26
    class EWindow win; // r1+0x38
    class ERC * prc; // r25
    int numOfFullScenePasses; // r0
    int i; // r24

    // References
    // -> class EEngine * _pEngine;
    // -> class EShaderManager _shaderman;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801F9414 -> 0x801F959C
void ESimsApp::initContinue() {
    // Local variables
    class StateMachineManager * pManager; // r31
    class StateMachine * pMachine; // r30
    class StateMachine * pTRCStateMachine; // r0
    const unsigned short * pLine1; // r30
    const unsigned short * pLine2; // r0

    // References
    // -> class EWiiMemoryCard _wiiMemCard;
    // -> class EGlobal _globals;
}

// Range: 0x801F959C -> 0x801F95A0
void ESimsApp::SetGameState() {}

// Range: 0x801F95A0 -> 0x801F95A4
void ESimsApp::LoadSimulatorGlobs() {}

// Range: 0x801F95A4 -> 0x801F95B4
void ProfileHook() {
    // References
    // -> int aProfile;
}

// Range: 0x801F95B4 -> 0x801F9620
void ESimsApp::UpdateCheats() {
    // Local variables
    class EController * pCtrl; // r31

    // References
    // -> class PlayerCheats g_playerCheats;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801F9620 -> 0x801F967C
void ESimsApp::UpdateApt() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F967C -> 0x801F96BC
void ESimsApp::UpdateGame() {
    // References
    // -> class GameData _gd;
    // -> float _dt;
    // -> unsigned char g_backgroundSaveInProgress;
}

// Range: 0x801F96BC -> 0x801F987C
void ESimsApp::UpdateShaders() {
    // Local variables
    float animDt; // f31
    float xsfDt; // f30
    int hour; // r31
    int minute; // r30
    int weather; // r29
    class cSimulator * pSimulator; // r28
    class WeatherManager * pWeatherManager; // r27

    // References
    // -> signed short EpochMinute;
    // -> signed short EpochHour;
    // -> class EGlobal _globals;
    // -> float _dt;
}

// Range: 0x801F987C -> 0x801F98C8
void ESimsApp::UpdateAudio() {}

// Range: 0x801F98C8 -> 0x801F9A04
static void DrawGame(class ERC * prc /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801F9A04 -> 0x801F9D6C
// this: r31
void ESimsApp::UpdateDraw() {
    // Local variables
    class ERC * prc; // r27
    class ERLevel * pLevel; // r29
    unsigned char prevVal; // r30
    int numOfFullScenePasses; // r0
    int i; // r26
    int y; // r26
    int x; // r27
    class ERC * prc; // r28
    class EWindow win; // r1+0x1B0
    char fn[256]; // r1+0xB0
    class ERC * prc; // r26
    class EWindow win; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class PetsHomeButton _wiiHomeButton;
    // -> float _dt;
    // -> static float hbmTime;
    // -> static unsigned char bEnabledHBM;
    // -> class GameData _gd;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EEngine * _pEngine;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801F9D6C -> 0x801F9E00
void ESimsApp::UpdateReset() {
    // References
    // -> class EEngine * _pEngine;
    // -> float _dt;
    // -> float gRebootTimer;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801F9E00 -> 0x801F9EB0
// this: r30
void ESimsApp::Update() {
    // Local variables
    int mappedController; // r0

    // References
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801F9EB0 -> 0x801F9F80
// this: r28
void ESimsApp::PostFrameUpdate() {
    // Local variables
    unsigned char wasHomeButtonPressed; // r30
    unsigned char bPrev; // r29

    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGraphics * _pGfx;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801F9F80 -> 0x801F9F84
void ESimsApp::SetupForMovie() {}

// Range: 0x801F9F84 -> 0x801F9F88
void ESimsApp::CleanupAfterMovie() {}

// Range: 0x801F9F88 -> 0x801F9F8C
class EAHeap * ESimsApp::GetMovieHeap() {}

// Range: 0x801F9F8C -> 0x801FA1D4
// this: r28
unsigned char PlayerCheats::Capture() {
    // Local variables
    unsigned char bCheatFound; // r30
    unsigned short uNewBtn; // r26
    float fCurrentMS; // f1
    unsigned char bTooMuchTimeSinceLastButton; // r0
    unsigned short btnMask; // r0
    int iPlayerCheat; // r29
    int memStart; // r1+0xC
    int memCur; // r1+0x8
    unsigned char bSuccess; // r26
    int numCheatBtn; // r25

    // References
    // -> class EClockMan * _pClockMan;
    // -> class EGlobal _globals;
}

// Range: 0x801FA1D4 -> 0x801FA1F8
int PlayerCheats::GetNextIndex() {}

// Range: 0x801FA1F8 -> 0x801FA2B4
unsigned char PlayerCheats::IsSingleButton() {
    // Local variables
    unsigned char bOneBitSet; // r3
    int power; // r6
}

// Range: 0x801FA2B4 -> 0x801FA2DC
void PlayerCheats::PurgeBtnMemory() {}

// Range: 0x801FA2DC -> 0x801FA30C
unsigned short PlayerCheats::CreateBtnMask() {
    // Local variables
    unsigned short mask; // r5
}

// Range: 0x801FA30C -> 0x801FA34C
// this: r31
PlayerCheats::~PlayerCheats() {}

// Range: 0x801FA34C -> 0x801FA374
PlayerCheats::PlayerCheats() {}


