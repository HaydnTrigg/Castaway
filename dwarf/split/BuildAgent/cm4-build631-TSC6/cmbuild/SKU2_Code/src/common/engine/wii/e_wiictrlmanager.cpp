/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\wii\e_wiictrlmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AEAE4 -> 0x802AFBF0
*/
// Range: 0x802AEAE4 -> 0x802AEB24
static void * WPADalloc32(unsigned long size /* r31 */) {}

// Range: 0x802AEB24 -> 0x802AEB5C
static unsigned char WPADfree32(void * addr /* r31 */) {}

// Range: 0x802AEB5C -> 0x802AEB7C
static void WPADGetInfoCallback() {
    // References
    // -> static unsigned char _wpadInfoCallbackPending;
    // -> static unsigned char _wpadInfoFlag[4];
}

// Range: 0x802AEB7C -> 0x802AEBD4
// this: r30
EWiiControllerManager::~EWiiControllerManager() {}

// Range: 0x802AEBD4 -> 0x802AEC00
struct _WiiPadInfo * EWiiControllerManager::GetWPADInfo() {
    // Local variables
    class EWiiController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x802AEC00 -> 0x802AED28
// this: r23
unsigned char EWiiControllerManager::Init() {
    // Local variables
    int i; // r24

    // References
    // -> class EClockMan * _pClockMan;
    // -> class EClock _sysclock;
    // -> class EWiiController * * _wiiCtrlPads;
    // -> struct [anonymous] __vt__14EWiiController;
    // -> class QTimer _ctrlLastActivetime[4];
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802AED28 -> 0x802AED2C
void EWiiControllerManager::Shutdown() {}

// Range: 0x802AED2C -> 0x802AEF68
// this: r25
void EWiiControllerManager::Update() {
    // Local variables
    int i; // r26

    // References
    // -> class EWiiController * * _wiiCtrlPads;
}

// Range: 0x802AEF68 -> 0x802AEF84
float EWiiController::GetNunchukTiltPosition() {}

// Range: 0x802AEF84 -> 0x802AEFB4
void EWiiController::GetControllerCursorPosition() {}

// Range: 0x802AEFB4 -> 0x802AEFEC
float EWiiController::GetStick() {
    // Local variables
    float value; // f1
}

// Range: 0x802AEFEC -> 0x802AF214
unsigned int EWiiController::GetButtons() {
    // Local variables
    unsigned int buttons; // r7
    float left_stick_x; // f1
    float left_stick_y; // f2
    float fr; // f3
    float fl; // f1
    float fu; // f4
    float fd; // f2
}

// Range: 0x802AF214 -> 0x802AF388
// this: r31
void EWiiController::UpdateWPADInfo() {
    // References
    // -> static struct WPADInfo _wpadInfo[4];
    // -> static unsigned char _wpadInfoFlag[4];
    // -> static unsigned char _wpadInfoCallbackPending;
    // -> static int _wpadInfoPollTime;
    // -> static int _wpadInfoUpdate[4];
}

// Range: 0x802AF388 -> 0x802AF3F8
unsigned char EWiiControllerManager::WasHomeButtonPressed() {
    // Local variables
    int first; // r7
    int last; // r5
    unsigned char bFound; // r8
    int i; // r0
}

// Range: 0x802AF3F8 -> 0x802AF46C
// this: r29
void EWiiControllerManager::ToggleDPD(unsigned char on /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x802AF46C -> 0x802AF474
unsigned char EWiiController::HasVibration() {}

// Range: 0x802AF474 -> 0x802AF57C
// this: r31
unsigned char EWiiController::VibrateMotorOne() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802AF57C -> 0x802AF684
// this: r31
unsigned char EWiiController::VibrateMotorTwo() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802AF684 -> 0x802AF78C
// this: r31
unsigned char EWiiController::StopMotorOne() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802AF78C -> 0x802AF894
// this: r31
unsigned char EWiiController::StopMotorTwo() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802AF894 -> 0x802AF89C
unsigned char EWiiController::IsMotorOneActive() {}

// Range: 0x802AF89C -> 0x802AF8A4
unsigned char EWiiController::IsMotorTwoActive() {}

// Range: 0x802AF8A4 -> 0x802AFBF0
static void __sinit_\engine_ngc_unity_cpp() {
    // References
    // -> class EScheduler * _pSched;
    // -> struct [anonymous] __vt__13ENgcScheduler;
    // -> class ENgcScheduler _ngcSched;
    // -> void (ENgcRenderer::* m_jumpTable[77])(void *, void *, struct EDLEntry *);
    // -> void (ENgcRenderer::* __ptmf_null)(void *, void *, struct EDLEntry *);
    // -> class EMutex _ngcCreateGXMutex;
    // -> static struct _GXColor _gxWaitColor;
    // -> class EMutex s_copyMutex;
    // -> struct _GXColor _gxWhite;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EKeyboard * _pKeyboard;
    // -> struct [anonymous] __vt__12ENgcKeyboard;
    // -> class ENgcKeyboard _ngcKeyboard;
    // -> class EGraphics * _pGfx;
    // -> struct [anonymous] __vt__12ENgcGraphics;
    // -> static int sEventAlarmTicks;
    // -> class ENgcGraphics _ngcGfx;
    // -> class EEngine * _pEngine;
    // -> struct [anonymous] __vt__10ENgcEngine;
    // -> class ENgcEngine _ngcEngine;
    // -> struct [anonymous] __vt__21ENgcControllerManager;
    // -> class ENgcControllerManager _ngcctrlman;
    // -> class ENgcClockMan _ngcClockMan;
    // -> struct [anonymous] __vt__12ENgcClockMan;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> struct [anonymous] __vt__22ENgcAudioSampleManager;
    // -> struct [anonymous] __vt__19EAudioSampleManager;
    // -> class ENgcAudioSampleManager _ngcAudioSampleMan;
    // -> void (* m_fpAudioFrameCB)();
    // -> class EAudio * _pActualAudio;
    // -> class ENgcAudio _ngcAudio;
    // -> struct [anonymous] __vt__9ENgcAudio;
    // -> class EMemoryCard * _pMemoryCard;
    // -> struct [anonymous] __vt__14EWiiMemoryCard;
    // -> class EWiiMemoryCard _wiiMemCard;
    // -> class EControllerManager * _pCtrlMan;
    // -> struct [anonymous] __vt__21EWiiControllerManager;
    // -> class EWiiControllerManager _wiiCtrlman;
}


