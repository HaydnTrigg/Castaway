/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\gzsndsys.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80114048 -> 0x80115D58
*/
// Range: 0x80114048 -> 0x8011407C
class cIGZSndSys * cIGZSndSys::CreateInstance() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x8011407C -> 0x801140BC
// this: r31
cIGZSndSys::~cIGZSndSys() {}

// Range: 0x801140BC -> 0x8011411C
// this: r31
cGZSndSys::cGZSndSys() {
    // References
    // -> class cGZSnd * g_soundThatIsLoading;
    // -> struct [anonymous] __vt__9cGZSndSys;
}

// Range: 0x8011412C -> 0x801141D8
// this: r30
cGZSndSys::~cGZSndSys() {
    // References
    // -> class EResourceLoader * _pResLoader;
    // -> static class cGZSndSys * _gzSndSys;
    // -> struct [anonymous] __vt__9cGZSndSys;
}

// Range: 0x801141D8 -> 0x801141FC
unsigned char cGZSndSys::Initialize() {}

// Range: 0x801141FC -> 0x8011425C
class cIGZSnd * cGZSndSys::CreateSoundEffect(unsigned int sampleID /* r30 */, float timeToPlayAt /* f31 */, unsigned char isFootStep /* r31 */) {}

// Range: 0x8011425C -> 0x801142C4
class cIGZSnd * cGZSndSys::CreateAudioStream(unsigned int audioStreamID /* r30 */, unsigned char loop /* r31 */, float timeToPlayAt /* f31 */) {}

// Range: 0x801142C4 -> 0x801142D4
void cGZSndSys::addToList() {}

// Range: 0x801142D4 -> 0x80114310
void cGZSndSys::removeFromList() {
    // Local variables
    class cGZSnd * pNode; // r5
    class cGZSnd * pPrev; // r6
}

// Range: 0x80114310 -> 0x80114320
void cGZSndSys::addToList() {}

// Range: 0x80114320 -> 0x80114370
void cGZSndSys::removeFromList() {
    // Local variables
    class cGZMusic * pNode; // r5
    class cGZMusic * pPrev; // r6
}

// Range: 0x80114370 -> 0x80114384
void cGZSndSys::FreeUnusedSounds() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80114384 -> 0x8011446C
void cGZSndSys::killDeadSounds() {
    // Local variables
    class cGZSnd * pNode; // r1+0xC
    class vector deadList; // r1+0x10
    class cGZSnd * * last; // r0
    class cGZSnd * * i; // r30
    class cGZSnd * pItem; // r3
}

// Range: 0x8011446C -> 0x801146EC
// this: r24
void cGZSndSys::StartLoadingNextSound() {
    // Local variables
    class cGZSnd * pCandidate; // r30
    int curPriority; // r29
    class cGZSnd * pCullCandidate; // r28
    int curCullPirority; // r27
    int queuedUnachedCount; // r26
    float curTime; // f0
    class cGZSnd * pNode; // r25
    class cGZSnd * pNext; // r24
    class ERSampledata * pSample; // r0
    int lengthInMS; // r0
    int priority; // r0
    float tooLateDif; // f0
    float tooLate; // f1

    // References
    // -> class cGZSnd * g_soundThatIsLoading;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EClock _sysclock;
}

// Range: 0x801146EC -> 0x80114CD0
// this: r30
void cGZSndSys::Update() {
    // Local variables
    class ERSampledata * pSample; // r0
    float curTime; // f0
    class cGZSnd * pNode; // r1+0x1C
    class vector deadList; // r1+0x20
    signed char old_speed; // r29
    unsigned char update_all; // r31
    class ERSampledata * pSample; // r0
    int incVol; // r6
    struct EVoiceDesc desc; // r1+0x44
    float lVol; // r1+0x18
    float rVol; // r1+0x14
    struct EVoiceDesc desc; // r1+0x30
    float lVol; // r1+0x10
    float rVol; // r1+0xC
    class cGZSnd * * last; // r0
    class cGZSnd * * i; // r31
    class cGZSnd * pItem; // r3
    float volume; // f1
    class cGZMusic * pNode; // r28
    float volume; // f1
    float nodeVolume; // f0
    class cGZMusic * pNode; // r3

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EClock _sysclock;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class cGZSnd * g_soundThatIsLoading;
}

// Range: 0x80114CD0 -> 0x80114CD4
void cGZSndSys::preloadMusic() {}

// Range: 0x80114CD4 -> 0x80114CD8
void cGZSndSys::unloadMusic() {}

// Range: 0x80114CD8 -> 0x80114D58
// this: r31
cGZSnd::cGZSnd() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
    // -> struct [anonymous] __vt__6cGZSnd;
}

// Range: 0x80114D68 -> 0x80114DE8
// this: r30
cGZSnd::~cGZSnd() {
    // References
    // -> class cGZSnd * g_soundThatIsLoading;
    // -> static class cGZSndSys * _gzSndSys;
    // -> struct [anonymous] __vt__6cGZSnd;
}

// Range: 0x80114DE8 -> 0x80114DF0
unsigned char cGZSnd::Init() {}

// Range: 0x80114DF0 -> 0x80114EB4
// this: r31
unsigned int cGZSnd::Release() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80114EB4 -> 0x80114EC8
unsigned int cGZSnd::AddRef() {}

// Range: 0x80114EC8 -> 0x80115024
// this: r30
unsigned char cGZSnd::Play() {
    // Local variables
    class ERSampledata * pSample; // r0
    struct EVoiceDesc desc; // r1+0x10
    float lVol; // r1+0xC
    float rVol; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EClock _sysclock;
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x80115024 -> 0x801150B4
// this: r31
unsigned char cGZSnd::IsPlaying() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class cGZSnd * g_soundThatIsLoading;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x801150B4 -> 0x8011515C
// this: r31
unsigned char cGZSnd::Stop() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x8011515C -> 0x80115194
void cGZSnd::SyncPitchWithSimulate(struct EVoiceDesc & desc /* r31 */) {}

// Range: 0x80115194 -> 0x80115204
// this: r31
unsigned char cGZSnd::Pause() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80115204 -> 0x80115274
// this: r31
unsigned char cGZSnd::Unpause() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80115274 -> 0x8011527C
unsigned char cGZSnd::Load() {}

// Range: 0x8011527C -> 0x80115284
unsigned char cGZSnd::Unload() {}

// Range: 0x80115284 -> 0x8011528C
int cGZSnd::GetVolume() {}

// Range: 0x8011528C -> 0x801152B0
unsigned char cGZSnd::SetVolume() {}

// Range: 0x801152B0 -> 0x80115390
// this: r31
unsigned char cGZSnd::setVolume() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x10
    float lVol; // r1+0xC
    float rVol; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80115390 -> 0x801153F8
unsigned char cGZSnd::FadeVolume() {}

// Range: 0x801153F8 -> 0x80115400
int cGZSnd::GetPan() {}

// Range: 0x80115400 -> 0x801154B0
// this: r31
unsigned char cGZSnd::SetPan() {
    // Local variables
    struct EVoiceDesc desc; // r1+0x10
    float lVol; // r1+0xC
    float rVol; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x801154B0 -> 0x801154B8
int cGZSnd::GetFrequency() {}

// Range: 0x801154B8 -> 0x801154C0
unsigned char cGZSnd::SetFrequency() {}

// Range: 0x801154C0 -> 0x801154C8
unsigned char cGZSnd::SetPosition() {}

// Range: 0x801154C8 -> 0x8011553C
// this: r31
void cGZSnd::reset() {
    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x8011553C -> 0x801156C0
void cGZSnd::getLRVolume() {
    // Local variables
    float inc; // f1
    float vol; // f1
    unsigned char surround; // r8
    float signLeft; // f2
    float signRight; // f4
    unsigned char lastSurround; // r0
}

// Range: 0x801156C0 -> 0x80115734
// this: r31
cGZMusic::cGZMusic() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
    // -> struct [anonymous] __vt__8cGZMusic;
}

// Range: 0x80115734 -> 0x801157A0
// this: r30
cGZMusic::~cGZMusic() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
    // -> struct [anonymous] __vt__8cGZMusic;
}

// Range: 0x801157A0 -> 0x801157A8
unsigned char cGZMusic::Init() {}

// Range: 0x801157A8 -> 0x801157BC
unsigned int cGZMusic::AddRef() {}

// Range: 0x801157BC -> 0x80115834
// this: r31
unsigned int cGZMusic::Release() {}

// Range: 0x80115834 -> 0x80115928
// this: r31
unsigned char cGZMusic::Play() {
    // Local variables
    struct EPMDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80115928 -> 0x80115930
unsigned char cGZMusic::IsPlaying() {}

// Range: 0x80115930 -> 0x80115984
unsigned char cGZMusic::Stop() {
    // References
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80115984 -> 0x801159D4
unsigned char cGZMusic::Pause() {
    // References
    // -> class EAudio * _pActualAudio;
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x801159D4 -> 0x80115A24
unsigned char cGZMusic::Unpause() {
    // References
    // -> class EAudio * _pActualAudio;
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80115A24 -> 0x80115A2C
unsigned char cGZMusic::Load() {}

// Range: 0x80115A2C -> 0x80115A34
unsigned char cGZMusic::Unload() {}

// Range: 0x80115A34 -> 0x80115A3C
int cGZMusic::GetVolume() {}

// Range: 0x80115A3C -> 0x80115A54
unsigned char cGZMusic::SetVolume() {}

// Range: 0x80115A54 -> 0x80115B50
// this: r30
unsigned char cGZMusic::setVolume(int lNewVolume /* r31 */) {
    // References
    // -> static class cGZSndSys * _gzSndSys;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80115B50 -> 0x80115C00
// this: r28
unsigned char cGZMusic::FadeVolume(int lEndingVolume /* r29 */, unsigned int lMilliseconds /* r30 */) {}

// Range: 0x80115C00 -> 0x80115C08
int cGZMusic::GetPan() {}

// Range: 0x80115C08 -> 0x80115C94
// this: r31
unsigned char cGZMusic::SetPan() {
    // References
    // -> class EAudio * _pActualAudio;
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80115C94 -> 0x80115C9C
int cGZMusic::GetFrequency() {}

// Range: 0x80115C9C -> 0x80115CA4
unsigned char cGZMusic::SetFrequency() {}

// Range: 0x80115CA4 -> 0x80115CAC
unsigned char cGZMusic::SetPosition() {}

// Range: 0x80115CAC -> 0x80115CEC
void cGZMusic::reset() {
    // References
    // -> class EAudio * _pActualAudio;
    // -> static class cGZSndSys * _gzSndSys;
}

// Range: 0x80115CEC -> 0x80115D20
float cGZMusic::getLRVolume() {}

// Range: 0x80115D20 -> 0x80115D58
float cGZMusic::getPanSetting() {}


