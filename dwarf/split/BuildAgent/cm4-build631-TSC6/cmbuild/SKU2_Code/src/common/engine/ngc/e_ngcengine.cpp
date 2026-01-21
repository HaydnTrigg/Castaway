/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcengine.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B3AD0 -> 0x802B51C0
*/
// Range: 0x802B3AD0 -> 0x802B3AD8
void NGCSetLanguage() {
    // References
    // -> static int SelectedLanguage;
}

// Range: 0x802B3AD8 -> 0x802B3B74
int NGCGetLanguage() {
    // Local variables
    int language; // r3
    int browserLanguage; // r0

    // References
    // -> static int SelectedLanguage;
}

// Range: 0x802B3B74 -> 0x802B3F08
unsigned short * ENgcGetDVDErrorString(int dvdError /* r30 */) {
    // Local variables
    int osLanguage; // r0

    // References
    // -> static unsigned short kNgcDvdErrorJapanese[4][140];
    // -> static unsigned short kNgcDvdErrorPortuguese[4][140];
    // -> static unsigned short kNgcDvdErrorDutch[4][140];
    // -> static unsigned short kNgcDvdErrorSpanish[4][140];
    // -> static unsigned short kNgcDvdErrorItalian[4][140];
    // -> static unsigned short kNgcDvdErrorGerman[4][140];
    // -> static unsigned short kNgcDvdErrorFrench[4][140];
    // -> static unsigned short kNgcDvdErrorEnglish[4][140];
}

// Range: 0x802B3F08 -> 0x802B3F14
void ForceReadCallback() {
    // References
    // -> static unsigned char s_doneRead;
}

// Range: 0x802B3F14 -> 0x802B3F6C
// this: r30
ENgcEngine::~ENgcEngine() {}

// Range: 0x802B3F6C -> 0x802B4050
// this: r30
unsigned char ENgcEngine::Init() {
    // Local variables
    unsigned char retval; // r0

    // References
    // -> void * s_pArena2Hi;
    // -> void * s_pArena2Lo;
    // -> void * s_pArenaHi;
    // -> void * s_pArenaLo;
}

// Range: 0x802B4050 -> 0x802B40F8
unsigned char ENgcEngine::InitConsole() {
    // References
    // -> static struct DVDFileInfo s_forceRead;
    // -> static int sEventThreadPriority;
    // -> static char sEventThreadStack[4096];
    // -> static struct OSThread sEventThread;
    // -> static unsigned char needsInit;
}

// Range: 0x802B40F8 -> 0x802B44AC
unsigned char ENgcEngine::InitMemoryManager() {
    // Local variables
    unsigned int heapSize1; // r29
    unsigned int heapSize2; // r31
    unsigned int heapStart1; // r28
    unsigned int heapStart2; // r27

    // References
    // -> void * s_pArena2Hi;
    // -> void * s_pArena2Lo;
    // -> void * s_pArenaHi;
    // -> void * s_pArenaLo;
    // -> static unsigned char initialized;
}

// Range: 0x802B44AC -> 0x802B44B0
void ENgcEngine::InitializeProfiler() {}

// Range: 0x802B44B0 -> 0x802B44B4
void ENgcEngine::PreFrameUpdate() {}

// Range: 0x802B44B4 -> 0x802B44F8
void ENgcEngine::EnterMovieMode() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B44F8 -> 0x802B453C
void ENgcEngine::ExitMovieMode() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802B453C -> 0x802B4540
void EventPostRetraceCallback() {}

// Range: 0x802B4540 -> 0x802B4544
void EventPreRetraceCallback() {}

// Range: 0x802B4544 -> 0x802B454C
void RequestReset() {
    // References
    // -> static enum ResetType s_RequestedReset;
}

// Range: 0x802B454C -> 0x802B4558
void PowerButtonCallback() {
    // References
    // -> static enum ResetType s_RequestedReset;
}

// Range: 0x802B4558 -> 0x802B4564
void ResetCallback() {
    // References
    // -> static enum ResetType s_RequestedReset;
}

// Range: 0x802B4564 -> 0x802B4754
unsigned char PerformReset(enum ResetType resetType /* r29 */) {
    // Local variables
    unsigned char result; // r31
    unsigned char irRestore; // r30
    class ESleep sleep; // r1+0x8

    // References
    // -> static class ENGCAudioStreamer * streamer;
    // -> unsigned int gAudioInitialised;
    // -> unsigned int gAudioEnabled;
    // -> unsigned char s_bShuttingDown;
    // -> class ENgcFileSystem _eorFileSys;
    // -> static struct OSThread sEventIdleThread;
    // -> void (* sEventOldPreRetrace)(unsigned long);
    // -> void (* sEventOldPostRetrace)(unsigned long);
    // -> class EWiiMemoryCard _wiiMemCard;
    // -> unsigned char g_backgroundSaveInProgress;
    // -> class EEngine * _pEngine;
}

// Range: 0x802B4754 -> 0x802B475C
unsigned char ENgcEngine::IsResetting() {
    // References
    // -> unsigned char s_bShuttingDown;
}

// Range: 0x802B475C -> 0x802B4760
int ENgcEngine::NgcDvdGetDriveStatus() {
    // Local variables
    int status; // r0
}

// Range: 0x802B4760 -> 0x802B4AA8
unsigned char DvdCheck() {
    // Local variables
    int status; // r30
    unsigned char restore; // r29
    struct _GXRenderModeObj * rmode; // r29
    int dummyX; // r1+0x14
    int dummyY; // r1+0x10
    class ESleep sleep; // r1+0x18
    unsigned int fbSize; // r28
    void * xfb; // r27
    unsigned short * str; // r0
    int dvdError; // r0
    unsigned short * pStr; // r30
    int xLineWidth; // r1+0xC
    int iLineLength; // r1+0x8
    int leftpos; // r0
    unsigned char restore; // r27
    struct _GXRenderModeObj * rmode; // r0
    void * xfb; // r27
    unsigned int fbSize; // r0

    // References
    // -> static unsigned char s_dummyReadLocation[32];
    // -> static unsigned char s_doneRead;
    // -> static struct DVDFileInfo s_forceRead;
    // -> unsigned int gNumDiskErrors;
    // -> unsigned char * s_OSFontXfb;
    // -> unsigned int s_OSFontXfbWidth;
    // -> class ENgcEngine _ngcEngine;
    // -> class ENgcRenderer _ngcRenderer;
    // -> static struct OSThread sEventIdleThread;
    // -> void (* sEventOldPreRetrace)(unsigned long);
    // -> void (* sEventOldPostRetrace)(unsigned long);
    // -> int s_nPreviousErrorState;
    // -> static unsigned char s_DiskError;
}

// Range: 0x802B4AA8 -> 0x802B4B10
void EventAlarmHandler() {
    // Local variables
    unsigned char enable; // r31

    // References
    // -> int gWarmupMilliCount;
    // -> static struct OSThread sEventThread;
}

// Range: 0x802B4B10 -> 0x802B4B2C
void * EventIdleThread() {
    // Local variables
    int idle; // r1+0x8
}

// Range: 0x802B4B2C -> 0x802B4BF4
void * EventThread() {
    // Local variables
    unsigned char eventDone; // r0

    // References
    // -> static enum ResetType s_RequestedReset;
    // -> class EAudio * _pActualAudio;
    // -> static struct OSThread sEventThread;
    // -> static int sEventAlarmTicks;
    // -> static struct OSAlarm sEventAlarm;
    // -> static int sEventIdleThreadPriority;
    // -> static char sEventIdleThreadStack[4096];
    // -> static struct OSThread sEventIdleThread;
}

// Range: 0x802B4BF4 -> 0x802B4CD0
static void XOSFontStartup() {
    // References
    // -> void * s_OSFontTempArea;
    // -> struct OSFontHeader * s_OSFontData;
}

// Range: 0x802B4CD0 -> 0x802B4D20
static void XOSFontShutdown() {
    // References
    // -> unsigned char * s_OSFontXfb;
    // -> unsigned int s_OSFontXfbWidth;
    // -> struct OSFontHeader * s_OSFontData;
}

// Range: 0x802B4D20 -> 0x802B4D30
static void XOSFontSetXFB() {
    // References
    // -> unsigned int s_OSFontXfbSize;
    // -> unsigned int s_OSFontXfbWidth;
    // -> unsigned char * s_OSFontXfb;
}

// Range: 0x802B4D30 -> 0x802B4D60
static void XOSFontClearScreen() {
    // Local variables
    unsigned char * ptr; // r5

    // References
    // -> unsigned int s_OSFontXfbSize;
    // -> unsigned char * s_OSFontXfb;
}

// Range: 0x802B4D60 -> 0x802B4E68
static void XOSFontDrawChar() {
    // Local variables
    int j; // r6
    int y; // r7
    unsigned short * dst; // r8
    int k; // r0
    unsigned char * src; // r31
    unsigned char c1; // r0
    unsigned char c2; // r0

    // References
    // -> unsigned char * s_OSFontXfb;
    // -> unsigned int s_OSFontXfbWidth;
    // -> static unsigned short kColorLUT[16];
}

// Range: 0x802B4E68 -> 0x802B4F6C
static void XOSFontGetWordSize(unsigned short * string /* r29 */, int & x /* r30 */, int & wordlength /* r31 */) {
    // Local variables
    long width; // r1+0xC
    unsigned int image[72]; // r1+0x10
    char text[2]; // r1+0x8
    char c; // r3
}

// Range: 0x802B4F6C -> 0x802B505C
static void XOSFontGetStringLineSize(unsigned short * string /* r27 */, int & xMax /* r28 */, int & stringLengthMax /* r29 */) {
    // Local variables
    long width; // r1+0xC
    unsigned int image[72]; // r1+0x10
    char text[2]; // r1+0x8
    int x; // r31
    int stringLength; // r30
    char c; // r0
}

// Range: 0x802B505C -> 0x802B51C0
static int XOSFontDrawString(int lx /* r30 */, unsigned short * string /* r31 */) {
    // Local variables
    int kPixelSafeRight; // r29
    unsigned char text[2]; // r1+0x8
    unsigned int image[72]; // r1+0x18
    long width; // r1+0x14
    int dx; // r28
    int dy; // r27
    int xsize; // r1+0x10
    int wordlength; // r1+0xC
    unsigned short * word; // r26
    int i; // r25

    // References
    // -> unsigned int s_OSFontXfbWidth;
}


