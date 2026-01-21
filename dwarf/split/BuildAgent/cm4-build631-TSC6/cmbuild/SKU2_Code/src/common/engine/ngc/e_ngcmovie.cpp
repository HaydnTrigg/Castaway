/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcmovie.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B5C00 -> 0x802B853C
*/
// Range: 0x802B5C00 -> 0x802B5CD0
// this: r31
ENgcMovie::ENgcMovie() {
    // Local variables
    unsigned int soundMode; // r0

    // References
    // -> static struct THPPlayer ActivePlayer;
    // -> static unsigned char miniaudioboot;
    // -> unsigned int gAudioEnabled;
    // -> class ENgcAudio _ngcAudio;
    // -> struct [anonymous] __vt__9ENgcMovie;
}

// Range: 0x802B5CD0 -> 0x802B5D4C
// this: r30
ENgcMovie::~ENgcMovie() {
    // References
    // -> struct [anonymous] __vt__9ENgcMovie;
}

// Range: 0x802B5D4C -> 0x802B5EB4
// this: r30
unsigned char ENgcMovie::Load() {
    // References
    // -> class EApp * _pApp;
    // -> class EGraphics * _pGfx;
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B5EB4 -> 0x802B5FA0
// this: r31
void ENgcMovie::Start(int y /* r30 */) {}

// Range: 0x802B5FA0 -> 0x802B5FDC
// this: r31
void ENgcMovie::Stop() {}

// Range: 0x802B5FDC -> 0x802B5FE0
void ENgcMovie::Reset() {}

// Range: 0x802B5FE0 -> 0x802B603C
// this: r31
unsigned char ENgcMovie::IsFinished() {
    // References
    // -> static unsigned char bPausedDueToDiskError;
}

// Range: 0x802B603C -> 0x802B6154
// this: r30
unsigned char ENgcMovie::GetNextFrame() {
    // Local variables
    unsigned char Result; // r31

    // References
    // -> unsigned char s_bShuttingDown;
    // -> static unsigned char bWasPlayingWhenPaused;
    // -> static struct THPPlayer ActivePlayer;
    // -> static unsigned char bPausedDueToDiskError;
}

// Range: 0x802B6154 -> 0x802B628C
// this: r29
unsigned char ENgcMovie::PlayerInit(int audioSystem /* r30 */) {
    // Local variables
    unsigned char old; // r30

    // References
    // -> static signed short SoundBuffer[2][320];
    // -> static void (* OldAIDCallback)();
    // -> static signed short * CurAudioBuffer;
    // -> static signed short * LastAudioBuffer;
    // -> static int SoundBufferIndex;
    // -> static int AudioSystem;
    // -> static void * UsedTextureSetMessage[3];
    // -> static struct OSMessageQueue UsedTextureSetQueue;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B628C -> 0x802B62F4
// this: r30
void ENgcMovie::PlayerQuit() {
    // Local variables
    unsigned char old; // r31

    // References
    // -> static void (* OldAIDCallback)();
}

// Range: 0x802B62F4 -> 0x802B65A8
unsigned char ENgcMovie::PlayerOpen(unsigned int start /* r28 */, unsigned char onMemory /* r29 */) {
    // Local variables
    int i; // r26
    int offset; // [invalid]
    const char * fileName; // r26

    // References
    // -> static int WorkBuffer[16];
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B65A8 -> 0x802B65FC
unsigned char ENgcMovie::PlayerClose() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B65FC -> 0x802B67BC
unsigned char ENgcMovie::PlayerCreateBuffers(class EAllocGroup & allocGroup /* r31 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int ysize; // r30
    unsigned int uvsize; // r27
    int asize; // r27

    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B67BC -> 0x802B6A2C
unsigned char ENgcMovie::PlayerPrepare(int frameNum /* r27 */, int playFlag /* r29 */, int audioTrack /* r30 */) {
    // Local variables
    int offset; // r0
    unsigned char * ptr; // r28

    // References
    // -> static void (* OldVIPostCallback)(unsigned long);
    // -> static int WorkBuffer[16];
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6A2C -> 0x802B6A8C
unsigned char ENgcMovie::PlayerPlay() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6A8C -> 0x802B6B44
void ENgcMovie::PlayerStop() {
    // Local variables
    void * texture; // r0

    // References
    // -> static void (* OldVIPostCallback)(unsigned long);
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6B44 -> 0x802B6B80
unsigned char ENgcMovie::PlayerPause() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6B80 -> 0x802B6C4C
int ENgcMovie::PlayerDrawCurrentFrame(unsigned int x /* r27 */, unsigned int y /* r28 */, unsigned int polygonW /* r29 */, unsigned int polygonH /* r30 */) {
    // Local variables
    int currentFrameNumber; // r3

    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6C4C -> 0x802B6C98
unsigned char ENgcMovie::PlayerGetVideoInfo() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6C98 -> 0x802B6CE4
unsigned char ENgcMovie::PlayerGetAudioInfo() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6CE4 -> 0x802B6CF4
int ENgcMovie::PlayerGetState() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6CF4 -> 0x802B6D40
// this: r31
void ENgcMovie::PlayerDrawDone() {
    // Local variables
    void * textureSet; // r0
}

// Range: 0x802B6D40 -> 0x802B6D58
unsigned char ENgcMovie::PauseSound() {
    // Local variables
    unsigned char bLastState; // r0

    // References
    // -> static unsigned char gIsSoundPaused;
}

// Range: 0x802B6D58 -> 0x802B6D5C
static void THPGXYuv2RgbSetup() {}

// Range: 0x802B6D5C -> 0x802B6F2C
static void THPGXYuv2RgbDraw(unsigned char * u_data /* r30 */, unsigned char * v_data /* r23 */, signed short x /* r24 */, signed short y /* r25 */, signed short textureWidth /* r26 */, signed short textureHeight /* r27 */, signed short polygonWidth /* r28 */, signed short polygonHeight /* r29 */) {
    // Local variables
    struct _GXTexObj tobj0; // r1+0x48
    struct _GXTexObj tobj1; // r1+0x28
    struct _GXTexObj tobj2; // r1+0x8
}

// Range: 0x802B6F2C -> 0x802B6FFC
static void InitAllMessageQueue() {
    // Local variables
    int i; // r30

    // References
    // -> static void * PrepareReadyMessage;
    // -> static struct OSMessageQueue PrepareReadyQueue;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B6FFC -> 0x802B703C
static unsigned char WaitUntilPrepare() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue PrepareReadyQueue;
}

// Range: 0x802B703C -> 0x802B72D0
static void PlayControl() {
    // Local variables
    struct THPTextureSet * textureSet; // r30

    // References
    // -> static struct THPPlayer ActivePlayer;
    // -> static void (* OldVIPostCallback)(unsigned long);
}

// Range: 0x802B72D0 -> 0x802B733C
static unsigned char ProperTimingForStart() {
    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B733C -> 0x802B7464
static unsigned char ProperTimingForGettingNextFrame() {
    // Local variables
    int frameRate; // r30

    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B7464 -> 0x802B7478
static void PushUsedTextureSet() {
    // References
    // -> static struct OSMessageQueue UsedTextureSetQueue;
}

// Range: 0x802B7478 -> 0x802B74BC
static void * PopUsedTextureSet() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue UsedTextureSetQueue;
}

// Range: 0x802B74BC -> 0x802B7650
static void THPAudioMixCallback() {
    // Local variables
    unsigned char old; // r30

    // References
    // -> static signed short * CurAudioBuffer;
    // -> static signed short * LastAudioBuffer;
    // -> static signed short SoundBuffer[2][320];
    // -> static int SoundBufferIndex;
    // -> static int AudioSystem;
    // -> static void (* OldAIDCallback)();
    // -> static unsigned char gIsSoundPaused;
}

// Range: 0x802B7650 -> 0x802B79EC
static void MixAudio() {
    // Local variables
    unsigned int sampleNum; // r5
    unsigned int requestSample; // r29
    unsigned int i; // r0
    int mix; // r0
    signed short * dst; // r28
    signed short * libsrc; // r27
    signed short * thpsrc; // r6
    unsigned short attenuation; // r4

    // References
    // -> static unsigned short VolumeTable[128];
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B79EC -> 0x802B7A90
static unsigned char CreateReadThread() {
    // References
    // -> static int ReadThreadCreated;
    // -> static void * ReadedBufferMessage2[10];
    // -> static struct OSMessageQueue ReadedBufferQueue2;
    // -> static void * ReadedBufferMessage[10];
    // -> static struct OSMessageQueue ReadedBufferQueue;
    // -> static void * FreeReadBufferMessage[10];
    // -> static struct OSMessageQueue FreeReadBufferQueue;
    // -> static struct OSThread ReadThread;
    // -> static unsigned char ReadThreadStack[4096];
}

// Range: 0x802B7A90 -> 0x802B7AAC
static void ReadThreadStart() {
    // References
    // -> static struct OSThread ReadThread;
    // -> static int ReadThreadCreated;
}

// Range: 0x802B7AAC -> 0x802B7AE8
static void ReadThreadCancel() {
    // References
    // -> static struct OSThread ReadThread;
    // -> static int ReadThreadCreated;
}

// Range: 0x802B7AE8 -> 0x802B7BD0
static void * Reader() {
    // Local variables
    struct THPReadBuffer * readBuffer; // r25
    int offset; // r24
    int size; // r23
    int readFrame; // r31
    int result; // r0

    // References
    // -> static struct OSThread ReadThread;
    // -> static struct OSMessageQueue PrepareReadyQueue;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B7BD0 -> 0x802B7BE4
static void PushReadedBuffer() {
    // References
    // -> static struct OSMessageQueue ReadedBufferQueue;
}

// Range: 0x802B7BE4 -> 0x802B7C18
static void * PopFreeReadBuffer() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue FreeReadBufferQueue;
}

// Range: 0x802B7C18 -> 0x802B7C2C
static void PushFreeReadBuffer() {
    // References
    // -> static struct OSMessageQueue FreeReadBufferQueue;
}

// Range: 0x802B7C2C -> 0x802B7D04
static unsigned char CreateAudioDecodeThread() {
    // References
    // -> static int AudioDecodeThreadCreated;
    // -> static void * DecodedAudioBufferMessage[3];
    // -> static struct OSMessageQueue DecodedAudioBufferQueue;
    // -> static void * FreeAudioBufferMessage[3];
    // -> static struct OSMessageQueue FreeAudioBufferQueue;
    // -> static struct OSThread AudioDecodeThread;
    // -> static unsigned char AudioDecodeThreadStack[4096];
}

// Range: 0x802B7D04 -> 0x802B7D20
static void AudioDecodeThreadStart() {
    // References
    // -> static struct OSThread AudioDecodeThread;
    // -> static int AudioDecodeThreadCreated;
}

// Range: 0x802B7D20 -> 0x802B7D5C
static void AudioDecodeThreadCancel() {
    // References
    // -> static struct OSThread AudioDecodeThread;
    // -> static int AudioDecodeThreadCreated;
}

// Range: 0x802B7D5C -> 0x802B7DAC
static void * AudioDecoder() {
    // Local variables
    struct THPReadBuffer * readBuffer; // r29

    // References
    // -> static struct OSMessageQueue ReadedBufferQueue;
    // -> static struct OSMessageQueue ReadedBufferQueue2;
}

// Range: 0x802B7DAC -> 0x802B7E58
static void * AudioDecoderForOnMemory() {
    // Local variables
    struct THPReadBuffer readBuffer; // r1+0x8
    int tmp; // r4
    int size; // r28
    int readFrame; // r31

    // References
    // -> static struct THPPlayer ActivePlayer;
    // -> static struct OSThread AudioDecodeThread;
}

// Range: 0x802B7E58 -> 0x802B7F2C
static void AudioDecode() {
    // Local variables
    struct THPAudioBuffer * audioBuffer; // r30
    unsigned int i; // r0
    unsigned int sample; // r0
    unsigned int * compSizePtr; // r29
    unsigned char * ptr; // r28

    // References
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B7F2C -> 0x802B7F60
static void * PopFreeAudioBuffer() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue FreeAudioBufferQueue;
}

// Range: 0x802B7F60 -> 0x802B7F74
static void PushFreeAudioBuffer() {
    // References
    // -> static struct OSMessageQueue FreeAudioBufferQueue;
}

// Range: 0x802B7F74 -> 0x802B7FB8
static void * PopDecodedAudioBuffer() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue DecodedAudioBufferQueue;
}

// Range: 0x802B7FB8 -> 0x802B7FCC
static void PushDecodedAudioBuffer() {
    // References
    // -> static struct OSMessageQueue DecodedAudioBufferQueue;
}

// Range: 0x802B7FCC -> 0x802B80A4
static unsigned char CreateVideoDecodeThread() {
    // References
    // -> static int First;
    // -> static int VideoDecodeThreadCreated;
    // -> static void * DecodedTextureSetMessage[3];
    // -> static struct OSMessageQueue DecodedTextureSetQueue;
    // -> static void * FreeTextureSetMessage[3];
    // -> static struct OSMessageQueue FreeTextureSetQueue;
    // -> static struct OSThread VideoDecodeThread;
    // -> static unsigned char VideoDecodeThreadStack[4096];
}

// Range: 0x802B80A4 -> 0x802B80C0
static void VideoDecodeThreadStart() {
    // References
    // -> static struct OSThread VideoDecodeThread;
    // -> static int VideoDecodeThreadCreated;
}

// Range: 0x802B80C0 -> 0x802B80FC
static void VideoDecodeThreadCancel() {
    // References
    // -> static struct OSThread VideoDecodeThread;
    // -> static int VideoDecodeThreadCreated;
}

// Range: 0x802B80FC -> 0x802B8214
static void * VideoDecoder() {
    // Local variables
    struct THPReadBuffer * readBuffer; // r29
    unsigned char old; // r0

    // References
    // -> static struct OSMessageQueue ReadedBufferQueue;
    // -> static struct OSMessageQueue FreeReadBufferQueue;
    // -> static struct OSMessageQueue ReadedBufferQueue2;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B8214 -> 0x802B8358
static void * VideoDecoderForOnMemory() {
    // Local variables
    struct THPReadBuffer readBuffer; // r1+0x8
    unsigned char old; // r0
    int tmp; // r4
    int size; // r30
    int readFrame; // r29

    // References
    // -> static struct OSThread VideoDecodeThread;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B8358 -> 0x802B849C
static void VideoDecode(struct THPReadBuffer * readBuffer /* r25 */) {
    // Local variables
    struct THPTextureSet * textureSet; // r29
    unsigned int i; // r28
    unsigned int * compSizePtr; // r27
    unsigned char * ptr; // r26
    unsigned char old; // r0

    // References
    // -> static int First;
    // -> static struct OSThread VideoDecodeThread;
    // -> static struct OSMessageQueue PrepareReadyQueue;
    // -> static struct THPPlayer ActivePlayer;
}

// Range: 0x802B849C -> 0x802B84D0
static void * PopFreeTextureSet() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue FreeTextureSetQueue;
}

// Range: 0x802B84D0 -> 0x802B84E4
static void PushFreeTextureSet() {
    // References
    // -> static struct OSMessageQueue FreeTextureSetQueue;
}

// Range: 0x802B84E4 -> 0x802B8528
static void * PopDecodedTextureSet() {
    // Local variables
    void * msg; // r1+0x8

    // References
    // -> static struct OSMessageQueue DecodedTextureSetQueue;
}

// Range: 0x802B8528 -> 0x802B853C
static void PushDecodedTextureSet() {
    // References
    // -> static struct OSMessageQueue DecodedTextureSetQueue;
}


