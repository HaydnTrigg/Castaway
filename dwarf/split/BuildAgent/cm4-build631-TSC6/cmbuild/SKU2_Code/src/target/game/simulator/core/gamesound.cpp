/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\gamesound.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010EC58 -> 0x8010FAC4
*/
// Range: 0x8010EC58 -> 0x8010ECB0
void DiscErrorCallback() {
    // References
    // -> static enum eMode iSavedGameSoundMode;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010ECB0 -> 0x8010ED2C
// this: r31
cSoundPlayer::cSoundPlayer() {}

// Range: 0x8010ED84 -> 0x8010EE18
// this: r30
cSoundPlayer::~cSoundPlayer() {
    // References
    // -> class cIGZSndSys * g_pSndSys;
}

// Range: 0x8010EE18 -> 0x8010EEE8
// this: r31
void cSoundPlayer::Initialize() {
    // References
    // -> class ENgcAudio _ngcAudio;
    // -> class cBoxX * g_pBoxX;
    // -> class cIGZSndSys * g_pSndSys;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x8010EEE8 -> 0x8010EF5C
void cSoundPlayer::Shutdown() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010EF5C -> 0x8010F06C
// this: r29
void cSoundPlayer::KillSourceEvent(int sourceID /* r30 */) {
    // Local variables
    struct ListIterator it; // r1+0x1C
    struct ListIterator next; // r1+0x18

    // References
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x8010F06C -> 0x8010F164
// this: r30
void cSoundPlayer::KillAllEvent() {
    // Local variables
    struct ListIterator it; // r1+0x1C
    struct ListIterator next; // r1+0x18

    // References
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x8010F164 -> 0x8010F348
// this: r26
void cSoundPlayer::Update() {
    // Local variables
    struct ListIterator it; // r1+0x18
    struct ListIterator next; // r1+0x14
    int eventID; // r0
    class ERSoundEvent * pEvent; // r29
    float time_call; // f29
    int sourceID; // r28
    unsigned char isFootstep; // r27
    float delay; // f28

    // References
    // -> class cBoxX * g_pBoxX;
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x8010F348 -> 0x8010F3B0
void cSoundPlayer::SetGameMode() {
    // References
    // -> class EApp * _pApp;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F3B0 -> 0x8010F3CC
enum eMode cSoundPlayer::GetGameMode() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F3CC -> 0x8010F408
void cSoundPlayer::EnableSound() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F408 -> 0x8010F480
// this: r31
void cSoundPlayer::QuietAll() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F480 -> 0x8010F534
// this: r27
void cSoundPlayer::PlayBySource(unsigned int eventID /* r28 */, signed short sourceID /* r29 */, int preLoadMod /* r30 */, unsigned char isFootStep /* r31 */) {
    // Local variables
    struct SoundEventInfo new_event; // r1+0x8

    // References
    // -> class EClock _sysclock;
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x8010F534 -> 0x8010F5D0
// this: r28
void cSoundPlayer::PlayBySource(signed short sourceID /* r29 */, int preLoadMod /* r30 */, unsigned char isFootStep /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x8010F5D0 -> 0x8010F64C
// this: r30
void cSoundPlayer::PerhapsPlayFootstep(signed short sourceID /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x8010F64C -> 0x8010F688
void cSoundPlayer::QuietBySourceID() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F688 -> 0x8010F6F8
// this: r31
void cSoundPlayer::PauseMusic() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F6F8 -> 0x8010F768
// this: r31
void cSoundPlayer::ResumeMusic() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F768 -> 0x8010F800
// this: r31
void cSoundPlayer::PauseSounds() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F800 -> 0x8010F898
// this: r31
void cSoundPlayer::ResumeSounds() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F898 -> 0x8010F8D4
void cSoundPlayer::NotifyViewChange() {
    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8010F8D4 -> 0x8010F8EC
int cSoundPlayer::GetSFXVolume() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8010F8EC -> 0x8010F904
int cSoundPlayer::GetMusicVolume() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8010F904 -> 0x8010F994
void cSoundPlayer::SetOldFXVolume(int lVolume /* r31 */) {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EGlobal _globals;
}

// Range: 0x8010F994 -> 0x8010F9E0
void cSoundPlayer::SetMusicVolume() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EGlobal _globals;
}

// Range: 0x8010F9E0 -> 0x8010FA2C
void cSoundPlayer::SetSFXVolume() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EGlobal _globals;
}

// Range: 0x8010FA2C -> 0x8010FA78
void cSoundPlayer::SetVOXVolume() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EGlobal _globals;
}

// Range: 0x8010FA78 -> 0x8010FAC4
void cSoundPlayer::SetAmbientVolume() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EGlobal _globals;
}


