/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\engine_resource_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D2590 -> 0x802D2590
*/
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543AC0
class ETypeInfo * gpTypeInfo_ERAmbientScore; // size: 0x4, address: 0x805DC0F8
unsigned long m_allocatedAnims; // size: 0x4, address: 0x805DC0FC
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543AE8
class ETypeInfo * gpTypeInfo_ERAnim; // size: 0x4, address: 0x805DC100
static unsigned int exceptionTable[2]; // size: 0x8, address: 0x805DF120
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543B10
class ETypeInfo * gpTypeInfo_ERBinary; // size: 0x4, address: 0x805DC104
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543B38
class ETypeInfo * gpTypeInfo_ERCharacter; // size: 0x4, address: 0x805DC108
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543B60
class ETypeInfo * gpTypeInfo_ERDataset; // size: 0x4, address: 0x805DC10C
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543B88
class ETypeInfo * gpTypeInfo_EREdithTreeSet; // size: 0x4, address: 0x805DC110
// total size: 0x14
struct TreeSetHeader {
    // Members
    int version; // offset 0x0, size 0x4
    int empty[3]; // offset 0x4, size 0xC
    int size; // offset 0x10, size 0x4
};
// total size: 0x14
class ChunkHeader {
    // Static members
    static int headerSize; // size: 0x4

    // Members
public:
    char type[4]; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned short id; // offset 0x8, size 0x2
    char * name; // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
class EResourceLoader * _pResLoader; // size: 0x4, address: 0x805DC114
enum EResCommands {
    kResLoadCmdNone = 0,
    kResLoadCmdFlush = 1,
    kResLoadCmdTerminate = 2,
    kResLoadCmdLoadResource = 3,
    kResLoadCmdUnloadResource = 4,
    kResLoadCmdReadData = 5,
    kResLoadCmdWriteData = 6,
    kResLoadCmdCloseArchiveFile = 7,
    kResLoadCmdReloadResources = 8,
};
union /* @class$18189engine_resource_unity_cpp */ {
    void * pBuffer; // offset 0x0, size 0x4
    class EEvent * pFlushEvent; // offset 0x0, size 0x4
};
// total size: 0x2C
struct EResLoadCmd {
    // Members
    enum EResCommands cmd; // offset 0x0, size 0x4
    class EResourceManager * pManager; // offset 0x4, size 0x4
    unsigned int id; // offset 0x8, size 0x4
    class EFile * pSourceFile; // offset 0xC, size 0x4
    unsigned int uStartOffset; // offset 0x10, size 0x4
    unsigned int uLength; // offset 0x14, size 0x4
    struct EResLoadCmdResult * pResult; // offset 0x18, size 0x4
    union { // inferred
        union /* @class$18189engine_resource_unity_cpp */ {
            void * pBuffer; // offset 0x0, size 0x4
            class EEvent * pFlushEvent; // offset 0x0, size 0x4
        } __anon$18190; // offset 0x1C, size 0x4
        void * pBuffer; // offset 0x1C, size 0x4
        class EEvent * pFlushEvent; // offset 0x1C, size 0x4
    };
    unsigned char bWait; // offset 0x20, size 0x1
    int nInitialCount; // offset 0x24, size 0x4
    unsigned int LSN; // offset 0x28, size 0x4
};
// total size: 0xC
struct QueueList {
    // Members
    unsigned int m_pMsgs; // offset 0x0, size 0x4
    struct QueueList * m_prev; // offset 0x4, size 0x4
    struct QueueList * m_next; // offset 0x8, size 0x4
};
// total size: 0x70
class EResLoaderMsgPriQueue {
    // Members
protected:
    class EMutex m_mutex; // offset 0x0, size 0x1C
    class ESemaphore m_inSema; // offset 0x1C, size 0x18
    class ESemaphore m_outSema; // offset 0x34, size 0x18
    int m_size; // offset 0x4C, size 0x4
    int m_count; // offset 0x50, size 0x4
    unsigned char m_autoAllocated; // offset 0x54, size 0x1
    unsigned int m_totalSent; // offset 0x58, size 0x4
    unsigned int m_maxSent; // offset 0x5C, size 0x4
    struct QueueList * m_QueueHead; // offset 0x60, size 0x4
    struct QueueList * m_QueueCurPos; // offset 0x64, size 0x4
    struct QueueList * m_FreeList; // offset 0x68, size 0x4
    struct QueueList * m_CmdPool; // offset 0x6C, size 0x4
};
// total size: 0x400
class EResourceLoaderImpl : public EResourceLoader, private EThread {
    // Members
    class TLinkedList m_resManList; // offset 0x344, size 0x8
    unsigned char m_bInitialized; // offset 0x34C, size 0x1
    void * m_pGlobalIndex[2]; // offset 0x350, size 0x8
    class EMutex m_dataMutex; // offset 0x358, size 0x1C
    class EResLoaderMsgPriQueue m_commandQueue; // offset 0x374, size 0x70
    unsigned char m_allowReloads; // offset 0x3E4, size 0x1
    unsigned char m_isbusy; // offset 0x3E5, size 0x1
    unsigned char m_pauseLoads; // offset 0x3E6, size 0x1
    class EEvent m_pauseLoadingNow; // offset 0x3E8, size 0x18
};
static class EResourceLoaderImpl _resLoader; // size: 0x400, address: 0x80543BC0
// total size: 0x8
class TLinkedList {
    // Members
protected:
    class EResourceManager * m_pHead; // offset 0x0, size 0x4
    class EResourceManager * m_pTail; // offset 0x4, size 0x4
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80543FC0
class ETypeInfo * gpTypeInfo_EResource; // size: 0x4, address: 0x805DC118
class EResPrefetch _resPrefetch; // size: 0x418, address: 0x80543FF8
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544410
class ETypeInfo * gpTypeInfo_ERFlash; // size: 0x4, address: 0x805DC11C
// total size: 0xC
class FlashTexture {
    // Members
public:
    class ERTexture * m_texture; // offset 0x0, size 0x4
    int m_width; // offset 0x4, size 0x4
    int m_height; // offset 0x8, size 0x4
};
static float kFontZValue; // size: 0x4, address: 0x805DA4A4
class EVec2 m_vScaler; // size: 0x8, address: 0x805DC120
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544438
class ETypeInfo * gpTypeInfo_ERFont; // size: 0x4, address: 0x805DC128
// total size: 0x20
class hash_map : public hashtable {};
static class hash_map * weWantFourBones; // size: 0x4, address: 0x805DC12C
// total size: 0x1
struct rehash_base {};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct equal_to : public binary_function {};
// total size: 0x1
struct hash {};
// total size: 0xC
struct hash_node {
    // Members
    struct pair mValue; // offset 0x0, size 0x8
    struct hash_node * mpNext; // offset 0x8, size 0x4
};
// total size: 0x4
struct hash_code_base {
    // Members
protected:
    struct use_first mExtractKey; // offset 0x0, size 0x1
    struct equal_to mEqual; // offset 0x1, size 0x1
    struct hash m_h1; // offset 0x2, size 0x1
    struct mod_range_hashing m_h2; // offset 0x3, size 0x1
};
// total size: 0x8
struct hashtable_iterator_base {
    // Members
    struct hash_node * mpNode; // offset 0x0, size 0x4
    struct hash_node * * mpBucket; // offset 0x4, size 0x4
};
// total size: 0x8
struct hashtable_iterator : public hashtable_iterator_base {};
// total size: 0x20
class hashtable : public rehash_base, public hash_code_base {
    // Static members
    static unsigned char kCacheHashCode; // size: 0x1
    static unsigned long kKeyAlignment; // size: 0x4
    static unsigned long kKeyAlignmentOffset; // size: 0x4
    static unsigned long kValueAlignment; // size: 0x4
    static unsigned long kValueAlignmentOffset; // size: 0x4

    // Members
protected:
    struct hash_node * * mpBucketArray; // offset 0x4, size 0x4
    unsigned long mnBucketCount; // offset 0x8, size 0x4
    unsigned long mnElementCount; // offset 0xC, size 0x4
    struct prime_rehash_policy mRehashPolicy; // offset 0x10, size 0xC
    class allocator mAllocator; // offset 0x1C, size 0x1
};
static float _collideAnimMaxRot; // size: 0x4, address: 0x805DC130
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544460
class ETypeInfo * gpTypeInfo_ERModel; // size: 0x4, address: 0x805DC134
// total size: 0xC
class TFloatTree : public EFloatTree {};
// total size: 0xC
class TFloatTree : public EFloatTree {};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    void * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x2C
struct QD_IMAGE {
    // Members
    int structVersion; // offset 0x0, size 0x4
    const char * pName; // offset 0x4, size 0x4
    unsigned int uNumTables; // offset 0x8, size 0x4
    int dbRevision; // offset 0xC, size 0x4
    int reserved1; // offset 0x10, size 0x4
    int reserved2; // offset 0x14, size 0x4
    struct ERQTable table[1]; // offset 0x18, size 0x14
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const char * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x54
class U32Reader {
    // Members
public:
    unsigned int m_uBuffer[16]; // offset 0x0, size 0x40
    unsigned int m_uBufferIndex; // offset 0x40, size 0x4
    unsigned int m_uBufferEntries; // offset 0x44, size 0x4
    unsigned int m_uFileEntries; // offset 0x48, size 0x4
    class EFile * m_pFile; // offset 0x4C, size 0x4
    unsigned char m_bEOFReached; // offset 0x50, size 0x1
};
// total size: 0x18
struct EXPORT_DIRECTORY {
    // Members
    unsigned int uDirSize; // offset 0x0, size 0x4
    unsigned int uOffsImage; // offset 0x4, size 0x4
    unsigned int uImageSize; // offset 0x8, size 0x4
    unsigned int uOffsFixup; // offset 0xC, size 0x4
    unsigned int uFixupSize; // offset 0x10, size 0x4
    unsigned int uDefLoadAddr; // offset 0x14, size 0x4
};
unsigned int * _localizationShaders; // size: 0x4, address: 0x805DC138
unsigned int _localizationShadersCount; // size: 0x4, address: 0x805DC13C
unsigned int _shaderVersion; // size: 0x4, address: 0x805DA4B4
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct ERShaderUpdate * m_pHead; // offset 0x0, size 0x4
    struct ERShaderUpdate * m_pTail; // offset 0x4, size 0x4
};
class TLinkedList s_updateList; // size: 0x8, address: 0x805DC140
class EMutex s_updateListMutex; // size: 0x1C, address: 0x80544494
unsigned char m_defaultShaderState; // size: 0x1, address: 0x805DC148
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x805444B0
class ETypeInfo * gpTypeInfo_ERShader; // size: 0x4, address: 0x805DC14C
static unsigned int nNextID; // size: 0x4, address: 0x805DA4B8
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
    class ERShader * * mpBegin; // offset 0x0, size 0x4
    class ERShader * * mpEnd; // offset 0x4, size 0x4
    class ERShader * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x805444D8
class ETypeInfo * gpTypeInfo_ERSocialAnimationSet; // size: 0x4, address: 0x805DC150
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544500
class ETypeInfo * gpTypeInfo_ERSoundEvent; // size: 0x4, address: 0x805DC154
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544528
class ETypeInfo * gpTypeInfo_ERSoundTrackData; // size: 0x4, address: 0x805DC158
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544550
class ETypeInfo * gpTypeInfo_ERTexture; // size: 0x4, address: 0x805DC15C
class HDDThread g_hddThread; // size: 0x630, address: 0x80544588
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544BB8
class ETypeInfo * gpTypeInfo_REffectsAttachment; // size: 0x4, address: 0x805DC160
unsigned char kUseEmitterPosForAlphaSort; // size: 0x1, address: 0x805DF198
unsigned char kSendEmitterPosToForeground; // size: 0x1, address: 0x805DF199
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
    struct AttachmentNodeV1 * mpBegin; // offset 0x0, size 0x4
    struct AttachmentNodeV1 * mpEnd; // offset 0x4, size 0x4
    struct AttachmentNodeV1 * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544BE0
class ETypeInfo * gpTypeInfo_REffectsEmitter; // size: 0x4, address: 0x805DC164
// total size: 0xF0
struct FastParticleEmitterInitDataV1 {
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
    signed short m_soundNum; // offset 0x5C, size 0x2
    signed short m_GlowWidth; // offset 0x5E, size 0x2
    float m_hardLifetime; // offset 0x60, size 0x4
    signed short m_burstParticleCount; // offset 0x64, size 0x2
    signed short m_burstParticleCountRange; // offset 0x66, size 0x2
    float m_RandomAlphaRange; // offset 0x68, size 0x4
    float m_initialAngle; // offset 0x6C, size 0x4
    class EVec3 m_offsetPosition; // offset 0x70, size 0xC
    float m_arcAngle; // offset 0x7C, size 0x4
    class EVec3 m_colorMixerBase; // offset 0x80, size 0xC
    float m_angleLimit; // offset 0x8C, size 0x4
    class EVec3 m_colorMixerRange; // offset 0x90, size 0xC
    float m_burstPeriodRange; // offset 0x9C, size 0x4
    unsigned int m_seed; // offset 0xA0, size 0x4
    float m_useEmitterVelocity; // offset 0xA4, size 0x4
    signed char m_particleType; // offset 0xA8, size 0x1
    signed char m_particleBounce; // offset 0xA9, size 0x1
    signed char m_particleFriction; // offset 0xAA, size 0x1
    signed char m_rotationAxis; // offset 0xAB, size 0x1
    unsigned char m_particleFlags; // offset 0xAC, size 0x1
    signed char m_iUVMirroring; // offset 0xAD, size 0x1
    unsigned char m_uiAlphaTestValue; // offset 0xAE, size 0x1
    signed char m_glowKind; // offset 0xAF, size 0x1
    float m_uvanimPeriod; // offset 0xB0, size 0x4
    float m_uvanimOOPeriod; // offset 0xB4, size 0x4
    float m_radiusSpeed; // offset 0xB8, size 0x4
    float m_radiusDrag; // offset 0xBC, size 0x4
    unsigned int m_textureID; // offset 0xC0, size 0x4
    float m_pad[3]; // offset 0xC4, size 0xC
    class EVec3 m_glowRGB; // offset 0xD0, size 0xC
    float m_glowAlpha; // offset 0xDC, size 0x4
    float m_lod_end; // offset 0xE0, size 0x4
    float m_lod_fade; // offset 0xE4, size 0x4
    float m_useme_1; // offset 0xE8, size 0x4
    float m_useme_2; // offset 0xEC, size 0x4
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544C08
class ETypeInfo * gpTypeInfo_REffectsSequencer; // size: 0x4, address: 0x805DC168
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80544C30
class ETypeInfo * gpTypeInfo_RParticle; // size: 0x4, address: 0x805DC16C
// total size: 0x14
struct ParticleHeader {
    // Members
    int version; // offset 0x0, size 0x4
    int empty[3]; // offset 0x4, size 0xC
    int size; // offset 0x10, size 0x4
};
// total size: 0x14
struct ParticleHeader {
    // Members
    int version; // offset 0x0, size 0x4
    int empty[3]; // offset 0x4, size 0xC
    int size; // offset 0x10, size 0x4
};
// total size: 0x48
struct {} __vt__9RParticle; // size: 0x48, address: 0x804571E8
// total size: 0x48
struct {} __vt__17REffectsSequencer; // size: 0x48, address: 0x80457230
// total size: 0x48
struct {} __vt__15REffectsEmitter; // size: 0x48, address: 0x80457278
// total size: 0x48
struct {} __vt__18REffectsAttachment; // size: 0x48, address: 0x804572C0
// total size: 0x48
struct {} __vt__16ERSoundTrackData; // size: 0x48, address: 0x80457308
// total size: 0x48
struct {} __vt__20ERSocialAnimationSet; // size: 0x48, address: 0x80457350
// total size: 0x48
struct {} __vt__11ERQuickdata; // size: 0x48, address: 0x80457398
// total size: 0x48
struct {} __vt__7ERMovie; // size: 0x48, address: 0x804573E0
// total size: 0x48
struct {} __vt__6ERFont; // size: 0x48, address: 0x80457428
// total size: 0x48
struct {} __vt__9ERTexture; // size: 0x48, address: 0x80457470
// total size: 0x48
struct {} __vt__7ERFlash; // size: 0x48, address: 0x804574B8
// total size: 0x30
struct {} __vt__12EResPrefetch; // size: 0x30, address: 0x80457500
// total size: 0x34
struct {} __vt__16EResPrefetchFile; // size: 0x34, address: 0x80457530
// total size: 0x14
struct {} __vt__16EScratchBuffUser; // size: 0x14, address: 0x80457564
// total size: 0x9C
struct {} __vt__19EResourceLoaderImpl; // size: 0x9C, address: 0x80457578
// total size: 0x48
struct {} __vt__14EREdithTreeSet; // size: 0x48, address: 0x80457618
// total size: 0x48
struct {} __vt__9ERDataset; // size: 0x48, address: 0x80457660
// total size: 0x10
struct {} __vt__9HDDThread; // size: 0x10, address: 0x804576A8
// total size: 0x88
struct {} __vt__15EResourceLoader; // size: 0x88, address: 0x804576B8
// total size: 0x48
struct {} __vt__8ERBinary; // size: 0x48, address: 0x80457740
// total size: 0x48
struct {} __vt__12ERSoundEvent; // size: 0x48, address: 0x80457788
// total size: 0x48
struct {} __vt__14ERAmbientScore; // size: 0x48, address: 0x804577D0
// total size: 0x48
struct {} __vt__6ERAnim; // size: 0x48, address: 0x80457818
// total size: 0x14
struct {} __vt__14ERAnimBitArray; // size: 0x14, address: 0x80457860
// total size: 0x48
struct {} __vt__11ERCharacter; // size: 0x48, address: 0x80457878
// total size: 0x48
struct {} __vt__7ERModel; // size: 0x48, address: 0x804578C0
// total size: 0x1C
struct {} __vt__13BSplineVolume; // size: 0x1C, address: 0x80457908
// total size: 0x4C
struct {} __vt__8ERShader; // size: 0x4C, address: 0x80457924
// total size: 0x48
struct {} __vt__9EResource; // size: 0x48, address: 0x80457970
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ERAmbientSound * mIterator; // offset 0x0, size 0x4
};
// total size: 0x20
struct AttachmentNodeV1 {
    // Members
    class EVec3 pos; // offset 0x0, size 0xC
    signed char effectAttachmentType; // offset 0xC, size 0x1
    signed char boneId; // offset 0xD, size 0x1
    signed char pad[2]; // offset 0xE, size 0x2
    class EVec3 dir; // offset 0x10, size 0xC
    unsigned int effectId; // offset 0x1C, size 0x4
};
// total size: 0xC
struct pair {
    // Members
    struct hashtable_iterator first; // offset 0x0, size 0x8
    unsigned char second; // offset 0x8, size 0x1
};

