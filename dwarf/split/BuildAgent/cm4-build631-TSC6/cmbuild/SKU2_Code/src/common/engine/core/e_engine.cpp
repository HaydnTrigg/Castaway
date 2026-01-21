/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\core\e_engine.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027BDB8 -> 0x8027CBC0
*/
// Range: 0x8027BDB8 -> 0x8027BECC
// this: r29
EEngine::EEngine() {
    // References
    // -> class EVec3 _vZero;
    // -> class EQuat _qId;
    // -> class EVec3 _vAxes[3];
    // -> class EMat4 _mId;
    // -> float _retracetime;
    // -> int _iVideoMode;
    // -> struct [anonymous] __vt__7EEngine;
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
}

// Range: 0x8027BECC -> 0x8027BF74
// this: r30
EEngine::~EEngine() {
    // References
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
    // -> unsigned char m_shutdownComplete;
    // -> struct [anonymous] __vt__7EEngine;
}

// Range: 0x8027BF74 -> 0x8027BF80
void EEngine::ManagedShutdown() {
    // References
    // -> class EEngine * _pEngine;
}

// Range: 0x8027BF80 -> 0x8027C074
// this: r31
unsigned char EEngine::Init() {
    // References
    // -> unsigned char _enable_trace_log;
    // -> class EClock _sysclock;
    // -> class EClockMan * _pClockMan;
}

// Range: 0x8027C074 -> 0x8027C118
// this: r30
void EEngine::ShutdownThreads(unsigned char bShutdownMainThread /* r31 */) {
    // References
    // -> class EAudio * _pActualAudio;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8027C118 -> 0x8027C130
int EEngine::GetMinRetraces() {
    // References
    // -> int _d_retraces;
}

// Range: 0x8027C130 -> 0x8027C144
void EEngine::EnterMovieMode() {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x8027C144 -> 0x8027C158
void EEngine::ExitMovieMode() {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x8027C158 -> 0x8027C47C
// this: r31
void EEngine::PreFrameUpdate() {
    // Local variables
    float frameTime; // f31
    float smoothDt; // f0
    float _dt'93; // f0

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class Background * _pBackground;
    // -> class EGraphics * _pGfx;
    // -> class EControllerManager * _pCtrlMan;
    // -> float _invdt;
    // -> class EFrameAllocGroup _frag;
    // -> float _dtlim15;
    // -> float _dtlim20;
    // -> float _dtlim30;
    // -> float _dt;
    // -> static float dtHist[2];
    // -> static unsigned char first;
    // -> int _retracecount;
    // -> int _d_retraces;
    // -> float _retracetime;
    // -> float _rendtime_m1;
    // -> float _rendtime;
    // -> float _cputime_m1;
    // -> float _cputime;
    // -> double _time;
    // -> int _framecount;
    // -> int _evenodd;
    // -> class EClockMan * _pClockMan;
}

// Range: 0x8027C47C -> 0x8027C4EC
// this: r31
void EEngine::PostFrameUpdate() {
    // References
    // -> class EClockMan * _pClockMan;
    // -> float _cputime_m2;
    // -> float _cputime;
    // -> float _cputime_m1;
    // -> class EGraphics * _pGfx;
}

// Range: 0x8027C4EC -> 0x8027C508
// this: r4
void EEngine::FrameComplete() {
    // References
    // -> class EScheduler * _pSched;
}

// Range: 0x8027C508 -> 0x8027C50C
void EEngine::PrintBanner() {}

// Range: 0x8027C50C -> 0x8027C510
void EEngine::PrintConfiguration() {}

// Range: 0x8027C510 -> 0x8027C514
void EEngine::PrintHeapInfo() {}

// Range: 0x8027C514 -> 0x8027C518
void EEngine::PrintPoolInfo() {}

// Range: 0x8027C518 -> 0x8027C638
// this: r31
unsigned char EEngine::InitSubsystems() {
    // References
    // -> class EAudio * _pActualAudio;
    // -> class EMemoryCard * _pMemoryCard;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EScratchBuffMan _scratchBuffMan;
    // -> class EGraphics * _pGfx;
    // -> class EClockMan * _pClockMan;
}

// Range: 0x8027C638 -> 0x8027C648
unsigned char EEngine::InitFileSystem() {
    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x8027C648 -> 0x8027C8AC
unsigned char EEngine::InitResourceManagers() {
    // References
    // -> class EResPrefetch _resPrefetch;
    // -> class ESoundEventManager g_soundeventman;
    // -> class ESoundTrackDataManager g_soundtrackdataman;
    // -> class EAmbientScoreManager g_ambientscoreman;
    // -> class ESocialAnimationSetManager g_socialanimationsetman;
    // -> class EBinaryManager _binaryman;
    // -> class EMovieMan _movieman;
    // -> class EAudioStreamManager _audiostreamman;
    // -> class EEdithTreeSetMan _edithtreesetman;
    // -> class EFontManager _fontman;
    // -> class EffectsSequencerManager g_effectsSequencerMan;
    // -> class EffectsEmitterManager g_effectsEmitterMan;
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
    // -> class EFlashManager _flashman;
    // -> class EQuickdataManager _quickdataman;
    // -> class EDatasetManager _datasetman;
    // -> class ECharacterManager _characterman;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EModelManager _modelman;
    // -> class EAnimManager _animman;
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> class Background * _pBackground;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x8027C8AC -> 0x8027CA94
void EEngine::ShutdownResourceManagers() {
    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class Background * _pBackground;
    // -> class EffectsSequencerManager g_effectsSequencerMan;
    // -> class EffectsEmitterManager g_effectsEmitterMan;
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
    // -> class ESoundEventManager g_soundeventman;
    // -> class ESoundTrackDataManager g_soundtrackdataman;
    // -> class ESocialAnimationSetManager g_socialanimationsetman;
    // -> class EAmbientScoreManager g_ambientscoreman;
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> class EFontManager _fontman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
    // -> class EAnimManager _animman;
    // -> class EMovieMan _movieman;
    // -> class EBinaryManager _binaryman;
    // -> class EQuickdataManager _quickdataman;
    // -> class EAudioStreamManager _audiostreamman;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EDatasetManager _datasetman;
    // -> class EFlashManager _flashman;
    // -> class EResPrefetch _resPrefetch;
}

// Range: 0x8027CA94 -> 0x8027CAAC
void EEngine::ClearCurrentLevel() {}

// Range: 0x8027CAAC -> 0x8027CAC0
void EEngine::Idle() {}

// Range: 0x8027CAC0 -> 0x8027CAF4
void EEngine::GetDMARingMemoryUseInfo() {}

// Range: 0x8027CAF4 -> 0x8027CB14
void EEngine::GetDMARingHeapInfo() {}

// Range: 0x8027CB14 -> 0x8027CB48
void EEngine::GetTextureRingMemoryUseInfo() {}

// Range: 0x8027CB48 -> 0x8027CB68
void EEngine::GetTextureRingHeapInfo() {}

// Range: 0x8027CB68 -> 0x8027CBA0
void EEngine::GetMemoryUseSystemInfo() {}

// Range: 0x8027CBA0 -> 0x8027CBC0
void EEngine::GetSystemHeapInfo() {}


