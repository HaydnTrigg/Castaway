/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\engine_ngc_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AEAE4 -> 0x802AEAE4
*/
class EWiiController * * _wiiCtrlPads; // size: 0x4, address: 0x805DBF80
class EControllerManager * _pCtrlMan; // size: 0x4, address: 0x805DBF84
// total size: 0x2148
class EWiiControllerManager : public ENgcControllerManager {
    // Members
protected:
    struct KPADStatus m_kpads[4][16]; // offset 0x3C, size 0x2100
    int m_numControllers; // offset 0x213C, size 0x4
    int m_numReads; // offset 0x2140, size 0x4
    unsigned char m_dpd1Enabled; // offset 0x2144, size 0x1
};
class EWiiControllerManager _wiiCtrlman; // size: 0x2148, address: 0x80522190
static int _wpadInfoPollTime; // size: 0x4, address: 0x805DA3F0
static unsigned char _wpadInfoCallbackPending; // size: 0x1, address: 0x805DBF88
// total size: 0x18
struct WPADInfo {
    // Members
    int dpd; // offset 0x0, size 0x4
    int speaker; // offset 0x4, size 0x4
    int attach; // offset 0x8, size 0x4
    int lowBat; // offset 0xC, size 0x4
    int nearempty; // offset 0x10, size 0x4
    unsigned char battery; // offset 0x14, size 0x1
    unsigned char led; // offset 0x15, size 0x1
    unsigned char protocol; // offset 0x16, size 0x1
    unsigned char firmware; // offset 0x17, size 0x1
};
static struct WPADInfo _wpadInfo[4]; // size: 0x60, address: 0x805242D8
static unsigned char _wpadInfoFlag[4]; // size: 0x4, address: 0x805DBF8C
static int _wpadInfoUpdate[4]; // size: 0x10, address: 0x80524338
unsigned char bWasInError; // size: 0x1, address: 0x805DBF90
// total size: 0x220
class EWiiController : public EController {
    // Members
    unsigned char m_bIsButtonCHold; // offset 0x205, size 0x1
    unsigned char m_bIsButtonZHold; // offset 0x206, size 0x1
    unsigned char m_bIsButtonBHold; // offset 0x207, size 0x1
    struct _WiiPadInfo m_WiiPadInfo; // offset 0x208, size 0x10
public:
    int m_channel; // offset 0x218, size 0x4
    unsigned char m_bMotorOneActive; // offset 0x21C, size 0x1
    unsigned char m_bMotorTwoActive; // offset 0x21D, size 0x1
};
static const char * BANNER_BIN_DUT_FILENAME; // size: 0x4, address: 0x805DA3F4
static const char * BANNER_BIN_ENG_FILENAME; // size: 0x4, address: 0x805DA3F8
static const char * BANNER_BIN_FRE_FILENAME; // size: 0x4, address: 0x805DA3FC
static const char * BANNER_BIN_GER_FILENAME; // size: 0x4, address: 0x805DA400
static const char * BANNER_BIN_ITA_FILENAME; // size: 0x4, address: 0x805DA404
static const char * BANNER_BIN_SPA_FILENAME; // size: 0x4, address: 0x805DA408
static const char * BANNER_BIN_FILENAME; // size: 0x4, address: 0x805DA40C
class EWiiMemoryCard _wiiMemCard; // size: 0xC, address: 0x80524354
class EMemoryCard * _pMemoryCard; // size: 0x4, address: 0x805DBF94
// total size: 0xF0A0
struct NANDBanner {
    // Members
    unsigned long signature; // offset 0x0, size 0x4
    unsigned long flag; // offset 0x4, size 0x4
    unsigned short iconSpeed; // offset 0x8, size 0x2
    unsigned char reserved[22]; // offset 0xA, size 0x16
    unsigned short comment[2][32]; // offset 0x20, size 0x80
    unsigned char bannerTexture[24576]; // offset 0xA0, size 0x6000
    unsigned char iconTexture[8][4608]; // offset 0x60A0, size 0x9000
};
static struct NANDBanner _nandBanner; // size: 0xF0A0, address: 0x80524360
static unsigned long _nandBannerSize; // size: 0x4, address: 0x805DBF98
static unsigned short _nandBannerComments[2][32]; // size: 0x80, address: 0x80533400
// total size: 0x8C
struct NANDFileInfo {
    // Members
    long fileDescriptor; // offset 0x0, size 0x4
    long origFd; // offset 0x4, size 0x4
    char origPath[64]; // offset 0x8, size 0x40
    char tmpPath[64]; // offset 0x48, size 0x40
    unsigned char accType; // offset 0x88, size 0x1
    unsigned char stage; // offset 0x89, size 0x1
    unsigned char mark; // offset 0x8A, size 0x1
};
// total size: 0x94
class NandFile {
    // Members
    struct NANDFileInfo m_info; // offset 0x0, size 0x8C
    unsigned char m_valid; // offset 0x8C, size 0x1
    int m_lastResult; // offset 0x90, size 0x4
};
static char block[1024]; // size: 0x400, address: 0x80533480
unsigned int gAudioEnabled; // size: 0x4, address: 0x805DA410
unsigned int gAudioInitialised; // size: 0x4, address: 0x805DBF9C
int gWarmupMilliCount; // size: 0x4, address: 0x805DA414
class ENgcAudio _ngcAudio; // size: 0x88, address: 0x80533890
class EAudio * _pActualAudio; // size: 0x4, address: 0x805DBFA0
void (* m_fpAudioFrameCB)(); // size: 0x4, address: 0x805DBFA4
static struct sDSPADPCM dspHeader; // size: 0x60, address: 0x80533920
// total size: 0x2
struct /* @class$12902engine_ngc_unity_cpp */ {
    // Members
    unsigned short looped : 1; // offset 0x0, size 0x2
};
union /* @class$12901engine_ngc_unity_cpp */ {
    // total size: 0x2
    struct /* @class$12902engine_ngc_unity_cpp */ {
        // Members
        unsigned short looped : 1; // offset 0x0, size 0x2
    } __anon$12903; // offset 0x0, size 0x2
    unsigned short looped; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x0, size 0x2
};
// total size: 0x44
struct NGCStreamInfo {
    // Members
    unsigned int file_id; // offset 0x0, size 0x4
    unsigned int voice_id; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
    class EFile * pFile; // offset 0x10, size 0x4
    unsigned short adpcmcoef[16]; // offset 0x14, size 0x20
    unsigned short gain; // offset 0x34, size 0x2
    unsigned short pred_scale; // offset 0x36, size 0x2
    unsigned short yn1; // offset 0x38, size 0x2
    unsigned short yn2; // offset 0x3A, size 0x2
    unsigned short frq; // offset 0x3C, size 0x2
    union { // inferred
        union /* @class$12901engine_ngc_unity_cpp */ {
            // total size: 0x2
            struct /* @class$12902engine_ngc_unity_cpp */ {
                // Members
                unsigned short looped : 1; // offset 0x0, size 0x2
            } __anon$12903; // offset 0x0, size 0x2
            unsigned short looped; // offset 0x0, size 0x2
            unsigned short flags; // offset 0x0, size 0x2
        } __anon$12904; // offset 0x3E, size 0x2
        // total size: 0x2
        struct /* @class$12902engine_ngc_unity_cpp */ {
            // Members
            unsigned short looped : 1; // offset 0x0, size 0x2
        } __anon$12903; // offset 0x3E, size 0x2
        unsigned short looped : 1; // offset 0x3E, size 0x2
        unsigned short flags; // offset 0x3E, size 0x2
    };
    unsigned int handle; // offset 0x40, size 0x4
};
static struct NGCStreamInfo ENgcAudio_streams[64]; // size: 0x1100, address: 0x80533980
static int ActiveSFXHandles[64]; // size: 0x100, address: 0x80534A80
static class ERSampledata * ActiveSFXSamples[64]; // size: 0x100, address: 0x80534B80
static unsigned char ActiveSFXWasPlaying[64]; // size: 0x40, address: 0x80534C80
static class ENGCAudioStreamer * streamer; // size: 0x4, address: 0x805DBFA8
static class ENgcSFXStreamer * fx; // size: 0x4, address: 0x805DBFAC
static unsigned char bWasPlayingWhenPaused; // size: 0x1, address: 0x805DBFB0
// total size: 0xD44
class ENgcAudioSampleManager : public EAudioSampleManager {
    // Static members
    static unsigned int m_pZeroBuffer; // size: 0x4
};
class ENgcAudioSampleManager _ngcAudioSampleMan; // size: 0xD44, address: 0x80534CCC
class EAudioSampleManager * _pAudiosampleman; // size: 0x4, address: 0x805DBFB4
unsigned int m_pZeroBuffer; // size: 0x4, address: 0x805DBFB8
static unsigned int AramHeapBegin; // size: 0x4, address: 0x805DBFBC
// total size: 0x4
class ENgcClockMan : public EClockMan {};
class ENgcClockMan _ngcClockMan; // size: 0x4, address: 0x805DBFC0
class EClockMan * _pClockMan; // size: 0x4, address: 0x805DA418
class ENgcController * * _ngcCtrlPads; // size: 0x4, address: 0x805DBFC4
// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
// total size: 0x3C
class ENgcControllerManager : public EControllerManager {
    // Members
protected:
    struct PADStatus m_Pads[4]; // offset 0xA, size 0x30
};
class ENgcControllerManager _ngcctrlman; // size: 0x3C, address: 0x80535A28
unsigned char bWasInError; // size: 0x1, address: 0x805DBFC8
// total size: 0x20C
class ENgcController : public EController {
    // Members
public:
    int m_channel; // offset 0x208, size 0x4
};
// total size: 0x48
class ENgcEngine : public EEngine {
    // Static members
    static void (* sDefaultErrorHandler[17])(unsigned short, struct OSContext *); // size: 0x44
    static void * s_pArena2Lo; // size: 0x4
    static void * s_pArena2Hi; // size: 0x4
    static void * s_pArenaLo; // size: 0x4
    static void * s_pArenaHi; // size: 0x4

    // Members
public:
    unsigned short * (* statusCallback)(int); // offset 0x44, size 0x4
};
class ENgcEngine _ngcEngine; // size: 0x48, address: 0x80535A70
class EEngine * _pEngine; // size: 0x4, address: 0x805DBFCC
void * s_pArenaHi; // size: 0x4, address: 0x805DBFD0
void * s_pArenaLo; // size: 0x4, address: 0x805DBFD4
void * s_pArena2Hi; // size: 0x4, address: 0x805DBFD8
void * s_pArena2Lo; // size: 0x4, address: 0x805DBFDC
void (* sDefaultErrorHandler[17])(unsigned short, struct OSContext *); // size: 0x44, address: 0x80535AB8
static struct OSAlarm sEventAlarm; // size: 0x30, address: 0x80535B00
static int sEventAlarmTicks; // size: 0x4, address: 0x805DBFE0
void (* sEventOldPostRetrace)(unsigned long); // size: 0x4, address: 0x805DBFE4
void (* sEventOldPreRetrace)(unsigned long); // size: 0x4, address: 0x805DBFE8
static struct OSThread sEventThread; // size: 0x318, address: 0x80535B30
static int sEventThreadPriority; // size: 0x4, address: 0x805DBFEC
static char sEventThreadStack[4096]; // size: 0x1000, address: 0x80535E60
static struct OSThread sEventIdleThread; // size: 0x318, address: 0x80536E60
static int sEventIdleThreadPriority; // size: 0x4, address: 0x805DA41C
static char sEventIdleThreadStack[4096]; // size: 0x1000, address: 0x80537180
unsigned char s_bShuttingDown; // size: 0x1, address: 0x805DBFF0
int s_nPreviousErrorState; // size: 0x4, address: 0x805DBFF4
static unsigned char s_DiskError; // size: 0x1, address: 0x805DBFF8
unsigned int gNumDiskErrors; // size: 0x4, address: 0x805DBFFC
enum ResetType {
    RESET_NONE = 0,
    RESET_POWER_OFF = 1,
    RESET_RESTART_GAME = 2,
    RESET_RETURN_TO_MENU = 3,
};
static enum ResetType s_RequestedReset; // size: 0x4, address: 0x805DC000
// total size: 0x30
struct OSFontHeader {
    // Members
    unsigned short fontType; // offset 0x0, size 0x2
    unsigned short firstChar; // offset 0x2, size 0x2
    unsigned short lastChar; // offset 0x4, size 0x2
    unsigned short invalChar; // offset 0x6, size 0x2
    unsigned short ascent; // offset 0x8, size 0x2
    unsigned short descent; // offset 0xA, size 0x2
    unsigned short width; // offset 0xC, size 0x2
    unsigned short leading; // offset 0xE, size 0x2
    unsigned short cellWidth; // offset 0x10, size 0x2
    unsigned short cellHeight; // offset 0x12, size 0x2
    unsigned long sheetSize; // offset 0x14, size 0x4
    unsigned short sheetFormat; // offset 0x18, size 0x2
    unsigned short sheetColumn; // offset 0x1A, size 0x2
    unsigned short sheetRow; // offset 0x1C, size 0x2
    unsigned short sheetWidth; // offset 0x1E, size 0x2
    unsigned short sheetHeight; // offset 0x20, size 0x2
    unsigned short widthTable; // offset 0x22, size 0x2
    unsigned long sheetImage; // offset 0x24, size 0x4
    unsigned long sheetFullSize; // offset 0x28, size 0x4
    unsigned char c0; // offset 0x2C, size 0x1
    unsigned char c1; // offset 0x2D, size 0x1
    unsigned char c2; // offset 0x2E, size 0x1
    unsigned char c3; // offset 0x2F, size 0x1
};
struct OSFontHeader * s_OSFontData; // size: 0x4, address: 0x805DC004
void * s_OSFontTempArea; // size: 0x4, address: 0x805DC008
unsigned char * s_OSFontXfb; // size: 0x4, address: 0x805DC00C
unsigned int s_OSFontXfbWidth; // size: 0x4, address: 0x805DC010
unsigned int s_OSFontXfbSize; // size: 0x4, address: 0x805DC014
static unsigned short kNgcDvdErrorEnglish[4][140]; // size: 0x460, address: 0x8041CBE0
static unsigned short kNgcDvdErrorFrench[4][140]; // size: 0x460, address: 0x8041D040
static unsigned short kNgcDvdErrorGerman[4][140]; // size: 0x460, address: 0x8041D4A0
static unsigned short kNgcDvdErrorItalian[4][140]; // size: 0x460, address: 0x8041D900
static unsigned short kNgcDvdErrorSpanish[4][140]; // size: 0x460, address: 0x8041DD60
static unsigned short kNgcDvdErrorDutch[4][140]; // size: 0x460, address: 0x8041E1C0
static unsigned short kNgcDvdErrorPortuguese[4][140]; // size: 0x460, address: 0x8041E620
static unsigned short kNgcDvdErrorJapanese[4][140]; // size: 0x460, address: 0x8041EA80
static int SelectedLanguage; // size: 0x4, address: 0x805DA420
static struct DVDFileInfo s_forceRead; // size: 0x3C, address: 0x80538180
static unsigned char s_doneRead; // size: 0x1, address: 0x805DA424
static unsigned char s_dummyReadLocation[32]; // size: 0x20, address: 0x805381C0
static unsigned char needsInit; // size: 0x1, address: 0x805DA425
static unsigned char initialized; // size: 0x1, address: 0x805DC018
static unsigned short kColorLUT[16]; // size: 0x20, address: 0x80454DD0
class ENgcGraphics _ngcGfx; // size: 0x268, address: 0x805381F0
class EGraphics * _pGfx; // size: 0x4, address: 0x805DC01C
static unsigned char _ngcDrawPerfStats; // size: 0x1, address: 0x805DC020
// total size: 0x68
class ENgcDL : public EDL {};
// total size: 0x5C
class ENgcRC : public ERC {};
static class ENgcRC _ngcImmediateRC; // size: 0x5C, address: 0x80538464
class EKeyboard * _pKeyboard; // size: 0x4, address: 0x805DC024
// total size: 0x8
class ENgcKeyboard : public EKeyboard {};
class ENgcKeyboard _ngcKeyboard; // size: 0x8, address: 0x805DC028
static unsigned short VolumeTable[128]; // size: 0x100, address: 0x80454E20
static int VideoDecodeThreadCreated; // size: 0x4, address: 0x805DC030
static struct OSThread VideoDecodeThread; // size: 0x318, address: 0x805384C0
static unsigned char VideoDecodeThreadStack[4096]; // size: 0x1000, address: 0x805387D8
// total size: 0x20
struct OSMessageQueue {
    // Members
    struct OSThreadQueue queueSend; // offset 0x0, size 0x8
    struct OSThreadQueue queueReceive; // offset 0x8, size 0x8
    void * msgArray; // offset 0x10, size 0x4
    long msgCount; // offset 0x14, size 0x4
    long firstIndex; // offset 0x18, size 0x4
    long usedCount; // offset 0x1C, size 0x4
};
static struct OSMessageQueue FreeTextureSetQueue; // size: 0x20, address: 0x805397D8
static struct OSMessageQueue DecodedTextureSetQueue; // size: 0x20, address: 0x805397F8
static void * FreeTextureSetMessage[3]; // size: 0xC, address: 0x80539818
static void * DecodedTextureSetMessage[3]; // size: 0xC, address: 0x80539824
static int First; // size: 0x4, address: 0x805DC034
static int AudioDecodeThreadCreated; // size: 0x4, address: 0x805DC038
static struct OSThread AudioDecodeThread; // size: 0x318, address: 0x80539830
static unsigned char AudioDecodeThreadStack[4096]; // size: 0x1000, address: 0x80539B48
static struct OSMessageQueue FreeAudioBufferQueue; // size: 0x20, address: 0x8053AB48
static struct OSMessageQueue DecodedAudioBufferQueue; // size: 0x20, address: 0x8053AB68
static void * FreeAudioBufferMessage[3]; // size: 0xC, address: 0x8053AB88
static void * DecodedAudioBufferMessage[3]; // size: 0xC, address: 0x8053AB94
// total size: 0x30
struct THPHeader {
    // Members
    char magic[4]; // offset 0x0, size 0x4
    unsigned long version; // offset 0x4, size 0x4
    unsigned long bufSize; // offset 0x8, size 0x4
    unsigned long audioMaxSamples; // offset 0xC, size 0x4
    float frameRate; // offset 0x10, size 0x4
    unsigned long numFrames; // offset 0x14, size 0x4
    unsigned long firstFrameSize; // offset 0x18, size 0x4
    unsigned long movieDataSize; // offset 0x1C, size 0x4
    unsigned long compInfoDataOffsets; // offset 0x20, size 0x4
    unsigned long offsetDataOffsets; // offset 0x24, size 0x4
    unsigned long movieDataOffsets; // offset 0x28, size 0x4
    unsigned long finalFrameDataOffsets; // offset 0x2C, size 0x4
};
// total size: 0x14
struct THPFrameCompInfo {
    // Members
    unsigned long numComponents; // offset 0x0, size 0x4
    unsigned char frameComp[16]; // offset 0x4, size 0x10
};
// total size: 0xC
struct THPVideoInfo {
    // Members
    unsigned long xSize; // offset 0x0, size 0x4
    unsigned long ySize; // offset 0x4, size 0x4
    unsigned long videoType; // offset 0x8, size 0x4
};
// total size: 0x10
struct THPAudioInfo {
    // Members
    unsigned long sndChannels; // offset 0x0, size 0x4
    unsigned long sndFrequency; // offset 0x4, size 0x4
    unsigned long sndNumSamples; // offset 0x8, size 0x4
    unsigned long sndNumTracks; // offset 0xC, size 0x4
};
// total size: 0x10
struct THPTextureSet {
    // Members
    unsigned char * ytexture; // offset 0x0, size 0x4
    unsigned char * utexture; // offset 0x4, size 0x4
    unsigned char * vtexture; // offset 0x8, size 0x4
    int frameNumber; // offset 0xC, size 0x4
};
// total size: 0xC
struct THPAudioBuffer {
    // Members
    signed short * buffer; // offset 0x0, size 0x4
    signed short * curPtr; // offset 0x4, size 0x4
    unsigned int validSample; // offset 0x8, size 0x4
};
// total size: 0x1D0
struct THPPlayer {
    // Members
    struct DVDFileInfo fileInfo; // offset 0x0, size 0x3C
    struct THPHeader header; // offset 0x3C, size 0x30
    struct THPFrameCompInfo compInfo; // offset 0x6C, size 0x14
    struct THPVideoInfo videoInfo; // offset 0x80, size 0xC
    struct THPAudioInfo audioInfo; // offset 0x8C, size 0x10
    void * thpWork; // offset 0x9C, size 0x4
    unsigned char open; // offset 0xA0, size 0x1
    unsigned char state; // offset 0xA1, size 0x1
    unsigned char internalState; // offset 0xA2, size 0x1
    unsigned char playFlag; // offset 0xA3, size 0x1
    unsigned char audioExist; // offset 0xA4, size 0x1
    int dvdError; // offset 0xA8, size 0x4
    int videoError; // offset 0xAC, size 0x4
    unsigned char onMemory; // offset 0xB0, size 0x1
    unsigned char * movieData; // offset 0xB4, size 0x4
    int initOffset; // offset 0xB8, size 0x4
    int initReadSize; // offset 0xBC, size 0x4
    int initReadFrame; // offset 0xC0, size 0x4
    long long retraceCount; // offset 0xC8, size 0x8
    int prevCount; // offset 0xD0, size 0x4
    int curCount; // offset 0xD4, size 0x4
    int videoAhead; // offset 0xD8, size 0x4
    float curVolume; // offset 0xDC, size 0x4
    float targetVolume; // offset 0xE0, size 0x4
    float deltaVolume; // offset 0xE4, size 0x4
    int rampCount; // offset 0xE8, size 0x4
    int curAudioTrack; // offset 0xEC, size 0x4
    int curVideoNumber; // offset 0xF0, size 0x4
    int curAudioNumber; // offset 0xF4, size 0x4
    struct THPTextureSet * dispTextureSet; // offset 0xF8, size 0x4
    struct THPAudioBuffer * playAudioBuffer; // offset 0xFC, size 0x4
    struct THPReadBuffer readBuffer[10]; // offset 0x100, size 0x78
    struct THPTextureSet textureSet[3]; // offset 0x178, size 0x30
    struct THPAudioBuffer audioBuffer[3]; // offset 0x1A8, size 0x24
};
static struct THPPlayer ActivePlayer; // size: 0x1D0, address: 0x8053ABA0
static int ReadThreadCreated; // size: 0x4, address: 0x805DC03C
static struct OSMessageQueue FreeReadBufferQueue; // size: 0x20, address: 0x8053AD70
static struct OSMessageQueue ReadedBufferQueue; // size: 0x20, address: 0x8053AD90
static struct OSMessageQueue ReadedBufferQueue2; // size: 0x20, address: 0x8053ADB0
static void * FreeReadBufferMessage[10]; // size: 0x28, address: 0x8053ADD0
static void * ReadedBufferMessage[10]; // size: 0x28, address: 0x8053ADF8
static void * ReadedBufferMessage2[10]; // size: 0x28, address: 0x8053AE20
static struct OSThread ReadThread; // size: 0x318, address: 0x8053AE48
static unsigned char ReadThreadStack[4096]; // size: 0x1000, address: 0x8053B160
static int WorkBuffer[16]; // size: 0x40, address: 0x8053C160
static struct OSMessageQueue PrepareReadyQueue; // size: 0x20, address: 0x8053C1A0
static struct OSMessageQueue UsedTextureSetQueue; // size: 0x20, address: 0x8053C1C0
static void * PrepareReadyMessage; // size: 0x4, address: 0x805DC040
static void * UsedTextureSetMessage[3]; // size: 0xC, address: 0x8053C1E0
static void (* OldVIPostCallback)(unsigned long); // size: 0x4, address: 0x805DC044
static signed short SoundBuffer[2][320]; // size: 0x500, address: 0x8053C200
static int SoundBufferIndex; // size: 0x4, address: 0x805DC048
static void (* OldAIDCallback)(); // size: 0x4, address: 0x805DC04C
static signed short * LastAudioBuffer; // size: 0x4, address: 0x805DC050
static signed short * CurAudioBuffer; // size: 0x4, address: 0x805DC054
static int AudioSystem; // size: 0x4, address: 0x805DC058
static unsigned char gIsSoundPaused; // size: 0x1, address: 0x805DC05C
static unsigned char miniaudioboot; // size: 0x1, address: 0x805DC05D
// total size: 0x5C
class ENgcMovie : public EMovie {
    // Members
    unsigned int m_audioTrack; // offset 0xC, size 0x4
    int m_frame; // offset 0x10, size 0x4
    unsigned int m_start; // offset 0x14, size 0x4
    int m_x; // offset 0x18, size 0x4
    int m_y; // offset 0x1C, size 0x4
    unsigned char m_initialized; // offset 0x20, size 0x1
    struct _GXRenderModeObj * m_rmode; // offset 0x24, size 0x4
    struct THPVideoInfo m_videoInfo; // offset 0x28, size 0xC
    struct THPAudioInfo m_audioInfo; // offset 0x34, size 0x10
    class EAllocGroup m_allocGroup; // offset 0x44, size 0x18
};
static unsigned char bPausedDueToDiskError; // size: 0x1, address: 0x805DC05E
static unsigned char bWasPlayingWhenPaused; // size: 0x1, address: 0x805DC05F
// total size: 0xC
struct THPReadBuffer {
    // Members
    unsigned char * ptr; // offset 0x0, size 0x4
    int frameNumber; // offset 0x4, size 0x4
    unsigned char isValid; // offset 0x8, size 0x1
};
unsigned char _ngcPerfStatsEnabled; // size: 0x1, address: 0x805DC060
static int currentPerf0Stat; // size: 0x4, address: 0x805DC064
// total size: 0x40
struct ENgcPerfStat {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    unsigned int cycles; // offset 0x4, size 0x4
    unsigned int statid; // offset 0x8, size 0x4
    char text[50]; // offset 0xC, size 0x32
};
struct ENgcPerfStat _ngcPerf0Stats[12]; // size: 0x300, address: 0x80454FA0
int _ngcPerf0StatCount; // size: 0x4, address: 0x805DA434
static unsigned char _ngcUseGXDisplayList; // size: 0x1, address: 0x805DA438
static struct _GXLightObj gBaseDirLightObj; // size: 0x40, address: 0x8053C700
static struct _GXLightObj gBasePointLightObj; // size: 0x40, address: 0x8053C740
class ERenderer * _pRend; // size: 0x4, address: 0x805DC068
class ENgcRenderer _ngcRenderer; // size: 0x5860, address: 0x8053C790
int _ngcSkip2D; // size: 0x4, address: 0x805DC06C
int _vertsperframe; // size: 0x4, address: 0x805DC070
float _aveclockspervert; // size: 0x4, address: 0x805DC074
float _avestriplength; // size: 0x4, address: 0x805DC078
float _ngcAveClocksPerVert; // size: 0x4, address: 0x805DC07C
float _ngcAveStripLength; // size: 0x4, address: 0x805DC080
int _ngcStrips; // size: 0x4, address: 0x805DC084
int _ngcVerts; // size: 0x4, address: 0x805DC088
int _ngcFrameCount; // size: 0x4, address: 0x805DC08C
int _ngcStateChangesPerFrame; // size: 0x4, address: 0x805DC090
static int _ngcScrambleRectPixels; // size: 0x4, address: 0x805DA43C
struct _GXColor _gxBlack; // size: 0x4, address: 0x805E00E8
struct _GXColor _gxWhite; // size: 0x4, address: 0x805DEF4C
static struct _GXColor _gxWaitColor; // size: 0x4, address: 0x805DC094
int _tvHZ; // size: 0x4, address: 0x805DC098
float _gxAmbientLightMultiplier; // size: 0x4, address: 0x805DA440
float _gxDiffuseLightMultiplier; // size: 0x4, address: 0x805DA444
static unsigned char clear_alpha; // size: 0x1, address: 0x805DA448
static float _ngcAlphaTestThresholdMultiplier; // size: 0x4, address: 0x805DA44C
unsigned short s_lastTokenFromGX; // size: 0x2, address: 0x805DC09C
unsigned char s_breakPointSet; // size: 0x1, address: 0x805DC09E
class EMutex s_copyMutex; // size: 0x1C, address: 0x80541FFC
unsigned char s_frameAvailable; // size: 0x1, address: 0x805DC09F
long s_missedVBlanks; // size: 0x4, address: 0x805DA450
void * s_frameXfb; // size: 0x4, address: 0x805DC0A0
class EEvent * s_frameEvent; // size: 0x4, address: 0x805DC0A4
class EMutex _ngcCreateGXMutex; // size: 0x1C, address: 0x80542024
void (ENgcRenderer::* m_jumpTable[77])(void *, void *, struct EDLEntry *); // size: 0x134, address: 0x804552A0
static unsigned int lastSwap; // size: 0x4, address: 0x805DC0A8
static int numWeights[4]; // size: 0x10, address: 0x80542040
static unsigned char singleOutput; // size: 0x1, address: 0x805DA454
static unsigned char singleOutput; // size: 0x1, address: 0x805DA455
static unsigned char singleOutput; // size: 0x1, address: 0x805DA456
static unsigned char singleOutput; // size: 0x1, address: 0x805DA457
static unsigned char singleOutput; // size: 0x1, address: 0x805DA458
static enum _GXCompare _gxZCompareMap[7]; // size: 0x1C, address: 0x8041EEE0
static enum _GXCompare _gxAlphaCompareMap[8]; // size: 0x20, address: 0x8041EF00
static class ENgcRenderSurface * s_pRSurface; // size: 0x4, address: 0x805DC0AC
static unsigned char singleOutput; // size: 0x1, address: 0x805DA459
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45A
static unsigned char bPausedDueToDiskError; // size: 0x1, address: 0x805DC0B0
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45B
static int count; // size: 0x4, address: 0x805DC0B4
unsigned char kVerticalFilterOn[7]; // size: 0x7, address: 0x805DEF90
unsigned char kAASamplePatternOn[12][2]; // size: 0x18, address: 0x8041EF20
unsigned char garbageBuffer[2560]; // size: 0xA00, address: 0x80542060
unsigned int ENgcRSTevFlagMap[16]; // size: 0x40, address: 0x80455670
unsigned int ENgcRSLightFlagMap[4]; // size: 0x10, address: 0x804556B0
enum _GXLightID {
    GX_LIGHT0 = 1,
    GX_LIGHT1 = 2,
    GX_LIGHT2 = 4,
    GX_LIGHT3 = 8,
    GX_LIGHT4 = 16,
    GX_LIGHT5 = 32,
    GX_LIGHT6 = 64,
    GX_LIGHT7 = 128,
    GX_MAX_LIGHT = 256,
    GX_LIGHT_NULL = 0,
};
static enum _GXLightID _gxLightId[8]; // size: 0x20, address: 0x8041EF38
struct ENgcRenderStateStack s_stateStack[9]; // size: 0x168, address: 0x80542A60
struct ENgcRSViewportStack s_viewportStack[5]; // size: 0xC8, address: 0x80542BC8
int s_stackPos; // size: 0x4, address: 0x805DC0B8
int s_vpStackPos; // size: 0x4, address: 0x805DC0BC
float rectOrthoMtx[4][4]; // size: 0x40, address: 0x80542C90
float screenOrthoMtx[4][4]; // size: 0x40, address: 0x80542CD0
float projMtx[4][4]; // size: 0x40, address: 0x80542D10
enum _GXProjectionType {
    GX_PERSPECTIVE = 0,
    GX_ORTHOGRAPHIC = 1,
};
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45C
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45D
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45E
static unsigned char singleOutput; // size: 0x1, address: 0x805DA45F
static unsigned char singleOutput; // size: 0x1, address: 0x805DA460
static unsigned char singleOutput; // size: 0x1, address: 0x805DA461
static unsigned char singleOutput; // size: 0x1, address: 0x805DA462
static unsigned char singleOutput; // size: 0x1, address: 0x805DA463
static unsigned char singleOutput; // size: 0x1, address: 0x805DA464
static unsigned char singleOutput; // size: 0x1, address: 0x805DA465
static unsigned char singleOutput; // size: 0x1, address: 0x805DA466
static unsigned char singleOutput; // size: 0x1, address: 0x805DA467
static unsigned char singleOutput; // size: 0x1, address: 0x805DA468
static unsigned char singleOutput; // size: 0x1, address: 0x805DA469
static unsigned char singleOutput; // size: 0x1, address: 0x805DA46A
static unsigned char singleOutput; // size: 0x1, address: 0x805DA46B
static unsigned char singleOutput; // size: 0x1, address: 0x805DA46C
static unsigned char singleOutput; // size: 0x1, address: 0x805DA46D
static unsigned char singleOutput; // size: 0x1, address: 0x805DA46E
// total size: 0x2C
class ENgcRenderSurface : public ERenderSurface {
    // Members
protected:
    unsigned char m_isSelected; // offset 0x24, size 0x1
    class ENgcTexture * m_pTexture; // offset 0x28, size 0x4
};
// total size: 0x30
struct _AXPBMIX {
    // Members
    unsigned short vL; // offset 0x0, size 0x2
    unsigned short vDeltaL; // offset 0x2, size 0x2
    unsigned short vR; // offset 0x4, size 0x2
    unsigned short vDeltaR; // offset 0x6, size 0x2
    unsigned short vAuxAL; // offset 0x8, size 0x2
    unsigned short vDeltaAuxAL; // offset 0xA, size 0x2
    unsigned short vAuxAR; // offset 0xC, size 0x2
    unsigned short vDeltaAuxAR; // offset 0xE, size 0x2
    unsigned short vAuxBL; // offset 0x10, size 0x2
    unsigned short vDeltaAuxBL; // offset 0x12, size 0x2
    unsigned short vAuxBR; // offset 0x14, size 0x2
    unsigned short vDeltaAuxBR; // offset 0x16, size 0x2
    unsigned short vAuxCL; // offset 0x18, size 0x2
    unsigned short vDeltaAuxCL; // offset 0x1A, size 0x2
    unsigned short vAuxCR; // offset 0x1C, size 0x2
    unsigned short vDeltaAuxCR; // offset 0x1E, size 0x2
    unsigned short vS; // offset 0x20, size 0x2
    unsigned short vDeltaS; // offset 0x22, size 0x2
    unsigned short vAuxAS; // offset 0x24, size 0x2
    unsigned short vDeltaAuxAS; // offset 0x26, size 0x2
    unsigned short vAuxBS; // offset 0x28, size 0x2
    unsigned short vDeltaAuxBS; // offset 0x2A, size 0x2
    unsigned short vAuxCS; // offset 0x2C, size 0x2
    unsigned short vDeltaAuxCS; // offset 0x2E, size 0x2
};
// total size: 0xE
struct _AXPBITD {
    // Members
    unsigned short flag; // offset 0x0, size 0x2
    unsigned short bufferHi; // offset 0x2, size 0x2
    unsigned short bufferLo; // offset 0x4, size 0x2
    unsigned short shiftL; // offset 0x6, size 0x2
    unsigned short shiftR; // offset 0x8, size 0x2
    unsigned short targetShiftL; // offset 0xA, size 0x2
    unsigned short targetShiftR; // offset 0xC, size 0x2
};
// total size: 0x18
struct _AXPBDPOP {
    // Members
    signed short aL; // offset 0x0, size 0x2
    signed short aAuxAL; // offset 0x2, size 0x2
    signed short aAuxBL; // offset 0x4, size 0x2
    signed short aAuxCL; // offset 0x6, size 0x2
    signed short aR; // offset 0x8, size 0x2
    signed short aAuxAR; // offset 0xA, size 0x2
    signed short aAuxBR; // offset 0xC, size 0x2
    signed short aAuxCR; // offset 0xE, size 0x2
    signed short aS; // offset 0x10, size 0x2
    signed short aAuxAS; // offset 0x12, size 0x2
    signed short aAuxBS; // offset 0x14, size 0x2
    signed short aAuxCS; // offset 0x16, size 0x2
};
// total size: 0x4
struct _AXPBVE {
    // Members
    unsigned short currentVolume; // offset 0x0, size 0x2
    signed short currentDelta; // offset 0x2, size 0x2
};
// total size: 0x6
struct _AXPBADPCMLOOP {
    // Members
    unsigned short loop_pred_scale; // offset 0x0, size 0x2
    unsigned short loop_yn1; // offset 0x2, size 0x2
    unsigned short loop_yn2; // offset 0x4, size 0x2
};
// total size: 0x8
struct _AXPBLPF {
    // Members
    unsigned short on; // offset 0x0, size 0x2
    unsigned short yn1; // offset 0x2, size 0x2
    unsigned short a0; // offset 0x4, size 0x2
    unsigned short b0; // offset 0x6, size 0x2
};
// total size: 0x14
struct _AXPBBIQUAD {
    // Members
    unsigned short on; // offset 0x0, size 0x2
    unsigned short xn1; // offset 0x2, size 0x2
    unsigned short xn2; // offset 0x4, size 0x2
    unsigned short yn1; // offset 0x6, size 0x2
    unsigned short yn2; // offset 0x8, size 0x2
    unsigned short b0; // offset 0xA, size 0x2
    unsigned short b1; // offset 0xC, size 0x2
    unsigned short b2; // offset 0xE, size 0x2
    unsigned short a1; // offset 0x10, size 0x2
    unsigned short a2; // offset 0x12, size 0x2
};
// total size: 0x20
struct _AXPBRMTMIX {
    // Members
    unsigned short vMain0; // offset 0x0, size 0x2
    unsigned short vDeltaMain0; // offset 0x2, size 0x2
    unsigned short vAux0; // offset 0x4, size 0x2
    unsigned short vDeltaAux0; // offset 0x6, size 0x2
    unsigned short vMain1; // offset 0x8, size 0x2
    unsigned short vDeltaMain1; // offset 0xA, size 0x2
    unsigned short vAux1; // offset 0xC, size 0x2
    unsigned short vDeltaAux1; // offset 0xE, size 0x2
    unsigned short vMain2; // offset 0x10, size 0x2
    unsigned short vDeltaMain2; // offset 0x12, size 0x2
    unsigned short vAux2; // offset 0x14, size 0x2
    unsigned short vDeltaAux2; // offset 0x16, size 0x2
    unsigned short vMain3; // offset 0x18, size 0x2
    unsigned short vDeltaMain3; // offset 0x1A, size 0x2
    unsigned short vAux3; // offset 0x1C, size 0x2
    unsigned short vDeltaAux3; // offset 0x1E, size 0x2
};
// total size: 0x10
struct _AXPBRMTDPOP {
    // Members
    signed short aMain0; // offset 0x0, size 0x2
    signed short aMain1; // offset 0x2, size 0x2
    signed short aMain2; // offset 0x4, size 0x2
    signed short aMain3; // offset 0x6, size 0x2
    signed short aAux0; // offset 0x8, size 0x2
    signed short aAux1; // offset 0xA, size 0x2
    signed short aAux2; // offset 0xC, size 0x2
    signed short aAux3; // offset 0xE, size 0x2
};
// total size: 0xA
struct _AXPBRMTSRC {
    // Members
    unsigned short currentAddressFrac; // offset 0x0, size 0x2
    unsigned short last_samples[4]; // offset 0x2, size 0x8
};
union __AXPBRMTIIR {
    struct _AXPBLPF lpf; // offset 0x0, size 0x8
    struct _AXPBBIQUAD biquad; // offset 0x0, size 0x14
};
// total size: 0x140
struct _AXPB {
    // Members
    unsigned short nextHi; // offset 0x0, size 0x2
    unsigned short nextLo; // offset 0x2, size 0x2
    unsigned short currHi; // offset 0x4, size 0x2
    unsigned short currLo; // offset 0x6, size 0x2
    unsigned short srcSelect; // offset 0x8, size 0x2
    unsigned short coefSelect; // offset 0xA, size 0x2
    unsigned long mixerCtrl; // offset 0xC, size 0x4
    unsigned short state; // offset 0x10, size 0x2
    unsigned short type; // offset 0x12, size 0x2
    struct _AXPBMIX mix; // offset 0x14, size 0x30
    struct _AXPBITD itd; // offset 0x44, size 0xE
    struct _AXPBDPOP dpop; // offset 0x52, size 0x18
    struct _AXPBVE ve; // offset 0x6A, size 0x4
    struct _AXPBADDR addr; // offset 0x6E, size 0x10
    struct _AXPBADPCM adpcm; // offset 0x7E, size 0x28
    struct _AXPBSRC src; // offset 0xA6, size 0xE
    struct _AXPBADPCMLOOP adpcmLoop; // offset 0xB4, size 0x6
    struct _AXPBLPF lpf; // offset 0xBA, size 0x8
    struct _AXPBBIQUAD biquad; // offset 0xC2, size 0x14
    unsigned short remote; // offset 0xD6, size 0x2
    unsigned short rmtMixerCtrl; // offset 0xD8, size 0x2
    struct _AXPBRMTMIX rmtMix; // offset 0xDA, size 0x20
    struct _AXPBRMTDPOP rmtDpop; // offset 0xFA, size 0x10
    struct _AXPBRMTSRC rmtSrc; // offset 0x10A, size 0xA
    union __AXPBRMTIIR rmtIIR; // offset 0x114, size 0x14
    unsigned short pad[12]; // offset 0x128, size 0x18
};
// total size: 0x168
struct _AXVPB {
    // Members
    void * next; // offset 0x0, size 0x4
    void * prev; // offset 0x4, size 0x4
    void * next1; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    void (* callback)(void *); // offset 0x10, size 0x4
    unsigned long userContext; // offset 0x14, size 0x4
    unsigned long index; // offset 0x18, size 0x4
    unsigned long sync; // offset 0x1C, size 0x4
    unsigned long depop; // offset 0x20, size 0x4
    void * itdBuffer; // offset 0x24, size 0x4
    struct _AXPB pb; // offset 0x28, size 0x140
};
// total size: 0x1
struct /* @class$44762engine_ngc_unity_cpp */ {
    // Members
    unsigned char play_under_way : 1; // offset 0x0, size 0x1
    unsigned char paused : 1; // offset 0x0, size 0x1
    unsigned char looped : 1; // offset 0x0, size 0x1
    unsigned char on_queue : 1; // offset 0x0, size 0x1
};
union /* @class$44761engine_ngc_unity_cpp */ {
    // total size: 0x1
    struct /* @class$44762engine_ngc_unity_cpp */ {
        // Members
        unsigned char play_under_way : 1; // offset 0x0, size 0x1
        unsigned char paused : 1; // offset 0x0, size 0x1
        unsigned char looped : 1; // offset 0x0, size 0x1
        unsigned char on_queue : 1; // offset 0x0, size 0x1
    } __anon$44763; // offset 0x0, size 0x1
    unsigned char play_under_way; // offset 0x0, size 0x1
    unsigned char paused; // offset 0x0, size 0x1
    unsigned char looped; // offset 0x0, size 0x1
    unsigned char on_queue; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x0, size 0x1
};
// total size: 0x24
struct Voice {
    // Members
    struct _AXVPB * voice; // offset 0x0, size 0x4
    struct sDSPADPCM * current_sample; // offset 0x4, size 0x4
    unsigned int aram_start; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
    unsigned char vol; // offset 0x10, size 0x1
    unsigned char pan; // offset 0x11, size 0x1
    struct Voice * parent; // offset 0x14, size 0x4
    struct Voice * child; // offset 0x18, size 0x4
    struct Voice * queuenext; // offset 0x1C, size 0x4
    union { // inferred
        union /* @class$44761engine_ngc_unity_cpp */ {
            // total size: 0x1
            struct /* @class$44762engine_ngc_unity_cpp */ {
                // Members
                unsigned char play_under_way : 1; // offset 0x0, size 0x1
                unsigned char paused : 1; // offset 0x0, size 0x1
                unsigned char looped : 1; // offset 0x0, size 0x1
                unsigned char on_queue : 1; // offset 0x0, size 0x1
            } __anon$44763; // offset 0x0, size 0x1
            unsigned char play_under_way; // offset 0x0, size 0x1
            unsigned char paused; // offset 0x0, size 0x1
            unsigned char looped; // offset 0x0, size 0x1
            unsigned char on_queue; // offset 0x0, size 0x1
            unsigned char flags; // offset 0x0, size 0x1
        } __anon$44764; // offset 0x20, size 0x1
        // total size: 0x1
        struct /* @class$44762engine_ngc_unity_cpp */ {
            // Members
            unsigned char play_under_way : 1; // offset 0x0, size 0x1
            unsigned char paused : 1; // offset 0x0, size 0x1
            unsigned char looped : 1; // offset 0x0, size 0x1
            unsigned char on_queue : 1; // offset 0x0, size 0x1
        } __anon$44763; // offset 0x20, size 0x1
        unsigned char play_under_way : 1; // offset 0x20, size 0x1
        unsigned char paused : 1; // offset 0x20, size 0x1
        unsigned char looped : 1; // offset 0x20, size 0x1
        unsigned char on_queue : 1; // offset 0x20, size 0x1
        unsigned char flags; // offset 0x20, size 0x1
    };
};
static struct Voice ENgcSFXStreamer_voices[62]; // size: 0x8B8, address: 0x80542D50
static unsigned char ENgcSFXStreamer_old_irq_state; // size: 0x1, address: 0x805DC0C0
static unsigned int ENgcSFXStreamer_irq_counter; // size: 0x4, address: 0x805DC0C4
// total size: 0x1
class ENgcSFXStreamer {};
// total size: 0x28
struct _AXPBADPCM {
    // Members
    unsigned short a[8][2]; // offset 0x0, size 0x20
    unsigned short gain; // offset 0x20, size 0x2
    unsigned short pred_scale; // offset 0x22, size 0x2
    unsigned short yn1; // offset 0x24, size 0x2
    unsigned short yn2; // offset 0x26, size 0x2
};
// total size: 0x10
struct _AXPBADDR {
    // Members
    unsigned short loopFlag; // offset 0x0, size 0x2
    unsigned short format; // offset 0x2, size 0x2
    unsigned short loopAddressHi; // offset 0x4, size 0x2
    unsigned short loopAddressLo; // offset 0x6, size 0x2
    unsigned short endAddressHi; // offset 0x8, size 0x2
    unsigned short endAddressLo; // offset 0xA, size 0x2
    unsigned short currentAddressHi; // offset 0xC, size 0x2
    unsigned short currentAddressLo; // offset 0xE, size 0x2
};
// total size: 0xE
struct _AXPBSRC {
    // Members
    unsigned short ratioHi; // offset 0x0, size 0x2
    unsigned short ratioLo; // offset 0x2, size 0x2
    unsigned short currentAddressFrac; // offset 0x4, size 0x2
    unsigned short last_samples[4]; // offset 0x6, size 0x8
};
// total size: 0xC
class TGrowPool : public EGrowPool {};
// total size: 0x3B8
class ENgcScheduler : public EScheduler {
    // Members
protected:
    class EMsgQueue m_commandQueue; // offset 0x344, size 0x4C
    class TGrowPool m_commandPool; // offset 0x390, size 0xC
    class EMutex m_commandPoolMutex; // offset 0x39C, size 0x1C
};
class ENgcScheduler _ngcSched; // size: 0x3B8, address: 0x80543618
class EScheduler * _pSched; // size: 0x4, address: 0x805DC0C8
// total size: 0x48
class ENgcShader : public EShader {};
enum StreamState {
    SS_FREE = 0,
    SS_INACTIVE = 1,
    SS_INITIAL_FILL = 2,
    SS_STEREOSYNCWAIT = 3,
    SS_STEREOACTIVEWAIT = 4,
    SS_ACTIVE = 5,
};
// total size: 0x1
struct /* @class$45457engine_ngc_unity_cpp */ {
    // Members
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char paused : 1; // offset 0x0, size 0x1
    unsigned char start_shutdown : 1; // offset 0x0, size 0x1
    unsigned char dvd_pending : 1; // offset 0x0, size 0x1
    unsigned char shutdown_pending : 1; // offset 0x0, size 0x1
};
union /* @class$45456engine_ngc_unity_cpp */ {
    // total size: 0x1
    struct /* @class$45457engine_ngc_unity_cpp */ {
        // Members
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char paused : 1; // offset 0x0, size 0x1
        unsigned char start_shutdown : 1; // offset 0x0, size 0x1
        unsigned char dvd_pending : 1; // offset 0x0, size 0x1
        unsigned char shutdown_pending : 1; // offset 0x0, size 0x1
    } __anon$45458; // offset 0x0, size 0x1
    unsigned char active; // offset 0x0, size 0x1
    unsigned char paused; // offset 0x0, size 0x1
    unsigned char start_shutdown; // offset 0x0, size 0x1
    unsigned char dvd_pending; // offset 0x0, size 0x1
    unsigned char shutdown_pending; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x0, size 0x1
};
// total size: 0x78
struct Stream {
    // Members
    enum StreamState state; // offset 0x0, size 0x4
    unsigned int handle; // offset 0x4, size 0x4
    struct Stream * child; // offset 0x8, size 0x4
    struct Stream * parent; // offset 0xC, size 0x4
    struct NGCStreamInfo * info; // offset 0x10, size 0x4
    unsigned char vol; // offset 0x14, size 0x1
    unsigned char pan; // offset 0x15, size 0x1
    unsigned int aram_start; // offset 0x18, size 0x4
    struct _AXVPB * voice; // offset 0x1C, size 0x4
    unsigned long last_position; // offset 0x20, size 0x4
    struct DVDFileInfo file_info; // offset 0x24, size 0x3C
    unsigned int play_offset; // offset 0x60, size 0x4
    unsigned int total_length; // offset 0x64, size 0x4
    void * buffer; // offset 0x68, size 0x4
    unsigned int buffer_length; // offset 0x6C, size 0x4
    unsigned int buffer_samples; // offset 0x70, size 0x4
    unsigned char buffer_index; // offset 0x74, size 0x1
    union { // inferred
        union /* @class$45456engine_ngc_unity_cpp */ {
            // total size: 0x1
            struct /* @class$45457engine_ngc_unity_cpp */ {
                // Members
                unsigned char active : 1; // offset 0x0, size 0x1
                unsigned char paused : 1; // offset 0x0, size 0x1
                unsigned char start_shutdown : 1; // offset 0x0, size 0x1
                unsigned char dvd_pending : 1; // offset 0x0, size 0x1
                unsigned char shutdown_pending : 1; // offset 0x0, size 0x1
            } __anon$45458; // offset 0x0, size 0x1
            unsigned char active; // offset 0x0, size 0x1
            unsigned char paused; // offset 0x0, size 0x1
            unsigned char start_shutdown; // offset 0x0, size 0x1
            unsigned char dvd_pending; // offset 0x0, size 0x1
            unsigned char shutdown_pending; // offset 0x0, size 0x1
            unsigned char flags; // offset 0x0, size 0x1
        } __anon$45459; // offset 0x75, size 0x1
        // total size: 0x1
        struct /* @class$45457engine_ngc_unity_cpp */ {
            // Members
            unsigned char active : 1; // offset 0x0, size 0x1
            unsigned char paused : 1; // offset 0x0, size 0x1
            unsigned char start_shutdown : 1; // offset 0x0, size 0x1
            unsigned char dvd_pending : 1; // offset 0x0, size 0x1
            unsigned char shutdown_pending : 1; // offset 0x0, size 0x1
        } __anon$45458; // offset 0x75, size 0x1
        unsigned char active : 1; // offset 0x75, size 0x1
        unsigned char paused : 1; // offset 0x75, size 0x1
        unsigned char start_shutdown : 1; // offset 0x75, size 0x1
        unsigned char dvd_pending : 1; // offset 0x75, size 0x1
        unsigned char shutdown_pending : 1; // offset 0x75, size 0x1
        unsigned char flags; // offset 0x75, size 0x1
    };
};
struct Stream ENGCAudioStreamer_streams[2]; // size: 0xF0, address: 0x805439D0
unsigned int next_stream_handle; // size: 0x4, address: 0x805DC0CC
unsigned char ENGCAudioStreamer_old_irq_state; // size: 0x1, address: 0x805DC0D0
unsigned int ENGCAudioStreamer_irq_counter; // size: 0x4, address: 0x805DC0D4
// total size: 0x1
class ENGCAudioStreamer {};
int _ngcTexCount; // size: 0x4, address: 0x805DC0D8
int _ngcTexMem; // size: 0x4, address: 0x805DC0DC
static enum _GXTlut sTlut; // size: 0x4, address: 0x805DC0E0
static float lodBias; // size: 0x4, address: 0x805DC0E4
// total size: 0x98
class ENgcTextureC4 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4
};
// total size: 0xD0
class ENgcTextureC4_32 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4

    // Members
protected:
    struct _GXTexObj m_texObj2; // offset 0x98, size 0x20
    struct _GXTlutObj m_tlutObj2; // offset 0xB8, size 0xC
    enum _GXTlut m_tlutName2; // offset 0xC4, size 0x4
    unsigned char * m_pPaletteRG; // offset 0xC8, size 0x4
    unsigned char * m_pPaletteBA; // offset 0xCC, size 0x4
};
// total size: 0x98
class ENgcTextureC8 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4
};
// total size: 0xD4
class ENgcTextureC8_32 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4

    // Members
protected:
    struct _GXTexObj m_texObj2; // offset 0x98, size 0x20
    struct _GXTlutObj m_tlutObj2; // offset 0xB8, size 0xC
    enum _GXTlut m_tlutName2; // offset 0xC4, size 0x4
    unsigned char * m_pPaletteRG; // offset 0xC8, size 0x4
    unsigned char * m_pPaletteBA; // offset 0xCC, size 0x4
    unsigned long * m_pUpdatePalette; // offset 0xD0, size 0x4
};
// total size: 0x98
class ENgcTextureCMPR : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4
};
// total size: 0x98
class ENgcTextureRGB5A3 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4
};
// total size: 0x98
class ENgcTextureRGBA8 : public ENgcTextureBase {
    // Static members
    static int kPixelsPerTileCol; // size: 0x4
    static int kPixelsPerTileRow; // size: 0x4
};
// total size: 0x1
class ENgcTextureUtil {};
static unsigned int m_fbSize; // size: 0x4, address: 0x805DC0E8
static unsigned char * m_xfb; // size: 0x4, address: 0x805DC0EC
static unsigned int XfbWidth; // size: 0x4, address: 0x805DC0F0
// total size: 0xC
struct XFColor_s {
    // Members
    unsigned int Y; // offset 0x0, size 0x4
    unsigned int Cb; // offset 0x4, size 0x4
    unsigned int Cr; // offset 0x8, size 0x4
};
static struct XFColor_s XFcolor[8]; // size: 0x60, address: 0x804556F0
static int method; // size: 0x4, address: 0x805DA470
static int y1; // size: 0x4, address: 0x805DC0F4
static int y2; // size: 0x4, address: 0x805DA474
static int y3; // size: 0x4, address: 0x805DA478
unsigned int XFontBitmap[768]; // size: 0xC00, address: 0x80455780
// total size: 0x60
struct {} __vt__16ENgcTextureC4_32; // size: 0x60, address: 0x80456380
// total size: 0x60
struct {} __vt__16ENgcTextureC8_32; // size: 0x60, address: 0x804563E0
// total size: 0x60
struct {} __vt__17ENgcTextureRGB5A3; // size: 0x60, address: 0x80456440
// total size: 0x60
struct {} __vt__15ENgcTextureCMPR; // size: 0x60, address: 0x804564A0
// total size: 0x60
struct {} __vt__13ENgcTextureC4; // size: 0x60, address: 0x80456500
// total size: 0x60
struct {} __vt__13ENgcTextureC8; // size: 0x60, address: 0x80456560
// total size: 0x60
struct {} __vt__16ENgcTextureRGBA8; // size: 0x60, address: 0x804565C0
// total size: 0x34
struct {} __vt__12ENgcKeyboard; // size: 0x34, address: 0x80456620
// total size: 0x24
struct {} __vt__9ENgcMovie; // size: 0x24, address: 0x80456654
// total size: 0xC
struct {} __vt__6ENgcDL; // size: 0xC, address: 0x80456678
// total size: 0x48
struct {} __vt__10ENgcShader; // size: 0x48, address: 0x80456688
// total size: 0x1BC
struct {} __vt__6ENgcRC; // size: 0x1BC, address: 0x804566D0
// total size: 0x3C
struct {} __vt__17ENgcRenderSurface; // size: 0x3C, address: 0x8045688C
// total size: 0x120
struct {} __vt__12ENgcGraphics; // size: 0x120, address: 0x804568C8
// total size: 0x60
struct {} __vt__14ENgcController; // size: 0x60, address: 0x804569E8
// total size: 0x20
struct {} __vt__12ENgcClockMan; // size: 0x20, address: 0x80456A48
// total size: 0x20
struct {} __vt__12ENgcRenderer; // size: 0x20, address: 0x80456A68
// total size: 0x60
struct {} __vt__15ENgcTextureBase; // size: 0x60, address: 0x80456A88
// total size: 0x50
struct {} __vt__11ENgcTexture; // size: 0x50, address: 0x80456AE8
// total size: 0x3C
struct {} __vt__22ENgcAudioSampleManager; // size: 0x3C, address: 0x80456B38
// total size: 0x38
struct {} __vt__13ENgcScheduler; // size: 0x38, address: 0x80456B78
// total size: 0x38
struct {} __vt__10EScheduler; // size: 0x38, address: 0x80456BB0
// total size: 0x48
struct {} __vt__12ERSampledata; // size: 0x48, address: 0x80456BE8
// total size: 0x3C
struct {} __vt__19EAudioSampleManager; // size: 0x3C, address: 0x80456C30
// total size: 0x70
struct {} __vt__9ENgcAudio; // size: 0x70, address: 0x80456C70
// total size: 0x70
struct {} __vt__6EAudio; // size: 0x70, address: 0x80456CE0
// total size: 0x78
struct {} __vt__14EWiiMemoryCard; // size: 0x78, address: 0x80456D50
// total size: 0x74
struct {} __vt__11EMemoryCard; // size: 0x74, address: 0x80456DC8
// total size: 0x60
struct {} __vt__14EWiiController; // size: 0x60, address: 0x80456E40
// total size: 0x68
struct {} __vt__10ENgcEngine; // size: 0x68, address: 0x80456EA0
// total size: 0x24
struct {} __vt__21EWiiControllerManager; // size: 0x24, address: 0x80456F08
// total size: 0x24
struct {} __vt__21ENgcControllerManager; // size: 0x24, address: 0x80456F2C
// total size: 0x20
struct {} __vt__9EClockMan; // size: 0x20, address: 0x80456F50
// total size: 0x8
class EKeyboard {
    // Members
    unsigned char m_bKeyboardHold; // offset 0x0, size 0x1
public:
    void * __vptr$; // offset 0x4, size 0x4
};
void (ENgcRenderer::* __ptmf_null)(void *, void *, struct EDLEntry *); // size: 0x4, address: 0x80423830
struct _GXRenderModeObj GXNtsc480Prog; // size: 0x3C, address: 0x8046BA24
struct _GXRenderModeObj GXNtsc480IntDf; // size: 0x3C, address: 0x8046B9E8
struct _GXRenderModeObj GXPal528IntDf; // size: 0x3C, address: 0x8046BA9C

