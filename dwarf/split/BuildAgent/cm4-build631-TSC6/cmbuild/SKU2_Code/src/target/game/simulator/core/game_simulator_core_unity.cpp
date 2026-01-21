/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\game_simulator_core_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEE9C -> 0x800EEE9C
*/
unsigned char s_duckAmbient; // size: 0x1, address: 0x805DB890
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
    const class ERAmbientSound * * mpBegin; // offset 0x0, size 0x4
    const class ERAmbientSound * * mpEnd; // offset 0x4, size 0x4
    const class ERAmbientSound * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0xD44
class EAmbientScoreManager : public EResourceManager {};
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041B540
// total size: 0x8
class AnimTableImpl : public AnimTable {
    // Members
public:
    const struct AnimRefTable * m_pAnimRefTable; // offset 0x4, size 0x4
};
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041B57C
// total size: 0x1
class cAudioInfo {};
enum DataIdx {
    kAI_Gender = 0,
    kAI_Age = 1,
    kAI_CookingSkill = 2,
    kAI_CleaningSkill = 3,
    kAI_Hour = 4,
    kAI_CreativitySkill = 5,
    kAI_SocialSkill = 6,
    kAI_RepairSkill = 7,
    kAI_GardeningSkill = 8,
    kAI_MusicSkill = 9,
    kAI_LiteracySkill = 10,
    kAI_PhysicalSkill = 11,
    kAI_LogicSkill = 12,
    kAI_RoomSize = 13,
    kAI_Mood = 14,
    kAI_Nice = 15,
    kAI_Active = 16,
    kAI_Generous = 17,
    kAI_Playful = 18,
    kAI_Outgoing = 19,
    kAI_Neat = 20,
    kAI_DataCount = 21,
};
// total size: 0x10
class vector : public VectorBase {};
class vector s_cachedTrees; // size: 0x10, address: 0x804926D0
int s_cacheTreesRefCount; // size: 0x4, address: 0x805DB894
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class ObjectDataBehaviorTree * * mpBegin; // offset 0x0, size 0x4
    class ObjectDataBehaviorTree * * mpEnd; // offset 0x4, size 0x4
    class ObjectDataBehaviorTree * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ObjectDataBehaviorTree * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x20
class ResourceBehavior : public Behavior {
    // Members
    class EREdithTreeSet * m_resource; // offset 0x10, size 0x4
    class EREdithTreeSet * m_semiGlobalResource; // offset 0x14, size 0x4
    class EREdithTreeSet * m_globalResource; // offset 0x18, size 0x4
    unsigned int mRefCount; // offset 0x1C, size 0x4
};
// total size: 0xD44
class EEdithTreeSetMan : public EResourceManager {};
// total size: 0x14
class IFFBehavior : public Behavior {
    // Members
    unsigned int mRefCount; // offset 0x10, size 0x4
};
float g_social_duck; // size: 0x4, address: 0x805D8834
float g_cam_height; // size: 0x4, address: 0x805D8838
float g_cam_dist; // size: 0x4, address: 0x805D883C
unsigned char g_bBoxXIsInitted; // size: 0x1, address: 0x805DB898
class cBoxX * g_pBoxX; // size: 0x4, address: 0x805DB89C
// total size: 0x16C
class EFamilyConstructData {
    // Members
public:
    class ENeighborhoodCustomChar m_simCustomData[6]; // offset 0x0, size 0x168
    class StackString2 * m_pFamilyName; // offset 0x168, size 0x4
};
// total size: 0x10
class cAudioWorldCoord {
    // Members
public:
    float mX; // offset 0x0, size 0x4
    float mY; // offset 0x4, size 0x4
    float mZ; // offset 0x8, size 0x4
    int mLevel; // offset 0xC, size 0x4
};
static class EThreadMutex g_eventMutex; // size: 0x40, address: 0x804926F0
static int lSimSpeed; // size: 0x4, address: 0x805D8840
// total size: 0x8
struct pair {
    // Members
    class ERSoundEvent * first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
};
static int sfx_vol; // size: 0x4, address: 0x805DB8A0
static char * s_frontEndTracks[9]; // size: 0x24, address: 0x8042D424
int g_CollisionBucketSize; // size: 0x4, address: 0x805D8858
int g_CollisionGridSize; // size: 0x4, address: 0x805D885C
unsigned short * pDefault; // size: 0x4, address: 0x805D8868
// total size: 0x10
class CatalogResourceImpl : public CatalogResource {
    // Static members
    static unsigned short * pDefault; // size: 0x4

    // Members
public:
    class ELocString fName; // offset 0x4, size 0x4
    class ELocString fDesc; // offset 0x8, size 0x4
    class ELocString fShortName; // offset 0xC, size 0x4
};
class Commander * sList; // size: 0x4, address: 0x805DB8A4
int sId; // size: 0x4, address: 0x805DB8A8
class CTilePt sDirections[8]; // size: 0x18, address: 0x80492790
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class FamilyMember * mIterator; // offset 0x0, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class FamilyImpl * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x14
class FloatConstantsQuickData : public FloatConstants {
    // Members
    class ObjectDataID mDataID; // offset 0x4, size 0x8
    const struct FloatConstantsData * m_pData; // offset 0xC, size 0x4
    unsigned int mRefCount; // offset 0x10, size 0x4
};
static enum eMode iSavedGameSoundMode; // size: 0x4, address: 0x805D8888
// total size: 0x1C
struct ListNode : public ListNodeBase {
    // Members
    struct SoundEventInfo mValue; // offset 0x8, size 0x14
};
class Globs * globs; // size: 0x4, address: 0x805DB8AC
class cSimulator * pSimulator; // size: 0x4, address: 0x805DB8B0
class ObjectFolder * pObjectFolder; // size: 0x4, address: 0x805DB8B4
class ObjectModule * pObjectModule; // size: 0x4, address: 0x805DB8B8
class cFixedWorld * pFixedWorld; // size: 0x4, address: 0x805DB8BC
class House * pHouse; // size: 0x4, address: 0x805DB8C0
class cSoundPlayer * pSound; // size: 0x4, address: 0x805DB8C4
class Neighborhood * pNeighborhood; // size: 0x4, address: 0x805DB8C8
class RoomManager * pRoomManager; // size: 0x4, address: 0x805DB8CC
class NghResFile * pNghResFile; // size: 0x4, address: 0x805DB8D0
class WeatherManager * pWeatherManager; // size: 0x4, address: 0x805DB8D4
class EGlobal * pEORGlobals; // size: 0x4, address: 0x805DB8D8
struct ECheatVariables * pEORCheats; // size: 0x4, address: 0x805DB8DC
unsigned char s_handlingPlacementObject; // size: 0x1, address: 0x805DB8E0
class LightingParameters * pLightingParameters; // size: 0x4, address: 0x805DB8E4
int iSaveFileVersion; // size: 0x4, address: 0x805D888C
static class LightingParameters sLightingParameters; // size: 0x3C, address: 0x804927B4
// total size: 0x0
class Careers {};
// total size: 0x1
class Globs {
    // Static members
    static unsigned char s_handlingPlacementObject; // size: 0x1
    static struct ECheatVariables * pEORCheats; // size: 0x4
    static class EGlobal * pEORGlobals; // size: 0x4
    static int iSaveFileVersion; // size: 0x4
    static class LightingParameters * pLightingParameters; // size: 0x4
    static class WeatherManager * pWeatherManager; // size: 0x4
    static class NghResFile * pNghResFile; // size: 0x4
    static class Careers * pCareers; // size: 0x4
    static class RoomManager * pRoomManager; // size: 0x4
    static class Neighborhood * pNeighborhood; // size: 0x4
    static class cSoundPlayer * pSound; // size: 0x4
    static class House * pHouse; // size: 0x4
    static class cFixedWorld * pFixedWorld; // size: 0x4
    static class ObjectModule * pObjectModule; // size: 0x4
    static class ObjectFolder * pObjectFolder; // size: 0x4
    static class cSimulator * pSimulator; // size: 0x4
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class ObjectDataBehaviorConstants * mpData; // offset 0x0, size 0x4
};
// total size: 0x60
struct sDSPADPCM {
    // Members
    unsigned int num_samples; // offset 0x0, size 0x4
    unsigned int num_adpcm_nibbles; // offset 0x4, size 0x4
    unsigned int sample_rate; // offset 0x8, size 0x4
    unsigned short loop_flag; // offset 0xC, size 0x2
    unsigned short format; // offset 0xE, size 0x2
    unsigned int sa; // offset 0x10, size 0x4
    unsigned int ea; // offset 0x14, size 0x4
    unsigned int ca; // offset 0x18, size 0x4
    unsigned short coef[16]; // offset 0x1C, size 0x20
    unsigned short gain; // offset 0x3C, size 0x2
    unsigned short ps; // offset 0x3E, size 0x2
    unsigned short yn1; // offset 0x40, size 0x2
    unsigned short yn2; // offset 0x42, size 0x2
    unsigned short lps; // offset 0x44, size 0x2
    unsigned short lyn1; // offset 0x46, size 0x2
    unsigned short lyn2; // offset 0x48, size 0x2
    unsigned short pad[11]; // offset 0x4A, size 0x16
};
// total size: 0x28
class ERSampledata : public EResource {
    // Members
protected:
    struct sDSPADPCM * m_pHeader; // offset 0x14, size 0x4
    struct sDSPADPCM * m_pHeader2; // offset 0x18, size 0x4
    unsigned int aram_location; // offset 0x1C, size 0x4
    unsigned int aram_location2; // offset 0x20, size 0x4
    unsigned char bLooping; // offset 0x24, size 0x1
};
static class cGZSndSys * _gzSndSys; // size: 0x4, address: 0x805DB8E8
class cIGZSndSys * g_pSndSys; // size: 0x4, address: 0x805DB8EC
class cGZSnd * g_soundThatIsLoading; // size: 0x4, address: 0x805DB8F0
// total size: 0x18
class cGZSndSys : public cIGZSndSys {
    // Static members
    static class cGZSnd * g_soundThatIsLoading; // size: 0x4

    // Members
public:
    class cGZSnd * m_pSndList; // offset 0x4, size 0x4
    class cGZMusic * m_pMusicList; // offset 0x8, size 0x4
    class cGZMusic * m_pCurrentMusic; // offset 0xC, size 0x4
    int m_iFadeTicks; // offset 0x10, size 0x4
    unsigned char m_bStopLoadLoopRequested; // offset 0x14, size 0x1
    unsigned char m_bMusicPaused; // offset 0x15, size 0x1
    signed char m_simSpeed; // offset 0x16, size 0x1
};
// total size: 0x38
class cGZSnd : public cIGZSnd {
    // Members
    unsigned int m_uRefCount; // offset 0xC, size 0x4
    unsigned char m_bAddedRef; // offset 0x10, size 0x1
    unsigned char m_bWaitingToStart; // offset 0x11, size 0x1
    unsigned char m_bPlayRequested; // offset 0x12, size 0x1
    unsigned char m_bPauseRequested; // offset 0x13, size 0x1
    unsigned int m_uResID; // offset 0x14, size 0x4
    struct EVoice * m_voice; // offset 0x18, size 0x4
    int m_volume; // offset 0x1C, size 0x4
    int m_pan; // offset 0x20, size 0x4
    float m_lvol; // offset 0x24, size 0x4
    float m_rvol; // offset 0x28, size 0x4
    int m_iFadeTicks; // offset 0x2C, size 0x4
    int m_iVolumeLastSet; // offset 0x30, size 0x4
    class cGZSnd * m_pNext; // offset 0x34, size 0x4
};
// total size: 0x2C
class cGZMusic : public cIGZSnd {
    // Members
    unsigned int m_uRefCount; // offset 0xC, size 0x4
    unsigned char m_bPlaying; // offset 0x10, size 0x1
    unsigned char m_loop; // offset 0x11, size 0x1
    unsigned int m_uResID; // offset 0x14, size 0x4
    int m_volume; // offset 0x18, size 0x4
    int m_pan; // offset 0x1C, size 0x4
    float m_timeToPlayAt; // offset 0x20, size 0x4
    int m_iFadeTicks; // offset 0x24, size 0x4
    class cGZMusic * m_pNext; // offset 0x28, size 0x4
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
    class cGZSnd * * mpBegin; // offset 0x0, size 0x4
    class cGZSnd * * mpEnd; // offset 0x4, size 0x4
    class cGZSnd * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
signed short kSimulatorResourceID; // size: 0x2, address: 0x805D8894
signed short kHouseResourceID; // size: 0x2, address: 0x805D8896
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class cSimulator * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class House * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
static signed short sOldStyleSpriteIDs[19]; // size: 0x26, address: 0x8041B5D8
// total size: 0x8
struct IconIDMap {
    // Members
    int fGroup; // offset 0x0, size 0x4
    signed short fSpriteBaseID; // offset 0x4, size 0x2
    signed short fStringsID; // offset 0x6, size 0x2
};
static struct IconIDMap sIDMaps[14]; // size: 0x70, address: 0x8042D520
static unsigned char sUniqueHeader[64]; // size: 0x40, address: 0x8042D590
// total size: 0x58
class IFFResNode {
    // Members
public:
    int fFileoffset; // offset 0x0, size 0x4
    int fID; // offset 0x4, size 0x4
    signed short fFlags; // offset 0x8, size 0x2
    signed short fSavedFlags; // offset 0xA, size 0x2
    struct HandleNode * fHandle; // offset 0xC, size 0x4
    class StackString fName; // offset 0x10, size 0x48
};
// total size: 0x18
class IFFResList : public vector {
    // Members
public:
    unsigned int fType; // offset 0x10, size 0x4
    void (* fLastSwizUsed)(void *, int); // offset 0x14, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x14
class IFFResMap : private vector {
    // Members
    int fFragSize; // offset 0x10, size 0x4
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
    class IFFResNode * mpBegin; // offset 0x0, size 0x4
    class IFFResNode * mpEnd; // offset 0x4, size 0x4
    class IFFResNode * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class IFFResNode * mIterator; // offset 0x0, size 0x4
};
// total size: 0x444
class IFFResFile2 : public iResFile, public MemFile {
    // Members
    class IFFResMap * fResMap; // offset 0x430, size 0x4
    int fLastNewBlockOffset; // offset 0x434, size 0x4
    int fMapOffset; // offset 0x438, size 0x4
    unsigned char fChanged; // offset 0x43C, size 0x1
    unsigned char fOptimizeTarget; // offset 0x43D, size 0x1
    class StackString * fSuspendedName; // offset 0x440, size 0x4
};
// total size: 0x4C
struct IFFHeader {
    // Members
    int fType; // offset 0x0, size 0x4
    int fSize; // offset 0x4, size 0x4
    signed short fID; // offset 0x8, size 0x2
    signed short fFlags; // offset 0xA, size 0x2
    char fName[64]; // offset 0xC, size 0x40
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class IFFResMap * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
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
    class IFFResList * mpBegin; // offset 0x0, size 0x4
    class IFFResList * mpEnd; // offset 0x4, size 0x4
    class IFFResList * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x420
class MemFile {
    // Members
    class StackString fFilename; // offset 0x0, size 0x408
    unsigned char fWritable; // offset 0x408, size 0x1
    unsigned char fDirty; // offset 0x409, size 0x1
    unsigned char * fBuffer; // offset 0x40C, size 0x4
    unsigned int fBufferSize; // offset 0x410, size 0x4
    unsigned int fFilePos; // offset 0x414, size 0x4
    unsigned int fEndOfFile; // offset 0x418, size 0x4
public:
    void * __vptr$; // offset 0x41C, size 0x4
};
// total size: 0x444
class IFFBehResFile : public IFFResFile2 {};
// total size: 0x10C
class StackString : public StringBuffer {
    // Members
    char fChars[260]; // offset 0x8, size 0x104
};
// total size: 0x14
class StackString : public StringBuffer {
    // Members
    char fChars[12]; // offset 0x8, size 0xC
};
int sLastUniqueID; // size: 0x4, address: 0x805DB8F4
static class CTilePt stat; // size: 0x3, address: 0x805DB8FC
char * ItemStatusArray[4]; // size: 0x10, address: 0x8042D640
signed short s_nNextInstanceID; // size: 0x2, address: 0x805D88B4
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct InventoryTokens * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct ClothingItems * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x10
class TokenItem : public InventoryItem {
    // Members
    signed short mID; // offset 0x6, size 0x2
    signed short mCount; // offset 0x8, size 0x2
    signed short mData; // offset 0xA, size 0x2
    const struct InventoryTokens * mpToken; // offset 0xC, size 0x4
};
// total size: 0x34
class OwnableItem : public ObjectItem {
    // Static members
    static unsigned char kPetOwnershipMatrixIndex; // size: 0x1

    // Members
    class vector mOwners; // offset 0x24, size 0x10
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
    struct OwnerInfo * mpBegin; // offset 0x0, size 0x4
    struct OwnerInfo * mpEnd; // offset 0x4, size 0x4
    struct OwnerInfo * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x24
class ObjectItem : public InventoryItem {
    // Members
    int mGuid; // offset 0x8, size 0x4
    signed char mStatusText; // offset 0xC, size 0x1
    signed short mCurrentValue; // offset 0xE, size 0x2
    signed short mRepairState; // offset 0x10, size 0x2
    signed short mDirtyLevel; // offset 0x12, size 0x2
    class vector mAttrs; // offset 0x14, size 0x10
};
// total size: 0x4
struct OwnerInfo {
    // Members
    signed short mId; // offset 0x0, size 0x2
    signed short mPoints; // offset 0x2, size 0x2
};
static class IngredientManager * spIngredientManager; // size: 0x4, address: 0x805DB900
// total size: 0x48
struct FoodResult {
    // Members
    signed short m_ID; // offset 0x0, size 0x2
    signed short m_Dummy1; // offset 0x2, size 0x2
    struct IngredientType * m_IngredientType1; // offset 0x4, size 0x4
    struct IngredientType * m_IngredientType2; // offset 0x8, size 0x4
    struct IngredientType * m_IngredientType3; // offset 0xC, size 0x4
    struct IngredientType * m_IngredientType4; // offset 0x10, size 0x4
    signed short m_UnpreppedGS; // offset 0x14, size 0x2
    signed short m_PrepCounterGS; // offset 0x16, size 0x2
    signed short m_PrepProcessorGS; // offset 0x18, size 0x2
    signed short m_UnprepCookedGS; // offset 0x1A, size 0x2
    signed short m_PrepCounterCookedGS; // offset 0x1C, size 0x2
    signed short m_PrepProcessorCookedGS; // offset 0x1E, size 0x2
    signed short m_BlendedGS; // offset 0x20, size 0x2
    signed short m_Dummy2; // offset 0x22, size 0x2
    class ELocString m_UnpreppedName; // offset 0x24, size 0x4
    class ELocString m_PrepCounterName; // offset 0x28, size 0x4
    class ELocString m_PrepProcessorName; // offset 0x2C, size 0x4
    class ELocString m_UnprepCookedName; // offset 0x30, size 0x4
    class ELocString m_PrepCounterCookedName; // offset 0x34, size 0x4
    class ELocString m_PrepProcessorCookedName; // offset 0x38, size 0x4
    class ELocString m_BlendedName; // offset 0x3C, size 0x4
    int m_Dummy3; // offset 0x40, size 0x4
    int m_Dummy4; // offset 0x44, size 0x4
};
// total size: 0x8
class IngredientManager {
    // Members
    int m_IngredientCount; // offset 0x0, size 0x4
    int m_FoodResultCount; // offset 0x4, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct IngredientType * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct IngredientToken * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct FoodResult * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
class LotManager * s_LotManager; // size: 0x4, address: 0x805DB904
// total size: 0x8
struct LotData {
    // Members
    signed short flags; // offset 0x0, size 0x2
    int epochSecondsAtLastExit; // offset 0x4, size 0x4
};
// total size: 0x128
class LotManager {
    // Static members
    static class LotManager * s_LotManager; // size: 0x4

    // Members
    struct LotData m_lotData[27]; // offset 0x0, size 0xD8
    signed short m_homeTikiLot; // offset 0xD8, size 0x2
    signed char m_transitionData[72]; // offset 0xDA, size 0x48
    class LotToLotTransition * m_lotTransitions; // offset 0x124, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class ESpriteRenderMan {
    // Members
protected:
    class TNodeList m_sprites; // offset 0x0, size 0xC
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
    struct DamageEvent * mpBegin; // offset 0x0, size 0x4
    struct DamageEvent * mpEnd; // offset 0x4, size 0x4
    struct DamageEvent * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x12
class Transition {
    // Members
public:
    signed short m_TimeCost; // offset 0x0, size 0x2
    signed short m_HygieneCost; // offset 0x2, size 0x2
    signed short m_EnergyCost; // offset 0x4, size 0x2
    signed short m_EnergyRequirement; // offset 0x6, size 0x2
    signed short m_BodySkillRequirement; // offset 0x8, size 0x2
    signed short m_MinBodyForDiscount; // offset 0xA, size 0x2
    signed short m_EnergyCostDiscount; // offset 0xC, size 0x2
    unsigned char m_SourceLotID; // offset 0xE, size 0x1
    unsigned char m_DestinationLotID; // offset 0xF, size 0x1
    unsigned char m_TransitionID; // offset 0x10, size 0x1
    unsigned char m_IsAvailableToAutonomy; // offset 0x11, size 0x1
};
unsigned char m_Initialized; // size: 0x1, address: 0x805DB908
class Transition m_Transitions[72]; // size: 0x510, address: 0x80492808
// total size: 0x1
class LotToLotTransition {
    // Static members
    static class Transition m_Transitions[72]; // size: 0x510
    static unsigned char m_Initialized; // size: 0x1
};
// total size: 0x8
class intrusive_list : public intrusive_list_base {};
// total size: 0x4
class intrusive_list_iterator {
    // Members
public:
    struct LotNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x8
class intrusive_list_base {
    // Members
protected:
    struct intrusive_list_node mAnchor; // offset 0x0, size 0x8
};
// total size: 0x8
struct intrusive_list_node {
    // Members
    struct intrusive_list_node * mpNext; // offset 0x0, size 0x4
    struct intrusive_list_node * mpPrev; // offset 0x4, size 0x4
};
// total size: 0x18
struct LotNode : public intrusive_list_node {
    // Members
    int m_CostFunction; // offset 0x8, size 0x4
    signed short m_EnergyCost; // offset 0xC, size 0x2
    unsigned char m_LotID; // offset 0xE, size 0x1
    unsigned char m_TransitionID; // offset 0xF, size 0x1
    unsigned char m_SourceLotID; // offset 0x10, size 0x1
    unsigned char m_Status; // offset 0x11, size 0x1
    unsigned char m_TransitionIndexCount; // offset 0x12, size 0x1
    unsigned char m_TransitionIndex[5]; // offset 0x13, size 0x5
};
static unsigned char sConstantsUpdated; // size: 0x1, address: 0x805DB909
static float totalEnergyShift; // size: 0x4, address: 0x805DB90C
static int wakeHours; // size: 0x4, address: 0x805DB910
static float sleepHours; // size: 0x4, address: 0x805DB914
static float wakeEnergyDelta; // size: 0x4, address: 0x805DB918
static float sleepEnergyDelta; // size: 0x4, address: 0x805DB91C
static int wakeTime; // size: 0x4, address: 0x805DB920
static int bedTime; // size: 0x4, address: 0x805DB924
static float clockDrift; // size: 0x4, address: 0x805DB928
static float sleepinessMultiplier; // size: 0x4, address: 0x805DB92C
static float hungerToBladderRatio; // size: 0x4, address: 0x805DB930
static float comfortDecBase; // size: 0x4, address: 0x805DB934
static float comfortDecMultiplier; // size: 0x4, address: 0x805DB938
static float hungerDecRatio; // size: 0x4, address: 0x805DB93C
static float socialDecBase; // size: 0x4, address: 0x805DB940
static float socialDecMultiplier; // size: 0x4, address: 0x805DB944
static float entWakeDec; // size: 0x4, address: 0x805DB948
static float entSleepMultiplier; // size: 0x4, address: 0x805DB94C
static float hygWakeDec; // size: 0x4, address: 0x805DB950
static float hygSleepDec; // size: 0x4, address: 0x805DB954
static float bladderWakeDec; // size: 0x4, address: 0x805DB958
static float bladderSleepDec; // size: 0x4, address: 0x805DB95C
static float scratchWakeDec; // size: 0x4, address: 0x805DB960
static float scratchSleepDec; // size: 0x4, address: 0x805DB964
static float chewWakeDec; // size: 0x4, address: 0x805DB968
static float chewSleepDec; // size: 0x4, address: 0x805DB96C
static float aspirationDec; // size: 0x4, address: 0x805DB970
static float aspirationMoodBonusRatio; // size: 0x4, address: 0x805DB974
float kAspirationPointToMeterRatio; // size: 0x4, address: 0x805D88BC
float firstIslandDecayRate; // size: 0x4, address: 0x805D88C0
// total size: 0x8
class MotiveConstantsClient : public GlobalConstantsClient {};
static class MotiveConstantsClient MotiveConstants_sTheClient; // size: 0x8, address: 0x805DB978
float sMotiveDecayBase[3][16]; // size: 0xC0, address: 0x8041B640
float sMotiveDecayActiveMod[3][16]; // size: 0xC0, address: 0x8041B700
float sMotiveDecayPlayfulMod[3][16]; // size: 0xC0, address: 0x8041B7C0
float sMotiveDecayOutgoingMod[3][16]; // size: 0xC0, address: 0x8041B880
float sMotiveDecayNeatMod[3][16]; // size: 0xC0, address: 0x8041B940
enum tDecaySimType {
    kDecayAdult = 0,
    kDecayCat = 1,
    kDecayDog = 2,
    kDecaySimTypeNum = 3,
};
// total size: 0x4
class AUTOPTR {
    // Members
    class StringSet * m_ptr; // offset 0x0, size 0x4
};
// total size: 0xC
struct PersonalityAdMap {
    // Members
    int persAd; // offset 0x0, size 0x4
    int persVar; // offset 0x4, size 0x4
    int inverted; // offset 0x8, size 0x4
};
static struct PersonalityAdMap sAdMap[26]; // size: 0x138, address: 0x8041BA00
int RESOURCE_TYPES[6]; // size: 0x18, address: 0x8041BB38
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
int kMasterBit; // size: 0x4, address: 0x805DD720
int kMineBit; // size: 0x4, address: 0x805DD724
int kPackBit; // size: 0x4, address: 0x805DD728
int sInterestMap[14]; // size: 0x38, address: 0x8042D9F0
static signed short kInterestCutoffs[4]; // size: 0x8, address: 0x805DD730
int sRelationshipLevelMin[10]; // size: 0x28, address: 0x80492D18
int sRelationshipLevelMax[10]; // size: 0x28, address: 0x80492D40
int sCrushMemoryThreshold; // size: 0x4, address: 0x805DB980
int sLoverMemoryThreshold; // size: 0x4, address: 0x805DB984
static unsigned char initialized; // size: 0x1, address: 0x805DB988
signed char sOldNeighborPersondataIndexArray[80]; // size: 0x50, address: 0x8042DA60
static class IPoint fLotPos[10]; // size: 0x50, address: 0x80492DE0
float gArchValueMultiplier; // size: 0x4, address: 0x805DB98C
int gNewFamilyStartHour; // size: 0x4, address: 0x805DB990
float gPerfectFriendCount; // size: 0x4, address: 0x805DB994
float gHouseSizeWeight; // size: 0x4, address: 0x805DB998
int gMoneyForNewFamily; // size: 0x4, address: 0x805DB99C
float gYardScoreMultiplier; // size: 0x4, address: 0x805DB9A0
// total size: 0x8
class NeighborhoodConstants : public GlobalConstantsClient {};
static class NeighborhoodConstants NeighborhoodConstants_sTheClient; // size: 0x8, address: 0x805DB9A8
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class Neighbor * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class FamilyImpl * * mIterator; // offset 0x0, size 0x4
};
static unsigned char sConstantsLoaded; // size: 0x1, address: 0x805DB9B0
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class Neighborhood * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x8
class ReconStreamPtrVector {
    // Members
    class vector & fVec; // offset 0x0, size 0x4
    int fType; // offset 0x4, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ReconStreamPtrVector * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x1
struct iter_swap_impl {};
class _c2DArray * sArrayList; // size: 0x4, address: 0x805DB9B4
void * (* m_pfnAlloc)(unsigned int); // size: 0x4, address: 0x805D88C8
void (* m_pfnFree)(void *); // size: 0x4, address: 0x805D88CC
static void (* sCurEntrySwizzle)(void *, int); // size: 0x4, address: 0x805DB9B8
// total size: 0x4
class EMemoryCard {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
class NghSubSectionIterator {
    // Members
    class NghLayout * m_pLayout; // offset 0x0, size 0x4
    unsigned int m_currSection; // offset 0x4, size 0x4
    unsigned int m_currSubSection; // offset 0x8, size 0x4
    unsigned int m_currOffset; // offset 0xC, size 0x4
};
class NghLayout s_nghLayout11; // size: 0x28, address: 0x80492E40
class NghLayout s_nghLayout10; // size: 0x28, address: 0x80492E78
const char * s_saveFileName; // size: 0x4, address: 0x805D88D0
const char * s_configFileName; // size: 0x4, address: 0x805DB9BC
int s_nghIndex[4]; // size: 0x10, address: 0x8041BB50
int s_houseIndex[6]; // size: 0x18, address: 0x8041BB60
int s_userIndex[2]; // size: 0x8, address: 0x805DD750
char s_ValidationValue[16]; // size: 0x10, address: 0x8041BB78
class NghSection s_nghSectionLayout11[7]; // size: 0xA8, address: 0x8042DC58
class NghSection s_nghSectionLayout10[7]; // size: 0xA8, address: 0x8042DD00
unsigned int m_uBothSectionChecksum; // size: 0x4, address: 0x805DB9C0
unsigned int m_uLastBothSectionChecksum; // size: 0x4, address: 0x805DB9C4
unsigned int s_nNumThumbnails; // size: 0x4, address: 0x805D88D4
unsigned int s_nNumHouses; // size: 0x4, address: 0x805D88D8
unsigned int s_nNumModifiableFamilies; // size: 0x4, address: 0x805D88DC
unsigned int s_nNumSimsPerFamily; // size: 0x4, address: 0x805D88E0
// total size: 0x80C
struct ThumbNailImageFormat {
    // Members
    unsigned int header[3]; // offset 0x0, size 0xC
    unsigned int image[256]; // offset 0xC, size 0x400
    unsigned int paletteEntry[256]; // offset 0x40C, size 0x400
};
// total size: 0x1
class ThumbnailCompresser {
    // Static members
    static unsigned int kTHUMB_COMPRESSED; // size: 0x4
    static unsigned int kTHUMB_NO_COMPRESSION; // size: 0x4
};
// total size: 0x72C
struct ThumbNailCompressedImageFormat {
    // Members
    unsigned int header[3]; // offset 0x0, size 0xC
    unsigned int image[256]; // offset 0xC, size 0x400
    unsigned char paletteEntry[256][3]; // offset 0x40C, size 0x300
    unsigned char alphaMap[32]; // offset 0x70C, size 0x20
};
int sXDirTable[9]; // size: 0x24, address: 0x8042DDA8
int sYDirTable[9]; // size: 0x24, address: 0x8042DDCC
int gPersonWidth; // size: 0x4, address: 0x805D88F8
unsigned char sFreeWill; // size: 0x1, address: 0x805D88FC
unsigned char sFreeWillClassic; // size: 0x1, address: 0x805D88FD
class BString2 sLastUserTypedName; // size: 0x4, address: 0x805DB9C8
unsigned int sCameraAnimPending; // size: 0x4, address: 0x805DB9CC
int gPlacementError; // size: 0x4, address: 0x805DB9D0
class cXObject * gPlacementConflict; // size: 0x4, address: 0x805DB9D4
static float sImpassiblePenalty; // size: 0x4, address: 0x805D8900
static float sOtherRoomPenalty; // size: 0x4, address: 0x805D8904
static float sShortDistanceCutoff; // size: 0x4, address: 0x805D8908
static float sTileDeltaToCheck; // size: 0x4, address: 0x805D890C
unsigned char s_VariablesUsed[72]; // size: 0x48, address: 0x8041BB88
unsigned char s_IsForcedInstanceVariable[72]; // size: 0x48, address: 0x8041BBD0
// total size: 0x14
class byte_key_map {
    // Static members
    static unsigned long _S_end_index; // size: 0x4

    // Members
    class bitset _M_keys_t; // offset 0x0, size 0x4
    class vector _M_data_t; // offset 0x4, size 0x10
};
class byte_key_map s_CategoryVariableMapSet; // size: 0x14, address: 0x80492EB8
signed short s_InvalidReference; // size: 0x2, address: 0x805DD75C
unsigned char s_serializing; // size: 0x1, address: 0x805DB9D8
unsigned char s_bTaggedGraphicField; // size: 0x1, address: 0x805DB9D9
// total size: 0x8
struct pair {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    signed short second; // offset 0x4, size 0x2
};
// total size: 0x14
struct pair {
    // Members
    struct _Byte_key_map_iterator first; // offset 0x0, size 0x10
    unsigned char second; // offset 0x10, size 0x1
};
// total size: 0x8
class reference {
    // Members
protected:
    unsigned int * mpBitWord; // offset 0x0, size 0x4
    unsigned long mnBitIndex; // offset 0x4, size 0x4
};
// total size: 0x1
struct _WordCount {};
signed char s_indexLookup[72]; // size: 0x48, address: 0x8042DF10
// total size: 0x10
struct _Byte_key_map_iterator : public _Byte_key_map_base_iterator {};
// total size: 0x10
struct _Byte_key_map_iterator : public _Byte_key_map_base_iterator {};
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
// total size: 0x8
class reference {
    // Members
protected:
    unsigned int * mpBitWord; // offset 0x0, size 0x4
    unsigned long mnBitIndex; // offset 0x4, size 0x4
};
// total size: 0x4
struct BitsetBase {
    // Members
    unsigned int mWord[1]; // offset 0x0, size 0x4
};
// total size: 0x20
struct pair {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    class byte_key_map second; // offset 0x4, size 0x1C
};
// total size: 0x14
struct pair {
    // Members
    struct _Byte_key_map_iterator first; // offset 0x0, size 0x10
    unsigned char second; // offset 0x10, size 0x1
};
// total size: 0x4
class bitset : private BitsetBase {
    // Static members
    static unsigned long kSize; // size: 0x4
    static unsigned long kNW; // size: 0x4
};
const char * gTemplatePersonName; // size: 0x4, address: 0x805D891C
const char * gTemplatePetName; // size: 0x4, address: 0x805D8920
unsigned int fGlobalFileID; // size: 0x4, address: 0x805D8924
// total size: 0x4
class ObjectSaveTypeTable {
    // Members
    class ObjectFolder * fFolder; // offset 0x0, size 0x4
};
// total size: 0xC
struct HashIterator {
    // Members
    struct HashList * pList; // offset 0x0, size 0x4
    int i; // offset 0x4, size 0x4
    class ObjSelector * node; // offset 0x8, size 0x4
};
// total size: 0x18
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x8
};
// total size: 0x18
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x8
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x1C
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0xC
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x4
struct GlobalResFile {
    // Members
    struct ResFile * file; // offset 0x0, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct ObjDefinition * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x8
struct hashtable_iterator : public hashtable_iterator_base {};
// total size: 0x8
struct hashtable_iterator_base {
    // Members
    struct hash_node * mpNode; // offset 0x0, size 0x4
    struct hash_node * * mpBucket; // offset 0x4, size 0x4
};
// total size: 0xC
struct hash_node {
    // Members
    struct pair mValue; // offset 0x0, size 0x8
    struct hash_node * mpNext; // offset 0x8, size 0x4
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
    class ObjSelector * * mpBegin; // offset 0x0, size 0x4
    class ObjSelector * * mpEnd; // offset 0x4, size 0x4
    class ObjSelector * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectSaveTypeTable * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectFolder * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ObjectModule * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class cXObject * * mIterator; // offset 0x0, size 0x4
};
static unsigned char bAsserted; // size: 0x1, address: 0x805DB9DA
unsigned char sLookingForRoof; // size: 0x1, address: 0x805DB9DB
signed short overrideDialogReturnCode; // size: 0x2, address: 0x805D894C
signed short tempDataPrim; // size: 0x2, address: 0x805DB9DC
// total size: 0x18
class StackString : public StringBuffer {
    // Members
    char fChars[16]; // offset 0x8, size 0x10
};
enum UnlockableType {
    UL_OBJECT = 0,
    UL_SOCIAL = 1,
    UL_SKIN = 2,
    UL_NPC = 3,
    UL_MONEY = 4,
    UL_PROMOTION = 5,
    UL_LOCATION = 6,
    UL_NONE = 7,
};
// total size: 0xC
struct GoalReward {
    // Members
    enum UnlockableType category; // offset 0x0, size 0x4
    signed short unlockIndex; // offset 0x4, size 0x2
    unsigned short index; // offset 0x6, size 0x2
    unsigned char bHidden; // offset 0x8, size 0x1
    unsigned char careerGoal; // offset 0x9, size 0x1
};
// total size: 0xC
struct HouseGoal {
    // Members
    class ELocString text; // offset 0x0, size 0x4
    class ELocString message; // offset 0x4, size 0x4
    struct GoalReward * pReward; // offset 0x8, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct HouseGoal * pData; // offset 0x0, size 0x4
};
// total size: 0x2C
struct HouseData {
    // Members
    class ELocString houseName; // offset 0x0, size 0x4
    class ELocString topLineHouseSelectName; // offset 0x4, size 0x4
    class ELocString bottomLineHouseSelectName; // offset 0x8, size 0x4
    class ELocString introText; // offset 0xC, size 0x4
    class ELocString outroText; // offset 0x10, size 0x4
    class ELocString dialogHouseName; // offset 0x14, size 0x4
    unsigned int unused1; // offset 0x18, size 0x4
    unsigned int unused2; // offset 0x1C, size 0x4
    class VECTOR goals; // offset 0x20, size 0x4
    unsigned int lotType; // offset 0x24, size 0x4
    unsigned int grassShader; // offset 0x28, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct HouseData * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
static float * sCurMotiveTabToSort; // size: 0x4, address: 0x805DB9E0
// total size: 0x1B48
class RefrigeratorManager {
    // Members
    class RefrigeratorTab m_IngredientTabs[9]; // offset 0x0, size 0x1B48
};
// total size: 0x1B4C
class AutoFood {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class RefrigeratorManager m_fridgeManager; // offset 0x4, size 0x1B48
};
// total size: 0x10
class RefrigeratorIngredient {
    // Members
    const struct IngredientToken * m_pIngredient; // offset 0x0, size 0x4
    unsigned char m_FromInventory; // offset 0x4, size 0x1
    int m_CountInFridge; // offset 0x8, size 0x4
    int m_CountOnPlate; // offset 0xC, size 0x4
};
// total size: 0x308
class RefrigeratorTab {
    // Members
    class RefrigeratorIngredient m_Ingredients[48]; // offset 0x0, size 0x300
    int m_UsedCellCount; // offset 0x300, size 0x4
    const struct IngredientType * m_pIngredientType; // offset 0x304, size 0x4
};
enum eLoadingScreenMode {
    eLoadingScreenMode_to_main = 0,
    eLoadingScreenMode_to_main_with_iris = 1,
    eLoadingScreenMode_to_pregame = 2,
    eLoadingScreenMode_to_cas = 3,
    eLoadingScreenMode_to_freeplay = 4,
    eLoadingScreenMode_to_caf = 5,
    eLoadingScreenMode_to_lot = 6,
    eLoadingScreenMode_to_lot_with_iris = 7,
    eLoadingScreenMode_from_cas = 8,
    eLoadingScreenMode_LAST = 9,
};
// total size: 0xC4
class TIRTarget : public UIObjectBase {
    // Members
    class UIReflow m_reflow; // offset 0xA4, size 0x18
    unsigned char m_transInDone; // offset 0xBC, size 0x1
    unsigned char m_transOutDone; // offset 0xBD, size 0x1
    unsigned char m_transInProgress; // offset 0xBE, size 0x1
    unsigned char m_isLoaded; // offset 0xBF, size 0x1
    unsigned char m_transPending; // offset 0xC0, size 0x1
};
enum aptFormat_RotMode {
    FMTROT_NONE = 0,
    FMTROT_WORD_ROCK = 1,
    FMTROT_LETTER_ROCK = 2,
    FMTROT_LETTER_ROTATE = 3,
    FMTROT_RESTORE = 4,
};
// total size: 0x58
class AptFormat {
    // Static members
    static class EMat4 s_restoreMatrix; // size: 0x40
    static int s_nPSystemUID; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned char m_bSize; // offset 0x4, size 0x1
    unsigned char m_bColor; // offset 0x5, size 0x1
    unsigned char m_bBlink; // offset 0x6, size 0x1
    unsigned char m_bPulse; // offset 0x7, size 0x1
    enum aptFormat_RotMode m_RotMode; // offset 0x8, size 0x4
    unsigned char m_bParticles; // offset 0xC, size 0x1
    unsigned char m_bOutline; // offset 0xD, size 0x1
    unsigned char m_bSearchlight; // offset 0xE, size 0x1
    unsigned char m_bFormatEnabled; // offset 0xF, size 0x1
    float m_fontSize; // offset 0x10, size 0x4
    float m_rotStartTime; // offset 0x14, size 0x4
    class EVec4 * m_pvBlinkCycle; // offset 0x18, size 0x4
    class EVec4 * m_pvPulseCycle; // offset 0x1C, size 0x4
    float m_pulseBaseSize; // offset 0x20, size 0x4
    class EVec2 m_vRotVal; // offset 0x24, size 0x8
    class EVec4 * m_pvColor; // offset 0x2C, size 0x4
    union fontFXcommand * m_fontFXdata; // offset 0x30, size 0x4
    float m_timeMarker; // offset 0x34, size 0x4
    class EVec3 m_vOutlineColor; // offset 0x38, size 0xC
    float m_slightAngle; // offset 0x44, size 0x4
    class EVec3 m_vShadowColor; // offset 0x48, size 0xC
private:
    class AptWord * m_pWord; // offset 0x54, size 0x4
};
// total size: 0x30
class AptWord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class AptWord * m_pNext; // offset 0x4, size 0x4
    class AptLine * m_pLine; // offset 0x8, size 0x4
    unsigned short * m_pString; // offset 0xC, size 0x4
    class AptFormat * m_pFormat; // offset 0x10, size 0x4
    class AptFormat * m_pFormatRestore; // offset 0x14, size 0x4
    int m_lineFeeds; // offset 0x18, size 0x4
    int m_spaces; // offset 0x1C, size 0x4
    class EVec2 m_vWordPos; // offset 0x20, size 0x8
    class EVec2 m_vSize; // offset 0x28, size 0x8
};
// total size: 0x10
class AptLine {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class AptLine * m_pNext; // offset 0x4, size 0x4
    class AptWord * m_pWordList; // offset 0x8, size 0x4
    class AptParagraph * m_pParagraph; // offset 0xC, size 0x4
};
enum AptStringAlignment {
    AptStringAlignment_Left = 0,
    AptStringAlignment_Right = 1,
    AptStringAlignment_Center = 2,
    AptStringAlignment_None = 3,
    AptStringAlignment_Justify = 4,
};
// total size: 0x3C
class AptParagraph {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class AptLine * m_pLineList; // offset 0x4, size 0x4
    class EVec2 m_pParagraphPos; // offset 0x8, size 0x8
    class EVec4 * m_pvColor; // offset 0x10, size 0x4
    class EVec2 m_vTL; // offset 0x14, size 0x8
    class EVec2 m_vBR; // offset 0x1C, size 0x8
    float m_fontSize; // offset 0x24, size 0x4
    float m_printWidth; // offset 0x28, size 0x4
    enum AptStringAlignment m_alignment; // offset 0x2C, size 0x4
    class EVec2 m_vTextSize; // offset 0x30, size 0x8
    int m_lineCount; // offset 0x38, size 0x4
};
// total size: 0x410
class CLoadingScreen {
    // Static members
    static int m_messageNumber; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class E3DWindow m_win; // offset 0x8, size 0x358
    unsigned char m_bDrawEnable; // offset 0x360, size 0x1
    enum eLoadingScreenMode m_mode; // offset 0x364, size 0x4
    class ERShader * m_pBgShader; // offset 0x368, size 0x4
    class ERShader * m_pLeftFootShader; // offset 0x36C, size 0x4
    class ERShader * m_pRightFootShader; // offset 0x370, size 0x4
    class TIRTarget * m_pIrisTransition; // offset 0x374, size 0x4
    unsigned char m_bLoadingText; // offset 0x378, size 0x1
    int m_updateState; // offset 0x37C, size 0x4
    int m_tileAnimOffset; // offset 0x380, size 0x4
    class AptParagraph m_paragraph; // offset 0x384, size 0x3C
    class BString2 m_text; // offset 0x3C0, size 0x4
    unsigned char m_alphaOne; // offset 0x3C4, size 0x1
    unsigned char m_hintMessageEnable; // offset 0x3C5, size 0x1
    int m_timeOfBirth; // offset 0x3C8, size 0x4
    float m_totalFeetTime; // offset 0x3CC, size 0x4
    int m_currentFoot; // offset 0x3D0, size 0x4
    float m_feetAlphas[14]; // offset 0x3D4, size 0x38
};
// total size: 0x98
class LoadingScreenStateMachine : public StateMachine {
    // Static members
    static class LoadingScreenStateMachine * s_pSM; // size: 0x4

    // Members
    class CLoadingScreen * m_pLoadingScreen; // offset 0x78, size 0x4
    enum eLoadingScreenMode m_mode; // offset 0x7C, size 0x4
    class TIRTarget * m_pIrisTransition; // offset 0x80, size 0x4
    unsigned char m_startLoad; // offset 0x84, size 0x1
    unsigned char m_finishLoad; // offset 0x85, size 0x1
    unsigned char m_irisTransitionInComplete; // offset 0x86, size 0x1
    unsigned char m_irisTransitionOutComplete; // offset 0x87, size 0x1
    class Fader m_fader; // offset 0x88, size 0x10
};
static int curDialogDisplayed; // size: 0x4, address: 0x805DB9E4
static class vector alreadyDisplayed; // size: 0x10, address: 0x80492ED8
static int objIndex; // size: 0x4, address: 0x805DB9EC
static unsigned char doingModeless; // size: 0x1, address: 0x805DB9F0
static class ENDummy g_cameraDefaultDummy[2]; // size: 0xB0, address: 0x80492EF8
static class EMat4 g_cameraObjectMat[2]; // size: 0x80, address: 0x80492FA8
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class SoundInfo * mpData; // offset 0x0, size 0x4
};
static unsigned char sbModalDialogDisplayed; // size: 0x1, address: 0x805DB9F3
enum NV5_InventoryTabEnum {
    NV5_Other_Objects_Tab = 0,
    NV5_Tool_Tab = 1,
    NV5_Resource_Tab = 2,
    NV5_Clothing_Tab = 3,
    NV5_Food_Tab = 4,
    NV5_Fruit_Tab = 5,
    NV5_VeggieNutsGrains_Tab = 6,
    NV5_SmallFish_Tab = 7,
    NV5_MediumFish_Tab = 8,
    NV5_LargeFish_Tab = 9,
    NV5_Meat_Tab = 10,
    NV5_Spice_Tab = 11,
    NV5_Num_Tabs = 12,
};
enum NV5ToolMode {
    NV5Tool_Place = 0,
    NV5Tool_Grab = 1,
};
// total size: 0x8
class UICatalogItemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int m_SmallShaderID; // offset 0x4, size 0x4
};
// total size: 0xC
class UIInventoryItem {
    // Members
    int m_index; // offset 0x0, size 0x4
    class InventoryItem * m_pItem; // offset 0x4, size 0x4
    class UICatalogItemBase * m_pCatalogItem; // offset 0x8, size 0x4
};
// total size: 0x10
class UIInventoryTab {
    // Members
    class InventoryItems * m_pTabFamilyInventory; // offset 0x0, size 0x4
    class UIInventoryItem * m_pItems; // offset 0x4, size 0x4
    unsigned int m_itemCount; // offset 0x8, size 0x4
    unsigned char (* m_filterFunction)(class InventoryItem *); // offset 0xC, size 0x4
};
// total size: 0xC4
class UIInventoryManager {
    // Members
    class InventoryItems * m_pFamilyInventory; // offset 0x0, size 0x4
    class UIInventoryTab m_inventoryTabs[12]; // offset 0x4, size 0xC0
};
// total size: 0x158
class NV5InteractorManager {
    // Members
    class UIDialog m_UIDialog; // offset 0x0, size 0xA0
    class HelpDialog m_HelpDialog; // offset 0xA0, size 0xA8
    unsigned char m_bUIDialogExecuting; // offset 0x148, size 0x1
    class UIInventoryItem * m_Item; // offset 0x14C, size 0x4
    class NV5Target * m_pNV5Target; // offset 0x150, size 0x4
    class BBHTarget * m_pBBHTarget; // offset 0x154, size 0x4
};
enum NV5_InventoryMode {
    NV5_Mode_Pause_Menu = 0,
    NV5_Mode_Give_Social = 1,
    NV5_Mode_Cultivatable = 2,
    NV5_Mode_FastTools_Menu = 3,
    NV5_Mode_Cardinal = 4,
};
// total size: 0x4EC
class NV5Target : public UIObjectBase, public HelpDialogCallback {
    // Static members
    static int m_restoreVisualTab[4]; // size: 0x10
    static signed short m_ReturnInventoryTokenId; // size: 0x2
    static signed short m_ReturnInventoryIndex; // size: 0x2
    static int m_ReturnGUID; // size: 0x4
    static enum NV5_InventoryMode m_Mode; // size: 0x4

    // Members
protected:
    class UIStringGenerator m_GridShaderTable; // offset 0xA8, size 0x8
    class UIStringGenerator m_MotiveShaderTable; // offset 0xB0, size 0x8
    class UIStringGenerator m_TabShaderTable; // offset 0xB8, size 0x8
    unsigned char m_bInitialized; // offset 0xC0, size 0x1
    unsigned int m_ControllerFilterID0; // offset 0xC4, size 0x4
    class HelpDialog m_HelpDialog; // offset 0xC8, size 0xA8
    unsigned long m_HelpIndex; // offset 0x170, size 0x4
    unsigned long m_CurrentCellIndex; // offset 0x174, size 0x4
    enum NV5_InventoryTabEnum m_CurrentTab; // offset 0x178, size 0x4
    enum NV5ToolMode m_ToolMode; // offset 0x17C, size 0x4
    unsigned char m_Use3DShader; // offset 0x180, size 0x1
    unsigned char m_bFlashFlowForward; // offset 0x181, size 0x1
    class UIInventoryManager m_InventoryManager; // offset 0x184, size 0xC4
    class NV5InteractorManager m_InteractorManager; // offset 0x248, size 0x158
    class FireMarshall m_FireMarshall; // offset 0x3A0, size 0xA8
    int m_MotiveIDs[3]; // offset 0x448, size 0xC
    int m_MotiveValues[3]; // offset 0x454, size 0xC
private:
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x460, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x490, size 0x50
    class EVec2 m_CursorPoint; // offset 0x4E0, size 0x8
    unsigned char m_simMale; // offset 0x4E8, size 0x1
    unsigned char m_simOnWater; // offset 0x4E9, size 0x1
    unsigned char m_bInToolMode; // offset 0x4EA, size 0x1
};
class vector JobNameList; // size: 0x10, address: 0x80493038
class vector JobControlNameList; // size: 0x10, address: 0x80493058
// total size: 0xC
struct {} __vt__8AutoFood; // size: 0xC, address: 0x8042EB78
// total size: 0x14
struct {} __vt__33SimpleReconObject<12ObjectModule>; // size: 0x14, address: 0x8042EB84
// total size: 0x14
struct {} __vt__33SimpleReconObject<12ObjectFolder>; // size: 0x14, address: 0x8042EB98
// total size: 0x14
struct {} __vt__40SimpleReconObject<19ObjectSaveTypeTable>; // size: 0x14, address: 0x8042EBAC
// total size: 0x14
struct {} __vt__52SimpleReconObject<31ReconStreamPtrVector<8Neighbor>>; // size: 0x14, address: 0x8042EBE8
// total size: 0x14
struct {} __vt__33SimpleReconObject<12Neighborhood>; // size: 0x14, address: 0x8042EBFC
// total size: 0x14
struct {} __vt__21NeighborhoodConstants; // size: 0x14, address: 0x8042EC10
// total size: 0x14
struct {} __vt__21MotiveConstantsClient; // size: 0x14, address: 0x8042EC24
// total size: 0x14
struct {} __vt__21GlobalConstantsClient; // size: 0x14, address: 0x8042EC38
// total size: 0x90
struct {} __vt__12ClothingItem; // size: 0x90, address: 0x8042EC50
// total size: 0x88
struct {} __vt__11OwnableItem; // size: 0x88, address: 0x8042ECE0
// total size: 0x88
struct {} __vt__10ObjectItem; // size: 0x88, address: 0x8042ED68
// total size: 0x88
struct {} __vt__9TokenItem; // size: 0x88, address: 0x8042EDF0
// total size: 0x14
struct {} __vt__29SimpleReconObject<9IFFResMap>; // size: 0x14, address: 0x8042EE78
// total size: 0xA0
struct {} __vt__13IFFBehResFile; // size: 0xA0, address: 0x8042EE90
// total size: 0xA0
struct {} __vt__11IFFResFile2; // size: 0xA0, address: 0x8042EF30
// total size: 0x14
struct {} __vt__31SimpleReconObject<10cSimulator>; // size: 0x14, address: 0x8042EFD0
// total size: 0x14
struct {} __vt__25SimpleReconObject<5House>; // size: 0x14, address: 0x8042EFE4
// total size: 0x1C
struct {} __vt__5House; // size: 0x1C, address: 0x8042EFF8
// total size: 0x44
struct {} __vt__23FloatConstantsQuickData; // size: 0x44, address: 0x8042F014
// total size: 0x44
struct {} __vt__14FloatConstants; // size: 0x44, address: 0x8042F058
// total size: 0x14
struct {} __vt__15ConstantsClient; // size: 0x14, address: 0x8042F09C
// total size: 0x14
struct {} __vt__31SimpleReconObject<10FamilyImpl>; // size: 0x14, address: 0x8042F0B0
// total size: 0xD4
struct {} __vt__10FamilyImpl; // size: 0xD4, address: 0x8042F0C4
// total size: 0x88
struct {} __vt__13InventoryItem; // size: 0x88, address: 0x8042F198
// total size: 0xD4
struct {} __vt__6Family; // size: 0xD4, address: 0x8042F220
// total size: 0x18
struct {} __vt__20EdithDialogPrimitive; // size: 0x18, address: 0x8042F2F8
// total size: 0xF4
struct {} __vt__10cXMTObject; // size: 0xF4, address: 0x8042F310
// total size: 0x1C
struct {} __vt__19CatalogResourceImpl; // size: 0x1C, address: 0x8042F404
// total size: 0x1C
struct {} __vt__15CatalogResource; // size: 0x1C, address: 0x8042F420
// total size: 0x98
struct {} __vt__12ChainResFile; // size: 0x98, address: 0x8042F440
// total size: 0x10
struct {} __vt__12Neighborhood; // size: 0x10, address: 0x8042F4D8
// total size: 0x60
struct {} __vt__10GoalUnlock; // size: 0x60, address: 0x8042F4E8
// total size: 0x5C
struct {} __vt__11IGoalUnlock; // size: 0x5C, address: 0x8042F548
// total size: 0x94
struct {} __vt__10NghResFile; // size: 0x94, address: 0x8042F5A4
// total size: 0xC
struct {} __vt__23ENeighborhoodCustomChar; // size: 0xC, address: 0x8042F638
// total size: 0x14
struct {} __vt__11Interaction; // size: 0x14, address: 0x8042F644
// total size: 0x20
struct {} __vt__13AnimTableImpl; // size: 0x20, address: 0x8042F658
// total size: 0x24
struct {} __vt__12ObjectFolder; // size: 0x24, address: 0x8042F684
// total size: 0xC
struct {} __vt__14BehaviorFinder; // size: 0xC, address: 0x8042F6A8
// total size: 0x2C
struct {} __vt__11IFFBehavior; // size: 0x2C, address: 0x8042F6B4
// total size: 0x2C
struct {} __vt__16ResourceBehavior; // size: 0x2C, address: 0x8042F6E0
// total size: 0x2C
struct {} __vt__8Behavior; // size: 0x2C, address: 0x8042F70C
// total size: 0x20
struct {} __vt__9AnimTable; // size: 0x20, address: 0x8042F738
// total size: 0x1C
struct {} __vt__9cGZSndSys; // size: 0x1C, address: 0x8042F758
// total size: 0x54
struct {} __vt__8cGZMusic; // size: 0x54, address: 0x8042F774
// total size: 0x54
struct {} __vt__6cGZSnd; // size: 0x54, address: 0x8042F7C8
// total size: 0x10
struct {} __vt__5cBoxX; // size: 0x10, address: 0x8042F820
// total size: 0xE8
struct {} __vt__8cXObject; // size: 0xE8, address: 0x8042F830
// total size: 0x10
struct {} __vt__12ObjectModule; // size: 0x10, address: 0x8042F918
// total size: 0x10
struct {} __vt__9Commander; // size: 0x10, address: 0x8042F970
// total size: 0x1C
struct {} __vt__10cIGZSndSys; // size: 0x1C, address: 0x8042F980
// total size: 0x50
struct {} __vt__7cIGZSnd; // size: 0x50, address: 0x8042F9A0
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct ListenerInfo * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    const class ERAmbientSound * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ObjectTypeAttrBlock * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class PenaltyRect * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct RegistryNode * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ObjSelector * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class InventoryItem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ClothingItem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class cGZSnd * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class IFFResList * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct OwnerInfo * mIterator; // offset 0x0, size 0x4
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
    class byte_key_map * mpBegin; // offset 0x0, size 0x4
    class byte_key_map * mpEnd; // offset 0x4, size 0x4
    class byte_key_map * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class byte_key_map * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct use_first {};
// total size: 0xC
struct pair {
    // Members
    struct hashtable_iterator first; // offset 0x0, size 0x8
    unsigned char second; // offset 0x8, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    unsigned char first; // offset 0x0, size 0x1
    unsigned int second; // offset 0x4, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x1C
struct _loc_coll_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    int char_start_value; // offset 0x8, size 0x4
    int char_coll_tab_size; // offset 0xC, size 0x4
    signed short char_spec_accents; // offset 0x10, size 0x2
    unsigned short * char_coll_table_ptr; // offset 0x14, size 0x4
    unsigned short * wchar_coll_seq_ptr; // offset 0x18, size 0x4
};
// total size: 0x28
struct _loc_ctype_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    const unsigned short * ctype_map_ptr; // offset 0x8, size 0x4
    const unsigned char * upper_map_ptr; // offset 0xC, size 0x4
    const unsigned char * lower_map_ptr; // offset 0x10, size 0x4
    const unsigned short * wctype_map_ptr; // offset 0x14, size 0x4
    const unsigned short * wupper_map_ptr; // offset 0x18, size 0x4
    const unsigned short * wlower_map_ptr; // offset 0x1C, size 0x4
    int (* decode_mb)(unsigned short *, char *, unsigned long); // offset 0x20, size 0x4
    int (* encode_wc)(char *, unsigned short); // offset 0x24, size 0x4
};
// total size: 0x34
struct _loc_mon_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * mon_decimal_point; // offset 0x8, size 0x4
    char * mon_thousands_sep; // offset 0xC, size 0x4
    char * mon_grouping; // offset 0x10, size 0x4
    char * positive_sign; // offset 0x14, size 0x4
    char * negative_sign; // offset 0x18, size 0x4
    char * currency_symbol; // offset 0x1C, size 0x4
    char frac_digits; // offset 0x20, size 0x1
    char p_cs_precedes; // offset 0x21, size 0x1
    char n_cs_precedes; // offset 0x22, size 0x1
    char p_sep_by_space; // offset 0x23, size 0x1
    char n_sep_by_space; // offset 0x24, size 0x1
    char p_sign_posn; // offset 0x25, size 0x1
    char n_sign_posn; // offset 0x26, size 0x1
    char * int_curr_symbol; // offset 0x28, size 0x4
    char int_frac_digits; // offset 0x2C, size 0x1
    char int_p_cs_precedes; // offset 0x2D, size 0x1
    char int_n_cs_precedes; // offset 0x2E, size 0x1
    char int_p_sep_by_space; // offset 0x2F, size 0x1
    char int_n_sep_by_space; // offset 0x30, size 0x1
    char int_p_sign_posn; // offset 0x31, size 0x1
    char int_n_sign_posn; // offset 0x32, size 0x1
};
// total size: 0x14
struct _loc_num_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * decimal_point; // offset 0x8, size 0x4
    char * thousands_sep; // offset 0xC, size 0x4
    char * grouping; // offset 0x10, size 0x4
};
// total size: 0x28
struct _loc_time_cmpt {
    // Members
    char CmptName[8]; // offset 0x0, size 0x8
    char * am_pm; // offset 0x8, size 0x4
    char * DateTime_Format; // offset 0xC, size 0x4
    char * Twelve_hr_format; // offset 0x10, size 0x4
    char * Date_Format; // offset 0x14, size 0x4
    char * Time_Format; // offset 0x18, size 0x4
    char * Day_Names; // offset 0x1C, size 0x4
    char * MonthNames; // offset 0x20, size 0x4
    char * TimeZone; // offset 0x24, size 0x4
};
// total size: 0x48
struct __locale {
    // Members
    struct __locale * next_locale; // offset 0x0, size 0x4
    char locale_name[48]; // offset 0x4, size 0x30
    struct _loc_coll_cmpt * coll_cmpt_ptr; // offset 0x34, size 0x4
    struct _loc_ctype_cmpt * ctype_cmpt_ptr; // offset 0x38, size 0x4
    struct _loc_mon_cmpt * mon_cmpt_ptr; // offset 0x3C, size 0x4
    struct _loc_num_cmpt * num_cmpt_ptr; // offset 0x40, size 0x4
    struct _loc_time_cmpt * time_cmpt_ptr; // offset 0x44, size 0x4
};
struct __locale _current_locale; // size: 0x48, address: 0x8048B980
// total size: 0xC
struct EResLoadCmdResult {
    // Members
    unsigned char bFinished; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
    unsigned int uLength; // offset 0x8, size 0x4
};
// total size: 0x4
class EResourceLoader {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xD44
class ESoundEventManager : public EResourceManager {};
// total size: 0x30
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, struct OSContext *); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
    void * userData; // offset 0x28, size 0x4
};
// total size: 0x88
class ENgcAudio : public EAudio {
    // Static members
    static void (* m_fpAudioFrameCB)(); // size: 0x4

    // Members
    float m_NgcVolume; // offset 0x4, size 0x4
    float m_NgcPan; // offset 0x8, size 0x4
    unsigned char m_bMusicPaused; // offset 0xC, size 0x1
    struct OSAlarm m_AudioAlarm; // offset 0x10, size 0x30
    unsigned char m_bPausedDueToDiskError; // offset 0x40, size 0x1
    void (* m_discErrorCallback)(unsigned char); // offset 0x44, size 0x4
    class EMutex m_streamAccessMutex; // offset 0x48, size 0x1C
    class EMutex m_voiceAccessMutex; // offset 0x64, size 0x1C
    void (* m_fpAudioUpdateCB)(class ENgcAudio *); // offset 0x80, size 0x4
};

