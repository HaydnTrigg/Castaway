/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\thesims.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801772A8 -> 0x8017A140
*/
// Range: 0x801772A8 -> 0x80177300
// this: r31
TheSimsNGCLicenseState::TheSimsNGCLicenseState() {
    // References
    // -> struct [anonymous] __vt__22TheSimsNGCLicenseState;
}

// Range: 0x80177300 -> 0x801773F0
// this: r27
void TheSimsNGCLicenseState::Startup() {
    // References
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x801773F0 -> 0x80177434
// this: r31
void TheSimsNGCLicenseState::Shutdown() {}

// Range: 0x80177434 -> 0x8017750C
// this: r31
void TheSimsNGCLicenseState::Update() {}

// Range: 0x8017750C -> 0x80177700
// this: r26
void TheSimsNGCLicenseState::Draw(class ERC * prc /* r27 */) {
    // References
    // -> class EVec4 _BLACK;
    // -> class EGlobal _globals;
}

// Range: 0x80177700 -> 0x80177768
// this: r30
TheSimsNGCHealthWarningState::TheSimsNGCHealthWarningState() {
    // References
    // -> struct [anonymous] __vt__28TheSimsNGCHealthWarningState;
}

// Range: 0x80177768 -> 0x80177A30
// this: r31
void TheSimsNGCHealthWarningState::Startup() {
    // Local variables
    int osLanguage; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80177A30 -> 0x80177A90
// this: r31
void TheSimsNGCHealthWarningState::Shutdown() {}

// Range: 0x80177A90 -> 0x80177AE0
// this: r31
void TheSimsNGCHealthWarningState::Reset() {}

// Range: 0x80177AE0 -> 0x80177C64
// this: r31
void TheSimsNGCHealthWarningState::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned int wristStrapScreenAnimStep; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80177C64 -> 0x80177D4C
// this: r26
void TheSimsNGCHealthWarningState::Draw(class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80177D4C -> 0x80177DA4
// this: r31
TheSimsWiiNunchuckRequiredState::TheSimsWiiNunchuckRequiredState() {
    // References
    // -> struct [anonymous] __vt__31TheSimsWiiNunchuckRequiredState;
}

// Range: 0x80177DA4 -> 0x80177FB8
// this: r31
void TheSimsWiiNunchuckRequiredState::Startup() {
    // Local variables
    unsigned int shaderId; // r4
    int menuSelectedLanguage; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EQuickdataManager _quickdataman;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80177FB8 -> 0x80178018
// this: r31
void TheSimsWiiNunchuckRequiredState::Shutdown() {}

// Range: 0x80178018 -> 0x80178068
// this: r31
void TheSimsWiiNunchuckRequiredState::Reset() {}

// Range: 0x80178068 -> 0x80178230
// this: r27
void TheSimsWiiNunchuckRequiredState::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    class TRCStateMachine * pTRCStateMachine; // r29
    class StateMachine * pSM; // r30
    unsigned char bScreenTimeout; // r28

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80178230 -> 0x80178318
// this: r26
void TheSimsWiiNunchuckRequiredState::Draw(class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178318 -> 0x80178364
// this: r31
TheSimsEAMovieState::TheSimsEAMovieState() {
    // References
    // -> struct [anonymous] __vt__19TheSimsEAMovieState;
}

// Range: 0x80178364 -> 0x80178450
// this: r30
void TheSimsEAMovieState::Startup() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80178450 -> 0x801784A4
// this: r31
void TheSimsEAMovieState::Update() {
    // References
    // -> class GameData _gd;
}

// Range: 0x801784A4 -> 0x801784A8
void TheSimsEAMovieState::Draw() {}

// Range: 0x801784A8 -> 0x80178550
// this: r30
void TheSimsEAMovieState::Shutdown() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178550 -> 0x80178594
// this: r31
TheSimsMemCardCheckState::TheSimsMemCardCheckState() {
    // References
    // -> struct [anonymous] __vt__24TheSimsMemCardCheckState;
}

// Range: 0x80178594 -> 0x80178610
// this: r30
void TheSimsMemCardCheckState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178610 -> 0x80178614
void TheSimsMemCardCheckState::Shutdown() {}

// Range: 0x80178614 -> 0x80178618
void TheSimsMemCardCheckState::Update() {}

// Range: 0x80178618 -> 0x801786E8
void TheSimsMemCardCheckState::Draw(class ERC * prc /* r28 */) {
    // References
    // -> class EVec4 _BLACK;
    // -> class EGlobal _globals;
}

// Range: 0x801786E8 -> 0x80178740
// this: r31
TheSimsMaxisLogoState::TheSimsMaxisLogoState() {
    // References
    // -> struct [anonymous] __vt__21TheSimsMaxisLogoState;
}

// Range: 0x80178740 -> 0x80178830
// this: r31
void TheSimsMaxisLogoState::Startup() {
    // References
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80178830 -> 0x80178890
// this: r31
void TheSimsMaxisLogoState::Shutdown() {}

// Range: 0x80178890 -> 0x80178960
// this: r31
void TheSimsMaxisLogoState::Reset() {
    // Local variables
    class EVec2 v; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178960 -> 0x80178A54
// this: r31
void TheSimsMaxisLogoState::Update(float fDeltaSeconds /* f31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178A54 -> 0x80178B3C
// this: r26
void TheSimsMaxisLogoState::Draw(class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178B3C -> 0x80178B88
// this: r31
TheSimsSimsIntroMovieState::TheSimsSimsIntroMovieState() {
    // References
    // -> struct [anonymous] __vt__26TheSimsSimsIntroMovieState;
}

// Range: 0x80178B88 -> 0x80178BE4
// this: r31
void TheSimsSimsIntroMovieState::Startup() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80178BE4 -> 0x80178C58
// this: r30
void TheSimsSimsIntroMovieState::Shutdown() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178C58 -> 0x80178D48
// this: r30
void TheSimsSimsIntroMovieState::Update() {
    // References
    // -> class ESimsApp _app;
    // -> class EAudio * _pActualAudio;
    // -> class EControllerManager * _pCtrlMan;
    // -> static int frames;
}

// Range: 0x80178D48 -> 0x80178DC4
// this: r31
void TheSimsEnterMainMenuState::Reset() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178DC4 -> 0x80178DC8
void TheSimsEnterMainMenuState::Shutdown() {}

// Range: 0x80178DC8 -> 0x80178DF8
static void BGExec_SetDefaults() {
    // References
    // -> class BG _bg;
    // -> class EGlobal _globals;
}

// Range: 0x80178DF8 -> 0x80178E38
static void BGCall_SetDefaults() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80178E38 -> 0x80178E88
// this: r31
TheSimsEnterMainMenuState::TheSimsEnterMainMenuState() {
    // References
    // -> struct [anonymous] __vt__25TheSimsEnterMainMenuState;
}

// Range: 0x80178E88 -> 0x80178F58
// this: r30
void TheSimsEnterMainMenuState::Startup() {
    // References
    // -> class EDatasetManager _datasetman;
    // -> class EGlobal _globals;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x80178F58 -> 0x80179358
// this: r29
void TheSimsEnterMainMenuState::Update() {
    // Local variables
    unsigned char bDone; // r31
    class QTimer lqtimer; // r1+0x10
    int iOldStage; // r30

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
    // -> class cFixedWorld * pFixedWorld;
    // -> class EDatasetManager _datasetman;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class GameData _gd;
}

// Range: 0x80179358 -> 0x8017935C
void TheSimsEnterMainMenuState::Draw() {}

// Range: 0x8017935C -> 0x80179360
void TheSimsEnterMainMenuState::DrawTopmost() {}

// Range: 0x80179360 -> 0x801793A8
// this: r31
void TheSimsMainMenuState::Startup() {
    // References
    // -> class EGlobal _globals;
    // -> class HDDThread g_hddThread;
}

// Range: 0x801793A8 -> 0x80179414
void TheSimsMainMenuState::Shutdown() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80179414 -> 0x80179544
// this: r31
void TheSimsMainMenuState::Reset() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EControllerManager * _pCtrlMan;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80179544 -> 0x80179984
// this: r30
void TheSimsMainMenuState::Update() {
    // Local variables
    int iRetVal; // r0
    int nFamilyNum; // r31

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80179984 -> 0x80179A08
void TheSimsMainMenuState::LeavingMainMenuCleanup() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80179A08 -> 0x80179A0C
void TheSimsMainMenuState::Draw() {}

// Range: 0x80179A0C -> 0x80179A7C
// this: r31
void TheSimsChooseLanguageState::Startup() {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80179A7C -> 0x80179AE0
// this: r31
void TheSimsChooseLanguageState::Shutdown() {}

// Range: 0x80179AE0 -> 0x80179B1C
// this: r31
void TheSimsChooseLanguageState::Reset() {}

// Range: 0x80179B1C -> 0x80179B8C
// this: r31
void TheSimsChooseLanguageState::Update() {}

// Range: 0x80179B8C -> 0x80179BE4
// this: r30
void TheSimsChooseLanguageState::Draw(class ERC * prc /* r31 */) {}

// Range: 0x80179BE4 -> 0x80179F44
// this: r31
void TheSimsStateMachine::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80179F44 -> 0x80179F9C
void TheSimsStateMachine::Shutdown() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80179F9C -> 0x80179FF0
// this: r31
void TheSimsStateMachine::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned char pre; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80179FF0 -> 0x8017A078
// this: r29
void TheSimsStateMachine::Draw(class ERC * prc /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x8017A078 -> 0x8017A0D8
// this: r31
DummyMode::DummyMode() {
    // References
    // -> struct [anonymous] __vt__9DummyMode;
}

// Range: 0x8017A0D8 -> 0x8017A130
// this: r30
DummyMode::~DummyMode() {}

// Range: 0x8017A130 -> 0x8017A134
void DummyMode::Init() {}

// Range: 0x8017A134 -> 0x8017A138
void DummyMode::Reset() {}

// Range: 0x8017A138 -> 0x8017A13C
void DummyMode::Update() {}

// Range: 0x8017A13C -> 0x8017A140
void DummyMode::Draw() {}


