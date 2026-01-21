/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\core\engine_core_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027B0DC -> 0x8027B0DC
*/
class Background * _pBackground; // size: 0x4, address: 0x805DBE90
enum BackCommand {
    kBackCmdFlush = 1,
    kBackCmdTerminate = 2,
    kBackCmdExecRoutine = 3,
    kBackCmdExecArgRoutine = 4,
    kBackMAX = 5,
};
union /* @class$5351engine_core_unity_cpp */ {
    void (* m_pRoutine)(); // offset 0x0, size 0x4
    void (* m_pArgRoutine)(void *); // offset 0x0, size 0x4
    class EEvent * m_pFlushEvent; // offset 0x0, size 0x4
};
// total size: 0x10
class BackgroundCmd {
    // Members
public:
    enum BackCommand m_cmd; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$5351engine_core_unity_cpp */ {
            void (* m_pRoutine)(); // offset 0x0, size 0x4
            void (* m_pArgRoutine)(void *); // offset 0x0, size 0x4
            class EEvent * m_pFlushEvent; // offset 0x0, size 0x4
        } __anon$5352; // offset 0x4, size 0x4
        void (* m_pRoutine)(); // offset 0x4, size 0x4
        void (* m_pArgRoutine)(void *); // offset 0x4, size 0x4
        class EEvent * m_pFlushEvent; // offset 0x4, size 0x4
    };
    unsigned char m_bWait; // offset 0x8, size 0x1
    void * m_pArg; // offset 0xC, size 0x4
};
// total size: 0x3B0
class BackgroundImpl : public Background, private EThread {
    // Members
public:
    unsigned char m_bInitialized; // offset 0x344, size 0x1
    class EMutex m_cmdMutex; // offset 0x348, size 0x1C
    class EMsgQueue m_msgQueue; // offset 0x364, size 0x4C
};
static class BackgroundImpl _background; // size: 0x3B0, address: 0x804F7050
class EApp * _pApp; // size: 0x4, address: 0x805DBE94
// total size: 0x28
class ERMovie : public EResource {
    // Members
protected:
    class EFile * m_pFile; // offset 0x14, size 0x4
    unsigned int m_Start; // offset 0x18, size 0x4
    unsigned int m_Length; // offset 0x1C, size 0x4
    unsigned int m_movieId; // offset 0x20, size 0x4
    class EMovie * m_pMovie; // offset 0x24, size 0x4
};
static unsigned char bWasInError; // size: 0x1, address: 0x805DBE98
// total size: 0x208
class TString : public EFixedString {
    // Members
    char m_szBuffer[512]; // offset 0x8, size 0x200
};
int _evenodd; // size: 0x4, address: 0x805DBE9C
int _framecount; // size: 0x4, address: 0x805DBEA0
int _retracecount; // size: 0x4, address: 0x805DBEA4
int _d_retraces; // size: 0x4, address: 0x805DA2AC
float _retracetime; // size: 0x4, address: 0x805DBEA8
float _dt; // size: 0x4, address: 0x805DA2B0
float _dtlim30; // size: 0x4, address: 0x805DBEAC
float _dtlim20; // size: 0x4, address: 0x805DBEB0
float _dtlim15; // size: 0x4, address: 0x805DBEB4
float _gamedt; // size: 0x4, address: 0x805DBEB8
float _invdt; // size: 0x4, address: 0x805DA2B4
int _fps; // size: 0x4, address: 0x805DA2B8
float _cputime; // size: 0x4, address: 0x805DA2BC
float _cputime_m1; // size: 0x4, address: 0x805DA2C0
float _cputime_m2; // size: 0x4, address: 0x805DA2C4
float _rendtime; // size: 0x4, address: 0x805DA2C8
float _rendtime_m1; // size: 0x4, address: 0x805DA2CC
double _time; // size: 0x8, address: 0x805DBEC0
unsigned char g_backgroundLoadInProgress; // size: 0x1, address: 0x805DBEC8
unsigned char g_backgroundSaveInProgress; // size: 0x1, address: 0x805DBEC9
class EClock _sysclock; // size: 0x10, address: 0x804F7400
class EMat4 _mId; // size: 0x40, address: 0x804F7410
class EMat4 _mShadowId; // size: 0x40, address: 0x804F7450
class EQuat _qId; // size: 0x10, address: 0x804F7490
class EVec3 _vZero; // size: 0xC, address: 0x804F74A0
class EVec3 _vAxes[3]; // size: 0x24, address: 0x804F74AC
static unsigned char first; // size: 0x1, address: 0x805DA2D0
static float dtHist[2]; // size: 0x8, address: 0x805DBED0
class EThread _idleThread; // size: 0x340, address: 0x804F74E0
static void (* _pExitFunc)(); // size: 0x4, address: 0x805DBED8
class EScene * _pScene; // size: 0x4, address: 0x805DBEDC
// total size: 0x150
class EScene {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct ELights m_lights; // offset 0x4, size 0xF8
    class EMat4 m_mLookAt; // offset 0x100, size 0x40
    class EVec3 m_vCurrentPos; // offset 0x140, size 0xC
};
class EScene _scene; // size: 0x150, address: 0x804F7830
// total size: 0xC
struct {} __vt__6EScene; // size: 0xC, address: 0x80453CA4
// total size: 0x68
struct {} __vt__7EEngine; // size: 0x68, address: 0x80453CB0
// total size: 0x74
struct {} __vt__4EApp; // size: 0x74, address: 0x80453D18
// total size: 0x40
struct {} __vt__14BackgroundImpl; // size: 0x40, address: 0x80453DA0
// total size: 0x2C
struct {} __vt__10Background; // size: 0x2C, address: 0x80453DE0
// total size: 0x4
class EScratchBuffUser {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x44
class EResPrefetchFile : public EFile {
    // Members
protected:
    class EResourceManager * m_pResMan; // offset 0x2C, size 0x4
    unsigned char * m_pStreamPos; // offset 0x30, size 0x4
    void * m_pStream; // offset 0x34, size 0x4
    unsigned long m_streamSize; // offset 0x38, size 0x4
    unsigned int m_diskPosHead; // offset 0x3C, size 0x4
    unsigned int m_diskPos; // offset 0x40, size 0x4
};
enum EPrefetchMsgType {
    E_PF_CANCEL = 0,
    E_PF_BEGIN = 1,
    E_PF_FLUSH = 2,
    E_PF_TERMINATE = 3,
};
// total size: 0x14
struct EPrefetchMsg {
    // Members
    enum EPrefetchMsgType type; // offset 0x0, size 0x4
    unsigned int resId; // offset 0x4, size 0x4
    class EResource * pResource; // offset 0x8, size 0x4
    class EResourceManager * pResMan; // offset 0xC, size 0x4
    class EEvent * pReply; // offset 0x10, size 0x4
};
// total size: 0x418
class EResPrefetch : public EScratchBuffUser, public EThread {
    // Members
protected:
    class EResPrefetchFile m_preFetchFile; // offset 0x344, size 0x44
    class EMsgQueue m_msgQueue; // offset 0x388, size 0x4C
    unsigned char m_initOccured; // offset 0x3D4, size 0x1
    class EResourceManager * m_pResMan; // offset 0x3D8, size 0x4
    unsigned int m_resId; // offset 0x3DC, size 0x4
    unsigned int m_resPos; // offset 0x3E0, size 0x4
    unsigned int m_resSize; // offset 0x3E4, size 0x4
    unsigned int m_resHeadPos; // offset 0x3E8, size 0x4
    unsigned int m_nBlocksInRes; // offset 0x3EC, size 0x4
    unsigned int m_resFinalBlockSize; // offset 0x3F0, size 0x4
    unsigned int m_blockSize; // offset 0x3F4, size 0x4
    unsigned int m_buffSize; // offset 0x3F8, size 0x4
    unsigned int m_nBlocksInBuffer; // offset 0x3FC, size 0x4
    unsigned int m_nBlocksRead; // offset 0x400, size 0x4
    unsigned char * m_pBuffPos; // offset 0x404, size 0x4
    unsigned char * m_pBuffHead; // offset 0x408, size 0x4
    float m_loadProgress; // offset 0x40C, size 0x4
    unsigned char m_loading; // offset 0x410, size 0x1
};
// total size: 0x20
class ERAudioStream : public EResource {
    // Members
public:
    class EFile * const m_pFile; // offset 0x14, size 0x4
    unsigned int m_uStartOffset; // offset 0x18, size 0x4
    unsigned int m_uEndOffset; // offset 0x1C, size 0x4
};
// total size: 0xD44
class EAudioStreamManager : public EResourceManager {};
// total size: 0x14
class EScratchBuffMan {
    // Members
protected:
    const char * m_pFile; // offset 0x0, size 0x4
    int m_line; // offset 0x4, size 0x4
    class EScratchBuffUser * m_pCurrentOwner; // offset 0x8, size 0x4
    void * m_pBuffer; // offset 0xC, size 0x4
    unsigned int m_buffSize; // offset 0x10, size 0x4
};
// total size: 0x18
struct ESchedCommand {
    // Members
    unsigned int command; // offset 0x0, size 0x4
    unsigned int data; // offset 0x4, size 0x4
    unsigned int data2; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    struct ESchedCommand * pLast; // offset 0x10, size 0x4
    struct ESchedCommand * pNext; // offset 0x14, size 0x4
};
// total size: 0x348
class EScheduler : public EThread {
    // Members
    int m_vblankCount; // offset 0x33C, size 0x4
    int m_frameCount; // offset 0x340, size 0x4
};
// total size: 0x38
class EFrameAllocGroup : public EGlobalManagerClient {
    // Members
protected:
    class EAllocGroup m_ag[2]; // offset 0x4, size 0x30
    int m_evenodd; // offset 0x34, size 0x4
};
// total size: 0xD48
class EMovieMan : public EResourceManager {
    // Members
    unsigned int m_movieId; // offset 0xD44, size 0x4
};

