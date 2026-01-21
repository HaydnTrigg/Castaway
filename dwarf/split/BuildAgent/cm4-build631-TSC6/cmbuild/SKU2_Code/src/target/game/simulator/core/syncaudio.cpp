/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\syncaudio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80006940 -> 0x80007B40
*/
class SyncAudio * s_pInstance; // size: 0x4, address: 0x805DB660
// total size: 0x10
struct QueuedPlayCommand {
    // Members
    unsigned int resNumber; // offset 0x0, size 0x4
    int channelNumber; // offset 0x4, size 0x4
    float leftVolume; // offset 0x8, size 0x4
    float rightVolume; // offset 0xC, size 0x4
};
// total size: 0x4
struct ChannelMap {
    // Members
    signed short objectID; // offset 0x0, size 0x2
    signed short channel; // offset 0x2, size 0x2
};
// total size: 0x8
struct SampleStatus {
    // Members
    int sampleID; // offset 0x0, size 0x4
    signed short refCount; // offset 0x4, size 0x2
    unsigned char loaded; // offset 0x6, size 0x1
};
// total size: 0x390
class SyncAudio {
    // Functions
    SyncAudio();

    ~SyncAudio();

    int ReserveSoundChannel();

    void ReleaseSoundChannel(int channelNumber);

    unsigned char PreloadSyncSample(unsigned int resNumber);

    unsigned char IsLoadedSyncSample(unsigned int resNumber);

    void UnloadSyncSample(unsigned int resNumber);

    void PlaySyncSample(unsigned int resNumber, int channelNumber, float leftVolume, float rightVolume);

    void CleanUpAllChannelsAndSamples();

    enum TreeReturnCode TrySyncAudio(int sampleID, signed short objectID, signed short & channel);

    int GetErrorCode();

    // Static members
    static class SyncAudio * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    struct SyncSoundChannel m_voices[12]; // offset 0x4, size 0xF0
    struct SyncSoundSample m_samples[12]; // offset 0xF4, size 0x90
    struct QueuedPlayCommand mLastCommandQueue[6]; // offset 0x184, size 0x60
    struct QueuedPlayCommand mCommandQueue0[6]; // offset 0x1E4, size 0x60
    struct QueuedPlayCommand mCommandQueue1[6]; // offset 0x244, size 0x60
    struct QueuedPlayCommand * mPlayCommandQueue; // offset 0x2A4, size 0x4
    struct QueuedPlayCommand * mCachedCommandQueue; // offset 0x2A8, size 0x4
    int mLastCommandQueueLength; // offset 0x2AC, size 0x4
    int mPlayCommandQueueLength; // offset 0x2B0, size 0x4
    int mCachedCommandQueueLength; // offset 0x2B4, size 0x4
    int mPlayVoiceToggle; // offset 0x2B8, size 0x4
    float mNextPlayCommandTime; // offset 0x2BC, size 0x4
    class EClock mQueueTimer; // offset 0x2C0, size 0x10
    unsigned char mQueueActive; // offset 0x2D0, size 0x1
    unsigned char mSignalEdithSemaphore; // offset 0x2D1, size 0x1
    int mSyncMeasure; // offset 0x2D4, size 0x4
    float mTimeSinceLastPlay; // offset 0x2D8, size 0x4
    class EMutex mSyncAudioMutex; // offset 0x2DC, size 0x1C
    struct ChannelMap mChannelMap[12]; // offset 0x2F8, size 0x30
    struct SampleStatus mSampleStatus[12]; // offset 0x328, size 0x60
    int mErrorCode; // offset 0x388, size 0x4
};
// total size: 0x4
class EAutoMutex {
    // Members
    class EMutex & m_mutex; // offset 0x0, size 0x4
};
// Range: 0x80006940 -> 0x800069E8
// this: r31
SyncAudio::SyncAudio() {
    // Local variables
    class EAutoMutex am; // r1+0x8

    // References
    // -> struct [anonymous] __vt__9SyncAudio;
}

// total size: 0x0
class NLIteratorPtrType {};
// total size: 0x1C
class EStream {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char m_streamingStructure; // offset 0x4, size 0x1
    class TNodeList * m_pPointerOffsets; // offset 0x8, size 0x4
    class TNodeList * m_pObjectsToStore; // offset 0xC, size 0x4
    class NLIteratorPtrType * m_iObjectsToStoreInsertBefore; // offset 0x10, size 0x4
    class TRedBlackTree * m_pStoredObjectsToIndices; // offset 0x14, size 0x4
    class EStorable * * m_pObjectsToLoad; // offset 0x18, size 0x4
};
// total size: 0x28
class ETypeInfo {
    // Static members
    static int m_count; // size: 0x4
    static class ETypeInfo * m_pListHead; // size: 0x4
    static class ETypeInfo * m_pTreeHead; // size: 0x4

    // Members
public:
    class EStorable * (* m_pfnNew)(); // offset 0x0, size 0x4
    void (* m_pfnConstruct)(void *); // offset 0x4, size 0x4
    void (* m_pfnDestruct)(void *); // offset 0x8, size 0x4
    const char * m_name; // offset 0xC, size 0x4
    unsigned int m_key; // offset 0x10, size 0x4
    unsigned short m_version; // offset 0x14, size 0x2
    unsigned short m_readVersion; // offset 0x16, size 0x2
    class ETypeInfo * m_pBaseClass; // offset 0x18, size 0x4
    class ETypeInfo * m_pTreeLeft; // offset 0x1C, size 0x4
    class ETypeInfo * m_pTreeRight; // offset 0x20, size 0x4
    class ETypeInfo * m_pListNext; // offset 0x24, size 0x4
};
// total size: 0x4
class EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class ESyncObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x318
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0xC
struct OSSemaphore {
    // Members
    long count; // offset 0x0, size 0x4
    struct OSThreadQueue queue; // offset 0x4, size 0x8
};
// total size: 0x18
class ESemaphore : public ESyncObject {
    // Members
protected:
    int m_id; // offset 0x4, size 0x4
    int m_maxCount; // offset 0x8, size 0x4
    struct OSSemaphore m_osSemaphore; // offset 0xC, size 0xC
};
// total size: 0x1C
class EMutex : public ESyncObject {
    // Members
protected:
    class ESemaphore m_sema; // offset 0x4, size 0x18
};
// total size: 0x40
class EThreadMutex : public EMutex {
    // Members
    class EMutex m_waitMutex; // offset 0x1C, size 0x1C
    int m_threadID; // offset 0x38, size 0x4
    int m_count; // offset 0x3C, size 0x4
};
// total size: 0x4
struct __file_modes {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4
    unsigned int io_mode : 3; // offset 0x0, size 0x4
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4
    unsigned int file_kind : 3; // offset 0x0, size 0x4
    unsigned int file_orientation : 2; // offset 0x0, size 0x4
    unsigned int binary_io : 1; // offset 0x0, size 0x4
};
// total size: 0x4
struct __file_state {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4
    unsigned int free_buffer : 1; // offset 0x0, size 0x4
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
};
// total size: 0x50
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    struct __file_modes mode; // offset 0x4, size 0x4
    struct __file_state state; // offset 0x8, size 0x4
    unsigned char is_dynamically_allocated; // offset 0xC, size 0x1
    unsigned char char_buffer; // offset 0xD, size 0x1
    unsigned char char_buffer_overflow; // offset 0xE, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xF, size 0x2
    unsigned short ungetwc_buffer[2]; // offset 0x12, size 0x4
    unsigned long position; // offset 0x18, size 0x4
    unsigned char * buffer; // offset 0x1C, size 0x4
    unsigned long buffer_size; // offset 0x20, size 0x4
    unsigned char * buffer_ptr; // offset 0x24, size 0x4
    unsigned long buffer_len; // offset 0x28, size 0x4
    unsigned long buffer_alignment; // offset 0x2C, size 0x4
    unsigned long saved_buffer_len; // offset 0x30, size 0x4
    unsigned long buffer_pos; // offset 0x34, size 0x4
    int (* position_proc)(unsigned long, unsigned long *, int, void *); // offset 0x38, size 0x4
    int (* read_proc)(unsigned long, unsigned char *, unsigned long *, void *); // offset 0x3C, size 0x4
    int (* write_proc)(unsigned long, unsigned char *, unsigned long *, void *); // offset 0x40, size 0x4
    int (* close_proc)(unsigned long); // offset 0x44, size 0x4
    void * ref_con; // offset 0x48, size 0x4
    struct _FILE * next_file_struct; // offset 0x4C, size 0x4
};
// total size: 0x4
class EString {
    // Static members
    static char m_null[1]; // size: 0x1

    // Members
    char * m_p; // offset 0x0, size 0x4
};
// total size: 0x10
struct Chunk {
    // Members
    unsigned int mnPriorSize; // offset 0x0, size 0x4
    unsigned int mnSize; // offset 0x4, size 0x4
    struct Chunk * mpPrevChunk; // offset 0x8, size 0x4
    struct Chunk * mpNextChunk; // offset 0xC, size 0x4
};
// total size: 0x20
struct CoreBlock {
    // Members
    char * mpCore; // offset 0x0, size 0x4
    unsigned long mnSize; // offset 0x4, size 0x4
    unsigned long mnReservedSize; // offset 0x8, size 0x4
    unsigned char mbMMappedMemory; // offset 0xC, size 0x1
    unsigned char mbShouldFree; // offset 0xD, size 0x1
    unsigned char mbShouldFreeOnShutdown; // offset 0xE, size 0x1
    unsigned char mbShouldTrim; // offset 0xF, size 0x1
    unsigned long (* mpCoreFreeFunction)(class GeneralAllocator *, void *, unsigned long, void *); // offset 0x10, size 0x4
    void * mpCoreFreeFunctionContext; // offset 0x14, size 0x4
    struct CoreBlock * mpPrevCoreBlock; // offset 0x18, size 0x4
    struct CoreBlock * mpNextCoreBlock; // offset 0x1C, size 0x4
};
enum HeapValidationLevel {
    kHeapValidationLevelNone = 0,
    kHeapValidationLevelBasic = 1,
    kHeapValidationLevelDetail = 2,
    kHeapValidationLevelFull = 3,
};
// total size: 0xC
struct InitCallbackNode {
    // Members
    void (* mpInitCallbackFunction)(class GeneralAllocator *, unsigned char, void *); // offset 0x0, size 0x4
    void * mpContext; // offset 0x4, size 0x4
    struct InitCallbackNode * mpNext; // offset 0x8, size 0x4
};
// total size: 0x554
class GeneralAllocator {
    // Static members
    static volatile struct InitCallbackNode * mpInitCallbackNode; // size: 0x4
    static int kTypeId; // size: 0x4

    // Members
protected:
    unsigned char mbInitialized; // offset 0x0, size 0x1
    unsigned int mnMaxFastBinChunkSize; // offset 0x4, size 0x4
    unsigned char mbOptionEnableFastBinAllocs; // offset 0x8, size 0x1
    struct Chunk * mpFastBinArray[10]; // offset 0xC, size 0x28
    struct Chunk * mpBinArray[256]; // offset 0x34, size 0x400
    unsigned int mBinBitmap[4]; // offset 0x434, size 0x10
    struct Chunk * mpTopChunk; // offset 0x444, size 0x4
    struct Chunk * mpLastRemainderChunk; // offset 0x448, size 0x4
    struct CoreBlock mHeadCoreBlock; // offset 0x44C, size 0x20
    void * mpHighFence; // offset 0x46C, size 0x4
    unsigned char mbHighFenceInternallyDisabled; // offset 0x470, size 0x1
    unsigned char mbSystemAllocEnabled; // offset 0x471, size 0x1
    int mnCheckChunkReentrancyCount; // offset 0x474, size 0x4
    unsigned char mcTraceFieldDelimiter; // offset 0x478, size 0x1
    unsigned char mcTraceRecordDelimiter; // offset 0x479, size 0x1
    enum HeapValidationLevel mAutoHeapValidationLevel; // offset 0x47C, size 0x4
    unsigned long mnAutoHeapValidationFrequency; // offset 0x480, size 0x4
    unsigned long mnAutoHeapValidationEventCount; // offset 0x484, size 0x4
    unsigned char mbHeapValidationActive; // offset 0x488, size 0x1
    int mnMMapCount; // offset 0x48C, size 0x4
    unsigned long mnMMapMallocTotal; // offset 0x490, size 0x4
    int mnMMapMaxAllowed; // offset 0x494, size 0x4
    unsigned int mnMMapThreshold; // offset 0x498, size 0x4
    unsigned char mbMMapTopDown; // offset 0x49C, size 0x1
    struct Chunk mHeadMMapChunk; // offset 0x4A0, size 0x10
    unsigned char (* mpMallocFailureFunction)(class GeneralAllocator *, unsigned long, unsigned long, void *); // offset 0x4B0, size 0x4
    void * mpMallocFailureFunctionContext; // offset 0x4B4, size 0x4
    unsigned int mnMaxMallocFailureCount; // offset 0x4B8, size 0x4
    void (* mpAssertionFailureFunction)(char *, void *); // offset 0x4BC, size 0x4
    void * mpAssertionFailureFunctionContext; // offset 0x4C0, size 0x4
    void (* mpTraceFunction)(char *, void *); // offset 0x4C4, size 0x4
    void * mpTraceFunctionContext; // offset 0x4C8, size 0x4
    unsigned int mnTrimThreshold; // offset 0x4CC, size 0x4
    unsigned int mnTopPad; // offset 0x4D0, size 0x4
    char * mpInitialTopChunk; // offset 0x4D4, size 0x4
    unsigned long mnPageSize; // offset 0x4D8, size 0x4
    unsigned long mnNewCoreSize; // offset 0x4DC, size 0x4
    unsigned long mnCoreIncrementSize; // offset 0x4E0, size 0x4
    unsigned char mbTraceInternalMemory; // offset 0x4E4, size 0x1
    char mszAllocatorName[64]; // offset 0x4E5, size 0x40
    unsigned char mnHeapID; // offset 0x525, size 0x1
    void * mpMutex; // offset 0x528, size 0x4
    unsigned int mpMutexData[8]; // offset 0x52C, size 0x20
    unsigned char mnFillFree; // offset 0x54C, size 0x1
    unsigned char mnFillDelayedFree; // offset 0x54D, size 0x1
    unsigned char mnFillNew; // offset 0x54E, size 0x1
    unsigned char mnFillGuard; // offset 0x54F, size 0x1
    unsigned char mnFillUnusedCore; // offset 0x550, size 0x1
    signed char mNotifyInitState; // offset 0x551, size 0x1
};
// total size: 0x564
class EAHeap : public GeneralAllocator {
    // Static members
    static unsigned char s_nNextHeapID; // size: 0x1
    static unsigned int s_WarnHeapFullLastThread; // size: 0x4
    static double s_WarnHeapFullLastTime; // size: 0x8
    static unsigned int s_WarnHeapFullLastSize; // size: 0x4
    static unsigned int s_WarnHeapFullFirstThread; // size: 0x4
    static double s_WarnHeapFullFirstTime; // size: 0x8
    static unsigned int s_WarnHeapFullFirstSize; // size: 0x4
    static unsigned int s_WarnHeapFullCount; // size: 0x4
    static unsigned int s_poolBlocks[16]; // size: 0x40
    static class AllocPoolManager * s_protectedPoolManager; // size: 0x4
    static int EAGENERALALLOCATOR_RESERVED_ALLOCATION_FLAGS; // size: 0x4

    // Members
    const char * m_heapName; // offset 0x554, size 0x4
    class EAHeap * m_parent; // offset 0x558, size 0x4
    class EAHeap * m_sibling; // offset 0x55C, size 0x4
    unsigned int m_numAllocated; // offset 0x560, size 0x4
};
// total size: 0xCA8
class FreeResourceManager {
    // Members
    class EMutex m_mutex; // offset 0x0, size 0x1C
    class EThreadMutex * m_resMutex; // offset 0x1C, size 0x4
    class EResource * m_entries[800]; // offset 0x20, size 0xC80
    int m_numEntries; // offset 0xCA0, size 0x4
    int m_maxNumEntries; // offset 0xCA4, size 0x4
};
// total size: 0x8
struct MapEntry {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    class EResource * res; // offset 0x4, size 0x4
};
// total size: 0x14
class EResourceMap {
    // Members
    struct MapEntry * m_entries; // offset 0x0, size 0x4
    int m_numEntries; // offset 0x4, size 0x4
    int m_maxNumEntries; // offset 0x8, size 0x4
    int m_maxLoaded; // offset 0xC, size 0x4
    int m_maxUsed; // offset 0x10, size 0x4
};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x10
struct rbtree_node_base {
    // Members
    struct rbtree_node_base * mpNodeRight; // offset 0x0, size 0x4
    struct rbtree_node_base * mpNodeLeft; // offset 0x4, size 0x4
    struct rbtree_node_base * mpNodeParent; // offset 0x8, size 0x4
    char mColor; // offset 0xC, size 0x1
};
// total size: 0x1
class allocator {};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    unsigned int second; // offset 0x4, size 0x4
};
// total size: 0x1C
class rbtree : public rb_base {
    // Static members
    static unsigned long kKeyAlignment; // size: 0x4
    static unsigned long kKeyAlignmentOffset; // size: 0x4
    static unsigned long kValueAlignment; // size: 0x4
    static unsigned long kValueAlignmentOffset; // size: 0x4

    // Members
public:
    struct rbtree_node_base mAnchor; // offset 0x4, size 0x10
    unsigned long mnSize; // offset 0x14, size 0x4
    class allocator mAllocator; // offset 0x18, size 0x1
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0xC
struct ResourceIndexRecord {
    // Members
    int m_id; // offset 0x0, size 0x4
    unsigned int m_pos; // offset 0x4, size 0x4
    unsigned int m_len; // offset 0x8, size 0x4
};
enum DelRefMode {
    DISABLE_CACHING = 0,
    ENABLE_CACHING = 1,
};
// total size: 0xD44
class EResourceManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EThreadMutex m_dataMutex; // offset 0x4, size 0x40
    char * m_dataType; // offset 0x44, size 0x4
    unsigned int m_nManagerType; // offset 0x48, size 0x4
protected:
    class EString m_path; // offset 0x4C, size 0x4
    unsigned char m_initialized; // offset 0x50, size 0x1
    unsigned int * m_pIndex; // offset 0x54, size 0x4
    class EFile * m_pArchiveFile; // offset 0x58, size 0x4
    unsigned char m_bSeqAccess; // offset 0x5C, size 0x1
    class FreeResourceManager m_freeResourceManager; // offset 0x60, size 0xCA8
    unsigned int m_DiscOffset; // offset 0xD08, size 0x4
public:
    class EResourceManager * m_pLast; // offset 0xD0C, size 0x4
    class EResourceManager * m_pNext; // offset 0xD10, size 0x4
private:
    class EResourceMap m_resourceMap; // offset 0xD14, size 0x14
    class map m_resIdTranslation; // offset 0xD28, size 0x1C
};
// total size: 0x14
class EResource : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class EResourceManager * m_pManager; // offset 0x4, size 0x4
private:
    unsigned int m_resId; // offset 0x8, size 0x4
    signed short m_nRefs; // offset 0xC, size 0x2
protected:
    signed short m_loadingCount; // offset 0xE, size 0x2
private:
    unsigned int m_size : 24; // offset 0x10, size 0x4
    unsigned int m_loadable : 1; // offset 0x10, size 0x4
    unsigned int m_flags : 7; // offset 0x10, size 0x4
};
// total size: 0xC
struct SyncSoundSample {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    unsigned int sampleID; // offset 0x4, size 0x4
    class EResource * pResource; // offset 0x8, size 0x4
};
// total size: 0x1C
struct EVoice {
    // Members
    unsigned char bInUse; // offset 0x0, size 0x1
    class ERSampledata * pSampleRes; // offset 0x4, size 0x4
    unsigned int voiceHandle; // offset 0x8, size 0x4
    float volumeL; // offset 0xC, size 0x4
    float volumeR; // offset 0x10, size 0x4
    float pitch; // offset 0x14, size 0x4
    unsigned char bIsPlaying; // offset 0x18, size 0x1
    unsigned char bIsSilent; // offset 0x19, size 0x1
};
// total size: 0x14
struct SyncSoundChannel {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    struct EVoice * pVoice; // offset 0x4, size 0x4
    unsigned char bind; // offset 0x8, size 0x1
    float leftVolume; // offset 0xC, size 0x4
    float rightVolume; // offset 0x10, size 0x4
};
// Range: 0x800069E8 -> 0x80006A84
// this: r30
SyncAudio::~SyncAudio() {
    // References
    // -> struct [anonymous] __vt__9SyncAudio;
}

// Range: 0x80006A84 -> 0x80006BA8
// this: r25
int SyncAudio::ReserveSoundChannel() {
    // Local variables
    class EAutoMutex am; // r1+0x8
    int rc; // r27
    int i; // r26
    struct SyncSoundChannel * rec; // r0
    struct SyncSoundChannel * rec2; // r0

    // References
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80006BA8 -> 0x80006CE0
// this: r31
void SyncAudio::ReleaseSoundChannel(int channelNumber /* r30 */) {
    // Local variables
    class EAutoMutex am; // r1+0x8
    struct SyncSoundChannel * rec; // r0
    struct SyncSoundChannel * rec2; // r0

    // References
    // -> class EAudio * _pActualAudio;
}

// total size: 0x10
class Commander {
    // Static members
    static int sId; // size: 0x4
    static class Commander * sList; // size: 0x4

    // Members
public:
    class Commander * fNext; // offset 0x0, size 0x4
    int fWhat; // offset 0x4, size 0x4
    int fId; // offset 0x8, size 0x4
    void * __vptr$; // offset 0xC, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    int * mpBegin; // offset 0x0, size 0x4
    int * mpEnd; // offset 0x4, size 0x4
    int * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x4
class IConsoleUnknown {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
union /* @class$18420syncaudio_cpp */ {
    class iResFile * fFile; // offset 0x0, size 0x4
    class QuickResFile * fObjFile; // offset 0x0, size 0x4
};
// total size: 0x8
class StringBuffer {
    // Members
    char * fMem; // offset 0x0, size 0x4
    unsigned int fCapacity; // offset 0x4, size 0x4
};
// total size: 0x4
class ObjectDataInterface : public IConsoleUnknown {};
// total size: 0xC
struct __va_list_struct {
    // Members
    char gpr; // offset 0x0, size 0x1
    char fpr; // offset 0x1, size 0x1
    char reserved[2]; // offset 0x2, size 0x2
    char * input_arg_area; // offset 0x4, size 0x4
    char * reg_save_area; // offset 0x8, size 0x4
};
// total size: 0x10
class basic_string {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    char * mpBegin; // offset 0x0, size 0x4
    char * mpEnd; // offset 0x4, size 0x4
    char * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
enum EObjeLightOnOff {
    OFF = 0,
    ON = 1,
};
// total size: 0x20
struct ObjAnimDef {
    // Members
    unsigned int modelID; // offset 0x0, size 0x4
    unsigned int effectAttachmentId; // offset 0x4, size 0x4
    unsigned int animationID; // offset 0x8, size 0x4
    unsigned int searchShdID; // offset 0xC, size 0x4
    unsigned int shaderID; // offset 0x10, size 0x4
    enum EObjeLightOnOff light; // offset 0x14, size 0x4
    int graphic; // offset 0x18, size 0x4
    int pAnimRef_unused; // offset 0x1C, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct ObjAnimDef * pData; // offset 0x0, size 0x4
};
enum EObjLightType {
    E_OBJ_POINT_LIGHT = 0,
    E_OBJ_SPOT_LIGHT = 1,
};
// total size: 0x34
struct ObjLightDef {
    // Members
    enum EObjLightType m_lightType; // offset 0x0, size 0x4
    unsigned char m_red; // offset 0x4, size 0x1
    unsigned char m_green; // offset 0x5, size 0x1
    unsigned char m_blue; // offset 0x6, size 0x1
    float m_intensity; // offset 0x8, size 0x4
    float m_vOffx; // offset 0xC, size 0x4
    float m_vOffy; // offset 0x10, size 0x4
    float m_vOffz; // offset 0x14, size 0x4
    float m_vDirSpotx; // offset 0x18, size 0x4
    float m_vDirSpoty; // offset 0x1C, size 0x4
    float m_vDirSpotz; // offset 0x20, size 0x4
    float m_falloffStartAngle; // offset 0x24, size 0x4
    float m_falloffEndAngle; // offset 0x28, size 0x4
    float m_falloffStartDistance; // offset 0x2C, size 0x4
    float m_falloffEndDistance; // offset 0x30, size 0x4
};
// total size: 0x38
struct ResData {
    // Members
    class VECTOR objectStates; // offset 0x0, size 0x4
    unsigned char bLoadOnStartup; // offset 0x4, size 0x1
    unsigned char bIsWallObj; // offset 0x5, size 0x1
    unsigned char bIsCounter; // offset 0x6, size 0x1
    unsigned char bIsSink; // offset 0x7, size 0x1
    unsigned char bIsSwimPool; // offset 0x8, size 0x1
    unsigned char bIsMtModelMtObj; // offset 0x9, size 0x1
    unsigned char bShadowCaster; // offset 0xA, size 0x1
    unsigned char bConstantUpdate; // offset 0xB, size 0x1
    unsigned char bLightSource; // offset 0xC, size 0x1
    unsigned char bDynamicLight; // offset 0xD, size 0x1
    unsigned int uMemoryCost; // offset 0x10, size 0x4
    unsigned int uPerformanceCost; // offset 0x14, size 0x4
    unsigned int datasetID_unused; // offset 0x18, size 0x4
    unsigned int eorQueueShaderID; // offset 0x1C, size 0x4
    unsigned int eorcharacterID; // offset 0x20, size 0x4
    unsigned int eShadowId; // offset 0x24, size 0x4
    float fVertTrans; // offset 0x28, size 0x4
    float fXScale; // offset 0x2C, size 0x4
    float fYScale; // offset 0x30, size 0x4
    struct ObjLightDef * pLightDef; // offset 0x34, size 0x4
};
// total size: 0xC4
struct ObjDefinition {
    // Members
    int version; // offset 0x0, size 0x4
    signed short initialStackSize; // offset 0x4, size 0x2
    signed short baseGraphic; // offset 0x6, size 0x2
    signed short numGraphics; // offset 0x8, size 0x2
    signed short objectGroup; // offset 0xA, size 0x2
    signed short aspirationThreshhold; // offset 0xC, size 0x2
    signed short treeTableID; // offset 0xE, size 0x2
    signed short interactionGroup; // offset 0x10, size 0x2
    signed short type; // offset 0x12, size 0x2
    signed short masterID; // offset 0x14, size 0x2
    signed short subIndex; // offset 0x16, size 0x2
    signed short isCarryable; // offset 0x18, size 0x2
    signed short animTableID; // offset 0x1A, size 0x2
    int guid; // offset 0x1C, size 0x4
    signed short disabled; // offset 0x20, size 0x2
    signed short portalTreeID_unused; // offset 0x22, size 0x2
    signed short price; // offset 0x24, size 0x2
    signed short bodyStringsID; // offset 0x26, size 0x2
    signed short slotsID; // offset 0x28, size 0x2
    signed short objectStyle; // offset 0x2A, size 0x2
    signed short usesFnTable; // offset 0x2C, size 0x2
    signed short unused; // offset 0x2E, size 0x2
    signed short prepTreeID_unused; // offset 0x30, size 0x2
    signed short armorIndex; // offset 0x32, size 0x2
    signed short surfaceTreeID_unused; // offset 0x34, size 0x2
    signed short disposeTreeID_unused; // offset 0x36, size 0x2
    signed short objectHeight; // offset 0x38, size 0x2
    signed short multiTileLeadObject; // offset 0x3A, size 0x2
    signed short washDishTreeID_unused; // offset 0x3C, size 0x2
    signed short petOrientation; // offset 0x3E, size 0x2
    signed short scratchMotive; // offset 0x40, size 0x2
    signed short chewMotive; // offset 0x42, size 0x2
    signed short salePrice; // offset 0x44, size 0x2
    signed short initialDepreciation; // offset 0x46, size 0x2
    signed short dailyDepreciation; // offset 0x48, size 0x2
    signed short selfDepreciating; // offset 0x4A, size 0x2
    signed short depreciationLimit; // offset 0x4C, size 0x2
    signed short roomFlags; // offset 0x4E, size 0x2
    signed short functionFlags; // offset 0x50, size 0x2
    signed short catalogID; // offset 0x52, size 0x2
    signed short globalSimulationObject; // offset 0x54, size 0x2
    signed short initTreeID_unused; // offset 0x56, size 0x2
    signed short placementTreeID_unused; // offset 0x58, size 0x2
    signed short userPickupTreeID_unused; // offset 0x5A, size 0x2
    signed short wallStyle; // offset 0x5C, size 0x2
    signed short loadTreeID_unused; // offset 0x5E, size 0x2
    signed short userPlacementTreeID_unused; // offset 0x60, size 0x2
    signed short objectVersion; // offset 0x62, size 0x2
    signed short roomChangedTreeID_unused; // offset 0x64, size 0x2
    signed short motiveEffectsID; // offset 0x66, size 0x2
    signed short cleanupTreeID_unused; // offset 0x68, size 0x2
    signed short levelInfoRequestTreeID_unused; // offset 0x6A, size 0x2
    signed short catalogPopupID; // offset 0x6C, size 0x2
    signed short servingSurfaceTreeID_unused; // offset 0x6E, size 0x2
    signed short levelOffset; // offset 0x70, size 0x2
    signed short shadow; // offset 0x72, size 0x2
    signed short numAttributes; // offset 0x74, size 0x2
    signed short numStaticAttributes; // offset 0x76, size 0x2
    signed short queueSkippedTreeID_unused; // offset 0x78, size 0x2
    signed short frontFaceDirection; // offset 0x7A, size 0x2
    signed short wallAdjacencyChangedTreeID_unused; // offset 0x7C, size 0x2
    signed short leadObject; // offset 0x7E, size 0x2
    signed short dynSpriteBaseID; // offset 0x80, size 0x2
    signed short numDynSprites; // offset 0x82, size 0x2
    signed short chairEntryFlags; // offset 0x84, size 0x2
    signed short tileWidth; // offset 0x86, size 0x2
    signed short isOwnable; // offset 0x88, size 0x2
    signed short buildModeType; // offset 0x8A, size 0x2
    int originalGUID; // offset 0x8C, size 0x4
    int originalSuitGUID; // offset 0x90, size 0x4
    signed short pickupTreeID_unused; // offset 0x94, size 0x2
    signed short thumbnailGraphicIndex; // offset 0x96, size 0x2
    signed short shadowFlags; // offset 0x98, size 0x2
    signed short footprintInsetMask; // offset 0x9A, size 0x2
    signed short hasAmbientSound; // offset 0x9C, size 0x2
    signed short shadowBrightness; // offset 0x9E, size 0x2
    signed short shouldNotUseBoneOrientation; // offset 0xA0, size 0x2
    signed short customWallStyleID; // offset 0xA2, size 0x2
    signed short ratingHunger; // offset 0xA4, size 0x2
    signed short ratingComfort; // offset 0xA6, size 0x2
    signed short ratingHygiene; // offset 0xA8, size 0x2
    signed short ratingBladder; // offset 0xAA, size 0x2
    signed short ratingEnergy; // offset 0xAC, size 0x2
    signed short ratingFun; // offset 0xAE, size 0x2
    signed short ratingRoom; // offset 0xB0, size 0x2
    signed short ratingSkillFlags; // offset 0xB2, size 0x2
    signed short numTypeAttributes; // offset 0xB4, size 0x2
    signed short miscFlags; // offset 0xB6, size 0x2
    int typeAttrGUID; // offset 0xB8, size 0x4
    signed short resID; // offset 0xBC, size 0x2
    struct ResData * pResData; // offset 0xC0, size 0x4
};
// total size: 0x20
class ObjectDataObjDefinition : public ObjectDataInterface {
    // Members
    class basic_string m_resourceName; // offset 0x4, size 0x10
    unsigned int mRefCount; // offset 0x14, size 0x4
    signed short mResID; // offset 0x18, size 0x2
    unsigned char mbOwnData; // offset 0x1A, size 0x1
    unsigned char m_bOwnResData; // offset 0x1B, size 0x1
    struct ObjDefinition * mpData; // offset 0x1C, size 0x4
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class ITreeTable * mpData; // offset 0x0, size 0x4
};
enum /* @enum$18408syncaudio_cpp */ {
    TTAB_NOTYPE = 0,
    TTAB_MAX = 1,
    TTAB_MOD = 2,
    TTAB_ATT = 3,
};
// total size: 0x14
struct TTAB_Tuning_VALUES {
    // Members
    int index; // offset 0x0, size 0x4
    int motive; // offset 0x4, size 0x4
    enum /* @enum$18408syncaudio_cpp */ {
        TTAB_NOTYPE = 0,
        TTAB_MAX = 1,
        TTAB_MOD = 2,
        TTAB_ATT = 3,
    } type; // offset 0x8, size 0x4
    int value; // offset 0xC, size 0x4
    int att; // offset 0x10, size 0x4
};
// total size: 0x8
struct TTAB_Tuning {
    // Members
    int numValues; // offset 0x0, size 0x4
    struct TTAB_Tuning_VALUES * values; // offset 0x4, size 0x4
};
enum tObjectDataType {
    kObjectDataTypeNone = 0,
    kObjectDataTypeQuickData = 1,
    kObjectDataTypeIFF = 2,
    kObjectDataTypeDatabase = 4,
    kObjectDataTypeResource = 8,
};
// total size: 0x8
class ObjectDataID {
    // Members
    unsigned int mNamespaceID; // offset 0x0, size 0x4
    unsigned short mResourceID; // offset 0x4, size 0x2
};
// total size: 0x4
class IObjectDataResource : public IConsoleUnknown {};
enum ObjEntryPoint {
    kOEP_init = 0,
    kOEP_main = 1,
    kOEP_load = 2,
    kOEP_cleanup = 3,
    kOEP_queueSkipped = 4,
    kOEP_allowIntersection = 5,
    kOEP_wallAdjacencyChanged = 6,
    kOEP_roomChanged = 7,
    kOEP_mtAdjUpdate = 8,
    kOEP_placement = 9,
    kOEP_pickup = 10,
    kOEP_userPlacement = 11,
    kOEP_userPickup = 12,
    kOEP_influence = 13,
    kOEP_servingSurface = 14,
    kOEP_portal = 15,
    kOEP_gardening = 16,
    kOEP_lotShutdown = 17,
    kOEP_prep = 18,
    kOEP_cook = 19,
    kOEP_surface = 20,
    kOEP_dispose = 21,
    kOEP_food = 22,
    kOEP_pickupFromSlot = 23,
    kOEP_washDish = 24,
    kOEP_eatingSurface = 25,
    kOEP_sit = 26,
    kOEP_stand = 27,
    kOEP_clean = 28,
    kOEP_repair = 29,
    kOEP_inventoryAdd = 30,
    kOEP_inventoryRemove = 31,
    kOEP_weatherEffects = 32,
    kOEP_listenForInput = 33,
    kOEP_buildModeNotify = 34,
    kOEP_numEntryPoints = 35,
};
// total size: 0x4
class ObjFnTable : public IObjectDataResource {};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class ObjFnTable * mpData; // offset 0x0, size 0x4
};
// total size: 0x10
struct /* @class$8188syncaudio_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
union /* @class$8187syncaudio_cpp */ {
    float d[4]; // offset 0x0, size 0x10
    // total size: 0x10
    struct /* @class$8188syncaudio_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        float w; // offset 0xC, size 0x4
    } __anon$8189; // offset 0x0, size 0x10
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0xC
struct /* @class$5537syncaudio_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
union /* @class$5536syncaudio_cpp */ {
    float d[3]; // offset 0x0, size 0xC
    // total size: 0xC
    struct /* @class$5537syncaudio_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
    } __anon$5538; // offset 0x0, size 0xC
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
struct /* @class$5282syncaudio_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
union /* @class$5281syncaudio_cpp */ {
    float d[2]; // offset 0x0, size 0x8
    // total size: 0x8
    struct /* @class$5282syncaudio_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } __anon$5283; // offset 0x0, size 0x8
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
class EVec2 {
    // Members
public:
    union { // inferred
        union /* @class$5281syncaudio_cpp */ {
            float d[2]; // offset 0x0, size 0x8
            // total size: 0x8
            struct /* @class$5282syncaudio_cpp */ {
                // Members
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
            } __anon$5283; // offset 0x0, size 0x8
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
        } __anon$5284; // offset 0x0, size 0x8
        float d[2]; // offset 0x0, size 0x8
        // total size: 0x8
        struct /* @class$5282syncaudio_cpp */ {
            // Members
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
        } __anon$5283; // offset 0x0, size 0x8
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
        };
    };
};
// total size: 0xC
class EVec3 {
    // Members
public:
    union { // inferred
        union /* @class$5536syncaudio_cpp */ {
            float d[3]; // offset 0x0, size 0xC
            // total size: 0xC
            struct /* @class$5537syncaudio_cpp */ {
                // Members
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
                float z; // offset 0x8, size 0x4
            } __anon$5538; // offset 0x0, size 0xC
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        } __anon$5539; // offset 0x0, size 0xC
        float d[3]; // offset 0x0, size 0xC
        // total size: 0xC
        struct /* @class$5537syncaudio_cpp */ {
            // Members
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        } __anon$5538; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
    };
};
// total size: 0x10
class EVec4 {
    // Static members
    static class EVec4 s_vW; // size: 0x10
    static class EVec4 s_vZ; // size: 0x10
    static class EVec4 s_vY; // size: 0x10
    static class EVec4 s_vX; // size: 0x10
    static class EVec4 s_vZero; // size: 0x10

    // Members
public:
    union { // inferred
        union /* @class$8187syncaudio_cpp */ {
            float d[4]; // offset 0x0, size 0x10
            // total size: 0x10
            struct /* @class$8188syncaudio_cpp */ {
                // Members
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
                float z; // offset 0x8, size 0x4
                float w; // offset 0xC, size 0x4
            } __anon$8189; // offset 0x0, size 0x10
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        } __anon$8190; // offset 0x0, size 0x10
        float d[4]; // offset 0x0, size 0x10
        // total size: 0x10
        struct /* @class$8188syncaudio_cpp */ {
            // Members
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        } __anon$8189; // offset 0x0, size 0x10
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        };
    };
};
// total size: 0x20
struct EMaterial {
    // Members
    class EVec4 vDiffuseColor; // offset 0x0, size 0x10
    class EVec4 vAmbientColor; // offset 0x10, size 0x10
};
// total size: 0x20
struct ETextureDef {
    // Members
    void * (* pfnAllocAlign)(unsigned int, unsigned int); // offset 0x0, size 0x4
    void (* pfnFree)(void *); // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float deadMipmapShift; // offset 0xC, size 0x4
    unsigned short xsize; // offset 0x10, size 0x2
    unsigned short ysize; // offset 0x12, size 0x2
    unsigned short paletteSize; // offset 0x14, size 0x2
    unsigned short mipMapLevels; // offset 0x16, size 0x2
    unsigned char imageFormat; // offset 0x18, size 0x1
    unsigned char paletteFormat; // offset 0x19, size 0x1
    unsigned char bitsPerImagePixel; // offset 0x1A, size 0x1
    unsigned char bitsPerPaletteEntry; // offset 0x1B, size 0x1
    const char * name; // offset 0x1C, size 0x4
};
enum ETextureUpdateType {
    E_TEXUPDATE_READWRITE = 0,
    E_TEXUPDATE_READONLY = 1,
    E_TEXUPDATE_DISCARD = 2,
    E_TEXUPDATE_PALETTE = 3,
    E_TEXUPDATE_UNDEFINED = 4,
};
// total size: 0x28
class ETexture {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    struct ETextureDef m_textureDef; // offset 0x4, size 0x20
    unsigned int m_validsig; // offset 0x24, size 0x4
};
// total size: 0x38
struct EShaderRenderPassDef {
    // Members
    class ETexture * pTexture; // offset 0x0, size 0x4
    class ETexture * * ppTextureList; // offset 0x4, size 0x4
    unsigned char * sequenceIdxList; // offset 0x8, size 0x4
    unsigned short rasterModes; // offset 0xC, size 0x2
    unsigned char passFlags; // offset 0xE, size 0x1
    unsigned char blendSettings; // offset 0xF, size 0x1
    float alphaTestThreshold; // offset 0x10, size 0x4
    float mipmapShift; // offset 0x14, size 0x4
    unsigned char blendFix; // offset 0x18, size 0x1
    unsigned char combine; // offset 0x19, size 0x1
    unsigned char textureGen; // offset 0x1A, size 0x1
    unsigned char projection; // offset 0x1B, size 0x1
    unsigned char textureCount; // offset 0x1C, size 0x1
    unsigned char framesPerTexture; // offset 0x1D, size 0x1
    unsigned short sequenceCount; // offset 0x1E, size 0x2
    class EVec2 vScrollSpeed; // offset 0x20, size 0x8
    class EVec2 vUVScale; // offset 0x28, size 0x8
    class EVec2 vUVOffset; // offset 0x30, size 0x8
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct EShaderRenderPassDef * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x38
struct EShaderDef {
    // Members
    unsigned char nRenderPasses; // offset 0x0, size 0x1
    signed short sortOffset; // offset 0x2, size 0x2
    unsigned int shaderFlags; // offset 0x4, size 0x4
    unsigned int geometryModes; // offset 0x8, size 0x4
    struct EMaterial mat; // offset 0xC, size 0x20
    class TArray rp; // offset 0x2C, size 0xC
};
// total size: 0x24
struct EShaderUpdate {
    // Members
    class EShader * pShader; // offset 0x0, size 0x4
    class EVec2 vScrollPos[3]; // offset 0x4, size 0x18
    struct EShaderUpdate * pLast; // offset 0x1C, size 0x4
    struct EShaderUpdate * pNext; // offset 0x20, size 0x4
};
// total size: 0xC
struct ENodeListNode {
    // Members
    unsigned int data; // offset 0x0, size 0x4
    struct ENodeListNode * pLast; // offset 0x4, size 0x4
    struct ENodeListNode * pNext; // offset 0x8, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct ENodeListNode * m_pHead; // offset 0x0, size 0x4
    struct ENodeListNode * m_pTail; // offset 0x4, size 0x4
};
// total size: 0x8
class ENodeList {
    // Members
protected:
    class TLinkedList m_l; // offset 0x0, size 0x8
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x18
class EAllocGroup {
    // Members
protected:
    class TNodeList m_allocList; // offset 0x0, size 0xC
    class EAHeap * m_allocHeap; // offset 0xC, size 0x4
    int m_segmentSize; // offset 0x10, size 0x4
    int m_pos; // offset 0x14, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x8
struct EDLEntry {
    // Members
    unsigned long long align_data; // offset 0x0, size 0x8
};
// total size: 0x68
class EDL {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EAllocGroup m_allocGroup; // offset 0x4, size 0x18
    class EAllocGroup m_flushableAllocGroup; // offset 0x1C, size 0x18
protected:
    class TNodeList m_textureRefs; // offset 0x34, size 0xC
    class TNodeList m_dlRefs; // offset 0x40, size 0xC
    struct EDLEntry * m_pStart; // offset 0x4C, size 0x4
    unsigned char m_terminated; // offset 0x50, size 0x1
    int m_type; // offset 0x54, size 0x4
    int m_nVerts; // offset 0x58, size 0x4
    int m_stripSum; // offset 0x5C, size 0x4
    int m_nStrips; // offset 0x60, size 0x4
public:
    int m_matricesUsed; // offset 0x64, size 0x4
};
enum RCMode {
    RC_IMMEDIATE = 0,
    RC_RETAINED = 1,
};
// total size: 0x40
struct /* @class$9470syncaudio_cpp */ {
    // Members
    float _00; // offset 0x0, size 0x4
    float _01; // offset 0x4, size 0x4
    float _02; // offset 0x8, size 0x4
    float _03; // offset 0xC, size 0x4
    float _10; // offset 0x10, size 0x4
    float _11; // offset 0x14, size 0x4
    float _12; // offset 0x18, size 0x4
    float _13; // offset 0x1C, size 0x4
    float _20; // offset 0x20, size 0x4
    float _21; // offset 0x24, size 0x4
    float _22; // offset 0x28, size 0x4
    float _23; // offset 0x2C, size 0x4
    float _30; // offset 0x30, size 0x4
    float _31; // offset 0x34, size 0x4
    float _32; // offset 0x38, size 0x4
    float _33; // offset 0x3C, size 0x4
};
union /* @class$9469syncaudio_cpp */ {
    float d[4][4]; // offset 0x0, size 0x40
    // total size: 0x40
    struct /* @class$9470syncaudio_cpp */ {
        // Members
        float _00; // offset 0x0, size 0x4
        float _01; // offset 0x4, size 0x4
        float _02; // offset 0x8, size 0x4
        float _03; // offset 0xC, size 0x4
        float _10; // offset 0x10, size 0x4
        float _11; // offset 0x14, size 0x4
        float _12; // offset 0x18, size 0x4
        float _13; // offset 0x1C, size 0x4
        float _20; // offset 0x20, size 0x4
        float _21; // offset 0x24, size 0x4
        float _22; // offset 0x28, size 0x4
        float _23; // offset 0x2C, size 0x4
        float _30; // offset 0x30, size 0x4
        float _31; // offset 0x34, size 0x4
        float _32; // offset 0x38, size 0x4
        float _33; // offset 0x3C, size 0x4
    } __anon$9471; // offset 0x0, size 0x40
    float _00; // offset 0x0, size 0x4
    float _01; // offset 0x4, size 0x4
    float _02; // offset 0x8, size 0x4
    float _03; // offset 0xC, size 0x4
    float _10; // offset 0x10, size 0x4
    float _11; // offset 0x14, size 0x4
    float _12; // offset 0x18, size 0x4
    float _13; // offset 0x1C, size 0x4
    float _20; // offset 0x20, size 0x4
    float _21; // offset 0x24, size 0x4
    float _22; // offset 0x28, size 0x4
    float _23; // offset 0x2C, size 0x4
    float _30; // offset 0x30, size 0x4
    float _31; // offset 0x34, size 0x4
    float _32; // offset 0x38, size 0x4
    float _33; // offset 0x3C, size 0x4
};
// total size: 0x40
class EMat4 {
    // Members
public:
    union { // inferred
        union /* @class$9469syncaudio_cpp */ {
            float d[4][4]; // offset 0x0, size 0x40
            // total size: 0x40
            struct /* @class$9470syncaudio_cpp */ {
                // Members
                float _00; // offset 0x0, size 0x4
                float _01; // offset 0x4, size 0x4
                float _02; // offset 0x8, size 0x4
                float _03; // offset 0xC, size 0x4
                float _10; // offset 0x10, size 0x4
                float _11; // offset 0x14, size 0x4
                float _12; // offset 0x18, size 0x4
                float _13; // offset 0x1C, size 0x4
                float _20; // offset 0x20, size 0x4
                float _21; // offset 0x24, size 0x4
                float _22; // offset 0x28, size 0x4
                float _23; // offset 0x2C, size 0x4
                float _30; // offset 0x30, size 0x4
                float _31; // offset 0x34, size 0x4
                float _32; // offset 0x38, size 0x4
                float _33; // offset 0x3C, size 0x4
            } __anon$9471; // offset 0x0, size 0x40
            float _00; // offset 0x0, size 0x4
            float _01; // offset 0x4, size 0x4
            float _02; // offset 0x8, size 0x4
            float _03; // offset 0xC, size 0x4
            float _10; // offset 0x10, size 0x4
            float _11; // offset 0x14, size 0x4
            float _12; // offset 0x18, size 0x4
            float _13; // offset 0x1C, size 0x4
            float _20; // offset 0x20, size 0x4
            float _21; // offset 0x24, size 0x4
            float _22; // offset 0x28, size 0x4
            float _23; // offset 0x2C, size 0x4
            float _30; // offset 0x30, size 0x4
            float _31; // offset 0x34, size 0x4
            float _32; // offset 0x38, size 0x4
            float _33; // offset 0x3C, size 0x4
        } __anon$9472; // offset 0x0, size 0x40
        float d[4][4]; // offset 0x0, size 0x40
        // total size: 0x40
        struct /* @class$9470syncaudio_cpp */ {
            // Members
            float _00; // offset 0x0, size 0x4
            float _01; // offset 0x4, size 0x4
            float _02; // offset 0x8, size 0x4
            float _03; // offset 0xC, size 0x4
            float _10; // offset 0x10, size 0x4
            float _11; // offset 0x14, size 0x4
            float _12; // offset 0x18, size 0x4
            float _13; // offset 0x1C, size 0x4
            float _20; // offset 0x20, size 0x4
            float _21; // offset 0x24, size 0x4
            float _22; // offset 0x28, size 0x4
            float _23; // offset 0x2C, size 0x4
            float _30; // offset 0x30, size 0x4
            float _31; // offset 0x34, size 0x4
            float _32; // offset 0x38, size 0x4
            float _33; // offset 0x3C, size 0x4
        } __anon$9471; // offset 0x0, size 0x40
        struct { // inferred
            float _00; // offset 0x0, size 0x4
            float _01; // offset 0x4, size 0x4
            float _02; // offset 0x8, size 0x4
            float _03; // offset 0xC, size 0x4
            float _10; // offset 0x10, size 0x4
            float _11; // offset 0x14, size 0x4
            float _12; // offset 0x18, size 0x4
            float _13; // offset 0x1C, size 0x4
            float _20; // offset 0x20, size 0x4
            float _21; // offset 0x24, size 0x4
            float _22; // offset 0x28, size 0x4
            float _23; // offset 0x2C, size 0x4
            float _30; // offset 0x30, size 0x4
            float _31; // offset 0x34, size 0x4
            float _32; // offset 0x38, size 0x4
            float _33; // offset 0x3C, size 0x4
        };
    };
};
// total size: 0x50
struct EGEVert {
    // Members
    class EVec4 vModel; // offset 0x0, size 0x10
    int normal[4]; // offset 0x10, size 0x10
    class EVec4 tc; // offset 0x20, size 0x10
    unsigned int color[4]; // offset 0x30, size 0x10
    unsigned int weights[4]; // offset 0x40, size 0x10
};
// total size: 0x10
struct EAmbLight {
    // Members
    class EVec3 vColor; // offset 0x0, size 0xC
    unsigned int pad; // offset 0xC, size 0x4
};
// total size: 0x18
struct EDirLight {
    // Members
    class EVec3 vColor; // offset 0x0, size 0xC
    class EVec3 vDir; // offset 0xC, size 0xC
};
// total size: 0x10
class EBoundSphere {
    // Members
public:
    class EVec3 vCenter; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x10
class DigestGeomShaderPtr {
    // Members
public:
    signed short m_nNode; // offset 0x0, size 0x2
    signed short m_nNodeStateFlags; // offset 0x2, size 0x2
    class ERShader * m_pShader; // offset 0x4, size 0x4
    unsigned int m_nShaderFlags; // offset 0x8, size 0x4
    class EDL * m_pDL; // offset 0xC, size 0x4
};
// total size: 0xE
struct MdfData {
    // Members
    unsigned char hierarchical; // offset 0x0, size 0x1
    unsigned char intVerts; // offset 0x1, size 0x1
    unsigned char drawSorted; // offset 0x2, size 0x1
    unsigned char weldable; // offset 0x3, size 0x1
    unsigned char dontFrontPlaneFade; // offset 0x4, size 0x1
    unsigned char dontInterestFade; // offset 0x5, size 0x1
    unsigned char dontCull; // offset 0x6, size 0x1
    unsigned char isWall; // offset 0x7, size 0x1
    unsigned char useLattice; // offset 0x8, size 0x1
    unsigned char morphTarget; // offset 0x9, size 0x1
    unsigned char hasMorphTargets; // offset 0xA, size 0x1
    unsigned char castsShadows; // offset 0xB, size 0x1
    unsigned char receivesShadows; // offset 0xC, size 0x1
    unsigned char dynamicSubdivision; // offset 0xD, size 0x1
};
// total size: 0x4C
struct ESMSStrip {
    // Members
    void * vertPositions; // offset 0x0, size 0x4
    void * vertTcs; // offset 0x4, size 0x4
    signed char * vertNormals; // offset 0x8, size 0x4
    unsigned char * vertColors; // offset 0xC, size 0x4
    unsigned char * vertWeights; // offset 0x10, size 0x4
    unsigned short * vertIndices; // offset 0x14, size 0x4
    unsigned short * vertFlags; // offset 0x18, size 0x4
    signed short * vertMorphDeltas[4]; // offset 0x1C, size 0x10
    unsigned int nVerts; // offset 0x2C, size 0x4
    unsigned int nIndices; // offset 0x30, size 0x4
    unsigned int dlsize; // offset 0x34, size 0x4
    unsigned int indexStride; // offset 0x38, size 0x4
    unsigned char * pOther; // offset 0x3C, size 0x4
    unsigned char mIndices[4]; // offset 0x40, size 0x4
    unsigned short stripLength; // offset 0x44, size 0x2
    unsigned char weighted; // offset 0x46, size 0x1
    unsigned char cMatrices; // offset 0x47, size 0x1
    unsigned char matricesDL; // offset 0x48, size 0x1
    unsigned char stripId; // offset 0x49, size 0x1
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct ESMSStrip * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x94
struct _latticeheader {
    // Members
    char name[128]; // offset 0x0, size 0x80
    int id; // offset 0x80, size 0x4
    int numUCtrlPnt; // offset 0x84, size 0x4
    int numVCtrlPnt; // offset 0x88, size 0x4
    int numWCtrlPnt; // offset 0x8C, size 0x4
    int numTotalKeys; // offset 0x90, size 0x4
};
// total size: 0x6
struct _IntVec3 {
    // Members
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
    signed short z; // offset 0x4, size 0x2
};
// total size: 0x4
struct _LatticeCtrlPntNode {
    // Members
    struct _IntVec3 * * * aaakCtrlPoint; // offset 0x0, size 0x4
};
// total size: 0xDC
class BSplineVolume {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct _latticeheader m_header; // offset 0x4, size 0x94
    struct _LatticeCtrlPntNode * m_ctrlPntNodeList; // offset 0x98, size 0x4
    struct _IntVec3 * * * m_aaakCtrlPointDeltas; // offset 0x9C, size 0x4
private:
    unsigned char m_storedDeltas; // offset 0xA0, size 0x1
    unsigned char m_morphDirty; // offset 0xA1, size 0x1
    float * m_weightList; // offset 0xA4, size 0x4
    class EVec3 m_min; // offset 0xA8, size 0xC
    class EVec3 m_max; // offset 0xB4, size 0xC
    class EVec3 m_invNormalizeVec; // offset 0xC0, size 0xC
    float m_tens; // offset 0xCC, size 0x4
    float m_cont; // offset 0xD0, size 0x4
    float m_tenscont; // offset 0xD4, size 0x4
    float m_conttens; // offset 0xD8, size 0x4
};
// total size: 0x14
struct _UVWNode {
    // Members
    class EVec3 uvw; // offset 0x0, size 0xC
    int vertIdx; // offset 0xC, size 0x4
    int cell; // offset 0x10, size 0x4
};
// total size: 0xC
struct _LatticeNode {
    // Members
    class BSplineVolume * lattice; // offset 0x0, size 0x4
    int numVerts; // offset 0x4, size 0x4
    struct _UVWNode * vertList; // offset 0x8, size 0x4
};
// total size: 0x18
class EBound3 {
    // Members
public:
    class EVec3 vMin; // offset 0x0, size 0xC
    class EVec3 vMax; // offset 0xC, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    class BSplineVolume * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x20
struct LightData {
    // Members
    class EVec3 m_position; // offset 0x0, size 0xC
    float m_radius; // offset 0xC, size 0x4
    class EVec3 m_color; // offset 0x10, size 0xC
    class EILight * m_light; // offset 0x1C, size 0x4
};
// total size: 0x20
struct PortalData {
    // Members
    struct LightData * m_lights[8]; // offset 0x0, size 0x20
};
// total size: 0x8
struct LightWeight {
    // Members
    signed short m_lightId; // offset 0x0, size 0x2
    float m_weight; // offset 0x4, size 0x4
};
// total size: 0xB8
class RoomData {
    // Members
public:
    struct LightData m_ambient; // offset 0x0, size 0x20
    struct LightData m_directional[4]; // offset 0x20, size 0x80
    int m_nNumDirectional; // offset 0xA0, size 0x4
    float m_diffuseIntensity; // offset 0xA4, size 0x4
    int m_portalLightsBegin; // offset 0xA8, size 0x4
    int m_portalLightsEnd; // offset 0xAC, size 0x4
    int m_pointLightsBegin; // offset 0xB0, size 0x4
    int m_pointLightsEnd; // offset 0xB4, size 0x4
};
// total size: 0x24
struct VertexData {
    // Members
    char m_roomIds[4]; // offset 0x0, size 0x4
    signed short m_lightIds[4][4]; // offset 0x4, size 0x20
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x2ABFC
class ELightGrid {
    // Members
    int m_initStage; // offset 0x0, size 0x4
    int m_numStableFrames; // offset 0x4, size 0x4
    int m_portalLightsBegin; // offset 0x8, size 0x4
    int m_portalLightsEnd; // offset 0xC, size 0x4
    int m_pointLightsBegin; // offset 0x10, size 0x4
    int m_pointLightsEnd; // offset 0x14, size 0x4
    struct LightData m_lights[512]; // offset 0x18, size 0x4000
    struct PortalData m_portalData[256]; // offset 0x4018, size 0x2000
    int m_roomDataCount; // offset 0x6018, size 0x4
    class RoomData m_roomData[40]; // offset 0x601C, size 0x1CC0
    struct VertexData m_vertices[63][63]; // offset 0x7CDC, size 0x22E24
    struct ELights m_outerLotLights; // offset 0x2AB00, size 0xF8
    unsigned char m_isOutdated; // offset 0x2ABF8, size 0x1
    unsigned char m_isSetupCompleted; // offset 0x2ABF9, size 0x1
};
// total size: 0x10
class BitArray2D {
    // Members
public:
    unsigned char m_xOffset; // offset 0x0, size 0x1
    unsigned char m_yOffset; // offset 0x1, size 0x1
    unsigned char m_xSize; // offset 0x2, size 0x1
    unsigned char m_ySize; // offset 0x3, size 0x1
    unsigned char * m_Data; // offset 0x4, size 0x4
    unsigned int m_xByteCount; // offset 0x8, size 0x4
    unsigned int m_ByteCount; // offset 0xC, size 0x4
};
// total size: 0x10
struct /* @class$13207syncaudio_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
union /* @class$13206syncaudio_cpp */ {
    float d[4]; // offset 0x0, size 0x10
    // total size: 0x10
    struct /* @class$13207syncaudio_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        float w; // offset 0xC, size 0x4
    } __anon$13208; // offset 0x0, size 0x10
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x10
class EQuat {
    // Members
public:
    union { // inferred
        union /* @class$13206syncaudio_cpp */ {
            float d[4]; // offset 0x0, size 0x10
            // total size: 0x10
            struct /* @class$13207syncaudio_cpp */ {
                // Members
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
                float z; // offset 0x8, size 0x4
                float w; // offset 0xC, size 0x4
            } __anon$13208; // offset 0x0, size 0x10
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        } __anon$13209; // offset 0x0, size 0x10
        float d[4]; // offset 0x0, size 0x10
        // total size: 0x10
        struct /* @class$13207syncaudio_cpp */ {
            // Members
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        } __anon$13208; // offset 0x0, size 0x10
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        };
    };
};
// total size: 0x6
struct /* @class$13518syncaudio_cpp */ {
    // Members
    unsigned short x; // offset 0x0, size 0x2
    unsigned short y; // offset 0x2, size 0x2
    unsigned short z; // offset 0x4, size 0x2
};
union /* @class$13517syncaudio_cpp */ {
    unsigned short d[3]; // offset 0x0, size 0x6
    // total size: 0x6
    struct /* @class$13518syncaudio_cpp */ {
        // Members
        unsigned short x; // offset 0x0, size 0x2
        unsigned short y; // offset 0x2, size 0x2
        unsigned short z; // offset 0x4, size 0x2
    } __anon$13527; // offset 0x0, size 0x6
    unsigned short x; // offset 0x0, size 0x2
    unsigned short y; // offset 0x2, size 0x2
    unsigned short z; // offset 0x4, size 0x2
};
// total size: 0x6
class FVec3 {
    // Members
    union { // inferred
        union /* @class$13517syncaudio_cpp */ {
            unsigned short d[3]; // offset 0x0, size 0x6
            // total size: 0x6
            struct /* @class$13518syncaudio_cpp */ {
                // Members
                unsigned short x; // offset 0x0, size 0x2
                unsigned short y; // offset 0x2, size 0x2
                unsigned short z; // offset 0x4, size 0x2
            } __anon$13527; // offset 0x0, size 0x6
            unsigned short x; // offset 0x0, size 0x2
            unsigned short y; // offset 0x2, size 0x2
            unsigned short z; // offset 0x4, size 0x2
        } __anon$13528; // offset 0x0, size 0x6
        unsigned short d[3]; // offset 0x0, size 0x6
        // total size: 0x6
        struct /* @class$13518syncaudio_cpp */ {
            // Members
            unsigned short x; // offset 0x0, size 0x2
            unsigned short y; // offset 0x2, size 0x2
            unsigned short z; // offset 0x4, size 0x2
        } __anon$13529; // offset 0x0, size 0x6
        struct { // inferred
            unsigned short x; // offset 0x0, size 0x2
            unsigned short y; // offset 0x2, size 0x2
            unsigned short z; // offset 0x4, size 0x2
        };
    };
};
// total size: 0x40
struct EACNodeState {
    // Members
    class EQuat qRot; // offset 0x0, size 0x10
    class EVec3 vTrans; // offset 0x10, size 0xC
    class EVec3 vScale; // offset 0x1C, size 0xC
    class FVec3 lightColor; // offset 0x28, size 0x6
    unsigned short pad0; // offset 0x2E, size 0x2
    float lightIntensity; // offset 0x30, size 0x4
    float lightAttenuationStart; // offset 0x34, size 0x4
    float cameraFOV; // offset 0x38, size 0x4
    unsigned int flags; // offset 0x3C, size 0x4
};
// total size: 0xC
struct EACAttributeStates {
    // Members
    struct EACNodeState * m_nodeStates; // offset 0x0, size 0x4
    unsigned char m_usingMorphWeights; // offset 0x4, size 0x1
    float * m_morphWeightStates; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    int * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xB8
class ECharacterNode {
    // Members
    int nParentIndex; // offset 0x0, size 0x4
    class TArray childIndices; // offset 0x4, size 0xC
    class EVec3 vPivot; // offset 0x10, size 0xC
    class EQuat qLocal; // offset 0x1C, size 0x10
    class EMat4 mLocalRot; // offset 0x30, size 0x40
    class EMat4 mInvLocalRot; // offset 0x70, size 0x40
    unsigned char localRotIsIdentity; // offset 0xB0, size 0x1
    class EString name; // offset 0xB4, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ECharacterNode * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x34
class ERCharacter : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    class TArray m_nodes; // offset 0x14, size 0xC
    class EBoundSphere m_boundSphere; // offset 0x20, size 0x10
    float m_radius; // offset 0x30, size 0x4
};
// total size: 0x4
class TRPtr {
    // Members
protected:
    class ERCharacter * m_p; // offset 0x0, size 0x4
};
// total size: 0x28
struct EAnimDef {
    // Members
    float fps; // offset 0x0, size 0x4
    float intensity; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    unsigned int bitdepth; // offset 0xC, size 0x4
    unsigned char rotAccum; // offset 0x10, size 0x1
    unsigned char endAction; // offset 0x11, size 0x1
    unsigned char blendType; // offset 0x12, size 0x1
    float blendM1; // offset 0x14, size 0x4
    float blendM2; // offset 0x18, size 0x4
    float blendDuration; // offset 0x1C, size 0x4
    float blendSpeed; // offset 0x20, size 0x4
    float blendThreshold; // offset 0x24, size 0x4
};
// total size: 0x24
class EAnimNodeDataPos : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int rot; // offset 0x4, size 0x4
    int scale; // offset 0x8, size 0x4
    int trans; // offset 0xC, size 0x4
    int visibility; // offset 0x10, size 0x4
    int lightColor; // offset 0x14, size 0x4
    int lightIntensity; // offset 0x18, size 0x4
    int lightAttenuationStart; // offset 0x1C, size 0x4
    int cameraFOV; // offset 0x20, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class EAnimNodeDataPos * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x8
class EMorphWeightChannelNodeDataPos : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int m_morphWeightChannelPos; // offset 0x4, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class EMorphWeightChannelNodeDataPos * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    float * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x14
class EBitArray {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int * m_p; // offset 0x4, size 0x4
    int m_size; // offset 0x8, size 0x4
    int m_allocSize; // offset 0xC, size 0x4
    int m_growBy; // offset 0x10, size 0x4
};
// total size: 0x14
class ERAnimBitArray : public EBitArray {};
// total size: 0xC
struct EAnimNote {
    // Members
    int m_time; // offset 0x0, size 0x4
    int m_kind; // offset 0x4, size 0x4
    class EString m_value; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct EAnimNote * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
enum EAnimEventType {
    E_ANIMEVENT_TYPE_SCRIPT = 0,
    E_ANIMEVENT_TYPE_SOUND = 1,
    E_ANIMEVENT_TYPES_COUNT = 2,
};
// total size: 0x50
struct EAnimEvent {
    // Members
    class EMat4 mOrient; // offset 0x0, size 0x40
    int nNode; // offset 0x40, size 0x4
    int frame; // offset 0x44, size 0x4
    unsigned int data; // offset 0x48, size 0x4
    enum EAnimEventType type; // offset 0x4C, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct EAnimEvent * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xB0
class ERAnim : public EResource {
    // Static members
    static unsigned long m_allocatedAnims; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int m_duration; // offset 0x14, size 0x4
    int m_nFrames; // offset 0x18, size 0x4
    class EVec3 m_vTransAccum; // offset 0x1C, size 0xC
    class EVec3 m_vRotAccum; // offset 0x28, size 0xC
    class TArray m_nodes; // offset 0x34, size 0xC
    class TArray m_morphWeightChannels; // offset 0x40, size 0xC
    float m_radius; // offset 0x4C, size 0x4
    class TArray m_constantData; // offset 0x50, size 0xC
    class ERAnimBitArray m_streamData; // offset 0x5C, size 0x14
    struct EAnimDef m_def; // offset 0x70, size 0x28
    class TArray m_notes; // offset 0x98, size 0xC
private:
    class TArray m_events; // offset 0xA4, size 0xC
};
// total size: 0x4
class TRPtr {
    // Members
protected:
    class ERAnim * m_p; // offset 0x0, size 0x4
};
enum RBNodeColor {
    RB_BLACK = 0,
    RB_RED = 1,
};
// total size: 0x20
struct ERedBlackTreeNode {
    // Members
    struct ERedBlackTreeNode * pLeft; // offset 0x0, size 0x4
    struct ERedBlackTreeNode * pRight; // offset 0x4, size 0x4
    struct ERedBlackTreeNode * pParent; // offset 0x8, size 0x4
    struct ERedBlackTreeNode * pLast; // offset 0xC, size 0x4
    struct ERedBlackTreeNode * pNext; // offset 0x10, size 0x4
    enum RBNodeColor color; // offset 0x14, size 0x4
    unsigned int key; // offset 0x18, size 0x4
    unsigned int value; // offset 0x1C, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct ERedBlackTreeNode * m_pHead; // offset 0x0, size 0x4
    struct ERedBlackTreeNode * m_pTail; // offset 0x4, size 0x4
};
// total size: 0x0
class RBIteratorPtrType {};
// total size: 0xC
class ERedBlackTree {
    // Static members
    static struct ERedBlackTreeNode m_sentinel; // size: 0x20

    // Members
protected:
    class TLinkedList m_list; // offset 0x0, size 0x8
    struct ERedBlackTreeNode * m_pRoot; // offset 0x8, size 0x4
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0x1C
struct ERotKeyframe {
    // Members
    class EQuat q; // offset 0x0, size 0x10
    int time; // offset 0x10, size 0x4
    float bias; // offset 0x14, size 0x4
    unsigned char c1continuous; // offset 0x18, size 0x1
};
// total size: 0x20
struct CachedKeyFrame {
    // Members
    struct ERotKeyframe m_KeyFrame; // offset 0x0, size 0x1C
    int m_Index; // offset 0x1C, size 0x4
};
// total size: 0x11C
class ERotDecomp {
    // Members
protected:
    class EQuat m_qn; // offset 0x0, size 0x10
    class EQuat m_bn; // offset 0x10, size 0x10
    class EQuat m_anp1; // offset 0x20, size 0x10
    class EQuat m_qnp1; // offset 0x30, size 0x10
    class EBitArray * m_pData; // offset 0x40, size 0x4
    int m_startDataPos; // offset 0x44, size 0x4
    int m_currentSplineStartFrame; // offset 0x48, size 0x4
    int m_currentSplineEndFrame; // offset 0x4C, size 0x4
    int m_nFrames; // offset 0x50, size 0x4
    int m_currentKeyframe; // offset 0x54, size 0x4
    int m_nKeyframes; // offset 0x58, size 0x4
    signed short m_nBitsKeyframe; // offset 0x5C, size 0x2
    signed char m_nBitsDeltaTime; // offset 0x5E, size 0x1
    signed char m_nBitsQuat; // offset 0x5F, size 0x1
    signed char m_nBitsBias; // offset 0x60, size 0x1
    float m_quatScale; // offset 0x64, size 0x4
    float m_biasScale; // offset 0x68, size 0x4
    float m_lastFrame; // offset 0x6C, size 0x4
    unsigned char m_qnContinuous; // offset 0x70, size 0x1
    unsigned char m_qnp1Continuous; // offset 0x71, size 0x1
    struct ERotKeyframe m_lastKeyFrame; // offset 0x74, size 0x1C
    int m_indexLastKeyFrame; // offset 0x90, size 0x4
    struct CachedKeyFrame m_CachedKeyFrames[4]; // offset 0x94, size 0x80
    int m_LastCacheInsertPosition; // offset 0x114, size 0x4
    unsigned int pad; // offset 0x118, size 0x4
};
// total size: 0xC
struct ERotDecomp1DofKeyframe {
    // Members
    float angle; // offset 0x0, size 0x4
    int time; // offset 0x4, size 0x4
    float bias; // offset 0x8, size 0x4
};
// total size: 0x50
class ERotDecomp1Dof {
    // Members
protected:
    class EBitArray * m_pData; // offset 0x0, size 0x4
    int m_startDataPos; // offset 0x4, size 0x4
    int m_currentSplineStartFrame; // offset 0x8, size 0x4
    int m_currentSplineEndFrame; // offset 0xC, size 0x4
    int m_nFrames; // offset 0x10, size 0x4
    int m_currentKeyframe; // offset 0x14, size 0x4
    int m_nKeyframes; // offset 0x18, size 0x4
    signed short m_nBitsKeyframe; // offset 0x1C, size 0x2
    signed char m_nBitsDeltaTime; // offset 0x1E, size 0x1
    signed char m_nBitsAngle; // offset 0x1F, size 0x1
    signed char m_nBitsBias; // offset 0x20, size 0x1
    float m_angleScale; // offset 0x24, size 0x4
    float m_angleOffset; // offset 0x28, size 0x4
    float m_biasScale; // offset 0x2C, size 0x4
    float m_lastFrame; // offset 0x30, size 0x4
    float m_qn; // offset 0x34, size 0x4
    float m_bn; // offset 0x38, size 0x4
    float m_anp1; // offset 0x3C, size 0x4
    float m_qnp1; // offset 0x40, size 0x4
    class EVec3 m_axis; // offset 0x44, size 0xC
};
// total size: 0x18
struct EVec3Keyframe {
    // Members
    class EVec3 v; // offset 0x0, size 0xC
    int time; // offset 0xC, size 0x4
    float bias; // offset 0x10, size 0x4
    unsigned char c1continuous; // offset 0x14, size 0x1
};
// total size: 0x7C
class EVec3Decomp {
    // Members
protected:
    class EBitArray * m_pData; // offset 0x0, size 0x4
    int m_startDataPos; // offset 0x4, size 0x4
    int m_currentKeyframe; // offset 0x8, size 0x4
    int m_currentSplineStartFrame; // offset 0xC, size 0x4
    int m_currentSplineEndFrame; // offset 0x10, size 0x4
    int m_nFrames; // offset 0x14, size 0x4
    int m_nKeyframes; // offset 0x18, size 0x4
    signed short m_nBitsKeyframe; // offset 0x1C, size 0x2
    signed char m_nBitsDeltaTime; // offset 0x1E, size 0x1
    signed char m_nBitsVec; // offset 0x1F, size 0x1
    signed char m_nBitsBias; // offset 0x20, size 0x1
    float m_biasScale; // offset 0x24, size 0x4
    float m_lastFrame; // offset 0x28, size 0x4
    class EVec3 m_vn; // offset 0x2C, size 0xC
    unsigned char m_vnContinuous; // offset 0x38, size 0x1
    class EVec3 m_bn; // offset 0x3C, size 0xC
    class EVec3 m_anp1; // offset 0x48, size 0xC
    class EVec3 m_vnp1; // offset 0x54, size 0xC
    unsigned char m_vnp1Continuous; // offset 0x60, size 0x1
    class EVec3 m_vScale; // offset 0x64, size 0xC
    class EVec3 m_vOffset; // offset 0x70, size 0xC
};
// total size: 0x8
class EVisInfoDecomp {
    // Members
protected:
    class EBitArray * m_pData; // offset 0x0, size 0x4
    int m_startDataPos; // offset 0x4, size 0x4
};
// total size: 0xC
struct ScalarKeyframe {
    // Members
    float v; // offset 0x0, size 0x4
    int time; // offset 0x4, size 0x4
    float bias; // offset 0x8, size 0x4
};
// total size: 0x40
class ScalarDecomp {
    // Members
protected:
    class EBitArray * m_pData; // offset 0x0, size 0x4
    int m_startDataPos; // offset 0x4, size 0x4
    int m_currentKeyframe; // offset 0x8, size 0x4
    int m_currentSplineStartFrame; // offset 0xC, size 0x4
    int m_currentSplineEndFrame; // offset 0x10, size 0x4
    float m_biasScale; // offset 0x14, size 0x4
    float m_lastFrame; // offset 0x18, size 0x4
    float m_vn; // offset 0x1C, size 0x4
    float m_bn; // offset 0x20, size 0x4
    float m_anp1; // offset 0x24, size 0x4
    float m_vnp1; // offset 0x28, size 0x4
    float m_scale; // offset 0x2C, size 0x4
    float m_offset; // offset 0x30, size 0x4
    signed short m_nFrames; // offset 0x34, size 0x2
    signed short m_nKeyframes; // offset 0x36, size 0x2
    signed short m_nBitsKeyframe; // offset 0x38, size 0x2
    signed char m_nBitsDeltaTime; // offset 0x3A, size 0x1
    signed char m_nBitsScalar; // offset 0x3B, size 0x1
    signed char m_nBitsBias; // offset 0x3C, size 0x1
    signed char m_fast; // offset 0x3D, size 0x1
};
// total size: 0x24
struct EACTrackNodeStreams {
    // Members
    class ERotDecomp * pRotDecomp; // offset 0x0, size 0x4
    class ERotDecomp1Dof * pRotDecomp1Dof; // offset 0x4, size 0x4
    class EVec3Decomp * pTransDecomp; // offset 0x8, size 0x4
    class EVec3Decomp * pScaleDecomp; // offset 0xC, size 0x4
    class EVisInfoDecomp * pVisInfoDecomp; // offset 0x10, size 0x4
    class EVec3Decomp * pLightColorDecomp; // offset 0x14, size 0x4
    class ScalarDecomp * pLightIntensityDecomp; // offset 0x18, size 0x4
    class ScalarDecomp * pLightAttenuationStartDecomp; // offset 0x1C, size 0x4
    class ScalarDecomp * pCameraFOVDecomp; // offset 0x20, size 0x4
};
// total size: 0x4
struct EACTrackMorphWeightChannelStreams {
    // Members
    class ScalarDecomp * pMorphWeightDecomp; // offset 0x0, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct EACTrackMorphWeightChannelStreams * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC8
class EACTrack {
    // Members
public:
    struct EAnimDef animDef; // offset 0x0, size 0x28
    void (* pfnUpdateCallback)(unsigned int, class EACTrack *, class ERCharacter *, class EVec3 &, class EVec3 &); // offset 0x28, size 0x4
    void (* pfnComputeCallback)(unsigned int, class EACTrack *, class EMat4 &, class ERCharacter *, struct EACNodeState *); // offset 0x2C, size 0x4
    void (* pfnCleanupCallback)(unsigned int, unsigned int); // offset 0x30, size 0x4
    unsigned int userParam; // offset 0x34, size 0x4
    unsigned int flags; // offset 0x38, size 0x4
    unsigned int cleanupParam; // offset 0x3C, size 0x4
    unsigned int cleanupFlags; // offset 0x40, size 0x4
    int id; // offset 0x44, size 0x4
    int lastSetPosFrame; // offset 0x48, size 0x4
    float time; // offset 0x4C, size 0x4
    float pos; // offset 0x50, size 0x4
    float lastPos; // offset 0x54, size 0x4
    float lastEventPos; // offset 0x58, size 0x4
    float speed; // offset 0x5C, size 0x4
    float intensity; // offset 0x60, size 0x4
    float blendSpeed; // offset 0x64, size 0x4
    float blendThreshold; // offset 0x68, size 0x4
    float blendU; // offset 0x6C, size 0x4
    float blendStart; // offset 0x70, size 0x4
    float blendTarget; // offset 0x74, size 0x4
    float blendDuration; // offset 0x78, size 0x4
    float blendM1; // offset 0x7C, size 0x4
    float blendM2; // offset 0x80, size 0x4
    int phaseLockMaster; // offset 0x84, size 0x4
    float phaseLockOffset; // offset 0x88, size 0x4
    class TRPtr pRAnim; // offset 0x8C, size 0x4
    class EVec3 vInitialRootTrans; // offset 0x90, size 0xC
    class TRedBlackTree slaveTracks; // offset 0x9C, size 0xC
    struct EACTrackNodeStreams * nodeStreams; // offset 0xA8, size 0x4
    class TArray morphWeightStreams; // offset 0xAC, size 0xC
    float * blendFactors; // offset 0xB8, size 0x4
    unsigned char blendType; // offset 0xBC, size 0x1
    unsigned char animComplete; // offset 0xBD, size 0x1
    unsigned char active; // offset 0xBE, size 0x1
    unsigned int animID; // offset 0xC0, size 0x4
    float scale; // offset 0xC4, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
enum eAnimMirrorAxis {
    E_AC_X_AXIS = 0,
    E_AC_Y_AXIS = 1,
    E_AC_Z_AXIS = 2,
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
enum eTrackFlags {
    E_AC_NO_TRACK = 0,
    E_AC_IDLE_TRACK = 1,
    E_AC_WALK_TRACK = 2,
    E_AC_STANDING_START_SHUFFLE_TRACK = 4,
    E_AC_MOVING_START_SHUFFLE_TRACK = 8,
    E_AC_SKILL_TRACK = 16,
    E_AC_SKILL_IDLE_TRACK = 32,
    E_AC_SIDESTEP_TRACK = 64,
    E_AC_FULL_BODY_AWARENESS_TRACK = 128,
    E_AC_IDLE_OVERLAY_TRACK = 256,
    E_AC_PASSIVE_INFLUENCE_TRACK = 512,
    E_AC_AWARENESS_ANIM_TRACK = 1024,
    E_AC_CARRY_TRACK = 2048,
    E_AC_AUTO_CARRY_TRACK = 4096,
    E_AC_HAPPY_SAD_TRACK = 8192,
    E_AC_AWARENESS_PROCEDURAL_TRACK = 16384,
    E_AC_FX_TRACK = 32768,
    E_AC_MOVE_CURVE_TRACK = 65536,
    E_AC_MAIN_TRACK = 131072,
    E_AC_TRACK_NEWLY_STARTED = 262144,
    E_AC_OUTGOING_TRACK = 524288,
    E_AC_MIRROR_IMMEDIATE = 33554432,
    E_AC_STATIC_BLEND_TRACK = 67108864,
    E_AC_BACKWARDS_TRACK = 134217728,
    E_AC_SUSPENDED_TRACK = 268435456,
    E_AC_IS_MIRRORED = 536870912,
    E_AC_GENERIC_IDLE_TRACK = 1,
    E_AC_GENERIC_OVERLAY_TRACK = 256,
    E_AC_GENERIC_PROCEDURAL_OVERLAY_TRACK = 256,
    E_AC_IS_SKILL_TRACK = 48,
    E_AC_IS_IDLE_TRACK = 33,
    E_AC_NON_SKILL_TRACKS = 15,
    E_AC_RUNS_ON_MAIN_TRACK = 131327,
    E_AC_SHUFFLE_TRACK = 12,
    E_AC_OUTGOING_INDEX_MASK = -1073741824,
};
// total size: 0x10
class TRect {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
// total size: 0xA8
class EWindow {
    // Static members
    static class EVec3 m_globalOffset; // size: 0xC
    static class EVec3 m_globalScale; // size: 0xC
    static class E3DWindow * m_pCurrent3DWindow; // size: 0x4
    static class EWindow * m_pCurrentWindow; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EMat4 m_mWindow; // offset 0x8, size 0x40
    class TRect m_rIn; // offset 0x48, size 0x10
    class TRect m_rOut; // offset 0x58, size 0x10
    class TRect m_rClipIn; // offset 0x68, size 0x10
    class TRect m_rClipOut; // offset 0x78, size 0x10
    class TRect m_rClipOutClamped; // offset 0x88, size 0x10
    class ERenderSurface * m_pRenderSurface; // offset 0x98, size 0x4
    int m_whichRenderSurface; // offset 0x9C, size 0x4
    unsigned char m_outputRectNeedsSetting; // offset 0xA0, size 0x1
};
// total size: 0x20
struct EViewport {
    // Members
    class EVec4 vScale; // offset 0x0, size 0x10
    class EVec4 vOffset; // offset 0x10, size 0x10
};
// total size: 0x358
class E3DWindow : public EWindow {
    // Members
public:
    class EMat4 m_mLookAt; // offset 0xA8, size 0x40
    class EMat4 m_mLookAtPos; // offset 0xE8, size 0x40
    class EMat4 m_mLookAtDotProjection; // offset 0x128, size 0x40
    class EMat4 m_mProjection; // offset 0x168, size 0x40
    class EMat4 m_mProjectionInv; // offset 0x1A8, size 0x40
    class EMat4 m_mProjectionNormalized; // offset 0x1E8, size 0x40
    class TRect m_rViewportIn; // offset 0x228, size 0x10
    class TRect m_rViewportOut; // offset 0x238, size 0x10
    struct EViewport m_vpIn; // offset 0x248, size 0x20
    struct EViewport m_vpOut; // offset 0x268, size 0x20
    class EVec3 m_lookPos; // offset 0x288, size 0xC
    float m_fovY; // offset 0x294, size 0x4
    class EVec3 m_lookDir; // offset 0x298, size 0xC
    float m_aspectRatio; // offset 0x2A4, size 0x4
    class EVec4 m_clipPlanes[5]; // offset 0x2A8, size 0x50
    float m_nearPlane; // offset 0x2F8, size 0x4
    float m_fadePlane; // offset 0x2FC, size 0x4
    float m_farPlane; // offset 0x300, size 0x4
    unsigned char m_nearOffsets[5][3]; // offset 0x304, size 0xF
    unsigned char m_farOffsets[5][3]; // offset 0x313, size 0xF
    unsigned char pad[2]; // offset 0x322, size 0x2
    int m_frustumType; // offset 0x324, size 0x4
    class EVec3 m_corners[4]; // offset 0x328, size 0x30
};
enum eAnimatedObjectType {
    E_AC_SIM_TYPE = 0,
    E_AC_OBJECT_TYPE = 1,
    E_AC_CAMERA_TYPE = 2,
    E_AC_CAS_TYPE = 3,
    E_AC_HOUSE_SELECT_MAP_TYPE = 4,
    E_AC_SINGLE_ANIM_TYPE = 5,
    E_AC_OBJECT_WITH_OVERLAY_TYPE = 6,
};
// total size: 0xAC
class EAnimController {
    // Members
protected:
    unsigned int m_flags; // offset 0x0, size 0x4
    unsigned int m_nAccumNodeStateFlags; // offset 0x4, size 0x4
    int m_executingTrack; // offset 0x8, size 0x4
    struct EACAttributeStates m_currentFrameAttributeStates; // offset 0xC, size 0xC
    class EMat4 * m_mNodes; // offset 0x18, size 0x4
    class EMat4 * m_mInvNodes; // offset 0x1C, size 0x4
    class EMat4 * m_mDisabledNodes; // offset 0x20, size 0x4
    class EMat4 * m_mPreAllocatedNodes[2]; // offset 0x24, size 0x8
    class TRPtr m_pRCharacter; // offset 0x2C, size 0x4
    int m_lastUpdateFrame; // offset 0x30, size 0x4
    int m_lastAllocFrame; // offset 0x34, size 0x4
    int m_lastComputeFrame; // offset 0x38, size 0x4
    int m_lastInverseFrame; // offset 0x3C, size 0x4
    int m_numMainTracks; // offset 0x40, size 0x4
    int m_numBlendTracks; // offset 0x44, size 0x4
    int m_numAllTracks; // offset 0x48, size 0x4
    class EACTrack * m_pTracks; // offset 0x4C, size 0x4
    class TNodeList m_eventsToRun; // offset 0x50, size 0xC
    float m_globalSpeed; // offset 0x5C, size 0x4
    float m_modelScaler; // offset 0x60, size 0x4
    unsigned char m_nonUniformScale; // offset 0x64, size 0x1
    unsigned char m_bDoUpdate; // offset 0x65, size 0x1
    void (* m_pfnPostComputeCallback)(unsigned int, class EMat4 &, class ERCharacter *, class EMat4 *); // offset 0x68, size 0x4
    unsigned int m_postComputeUserParam; // offset 0x6C, size 0x4
    unsigned int m_numOutgoingTracks; // offset 0x70, size 0x4
    char * m_outgoingOrder; // offset 0x74, size 0x4
    unsigned char m_drawOverride; // offset 0x78, size 0x1
    class TRedBlackTree m_mirrorBoneMap; // offset 0x7C, size 0xC
    enum eAnimMirrorAxis m_mirrorAxis; // offset 0x88, size 0x4
    class TRedBlackTree m_boneConstantDeltaTransMap; // offset 0x8C, size 0xC
    class TRedBlackTree m_boneMorphDeltaTransMap; // offset 0x98, size 0xC
    int m_RootTransBone; // offset 0xA4, size 0x4
    int m_RootRotBone; // offset 0xA8, size 0x4
};
// total size: 0x3C
struct MidLotObject {
    // Members
    class EVec3 fTransform; // offset 0x0, size 0xC
    class EVec3 fRotation; // offset 0xC, size 0xC
    class EVec3 fScale; // offset 0x18, size 0xC
    unsigned int charID; // offset 0x24, size 0x4
    unsigned int modelID; // offset 0x28, size 0x4
    unsigned int animID; // offset 0x2C, size 0x4
    unsigned int magicCookie; // offset 0x30, size 0x4
    unsigned int searchShaderID; // offset 0x34, size 0x4
    unsigned int replaceShaderID; // offset 0x38, size 0x4
};
enum eMidLotObjectType {
    kGenericObject = 0,
    kPalmTree = 1,
    kDateTree = 2,
    kBananaTree = 3,
    kBoatType = 4,
    kDockType = 5,
    kPropSim2Pole = 6,
    kPropSim4Pole = 7,
    kPropSim5Pole = 8,
    kWindyPlant = 9,
    kRainType = 10,
    kSunMoonType = 11,
    kPostEarthquakeOnly = 12,
    kBackgroundType = 13,
    kPropSim0Cup = 14,
    kPropSim3Cup = 15,
    kPropSim5Cup = 16,
    kPropSimLeftCup = 17,
    kPropSimMicrophone = 18,
    kPapayaTree = 19,
    kMidLotObjectTypes = 20,
};
enum eMidLotObjectStyle {
    kNone = 0,
    kPalmBranch = 1,
    kDateBranch = 2,
    kBananaBranch = 3,
    kPapayaBranch = 4,
    kMidLotObjectStyles = 5,
};
// total size: 0x50
struct ClientParams {
    // Members
    class EMat4 m_parentTransform; // offset 0x0, size 0x40
    signed short m_sortOffset; // offset 0x40, size 0x2
    const class EVec3 * m_pSortPos; // offset 0x44, size 0x4
    unsigned char m_bForegroundEffect; // offset 0x48, size 0x1
    unsigned char m_bUseEmitterPosForAlphaSort; // offset 0x49, size 0x1
};
// total size: 0x0
class EIParticleEmit {};
// total size: 0x0
class ERParticleType {};
// total size: 0x150
class Effect {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    struct ClientParams m_clientParams; // offset 0x8, size 0x50
public:
    class EMat4 m_effectToWorld; // offset 0x58, size 0x40
protected:
    class EMat4 m_combinedMatrix; // offset 0x98, size 0x40
    class EVec4 m_terrainColor; // offset 0xD8, size 0x10
    class EVec4 m_terrainColorSphere; // offset 0xE8, size 0x10
    class EVec4 m_previousPos; // offset 0xF8, size 0x10
    class EMat4 m_parentTransform; // offset 0x108, size 0x40
    int m_effectFlags; // offset 0x148, size 0x4
};
// total size: 0xD0
struct FastParticleEmitterInitData {
    // Members
    float m_particleLifetime; // offset 0x0, size 0x4
    float m_rotationSpeed; // offset 0x4, size 0x4
    float m_initialSize; // offset 0x8, size 0x4
    float m_initialSizeRange; // offset 0xC, size 0x4
    float m_burstPeriod; // offset 0x10, size 0x4
    float m_systemLifetime; // offset 0x14, size 0x4
    float m_minVelocity; // offset 0x18, size 0x4
    float m_diffVelocity; // offset 0x1C, size 0x4
    float m_minRadius; // offset 0x20, size 0x4
    float m_diffRadius; // offset 0x24, size 0x4
    float m_minDispersionAngle; // offset 0x28, size 0x4
    float m_diffDispersionAngle; // offset 0x2C, size 0x4
    float m_yaw; // offset 0x30, size 0x4
    float m_pitch; // offset 0x34, size 0x4
    float m_roll; // offset 0x38, size 0x4
    float m_yawRotationSpeed; // offset 0x3C, size 0x4
    float m_pitchRotationSpeed; // offset 0x40, size 0x4
    signed short m_particleReservoir; // offset 0x44, size 0x2
    signed short m_maxParticles; // offset 0x46, size 0x2
    int m_flags; // offset 0x48, size 0x4
    int m_flags2; // offset 0x4C, size 0x4
    class EVec3 m_systemSize; // offset 0x50, size 0xC
    float m_hardLifetime; // offset 0x5C, size 0x4
    signed short m_burstParticleCount; // offset 0x60, size 0x2
    signed short m_burstParticleCountRange; // offset 0x62, size 0x2
    float m_RandomAlphaRange; // offset 0x64, size 0x4
    float m_initialAngle; // offset 0x68, size 0x4
    float m_arcAngle; // offset 0x6C, size 0x4
    class EVec3 m_offsetPosition; // offset 0x70, size 0xC
    float m_angleLimit; // offset 0x7C, size 0x4
    class EVec3 m_colorMixerBase; // offset 0x80, size 0xC
    float m_burstPeriodRange; // offset 0x8C, size 0x4
    class EVec3 m_colorMixerRange; // offset 0x90, size 0xC
    unsigned int m_seed; // offset 0x9C, size 0x4
    float m_uvanimPeriod; // offset 0xA0, size 0x4
    float m_uvanimOOPeriod; // offset 0xA4, size 0x4
    float m_radiusSpeed; // offset 0xA8, size 0x4
    float m_radiusDrag; // offset 0xAC, size 0x4
    float m_useEmitterVelocity; // offset 0xB0, size 0x4
    signed char m_iUVMirroring; // offset 0xB4, size 0x1
    unsigned char m_uiAlphaTestValue; // offset 0xB5, size 0x1
    signed short m_pad1; // offset 0xB6, size 0x2
    unsigned int m_textureID; // offset 0xB8, size 0x4
    float m_delayBeforeStart; // offset 0xBC, size 0x4
    float m_nudgeTowardsCamera; // offset 0xC0, size 0x4
    float m_morePadding[3]; // offset 0xC4, size 0xC
};
// total size: 0x90
struct FastParticleParticleInitData {
    // Members
    class EVec3 Acceleration; // offset 0x0, size 0xC
    float randomFirstFrameMultiplier; // offset 0xC, size 0x4
    class EVec4 RGBA_delta; // offset 0x10, size 0x10
    class EVec4 RGBAmin; // offset 0x20, size 0x10
    class EVec4 RGBAmax; // offset 0x30, size 0x10
    class EVec4 RGBA0; // offset 0x40, size 0x10
    float offsetU; // offset 0x50, size 0x4
    float offsetV; // offset 0x54, size 0x4
    float rotationTime; // offset 0x58, size 0x4
    float rotationDeceleration; // offset 0x5C, size 0x4
    float Drag; // offset 0x60, size 0x4
    float MaxSize; // offset 0x64, size 0x4
    float size_delta; // offset 0x68, size 0x4
    float oneOverDrag; // offset 0x6C, size 0x4
    float animSpeedU; // offset 0x70, size 0x4
    float animSpeedV; // offset 0x74, size 0x4
    float AlphaInRate; // offset 0x78, size 0x4
    float AlphaIn0; // offset 0x7C, size 0x4
    float nbFramesU; // offset 0x80, size 0x4
    float nbFramesV; // offset 0x84, size 0x4
    float oneOverNbFramesU; // offset 0x88, size 0x4
    float oneOverNbFramesV; // offset 0x8C, size 0x4
};
// total size: 0x90
struct FastParticleBirthDataNgc {
    // Members
    struct FastParticleParticleInitData m_particleInit; // offset 0x0, size 0x90
};
// total size: 0x20
struct FastParticleState {
    // Members
    class EVec3 Pos0; // offset 0x0, size 0xC
    float Angle0; // offset 0xC, size 0x4
    class EVec3 Velocity0; // offset 0x10, size 0xC
    float AngleDelta; // offset 0x1C, size 0x4
};
// total size: 0x2E0
struct FastParticlePacket {
    // Members
    float timeAlive[16]; // offset 0x0, size 0x40
    float size0[16]; // offset 0x40, size 0x40
    float alphaDelta[16]; // offset 0x80, size 0x40
    struct FastParticleState state[16]; // offset 0xC0, size 0x200
    unsigned short ABGR1555[16]; // offset 0x2C0, size 0x20
};
// total size: 0x84
struct FastParticleQuad {
    // Members
    class EVec4 m_topLeft; // offset 0x0, size 0x10
    class EVec4 m_bottomLeft; // offset 0x10, size 0x10
    class EVec4 m_topRight; // offset 0x20, size 0x10
    class EVec4 m_bottomRight; // offset 0x30, size 0x10
    class EVec2 m_texCoordArray[4]; // offset 0x40, size 0x20
    unsigned int m_colorArray[4]; // offset 0x60, size 0x10
    class EVec4 m_texCoords; // offset 0x70, size 0x10
    unsigned int m_quadIndex; // offset 0x80, size 0x4
};
// total size: 0x1B0
class FastParticleEmitter : public Effect {
    // Static members
    static unsigned int s_colorArray[256]; // size: 0x400
    static class EVec2 s_texCoordArray[256]; // size: 0x800
    static class EVec4 s_vertArray[256]; // size: 0x1000
    static int s_renderBufferIndex; // size: 0x4
    static int s_renderBufferSize; // size: 0x4

    // Members
public:
    int m_runtimeFlags; // offset 0x14C, size 0x4
    float m_alphaScale; // offset 0x150, size 0x4
    float m_lastDt; // offset 0x154, size 0x4
    float m_timeToNextBurst; // offset 0x158, size 0x4
    float m_systemLifetimeTimer; // offset 0x15C, size 0x4
    int m_particlesCreated; // offset 0x160, size 0x4
    int m_particlesKilled; // offset 0x164, size 0x4
    signed short m_nbPackets; // offset 0x168, size 0x2
    signed short m_maxParticles; // offset 0x16A, size 0x2
    float m_emitterScale; // offset 0x16C, size 0x4
    float m_emitterScaleSpeed; // offset 0x170, size 0x4
    float m_yaw; // offset 0x174, size 0x4
    float m_pitch; // offset 0x178, size 0x4
    float m_burstPeriod; // offset 0x17C, size 0x4
    float m_burstParticleCountScale; // offset 0x180, size 0x4
    float m_currRadius; // offset 0x184, size 0x4
    float m_currRadiusSpeed; // offset 0x188, size 0x4
    struct FastParticleEmitterInitData * m_pEmitterInitData; // offset 0x18C, size 0x4
    struct FastParticleBirthDataNgc * m_pParticleBirthData; // offset 0x190, size 0x4
private:
    class ERTexture * m_pTexture; // offset 0x194, size 0x4
    unsigned short m_particlesUsedInPackets; // offset 0x198, size 0x2
    unsigned short m_firstUsedParticleInPackets; // offset 0x19A, size 0x2
    struct FastParticlePacket * * m_arrayOfPackets; // offset 0x19C, size 0x4
    class REffectsEmitter * m_pBinaryResource; // offset 0x1A0, size 0x4
    float m_nudgeTowardsCamera; // offset 0x1A4, size 0x4
    class EShader * m_pEmitterShader; // offset 0x1A8, size 0x4
};
enum AttachmentEffectType {
    kForkEmitter = 0,
    kEffectEmitter = 1,
    kEffectSequencer = 2,
    kNumAttachmentTypes = 3,
};
// total size: 0x8
struct AttachmentNode {
    // Static members
    static unsigned char kSendEmitterPosToForeground; // size: 0x1
    static unsigned char kUseEmitterPosForAlphaSort; // size: 0x1

    // Members
    signed char effectAttachmentTypeAndFlags; // offset 0x0, size 0x1
    signed char boneId; // offset 0x1, size 0x1
    signed short sortOffset; // offset 0x2, size 0x2
    unsigned int effectId; // offset 0x4, size 0x4
};
// total size: 0x68
class EParticleEffect {
    // Members
protected:
    struct ClientParams m_effectClientParams; // offset 0x0, size 0x50
    class EIParticleEmit * m_pEmit; // offset 0x50, size 0x4
    class ERParticleType * m_pType; // offset 0x54, size 0x4
    class FastParticleEmitter * m_pFastParticleEmitter; // offset 0x58, size 0x4
    unsigned int m_effectId; // offset 0x5C, size 0x4
    enum AttachmentEffectType m_effectType; // offset 0x60, size 0x4
    class REffectsEmitter * m_pREffectsEmitter; // offset 0x64, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct AttachmentNode * mpBegin; // offset 0x0, size 0x4
    struct AttachmentNode * mpEnd; // offset 0x4, size 0x4
    struct AttachmentNode * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x24
class REffectsAttachment : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class vector m_attachmentNodes; // offset 0x14, size 0x10
};
// total size: 0x14
class EParticleObj {
    // Members
public:
    class TNodeList m_effectList; // offset 0x0, size 0xC
    class REffectsAttachment * m_pEffectAttachment; // offset 0xC, size 0x4
    unsigned char m_bEffectIsContinual; // offset 0x10, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC0
struct ELevelDrawData {
    // Members
    class EMat4 m_mSkyDome; // offset 0x0, size 0x40
    class EMat4 m_mShadowView; // offset 0x40, size 0x40
    class EVec3 vEyePos; // offset 0x80, size 0xC
    class EVec3 m_vOutsideLight; // offset 0x8C, size 0xC
    class ERC * prc; // offset 0x98, size 0x4
    class E3DWindow * pWin; // offset 0x9C, size 0x4
    int m_nSortMask; // offset 0xA0, size 0x4
    unsigned char m_DOFBackgroundRendered; // offset 0xA4, size 0x1
    const class ERShader * m_pCurrShader; // offset 0xA8, size 0x4
    const class EMat4 * m_pmCurrModelMatrix; // offset 0xAC, size 0x4
    const class EMat4 * m_pmCurrViewMatrix; // offset 0xB0, size 0x4
    const class EAnimController * m_pCurrAnimController; // offset 0xB4, size 0x4
    struct ELights * m_plCurrLights; // offset 0xB8, size 0x4
};
// total size: 0x3C
class EOrderTableData {
    // Members
public:
    class EOrderTableData * pNext; // offset 0x0, size 0x4
    int sortMode; // offset 0x4, size 0x4
    int sortOffset; // offset 0x8, size 0x4
    float sortOrderValue1; // offset 0xC, size 0x4
    float sortOrderValue2; // offset 0x10, size 0x4
    const class EVec3 * pvPos; // offset 0x14, size 0x4
    const class EMat4 * pmOrient; // offset 0x18, size 0x4
    struct ELights * pLights; // offset 0x1C, size 0x4
    class EInstance * pInstance; // offset 0x20, size 0x4
    float instanceAlpha; // offset 0x24, size 0x4
    void (* pfnCallback)(struct ELevelDrawData &, class EOrderTableData *); // offset 0x28, size 0x4
    unsigned int callbackParam1; // offset 0x2C, size 0x4
    unsigned int callbackParam2; // offset 0x30, size 0x4
    unsigned int callbackParam3; // offset 0x34, size 0x4
    unsigned int m_flags; // offset 0x38, size 0x4
};
// total size: 0x3B8
class EMidLotInstance : public EBaseInstance {
    // Static members
    static class EVec3 s_vDistantPointToForceSkySortOrder; // size: 0xC

    // Members
protected:
    unsigned int m_instanceFlags; // offset 0x18, size 0x4
    class InstanceData m_instanceData; // offset 0x1C, size 0x224
    class EMat4 m_mOrient; // offset 0x240, size 0x40
    class EMat4 m_mNonScaledOrient; // offset 0x280, size 0x40
    class EAnimController m_AC; // offset 0x2C0, size 0xAC
    struct MidLotObject * m_pObjectData; // offset 0x36C, size 0x4
    enum eMidLotObjectType m_eObjectType; // offset 0x370, size 0x4
    enum eMidLotObjectStyle m_eObjectStyle; // offset 0x374, size 0x4
    unsigned int m_nFlags; // offset 0x378, size 0x4
    int m_bMatsInDL; // offset 0x37C, size 0x4
    unsigned int m_visMidFlags; // offset 0x380, size 0x4
    class EBound3 m_bPos; // offset 0x384, size 0x18
    class ERLevel * m_pLevel; // offset 0x39C, size 0x4
    unsigned int m_iAnimDuration; // offset 0x3A0, size 0x4
    class TNodeList m_pParticleObjs; // offset 0x3A4, size 0xC
    unsigned char m_bFreezeAnimation; // offset 0x3B0, size 0x1
};
enum PostHeight {
    kPostFence = 0,
    kPostWall = 1,
    kPostRoof = 2,
    kPostHeightCount = 3,
};
enum PostStyle {
    kPostMakeshift = 0,
    kPostSurvival = 1,
    kPostDurable = 2,
    kPostStylish = 3,
    kPostStyleCount = 4,
};
// total size: 0x400
class WallPostInstance : public EMidLotInstance {
    // Members
public:
    struct MidLotObject m_MidLotData; // offset 0x3B4, size 0x3C
    class cXObject * m_pObject; // offset 0x3F0, size 0x4
private:
    enum PostHeight m_Height; // offset 0x3F4, size 0x4
    enum PostStyle m_Style; // offset 0x3F8, size 0x4
};
// total size: 0x10
class WallPostStorage {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned char m_xOffset; // offset 0x4, size 0x1
    unsigned char m_yOffset; // offset 0x5, size 0x1
    unsigned char m_xSize; // offset 0x6, size 0x1
    unsigned char m_ySize; // offset 0x7, size 0x1
    unsigned short m_DataSize; // offset 0x8, size 0x2
    class WallPostInstance * * m_Data; // offset 0xC, size 0x4
};
// total size: 0x48
class WallPostCollection : public WallPostStorage {
    // Members
public:
    class ERLevel * m_pLevel; // offset 0x10, size 0x4
private:
    unsigned int m_WallPostResId[3][4]; // offset 0x14, size 0x30
    unsigned char m_Initialized; // offset 0x44, size 0x1
};
// total size: 0x8
struct EOrderTableEntry {
    // Members
    class EOrderTableData * head; // offset 0x0, size 0x4
    int entries; // offset 0x4, size 0x4
};
// total size: 0x14
struct EHashTableNode {
    // Members
    struct EHashTableNode * pListLast; // offset 0x0, size 0x4
    struct EHashTableNode * pListNext; // offset 0x4, size 0x4
    struct EHashTableNode * pEntryNext; // offset 0x8, size 0x4
    unsigned int key; // offset 0xC, size 0x4
    unsigned int value; // offset 0x10, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct EHashTableNode * m_pHead; // offset 0x0, size 0x4
    struct EHashTableNode * m_pTail; // offset 0x4, size 0x4
};
// total size: 0x0
class HTIteratorPtrType {};
// total size: 0x10
class EHashTable {
    // Members
protected:
    class TLinkedList m_list; // offset 0x0, size 0x8
    struct EHashTableNode * * m_table; // offset 0x8, size 0x4
    unsigned int m_tableSize; // offset 0xC, size 0x4
};
// total size: 0x10
class THashTable : public EHashTable {};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
enum EWallUpDownStateType {
    NO_STATE = -1,
    WallUp = 0,
    WallFade = 1,
    WallDown = 2,
};
enum LightType {
    eNoLight = 0,
    eAmbientLight = 1,
    eDirectionalLight = 2,
    ePointLight = 3,
    ePortalLight = 4,
};
// total size: 0xB0
class EIDirLight : public EILight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    class EVec3 m_vDir; // offset 0xA4, size 0xC
};
// total size: 0xA4
class EIAmbLight : public EILight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28
};
// total size: 0x10
struct LightingSkyLight {
    // Members
    class EVec3 * sunColor; // offset 0x0, size 0x4
    float sunIntensity; // offset 0x4, size 0x4
    class EVec3 * ambientColor; // offset 0x8, size 0x4
    float ambientIntensity; // offset 0xC, size 0x4
};
// total size: 0x4
class BitFlags {
    // Members
public:
    unsigned int value; // offset 0x0, size 0x4
};
// total size: 0x50
struct LightingEntry {
    // Members
    float timeInHours; // offset 0x0, size 0x4
    class EVec3 * outsideAmbientColor; // offset 0x4, size 0x4
    float outsideAmbientIntensity; // offset 0x8, size 0x4
    float outsideShadowAlpha; // offset 0xC, size 0x4
    class EVec3 * insideAmbientColor; // offset 0x10, size 0x4
    float insideAmbientIntensity; // offset 0x14, size 0x4
    float pointLightDimmer; // offset 0x18, size 0x4
    float sunPitch; // offset 0x1C, size 0x4
    float sunYaw; // offset 0x20, size 0x4
    class EVec3 * sunColor; // offset 0x24, size 0x4
    float sunIntensity; // offset 0x28, size 0x4
    float moonPitch; // offset 0x2C, size 0x4
    float moonYaw; // offset 0x30, size 0x4
    class EVec3 * moonColor; // offset 0x34, size 0x4
    float moonIntensity; // offset 0x38, size 0x4
    struct LightingSkyLight skyLight; // offset 0x3C, size 0x10
    class BitFlags flags; // offset 0x4C, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct LightingEntry * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct LightingSequence {
    // Members
    class VECTOR entries; // offset 0x0, size 0x4
    int sunriseIndex; // offset 0x4, size 0x4
    int sunsetIndex; // offset 0x8, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct MidLotObject * mpBegin; // offset 0x0, size 0x4
    struct MidLotObject * mpEnd; // offset 0x4, size 0x4
    struct MidLotObject * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x318D8
class ERLevel : public EResource {
    // Static members
    static unsigned int kMidLotObjectSim5sPoleAnimID; // size: 0x4
    static unsigned int kMidLotObjectSim14sPoleAnimID; // size: 0x4
    static unsigned int kMidLotObjectSim2sPoleAnimID; // size: 0x4
    static unsigned int kMidLotObjectLeftCupAnimID; // size: 0x4
    static unsigned int kMidLotObjectSim5sCupAnimID; // size: 0x4
    static unsigned int kMidLotObjectSim3CupAnimID; // size: 0x4
    static unsigned int kMidLotObjectSim0CupAnimID; // size: 0x4
    static unsigned int kMidLotObjectResIDs[20]; // size: 0x50
    static int m_raycastDelayed; // size: 0x4
    static int m_raycastThrottled; // size: 0x4
    static int m_raycastThreshold; // size: 0x4
    static int m_raycastThisFrame; // size: 0x4
    static unsigned char m_fillingOrderTable; // size: 0x1
    static unsigned char m_drawingOrderTable; // size: 0x1
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    float m_sunShadowIntensity; // offset 0x14, size 0x4
    class ELightGrid m_lightGrid; // offset 0x18, size 0x2ABFC
    struct ELights m_skydomeLights; // offset 0x2AC14, size 0xF8
    unsigned char m_isFloorLightingCompleted; // offset 0x2AD0C, size 0x1
    int m_numSkySubModels; // offset 0x2AD10, size 0x4
    int m_numReflectionSubModels; // offset 0x2AD14, size 0x4
    int m_numFloorSubModels; // offset 0x2AD18, size 0x4
    int m_numRoofs; // offset 0x2AD1C, size 0x4
    class EIStaticSubModel * m_roofs[50]; // offset 0x2AD20, size 0xC8
    int m_numWets; // offset 0x2ADE8, size 0x4
    class EIStaticSubModel * m_wets[100]; // offset 0x2ADEC, size 0x190
    int m_numCollisions; // offset 0x2AF7C, size 0x4
    class EIStaticSubModel * m_collisions[10]; // offset 0x2AF80, size 0x28
    int m_numSorted; // offset 0x2AFA8, size 0x4
    class EIStaticSubModel * m_sorted[100]; // offset 0x2AFAC, size 0x190
    class BitArray2D * m_pTilesBuildable; // offset 0x2B13C, size 0x4
    class BitArray2D * m_pTilesSimRoutable; // offset 0x2B140, size 0x4
    class BitArray2D * m_pTilesWater; // offset 0x2B144, size 0x4
    class WallPostCollection m_WallPostCollection; // offset 0x2B148, size 0x48
private:
    unsigned char m_bMidlotInit; // offset 0x2B190, size 0x1
    unsigned char m_bShadowMapReadyToUse; // offset 0x2B191, size 0x1
    class EVec3 m_shadowLightPos; // offset 0x2B194, size 0xC
    float m_shadowLightCasterDist; // offset 0x2B1A0, size 0x4
    class EMat4 m_shadowMatrix; // offset 0x2B1A8, size 0x40
    class E3DWindow m_shadowWin; // offset 0x2B1E8, size 0x358
    class TNodeList m_lightList; // offset 0x2B540, size 0xC
    struct EOrderTableEntry m_orderTable; // offset 0x2B54C, size 0x8
    float m_orderTableFar; // offset 0x2B554, size 0x4
    float m_orderTableOneOverBucketSize; // offset 0x2B558, size 0x4
    float m_orderTableNextNear; // offset 0x2B55C, size 0x4
    float m_orderTableNextFar; // offset 0x2B560, size 0x4
    unsigned int m_storableVersion; // offset 0x2B564, size 0x4
    struct ELevelDrawData m_dd; // offset 0x2B568, size 0xC0
    class THashTable m_idmap; // offset 0x2B628, size 0x10
    class TRedBlackTree m_alwaysUpdatePriorityQueue; // offset 0x2B638, size 0xC
    class EInstance * * m_floorPerRoom; // offset 0x2B644, size 0x4
    class EOrderTableData * * m_floorItemsPerRoom; // offset 0x2B648, size 0x4
    class TNodeList m_outsideWallList; // offset 0x2B64C, size 0xC
    class TNodeList m_shadowCasterList; // offset 0x2B658, size 0xC
    class TNodeList m_shadowReceiverList; // offset 0x2B664, size 0xC
    int m_roomCount; // offset 0x2B670, size 0x4
    class EInstance * m_instances[2048]; // offset 0x2B674, size 0x2000
    int m_numInstances; // offset 0x2D674, size 0x4
    int m_firstWall; // offset 0x2D678, size 0x4
    int m_lastWall; // offset 0x2D67C, size 0x4
    int m_numouterlotinstances; // offset 0x2D680, size 0x4
    int m_numInstancesWatermark; // offset 0x2D684, size 0x4
    class EInstance * m_visibleInstances[2048]; // offset 0x2D688, size 0x2000
    int m_numVisibleInstances; // offset 0x2F688, size 0x4
    class EOrderTableData * m_houseObjectList; // offset 0x2F68C, size 0x4
    enum EWallUpDownStateType m_wallState; // offset 0x2F690, size 0x4
    void (* m_drawWallShadowsFunc)(class TNodeList &, class EVec3 &, struct ELevelDrawData &); // offset 0x2F694, size 0x4
    float m_rainBlend; // offset 0x2F698, size 0x4
    class EOrderTableData * m_DOFForegroundItems; // offset 0x2F69C, size 0x4
    class EIDirLight m_sun; // offset 0x2F6A0, size 0xB0
    class EIAmbLight m_sunAmbient; // offset 0x2F750, size 0xA4
    class EIDirLight m_moon; // offset 0x2F7F4, size 0xB0
    const struct LightingSequence * m_pDayNightLightTable; // offset 0x2F8A4, size 0x4
    float m_fSunriseAdd; // offset 0x2F8A8, size 0x4
    float m_fSunsetAdd; // offset 0x2F8AC, size 0x4
    float m_sunYawOffset; // offset 0x2F8B0, size 0x4
    float m_moonYawOffset; // offset 0x2F8B4, size 0x4
    float m_fPointLightDimmer; // offset 0x2F8B8, size 0x4
    class EMidLotInstance * m_pMidlotInstances[2048]; // offset 0x2F8BC, size 0x2000
    int m_numMidlotInstances; // offset 0x318BC, size 0x4
    int m_numVisibleMidlotInstances; // offset 0x318C0, size 0x4
    unsigned char m_bMidLotObjectsCreated; // offset 0x318C4, size 0x1
public:
    class vector m_midLotObj; // offset 0x318C8, size 0x10
};
// total size: 0x30
class RaycastLastHit {
    // Members
public:
    unsigned int rModelId; // offset 0x0, size 0x4
    int iCollision; // offset 0x4, size 0x4
    int iSubModel; // offset 0x8, size 0x4
    int iSubModelShader; // offset 0xC, size 0x4
    int iStrip; // offset 0x10, size 0x4
    int iVert; // offset 0x14, size 0x4
    int lastFrame; // offset 0x18, size 0x4
    unsigned int polyFlags; // offset 0x1C, size 0x4
    class EVec3 lastPos; // offset 0x20, size 0xC
    unsigned char bReallyHit; // offset 0x2C, size 0x1
};
// total size: 0x14
struct ESMBuildDisplayListData {
    // Members
    const char * pOwner; // offset 0x0, size 0x4
    const struct MdfData * pMdfData; // offset 0x4, size 0x4
    float minX; // offset 0x8, size 0x4
    float maxX; // offset 0xC, size 0x4
    unsigned char blHasAlphaShader_out; // offset 0x10, size 0x1
};
// total size: 0x84
class ESubModelShader {
    // Members
    class EDL * m_pDL; // offset 0x0, size 0x4
    unsigned char m_bMainHeapAlloc; // offset 0x4, size 0x1
public:
    class ERShader * m_pRShader; // offset 0x8, size 0x4
    unsigned int m_shaderId; // offset 0xC, size 0x4
    unsigned int m_flags; // offset 0x10, size 0x4
    class TArray m_strips; // offset 0x14, size 0xC
    class ESubModel * m_pParent; // offset 0x20, size 0x4
    float m_textureDensity; // offset 0x24, size 0x4
    unsigned char m_storeDeltas; // offset 0x28, size 0x1
    class TArray m_stripsMorph; // offset 0x2C, size 0xC
    class ESubModelShader * * m_userSelectedMorphTargetArray; // offset 0x38, size 0x4
    unsigned char m_userSelectedMorphTargetArraySize; // offset 0x3C, size 0x1
    class ESubModelShader * * m_currentBrowseMorphTargetArray; // offset 0x40, size 0x4
    unsigned char m_currentBrowseMorphTargetArraySize; // offset 0x44, size 0x1
    struct _LatticeNode * m_latticeList; // offset 0x48, size 0x4
    int m_numVolumes; // offset 0x4C, size 0x4
    class EBound3 m_treeAABB; // offset 0x50, size 0x18
    unsigned int m_depth; // offset 0x68, size 0x4
    int m_quadrant; // offset 0x6C, size 0x4
    float m_xscale; // offset 0x70, size 0x4
    float m_yscale; // offset 0x74, size 0x4
    class EVec2 m_offset; // offset 0x78, size 0x8
    int m_subModelShaderId; // offset 0x80, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ESubModelShader * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    unsigned int * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class EVec3 * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x54
class EQuadTree {
    // Static members
    static float kActualBBZHeight; // size: 0x4
    static unsigned int kTriangleThreshold; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class EBound3 m_AABBox; // offset 0x4, size 0x18
    class EBound3 m_ActualAABBox; // offset 0x1C, size 0x18
    class ESubModelShader * m_pSMS; // offset 0x34, size 0x4
    class EQuadTree * m_parent; // offset 0x38, size 0x4
    class EQuadTree * m_childQuadArr[4]; // offset 0x3C, size 0x10
    unsigned int m_depth; // offset 0x4C, size 0x4
    int m_quadrantId; // offset 0x50, size 0x4
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0x20
class ESubModel {
    // Members
public:
    class TArray m_subModelShaders; // offset 0x0, size 0xC
    int m_nNode; // offset 0xC, size 0x4
    class ERModel * m_pParent; // offset 0x10, size 0x4
    class TRedBlackTree m_quadTreeMap; // offset 0x14, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ESubModel * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class SimsLightInfo {
    // Members
public:
    signed short m_type; // offset 0x0, size 0x2
    unsigned short m_flags; // offset 0x2, size 0x2
    int m_nodeIndex; // offset 0x4, size 0x4
    class EVec3 m_color; // offset 0x8, size 0xC
    float m_intensity; // offset 0x14, size 0x4
    float m_attenuationStart; // offset 0x18, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class SimsLightInfo * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC
struct ENLatticePoints {
    // Members
    class TArray m_controlPoints; // offset 0x0, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct ENLatticePoints * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xB0
class ENLattice {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    char m_szName[128]; // offset 0x4, size 0x80
    int m_nID; // offset 0x84, size 0x4
    int m_nNumXControlPoints; // offset 0x88, size 0x4
    int m_nNumYControlPoints; // offset 0x8C, size 0x4
    int m_nNumZControlPoints; // offset 0x90, size 0x4
    int m_nKeys; // offset 0x94, size 0x4
    class TArray m_controlPointsArray; // offset 0x98, size 0xC
    class TArray m_processControlPointsArray; // offset 0xA4, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ENLattice * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x50
struct ENDummyPoint {
    // Members
    int m_nTime; // offset 0x0, size 0x4
    class EVec3 m_position; // offset 0x4, size 0xC
    class EMat4 m_orientation; // offset 0x10, size 0x40
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct ENDummyPoint * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x58
class ENDummy {
    // Static members
    static int MAX_NAME_SIZE; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    char m_szName[64]; // offset 0x4, size 0x40
    int m_nID; // offset 0x44, size 0x4
    int m_nKeys; // offset 0x48, size 0x4
    class TArray m_dummyPointsArray; // offset 0x4C, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ENDummy * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x60
struct ENCameraPoint {
    // Members
    int m_nTime; // offset 0x0, size 0x4
    class EVec3 m_position; // offset 0x4, size 0xC
    class EMat4 m_orientation; // offset 0x10, size 0x40
    float m_fFOV; // offset 0x50, size 0x4
    float m_fTargetDistance; // offset 0x54, size 0x4
    float m_fNearRange; // offset 0x58, size 0x4
    float m_fFarRange; // offset 0x5C, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct ENCameraPoint * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x58
class ENCamera {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    char m_szName[64]; // offset 0x4, size 0x40
    int m_nID; // offset 0x44, size 0x4
    int m_nKeys; // offset 0x48, size 0x4
    class TArray m_cameraPointsArray; // offset 0x4C, size 0xC
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ENCamera * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x40
struct EAttachmentVert {
    // Members
    unsigned char matrixIdx[4]; // offset 0x0, size 0x4
    int color; // offset 0x4, size 0x4
    signed short subModelIdx; // offset 0x8, size 0x2
    signed short subModelShaderIdx; // offset 0xA, size 0x2
    signed short stripIdx; // offset 0xC, size 0x2
    signed short vertIdx; // offset 0xE, size 0x2
    class EVec4 weights; // offset 0x10, size 0x10
    class EVec4 vertex; // offset 0x20, size 0x10
    class EVec4 normal; // offset 0x30, size 0x10
};
// total size: 0xC
struct EWeldVert {
    // Members
    void * pvPos; // offset 0x0, size 0x4
    signed char * normal; // offset 0x4, size 0x4
    unsigned char changed; // offset 0x8, size 0x1
};
// total size: 0x114
class ERModel : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    struct MdfData m_mdfData; // offset 0x14, size 0xE
    class TArray m_subModels; // offset 0x24, size 0xC
    class EBoundSphere m_boundSphere; // offset 0x30, size 0x10
    class EBound3 m_boundBox; // offset 0x40, size 0x18
    class EBound3 m_localBoundBox; // offset 0x58, size 0x18
    float m_scaler; // offset 0x70, size 0x4
    unsigned char m_matsInDLs; // offset 0x74, size 0x1
    class TArray m_lightInfos; // offset 0x78, size 0xC
    class ERModel * * m_currentBrowseMorphTargetArray; // offset 0x84, size 0x4
    float * m_currentBrowseMorphTargetWeightArray; // offset 0x88, size 0x4
    unsigned char m_currentBrowseMorphTargetArraySize; // offset 0x8C, size 0x1
    class ERModel * * m_userSelectedMorphTargetArray; // offset 0x90, size 0x4
    float * m_userSelectedMorphTargetWeightArray; // offset 0x94, size 0x4
    unsigned char m_userSelectedMorphTargetArraySize; // offset 0x98, size 0x1
    unsigned char m_hasAlphaShaders; // offset 0x99, size 0x1
    class TArray m_latticeList; // offset 0x9C, size 0xC
    class TArray m_lattices; // offset 0xA8, size 0xC
    class TArray m_dummies; // offset 0xB4, size 0xC
    class TArray m_cameras; // offset 0xC0, size 0xC
    unsigned char m_attachColor; // offset 0xCC, size 0x1
    signed char m_attachID; // offset 0xCD, size 0x1
    int m_numAttachVerts; // offset 0xD0, size 0x4
    struct EAttachmentVert * m_attachmentVerts; // offset 0xD4, size 0x4
    int m_numLightPos; // offset 0xD8, size 0x4
    class EVec3 m_lightPosition[4]; // offset 0xDC, size 0x30
protected:
    class EMat4 * m_pmScale; // offset 0x10C, size 0x4
    unsigned char m_flags; // offset 0x110, size 0x1
    unsigned char m_modelUVTransformed; // offset 0x111, size 0x1
    unsigned char m_morphDirty; // offset 0x112, size 0x1
public:
    unsigned char m_shouldFullyAnimate; // offset 0x113, size 0x1
};
// total size: 0x224
class InstanceData {
    // Members
public:
    class EBoundSphere m_boundSphere; // offset 0x0, size 0x10
    class EVec3 m_sortPos; // offset 0x10, size 0xC
    unsigned int m_modelId; // offset 0x1C, size 0x4
    unsigned int m_materialColorOverride; // offset 0x20, size 0x4
    class DigestGeomShaderPtr * m_pDigest; // offset 0x24, size 0x4
    int m_nDigest; // offset 0x28, size 0x4
    class ERModel * m_pModel; // offset 0x2C, size 0x4
    unsigned char m_fadeAsWall; // offset 0x30, size 0x1
    struct ELights m_lights; // offset 0x34, size 0xF8
    struct ELights m_lights2; // offset 0x12C, size 0xF8
};
// total size: 0x18
class EBaseInstance {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float m_instanceAlpha; // offset 0x4, size 0x4
    unsigned int m_visFlags; // offset 0x8, size 0x4
    int m_shouldFrontPlaneFade; // offset 0xC, size 0x4
    int m_shouldInterestFade; // offset 0x10, size 0x4
    int m_shouldCull; // offset 0x14, size 0x4
};
enum EPortalType {
    ePortalNone = 0,
    ePortalStandardWindow = 1,
    ePortalSmallHigh = 2,
    ePortalFullLength = 3,
};
// total size: 0x78
class EInstance : public EStorable, public EBaseInstance {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class ERLevel * m_pLevel; // offset 0x1C, size 0x4
    unsigned char m_isLitFromBothSides; // offset 0x20, size 0x1
    unsigned char m_isShadowInterpolated; // offset 0x21, size 0x1
    unsigned char m_isWall; // offset 0x22, size 0x1
    enum EPortalType m_portalType; // offset 0x24, size 0x4
    class EInstance * m_shadowOwner; // offset 0x28, size 0x4
    void (* m_thisSideFn)(unsigned int, unsigned char, signed short &, signed short &); // offset 0x2C, size 0x4
    void (* m_otherSideFn)(unsigned int, unsigned char, signed short &, signed short &); // offset 0x30, size 0x4
    unsigned int m_otherSideData; // offset 0x34, size 0x4
    unsigned int m_thisSideData; // offset 0x38, size 0x4
    unsigned int m_hiddenData; // offset 0x3C, size 0x4
    unsigned char (* m_hiddenFn)(unsigned int); // offset 0x40, size 0x4
    class RBIteratorPtrType * m_iAlwaysUpdate; // offset 0x44, size 0x4
    class EBoundTreeNode * m_pBoundTreeParent; // offset 0x48, size 0x4
    class EBound3 m_bPos; // offset 0x4C, size 0x18
    int m_levelRoomIx; // offset 0x64, size 0x4
public:
    unsigned int m_instanceId; // offset 0x68, size 0x4
    unsigned int m_instanceFlags; // offset 0x6C, size 0x4
    int m_nReceivingPointLights; // offset 0x70, size 0x4
    class NLIteratorPtrType * m_iLevelList; // offset 0x74, size 0x4
};
// total size: 0xA4
class EILight : public EInstance {
    // Static members
    static unsigned char m_haveLightsChanged; // size: 0x1
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    unsigned char m_shadows; // offset 0x78, size 0x1
    unsigned char m_sourceCastsShadows; // offset 0x79, size 0x1
    class EInstance * m_pSource; // offset 0x7C, size 0x4
private:
    unsigned char m_on; // offset 0x80, size 0x1
    float m_intensity; // offset 0x84, size 0x4
    class EVec3 m_vColor; // offset 0x88, size 0xC
    class EVec3 m_intensityColorScale; // offset 0x94, size 0xC
    unsigned char m_useIntensityScale; // offset 0xA0, size 0x1
};
// total size: 0x20
struct EPointLight {
    // Members
    class EVec3 vPos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    class EVec3 vColor; // offset 0x10, size 0xC
    class EILight * pLight; // offset 0x1C, size 0x4
};
// total size: 0xF8
struct ELights {
    // Members
    struct EAmbLight amb; // offset 0x0, size 0x10
    struct EDirLight dir[4]; // offset 0x10, size 0x60
    struct EPointLight point[4]; // offset 0x70, size 0x80
    int numDir; // offset 0xF0, size 0x4
    int numPoint; // offset 0xF4, size 0x4
};
enum ETCTransformSource {
    E_TCSRC_POSITION = 0,
    E_TCSRC_NORMAL = 1,
    E_TCSRC_TC0 = 2,
    E_TCSRC_TC1 = 3,
    E_TCSRC_REFLECT = 4,
    E_TCSRC_UNDEFINED = -1,
};
// total size: 0x40
struct EGEPackedParticle {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float rot; // offset 0xC, size 0x4
    float width; // offset 0x10, size 0x4
    float height; // offset 0x14, size 0x4
    unsigned int rot180; // offset 0x18, size 0x4
    unsigned int pad1; // offset 0x1C, size 0x4
    unsigned int r; // offset 0x20, size 0x4
    unsigned int g; // offset 0x24, size 0x4
    unsigned int b; // offset 0x28, size 0x4
    unsigned int a; // offset 0x2C, size 0x4
    float u1; // offset 0x30, size 0x4
    float v1; // offset 0x34, size 0x4
    float u2; // offset 0x38, size 0x4
    float v2; // offset 0x3C, size 0x4
};
// total size: 0x5C
class ERC {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class EDL * m_pdl; // offset 0x4, size 0x4
    int m_nEntriesLeftInSeg; // offset 0x8, size 0x4
    struct EDLEntry * m_pEntry; // offset 0xC, size 0x4
    enum RCMode m_mode; // offset 0x10, size 0x4
    unsigned char m_closed; // offset 0x14, size 0x1
    unsigned char m_anyCommands; // offset 0x15, size 0x1
    unsigned char m_nOpen; // offset 0x16, size 0x1
    int m_lastCommand; // offset 0x18, size 0x4
    int m_nSegs; // offset 0x1C, size 0x4
    int m_matrixIndices[4]; // offset 0x20, size 0x10
    unsigned char m_matrixIndicesChanged; // offset 0x30, size 0x1
    class EMat4 * m_matrixList; // offset 0x34, size 0x4
    int m_matrixListCount; // offset 0x38, size 0x4
    unsigned char m_matrixListChanged; // offset 0x3C, size 0x1
    int m_highestReferencedMatrixIndex; // offset 0x40, size 0x4
    float m_zFadePlaneOffset; // offset 0x44, size 0x4
    float m_zFadePlaneRadius; // offset 0x48, size 0x4
    float m_zFadePlaneAttenuation; // offset 0x4C, size 0x4
    void (* m_pCopyDataCB)(void *, void *); // offset 0x50, size 0x4
    void * m_pCopyDataCBUserData; // offset 0x54, size 0x4
    class EString m_rcName; // offset 0x58, size 0x4
};
// total size: 0x48
class EShader {
    // Static members
    static class EMutex m_updateListMutex; // size: 0x1C
    static class TLinkedList m_updateList; // size: 0x8
    static class EShader * m_gLastShaderSet; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct EShaderDef m_sd; // offset 0x4, size 0x38
    unsigned int m_validsig; // offset 0x3C, size 0x4
    struct EShaderUpdate * m_pUpdate; // offset 0x40, size 0x4
    unsigned char m_textureIdx; // offset 0x44, size 0x1
    unsigned char m_textureSeqIdx; // offset 0x45, size 0x1
    unsigned short m_framesElapsedSinceLastTextureChange; // offset 0x46, size 0x2
};
// total size: 0xC
class TArray {
    // Members
protected:
    class ERTexture * * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
enum TMultiShaderDef {
    kBadShader = -1,
    kWeather = 0,
    kTimeOfDay = 1,
    kObjectSpecific = 2,
    kTypeCount = 3,
};
// total size: 0x14
struct MultiShaderInfo {
    // Members
    enum TMultiShaderDef type; // offset 0x0, size 0x4
    float blendInDuration; // offset 0x4, size 0x4
    unsigned char shaderCount; // offset 0x8, size 0x1
    unsigned char * shaderStateIdxList; // offset 0xC, size 0x4
    unsigned int * shaderIdList; // offset 0x10, size 0x4
};
// total size: 0xC
struct ERShaderUpdate {
    // Members
    class ERShader * pRShader; // offset 0x0, size 0x4
    struct ERShaderUpdate * pLast; // offset 0x4, size 0x4
    struct ERShaderUpdate * pNext; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    float * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    unsigned char * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x44
struct ShaderInterpolationParams {
    // Members
    class TArray alphaTestThreshold; // offset 0x0, size 0xC
    class TArray mipMapShift; // offset 0xC, size 0xC
    class TArray blendFix; // offset 0x18, size 0xC
    struct EMaterial mat; // offset 0x24, size 0x20
};
// total size: 0x74
class ERShader : public EResource {
    // Static members
    static unsigned char m_defaultShaderState; // size: 0x1
    static class EMutex s_updateListMutex; // size: 0x1C
    static class TLinkedList s_updateList; // size: 0x8
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    class EShader * m_pShader; // offset 0x14, size 0x4
    class ERShader * m_pCurrentShader; // offset 0x18, size 0x4
    class ERShader * m_pIncomingResShader; // offset 0x1C, size 0x4
    class TArray m_rtextureList; // offset 0x20, size 0xC
    class TArray m_rtextureIdList; // offset 0x2C, size 0xC
    unsigned int m_multiTextureCount; // offset 0x38, size 0x4
    class ERTexture * * m_prtextureList; // offset 0x3C, size 0x4
    unsigned int * m_multiTextureIdList; // offset 0x40, size 0x4
    struct MultiShaderInfo m_multisi; // offset 0x44, size 0x14
    unsigned char m_currentGraphicsState; // offset 0x58, size 0x1
    struct ERShaderUpdate * m_pUpdate; // offset 0x5C, size 0x4
    unsigned int m_shaderFlags; // offset 0x60, size 0x4
    unsigned int m_incomingShaderId; // offset 0x64, size 0x4
    float m_timeSinceLastUpdate; // offset 0x68, size 0x4
    unsigned char m_curStateIdx; // offset 0x6C, size 0x1
    unsigned char m_lastStateIdx; // offset 0x6D, size 0x1
    unsigned char m_hours; // offset 0x6E, size 0x1
    unsigned char m_minutes; // offset 0x6F, size 0x1
    struct ShaderInterpolationParams * m_pInterpParams; // offset 0x70, size 0x4
};
enum PreloadState {
    kNotLoaded = 0,
    kDataLoaded = 1,
};
// total size: 0x4
class ELocString {
    // Members
    const unsigned short * const * ptr; // offset 0x0, size 0x4
};
enum tNewAnimTableIndex {
    kAdultAnimTableID = 0,
    kChimpAnimTableID = 1,
    kCatAnimTableID = 2,
    kLargeDogAnimTableID = 3,
    kSmallDogAnimTableID = 4,
    kSocialAnimTableID = 5,
    kObjectAnimTableID = 6,
    kBoarAnimTableID = 7,
    kNumAnimationTables = 8,
};
enum tSimType {
    kAdult = 0,
    kChimp = 1,
    kCat = 2,
    kLargeDog = 3,
    kSmallDog = 4,
    kBoar = 5,
    kNumSimTypes = 6,
};
// total size: 0xD8
class ObjSelector {
    // Members
    union { // inferred
        union /* @class$18420syncaudio_cpp */ {
            class iResFile * fFile; // offset 0x0, size 0x4
            class QuickResFile * fObjFile; // offset 0x0, size 0x4
        } __anon$18451; // offset 0x0, size 0x4
        class iResFile * fFile; // offset 0x0, size 0x4
        class QuickResFile * fObjFile; // offset 0x0, size 0x4
    };
    unsigned int fNamespaceID; // offset 0x4, size 0x4
    unsigned int fSemiNamespaceID; // offset 0x8, size 0x4
    class Behavior * fBehavior; // offset 0xC, size 0x4
    class Language * fLang; // offset 0x10, size 0x4
    const char * fObjName; // offset 0x14, size 0x4
    const char * fModuleName; // offset 0x18, size 0x4
    class ObjectDataObjDefinition mObjectDefinition; // offset 0x1C, size 0x20
    class ConsoleAutoRefCount fTreeTable; // offset 0x3C, size 0x4
    class AnimTable * fAnimTables[8]; // offset 0x40, size 0x20
    class AnimTable * fSemiAnimTables[8]; // offset 0x60, size 0x20
    class ObjectFolder * fFolder; // offset 0x80, size 0x4
    const struct ResFile * mpResFileData; // offset 0x84, size 0x4
    struct TTAB_Tuning fTreeTuning; // offset 0x88, size 0x8
    class ObjSelector * fMaster; // offset 0x90, size 0x4
    class ConsoleAutoRefCount mpFnTable; // offset 0x94, size 0x4
    int fInstanceCount; // offset 0x98, size 0x4
    signed short f_SaveType; // offset 0x9C, size 0x2
    int fIndex; // offset 0xA0, size 0x4
    int fInitTreeVersion; // offset 0xA4, size 0x4
    int fMainTreeVersion; // offset 0xA8, size 0x4
    int fFlags; // offset 0xAC, size 0x4
    class CatalogResource * fCatalogResource; // offset 0xB0, size 0x4
    class BString2 * fUserName; // offset 0xB4, size 0x4
    class BString2 * fUserLastName; // offset 0xB8, size 0x4
    class CasSimDescription * fCharacterDescription; // offset 0xBC, size 0x4
    const struct NPC * fNPCharacter; // offset 0xC0, size 0x4
    class ERShader * fThumbnailShader; // offset 0xC4, size 0x4
    class cXPerson * fSimulatorPerson; // offset 0xC8, size 0x4
    enum PreloadState fDesiredPreloadState; // offset 0xCC, size 0x4
    enum PreloadState fActualPreloadState; // offset 0xD0, size 0x4
public:
    class ObjSelector * pNextHash; // offset 0xD4, size 0x4
};
// total size: 0x8
struct BehaviorNodeParam {
    // Members
    signed short params[4]; // offset 0x0, size 0x8
};
union /* @class$21918syncaudio_cpp */ {
    signed short _treeID; // offset 0x0, size 0x2
    signed short _primCode; // offset 0x0, size 0x2
};
// total size: 0xC
struct BehaviorNode {
    // Members
    union { // inferred
        union /* @class$21918syncaudio_cpp */ {
            signed short _treeID; // offset 0x0, size 0x2
            signed short _primCode; // offset 0x0, size 0x2
        } __anon$21920; // offset 0x0, size 0x2
        signed short _treeID; // offset 0x0, size 0x2
        signed short _primCode; // offset 0x0, size 0x2
    };
    unsigned char trueTrans; // offset 0x2, size 0x1
    unsigned char falseTrans; // offset 0x3, size 0x1
    struct BehaviorNodeParam param; // offset 0x4, size 0x8
};
// total size: 0x10
class Behavior : public IConsoleUnknown {
    // Static members
    static int s_cacheTreesRefCount; // size: 0x4
    static class vector s_cachedTrees; // size: 0x10

    // Members
protected:
    class ObjSelector * fOwner; // offset 0x4, size 0x4
    class Language * fLanguage; // offset 0x8, size 0x4
    void (* fSwizzler)(void *, int); // offset 0xC, size 0x4
};
// total size: 0x4
class BehaviorFinder {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
class StackElem {
    // Members
public:
    signed short fTreeID; // offset 0x0, size 0x2
    signed short fNodeNum; // offset 0x2, size 0x2
    signed short fObjectID; // offset 0x4, size 0x2
    unsigned char fNumLocalVars; // offset 0x6, size 0x1
    unsigned char fNumParams; // offset 0x7, size 0x1
    int fPrimState; // offset 0x8, size 0x4
    unsigned char mIgnoreDataBreakPoint; // offset 0xC, size 0x1
    class Behavior * fBehavior; // offset 0x10, size 0x4
    unsigned int _vars; // offset 0x14, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class StackElem * * mpBegin; // offset 0x0, size 0x4
    class StackElem * * mpEnd; // offset 0x4, size 0x4
    class StackElem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x1C
class TreeStack {
    // Members
    char * fStart; // offset 0x0, size 0x4
    char * fFinish; // offset 0x4, size 0x4
    class vector fFrames; // offset 0x8, size 0x10
    class TreeSim & fTreeSim; // offset 0x18, size 0x4
};
enum NodeAction {
    kNA_Continue = 0,
    kNA_TickFinished = 1,
    kNA_StopSim = 2,
};
// total size: 0x8
class ExpressionParam {
    // Members
public:
    signed short lhsData; // offset 0x0, size 0x2
    signed short rhsData; // offset 0x2, size 0x2
    signed char isSigned; // offset 0x4, size 0x1
    signed char opType; // offset 0x5, size 0x1
    signed char lhsOwner; // offset 0x6, size 0x1
    signed char rhsOwner; // offset 0x7, size 0x1
};
// total size: 0x2
class IdleParam {
    // Members
public:
    signed short decStackVar; // offset 0x0, size 0x2
};
// total size: 0x4
class IdleForInputParam {
    // Members
public:
    signed short decParam; // offset 0x0, size 0x2
    signed short interruptable; // offset 0x2, size 0x2
};
// total size: 0x4
class UpdateParam {
    // Members
public:
    signed short who; // offset 0x0, size 0x2
    signed short what; // offset 0x2, size 0x2
};
// total size: 0x8
class RandomParam {
    // Members
public:
    signed short destData; // offset 0x0, size 0x2
    signed short destOwner; // offset 0x2, size 0x2
    signed short rangeData; // offset 0x4, size 0x2
    signed short rangeOwner; // offset 0x6, size 0x2
};
// total size: 0x6
class DistanceToParam {
    // Members
public:
    signed short destTemp; // offset 0x0, size 0x2
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char fromOwner; // offset 0x3, size 0x1
    signed short fromData; // offset 0x4, size 0x2
};
// total size: 0x8
class DirectionToParam {
    // Members
public:
    signed short destData; // offset 0x0, size 0x2
    signed short destOwner; // offset 0x2, size 0x2
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char fromOwner; // offset 0x5, size 0x1
    signed short fromData; // offset 0x6, size 0x2
};
// total size: 0x6
class TreeBreakParam {
    // Members
public:
    signed short checkData; // offset 0x0, size 0x2
    signed short checkOwner; // offset 0x2, size 0x2
    signed short flags; // offset 0x4, size 0x2
};
// total size: 0x8
class GotoRelativeParam {
    // Members
public:
    signed short oldTrapCount; // offset 0x0, size 0x2
    signed char relLocation; // offset 0x2, size 0x1
    signed char relDirection; // offset 0x3, size 0x1
    signed short routeCountUNUSED; // offset 0x4, size 0x2
    unsigned char flags; // offset 0x6, size 0x1
};
// total size: 0x5
class PushActionParam {
    // Members
public:
    unsigned char interactionIndex; // offset 0x0, size 0x1
    unsigned char dataForInteractingObject; // offset 0x1, size 0x1
    unsigned char priority; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
    unsigned char stackLocalForIconObject; // offset 0x4, size 0x1
};
// total size: 0x8
struct Find5WorstMotivesParam {
    // Members
    unsigned short unused0; // offset 0x0, size 0x2
    unsigned short unused1; // offset 0x2, size 0x2
    unsigned short whoToSearch; // offset 0x4, size 0x2
    unsigned short typeOfSearch; // offset 0x6, size 0x2
};
// total size: 0x8
class AnimateNewParam {
    // Members
public:
    signed short animID; // offset 0x0, size 0x2
    unsigned char localNumForEvent; // offset 0x2, size 0x1
    unsigned char additionalBehaviors; // offset 0x3, size 0x1
    signed char source; // offset 0x4, size 0x1
    signed char flags; // offset 0x5, size 0x1
    signed char animTableIndex; // offset 0x6, size 0x1
    unsigned char syncObj; // offset 0x7, size 0x1
};
// total size: 0x8
class CreateObjectParam {
    // Members
public:
    int guid; // offset 0x0, size 0x4
    signed char where; // offset 0x4, size 0x1
    signed char flags; // offset 0x5, size 0x1
    signed char local; // offset 0x6, size 0x1
};
// total size: 0x8
class PreloadObjectParam {
    // Members
public:
    int guid; // offset 0x0, size 0x4
    signed short flags; // offset 0x4, size 0x2
};
// total size: 0x5
class RelationshipParam {
    // Members
public:
    signed char doSet; // offset 0x0, size 0x1
    signed char index; // offset 0x1, size 0x1
    signed char stackVar; // offset 0x2, size 0x1
    signed char whoseRelationship; // offset 0x3, size 0x1
    signed char flags; // offset 0x4, size 0x1
};
// total size: 0x2
class FindFunctionalObjectParam {
    // Members
public:
    signed short whichFunction; // offset 0x0, size 0x2
};
// total size: 0x4
class CallFunctionalTreeParam {
    // Members
public:
    signed short whichFunction; // offset 0x0, size 0x2
    signed short flags; // offset 0x2, size 0x2
};
// total size: 0x6
class GotoRoutingSlotParam {
    // Members
public:
    signed short paramValue; // offset 0x0, size 0x2
    signed short paramType; // offset 0x2, size 0x2
    unsigned char flags; // offset 0x4, size 0x1
};
// total size: 0x6
class SnapParam {
    // Members
public:
    signed short stackVarOfRoutingSlot; // offset 0x0, size 0x2
    signed short howToSnap; // offset 0x2, size 0x2
    signed short flags; // offset 0x4, size 0x2
};
// total size: 0x8
class SetBalloonParam {
    // Members
public:
    signed short flags2; // offset 0x0, size 0x2
    signed short indexAndGroup; // offset 0x2, size 0x2
    signed short duration; // offset 0x4, size 0x2
    signed short flagsAndType; // offset 0x6, size 0x2
};
// total size: 0x6
class PlaySoundParam {
    // Members
public:
    signed short soundID; // offset 0x0, size 0x2
    unsigned short sampleRate; // offset 0x2, size 0x2
    unsigned char flags; // offset 0x4, size 0x1
    signed char volume; // offset 0x5, size 0x1
};
// total size: 0x2
class KillSoundsParam {
    // Members
public:
    signed short useStackObject; // offset 0x0, size 0x2
};
// total size: 0x2
class LookTowardsParam {
    // Members
public:
    signed short typeOfLook; // offset 0x0, size 0x2
};
// total size: 0x8
class DialogParam {
    // Members
public:
    unsigned char cancelStr; // offset 0x0, size 0x1
    unsigned char iconIndex; // offset 0x1, size 0x1
    unsigned char messageStr; // offset 0x2, size 0x1
    unsigned char yesStr; // offset 0x3, size 0x1
    unsigned char noStr; // offset 0x4, size 0x1
    unsigned char type : 4; // offset 0x5, size 0x1
    unsigned char playerIDType : 4; // offset 0x5, size 0x1
    unsigned char titleStr; // offset 0x6, size 0x1
    unsigned char flags; // offset 0x7, size 0x1
};
// total size: 0x2
class GenericSimCallParam {
    // Members
public:
    signed short call; // offset 0x0, size 0x2
};
// total size: 0x8
class SetToNextParam {
    // Members
public:
    int guid; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char targOwner; // offset 0x5, size 0x1
    unsigned char local; // offset 0x6, size 0x1
    unsigned char targData; // offset 0x7, size 0x1
};
// total size: 0x8
class MakeActionStringParam {
    // Members
public:
    signed short stringsID; // offset 0x0, size 0x2
    signed short flags; // offset 0x2, size 0x2
    unsigned char stringIndex; // offset 0x4, size 0x1
    unsigned char idOwner; // offset 0x5, size 0x1
    signed short idData; // offset 0x6, size 0x2
};
// total size: 0x6
class CallNamedTreeParam {
    // Members
public:
    signed short stringsID; // offset 0x0, size 0x2
    signed short flags; // offset 0x2, size 0x2
    unsigned char stringIndex; // offset 0x4, size 0x1
    unsigned char how; // offset 0x5, size 0x1
};
// total size: 0x4
class KillObjectParam {
    // Members
public:
    signed short who; // offset 0x0, size 0x2
    unsigned char flags; // offset 0x2, size 0x1
};
// total size: 0x8
class BudgetParam {
    // Members
public:
    unsigned char budgetType; // offset 0x0, size 0x1
    unsigned char amountOwner; // offset 0x1, size 0x1
    signed short amountData; // offset 0x2, size 0x2
    signed short flags; // offset 0x4, size 0x2
    unsigned char unused8_2; // offset 0x6, size 0x1
};
// total size: 0x8
class DropOntoParam {
    // Members
public:
    signed short srcInStackVar; // offset 0x0, size 0x2
    signed short src; // offset 0x2, size 0x2
    signed short destInStackVar; // offset 0x4, size 0x2
    signed short dest; // offset 0x6, size 0x2
};
// total size: 0x1
class NotifyStackObjectParam {};
// total size: 0x2
class FindBestActionParam {
    // Members
public:
    unsigned char roomLoc; // offset 0x0, size 0x1
    unsigned char searchRoom; // offset 0x1, size 0x1
};
// total size: 0x1
class GrabParam {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
};
// total size: 0x1
class DropParam {};
// total size: 0x1
class GosubFoundActionParam {};
// total size: 0x4
class ChangeSuitParam {
    // Members
public:
    unsigned char suitIndex; // offset 0x0, size 0x1
    unsigned char suitLocation; // offset 0x1, size 0x1
    signed short flags; // offset 0x2, size 0x2
};
// total size: 0x2
class BurnParam {
    // Members
public:
    unsigned char what; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
};
// total size: 0x1
class TutorialParam {
    // Members
public:
    unsigned char action; // offset 0x0, size 0x1
};
// total size: 0x8
struct Relationship2Param {
    // Members
    unsigned char whichVar; // offset 0x0, size 0x1
    unsigned char whichRel; // offset 0x1, size 0x1
    unsigned char flags2; // offset 0x2, size 0x1
    unsigned char localForObject; // offset 0x3, size 0x1
    unsigned char owner; // offset 0x4, size 0x1
    unsigned char _pad; // offset 0x5, size 0x1
    signed short data; // offset 0x6, size 0x2
};
// total size: 0x3
class FindGoodLocationParam {
    // Members
public:
    unsigned char specialCondition; // offset 0x0, size 0x1
    unsigned char relObjLocal; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
};
// total size: 0x4
class IsPersonInAreaParam {
    // Members
public:
    signed short targetData; // offset 0x0, size 0x2
    signed char targetOwner; // offset 0x2, size 0x1
    unsigned char targetType; // offset 0x3, size 0x1
};
// total size: 0x8
class SetMotiveDeltaParam {
    // Members
public:
    unsigned char deltaOwner; // offset 0x0, size 0x1
    unsigned char maxOwner; // offset 0x1, size 0x1
    unsigned char motiveNum; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
    signed short deltaData; // offset 0x4, size 0x2
    signed short maxData; // offset 0x6, size 0x2
};
// total size: 0x8
class TestObjectTypeParam {
    // Static members
    static unsigned char kMatchGUID; // size: 0x1
    static unsigned char kReturnGUID; // size: 0x1
    static unsigned char kMatchSemiGlobal; // size: 0x1

    // Members
public:
    int guid; // offset 0x0, size 0x4
    signed short idData; // offset 0x4, size 0x2
    unsigned char idOwner; // offset 0x6, size 0x1
    unsigned char flags; // offset 0x7, size 0x1
};
// total size: 0x6
class UIEffectParam {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char whichOwner; // offset 0x1, size 0x1
    signed short whichData; // offset 0x2, size 0x2
    unsigned char flags; // offset 0x4, size 0x1
};
// total size: 0x6
class UserEventParam {
    // Members
public:
    unsigned short timeout; // offset 0x0, size 0x2
    unsigned char size; // offset 0x2, size 0x1
    unsigned char zoom; // offset 0x3, size 0x1
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char strIndex; // offset 0x5, size 0x1
};
// total size: 0x1
class TestInteractingWithParam {};
// total size: 0x8
class SnapToParam {
    // Members
public:
    unsigned char holdTile[8]; // offset 0x0, size 0x8
};
// total size: 0x6
class CheckObjectParam {
    // Members
public:
    signed short checkData; // offset 0x0, size 0x2
    signed short checkOwner; // offset 0x2, size 0x2
    signed short checkChoice; // offset 0x4, size 0x2
};
// total size: 0x8
class RoomEffectParam {
    // Members
public:
    unsigned char m_roomEffect; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    signed char m_parm0Owner; // offset 0x2, size 0x1
    signed char m_parm1Owner; // offset 0x3, size 0x1
    signed short m_parm0Data; // offset 0x4, size 0x2
    signed short m_parm1Data; // offset 0x6, size 0x2
};
union /* @class$23659syncaudio_cpp */ {
    signed short graphicStateData; // offset 0x0, size 0x2
    unsigned short animationIndex; // offset 0x0, size 0x2
};
// total size: 0x8
class AnimateObjectParam {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char animTagTarget; // offset 0x1, size 0x1
    signed short graphicStateOwner; // offset 0x2, size 0x2
    union { // inferred
        union /* @class$23659syncaudio_cpp */ {
            signed short graphicStateData; // offset 0x0, size 0x2
            unsigned short animationIndex; // offset 0x0, size 0x2
        } __anon$23660; // offset 0x4, size 0x2
        signed short graphicStateData; // offset 0x4, size 0x2
        unsigned short animationIndex; // offset 0x4, size 0x2
    };
    unsigned char syncObjectLoc; // offset 0x6, size 0x1
    unsigned char unused; // offset 0x7, size 0x1
};
// total size: 0x8
class CompleteGoalParam {
    // Members
    signed short operation; // offset 0x0, size 0x2
    signed short goalData; // offset 0x2, size 0x2
    unsigned char unused; // offset 0x4, size 0x1
    unsigned char goalOwner; // offset 0x5, size 0x1
    unsigned char flags; // offset 0x6, size 0x1
    unsigned char type; // offset 0x7, size 0x1
};
// total size: 0x8
class CameraControlParam {
    // Members
public:
    signed char transType; // offset 0x0, size 0x1
    signed char animID2Player; // offset 0x1, size 0x1
    signed char dummyType; // offset 0x2, size 0x1
    signed char animID; // offset 0x3, size 0x1
    signed char flag; // offset 0x4, size 0x1
    signed char interpSpeed; // offset 0x5, size 0x1
    signed char flag01; // offset 0x6, size 0x1
    signed char noiseType; // offset 0x7, size 0x1
};
// total size: 0x8
class TwitchOMaticParam {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char targetSize; // offset 0x1, size 0x1
    unsigned char initialSpeed; // offset 0x2, size 0x1
    unsigned char decaySpeed; // offset 0x3, size 0x1
    unsigned short scale; // offset 0x4, size 0x2
    unsigned short targetObject; // offset 0x6, size 0x2
};
enum ECTRL_CMD {
    ECTRL_CMD_NONE = 0,
    ECTRL_CMD_NAVIGATE_UP = 1,
    ECTRL_CMD_NAVIGATE_DOWN = 2,
    ECTRL_CMD_NAVIGATE_LEFT = 3,
    ECTRL_CMD_NAVIGATE_RIGHT = 4,
    ECTRL_CMD_SELECT = 5,
    ECTRL_CMD_CANCEL = 6,
    ECTRL_CMD_PAUSE = 7,
    ECTRL_CMD_HELP = 8,
    ECTRL_CMD_OPEN_XAM_BASE = 9,
    ECTRL_CMD_OPEN_XAM_REL = 10,
    ECTRL_CMD_PAGE_LEFT = 11,
    ECTRL_CMD_PAGE_RIGHT = 12,
    ECTRL_CMD_SWITCH_SIM_LEFT = 13,
    ECTRL_CMD_SWITCH_SIM_RIGHT = 14,
    ECTRL_CMD_RIGHT_STICK = 15,
    ECTRL_CMD_TOOLS = 16,
    ECTRL_CMD_TOOLS_2 = 17,
    ECTRL_CMD_UNDO = 18,
    ECTRL_CMD_CLONE = 19,
    ECTRL_CMD_PAN = 20,
    ECTRL_CMD_GAMEPLAY_SELECT = 21,
    ECTRL_CMD_CENTER_CAMERA = 22,
    ECTRL_CMD_ACTIVATE_DEBUG_MENU = 23,
    ECTRL_CMD_CURSOR_ROTATE_LEFT = 24,
    ECTRL_CMD_CURSOR_ROTATE_RIGHT = 25,
    ECTRL_CMD_CURSOR_SELL = 26,
    ECTRL_CMD_CURSOR_WALLS = 27,
    ECTRL_CMD_CURSOR_ROOM_PREVIEW = 28,
    ECTRL_CMD_START_TEAR_DOWN = 29,
    ECTRL_CMD_ACTION_QUEUE = 30,
    ECTRL_CMD_START_GAME = 31,
    ECTRL_CMD_REBOOT_GAME = 32,
    ECTRL_CMD_SIM_INFO_OPEN = 33,
    ECTRL_CMD_SIM_INFO_CLOSE = 34,
    ECTRL_CMD_SIM_INFO_MOOD = 35,
    ECTRL_CMD_SIM_INFO_PERSONALITY = 36,
    ECTRL_CMD_SIM_INFO_JOB = 37,
    ECTRL_CMD_SIM_INFO_RELATIONS = 38,
    ECTRL_CMD_SLOW_TIME = 39,
    ECTRL_CMD_SPEED_TIME = 40,
    ECTRL_CMD_REL_NAVIGATE_LEFT = 41,
    ECTRL_CMD_REL_NAVIGATE_RIGHT = 42,
    ECTRL_CMD_JUST_START = 43,
    ECTRL_CMD_CHAT_HISTORY_UP = 44,
    ECTRL_CMD_CHAT_HISTORY_DOWN = 45,
    ECTRL_CMD_CHAT_TOGGLE = 46,
    ECTRL_CMD_DPAD_ONLY_NAVIGATE_UP = 47,
    ECTRL_CMD_DPAD_ONLY_NAVIGATE_DOWN = 48,
    ECTRL_CMD_DPAD_ONLY_NAVIGATE_LEFT = 49,
    ECTRL_CMD_DPAD_ONLY_NAVIGATE_RIGHT = 50,
    ECTRL_CMD_ACTIONMENU_PREVIOUS_ACTION = 51,
    ECTRL_CMD_ACTIONMENU_NEXT_ACTION = 52,
    ECTRL_CMD_ACTIONMENU_PREVIOUS_OBJECT = 53,
    ECTRL_CMD_ACTIONMENU_NEXT_OBJECT = 54,
    ECTRL_CMD_ANALOG_ONLY_NAVIGATE_UP = 55,
    ECTRL_CMD_ANALOG_ONLY_NAVIGATE_DOWN = 56,
    ECTRL_CMD_ANALOG_ONLY_NAVIGATE_LEFT = 57,
    ECTRL_CMD_ANALOG_ONLY_NAVIGATE_RIGHT = 58,
    ECTRL_CMD_CAMERA_ROTATE_LEFT = 59,
    ECTRL_CMD_CAMERA_ROTATE_RIGHT = 60,
    ECTRL_CMD_CAMERA_ZOOM_IN = 61,
    ECTRL_CMD_CAMERA_ZOOM_OUT = 62,
    ECTRL_CMD_SELECT_ACTION = 63,
    ECTRL_ADD_ITEM_TO_INVENTORY = 64,
    ECTRL_CMD_SWAP_BUILD_TOOL = 65,
    ECTRL_CMD_CHANGE_CONTROL_MODE = 66,
    ECTRL_CMD_PREVIEW_ITEM = 67,
    ECTRL_CMD_CURSOR_ROOM_BUILD = 68,
    ECTRL_CMD_VIEW_ACTION_TEXT = 69,
    ECTRL_CMD_CONTROLLER_CURSOR_X = 70,
    ECTRL_CMD_CONTROLLER_CURSOR_Y = 71,
    ECTRL_CMD_LAST = 72,
};
// total size: 0x8
class ListenForInputParam {
    // Members
    signed short listenerData; // offset 0x0, size 0x2
    signed short simData; // offset 0x2, size 0x2
    unsigned char simOwner; // offset 0x4, size 0x1
    unsigned char listenerOwner; // offset 0x5, size 0x1
    unsigned char flags; // offset 0x6, size 0x1
    unsigned char inputIndex; // offset 0x7, size 0x1
};
// total size: 0x8
class HUDCreateParam {
    // Members
    signed short hudInstanceData; // offset 0x0, size 0x2
    unsigned char hudInstanceOwner; // offset 0x2, size 0x1
    unsigned char hudType; // offset 0x3, size 0x1
    signed short hudJobLevel; // offset 0x4, size 0x2
    unsigned char hudJobLevelOwner; // offset 0x6, size 0x1
};
// total size: 0x8
class HUDAddRemoveItemParam {
    // Members
    signed short hudInstanceData; // offset 0x0, size 0x2
    unsigned char hudInstanceOwner; // offset 0x2, size 0x1
    unsigned char controlType; // offset 0x3, size 0x1
    signed short controlInstanceData; // offset 0x4, size 0x2
    unsigned char controlInstanceOwner; // offset 0x6, size 0x1
    unsigned char action; // offset 0x7, size 0x1
};
// total size: 0x8
class HUDManageParam {
    // Members
    signed short hudInstanceData; // offset 0x0, size 0x2
    unsigned char hudInstanceOwner; // offset 0x2, size 0x1
    unsigned char operation; // offset 0x3, size 0x1
    signed short playerData; // offset 0x4, size 0x2
    unsigned char playerOwner; // offset 0x6, size 0x1
};
// total size: 0x8
class HUDDataParam {
    // Members
    signed short controlData; // offset 0x0, size 0x2
    unsigned char controlOwner; // offset 0x2, size 0x1
    unsigned char get_set_flag; // offset 0x3, size 0x1
    signed short variableData; // offset 0x4, size 0x2
    unsigned char variableOwner; // offset 0x6, size 0x1
};
// total size: 0x8
class ParticleEffectParam {
    // Members
public:
    unsigned int guid; // offset 0x0, size 0x4
    unsigned int duration; // offset 0x4, size 0x4
};
// total size: 0x8
class SocialModeParam {
    // Members
public:
    unsigned short unused_param3; // offset 0x0, size 0x2
    unsigned short timeOutIndex; // offset 0x2, size 0x2
    unsigned short localID; // offset 0x4, size 0x2
    unsigned char command; // offset 0x6, size 0x1
    unsigned char flags; // offset 0x7, size 0x1
};
// total size: 0x8
class MemoryParam {
    // Members
public:
    unsigned char command; // offset 0x0, size 0x1
    unsigned char whichRel; // offset 0x1, size 0x1
    unsigned char whichMem; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
    unsigned char localForObject; // offset 0x4, size 0x1
    unsigned char owner; // offset 0x5, size 0x1
    signed short data; // offset 0x6, size 0x2
};
// total size: 0x8
class IdleAnimateParam {
    // Members
public:
    signed short animID; // offset 0x0, size 0x2
    signed short decAndSyncParam; // offset 0x2, size 0x2
    signed char source; // offset 0x4, size 0x1
    signed char flags; // offset 0x5, size 0x1
    signed char behavior; // offset 0x6, size 0x1
    unsigned char loops; // offset 0x7, size 0x1
};
union /* @class$24239syncaudio_cpp */ {
    unsigned char animType; // offset 0x0, size 0x1
    unsigned char category; // offset 0x0, size 0x1
};
// total size: 0x8
class PassiveInfluenceParam {
    // Members
public:
    signed short targetData; // offset 0x0, size 0x2
    signed char targetOwner; // offset 0x2, size 0x1
    union { // inferred
        union /* @class$24239syncaudio_cpp */ {
            unsigned char animType; // offset 0x0, size 0x1
            unsigned char category; // offset 0x0, size 0x1
        } __anon$24245; // offset 0x3, size 0x1
        unsigned char animType; // offset 0x3, size 0x1
        unsigned char category; // offset 0x3, size 0x1
    };
    unsigned char targetArea; // offset 0x4, size 0x1
    unsigned char targetSizeLoc; // offset 0x5, size 0x1
    unsigned char flags; // offset 0x6, size 0x1
};
// total size: 0x8
class WantsAndFearsParam {
    // Members
public:
    unsigned short eventGUID; // offset 0x0, size 0x2
    unsigned char firstLoc; // offset 0x2, size 0x1
    unsigned char secondLoc; // offset 0x3, size 0x1
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char padding1; // offset 0x5, size 0x1
    unsigned short padding2; // offset 0x6, size 0x2
};
// total size: 0x8
class ChangeWantFearTreeParam {
    // Members
public:
    unsigned short treeGUID; // offset 0x0, size 0x2
    signed short neighborData; // offset 0x2, size 0x2
    unsigned char neighborOwner; // offset 0x4, size 0x1
    unsigned char flags; // offset 0x5, size 0x1
    unsigned short padding1; // offset 0x6, size 0x2
};
// total size: 0x2
class CustomUIParam {
    // Members
public:
    signed short uiToDisplay; // offset 0x0, size 0x2
};
// total size: 0x3
class LotTransitionParam {
    // Members
public:
    unsigned char houseLoc; // offset 0x0, size 0x1
    unsigned char modeLoc; // offset 0x1, size 0x1
    unsigned char getTransitioners; // offset 0x2, size 0x1
};
// total size: 0x8
class FamilyInventoryParam {
    // Members
public:
    signed char actionSelection; // offset 0x0, size 0x1
    signed char flags; // offset 0x1, size 0x1
    signed char indexLocation; // offset 0x2, size 0x1
    signed char valueLocation; // offset 0x3, size 0x1
    int guid; // offset 0x4, size 0x4
};
// total size: 0x8
class FollowSimsParam {
    // Members
public:
    signed short paramValue; // offset 0x0, size 0x2
    signed short paramType; // offset 0x2, size 0x2
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char callback_type; // offset 0x5, size 0x1
    signed short callbackValue; // offset 0x6, size 0x2
};
// total size: 0x8
class SnapObjectParam {
    // Members
public:
    signed short sourceObjectData; // offset 0x0, size 0x2
    unsigned char sourceObjectOwner; // offset 0x2, size 0x1
    signed short destObjectData; // offset 0x4, size 0x2
    unsigned char destObjectOwner; // offset 0x6, size 0x1
    unsigned char slotLoc; // offset 0x7, size 0x1
};
// total size: 0x8
class SyncAudioParam {
    // Members
public:
    int sampleID; // offset 0x0, size 0x4
    signed char command; // offset 0x4, size 0x1
    signed char channel; // offset 0x5, size 0x1
    signed char object; // offset 0x6, size 0x1
    signed char flags; // offset 0x7, size 0x1
};
// total size: 0x6
class NotifyPlansParam {
    // Members
public:
    signed char notification; // offset 0x0, size 0x1
    signed char rhsOwner; // offset 0x1, size 0x1
    signed short rhsData; // offset 0x2, size 0x2
    signed char flags; // offset 0x4, size 0x1
};
// total size: 0x8
class ManageClothingParam {
    // Members
public:
    signed short locationData; // offset 0x0, size 0x2
    signed short valueData; // offset 0x2, size 0x2
    unsigned char locationOwner; // offset 0x4, size 0x1
    unsigned char valueOwner; // offset 0x5, size 0x1
    unsigned char operation; // offset 0x6, size 0x1
    unsigned char unused; // offset 0x7, size 0x1
};
union /* @class$24474syncaudio_cpp */ {
    struct BehaviorNodeParam bparam; // offset 0x0, size 0x8
    class ExpressionParam expression; // offset 0x0, size 0x8
    class IdleParam idle; // offset 0x0, size 0x2
    class IdleForInputParam idleForInput; // offset 0x0, size 0x4
    class UpdateParam update; // offset 0x0, size 0x4
    class RandomParam random; // offset 0x0, size 0x8
    class DistanceToParam distanceTo; // offset 0x0, size 0x6
    class DirectionToParam directionTo; // offset 0x0, size 0x8
    class TreeBreakParam treebreak; // offset 0x0, size 0x6
    class GotoRelativeParam gotoRelative; // offset 0x0, size 0x8
    class PushActionParam pushAction; // offset 0x0, size 0x5
    struct Find5WorstMotivesParam find5WorstMotives; // offset 0x0, size 0x8
    class AnimateNewParam animateNew; // offset 0x0, size 0x8
    class CreateObjectParam createObject; // offset 0x0, size 0x8
    class PreloadObjectParam preloadObject; // offset 0x0, size 0x8
    class RelationshipParam relationship; // offset 0x0, size 0x5
    class FindFunctionalObjectParam findFunctionalObject; // offset 0x0, size 0x2
    class CallFunctionalTreeParam callFunctionalTree; // offset 0x0, size 0x4
    class GotoRoutingSlotParam gotoRoutingSlot; // offset 0x0, size 0x6
    class SnapParam snap; // offset 0x0, size 0x6
    class SetBalloonParam setBalloon; // offset 0x0, size 0x8
    class PlaySoundParam playSound; // offset 0x0, size 0x6
    class KillSoundsParam killSounds; // offset 0x0, size 0x2
    class LookTowardsParam lookTowards; // offset 0x0, size 0x2
    class DialogParam dialog; // offset 0x0, size 0x8
    class GenericSimCallParam genericSimCall; // offset 0x0, size 0x2
    class SetToNextParam setToNext; // offset 0x0, size 0x8
    class MakeActionStringParam makeActionString; // offset 0x0, size 0x8
    class CallNamedTreeParam callNamedTree; // offset 0x0, size 0x6
    class KillObjectParam killObject; // offset 0x0, size 0x4
    class BudgetParam budget; // offset 0x0, size 0x8
    class DropOntoParam dropOnto; // offset 0x0, size 0x8
    class NotifyStackObjectParam notifyStackObject; // offset 0x0, size 0x1
    class FindBestActionParam findBestAction; // offset 0x0, size 0x2
    class GrabParam grab; // offset 0x0, size 0x1
    class DropParam drop; // offset 0x0, size 0x1
    class TreeBreakParam treeBreak; // offset 0x0, size 0x6
    class GosubFoundActionParam gosubFoundAction; // offset 0x0, size 0x1
    class ChangeSuitParam changeSuit; // offset 0x0, size 0x4
    class BurnParam burn; // offset 0x0, size 0x2
    class TutorialParam tutorial; // offset 0x0, size 0x1
    struct Relationship2Param relationship2; // offset 0x0, size 0x8
    class FindGoodLocationParam findGoodLocation; // offset 0x0, size 0x3
    class IsPersonInAreaParam isPersonInArea; // offset 0x0, size 0x4
    class SetMotiveDeltaParam setMotiveDelta; // offset 0x0, size 0x8
    class TestObjectTypeParam testObjectType; // offset 0x0, size 0x8
    class UIEffectParam uiEffect; // offset 0x0, size 0x6
    class UserEventParam userEvent; // offset 0x0, size 0x6
    class TestInteractingWithParam testInteractingWith; // offset 0x0, size 0x1
    class SnapToParam snapTo; // offset 0x0, size 0x8
    class CheckObjectParam checkObject; // offset 0x0, size 0x6
    class RoomEffectParam roomEffect; // offset 0x0, size 0x8
    class AnimateObjectParam animateObject; // offset 0x0, size 0x8
    class CompleteGoalParam completeGoal; // offset 0x0, size 0x8
    class CameraControlParam cameraControl; // offset 0x0, size 0x8
    class TwitchOMaticParam twitchOMaticParam; // offset 0x0, size 0x8
    class ListenForInputParam listenForInputParam; // offset 0x0, size 0x8
    class HUDCreateParam hudCreateParam; // offset 0x0, size 0x8
    class HUDAddRemoveItemParam hudAddRemoveItemParam; // offset 0x0, size 0x8
    class HUDManageParam hudManageParam; // offset 0x0, size 0x8
    class HUDDataParam hudDataParam; // offset 0x0, size 0x8
    class ParticleEffectParam particleEffectParam; // offset 0x0, size 0x8
    class SocialModeParam socialModeParam; // offset 0x0, size 0x8
    class MemoryParam memoryParam; // offset 0x0, size 0x8
    class IdleAnimateParam idleAnimateParam; // offset 0x0, size 0x8
    class PassiveInfluenceParam passiveInfluence; // offset 0x0, size 0x8
    class WantsAndFearsParam wantsAndFears; // offset 0x0, size 0x8
    class ChangeWantFearTreeParam changeWFTreeParam; // offset 0x0, size 0x8
    class CustomUIParam customUIParam; // offset 0x0, size 0x2
    class LotTransitionParam lotTransitionParam; // offset 0x0, size 0x3
    class FamilyInventoryParam familyInventoryParam; // offset 0x0, size 0x8
    class FollowSimsParam followSims; // offset 0x0, size 0x8
    class SnapObjectParam snapObjectParam; // offset 0x0, size 0x8
    class SyncAudioParam syncAudioParam; // offset 0x0, size 0x8
    class NotifyPlansParam notifyPlansParam; // offset 0x0, size 0x6
    class ManageClothingParam manageClothingParam; // offset 0x0, size 0x8
};
// total size: 0x8
class XPrimParam {
    // Members
public:
    union { // inferred
        union /* @class$24474syncaudio_cpp */ {
            struct BehaviorNodeParam bparam; // offset 0x0, size 0x8
            class ExpressionParam expression; // offset 0x0, size 0x8
            class IdleParam idle; // offset 0x0, size 0x2
            class IdleForInputParam idleForInput; // offset 0x0, size 0x4
            class UpdateParam update; // offset 0x0, size 0x4
            class RandomParam random; // offset 0x0, size 0x8
            class DistanceToParam distanceTo; // offset 0x0, size 0x6
            class DirectionToParam directionTo; // offset 0x0, size 0x8
            class TreeBreakParam treebreak; // offset 0x0, size 0x6
            class GotoRelativeParam gotoRelative; // offset 0x0, size 0x8
            class PushActionParam pushAction; // offset 0x0, size 0x5
            struct Find5WorstMotivesParam find5WorstMotives; // offset 0x0, size 0x8
            class AnimateNewParam animateNew; // offset 0x0, size 0x8
            class CreateObjectParam createObject; // offset 0x0, size 0x8
            class PreloadObjectParam preloadObject; // offset 0x0, size 0x8
            class RelationshipParam relationship; // offset 0x0, size 0x5
            class FindFunctionalObjectParam findFunctionalObject; // offset 0x0, size 0x2
            class CallFunctionalTreeParam callFunctionalTree; // offset 0x0, size 0x4
            class GotoRoutingSlotParam gotoRoutingSlot; // offset 0x0, size 0x6
            class SnapParam snap; // offset 0x0, size 0x6
            class SetBalloonParam setBalloon; // offset 0x0, size 0x8
            class PlaySoundParam playSound; // offset 0x0, size 0x6
            class KillSoundsParam killSounds; // offset 0x0, size 0x2
            class LookTowardsParam lookTowards; // offset 0x0, size 0x2
            class DialogParam dialog; // offset 0x0, size 0x8
            class GenericSimCallParam genericSimCall; // offset 0x0, size 0x2
            class SetToNextParam setToNext; // offset 0x0, size 0x8
            class MakeActionStringParam makeActionString; // offset 0x0, size 0x8
            class CallNamedTreeParam callNamedTree; // offset 0x0, size 0x6
            class KillObjectParam killObject; // offset 0x0, size 0x4
            class BudgetParam budget; // offset 0x0, size 0x8
            class DropOntoParam dropOnto; // offset 0x0, size 0x8
            class NotifyStackObjectParam notifyStackObject; // offset 0x0, size 0x1
            class FindBestActionParam findBestAction; // offset 0x0, size 0x2
            class GrabParam grab; // offset 0x0, size 0x1
            class DropParam drop; // offset 0x0, size 0x1
            class TreeBreakParam treeBreak; // offset 0x0, size 0x6
            class GosubFoundActionParam gosubFoundAction; // offset 0x0, size 0x1
            class ChangeSuitParam changeSuit; // offset 0x0, size 0x4
            class BurnParam burn; // offset 0x0, size 0x2
            class TutorialParam tutorial; // offset 0x0, size 0x1
            struct Relationship2Param relationship2; // offset 0x0, size 0x8
            class FindGoodLocationParam findGoodLocation; // offset 0x0, size 0x3
            class IsPersonInAreaParam isPersonInArea; // offset 0x0, size 0x4
            class SetMotiveDeltaParam setMotiveDelta; // offset 0x0, size 0x8
            class TestObjectTypeParam testObjectType; // offset 0x0, size 0x8
            class UIEffectParam uiEffect; // offset 0x0, size 0x6
            class UserEventParam userEvent; // offset 0x0, size 0x6
            class TestInteractingWithParam testInteractingWith; // offset 0x0, size 0x1
            class SnapToParam snapTo; // offset 0x0, size 0x8
            class CheckObjectParam checkObject; // offset 0x0, size 0x6
            class RoomEffectParam roomEffect; // offset 0x0, size 0x8
            class AnimateObjectParam animateObject; // offset 0x0, size 0x8
            class CompleteGoalParam completeGoal; // offset 0x0, size 0x8
            class CameraControlParam cameraControl; // offset 0x0, size 0x8
            class TwitchOMaticParam twitchOMaticParam; // offset 0x0, size 0x8
            class ListenForInputParam listenForInputParam; // offset 0x0, size 0x8
            class HUDCreateParam hudCreateParam; // offset 0x0, size 0x8
            class HUDAddRemoveItemParam hudAddRemoveItemParam; // offset 0x0, size 0x8
            class HUDManageParam hudManageParam; // offset 0x0, size 0x8
            class HUDDataParam hudDataParam; // offset 0x0, size 0x8
            class ParticleEffectParam particleEffectParam; // offset 0x0, size 0x8
            class SocialModeParam socialModeParam; // offset 0x0, size 0x8
            class MemoryParam memoryParam; // offset 0x0, size 0x8
            class IdleAnimateParam idleAnimateParam; // offset 0x0, size 0x8
            class PassiveInfluenceParam passiveInfluence; // offset 0x0, size 0x8
            class WantsAndFearsParam wantsAndFears; // offset 0x0, size 0x8
            class ChangeWantFearTreeParam changeWFTreeParam; // offset 0x0, size 0x8
            class CustomUIParam customUIParam; // offset 0x0, size 0x2
            class LotTransitionParam lotTransitionParam; // offset 0x0, size 0x3
            class FamilyInventoryParam familyInventoryParam; // offset 0x0, size 0x8
            class FollowSimsParam followSims; // offset 0x0, size 0x8
            class SnapObjectParam snapObjectParam; // offset 0x0, size 0x8
            class SyncAudioParam syncAudioParam; // offset 0x0, size 0x8
            class NotifyPlansParam notifyPlansParam; // offset 0x0, size 0x6
            class ManageClothingParam manageClothingParam; // offset 0x0, size 0x8
        } __anon$24475; // offset 0x0, size 0x8
        struct BehaviorNodeParam bparam; // offset 0x0, size 0x8
        class ExpressionParam expression; // offset 0x0, size 0x8
        class IdleParam idle; // offset 0x0, size 0x2
        class IdleForInputParam idleForInput; // offset 0x0, size 0x4
        class UpdateParam update; // offset 0x0, size 0x4
        class RandomParam random; // offset 0x0, size 0x8
        class DistanceToParam distanceTo; // offset 0x0, size 0x6
        class DirectionToParam directionTo; // offset 0x0, size 0x8
        class TreeBreakParam treebreak; // offset 0x0, size 0x6
        class GotoRelativeParam gotoRelative; // offset 0x0, size 0x8
        class PushActionParam pushAction; // offset 0x0, size 0x5
        struct Find5WorstMotivesParam find5WorstMotives; // offset 0x0, size 0x8
        class AnimateNewParam animateNew; // offset 0x0, size 0x8
        class CreateObjectParam createObject; // offset 0x0, size 0x8
        class PreloadObjectParam preloadObject; // offset 0x0, size 0x8
        class RelationshipParam relationship; // offset 0x0, size 0x5
        class FindFunctionalObjectParam findFunctionalObject; // offset 0x0, size 0x2
        class CallFunctionalTreeParam callFunctionalTree; // offset 0x0, size 0x4
        class GotoRoutingSlotParam gotoRoutingSlot; // offset 0x0, size 0x6
        class SnapParam snap; // offset 0x0, size 0x6
        class SetBalloonParam setBalloon; // offset 0x0, size 0x8
        class PlaySoundParam playSound; // offset 0x0, size 0x6
        class KillSoundsParam killSounds; // offset 0x0, size 0x2
        class LookTowardsParam lookTowards; // offset 0x0, size 0x2
        class DialogParam dialog; // offset 0x0, size 0x8
        class GenericSimCallParam genericSimCall; // offset 0x0, size 0x2
        class SetToNextParam setToNext; // offset 0x0, size 0x8
        class MakeActionStringParam makeActionString; // offset 0x0, size 0x8
        class CallNamedTreeParam callNamedTree; // offset 0x0, size 0x6
        class KillObjectParam killObject; // offset 0x0, size 0x4
        class BudgetParam budget; // offset 0x0, size 0x8
        class DropOntoParam dropOnto; // offset 0x0, size 0x8
        class NotifyStackObjectParam notifyStackObject; // offset 0x0, size 0x1
        class FindBestActionParam findBestAction; // offset 0x0, size 0x2
        class GrabParam grab; // offset 0x0, size 0x1
        class DropParam drop; // offset 0x0, size 0x1
        class TreeBreakParam treeBreak; // offset 0x0, size 0x6
        class GosubFoundActionParam gosubFoundAction; // offset 0x0, size 0x1
        class ChangeSuitParam changeSuit; // offset 0x0, size 0x4
        class BurnParam burn; // offset 0x0, size 0x2
        class TutorialParam tutorial; // offset 0x0, size 0x1
        struct Relationship2Param relationship2; // offset 0x0, size 0x8
        class FindGoodLocationParam findGoodLocation; // offset 0x0, size 0x3
        class IsPersonInAreaParam isPersonInArea; // offset 0x0, size 0x4
        class SetMotiveDeltaParam setMotiveDelta; // offset 0x0, size 0x8
        class TestObjectTypeParam testObjectType; // offset 0x0, size 0x8
        class UIEffectParam uiEffect; // offset 0x0, size 0x6
        class UserEventParam userEvent; // offset 0x0, size 0x6
        class TestInteractingWithParam testInteractingWith; // offset 0x0, size 0x1
        class SnapToParam snapTo; // offset 0x0, size 0x8
        class CheckObjectParam checkObject; // offset 0x0, size 0x6
        class RoomEffectParam roomEffect; // offset 0x0, size 0x8
        class AnimateObjectParam animateObject; // offset 0x0, size 0x8
        class CompleteGoalParam completeGoal; // offset 0x0, size 0x8
        class CameraControlParam cameraControl; // offset 0x0, size 0x8
        class TwitchOMaticParam twitchOMaticParam; // offset 0x0, size 0x8
        class ListenForInputParam listenForInputParam; // offset 0x0, size 0x8
        class HUDCreateParam hudCreateParam; // offset 0x0, size 0x8
        class HUDAddRemoveItemParam hudAddRemoveItemParam; // offset 0x0, size 0x8
        class HUDManageParam hudManageParam; // offset 0x0, size 0x8
        class HUDDataParam hudDataParam; // offset 0x0, size 0x8
        class ParticleEffectParam particleEffectParam; // offset 0x0, size 0x8
        class SocialModeParam socialModeParam; // offset 0x0, size 0x8
        class MemoryParam memoryParam; // offset 0x0, size 0x8
        class IdleAnimateParam idleAnimateParam; // offset 0x0, size 0x8
        class PassiveInfluenceParam passiveInfluence; // offset 0x0, size 0x8
        class WantsAndFearsParam wantsAndFears; // offset 0x0, size 0x8
        class ChangeWantFearTreeParam changeWFTreeParam; // offset 0x0, size 0x8
        class CustomUIParam customUIParam; // offset 0x0, size 0x2
        class LotTransitionParam lotTransitionParam; // offset 0x0, size 0x3
        class FamilyInventoryParam familyInventoryParam; // offset 0x0, size 0x8
        class FollowSimsParam followSims; // offset 0x0, size 0x8
        class SnapObjectParam snapObjectParam; // offset 0x0, size 0x8
        class SyncAudioParam syncAudioParam; // offset 0x0, size 0x8
        class NotifyPlansParam notifyPlansParam; // offset 0x0, size 0x6
        class ManageClothingParam manageClothingParam; // offset 0x0, size 0x8
    };
};
// total size: 0x50
class TreeSim {
    // Static members
    static unsigned char sBreakOnCallTreeStringFailure; // size: 0x1
    static unsigned char sTraceOnlyOnPrimBreak; // size: 0x1
    static float sTooLongInTickTime; // size: 0x4
    static float sTooLongInPrimTime; // size: 0x4
    static unsigned char sTestingTooLongInPrim; // size: 0x1
    static signed short sMaxIterations; // size: 0x2
    static unsigned char sInMainSim; // size: 0x1

    // Members
protected:
    class cXObject * m_pObject; // offset 0x0, size 0x4
    class cXPerson * m_pPerson; // offset 0x4, size 0x4
    class cXMTObject * m_pMTObject; // offset 0x8, size 0x4
    class cXPortal * m_pPortal; // offset 0xC, size 0x4
    class IBaseSimInstance * m_pEoRInstance; // offset 0x10, size 0x4
    class ESim * m_pEoRPerson; // offset 0x14, size 0x4
public:
    void * __vptr$; // offset 0x18, size 0x4
    int fIterations; // offset 0x1C, size 0x4
    float fTickDuration; // offset 0x20, size 0x4
    class TreeStack fStack; // offset 0x24, size 0x1C
    int fLastTrans; // offset 0x40, size 0x4
    unsigned char fLastResult; // offset 0x44, size 0x1
    signed short * fAutoStackArea; // offset 0x48, size 0x4
    signed short fError; // offset 0x4C, size 0x2
    unsigned char fNoMainTreeSim; // offset 0x4E, size 0x1
};
// total size: 0xC
struct BitsetBase {
    // Members
    unsigned int mWord[3]; // offset 0x0, size 0xC
};
// total size: 0xC
class bitset : private BitsetBase {
    // Static members
    static unsigned long kSize; // size: 0x4
    static unsigned long kNW; // size: 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    signed short * mpBegin; // offset 0x0, size 0x4
    signed short * mpEnd; // offset 0x4, size 0x4
    signed short * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct _Byte_key_map_base_iterator {
    // Members
    class bitset * _M_base_bitset; // offset 0x0, size 0x4
    class vector * _M_values; // offset 0x4, size 0x4
    unsigned long _M_bit_pos; // offset 0x8, size 0x4
    unsigned long _M_key_index; // offset 0xC, size 0x4
};
// total size: 0x10
struct _Byte_key_map_iterator : public _Byte_key_map_base_iterator {};
// total size: 0x1C
class byte_key_map {
    // Static members
    static unsigned long _S_end_index; // size: 0x4

    // Members
    class bitset _M_keys_t; // offset 0x0, size 0xC
    class vector _M_data_t; // offset 0xC, size 0x10
};
// total size: 0x30
class EdithVariableSet {
    // Static members
    static unsigned char s_bTaggedGraphicField; // size: 0x1
    static unsigned char s_serializing; // size: 0x1
    static signed char s_indexLookup[72]; // size: 0x48
    static unsigned char s_IsForcedInstanceVariable[72]; // size: 0x48
    static unsigned char s_VariablesUsed[72]; // size: 0x48
    static unsigned char s_ForcedInstanceVarsCount; // size: 0x1
    static signed short s_InvalidReference; // size: 0x2
    static class byte_key_map s_CategoryVariableMapSet; // size: 0x14

    // Members
    class byte_key_map m_InstanceVariableMap; // offset 0x0, size 0x1C
    unsigned char m_Category; // offset 0x1C, size 0x1
    signed short m_FastArray[8]; // offset 0x1E, size 0x10
};
// total size: 0x4
class RelMatrix {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
struct FInt {
    // Members
    int whole; // offset 0x0, size 0x4
};
// total size: 0x8
class IPoint {
    // Members
public:
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x8
struct TilePt {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x8
class FTilePt {
    // Members
public:
    struct FInt x; // offset 0x0, size 0x4
    struct FInt y; // offset 0x4, size 0x4
};
// total size: 0x10
class IRect {
    // Members
public:
    int top; // offset 0x0, size 0x4
    int left; // offset 0x4, size 0x4
    int bottom; // offset 0x8, size 0x4
    int right; // offset 0xC, size 0x4
};
// total size: 0x10
class FTileRect {
    // Members
public:
    struct FInt bottom; // offset 0x0, size 0x4
    struct FInt right; // offset 0x4, size 0x4
    struct FInt top; // offset 0x8, size 0x4
    struct FInt left; // offset 0xC, size 0x4
};
// total size: 0x48
class SlotDescriptor {
    // Members
public:
    signed short type; // offset 0x0, size 0x2
    float xoffset; // offset 0x4, size 0x4
    float yoffset; // offset 0x8, size 0x4
    float altOffset; // offset 0xC, size 0x4
    int maximumSize; // offset 0x10, size 0x4
    int flags; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    int multipliers[3]; // offset 0x1C, size 0xC
    int rsFlags; // offset 0x28, size 0x4
    int snapTargetSlot; // offset 0x2C, size 0x4
    int minProximity; // offset 0x30, size 0x4
    int maxProximity; // offset 0x34, size 0x4
    int optimalProximity; // offset 0x38, size 0x4
    float gradient; // offset 0x3C, size 0x4
    int facing; // offset 0x40, size 0x4
    int resolution; // offset 0x44, size 0x4
};
// total size: 0x4
class Slot {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum StdHeight {
    kHeightUndefined = 0,
    kHeightGround = 1,
    kHeightLowTable = 2,
    kHeightTable = 3,
    kHeightCounter = 4,
    kHeightNonStandard = 5,
    kHeightHand = 6,
    kHeightSitting = 7,
    kHeightEndTable = 8,
};
// total size: 0x24
class ObjectSlot : public Slot {
    // Members
    signed short objectID; // offset 0x4, size 0x2
    enum StdHeight height; // offset 0x8, size 0x4
    int maximumSize; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    int facing; // offset 0x14, size 0x4
    float xoffset; // offset 0x18, size 0x4
    float yoffset; // offset 0x1C, size 0x4
    float altOffset; // offset 0x20, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class ObjectSlot * mpBegin; // offset 0x0, size 0x4
    class ObjectSlot * mpEnd; // offset 0x4, size 0x4
    class ObjectSlot * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x3C
class RoutingSlot : public Slot {
    // Static members
    static float kCornerOffset[6]; // size: 0x18
    static float kStraightOffset[6]; // size: 0x18

    // Members
    float xoffset; // offset 0x4, size 0x4
    float yoffset; // offset 0x8, size 0x4
    float altOffset; // offset 0xC, size 0x4
    int multipliers[3]; // offset 0x10, size 0xC
    int rsFlags; // offset 0x1C, size 0x4
    int snapTargetSlot; // offset 0x20, size 0x4
    int minProximity; // offset 0x24, size 0x4
    int maxProximity; // offset 0x28, size 0x4
    int optimalProximity; // offset 0x2C, size 0x4
    float gradient; // offset 0x30, size 0x4
    int facing; // offset 0x34, size 0x4
    int resolution; // offset 0x38, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class RoutingSlot * mpBegin; // offset 0x0, size 0x4
    class RoutingSlot * mpEnd; // offset 0x4, size 0x4
    class RoutingSlot * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
union /* @class$6572syncaudio_cpp */ {
    class ObjSelector * selector; // offset 0x0, size 0x4
    unsigned int renderer; // offset 0x0, size 0x4
};
// total size: 0x6C
class SpriteSlot : public Slot {
    // Members
    float xoffset; // offset 0x4, size 0x4
    float yoffset; // offset 0x8, size 0x4
    float altOffset; // offset 0xC, size 0x4
    int m_ticksLeft; // offset 0x10, size 0x4
    int m_ticksDuration; // offset 0x14, size 0x4
    int m_id; // offset 0x18, size 0x4
    int m_idAlt; // offset 0x1C, size 0x4
    int m_blinkPeriod; // offset 0x20, size 0x4
    int m_blinkMillisecondsElapsed; // offset 0x24, size 0x4
    union { // inferred
        union /* @class$6572syncaudio_cpp */ {
            class ObjSelector * selector; // offset 0x0, size 0x4
            unsigned int renderer; // offset 0x0, size 0x4
        } __anon$6596; // offset 0x28, size 0x4
        class ObjSelector * selector; // offset 0x28, size 0x4
        unsigned int renderer; // offset 0x28, size 0x4
    };
    int m_numFrames; // offset 0x2C, size 0x4
    int m_frame; // offset 0x30, size 0x4
    int m_frameDelta; // offset 0x34, size 0x4
    int m_frameTicks; // offset 0x38, size 0x4
    int m_balloonSpriteID; // offset 0x3C, size 0x4
    int m_notSignSpriteID; // offset 0x40, size 0x4
    int m_priority; // offset 0x44, size 0x4
    int m_options; // offset 0x48, size 0x4
    float m_altOffsetDefault; // offset 0x4C, size 0x4
    float m_sizeMultiplier[2]; // offset 0x50, size 0x8
    float m_Alpha; // offset 0x58, size 0x4
    float m_maxPopSize; // offset 0x5C, size 0x4
    unsigned char m_showWhenInactive; // offset 0x60, size 0x1
    class cXObject * m_pObj; // offset 0x64, size 0x4
    class ESpriteRender * m_pSpriteRender; // offset 0x68, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class SpriteSlot * mpBegin; // offset 0x0, size 0x4
    class SpriteSlot * mpEnd; // offset 0x4, size 0x4
    class SpriteSlot * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum ObjectLightSource {
    kOLS_None = 0,
    kOLS_Lamp = 1,
};
enum eCTilePtDir {
    kNE = 0,
    kSW = 1,
    kNW = 2,
    kSE = 3,
    kN = 4,
    kS = 5,
    kE = 6,
    kW = 7,
    kMaxDir = 7,
    kNone = 8,
};
// total size: 0x3
class CTilePt {
    // Static members
    static class CTilePt sDirections[]; // size: 0x0

    // Members
public:
    signed char mX; // offset 0x0, size 0x1
    signed char mY; // offset 0x1, size 0x1
    signed char mLevel; // offset 0x2, size 0x1
};
enum TileWallsSegment {
    kNoWalls = 0,
    kTopLeft = 1,
    kTopRight = 2,
    kBottomRight = 4,
    kBottomLeft = 8,
    kHorizDiag = 16,
    kVertDiag = 32,
    kAllWalls = 255,
};
// total size: 0x8
struct DamageEvent {
    // Members
    signed short nAmount[4]; // offset 0x0, size 0x8
};
// total size: 0x8
struct Armor {
    // Members
    signed short nAmount[4]; // offset 0x0, size 0x8
};
enum TransitionType {
    kTTUninitialized = 0,
    kTTNewGame = 1,
    kTTSavedGame = 2,
    kTTViaPortal = 3,
    kTTViaMap = 4,
    kTTDevMenu = 5,
    kTTAutoTest = 6,
};
enum TFGL_ACTIONS {
    TFGL_DONT_PLACE = 0,
    TFGL_SMOKE = 1,
    TFGL_OUT_OF_WORLD = 2,
    TFGL_FORCE = 3,
    TFGL_NO_FORCE = 4,
    TFGL_OVERLAPPING = 5,
};
enum ObjAnimFlags {
    kUseObjAnimTable = 1,
    kRunImmediate = 2,
    kObjAnimRestart = 4,
    kObjAnimEngaged = 8,
};
// total size: 0x138
class cXObject : public TreeSim {
    // Static members
    static signed short overrideDialogReturnCode; // size: 0x2
    static unsigned int sCameraAnimPending; // size: 0x4
    static class BString2 sLastUserTypedName; // size: 0x4
    static unsigned char sFreeWillClassic; // size: 0x1
    static unsigned char sFreeWill; // size: 0x1
    static int gPersonWidth; // size: 0x4
    static int sYDirTable[9]; // size: 0x24
    static int sXDirTable[9]; // size: 0x24

    // Members
protected:
    signed short * fAttrs; // offset 0x50, size 0x4
    int fNumAttr; // offset 0x54, size 0x4
    signed short * fSemiAttrs; // offset 0x58, size 0x4
    int fNumSemiAttr; // offset 0x5C, size 0x4
    signed short * fStaticAttrs; // offset 0x60, size 0x4
    int fNumStaticAttr; // offset 0x64, size 0x4
    signed short * fDynSpriteFlags; // offset 0x68, size 0x4
    signed short fNumDynSprites; // offset 0x6C, size 0x2
    signed short fTemp[8]; // offset 0x6E, size 0x10
    class EdithVariableSet fData; // offset 0x80, size 0x30
    class ObjectModule * fModule; // offset 0xB0, size 0x4
    class cXObject * fNext; // offset 0xB4, size 0x4
    class RelMatrix * fInstMatrix; // offset 0xB8, size 0x4
    signed short fID; // offset 0xBC, size 0x2
    class FTilePt fLocation; // offset 0xC0, size 0x8
    float fElevation; // offset 0xC8, size 0x4
    class FTileRect fRect; // offset 0xCC, size 0x10
    int fLevel; // offset 0xDC, size 0x4
    int fMiscFlags; // offset 0xE0, size 0x4
    struct ObjDefinition * fDef; // offset 0xE4, size 0x4
    class ObjSelector * fObjSel; // offset 0xE8, size 0x4
    class vector fHierSlots; // offset 0xEC, size 0x10
    class vector fRoutingSlots; // offset 0xFC, size 0x10
    class vector fSpriteSlots; // offset 0x10C, size 0x10
private:
    unsigned char m_bDirectControl; // offset 0x11C, size 0x1
    class cXObject * m_SyncObject; // offset 0x120, size 0x4
    float m_SyncTimeOut; // offset 0x124, size 0x4
    unsigned char m_WaitingForSync; // offset 0x128, size 0x1
    int m_SyncAnimStartFrame; // offset 0x12C, size 0x4
    unsigned char m_taggedGraphicsField; // offset 0x130, size 0x1
    class CatalogResource * fCatalogResource; // offset 0x134, size 0x4
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class cXObject * * mpBegin; // offset 0x0, size 0x4
    class cXObject * * mpEnd; // offset 0x4, size 0x4
    class cXObject * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class cXPerson * * mpBegin; // offset 0x0, size 0x4
    class cXPerson * * mpEnd; // offset 0x4, size 0x4
    class cXPerson * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class cXPortal * * mpBegin; // offset 0x0, size 0x4
    class cXPortal * * mpEnd; // offset 0x4, size 0x4
    class cXPortal * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum SimFlag {
    kSF_Enabled = 1,
    kSF_Independent = 2,
    kSF_HasError = 4,
    kSF_HasAutonomous = 8,
};
// total size: 0x20D8
class ObjectModule : public Commander {
    // Members
public:
    unsigned char fInited; // offset 0x10, size 0x1
    unsigned char fPersonRelationshipsChanged; // offset 0x11, size 0x1
    class vector fIdleMap; // offset 0x14, size 0x10
    class cXObject * fFirst; // offset 0x24, size 0x4
    class cXObject * fLast; // offset 0x28, size 0x4
    signed short fObjectMap[64][64]; // offset 0x2C, size 0x2000
    class vector fDisablers; // offset 0x202C, size 0x10
    class vector fKillQueue; // offset 0x203C, size 0x10
    class vector fPeople; // offset 0x204C, size 0x10
    class vector fPortals; // offset 0x205C, size 0x10
    class vector fGlobalRoutingSlots; // offset 0x206C, size 0x10
    class cXObject * fTutorialObject; // offset 0x207C, size 0x4
    unsigned char m_clearingWorld; // offset 0x2080, size 0x1
private:
    class vector fObjectTable; // offset 0x2084, size 0x10
    class cXObject * highPile[16]; // offset 0x2094, size 0x40
    unsigned char m_KillingAllObjects; // offset 0x20D4, size 0x1
};
// Range: 0x80006CE0 -> 0x80006DB0
// this: r28
unsigned char SyncAudio::PreloadSyncSample(unsigned int resNumber /* r27 */) {
    // Local variables
    class EAutoMutex am; // r1+0x8
    unsigned char rc; // r29
    int i; // r28
    class EResource * pRes; // r0

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x80006DB0 -> 0x80006FC4
// this: r31
unsigned char SyncAudio::IsLoadedSyncSample(unsigned int resNumber /* r30 */) {
    // Local variables
    class EAutoMutex am; // r1+0x8
    struct SyncSoundSample * foundRec; // r5
    int requestCount; // r6
    int loadCount; // r7
    class EResource * pResourceFound; // r3
    int i; // r8
    int i; // r4

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x80006FC4 -> 0x8000706C
// this: r31
void SyncAudio::UnloadSyncSample(unsigned int resNumber /* r30 */) {
    // Local variables
    class EAutoMutex am; // r1+0x8
    struct SyncSoundSample * rec; // r31
    int i; // r4
    unsigned char found; // r5

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x8000706C -> 0x80007154
void SyncAudio::ClearCommandQueue() {
    // Local variables
    int i; // r0
}

// total size: 0x10
class EClock {
    // Members
protected:
    long long m_lastTime; // offset 0x0, size 0x8
    float m_time; // offset 0x8, size 0x4
};
// total size: 0xC
struct ListenPacket {
    // Members
    unsigned short listenerID; // offset 0x0, size 0x2
    unsigned short simID; // offset 0x2, size 0x2
    enum ECTRL_CMD command; // offset 0x4, size 0x4
    unsigned short callbackParam; // offset 0x8, size 0x2
    unsigned char bActive; // offset 0xA, size 0x1
    unsigned char bMarkedForDelete; // offset 0xB, size 0x1
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    struct ListenPacket * mpBegin; // offset 0x0, size 0x4
    struct ListenPacket * mpEnd; // offset 0x4, size 0x4
    struct ListenPacket * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x0
class SimLoopProbe {};
enum TimeOfDay {
    kDay = 0,
    kDusk = 1,
    kNight = 2,
    kDawn = 3,
};
// total size: 0x4
class GameTime {
    // Static members
    static signed short GameStartSecond; // size: 0x2
    static signed short GameStartMinute; // size: 0x2
    static signed short GameStartHour; // size: 0x2
    static signed short GameStartDay; // size: 0x2
    static signed short GameStartMonth; // size: 0x2
    static signed short GameStartYear; // size: 0x2
    static signed short EpochSecond; // size: 0x2
    static signed short EpochMinute; // size: 0x2
    static signed short EpochHour; // size: 0x2
    static signed short EpochDay; // size: 0x2
    static signed short EpochMonth; // size: 0x2
    static signed short EpochYear; // size: 0x2
    static int SecondsInAYear; // size: 0x4
    static int SecondsInAMonth; // size: 0x4
    static int SecondsInADay; // size: 0x4
    static int SecondsInAnHour; // size: 0x4
    static signed short SecondsInAMinute; // size: 0x2
    static signed short MinutesInAnHour; // size: 0x2
    static signed short HoursInADay; // size: 0x2
    static signed short DaysInAYear; // size: 0x2
    static signed short MonthsInAYear; // size: 0x2
    static signed short DaysInAMonth; // size: 0x2

    // Members
    int m_nSecondsSinceEpoch; // offset 0x0, size 0x4
};
enum Mode {
    kNotRunning = 0,
    kSimMode = 1,
    kBuildMode = 2,
    kBuyMode = 3,
    kAuthorMode = 4,
};
enum SimSpeed {
    kSpeedMed = 0,
    kSpeedSlow = -1,
    kSpeedFast = -2,
    kSpeedVeryFast = -3,
};
// total size: 0xD4
class cSimulator : public Commander {
    // Static members
    static float MAX_ELAPSED_TIME; // size: 0x4
    static float MAX_TICKS_PER_UPDATE; // size: 0x4
    static float SPEED_MULTIPLIER_VERY_FAST; // size: 0x4
    static float SPEED_MULTIPLIER_MOSTLY_FAST; // size: 0x4
    static float SPEED_MULTIPLIER_MOSTLY_SLOW; // size: 0x4
    static float SPEED_MULTIPLIER_REGULAR; // size: 0x4
    static float REAL_TIME_MILLISECONDS_PER_TICK; // size: 0x4
    static int TRANSITION_PLATE_TRIGGER_DISTANCE; // size: 0x4
    static int PASSIVE_INFLUENCE_TICKS_TO_ADVANCE; // size: 0x4
    static signed short GAME_TIME_SECONDS_PER_TICK; // size: 0x2
    static int MAX_FUNDS; // size: 0x4

    // Members
    class vector listenerEvents; // offset 0x10, size 0x10
    unsigned char bInListenerCallback; // offset 0x20, size 0x1
    unsigned short listenerSelectedSimID; // offset 0x22, size 0x2
    unsigned char bListenerFilterActive; // offset 0x24, size 0x1
    int listenerActiveEventCount; // offset 0x28, size 0x4
    unsigned int listenerFilterID; // offset 0x2C, size 0x4
    unsigned char bListenerFilterPaused; // offset 0x30, size 0x1
    signed short m_nSimGlobals[48]; // offset 0x32, size 0x60
    float m_speedMultiplier; // offset 0x94, size 0x4
    int m_fTicks; // offset 0x98, size 0x4
    float m_fElapsedTime; // offset 0x9C, size 0x4
    float m_fOrigDt; // offset 0xA0, size 0x4
    class PassiveInfluenceSystem * m_passiveInfluenceSystem; // offset 0xA4, size 0x4
    int m_nLotValue; // offset 0xA8, size 0x4
    int m_nArchValue; // offset 0xAC, size 0x4
    int fObjectsValue; // offset 0xB0, size 0x4
    int m_Funds; // offset 0xB4, size 0x4
    unsigned int fRandSeed; // offset 0xB8, size 0x4
    int m_DatasetLoaded; // offset 0xBC, size 0x4
    int fCurObjectID; // offset 0xC0, size 0x4
    class SimLoopProbe * fProbe; // offset 0xC4, size 0x4
    class GameTime m_currentGameTime; // offset 0xC8, size 0x4
    unsigned char bIsLoading; // offset 0xCC, size 0x1
    unsigned char fStalled; // offset 0xCD, size 0x1
    unsigned char bIsPausedOnNullMainTree; // offset 0xCE, size 0x1
    unsigned char fInsideSimulate; // offset 0xCF, size 0x1
    unsigned char fInsideBuildMode; // offset 0xD0, size 0x1
};
// Range: 0x80007154 -> 0x800071DC
// this: r29
void SyncAudio::PlaySyncSample(unsigned int resNumber /* r30 */, int channelNumber /* r31 */, float leftVolume /* f30 */, float rightVolume /* f31 */) {
    // Local variables
    class EAutoMutex am; // r1+0x8
}

// total size: 0x14
struct EVoiceDesc {
    // Members
    unsigned int mask; // offset 0x0, size 0x4
    float volumeL; // offset 0x4, size 0x4
    float volumeR; // offset 0x8, size 0x4
    float pitch; // offset 0xC, size 0x4
    unsigned char bPlaying; // offset 0x10, size 0x1
    unsigned char bLooping; // offset 0x11, size 0x1
};
// Range: 0x800071DC -> 0x80007414
void SyncAudio::ActuallyPlaySyncSample(float leftVolume /* f30 */, float rightVolume /* f31 */) {
    // Local variables
    struct SyncSoundChannel * channelRec; // r0
    struct SyncSoundSample * sampleRec; // r30
    int i; // r6
    unsigned char found; // r7
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
}

// Range: 0x80007414 -> 0x8000753C
// this: r28
void SyncAudio::CleanUpAllChannelsAndSamples() {
    // Local variables
    class EAutoMutex am; // r1+0x8
    int i; // r29
    int i; // r29

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EAudio * _pActualAudio;
}

enum TreeReturnCode {
    kTrueComplete = 1,
    kFalseComplete = 0,
    kEngaged = 2,
    kError = -1,
    kStackLoaded = 3,
    kGlobalEngaged = 4,
    kWatingForUpdate = -889274641,
    kDead = -559038737,
};
// Range: 0x8000753C -> 0x80007A2C
// this: r30
enum TreeReturnCode SyncAudio::TrySyncAudio(int sampleID /* r31 */, signed short objectID /* r29 */, signed short & channel /* r27 */) {
    // Local variables
    int i; // r28
    float leftVolume; // f1
    float rightVolume; // f0
}

// Range: 0x80007A2C -> 0x80007B2C
void SyncAudio::ClearEdithTrackingData() {
    // Local variables
    int i; // r4
}

// Range: 0x80007B2C -> 0x80007B40
// this: r4
int SyncAudio::GetErrorCode() {
    // Local variables
    int errorCode; // r0
}

// total size: 0xC
struct {} __vt__9SyncAudio; // size: 0xC, address: 0x80423B00
// total size: 0xC
struct {} __vt__16SyncSoundChannel; // size: 0xC, address: 0x80423B0C
// total size: 0xC
struct {} __vt__15SyncSoundSample; // size: 0xC, address: 0x80423B18
// total size: 0x4
class EGameStateId {
    // Members
protected:
    unsigned int m_id; // offset 0x0, size 0x4
};
// total size: 0x78
class EIGameInstance : public EInstance {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28
};
enum ERenderPassReplaceTexture {
    kReplaceFirstPassTexture = 0,
    kReplaceSecondPassTexture = 1,
    kBothPassesTexture = 2,
};
// total size: 0x368
class EIStaticModel : public EIGameInstance {
    // Static members
    static float s_ghostAlphaFixed; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class EAnimController * m_AC; // offset 0x78, size 0x4
    class EMat4 m_mOrient; // offset 0x80, size 0x40
    class EMat4 m_mAdjOrient; // offset 0xC0, size 0x40
    class EMat4 m_mNonScaledOrient; // offset 0x100, size 0x40
    class InstanceData m_instanceData; // offset 0x140, size 0x224
    int m_bMatsInDL; // offset 0x364, size 0x4
};
enum DiagonalSideSelector {
    kNotSpecified = 0,
    kLeft = 1,
    kTop = 2,
    kRight = 3,
    kBottom = 4,
};
enum WallMode {
    NO_STATE = 255,
    kUp = 27,
    kDown = 21,
    kFade = 31,
};
enum WallTypes {
    NO_EXTENSION_AND_NO_CAP = 0,
    BOTH_EXTENSION_AND_NO_CAP = 1,
    RIGHT_EXTENSION_AND_NO_CAP = 2,
    LEFT_EXTENSION_AND_NO_CAP = 3,
    NO_EXTENSION_RIGHT_CAP = 4,
    NO_EXTENSION_LEFT_CAP = 5,
    NO_EXTENSION_DOUBLE_CAP = 6,
    RIGHT_EXTENSION_AND_CAP = 7,
    LEFT_EXTENSION_AND_CAP = 8,
    NUM_WALL_VARIANTS = 9,
};
enum FloorPattern {
    kNoFloor = 0,
    kFloorFirstHardCoded = 1,
    kFloorLastHardCoded = 29,
    kOrigPlugInFloorPatternMin = 30,
    kOrigPlugInFloorPatternMax = 254,
    kDummyFloor = 255,
    kOrigFloorPatternCount = 255,
    kPlugInFloorPatternMin = 256,
    kPlugInFloorPatternMax = 65534,
    kFloorPatternInvalid = 65535,
    kFloorPatternCount = 65535,
};
enum SheerPlacement {
    kUpper = 1,
    kLower = 2,
    kBoth = 3,
};
enum WallStyle {
    kNoStyle = 0,
    kNormalStyle = 1,
    kFenceStyle1 = 2,
    kDoorStyle = 3,
    kDoorLeftStyle = 5,
    kDoorRightStyle = 6,
    kCutawayTransitionLeft = 7,
    kCutawayTransitionRight = 8,
    kCutawayTransitionThickLeft = 9,
    kCutawayTransitionThickRight = 10,
    kFenceStyle2 = 12,
    kFenceStyle3 = 13,
    kFenceStyle4 = 14,
    kFrenchDoorStyle = 15,
    kFenceStyle5 = 16,
    kGateStyle1 = 17,
    kGateStyle2 = 18,
    kGateStyle3 = 19,
    kGateStyle4 = 20,
    kGateStyle5 = 21,
    kCustomWindowStyle = 22,
    kCustomDoorStyle = 23,
    kUnderConstructionStyle = 255,
};
enum WallPattern {
    kWallFirstLowRangeHardCoded = 0,
    kSheetRockPattern = 0,
    kLivingRoomPattern = 1,
    kMasterBedPattern = 2,
    kDiningRoomPattern = 3,
    kKitchenPattern = 4,
    kChildRoomPattern = 5,
    kBrickPattern = 6,
    kWallPattern7 = 7,
    kWallPattern8 = 8,
    kChildRoom2Pattern = 9,
    kNurseryPattern = 10,
    kWallPattern011 = 11,
    kWallPattern012 = 12,
    kWallPattern013 = 13,
    kWallPattern014 = 14,
    kWallPattern015 = 15,
    kWallPattern016 = 16,
    kWallPattern017 = 17,
    kWallPattern018 = 18,
    kWallPattern019 = 19,
    kWallPattern020 = 20,
    kWallPattern021 = 21,
    kWallPattern022 = 22,
    kWallPattern023 = 23,
    kWallPattern024 = 24,
    kWallPattern025 = 25,
    kWallPattern026 = 26,
    kWallPattern027 = 27,
    kWallPattern028 = 28,
    kWallPattern029 = 29,
    kWallPattern030 = 30,
    kWallLastLowRangeHardCoded = 30,
    kOrigPlugInWallPatternMin = 31,
    kOrigPlugInWallPatternMax = 246,
    kWallFirstHighRangeHardCoded = 247,
    kCutawayTransL = 252,
    kCutawayTransR = 253,
    kCutawayPattern = 254,
    kUnderConstructionPattern = 255,
    kWallLastHighRangeHardCoded = 255,
    kOrigWallPatternCount = 256,
    kPlugInWallPatternMin = 256,
    kPlugInWallPatternMax = 65534,
    kWallPatternInvalid = 65535,
    kWallPatternCount = 65535,
    kWallPatternForce32 = 65536,
};
// total size: 0x2C
class TileWalls {
    // Static members
    static enum DiagonalSideSelector sRotateDiagonalLookup[4][5]; // size: 0x50
    static enum TileWallsSegment sRotateSegmentLookup[4][64]; // size: 0x400

    // Members
    enum TileWallsSegment mSegments; // offset 0x0, size 0x4
    int mPlacement; // offset 0x4, size 0x4
    unsigned short mStyles[6]; // offset 0x8, size 0xC
    unsigned short mPatterns[8]; // offset 0x14, size 0x10
    int mRotation; // offset 0x24, size 0x4
    unsigned char mBelowLeftHasDiagonal; // offset 0x28, size 0x1
    unsigned char mBelowRightHasDiagonal; // offset 0x29, size 0x1
    unsigned char mAboveLeftHasDiagonal; // offset 0x2A, size 0x1
    unsigned char mAboveRightHasDiagonal; // offset 0x2B, size 0x1
};
// total size: 0x400
class EIWallPart : public EIStaticModel {
    // Static members
    static int kMaxWallShaders; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    enum TileWallsSegment m_seg; // offset 0x368, size 0x4
    enum DiagonalSideSelector m_side; // offset 0x36C, size 0x4
    class CTilePt m_point; // offset 0x370, size 0x3
    enum WallMode m_mode[2]; // offset 0x374, size 0x8
    class ESubModelShader * m_pSortedShaders[5]; // offset 0x37C, size 0x14
    signed char m_shaderIdx[5]; // offset 0x390, size 0x5
    unsigned int m_stripCount; // offset 0x398, size 0x4
    unsigned int m_wallModelId; // offset 0x39C, size 0x4
    signed short m_thisRoom; // offset 0x3A0, size 0x2
    signed short m_otherRoom; // offset 0x3A2, size 0x2
    class EVec2 m_normalLocal; // offset 0x3A4, size 0x8
    class EVec2 m_positionLocal; // offset 0x3AC, size 0x8
    class EVec2 m_w0Local; // offset 0x3B4, size 0x8
    class EVec2 m_w1Local; // offset 0x3BC, size 0x8
    class EVec2 m_normal; // offset 0x3C4, size 0x8
    float m_positionDotNormal; // offset 0x3CC, size 0x4
    class EVec3 m_w0; // offset 0x3D0, size 0xC
    class EVec3 m_w1; // offset 0x3DC, size 0xC
    class ERShader * m_pPaperShader; // offset 0x3E8, size 0x4
    float m_upperAlpha[2]; // offset 0x3EC, size 0x8
    class ERModel * m_shadowModel; // offset 0x3F4, size 0x4
    unsigned char m_forceFadeOff; // offset 0x3F8, size 0x1
    unsigned char m_bIsWindow; // offset 0x3F9, size 0x1
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x38
class ERoomWall {
    // Static members
    static unsigned int m_tileCount; // size: 0x4
    static unsigned int m_wallCount; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class CTilePt m_c0; // offset 0x4, size 0x3
    class CTilePt m_c1; // offset 0x7, size 0x3
    class EVec3 m_vNormal; // offset 0xC, size 0xC
    class TNodeList m_wallInstances; // offset 0x18, size 0xC
    enum TileWallsSegment m_seg; // offset 0x24, size 0x4
    enum DiagonalSideSelector m_side; // offset 0x28, size 0x4
    unsigned short m_roomId; // offset 0x2C, size 0x2
    unsigned char m_isWallsOpaque[2]; // offset 0x2E, size 0x2
    float m_shortDistToCam[2]; // offset 0x30, size 0x8
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0x14
struct ERoomOcclude {
    // Members
    float shortDistToCam[2]; // offset 0x0, size 0x8
    float alpha[2]; // offset 0x8, size 0x8
    unsigned char isOpaque[2]; // offset 0x10, size 0x2
    unsigned char isRoofOpaque[2]; // offset 0x12, size 0x2
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0x30
class WallFadeParms {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned char m_fade; // offset 0x4, size 0x1
    float m_fadeDistFarSideOfFadeLine; // offset 0x8, size 0x4
    float m_fadeDistNearSideOfFadeLine; // offset 0xC, size 0x4
    float m_fadeMinAlpha; // offset 0x10, size 0x4
    float m_fadeMaxAlpha; // offset 0x14, size 0x4
    float m_fadeLowAlpha; // offset 0x18, size 0x4
    float m_trapWidthAtCursor; // offset 0x1C, size 0x4
    float m_trapWidthAtEye; // offset 0x20, size 0x4
    float m_fadeRange; // offset 0x24, size 0x4
    float m_fadeRecipricalRange; // offset 0x28, size 0x4
    unsigned char m_3d; // offset 0x2C, size 0x1
};
enum ERoomWallBuildReturnCode {
    kERoomWallBuild_Success = 0,
    kERoomWallBuild_TooManyRooms = 1,
    kERoomWallBuild_TooManyFences = 2,
    kERoomWallBuild_TooManyWalls = 3,
    kERoomWallBuild_Count = 4,
};
// total size: 0x4
class ERoomWallPtr {
    // Members
    class ERoomWall * pCurEWall; // offset 0x0, size 0x4
};
// total size: 0xB4
class ERoom {
    // Static members
    static class WallFadeParms s_wallFadeParmsClassic; // size: 0x30
    static class WallFadeParms s_wallFadeParmsDC; // size: 0x30
    static class WallFadeParms * s_wallFadeParms; // size: 0x4

    // Members
public:
    unsigned char m_bInit; // offset 0x0, size 0x1
protected:
    class TNodeList m_kBottomLeftWalls; // offset 0x4, size 0xC
    class TNodeList m_kBottomRightWalls; // offset 0x10, size 0xC
    class TNodeList m_kTopRightWalls; // offset 0x1C, size 0xC
    class TNodeList m_kTopLeftWalls; // offset 0x28, size 0xC
    class TNodeList m_kHorizDiagWallskTop; // offset 0x34, size 0xC
    class TNodeList m_kHorizDiagWallskBottom; // offset 0x40, size 0xC
    class TNodeList m_kVertDiagWallskLeft; // offset 0x4C, size 0xC
    class TNodeList m_kVertDiagWallskRight; // offset 0x58, size 0xC
    class TNodeList m_fenceWalls; // offset 0x64, size 0xC
    class TNodeList * m_listTab[9]; // offset 0x70, size 0x24
    class TRedBlackTree m_roomLookup; // offset 0x94, size 0xC
    class TRedBlackTree m_roomOcclude; // offset 0xA0, size 0xC
    float m_occlusionFadeBeginDist; // offset 0xAC, size 0x4
    float m_occlusionFadeEndDist; // offset 0xB0, size 0x4
};
// total size: 0x100
class EHouse {
    // Members
public:
    unsigned char m_bForNeighborHoodMode; // offset 0x0, size 0x1
    class EIObjectMan * m_pObjectMan; // offset 0x4, size 0x4
    class ERoom * m_pWallMan; // offset 0x8, size 0x4
    unsigned char m_binUpdate; // offset 0xC, size 0x1
    unsigned char m_forceLightUpdate; // offset 0xD, size 0x1
protected:
    unsigned char m_bAmInit; // offset 0xE, size 0x1
    unsigned char m_bIsBuilt; // offset 0xF, size 0x1
    class ERLevel * m_pLevel; // offset 0x10, size 0x4
    class ERModel * m_pLevelModel; // offset 0x14, size 0x4
    enum EWallUpDownStateType m_wallUpDownState; // offset 0x18, size 0x4
    class EIAmbLight * * m_roomAmbientLights; // offset 0x1C, size 0x4
    int m_roomCount; // offset 0x20, size 0x4
    float m_timeInHours; // offset 0x24, size 0x4
    class EVec2 m_vHouse_off; // offset 0x28, size 0x8
    int m_lotNum; // offset 0x30, size 0x4
    unsigned int m_lotdasid; // offset 0x34, size 0x4
    float m_fadeAlpha; // offset 0x38, size 0x4
    float m_iconAlpha; // offset 0x3C, size 0x4
    class EInstance m_cursorInstance; // offset 0x40, size 0x78
    class EOrderTableData m_cursorOrderTableData; // offset 0xB8, size 0x3C
    class EVec3 m_cursorPosition; // offset 0xF4, size 0xC
};
// total size: 0x4A8
class EPictureInPicture {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char m_IsPiPActive; // offset 0x4, size 0x1
    class cXObject * m_pLastObject; // offset 0x8, size 0x4
    int m_Zoom; // offset 0xC, size 0x4
    int m_Size; // offset 0x10, size 0x4
    unsigned short m_DisplayText[128]; // offset 0x14, size 0x100
    unsigned char m_IsThereACaption; // offset 0x114, size 0x1
    float m_TimeAccumulator; // offset 0x118, size 0x4
    float m_Duration; // offset 0x11C, size 0x4
    unsigned char m_InfiniteDuration; // offset 0x120, size 0x1
    unsigned char m_SlowDownGame; // offset 0x121, size 0x1
    class E3DWindow m_Window; // offset 0x128, size 0x358
    class ERFont * m_pFont; // offset 0x480, size 0x4
    signed short m_ObjectId; // offset 0x484, size 0x2
    class ERShader * m_pFrameShaderTL; // offset 0x488, size 0x4
    class ERShader * m_pFrameShaderTR; // offset 0x48C, size 0x4
    class ERShader * m_pFrameShaderBL; // offset 0x490, size 0x4
    class ERShader * m_pFrameShaderBR; // offset 0x494, size 0x4
    class ERShader * m_pFrameShaderTop; // offset 0x498, size 0x4
    class ERShader * m_pFrameShaderBottom; // offset 0x49C, size 0x4
    class ERShader * m_pFrameShaderLeft; // offset 0x4A0, size 0x4
    class ERShader * m_pFrameShaderRight; // offset 0x4A4, size 0x4
};
// total size: 0x0
class WantFearManager {};
enum EMC_OpStatus {
    EMC_FAILURE = 0,
    EMC_SUCCESS = 1,
    EMC_OPPENDING = 2,
    EMC_NOCARD = -1,
    EMC_NOTFORMATED = -2,
    EMC_NOSPACE = -3,
    EMC_DATACORRUPTED = -4,
    EMC_OPNOTRUNNING = -5,
    EMC_WRONGCARDTYPE = -6,
    EMC_NOFILE = -7,
    EMC_CARDDEAD = -8,
    EMC_WRONGDEVICE = -9,
};
enum MemoryDevice_t {
    DEVICE_MEMCARD1 = 0,
    DEVICE_MEMCARD2 = 1,
    DEVICE_HDD = 2,
    DEVICE_MAX = 3,
    DEVICE_PENDING = 255,
    DEVICE_CACHE = 444,
};
enum MemorySaveNum_t {
    SAVENUM_1 = 0,
    SAVENUM_2 = 1,
    SAVENUM_3 = 2,
    SAVENUM_4 = 3,
    SAVENUM_5 = 4,
    SAVENUM_6 = 5,
    SAVENUM_7 = 6,
    SAVENUM_8 = 7,
    SAVENUM_MAX = 8,
    SAVENUM_PENDING = 255,
    SAVENUM_EXCLUSIVE = 333,
};
// total size: 0x8
class MemoryDevicePort_t {
    // Members
public:
    enum MemoryDevice_t device; // offset 0x0, size 0x4
    enum MemorySaveNum_t savenum; // offset 0x4, size 0x4
};
// total size: 0x5C
class OptionsRecon {
    // Members
public:
    unsigned char m_bFreeWill; // offset 0x0, size 0x1
    unsigned char m_bFreeWillClassic; // offset 0x1, size 0x1
    unsigned char m_bRumble; // offset 0x2, size 0x1
    unsigned char m_bAutoCenter; // offset 0x3, size 0x1
    unsigned char m_bFreeplayUnlocked; // offset 0x4, size 0x1
    unsigned char m_bFastForwardToggle; // offset 0x5, size 0x1
    unsigned char m_blCameraAutoDriftZoomOn; // offset 0x6, size 0x1
    unsigned char m_blCameraInvertRotation; // offset 0x7, size 0x1
    signed char m_nSFXVolume; // offset 0x8, size 0x1
    signed char m_nMusicVolume; // offset 0x9, size 0x1
    signed char m_nHeadsetVolume; // offset 0xA, size 0x1
    signed char m_nScreenAdjustX; // offset 0xB, size 0x1
    signed char m_nScreenAdjustY; // offset 0xC, size 0x1
    unsigned char m_blCameraInvertRotationDC; // offset 0xD, size 0x1
    signed char m_nVOXVolume; // offset 0xE, size 0x1
    signed char m_nAmbientVolume; // offset 0xF, size 0x1
    signed char m_nDelayInitiateFreeWill; // offset 0x10, size 0x1
    unsigned char m_bFreeWillPreserved; // offset 0x11, size 0x1
    unsigned char m_bFreeWillClassicPreserved; // offset 0x12, size 0x1
    unsigned char m_bRumblePreserved; // offset 0x13, size 0x1
    unsigned char m_bAutoCenterPreserved; // offset 0x14, size 0x1
    unsigned char m_bFastForwardTogglePreserved; // offset 0x15, size 0x1
    unsigned char m_blCameraAutoDriftZoomOnPreserved; // offset 0x16, size 0x1
    unsigned char m_blCameraInvertRotationPreserved; // offset 0x17, size 0x1
    unsigned char m_blCameraInvertRotationDCPreserved; // offset 0x18, size 0x1
    signed char m_nSFXVolumePreserved; // offset 0x19, size 0x1
    signed char m_nMusicVolumePreserved; // offset 0x1A, size 0x1
    signed char m_nHeadsetVolumePreserved; // offset 0x1B, size 0x1
    signed char m_nScreenAdjustXPreserved; // offset 0x1C, size 0x1
    signed char m_nScreenAdjustYPreserved; // offset 0x1D, size 0x1
    signed char m_nVOXVolumePreserved; // offset 0x1E, size 0x1
    signed char m_nAmbientVolumePreserved; // offset 0x1F, size 0x1
    signed char m_nDelayInitiateFreeWillPreserved; // offset 0x20, size 0x1
    signed char m_nLanguageIndex; // offset 0x21, size 0x1
    signed char m_nLastLot; // offset 0x22, size 0x1
    unsigned char m_bSeenNGHDialog; // offset 0x23, size 0x1
    int m_nGbaId; // offset 0x24, size 0x4
    unsigned char m_bVisitingGba; // offset 0x28, size 0x1
    unsigned char m_bGbaUnlocked; // offset 0x29, size 0x1
    unsigned int m_MusicEnabled[6]; // offset 0x2C, size 0x18
    unsigned int m_MusicEnabledPreserved[6]; // offset 0x44, size 0x18
};
// total size: 0x0
class Logger {};
enum eDrawTransparentObjects {
    eDrawTransparentObjects_none = 0,
    eDrawTransparentObjects_roof = 1,
    eDrawTransparentObjects_hut_objects = 2,
};
// total size: 0x1A0
struct ECheatVariables {
    // Members
    char m_ps2SystemExeName[32]; // offset 0x0, size 0x20
    char m_ps2SystemGameVersion[8]; // offset 0x20, size 0x8
    char m_ps2SystemVideoStandard[8]; // offset 0x28, size 0x8
    char m_ps2SystemHddPower[12]; // offset 0x30, size 0xC
    char m_textTestString[256]; // offset 0x3C, size 0x100
    char m_debugCheatVersion[8]; // offset 0x13C, size 0x8
    unsigned char m_debugOverrideNghTutorialStage; // offset 0x144, size 0x1
    unsigned char m_debugOverrideNghTutorialHouse; // offset 0x145, size 0x1
    unsigned char m_debugEnableDisplayAnimNames; // offset 0x146, size 0x1
    unsigned char m_debugEnableAnimPreloadChecks; // offset 0x147, size 0x1
    unsigned char m_debugDontCheckSavegameVersion; // offset 0x148, size 0x1
    unsigned char m_debugEnable3DWallFade; // offset 0x149, size 0x1
    unsigned char m_debugDisplayPerformanceMetrics; // offset 0x14A, size 0x1
    unsigned char m_debugDisplayTextBoundaries; // offset 0x14B, size 0x1
    unsigned char m_debugDisplayMotiveValues; // offset 0x14C, size 0x1
    unsigned char m_debugDisableEdithDialogs; // offset 0x14D, size 0x1
    unsigned char m_debugEnableModalDialogTimeout; // offset 0x14E, size 0x1
    unsigned char m_debugDisableObjectHighlighting; // offset 0x14F, size 0x1
    unsigned char m_debugEnableAllLotSelectMap; // offset 0x150, size 0x1
    unsigned char m_enableWin32EmulateXBoxButtons; // offset 0x151, size 0x1
    unsigned char m_enableWin32EmulateNGCButtons; // offset 0x152, size 0x1
    unsigned char m_enableWin32EmulatePS2AsiaButtons; // offset 0x153, size 0x1
    unsigned char m_debugEnableFlashBoundingBoxes; // offset 0x154, size 0x1
    unsigned char m_debugEnableFlashDebugMessages; // offset 0x155, size 0x1
    unsigned char m_debugEnableAptDebugger; // offset 0x156, size 0x1
    unsigned char m_debugEnableHDDSupport; // offset 0x157, size 0x1
    unsigned char m_debugSkipToLot; // offset 0x158, size 0x1
    unsigned char m_debugWantsAndFearsLogAutoCapture; // offset 0x159, size 0x1
    unsigned char m_debugEnableDignostics; // offset 0x15A, size 0x1
    unsigned char m_enableBuildPastFireCode; // offset 0x15B, size 0x1
    unsigned char m_debugSkipAssertWaitForButton; // offset 0x15C, size 0x1
    unsigned char m_debugDefaultVibrationOff; // offset 0x15D, size 0x1
    unsigned char m_debugSequenceLots; // offset 0x15E, size 0x1
    float m_debugSequenceLotsMinSec; // offset 0x160, size 0x4
    float m_debugSequenceLotsMaxSec; // offset 0x164, size 0x4
    unsigned char m_debugSequenceLotsFastForward; // offset 0x168, size 0x1
    unsigned char m_debugForceAutoSkinchange; // offset 0x169, size 0x1
    unsigned char m_debugShowMissingAssets; // offset 0x16A, size 0x1
    unsigned char m_debugEnableOverride; // offset 0x16B, size 0x1
    unsigned char m_enableAllInteractors; // offset 0x16C, size 0x1
    unsigned char m_disablePetWantsBalloons; // offset 0x16D, size 0x1
    unsigned char m_enablePlayerSelectablePets; // offset 0x16E, size 0x1
    unsigned char m_disableAllPassiveInfluenceMotives; // offset 0x16F, size 0x1
    unsigned char m_disable_PI_MFJH; // offset 0x170, size 0x1
    unsigned char m_disable_PI_AllButMFJH; // offset 0x171, size 0x1
    unsigned char m_traceSetMotiveDelta; // offset 0x172, size 0x1
    unsigned char m_enableUnevenTerrain; // offset 0x173, size 0x1
    unsigned char m_enableIK; // offset 0x174, size 0x1
    unsigned char m_disableAdditionalRayCasting; // offset 0x175, size 0x1
    unsigned char m_enableMidFadeFlags; // offset 0x176, size 0x1
    unsigned char m_cheatEnableFreeItems; // offset 0x177, size 0x1
    unsigned char m_cheatShowSelectorNames; // offset 0x178, size 0x1
    unsigned char m_cheatEnableClothingCatalog; // offset 0x179, size 0x1
    unsigned char m_cheatEnableAllObjectsMoveable; // offset 0x17A, size 0x1
    unsigned char m_cheatEnableCheatMenu; // offset 0x17B, size 0x1
    unsigned char m_cheatIgnoreDamage; // offset 0x17C, size 0x1
    int m_alternative_blueprint_grid; // offset 0x180, size 0x4
    unsigned char m_bUseAlternateMainMenu; // offset 0x184, size 0x1
    unsigned char m_casEnableDefaultAsMale; // offset 0x185, size 0x1
    unsigned char m_casEnableSimNpcEditing; // offset 0x186, size 0x1
    unsigned char m_casEnableIconEditing; // offset 0x187, size 0x1
    unsigned char m_casExtraDebugInfo; // offset 0x188, size 0x1
    unsigned char m_casEnableTweaking; // offset 0x189, size 0x1
    unsigned char m_disableShowerCurtain; // offset 0x18A, size 0x1
    unsigned char m_casEnable; // offset 0x18B, size 0x1
    unsigned char m_disableSlideShow; // offset 0x18C, size 0x1
    unsigned char m_display_game_assets_in_cas; // offset 0x18D, size 0x1
    unsigned char m_audioEnableSound; // offset 0x18E, size 0x1
    unsigned char m_configForceSyncHeadRevisionQdata; // offset 0x18F, size 0x1
    unsigned char m_configSkipStartupMovies; // offset 0x190, size 0x1
    unsigned char m_configSkipIntroMovie; // offset 0x191, size 0x1
    unsigned char m_configSkipMaxisLogo; // offset 0x192, size 0x1
    unsigned char m_configSkipStartScreen; // offset 0x193, size 0x1
    unsigned char m_configSkipLotIntro; // offset 0x194, size 0x1
    unsigned char m_configJuiceDisable; // offset 0x195, size 0x1
    unsigned char m_ShowFireCodeValues; // offset 0x196, size 0x1
    unsigned char m_StopReadingDPD; // offset 0x197, size 0x1
    unsigned char m_UseDpdPanning; // offset 0x198, size 0x1
    unsigned char m_UseMultiPassShaders; // offset 0x199, size 0x1
    unsigned char m_UseNewShaderSystem; // offset 0x19A, size 0x1
    unsigned char m_UseCPUSmoothSkins; // offset 0x19B, size 0x1
    unsigned char m_UseWiiVertexIntensity; // offset 0x19C, size 0x1
};
// total size: 0x10
struct PropRef {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int childID; // offset 0x4, size 0x4
    unsigned int uMemoryCost; // offset 0x8, size 0x4
    unsigned char showInWindow; // offset 0xC, size 0x1
};
// total size: 0x4
struct AnimRef {
    // Members
    unsigned int id; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    float * pData; // offset 0x0, size 0x4
};
// total size: 0x20
struct LevelData {
    // Members
    struct LightingSequence * lighting; // offset 0x0, size 0x4
    class BitFlags flags; // offset 0x4, size 0x4
    int earthquakeCheckInterval; // offset 0x8, size 0x4
    float earthquakeChance; // offset 0xC, size 0x4
    class VECTOR weatherDamageMultiplier; // offset 0x10, size 0x4
    float sunMoonZOffset; // offset 0x14, size 0x4
    float levelFogIntensity; // offset 0x18, size 0x4
    class VECTOR levelFogColor; // offset 0x1C, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct LevelData * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    signed short * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct MonthData {
    // Members
    float sunRiseTimeAdd; // offset 0x0, size 0x4
    float sunSetTimeAdd; // offset 0x4, size 0x4
    float sunDeclinationMod; // offset 0x8, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct MonthData * pData; // offset 0x0, size 0x4
};
enum MoonPhase {
    MOON_PHASE_NEW = 0,
    MOON_PHASE_CRESCENT_WAXING = 1,
    MOON_PHASE_HALF_WAXING = 2,
    MOON_PHASE_GIBBOUS_WAXING = 3,
    MOON_PHASE_FULL = 4,
    MOON_PHASE_GIBBOUS_WANING = 5,
    MOON_PHASE_HALF_WANING = 6,
    MOON_PHASE_CRESCENT_WANING = 7,
};
// total size: 0x14
struct DayData {
    // Members
    float moonRiseTime; // offset 0x0, size 0x4
    float moonDeclinationMod; // offset 0x4, size 0x4
    float moonLightIntensityMultiplier; // offset 0x8, size 0x4
    int moonShaderState; // offset 0xC, size 0x4
    enum MoonPhase moonPhase; // offset 0x10, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct DayData * pData; // offset 0x0, size 0x4
};
// total size: 0x3C
struct WorldData {
    // Members
    class VECTOR levelData; // offset 0x0, size 0x4
    class VECTOR earthquakeDamage; // offset 0x4, size 0x4
    int earthquakeDamageTimeDelay; // offset 0x8, size 0x4
    class VECTOR roofArmor; // offset 0xC, size 0x4
    class VECTOR wallArmor; // offset 0x10, size 0x4
    unsigned int rainModel; // offset 0x14, size 0x4
    unsigned int rainCharacter; // offset 0x18, size 0x4
    unsigned int sunModel; // offset 0x1C, size 0x4
    unsigned int sunCharacter; // offset 0x20, size 0x4
    unsigned int sunAnimation; // offset 0x24, size 0x4
    unsigned int moonModel; // offset 0x28, size 0x4
    unsigned int moonCharacter; // offset 0x2C, size 0x4
    unsigned int moonAnimation; // offset 0x30, size 0x4
    class VECTOR monthData; // offset 0x34, size 0x4
    class VECTOR dayData; // offset 0x38, size 0x4
};
// total size: 0x10
struct ECntrMdlLkupNode {
    // Members
    unsigned int defaultID; // offset 0x0, size 0x4
    unsigned int counterTopID; // offset 0x4, size 0x4
    unsigned int counterBaseID; // offset 0x8, size 0x4
    unsigned int counterCornerID; // offset 0xC, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct ECntrMdlLkupNode * pData; // offset 0x0, size 0x4
};
// total size: 0x4
struct ECntrMdlLkupTable {
    // Members
    class VECTOR vCounters; // offset 0x0, size 0x4
};
// total size: 0x400
class EGlobal {
    // Static members
    static int kInitialCheatValue; // size: 0x4
    static int kFirstPlayerCheat; // size: 0x4

    // Members
    unsigned short m_allCheatBtnMask; // offset 0x0, size 0x2
    unsigned short m_globCheatSequence[24][6]; // offset 0x2, size 0x120
    unsigned short m_globCheatMask[24]; // offset 0x122, size 0x30
    unsigned int m_globPlayerCheats; // offset 0x154, size 0x4
public:
    class EGameStateId _curGameState; // offset 0x158, size 0x4
    float _global_house_offx; // offset 0x15C, size 0x4
    float _global_house_offy; // offset 0x160, size 0x4
    int ngh_offset; // offset 0x164, size 0x4
    int m_casIntroCamType; // offset 0x168, size 0x4
    class AptViewer * _pAptViewer; // offset 0x16C, size 0x4
    unsigned char _playerInteractorType[2]; // offset 0x170, size 0x2
    class cXPerson * _pSelectedSim; // offset 0x174, size 0x4
    class EHouse * _pCurHouse; // offset 0x178, size 0x4
    int m_renderPass; // offset 0x17C, size 0x4
    class ESimsCam * _pCurCam; // offset 0x180, size 0x4
    const struct FloorSet * _pFloorSet; // offset 0x184, size 0x4
    const struct WallSet * _pWallSet; // offset 0x188, size 0x4
    const struct FenceSet * _pFenceSet; // offset 0x18C, size 0x4
    class CameraDirector * _pCurCameraDirector; // offset 0x190, size 0x4
    class ERQuickdata * m_pUiData; // offset 0x194, size 0x4
    class ERQuickdata * m_pUrbzUiData; // offset 0x198, size 0x4
    class ERQuickdata * m_pSpriteIdToResId; // offset 0x19C, size 0x4
    class ERQuickdata * m_pTileData; // offset 0x1A0, size 0x4
    class ERQuickdata * m_waveDataTable; // offset 0x1A4, size 0x4
    class ERQuickdata * m_pCASQuickdata; // offset 0x1A8, size 0x4
    class ERQuickdata * m_pWorldQuickdata; // offset 0x1AC, size 0x4
    class ERShader * m_pWhiteShader; // offset 0x1B0, size 0x4
    class ERShader * m_pBlackShader; // offset 0x1B4, size 0x4
    class ERFont * m_pFont; // offset 0x1B8, size 0x4
    class ERFont * m_pFontShadowed; // offset 0x1BC, size 0x4
    class ESpriteRenderMan * m_pSpriteMan; // offset 0x1C0, size 0x4
    class EPictureInPicture * m_pPiP; // offset 0x1C4, size 0x4
    class EVibrate * m_pVibrate; // offset 0x1C8, size 0x4
    class ECheats * m_pCheats; // offset 0x1CC, size 0x4
    class CameraDirector * m_pCameraDirector; // offset 0x1D0, size 0x4
    class WantFearManager * m_pWantFearMan; // offset 0x1D4, size 0x4
    class UIQDTarget * m_pUIQDTarget; // offset 0x1D8, size 0x4
    class UIDBTarget * m_pUIDBTarget; // offset 0x1DC, size 0x4
    class UIRouter * m_pRouter; // offset 0x1E0, size 0x4
    class UIAUDIOTarget * m_pUIAUDIOTarget; // offset 0x1E4, size 0x4
    class UIAnalog * m_pUIAnalog; // offset 0x1E8, size 0x4
    class G2DTarget * m_pG2DTarget; // offset 0x1EC, size 0x4
    class UIScreenManager * m_pUIScreenManager; // offset 0x1F0, size 0x4
    class TRCTarget * m_pTRCTarget; // offset 0x1F4, size 0x4
    class EdithDialogPrimitive * m_pEdithDialogPrim; // offset 0x1F8, size 0x4
    class OptionsRecon * m_pOptionsRecon; // offset 0x1FC, size 0x4
    unsigned char m_bCacheDataset; // offset 0x200, size 0x1
    class Logger * m_pSystemLogger; // offset 0x204, size 0x4
private:
    enum TransitionType m_TransitionType; // offset 0x208, size 0x4
    int m_PreviousLot; // offset 0x20C, size 0x4
    int m_TransitionID; // offset 0x210, size 0x4
    unsigned char m_fastForwardEnable; // offset 0x214, size 0x1
public:
    enum eDrawTransparentObjects m_drawTransparentObjects; // offset 0x218, size 0x4
    float m_vCameraRotDegrees; // offset 0x21C, size 0x4
    struct ECheatVariables Cheats; // offset 0x220, size 0x1A0
    int m_playerFamilyNumber; // offset 0x3C0, size 0x4
    unsigned char m_loadLuaRunScript; // offset 0x3C4, size 0x1
    class EString m_luaScriptToRun; // offset 0x3C8, size 0x4
    unsigned char m_bGotoNeighborhoodMode; // offset 0x3CC, size 0x1
    unsigned char m_bGotoStartMode; // offset 0x3CD, size 0x1
    unsigned char m_bGotoTransportMode; // offset 0x3CE, size 0x1
    int m_NeighborhoodHouseNum; // offset 0x3D0, size 0x4
    unsigned char m_bStoryModeTransferHouses; // offset 0x3D4, size 0x1
    int m_StoryModeMoveIntoHouseNum; // offset 0x3D8, size 0x4
    unsigned char m_bStoryModeStart; // offset 0x3DC, size 0x1
    unsigned char m_bLanguageSelected; // offset 0x3DD, size 0x1
    unsigned int m_aptUpdateCount; // offset 0x3E0, size 0x4
    unsigned char m_bDisableSave; // offset 0x3E4, size 0x1
    unsigned char m_bListenToController; // offset 0x3E5, size 0x1
    unsigned int m_CheatCode; // offset 0x3E8, size 0x4
    unsigned int m_lastSaveSize; // offset 0x3EC, size 0x4
    unsigned int m_LastSavePercent; // offset 0x3F0, size 0x4
    struct UIDBData * m_pTwoPlayerRecord; // offset 0x3F4, size 0x4
    unsigned char m_bKeepCurrentNGHLoaded; // offset 0x3F8, size 0x1
    unsigned char m_bAutotestIgnoreModalDialogs; // offset 0x3F9, size 0x1
    unsigned char m_bAutotestTurnOffTheDamnIntroCamBecauseItsFIngBROKEN; // offset 0x3FA, size 0x1
    unsigned char m_pauseMenuLockout; // offset 0x3FB, size 0x1
private:
    signed short m_nTransitionSelectedNeighborID; // offset 0x3FC, size 0x2
};
// total size: 0x4
class EClockMan {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xD44
class EAudioSampleManager : public EResourceManager {};
// total size: 0x10
struct EPMDesc {
    // Members
    unsigned int uAudioStreamID; // offset 0x0, size 0x4
    int sLoopStartOffset; // offset 0x4, size 0x4
    int sLoopEndOffset; // offset 0x8, size 0x4
    unsigned char bLooping; // offset 0xC, size 0x1
    unsigned char bPaused; // offset 0xD, size 0x1
};
// total size: 0x4
class EAudio {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};

