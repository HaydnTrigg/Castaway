/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcaudio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B14DC -> 0x802B2988
*/
// Range: 0x802B14DC -> 0x802B151C
// this: r31
EAudio::~EAudio() {}

// Range: 0x802B151C -> 0x802B1584
// this: r30
ENgcAudio::~ENgcAudio() {}

// Range: 0x802B1584 -> 0x802B15A4
EPMDesc::EPMDesc() {}

// Range: 0x802B15A4 -> 0x802B1604
// this: r30
EPMDesc::EPMDesc(unsigned char looping /* r31 */) {}

// Range: 0x802B1604 -> 0x802B17EC
// this: r31
void ENgcAudio::InitAudio() {
    // Local variables
    unsigned int soundMode; // r0
    unsigned int i; // r0

    // References
    // -> static int ActiveSFXHandles[64];
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> static class ENGCAudioStreamer * streamer;
    // -> static class ENgcSFXStreamer * fx;
    // -> unsigned int gAudioInitialised;
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B17EC -> 0x802B1858
void ENgcAudio::Shutdown() {
    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> unsigned int gAudioInitialised;
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B1858 -> 0x802B1C70
// this: r21
void ENgcAudio::PlayMusic(const struct EPMDesc & desc /* r22 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int j; // r25
    class ERAudioStream * pStream; // r0
    unsigned int size; // r24
    class EFile * pFile; // r23
    int second_size; // r5
    int diff; // r6
    unsigned int newstart; // r24
    class EAutoMutex autoMutex'214; // r28

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> static struct sDSPADPCM dspHeader;
    // -> class EAudioStreamManager _audiostreamman;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B1C70 -> 0x802B1C78
unsigned char ENgcAudio::GetIndexFromVoice() {}

// Range: 0x802B1C78 -> 0x802B1C80
struct EVoice * ENgcAudio::GetVoiceFromIndex() {}

// Range: 0x802B1C80 -> 0x802B1F00
// this: r31
void ENgcAudio::Update() {
    // Local variables
    int status; // r0
    unsigned int i; // r24
    unsigned int j; // r23
    class EAutoMutex autoMutex'110; // r29

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> class EAudioStreamManager _audiostreamman;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> int gWarmupMilliCount;
    // -> static unsigned char bWasPlayingWhenPaused;
    // -> unsigned int gAudioInitialised;
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B1F00 -> 0x802B1FD4
void ENgcAudio::StopMusic() {
    // Local variables
    unsigned int i; // r26
    class EAutoMutex autoMutex'63; // r30

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> class EAudioStreamManager _audiostreamman;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B1FD4 -> 0x802B2054
void ENgcAudio::PauseFX() {
    // Local variables
    unsigned int j; // r29

    // References
    // -> static class ENgcSFXStreamer * fx;
    // -> static unsigned char ActiveSFXWasPlaying[64];
    // -> static int ActiveSFXHandles[64];
}

// Range: 0x802B2054 -> 0x802B20E8
void ENgcAudio::ResumeFX() {
    // Local variables
    unsigned int j; // r28

    // References
    // -> static class ENgcSFXStreamer * fx;
    // -> static class ERSampledata * ActiveSFXSamples[64];
    // -> static unsigned char ActiveSFXWasPlaying[64];
    // -> static int ActiveSFXHandles[64];
}

// Range: 0x802B20E8 -> 0x802B217C
void ENgcAudio::PauseMusic() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B217C -> 0x802B220C
void ENgcAudio::ResumeMusic() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B220C -> 0x802B2308
// this: r28
void ENgcAudio::SetMusicVolume() {
    // Local variables
    float v; // f0
    unsigned int i; // r29

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B2308 -> 0x802B2310
float ENgcAudio::GetMusicVolume() {}

// Range: 0x802B2310 -> 0x802B23F0
void ENgcAudio::SetMusicPan() {
    // Local variables
    float panadjust; // f0
    unsigned char pan127; // r29
    unsigned int i; // r28

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> static struct NGCStreamInfo ENgcAudio_streams[64];
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B23F0 -> 0x802B23F8
float ENgcAudio::GetMusicPan() {}

// Range: 0x802B23F8 -> 0x802B2464
// this: r30
unsigned char ENgcAudio::IsPlayingMusic() {
    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B2464 -> 0x802B24B4
static void AudioFrameCallback() {
    // References
    // -> static class ENgcSFXStreamer * fx;
    // -> static class ENGCAudioStreamer * streamer;
    // -> void (* m_fpAudioFrameCB)();
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B24B4 -> 0x802B2508
struct EVoice * ENgcAudio::AudioAllocVoice() {}

// Range: 0x802B2508 -> 0x802B2548
void ENgcAudio::FreeVoice(struct EVoice * voice /* r31 */) {}

// Range: 0x802B2548 -> 0x802B26D0
// this: r30
void ENgcAudio::AudioBindVoice(struct EVoice * voice /* r31 */, unsigned int sampleResID /* r29 */) {
    // Local variables
    unsigned int i; // r3
    class EAutoMutex autoMutex'67; // r30

    // References
    // -> static class ERSampledata * ActiveSFXSamples[64];
    // -> static int ActiveSFXHandles[64];
    // -> static class ENgcSFXStreamer * fx;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> unsigned int gAudioEnabled;
}

// Range: 0x802B26D0 -> 0x802B27A4
void ENgcAudio::UnbindVoice(struct EVoice * voice /* r30 */) {
    // Local variables
    unsigned int i; // r5
    class EAutoMutex autoMutex'49; // r31

    // References
    // -> static int ActiveSFXHandles[64];
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> static class ENgcSFXStreamer * fx;
}

// Range: 0x802B27A4 -> 0x802B2848
void ENgcAudio::GetVoiceState(struct EVoice * voice /* r30 */, struct EVoiceDesc & desc /* r31 */) {
    // References
    // -> static class ENgcSFXStreamer * fx;
}

// Range: 0x802B2848 -> 0x802B2980
void ENgcAudio::SetVoiceState(struct EVoice * voice /* r30 */, const struct EVoiceDesc & desc /* r31 */) {
    // Local variables
    float lVol; // f1
    float rVol; // f3
    float vol; // f0
    float pan; // f31

    // References
    // -> static class ENgcSFXStreamer * fx;
}

// Range: 0x802B2980 -> 0x802B2988
void ENgcAudio::SetDiscErrorCallback() {}


