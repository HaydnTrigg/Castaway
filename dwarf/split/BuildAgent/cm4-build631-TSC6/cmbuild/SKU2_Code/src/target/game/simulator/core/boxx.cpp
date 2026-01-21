/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\boxx.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801009F4 -> 0x80103EB4
*/
// Range: 0x801009F4 -> 0x80100A38
unsigned char BoxxGlobalGetSourceParamValue(int * plValue /* r31 */) {
    // Local variables
    int lParmVal; // r0
}

// Range: 0x80100A38 -> 0x80100AC4
// this: r30
cBoxX::cBoxX() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> struct [anonymous] __vt__5cBoxX;
}

// Range: 0x80100B1C -> 0x80100BA8
// this: r29
cBoxX::~cBoxX() {
    // References
    // -> unsigned char g_bBoxXIsInitted;
    // -> struct [anonymous] __vt__5cBoxX;
}

// Range: 0x80100BA8 -> 0x80100C64
// this: r31
unsigned char cBoxX::Init() {
    // References
    // -> unsigned char g_bBoxXIsInitted;
    // -> class cHitMan * g_pHitMan;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x80100C64 -> 0x80100C68
void cBoxX::LoadQdataTables() {}

// Range: 0x80100C68 -> 0x80100D10
// this: r31
unsigned char cBoxX::Shutdown() {
    // References
    // -> unsigned char g_bBoxXIsInitted;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80100D10 -> 0x80100E84
// this: r30
void cBoxX::Update() {
    // Local variables
    class ESimsCam * cam; // r0
    class EVec3 listenPos; // r1+0x14
    class EVec3 listenDir; // r1+0x8
    int count; // r31
    float time; // f31

    // References
    // -> class GameData _gd;
    // -> class cHitMan * g_pHitMan;
    // -> unsigned char g_bBoxXIsInitted;
}

// Range: 0x80100E84 -> 0x80100E9C
void cBoxX::UpdateGameMode() {
    // References
    // -> unsigned char g_bBoxXIsInitted;
}

// Range: 0x80100E9C -> 0x80101130
unsigned char cBoxX::GetSurroundVol(class EVec3 & sndPos /* r25 */, float minRad /* f30 */, float maxRad /* f31 */, int & lVol /* r28 */, int & rVol /* r29 */, int & fVol /* r30 */, int & bVol /* r31 */) {
    // Local variables
    unsigned char playSound; // r27
    const class vector * listenerInfo; // r26
    class EVec3 listenPos; // r1+0x24
    class EVec3 listenDir; // r1+0x18
    int L; // r1+0x14
    int R; // r1+0x10
    int F; // r1+0xC
    int B; // r1+0x8
    int myTargetID; // r0

    // References
    // -> float g_social_duck;
    // -> class EGlobal _globals;
}

// Range: 0x80101130 -> 0x8010140C
unsigned char cBoxX::GetSurroundVol(class EVec3 & sndPos /* r24 */, float minRad /* f30 */, float maxRad /* f31 */, int & lVol /* r27 */, int & rVol /* r28 */, int & fVol /* r29 */, int & bVol /* r30 */, int objID /* r25 */) {
    // Local variables
    unsigned char playSound; // r31
    class ESimsCam * cam; // r26
    class EVec3 listenPos; // r1+0x24
    class EVec3 listenDir; // r1+0x18
    int L; // r1+0x14
    int R; // r1+0x10
    int F; // r1+0xC
    int B; // r1+0x8
    int myTargetID; // r0

    // References
    // -> float g_social_duck;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8010140C -> 0x80101720
unsigned char cBoxX::CalculateSurroundVol(const class EVec3 & eyeDir /* r27 */, float minRad /* f29 */, float maxRad /* f28 */, int & lVol /* r28 */, int & rVol /* r29 */, int & fVol /* r30 */, int & bVol /* r31 */) {
    // Local variables
    class EVec3 dirVec; // r1+0x18
    float distance; // f0
    float killRad; // f2
    float sndVol; // f31
    class EVec2 trans; // r1+0x10
    class EVec2 camSndDir; // r1+0x8
    float a; // f3
    float b; // f28
    float c; // f30
    float d; // f29
}

// Range: 0x80101720 -> 0x801018A4
unsigned char cBoxX::GetInstanceSurroundVol(int lInstId /* r25 */, unsigned char minRange /* r31 */, unsigned char maxRange /* r30 */, int & ilVol /* r26 */, int & irVol /* r27 */, int & ifVol /* r28 */, int & ibVol /* r29 */) {
    // Local variables
    class cAudioWorldCoord acWorld; // r1+0x18
    unsigned char bOk; // r0
    class EVec3 objPos; // r1+0x8
    float minRad; // f31
    float maxRad; // f30
    class cXObject * object; // r31
    int social_id; // r30
    class cXPerson * person; // r0
    unsigned char rval; // r0
}

// Range: 0x801018A4 -> 0x80101920
unsigned char cBoxX::GetInstanceSurroundVol(int lInstId /* r25 */, class cTrack * track /* r26 */, int & ilVol /* r27 */, int & irVol /* r28 */, int & ifVol /* r29 */, int & ibVol /* r30 */) {}

// Range: 0x80101920 -> 0x80101B90
unsigned char cBoxX::GetInstanceVolNoPan(class cTrack * track /* r29 */, int & lrVol /* r30 */) {
    // Local variables
    class cAudioWorldCoord acWorld; // r1+0x38
    unsigned char bOk; // r0
    class EVec3 objPos; // r1+0x2C
    float minRad; // f31
    float maxRad; // f30
    class ESimsCam * cam; // r31
    class EVec3 listenPos; // r1+0x20
    class EVec3 listenDir; // r1+0x14
    class EVec3 dirVec; // r1+0x8
    float distance; // f0
    float sndVol; // f29
    int myTargetID; // r0

    // References
    // -> float g_social_duck;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80101B90 -> 0x80101CD0
void cBoxX::ConvertSurroundToVolPan() {}

// Range: 0x80101CD0 -> 0x80101D50
// this: r28
unsigned char cBoxX::MappedEvent(class ERSoundEvent * pEvent /* r29 */, int lSourceId /* r30 */, float time_delay /* f31 */, unsigned char isFootStep /* r31 */) {}

// Range: 0x80101D50 -> 0x8010240C
// this: r28
unsigned char cBoxX::Event(int lEventNum /* r27 */, int iArg1 /* r29 */, int lSourceId /* r30 */, class ERSoundEvent * sndEvent /* r1+0x8 */, float timeToPlay /* f31 */, unsigned char isFootStep /* r31 */) {
    // Local variables
    class EAutoMutex eventMutex; // r1+0x30
    int lNewSimSpeed; // r0
    class cTrack * track; // r29
    unsigned char in_social_mode; // r27
    int vol; // r1+0x2C
    int pan; // r1+0x28
    int lVol; // r1+0x24
    int rVol; // r1+0x20
    int fVol; // r1+0x1C
    int bVol; // r1+0x18
    int prevMode; // r27
    int lVolume; // r27
    int lVolume; // r4
    int * plReturnVal; // r0

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
    // -> static int lSimSpeed;
    // -> class cHitMan * g_pHitMan;
    // -> unsigned char g_bBoxXIsInitted;
    // -> class EApp * _pApp;
    // -> class EClock _sysclock;
    // -> static class EThreadMutex g_eventMutex;
}

// Range: 0x8010240C -> 0x80102538
// this: r30
void cBoxX::SetAmbientScore(int prevMode /* r31 */) {
    // Local variables
    char buffer[32]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80102538 -> 0x8010254C
void cBoxX::SetAmbientScoreVolume() {}

// Range: 0x8010254C -> 0x80102564
int cBoxX::GetAmbientScoreVolume() {}

// Range: 0x80102564 -> 0x8010262C
// this: r30
struct rbtree_iterator cBoxX::FindSndobInstancePair(class ERSoundEvent * sndEvent /* r1+0x8 */, int lInstanceId /* r31 */) {
    // Local variables
    struct rbtree_iterator itStart; // r1+0x18
    struct rbtree_iterator itEnd; // r1+0x14
    struct rbtree_iterator it; // r1+0x10
    int lInst; // r0
}

// Range: 0x8010262C -> 0x801026BC
// this: r31
void cBoxX::AddToInstanceMap(class ERSoundEvent * sndEvent /* r1+0x8 */, int lInstanceId /* r1+0xC */) {
    // Local variables
    struct pair p; // r1+0x28
}

// Range: 0x801026BC -> 0x801027D4
// this: r30
void cBoxX::UpdateAllSndobVolPan() {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x1C
    struct rbtree_iterator itEnd; // r1+0x18
    struct rbtree_iterator itBeginThisSndob; // r1+0x14
    struct rbtree_iterator itEndThisSndob; // r1+0x10
}

// Range: 0x801027D4 -> 0x801028D4
void cBoxX::CheckForTooManySounds() {
    // Local variables
    int lNumTracksPlaying; // r0
    class list & trackList; // r31
    struct ListIterator it; // r1+0x10
    struct ListIterator itEnd; // r1+0xC
    class cTrack * pMinVolTrack; // r31
    int lMinVol; // r30
    class cTrack * track; // r29
    int lVol; // r3

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x801028D4 -> 0x801029D0
// this: r29
void cBoxX::KillSource(int lSourceId /* r30 */) {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x24
    struct rbtree_iterator itEnd; // r1+0x20
    struct rbtree_iterator it; // r1+0x1C
    class ERSoundEvent * sndEvent; // r31
    struct rbtree_iterator itTemp; // r1+0x18
}

// Range: 0x801029D0 -> 0x80102A64
// this: r31
void cBoxX::UpdateSndobVolPan(class ERSoundEvent * sndEvent /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x10
    struct rbtree_iterator itEnd; // r1+0xC
    class cTrack * track; // r0

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102A64 -> 0x80102B4C
// this: r29
void cBoxX::UpdateSndobVolPan(const struct rbtree_iterator & itBegin /* r30 */) {
    // Local variables
    class ERSoundEvent * sndEvent; // r31
    class cTrack * track; // r30
    int vol; // r1+0x1C
    int pan; // r1+0x18
    int lVol; // r1+0x14
    int rVol; // r1+0x10
    int fVol; // r1+0xC
    int bVol; // r1+0x8

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102B4C -> 0x80102D14
// this: r24
unsigned char cBoxX::GetSndobSurroundVols(class ERSoundEvent * sndEvent /* r1+0x8 */, int & lVol /* r25 */, int & rVol /* r26 */, int & fVol /* r27 */, int & bVol /* r28 */) {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x28
    struct rbtree_iterator itEnd; // r1+0x24
    class cTrack * track; // r29
    struct rbtree_iterator it; // r1+0x20
    int lInstId; // r24
    int ilVol; // r1+0x1C
    int irVol; // r1+0x18
    int ifVol; // r1+0x14
    int ibVol; // r1+0x10

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102D14 -> 0x80102D50
// this: r31
void cBoxX::Pause() {}

// Range: 0x80102D50 -> 0x80102D8C
// this: r31
void cBoxX::Unpause() {}

// Range: 0x80102D8C -> 0x80102DEC
void cBoxX::PauseSFX() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102DEC -> 0x80102E58
void cBoxX::UnpauseSFX() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102E58 -> 0x80102E80
void cBoxX::PauseAmbient() {}

// Range: 0x80102E80 -> 0x80102EB8
void cBoxX::UnpauseAmbient() {}

// Range: 0x80102EB8 -> 0x80102F04
// this: r31
void cBoxX::PauseMusic() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102F04 -> 0x80102F64
// this: r31
void cBoxX::UnpauseMusic() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x80102F64 -> 0x80103094
void cBoxX::GetListenerPosAndDir(const class ESimsCam * cam /* r28 */, class EVec3 & listenPos /* r29 */, class EVec3 & listenDir /* r30 */) {
    // Local variables
    class EVec3 camDir; // r1+0x38

    // References
    // -> float g_cam_height;
    // -> float g_cam_dist;
}

// Range: 0x80103094 -> 0x801030E0
cSoundModeManager::cSoundModeManager() {}

// Range: 0x801030E0 -> 0x80103134
void cSoundModeManager::Pause() {
    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80103134 -> 0x8010317C
void cSoundModeManager::Unpause() {
    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x8010317C -> 0x8010318C
void cSoundModeManager::FadeOutMusic() {}

// Range: 0x8010318C -> 0x8010319C
void cSoundModeManager::FadeOutSFX() {}

// Range: 0x8010319C -> 0x801032B8
// this: r29
void cSoundModeManager::SetMode(int lMode /* r30 */) {
    // Local variables
    int music_vol; // r31
    int oldMode; // r3

    // References
    // -> class EAudio * _pActualAudio;
    // -> static int sfx_vol;
}

// Range: 0x801032B8 -> 0x801035F4
// this: r31
void cSoundModeManager::UpdateMusicVolume() {
    // Local variables
    float curVol; // f31
    float delta; // f1
    float curVol; // f1
    float delta; // f4
    int curVol; // r30
    int lastVol; // r0

    // References
    // -> class cHitMan * g_pHitMan;
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x801035F4 -> 0x801038A0
// this: r28
void cSoundModeManager::UpdateSFXVolume() {
    // Local variables
    int curVol; // r31
    int curVOXVol; // r30
    int curAmbVol; // r29
    unsigned char setVol; // r0
    int done; // r0

    // References
    // -> class EGlobal _globals;
    // -> class cBoxX * g_pBoxX;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x801038A0 -> 0x80103B7C
// this: r31
void cSoundModeManager::UpdateLoadMusic() {
    // Local variables
    char * sfxFileBase; // r30
    int trackNum; // r0
    char sfxFile[64]; // r1+0x20
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class cHitMan * g_pHitMan;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
    // -> class ESimsApp _app;
}

// Range: 0x80103B7C -> 0x80103BA8
char * cSoundModeManager::GetFrontEndMusicTrack() {
    // References
    // -> static char * s_frontEndTracks[9];
}

// Range: 0x80103BA8 -> 0x80103BE4
// this: r31
void cSoundModeManager::StartFrontEndMusic() {}

// Range: 0x80103BE4 -> 0x80103CA8
// this: r31
void cSoundModeManager::StartMusicTrack(float volumeScalar /* f31 */) {
    // References
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80103CA8 -> 0x80103D04
void cSoundModeManager::StartBuildBuyMusic() {
    // References
    // -> static char * s_frontEndTracks[9];
    // -> int _framecount;
}

// Range: 0x80103D04 -> 0x80103D60
void cSoundModeManager::StartCASMusic() {
    // References
    // -> static char * s_frontEndTracks[9];
    // -> int _framecount;
}

// Range: 0x80103D60 -> 0x80103EB4
// this: r31
void cSoundModeManager::Update() {
    // References
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
    // -> class GameData _gd;
}


