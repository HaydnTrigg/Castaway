/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\aptviewer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80203D74 -> 0x8020582C
*/
// Range: 0x80203D74 -> 0x80203DA8
class AptViewer * CreateAptViewer() {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80203DA8 -> 0x80203DAC
static void _freeFontTable() {}

// Range: 0x80203DAC -> 0x80203DD8
static void closeFunc() {}

// Range: 0x80203DD8 -> 0x80203E3C
static void updateFunc() {
    // Local variables
    int ticks; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80203E3C -> 0x80203EDC
static void StartItAll() {
    // Local variables
    struct AptInitParmsT aptInitParams; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80203F28 -> 0x80204020
// this: r29
AptViewer::AptViewer() {
    // References
    // -> unsigned long gAptOptFlags;
    // -> class EClockMan * _pClockMan;
}

// Range: 0x80204020 -> 0x802040A8
// this: r30
AptViewer::~AptViewer() {}

// Range: 0x802040A8 -> 0x802040F8
void AptViewer::CallFunction() {}

// Range: 0x802040F8 -> 0x802041F4
// this: r25
void AptViewer::NewCallFunction(const char * szName /* r26 */, char * szReturnValue /* r27 */, const char * szThisObject /* r28 */, int nNumParams /* r29 */) {
    // Local variables
    char * pParams[5]; // r1+0x74
    struct __va_list_struct vaArgPtr[1]; // r1+0x68
    int i; // r30
}

// Range: 0x802041F4 -> 0x80204330
void AptViewer::NewCallFunction2(int nNumParams /* r11 */, const char * const * pParams /* r10 */) {}

// Range: 0x80204330 -> 0x8020438C
// this: r30
void AptViewer::Init(class UIObjectBase * messageHandler /* r31 */) {}

// Range: 0x8020438C -> 0x80204420
// this: r31
void AptViewer::UpdateAll() {
    // References
    // -> static class QTimer s_qtimerInside;
    // -> float repeatSeconds;
    // -> static class QTimer s_qtimerOutside;
}

// Range: 0x80204420 -> 0x80204840
// this: r26
void AptViewer::Draw(class ERC * rc /* r27 */) {
    // Local variables
    int nAnimWidth; // r1+0x1C
    int nAnimHeight; // r1+0x18
    int left; // r31
    int top; // r30
    int right; // r29
    int bottom; // r28
    int screenWidth; // r0
    int screen_height; // r0
    float scale_factor; // f0
    unsigned char using_hdtv; // r0
    float ScaledHeight; // f31
    float ScaledWidth; // f7
    int delta; // r5

    // References
    // -> int iUseStencil;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80204840 -> 0x802048D8
// this: r29
void AptViewer::Load(const char * szName /* r30 */, unsigned char bBlock /* r31 */) {}

// Range: 0x802048D8 -> 0x80204948
// this: r31
void AptViewer::UnLoad() {}

// Range: 0x80204948 -> 0x80204970
void AptViewer::RepeatClear() {
    // References
    // -> int repeatRate[4];
    // -> int repeatCount[4];
}

// Range: 0x80204970 -> 0x80204A3C
unsigned char AptViewer::RepeatCheck(int d /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    int ticks; // r30

    // References
    // -> int repeatRate[4];
    // -> int repeatCount[4];
    // -> float repeatSeconds;
    // -> static float timeAcc;
}

// Range: 0x80204A3C -> 0x80204AE4
// this: r29
unsigned int AptViewer::NewReadController() {
    // Local variables
    int NumControllers; // r0
    int i; // r30

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80204AE4 -> 0x8020540C
// this: r26
unsigned int AptViewer::OnePlayerReadController(int playerNum /* r17 */, int controllerNum /* r27 */) {
    // Local variables
    class EController * pCtrl; // r31
    enum AptInputController ic; // r30
    unsigned int filterId; // r29
    unsigned char bEnableNavigationEvents; // r19
    unsigned char bEnableCircleDownEvents; // r28
    int disableAnalogNavigation; // r0
    unsigned char bU; // r19
    unsigned char bD; // r20
    unsigned char bL; // r21
    unsigned char bR; // r22
    unsigned char cU; // r23
    unsigned char cD; // r25
    unsigned char cL; // r18
    unsigned char cR; // r17

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020540C -> 0x802054C4
// this: r28
unsigned int AptViewer::PushAptButtonFilter(const char * targetName /* r29 */) {
    // Local variables
    unsigned int filterId; // r31
    int top; // r30
    class EController * pCtrl; // r3
}

// Range: 0x802054C4 -> 0x8020566C
// this: r31
void AptViewer::PopAptButtonFilter(unsigned int in_filterId /* r27 */) {
    // Local variables
    class EController * pCtrl; // r3
    int top; // r28
    int ftop; // r6
}

// Range: 0x8020566C -> 0x802056CC
void AptViewer::AddCmdToAptButtonFilter(unsigned int filterId /* r30 */, enum ECTRL_CMD eButtonCommandIndex /* r31 */) {
    // Local variables
    class EController * pCtrl; // r0
}

// Range: 0x802056CC -> 0x8020572C
void AptViewer::RemoveCmdFromAptButtonFilter(unsigned int filterId /* r30 */, enum ECTRL_CMD eButtonCommandIndex /* r31 */) {
    // Local variables
    class EController * pCtrl; // r0
}

// Range: 0x8020572C -> 0x80205754
unsigned int AptViewer::GetCurrentAptButtonFilter() {}

// Range: 0x80205754 -> 0x80205794
int AptViewer::GetPlayersControllerNumber() {
    // Local variables
    int id; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80205794 -> 0x8020580C
class EController * AptViewer::GetPlayersController() {
    // Local variables
    class EController * pCtrl; // r31
    int id; // r4

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020580C -> 0x80205814
class UIObjectBase * AptViewer::NewSetMessageHandler() {}

// Range: 0x80205814 -> 0x8020581C
unsigned char AptViewer::NewRemoveMessageHandler() {}

// Range: 0x8020581C -> 0x8020582C
// this: r5
unsigned char AptViewer::AllowControllerReading() {
    // Local variables
    unsigned char bRet; // r0
}


