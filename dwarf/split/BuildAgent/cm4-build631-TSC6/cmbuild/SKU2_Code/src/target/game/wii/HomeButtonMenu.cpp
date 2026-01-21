/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\Wii\HomeButtonMenu.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246654 -> 0x80246ED4
*/
// Range: 0x80246654 -> 0x80246660
PetsHomeButton::PetsHomeButton() {}

// Range: 0x80246660 -> 0x802466C0
// this: r30
PetsHomeButton::~PetsHomeButton() {}

// Range: 0x802466C0 -> 0x80246754
// this: r31
unsigned char PetsHomeButton::Init() {
    // Local variables
    struct TRCWiiInit initParams; // r1+0x8
}

// Range: 0x80246754 -> 0x802467A0
void PetsHomeButton::PostRenderRestoreStates() {}

// Range: 0x802467A0 -> 0x802468C0
void PauseAllSounds() {
    // References
    // -> unsigned int gAudioEnabled;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x802468C0 -> 0x80246984
// this: r30
void PetsHomeButton::UpdateDraw(unsigned char bHomeButtonPressed /* r31 */) {
    // Local variables
    unsigned char bBanIconActive; // r0

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80246984 -> 0x80246B80
// this: r27
void PetsHomeButton::PostFrameUpdate(unsigned char bHomeButtonPressed /* r28 */) {
    // Local variables
    enum _VITimeToDIM oldDimTime; // r29
    int numOfFullScenePasses; // r0
    int i; // r28

    // References
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80246B80 -> 0x80246BCC
static void * HBAllocFuncAlign(int size /* r30 */, int align /* r31 */) {}

// Range: 0x80246BCC -> 0x80246C04
static void * HBAllocFunc(int size /* r31 */) {}

// Range: 0x80246C04 -> 0x80246C3C
static unsigned char HBFreeFunc(void * ptr /* r31 */) {}

// Range: 0x80246C3C -> 0x80246DE0
void DrawBanIconToFB(unsigned char * pData /* r24 */, int dx /* r25 */, int dy /* r26 */, int w /* r27 */, int h /* r28 */, float alpha /* f29 */) {
    // Local variables
    struct texel888 * pTexelData; // r0
    int y; // r30
    int x; // r29
    struct texel888 & src; // r9
    unsigned char dst[3]; // r1+0x8

    // References
    // -> static unsigned char backgroundColor[3];
}

// Range: 0x80246DE0 -> 0x80246E8C
unsigned char HomeButton_DiskEjectUpdate() {
    // Local variables
    class TRCHomeButton * pHomeButton; // r31

    // References
    // -> class PetsHomeButton _wiiHomeButton;
}

// Range: 0x80246E8C -> 0x80246ED4
static void __sinit_\game_wii_unity_cpp() {
    // References
    // -> struct TRCWiiInit msInitParams;
    // -> class PetsHomeButton _wiiHomeButton;
}


