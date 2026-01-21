/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\savegametarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DC238 -> 0x801DE828
*/
// Range: 0x801DC238 -> 0x801DC294
void SaveGameTarget::RestoreMusic() {
    // References
    // -> unsigned int gAudioEnabled;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x801DC294 -> 0x801DC330
void SaveGameTarget::PauseMusic() {
    // References
    // -> unsigned int gAudioEnabled;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x801DC330 -> 0x801DC53C
// this: r26
SaveGameTarget::SaveGameTarget(class M2MTarget * parent /* r27 */, const class MemoryDevicePort_t & port_ /* r28 */, int saveGameFlags_ /* r31 */) {
    // References
    // -> struct [anonymous] __vt__14SaveGameTarget;
}

// Range: 0x801DC53C -> 0x801DC5FC
// this: r30
SaveGameTarget::~SaveGameTarget() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> struct [anonymous] __vt__14SaveGameTarget;
}

// Range: 0x801DC5FC -> 0x801DC900
// this: r31
void SaveGameTarget::SelectionCallback() {}

// Range: 0x801DC900 -> 0x801DC9F4
// this: r30
void SaveGameTarget::ZeroInputCallback() {
    // Local variables
    unsigned char bCardInSlot; // r1+0x8
}

// Range: 0x801DC9F4 -> 0x801DCDB8
// this: r31
void SaveGameTarget::Update() {
    // Local variables
    unsigned char bCardInSlot; // r1+0x9
    enum EMC_OpStatus ops; // r0
    enum EMC_OpStatus ops; // r0
    unsigned char bIsFormatted; // r1+0x8

    // References
    // -> class EEngine * _pEngine;
    // -> unsigned char g_backgroundSaveInProgress;
    // -> class EGlobal _globals;
}

// Range: 0x801DCDB8 -> 0x801DCDC0
void SaveGameTarget::Hide() {}

// Range: 0x801DCDC0 -> 0x801DCDC8
int SaveGameTarget::GetResult() {}

// Range: 0x801DCDC8 -> 0x801DD164
// this: r30
unsigned char SaveGameTarget::PerformMemoryCardChecks() {
    // Local variables
    enum EMC_OpStatus ops; // r0
    unsigned char bWrongDevice; // r1+0xD
    unsigned char bCardDamaged; // r1+0xC
    unsigned char bCardCorrupt; // r1+0xB
    unsigned char bCardFormatted; // r1+0xA
    unsigned char bHasSavedGame; // r1+0x9
    unsigned char bHasSpace; // r1+0x8
    unsigned int status; // r1+0x10
}

// Range: 0x801DD164 -> 0x801DD274
// this: r31
void SaveGameTarget::SpawnCheckingDialog() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DD274 -> 0x801DD37C
// this: r31
void SaveGameTarget::SpawnCardCorruptDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD37C -> 0x801DD478
// this: r30
void SaveGameTarget::SpawnWrongDeviceDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD478 -> 0x801DD5E4
// this: r30
void SaveGameTarget::SpawnCardDamagedDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD5E4 -> 0x801DD6DC
// this: r30
void SaveGameTarget::SpawnFormatDecideDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD6DC -> 0x801DD7C8
// this: r30
void SaveGameTarget::SpawnFormatConfirmDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD7C8 -> 0x801DD884
// this: r31
void SaveGameTarget::SpawnFormattingDialog() {
    // References
    // -> class EEngine * _pEngine;
    // -> class EGlobal _globals;
}

// Range: 0x801DD884 -> 0x801DD970
// this: r30
void SaveGameTarget::SpawnFormatCancelDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DD970 -> 0x801DDA60
// this: r30
void SaveGameTarget::SpawnFormatFailDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DDA60 -> 0x801DDB28
// this: r31
void SaveGameTarget::SpawnFormatSuccessDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DDB28 -> 0x801DDD18
// this: r29
void SaveGameTarget::SpawnNoSpaceDialog(enum NoSpaceType type /* r31 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DDD18 -> 0x801DDE58
// this: r30
void SaveGameTarget::SpawnOverwriteDialog() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DDE58 -> 0x801DDF88
// this: r30
void SaveGameTarget::SpawnSaveConfirmDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DDF88 -> 0x801DE094
// this: r31
void SaveGameTarget::SpawnSavingDialog() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DE094 -> 0x801DE168
// this: r30
void SaveGameTarget::SpawnSaveSucceededDialog() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DE168 -> 0x801DE28C
// this: r30
void SaveGameTarget::SpawnSaveFailedDialog() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801DE28C -> 0x801DE38C
// this: r30
void SaveGameTarget::SpawnMemCardRemovedDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DE38C -> 0x801DE788
// this: r31
unsigned char SaveGameTarget::PerformSaveGame() {
    // Local variables
    class EController * pCtrl; // r0
    class EVec3 old_background_color; // r1+0x1C
    int old_background_alpha; // r1+0xC
    class EVec3 old_background_color; // r1+0x10
    int old_background_alpha; // r1+0x8
    class EController * pCtrl; // r0
    float secsRemaining; // f31
    class ESleep sleeper; // r1+0x28

    // References
    // -> class EEngine * _pEngine;
    // -> unsigned char g_backgroundSaveInProgress;
    // -> class EGraphics * _pGfx;
    // -> class AptViewer * _gpAptViewer;
    // -> class EResourceLoader * _pResLoader;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801DE788 -> 0x801DE7D8
// this: r31
void SaveGameTarget::BGCall_SaveGame() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x801DE7D8 -> 0x801DE828
void SaveGameTarget::BGExec_SaveGame(void * pSGT_ /* r31 */) {
    // Local variables
    class SaveGameTarget * pSGT; // r0

    // References
    // -> class BG _bg;
}


