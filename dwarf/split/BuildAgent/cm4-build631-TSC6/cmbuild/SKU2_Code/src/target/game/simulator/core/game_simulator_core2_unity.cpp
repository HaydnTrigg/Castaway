/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\game_simulator_core2_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A1178 -> 0x800A1178
*/
// total size: 0xC
class ObjectTypeAttrBlock {
    // Members
    int fGUID; // offset 0x0, size 0x4
    int fNumAttr; // offset 0x4, size 0x4
    signed short * fAttr; // offset 0x8, size 0x4
};
// total size: 0x90
struct ObjFnData {
    // Members
    int resID; // offset 0x0, size 0x4
    signed short fTreeID[35]; // offset 0x4, size 0x46
    signed short fCheckTreeID[35]; // offset 0x4A, size 0x46
};
// total size: 0x18
class ObjFnTableQuickData : public ObjFnTable {
    // Members
    class ObjectDataID mDataID; // offset 0x4, size 0x8
    const struct ObjFnData * m_pFunction; // offset 0xC, size 0x4
    struct ObjFnData * m_pRTFunction; // offset 0x10, size 0x4
    unsigned int mRefCount; // offset 0x14, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct ObjFnData * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct ObjDefinition * * pData; // offset 0x0, size 0x4
};
// total size: 0x4
struct AnimRefName {
    // Members
    struct AnimRef * animName; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct AnimRefName * * pData; // offset 0x0, size 0x4
};
// total size: 0x8
struct AnimRefTable {
    // Members
    class VECTOR animNames; // offset 0x0, size 0x4
    signed short resID; // offset 0x4, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct AnimRefTable * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    class ELocString * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct WStringSet : public VECTOR {
    // Members
    int resType; // offset 0x4, size 0x4
    signed short resID; // offset 0x8, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct WStringSet * pData; // offset 0x0, size 0x4
};
// total size: 0x10
struct CatalogData {
    // Members
    int resID; // offset 0x0, size 0x4
    class ELocString name; // offset 0x4, size 0x4
    class ELocString description; // offset 0x8, size 0x4
    class ELocString shortName; // offset 0xC, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct CatalogData * pData; // offset 0x0, size 0x4
};
// total size: 0x8
struct BehaviorConstantValue {
    // Members
    signed short value; // offset 0x0, size 0x2
    char * name; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BehaviorConstantValue * pData; // offset 0x0, size 0x4
};
// total size: 0x10
struct BehaviorConstants {
    // Members
    int resID; // offset 0x0, size 0x4
    class VECTOR values; // offset 0x4, size 0x4
    char * setName; // offset 0x8, size 0x4
    unsigned char isTunable; // offset 0xC, size 0x1
};
// total size: 0x4
class VECTOR {
    // Members
    struct BehaviorConstants * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    class TreeTable * pData; // offset 0x0, size 0x4
};
// total size: 0x8
struct FloatConstantItem {
    // Members
    float fValue; // offset 0x0, size 0x4
    const char * fName; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct FloatConstantItem * pData; // offset 0x0, size 0x4
};
// total size: 0x8
struct FloatConstantsData : public VECTOR {
    // Members
    int resID; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct FloatConstantsData * pData; // offset 0x0, size 0x4
};
// total size: 0x48
struct ResFile {
    // Members
    class VECTOR objDefinition; // offset 0x0, size 0x4
    class VECTOR animTables; // offset 0x4, size 0x4
    class VECTOR propTables; // offset 0x8, size 0x4
    unsigned int treeSetId; // offset 0xC, size 0x4
    class VECTOR stringSet; // offset 0x10, size 0x4
    class VECTOR locStringSet; // offset 0x14, size 0x4
    class VECTOR FWAV; // offset 0x18, size 0x4
    class VECTOR catalog; // offset 0x1C, size 0x4
    class VECTOR BCON; // offset 0x20, size 0x4
    class VECTOR TTAB; // offset 0x24, size 0x4
    class VECTOR SLOT; // offset 0x28, size 0x4
    class VECTOR OBJf; // offset 0x2C, size 0x4
    class VECTOR FCNS; // offset 0x30, size 0x4
    struct ResFile * semiGlobFile; // offset 0x34, size 0x4
    const char * pNPCBodyType; // offset 0x38, size 0x4
    unsigned int uAnimMemCost; // offset 0x3C, size 0x4
    unsigned int uPropMemCost; // offset 0x40, size 0x4
    unsigned int datasetID_unused; // offset 0x44, size 0x4
};
// total size: 0x184
class ObjResFile : public StdResFile {};
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041B4B8
// total size: 0x4
class CatalogResource {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
static class BString2 empty; // size: 0x4, address: 0x805DB7B4
static class BString2 empty; // size: 0x4, address: 0x805DB7BC
// total size: 0x18
struct RelationshipTable {
    // Members
    int simGUID; // offset 0x0, size 0x4
    unsigned int smallHead; // offset 0x4, size 0x4
    unsigned int largeHead; // offset 0x8, size 0x4
    class ELocString description; // offset 0xC, size 0x4
    class ELocString firstName; // offset 0x10, size 0x4
    class ELocString lastName; // offset 0x14, size 0x4
};
// total size: 0x4
class ThumbnailLoader {
    // Members
    class ObjSelector * const m_pSelector; // offset 0x0, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ThumbnailLoader * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x11C
class TTabScratchEntry : public ITreeTableEntry {
    // Members
    signed short fCheckTreeID; // offset 0x4, size 0x2
    signed short fActionTreeID; // offset 0x6, size 0x2
    class TreeTableAdScratch fAds[16]; // offset 0x8, size 0x100
    enum Attenuation fAttenuation; // offset 0x108, size 0x4
    float fAttenuationVal; // offset 0x10C, size 0x4
    signed short fFlags; // offset 0x110, size 0x2
    signed short fIndex; // offset 0x112, size 0x2
    signed short fMinAutonomy; // offset 0x114, size 0x2
    signed short fJoinIndex; // offset 0x116, size 0x2
    unsigned int mRefCount; // offset 0x118, size 0x4
};
class TTabScratchEntry sCheckTreeAds; // size: 0x11C, address: 0x80491C10
class TTabScratchEntry * sCheckTreeModEntry; // size: 0x4, address: 0x805D86E4
class ObjTestSim * sMenuBuilder; // size: 0x4, address: 0x805DB7C0
class InteractionList * sMenu; // size: 0x4, address: 0x805DB7C4
class Interaction * sInteraction; // size: 0x4, address: 0x805DB7C8
// total size: 0xE4
class MotiveCurveArray : public MotiveCurveSet {
    // Members
    class MotiveCurve fCurveArray[11]; // offset 0x8, size 0xDC
};
// total size: 0xEC
class MotiveEffects : public MotiveCurveArray {
    // Members
    class cXPerson * fPerson; // offset 0xE4, size 0x4
    class Motives * fMotives; // offset 0xE8, size 0x4
};
class PassiveInfluenceMap * s_passiveInfluenceMap; // size: 0x4, address: 0x805DB7CC
class PassiveInfluenceSystem * s_passiveInfluenceSystem; // size: 0x4, address: 0x805DB7D0
class vector m_TileVector; // size: 0x10, address: 0x80491D38
class vector m_TileVector; // size: 0x10, address: 0x80491D58
signed short lotToDisplayTextFor; // size: 0x2, address: 0x805DB7D4
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
    class PassiveInfluenceItem * * mpBegin; // offset 0x0, size 0x4
    class PassiveInfluenceItem * * mpEnd; // offset 0x4, size 0x4
    class PassiveInfluenceItem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct TilePt * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class PassiveInfluenceItem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class PassiveInfluencePortal * mValue; // offset 0x8, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class PassiveInfluenceMovable * mValue; // offset 0x8, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class PassiveInfluenceObject * mValue; // offset 0x8, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class PassiveInfluencePerson * mValue; // offset 0x8, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct TypedMotiveInc * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class PassiveInfluenceTarget * mValue; // offset 0x8, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
static int s_activeDuckPri; // size: 0x4, address: 0x805DB7D8
class cHitMan * g_pHitMan; // size: 0x4, address: 0x805DB7DC
unsigned char s_superDuckEnabled; // size: 0x1, address: 0x805DB7E0
unsigned char s_maxSfxDuckPri; // size: 0x1, address: 0x805DB7E1
unsigned char s_maxVoxDuckPri; // size: 0x1, address: 0x805DB7E2
unsigned char s_maxMusicDuckPri; // size: 0x1, address: 0x805DB7E3
float g_musicMinVolume; // size: 0x4, address: 0x805D86EC
// total size: 0x8
class TrackDataReader {
    // Members
    class ERSoundTrackData * m_trackData; // offset 0x0, size 0x4
    unsigned int m_index; // offset 0x4, size 0x4
};
// total size: 0x4
struct SndRegInst {
    // Members
    signed char m_cmd; // offset 0x0, size 0x1
    signed char m_reg1; // offset 0x1, size 0x1
    signed char m_reg2; // offset 0x2, size 0x1
    signed char m_reg3; // offset 0x3, size 0x1
};
// total size: 0x4
struct SndRegValInst {
    // Members
    signed char m_cmd; // offset 0x0, size 0x1
    signed char m_reg1; // offset 0x1, size 0x1
    unsigned short m_val; // offset 0x2, size 0x2
};
union SndInstruction {
    struct SndRegInst m_reg; // offset 0x0, size 0x4
    struct SndRegValInst m_regVal; // offset 0x0, size 0x4
};
static union SndInstruction nopInst; // size: 0x4, address: 0x805DB7E4
// total size: 0x24
class ERSoundTrackData : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class vector m_prog; // offset 0x14, size 0x10
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
    union SndInstruction * mpBegin; // offset 0x0, size 0x4
    union SndInstruction * mpEnd; // offset 0x4, size 0x4
    union SndInstruction * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x8C
class cTrack {
    // Static members
    static unsigned char s_maxMusicDuckPri; // size: 0x1
    static unsigned char s_maxVoxDuckPri; // size: 0x1
    static unsigned char s_maxSfxDuckPri; // size: 0x1
    static unsigned char s_superDuckEnabled; // size: 0x1

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class ERSoundEvent * m_soundEvent; // offset 0x4, size 0x4
    int m_lSource; // offset 0x8, size 0x4
    unsigned char m_bIsPaused; // offset 0xC, size 0x1
    class cSamplePatch * m_pCurrentPatch; // offset 0x10, size 0x4
    class TArray * m_pCurrentList; // offset 0x14, size 0x4
    unsigned int m_lTimeNextCommand; // offset 0x18, size 0x4
    class TrackDataReader m_tdrPlayPos; // offset 0x1C, size 0x8
    class TrackDataReader m_tdrLoopPos; // offset 0x24, size 0x8
    class TrackDataReader m_tdrCurrentInstructionPos; // offset 0x2C, size 0x8
    unsigned char m_bIsPlaying; // offset 0x34, size 0x1
    int m_lPauseRefs; // offset 0x38, size 0x4
    unsigned char m_bCompareFlagEqual; // offset 0x3C, size 0x1
    unsigned char m_bCompareFlagGreater; // offset 0x3D, size 0x1
    unsigned char m_bCompareFlagLess; // offset 0x3E, size 0x1
public:
    unsigned char m_isFootStep; // offset 0x3F, size 0x1
private:
    int m_lLastChooseValue; // offset 0x40, size 0x4
    float m_timeToPlayAt; // offset 0x44, size 0x4
    class cSampleChannel * m_pChannel; // offset 0x48, size 0x4
    int m_regs[8]; // offset 0x4C, size 0x20
    int m_lVolume; // offset 0x6C, size 0x4
    int m_lPan; // offset 0x70, size 0x4
    struct SndEvtHitPatch * m_lPatchId; // offset 0x74, size 0x4
    int m_fadeOn; // offset 0x78, size 0x4
    int m_killAfterFade; // offset 0x7C, size 0x4
    int m_fadeVar; // offset 0x80, size 0x4
    int m_fadeDest; // offset 0x84, size 0x4
    int m_fadeSpeed; // offset 0x88, size 0x4
};
// total size: 0x1088
class cHitMan {
    // Members
protected:
    class list m_TrackUpdateList; // offset 0x0, size 0xC
    struct ListIterator m_itUpdate; // offset 0xC, size 0x4
    class cHitTimer m_Timer; // offset 0x10, size 0x8
    unsigned char m_bCallbackEnabled; // offset 0x18, size 0x1
    class map m_ControlGroupMap; // offset 0x1C, size 0x1C
    unsigned char (* m_pfnHandleSourceDataFieldRequest)(int, int, int *); // offset 0x38, size 0x4
    class map m_DuckMap; // offset 0x3C, size 0x1C
    class cSoundCache * m_pSoundCache; // offset 0x58, size 0x4
    class ERSoundEvent * m_alSequenceGroupTrackId[1035]; // offset 0x5C, size 0x102C
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
class map : public rbtree {};
// total size: 0x8
struct pair {
    // Members
    int first; // offset 0x0, size 0x4
    class cHitControlGroup * second; // offset 0x4, size 0x4
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
// total size: 0x8
class cHitControlGroup {
    // Members
protected:
    int m_lControlGroupId; // offset 0x0, size 0x4
    int m_lVolume; // offset 0x4, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0xC
class list : public ListBase {};
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
// total size: 0xC
class ListBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4

    // Members
protected:
    struct ListNodeBase mNode; // offset 0x0, size 0x8
    class allocator mAllocator; // offset 0x8, size 0x1
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
class cHitTimer {
    // Members
protected:
    unsigned char m_bRunning; // offset 0x0, size 0x1
    unsigned int m_lElapsed; // offset 0x4, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class cTrack * mValue; // offset 0x8, size 0x4
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
// total size: 0x8
struct pair {
    // Members
    class cTrack * const first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x8
struct SndEvtHitPatch {
    // Members
    unsigned int m_musicID; // offset 0x0, size 0x4
    unsigned int m_sampleID; // offset 0x4, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    struct SndEvtHitPatch * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class cSamplePatch {
    // Members
protected:
    class cSampleChannel * m_pDefaultChannel; // offset 0x0, size 0x4
    unsigned int m_sampleID; // offset 0x4, size 0x4
    unsigned int m_musicID; // offset 0x8, size 0x4
    int m_isLooped; // offset 0xC, size 0x4
public:
    float m_timeToPlayAt; // offset 0x10, size 0x4
    unsigned char m_isFootStep; // offset 0x14, size 0x1
    class cIGZSnd * m_pSnd; // offset 0x18, size 0x4
};
// total size: 0x8
class cSampleChannel {
    // Members
protected:
    class cSamplePatch * m_pPatch; // offset 0x0, size 0x4
    class cIGZSnd * m_pSnd; // offset 0x4, size 0x4
};
// total size: 0x104
class cSoundCache {
    // Members
    class cTrack * m_vTracks[64]; // offset 0x0, size 0x100
    int m_iTrackHead; // offset 0x100, size 0x4
};
// total size: 0x1C
class multimap : public rbtree {};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    struct rbtree_iterator second; // offset 0x4, size 0x4
};
static float kMaxCheckTreesToRunInOneTick; // size: 0x4, address: 0x805DD548
int s_nNumRoutedThisFrame; // size: 0x4, address: 0x805DB7E8
class Queue s_RoutingQueue; // size: 0x68, address: 0x80491D68
int s_nNumTrappedThisFrame; // size: 0x4, address: 0x805DB7EC
class Queue s_TrappedQueue; // size: 0x68, address: 0x80491DD0
class CCollisionGrid * m_sCollisionGrid; // size: 0x4, address: 0x805DB7F0
float gMinAutonomyFamilyScore; // size: 0x4, address: 0x805D86F8
float gMinAutonomyVisitorScore; // size: 0x4, address: 0x805D86FC
float gMinAutonomySittingScore; // size: 0x4, address: 0x805D8700
int gInteractionRandCount; // size: 0x4, address: 0x805D8704
float gFunctionalScoreDistanceAttenuation; // size: 0x4, address: 0x805D8708
unsigned char sUseScalingInteractionRange; // size: 0x1, address: 0x805D870C
unsigned char sDumpTFBA; // size: 0x1, address: 0x805DB7F4
signed short sDumpTFBACount; // size: 0x2, address: 0x805D870E
unsigned char sbAllowingCheckTreeAds; // size: 0x1, address: 0x805DB7F5
unsigned char sMoodCurvesSetup; // size: 0x1, address: 0x805DB7F6
// total size: 0xD0
class MotiveCurveArray : public MotiveCurveSet {
    // Members
    class MotiveCurve fCurveArray[10]; // offset 0x8, size 0xC8
};
class MotiveCurveArray sAdultMoodWeightCurves; // size: 0xD0, address: 0x80491E48
class MotiveCurveArray sChimpMoodWeightCurves; // size: 0xD0, address: 0x80491F28
class MotiveCurveArray sBoarMoodWeightCurves; // size: 0xD0, address: 0x80492008
// total size: 0x4
class ConstantsClient {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class GlobalConstantsClient : public ConstantsClient {
    // Members
    signed short fID; // offset 0x4, size 0x2
};
// total size: 0x8
class AutonomyConstantsClient : public GlobalConstantsClient {};
static class AutonomyConstantsClient sTheAutonomyClient; // size: 0x8, address: 0x805DB7F8
static unsigned char sAutonomyConstantsLoaded; // size: 0x1, address: 0x805DB800
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class FloatConstants * mpData; // offset 0x0, size 0x4
};
// total size: 0x14
struct IngredientType {
    // Members
    signed short m_ID; // offset 0x0, size 0x2
    signed short m_Dummy1; // offset 0x2, size 0x2
    class ELocString m_Name; // offset 0x4, size 0x4
    unsigned int m_IconID; // offset 0x8, size 0x4
    unsigned int m_UnselectedIconID; // offset 0xC, size 0x4
    int m_Dummy2; // offset 0x10, size 0x4
};
// total size: 0x44
struct IngredientToken {
    // Members
    signed short m_ID; // offset 0x0, size 0x2
    signed short m_Cost; // offset 0x2, size 0x2
    struct IngredientType * m_Type; // offset 0x4, size 0x4
    struct CatalogToken * m_CatalogToken; // offset 0x8, size 0x4
    int m_HungerModifier; // offset 0xC, size 0x4
    int m_EnergyModifier; // offset 0x10, size 0x4
    int m_FunModifier; // offset 0x14, size 0x4
    int m_BladderModifier; // offset 0x18, size 0x4
    int m_UnlockLevel; // offset 0x1C, size 0x4
    int m_FoodComaEffect; // offset 0x20, size 0x4
    int m_HealthyEffect; // offset 0x24, size 0x4
    int m_DiureticEffect; // offset 0x28, size 0x4
    int m_NauseaEffect; // offset 0x2C, size 0x4
    int m_AphrodesiacEffect; // offset 0x30, size 0x4
    int m_StoreAvailability; // offset 0x34, size 0x4
    int m_FoodColor; // offset 0x38, size 0x4
    int m_Reserved3; // offset 0x3C, size 0x4
    int m_Reserved4; // offset 0x40, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct RouteGoal * mIterator; // offset 0x0, size 0x4
};
static class vector consider; // size: 0x10, address: 0x804920E8
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class StringSet * mpData; // offset 0x0, size 0x4
};
enum BalloonType {
    kBalloonThought = 0,
    kBalloonScream = 1,
    kBalloonSpeak = 2,
    kBalloonNone = 3,
};
// total size: 0xC
class IconGroup {
    // Members
    int fGroup; // offset 0x0, size 0x4
    class ConsoleAutoRefCount fStrings; // offset 0x4, size 0x4
    struct IconIDMap * fMap; // offset 0x8, size 0x4
};
static class Interaction * sImmediateAction; // size: 0x4, address: 0x805DB804
static class cXPerson * sImmediatePerson; // size: 0x4, address: 0x805DB808
static class Interaction s_emptyCurrentInteraction; // size: 0x40, address: 0x80492108
// total size: 0x4
class AUTOPTR {
    // Members
    class PropTable * m_ptr; // offset 0x0, size 0x4
};
static int checkTreeCount; // size: 0x4, address: 0x805DB80C
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x14
class EGameStateMan {
    // Members
    class NLIteratorPtrType * m_nliCurGame; // offset 0x0, size 0x4
    class TNodeList m_gameStateList; // offset 0x4, size 0xC
protected:
    class EGameStateId m_NextState; // offset 0x10, size 0x4
};
// total size: 0xC
class EGameState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class EGameStateId m_state; // offset 0x4, size 0x4
    class EGameStateMan * m_pStateMan; // offset 0x8, size 0x4
};
enum IntroCameraStartState {
    INTROCAMERA_NONE = 0,
    INTROCAMERA_TRIGGERED = 1,
    INTROCAMERA_WAITTOSTART = 2,
    INTROCAMERA_STARTED = 3,
    INTROCAMERA_WAITFOREDITHCAM = 4,
    INTROCAMERA_INTERPTOGAME = 5,
    INTROCAMERA_INTOGAME = 6,
};
// total size: 0x24
class ELiveMode : public EGameState {
    // Members
public:
    enum IntroCameraStartState m_introCameraState; // offset 0xC, size 0x4
    float m_waitTimer; // offset 0x10, size 0x4
    unsigned char m_bStoryModeIntroScreenUp; // offset 0x14, size 0x1
    unsigned char m_bAskingToSave; // offset 0x15, size 0x1
    unsigned char m_bGoingToNeighborhoodMode; // offset 0x16, size 0x1
    unsigned char m_bSettingUp; // offset 0x17, size 0x1
protected:
    unsigned char m_bInitialized; // offset 0x18, size 0x1
    unsigned char m_bDontDraw; // offset 0x19, size 0x1
    unsigned char m_BackgroundColorSet; // offset 0x1A, size 0x1
    class ERShader * m_p2PlayerDivShad; // offset 0x1C, size 0x4
private:
    int m_currIntoCameraLevel; // offset 0x20, size 0x4
};
enum tCheckTreeStatus$57559game_simulator_core2_unity_cpp {
    kCheckTreeNotTested = 0,
    kCheckTreePassed = 1,
    kCheckTreeFailed = 2,
};
// total size: 0x20
struct ListNode : public ListNodeBase {
    // Members
    struct ScoredInteraction mValue; // offset 0x8, size 0x18
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x14
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x4
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct pair {
    // Members
    signed short first; // offset 0x0, size 0x2
    unsigned char second; // offset 0x2, size 0x1
};
// total size: 0x1
struct less : public binary_function {};
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
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x8
class UIStringGenerator {
    // Members
protected:
    char * * m_Strings; // offset 0x0, size 0x4
    int m_NumStrings; // offset 0x4, size 0x4
};
enum eKFTType {
    eKFTType_none = 0,
    eKFTType_shelter = 1,
    eKFTType_clothingGroup = 2,
    eKFTType_tools = 3,
    eKFTType_hut = 4,
    eKFTType_first_shelter = 4,
    eKFTType_wallSegment = 5,
    eKFTType_last_shelter = 5,
    eKFTType_wall = 6,
    eKFTType_door = 7,
    eKFTType_window = 8,
    eKFTType_roof = 9,
    eKFTType_seating = 10,
    eKFTType_first_objects = 10,
    eKFTType_beds = 11,
    eKFTType_lighting = 12,
    eKFTType_surface = 13,
    eKFTType_plumbing = 14,
    eKFTType_leisure = 15,
    eKFTType_otherPlans = 16,
    eKFTType_firepit_stove = 17,
    eKFTType_last_objects = 17,
    eKFTType_hats = 18,
    eKFTType_first_clothing = 18,
    eKFTType_glasses = 19,
    eKFTType_shirts = 20,
    eKFTType_pants = 21,
    eKFTType_shoes = 22,
    eKFTType_arm = 23,
    eKFTType_waist = 24,
    eKFTType_jewelry = 25,
    eKFTType_last_clothing = 25,
    eKFTType_forge = 26,
    eKFTType_first_crafting_bench = 26,
    eKFTType_benchRock = 27,
    eKFTType_bench1 = 28,
    eKFTType_bench2 = 29,
    eKFTType_hitchingPostRaft = 30,
    eKFTType_hitchingPostCanoe = 31,
    eKFTType_hitchingPostCatamaran = 32,
    eKFTType_ropeBridge = 33,
    eKFTType_last_crafting_bench = 33,
    eKFTType_cardinal = 34,
};
// total size: 0x14
struct KFTResourceRecord {
    // Members
    unsigned int shaderId; // offset 0x0, size 0x4
    class BString2 name; // offset 0x4, size 0x4
    int haveCount; // offset 0x8, size 0x4
    int needCount; // offset 0xC, size 0x4
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x10
struct KFTPlaceToolSkillRecord {
    // Members
    unsigned int shaderId; // offset 0x0, size 0x4
    class BString2 name; // offset 0x4, size 0x4
    unsigned char satisfied; // offset 0x8, size 0x1
    void * __vptr$; // offset 0xC, size 0x4
};
// total size: 0x58
struct KFTRecord {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    struct KFTResourceRecord * resources[5]; // offset 0x4, size 0x14
    struct KFTPlaceToolSkillRecord * PTSs[3]; // offset 0x18, size 0xC
    signed short id; // offset 0x24, size 0x2
    signed short type; // offset 0x26, size 0x2
    int guid; // offset 0x28, size 0x4
    unsigned int shaderId; // offset 0x2C, size 0x4
    unsigned int largeShaderId; // offset 0x30, size 0x4
    class BString2 name; // offset 0x34, size 0x4
    class BString2 description; // offset 0x38, size 0x4
    int motives[3]; // offset 0x3C, size 0xC
    class BString2 motiveBenefit[3]; // offset 0x48, size 0xC
    unsigned char bNew; // offset 0x54, size 0x1
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
    struct KFTRecord * * mpBegin; // offset 0x0, size 0x4
    struct KFTRecord * * mpEnd; // offset 0x4, size 0x4
    struct KFTRecord * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum eBBHMode {
    eBBHMode_Place = 0,
    eBBHMode_HutPlace = 1,
    eBBHMode_Grab = 2,
    eBBHMode_Wall = 3,
    eBBHMode_Floor = 4,
    eBBHMode_Wallpaper = 5,
    eBBHMode_Wall_Remove = 6,
    eBBHMode_Floor_Remove = 7,
    eBBHMode_Wallpaper_Remove = 8,
    eBBHMode_Clone = 9,
    eBBHMode_COUNT = 10,
};
// total size: 0x10
struct BBHPriceInfo {
    // Members
    int value; // offset 0x0, size 0x4
    int count; // offset 0x4, size 0x4
    int unitValue; // offset 0x8, size 0x4
    unsigned char toolActive; // offset 0xC, size 0x1
};
// total size: 0xE4
class BBHTarget : public UIObjectBase {
    // Members
    unsigned char m_BBHLoaded; // offset 0xA4, size 0x1
    unsigned char m_BBHActive; // offset 0xA5, size 0x1
    unsigned char m_tweenActive; // offset 0xA6, size 0x1
    unsigned char m_displayState; // offset 0xA7, size 0x1
    unsigned char m_recalculateLotValue; // offset 0xA8, size 0x1
    int m_currentPrice; // offset 0xAC, size 0x4
    int m_currentCount; // offset 0xB0, size 0x4
    int m_currentUnitPrice; // offset 0xB4, size 0x4
    int m_toolActive; // offset 0xB8, size 0x4
    unsigned char m_sellMode; // offset 0xBC, size 0x1
    unsigned char m_inventoryMode; // offset 0xBD, size 0x1
    enum eBBHMode m_mode; // offset 0xC0, size 0x4
    enum eBBHMode m_next_mode; // offset 0xC4, size 0x4
    class FCMTarget * m_pFCMTarget; // offset 0xC8, size 0x4
    class UIReflow reflow; // offset 0xCC, size 0x18
};
enum eKFTIMToolMode {
    eKFTIMToolMode_objects = 0,
    eKFTIMToolMode_huts = 1,
};
// total size: 0x15C
class KFTInteractorManager {
    // Members
    class UIDialog m_UIDialog; // offset 0x0, size 0xA0
    class HelpDialog m_HelpDialog; // offset 0xA0, size 0xA8
    unsigned char m_bUIDialogExecuting; // offset 0x148, size 0x1
    struct KFTRecord * m_Item; // offset 0x14C, size 0x4
    class KFTTarget * m_pKFTTarget; // offset 0x150, size 0x4
    class BBHTarget * m_pBBHTarget; // offset 0x154, size 0x4
    float m_counterExitInteractionMode; // offset 0x158, size 0x4
};
// total size: 0x8
struct KFTModeShader {
    // Members
    enum eKFTType mode; // offset 0x0, size 0x4
    unsigned int shader; // offset 0x4, size 0x4
};
// total size: 0x18
struct HutData {
    // Members
    int planId; // offset 0x0, size 0x4
    int binaryGuid; // offset 0x4, size 0x4
    int placementObjectGuid; // offset 0x8, size 0x4
    int RAMCount; // offset 0xC, size 0x4
    int objectCount; // offset 0x10, size 0x4
    int nodesCount; // offset 0x14, size 0x4
};
// total size: 0x474
class KFTTarget : public UIObjectBase, public HelpDialogCallback {
    // Static members
    static int m_lastIndex; // size: 0x4
    static int m_lastMode; // size: 0x4
    static struct KFTModeShader ModeShaderTable[34]; // size: 0x110
    static struct HutData HutDataTable[39]; // size: 0x3A8
    static signed short m_planCrafted; // size: 0x2

    // Members
protected:
    class UIStringGenerator m_gridShaderTable; // offset 0xA8, size 0x8
    class UIStringGenerator m_resourceIconTable; // offset 0xB0, size 0x8
    class UIStringGenerator m_ptsIconTable; // offset 0xB8, size 0x8
    class UIStringGenerator m_motiveIconTable; // offset 0xC0, size 0x8
    class UIStringGenerator m_motiveValueTable; // offset 0xC8, size 0x8
    class UIStringGenerator m_resourceValueTable; // offset 0xD0, size 0x8
    class UIStringGenerator m_resourceColorTable; // offset 0xD8, size 0x8
    class UIStringGenerator m_resourceNameTable; // offset 0xE0, size 0x8
    class UIStringGenerator m_ptsColorTable; // offset 0xE8, size 0x8
    class UIStringGenerator m_ptsNameTable; // offset 0xF0, size 0x8
    unsigned int m_filterId; // offset 0xF8, size 0x4
    enum eKFTType m_mode; // offset 0xFC, size 0x4
    enum eKFTType m_object; // offset 0x100, size 0x4
    int m_currentCell; // offset 0x104, size 0x4
    class vector m_records; // offset 0x108, size 0x10
    class HelpDialog m_HelpDialog; // offset 0x118, size 0xA8
    unsigned long m_HelpIndex; // offset 0x1C0, size 0x4
    unsigned char m_bInToolMode; // offset 0x1C4, size 0x1
    class KFTInteractorManager m_InteractorManager; // offset 0x1C8, size 0x15C
    class FireMarshall m_FireMarshall; // offset 0x324, size 0xA8
    class UIObjectBase * m_parent; // offset 0x3CC, size 0x4
    int m_PrevCameraMode; // offset 0x3D0, size 0x4
    float m_PrevZoom; // offset 0x3D4, size 0x4
    float m_PrevTilt; // offset 0x3D8, size 0x4
    float m_PrevMinZoom; // offset 0x3DC, size 0x4
    float m_PrevMaxZoom; // offset 0x3E0, size 0x4
    float m_PrevMinTilt; // offset 0x3E4, size 0x4
    float m_PrevMaxTilt; // offset 0x3E8, size 0x4
private:
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x3EC, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x41C, size 0x50
    class EVec2 m_CursorPoint; // offset 0x46C, size 0x8
};
signed char sOldPersondataIndexArray[80]; // size: 0x50, address: 0x8042B588
const unsigned short * tempClothingName; // size: 0x4, address: 0x805D8720
const unsigned short * tempClothingDesc; // size: 0x4, address: 0x805D8724
class PlanManager * _pPlanManager; // size: 0x4, address: 0x805DB810
// total size: 0x5818
class PlanManager {
    // Static members
    static class PlanManager * _pPlanManager; // size: 0x4
    static unsigned char cheatIgnoreResources; // size: 0x1
    static unsigned char cheatIgnoreRequirements; // size: 0x1
    static unsigned char cheatShowAllPlans; // size: 0x1
    static int MAX_NUM_PLANS; // size: 0x4

    // Members
    class fixed_map statusMap; // offset 0x0, size 0x1F70
    class fixed_list unlockedPlans; // offset 0x1F70, size 0x12D8
    class fixed_list lockedPlans; // offset 0x3248, size 0x12D8
    class list unlockingShaders; // offset 0x4520, size 0xC
    int unlockingTimer; // offset 0x452C, size 0x4
    unsigned int displayedUnlockShader; // offset 0x4530, size 0x4
    class fixed_list filteredPlans; // offset 0x4534, size 0x12D8
    int currentFilter; // offset 0x580C, size 0x4
    int currentCraftObject; // offset 0x5810, size 0x4
    int currentList; // offset 0x5814, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    signed char * pData; // offset 0x0, size 0x4
};
// total size: 0x60
struct Plan {
    // Members
    signed short ID; // offset 0x0, size 0x2
    signed short type; // offset 0x2, size 0x2
    int GUID; // offset 0x4, size 0x4
    signed short tokenID; // offset 0x8, size 0x2
    signed short resourcePile; // offset 0xA, size 0x2
    struct CatalogToken * catalogRef; // offset 0xC, size 0x4
    signed short groupID; // offset 0x10, size 0x2
    unsigned short flags; // offset 0x12, size 0x2
    struct InventoryTokens * resource_0; // offset 0x14, size 0x4
    struct InventoryTokens * resource_1; // offset 0x18, size 0x4
    struct InventoryTokens * resource_2; // offset 0x1C, size 0x4
    struct InventoryTokens * resource_3; // offset 0x20, size 0x4
    struct InventoryTokens * resource_4; // offset 0x24, size 0x4
    class VECTOR resourceCount; // offset 0x28, size 0x4
    class VECTOR requirementsCategory; // offset 0x2C, size 0x4
    class VECTOR requirementsType; // offset 0x30, size 0x4
    class VECTOR requirementsLevel; // offset 0x34, size 0x4
    class VECTOR catalogMotive; // offset 0x38, size 0x4
    class VECTOR catalogValue; // offset 0x3C, size 0x4
    class VECTOR buildMotive; // offset 0x40, size 0x4
    class VECTOR buildMotiveDelta; // offset 0x44, size 0x4
    class VECTOR buildMotiveMax; // offset 0x48, size 0x4
    class VECTOR unlockRule; // offset 0x4C, size 0x4
    class VECTOR unlockPercent; // offset 0x50, size 0x4
    class VECTOR unlockValue; // offset 0x54, size 0x4
    class VECTOR unlockLevel; // offset 0x58, size 0x4
    signed short skillToImprove; // offset 0x5C, size 0x2
    signed short skillBump; // offset 0x5E, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    unsigned short * pData; // offset 0x0, size 0x4
};
unsigned char cheatShowAllPlans; // size: 0x1, address: 0x805DB814
unsigned char cheatIgnoreRequirements; // size: 0x1, address: 0x805DB815
unsigned char cheatIgnoreResources; // size: 0x1, address: 0x805DB816
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    unsigned int mValue; // offset 0x8, size 0x4
};
// total size: 0xC
class ListBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4

    // Members
protected:
    struct ListNodeBase mNode; // offset 0x0, size 0x8
    class allocator mAllocator; // offset 0x8, size 0x1
};
// total size: 0xC
class ListBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4

    // Members
protected:
    struct ListNodeBase mNode; // offset 0x0, size 0x8
    class fixed_node_pool mAllocator; // offset 0x8, size 0x4
};
// total size: 0x4
class fixed_node_pool {
    // Static members
    static unsigned long kNodeSize; // size: 0x4
    static unsigned long kNodeCount; // size: 0x4
    static unsigned long kNodesSize; // size: 0x4
    static unsigned long kBufferSize; // size: 0x4
    static unsigned long kNodeAlignment; // size: 0x4
    static unsigned long kNodeAlignmentOffset; // size: 0x4

    // Members
protected:
    class fixed_pool mPool; // offset 0x0, size 0x4
};
// total size: 0x4
class fixed_pool : public fixed_pool_base {};
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
    class fixed_node_pool mAllocator; // offset 0x18, size 0x4
};
// total size: 0xC
class list : public ListBase {};
// total size: 0x12D8
class fixed_list : public list {
    // Static members
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    char mBuffer[4812]; // offset 0xC, size 0x12CC
};
// total size: 0xC
class list : public ListBase {};
// total size: 0x4
struct Link {
    // Members
    struct Link * mpNext; // offset 0x0, size 0x4
};
// total size: 0x4
struct fixed_pool_base {
    // Members
    struct Link * mpHead; // offset 0x0, size 0x4
};
// total size: 0x1F70
class fixed_map : public map {
    // Static members
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    char mBuffer[8020]; // offset 0x1C, size 0x1F54
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0x4
class fixed_node_pool {
    // Static members
    static unsigned long kNodeSize; // size: 0x4
    static unsigned long kNodeCount; // size: 0x4
    static unsigned long kNodesSize; // size: 0x4
    static unsigned long kBufferSize; // size: 0x4
    static unsigned long kNodeAlignment; // size: 0x4
    static unsigned long kNodeAlignmentOffset; // size: 0x4

    // Members
protected:
    class fixed_pool mPool; // offset 0x0, size 0x4
};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct Plan * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    const struct Plan * mValue; // offset 0x8, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
};
// total size: 0x90
class PlayerFamilyImpl : public FamilyImpl {
    // Members
    signed short m_stats[25]; // offset 0x5C, size 0x32
};
// total size: 0x4
class PropTable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
class PropTableImpl : public PropTable {
    // Members
public:
    const struct PropRefTable * m_pPropRefTable; // offset 0x4, size 0x4
};
// total size: 0x8
struct PropRefTable : public VECTOR {
    // Members
    signed short resID; // offset 0x4, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct PropRefTable * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct PropRef * * pData; // offset 0x0, size 0x4
};
// total size: 0x10
class QuickResFile : public iResFile {};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct ResFile * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    const char * * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct AStringSet : public VECTOR {
    // Members
    int resType; // offset 0x4, size 0x4
    signed short resID; // offset 0x8, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct AStringSet * pData; // offset 0x0, size 0x4
};
static struct _FILE * dumpFile; // size: 0x4, address: 0x805DB818
// total size: 0x20
class Scheme {
    // Members
    class Precision precsn[4]; // offset 0x0, size 0x20
};
static class Scheme scheme8; // size: 0x20, address: 0x80492148
static class Scheme scheme16; // size: 0x20, address: 0x80492168
static class Scheme scheme32; // size: 0x20, address: 0x80492188
static class Scheme schemeVer1; // size: 0x20, address: 0x804921A8
// total size: 0x8
class Precision {
    // Members
    int fBitCount; // offset 0x0, size 0x4
    int fMask; // offset 0x4, size 0x4
};
// total size: 0xC
struct Header {
    // Members
    char swizzle; // offset 0x0, size 0x1
    char _pad[3]; // offset 0x1, size 0x3
    int version; // offset 0x4, size 0x4
    int type; // offset 0x8, size 0x4
};
// total size: 0x14
class RelMatrixImpl : public RelMatrix {
    // Members
    class vector m_pArray; // offset 0x4, size 0x10
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
    class RelArray * * mpBegin; // offset 0x0, size 0x4
    class RelArray * * mpEnd; // offset 0x4, size 0x4
    class RelArray * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class RelInt {
    // Members
public:
    int n; // offset 0x0, size 0x4
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
    class RelInt * mpBegin; // offset 0x0, size 0x4
    class RelInt * mpEnd; // offset 0x4, size 0x4
    class RelInt * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x14
class RelArray : public vector {
    // Members
    int key; // offset 0x10, size 0x4
};
static int numMatricies; // size: 0x4, address: 0x805DB81C
static int numKeys; // size: 0x4, address: 0x805DB820
static int numEntries; // size: 0x4, address: 0x805DB824
static unsigned char firstRun; // size: 0x1, address: 0x805D8749
class iResFile * sFileList; // size: 0x4, address: 0x805DB828
class RoomManager * sRoomMgr; // size: 0x4, address: 0x805DB82C
static float sLightContributionFactor; // size: 0x4, address: 0x805D874C
static float sAreaScoreClip; // size: 0x4, address: 0x805DB830
static float sAreaScoreLowLimit; // size: 0x4, address: 0x805DB834
static float sAreaScoreRange; // size: 0x4, address: 0x805DB838
static float sLightScoreLowLimit; // size: 0x4, address: 0x805DB83C
static float sLightScoreRange; // size: 0x4, address: 0x805DB840
static float sEffectiveAreaLowClip; // size: 0x4, address: 0x805DB844
static float sEffectiveAreaHighClip; // size: 0x4, address: 0x805DB848
static float sRoomImpactMultiplier; // size: 0x4, address: 0x805DB84C
static float sOutdoorBadMultiplier; // size: 0x4, address: 0x805DB850
static float sOutdoorGoodMultiplier; // size: 0x4, address: 0x805DB854
static float sOutdoorObjectDivisor; // size: 0x4, address: 0x805DB858
static float sOutdoorDaylightBonus; // size: 0x4, address: 0x805DB85C
static float sOutdoorDawnDuskBonus; // size: 0x4, address: 0x805DB860
static float sOutdoorNightBonus; // size: 0x4, address: 0x805DB864
static float sFloorScoreRange; // size: 0x4, address: 0x805DB868
static float sFloorScoreLowLimit; // size: 0x4, address: 0x805DB86C
static float sWallScoreRange; // size: 0x4, address: 0x805DB870
static float sWallScoreLowLimit; // size: 0x4, address: 0x805DB874
// total size: 0x8
class RoomScoreConstants : public GlobalConstantsClient {};
static class RoomScoreConstants sTheClient; // size: 0x8, address: 0x805DB878
static unsigned char sConstantsLoaded; // size: 0x1, address: 0x805DB880
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x24
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x14
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x3C
class LightingParameters {
    // Members
public:
    float gTweeks[13]; // offset 0x0, size 0x34
    unsigned int gTimeParamsLastTweeked; // offset 0x34, size 0x4
    unsigned char gObjectShadowsEnabled; // offset 0x38, size 0x1
    unsigned char gSpriteAntialiasingEnabled; // offset 0x39, size 0x1
    unsigned char gLampLightingEnabled; // offset 0x3A, size 0x1
};
// total size: 0x14
struct SegSearch {
    // Members
    enum TileWallsSegment seg; // offset 0x0, size 0x4
    enum DiagonalSideSelector ds[2]; // offset 0x4, size 0x8
    enum Sides side[2]; // offset 0xC, size 0x8
};
static struct SegSearch segSrch[2]; // size: 0x28, address: 0x8042BC08
// total size: 0x60
class SpacePartition {
    // Members
    const struct RoutingParams * fParams; // offset 0x0, size 0x4
    class vector * fPartition1; // offset 0x4, size 0x4
    class vector * fPartition2; // offset 0x8, size 0x4
    class vector fFree; // offset 0xC, size 0x10
    class CCollisionGrid * m_CollisionGrid; // offset 0x1C, size 0x4
    class ASTNodeRefList fPreGoalNodes; // offset 0x20, size 0x10
    class ASTNodeRefList fPostStartNodes; // offset 0x30, size 0x10
    class ASTNodeRefList fSuccessorTable; // offset 0x40, size 0x10
    class vector fNodeList; // offset 0x50, size 0x10
};
class SpacePartition fSpacePartition; // size: 0x60, address: 0x804921D8
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
    class ASTNode * mpBegin; // offset 0x0, size 0x4
    class ASTNode * mpEnd; // offset 0x4, size 0x4
    class ASTNode * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
static unsigned char use_grid; // size: 0x1, address: 0x805D8754
// total size: 0x10
class ASTNodeRefList : public vector {};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ASTNode * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class PenaltyRect * mIterator; // offset 0x0, size 0x4
};
// total size: 0x2C
class ASTNode {
    // Members
public:
    int goalNumber; // offset 0x0, size 0x4
    int rectNumber; // offset 0x4, size 0x4
    int succCount; // offset 0x8, size 0x4
    int succTableIndex; // offset 0xC, size 0x4
    int penalty; // offset 0x10, size 0x4
    class IPoint entry; // offset 0x14, size 0x8
    int parent; // offset 0x1C, size 0x4
    float f; // offset 0x20, size 0x4
    float g; // offset 0x24, size 0x4
    float h; // offset 0x28, size 0x4
};
// total size: 0x70
class Path {
    // Static members
    static class SpacePartition fSpacePartition; // size: 0x60

    // Members
    const struct RoutingParams * fParams; // offset 0x0, size 0x4
    class ASTNodeRefList fReverseNodePath; // offset 0x4, size 0x10
    class ASTNodeRefList fSpatialNodePath; // offset 0x14, size 0x10
    class vector fFinalPath; // offset 0x24, size 0x10
    int fPathStage; // offset 0x34, size 0x4
    int fIterations; // offset 0x38, size 0x4
    class ASTNodeRefList fOpenNodes; // offset 0x3C, size 0x10
    class ASTNodeRefList fClosedNodes; // offset 0x4C, size 0x10
    int fStartNode; // offset 0x5C, size 0x4
    int fGoalNode; // offset 0x60, size 0x4
    int fCurNode; // offset 0x64, size 0x4
    int fChosenGoal; // offset 0x68, size 0x4
    int fSmoothCount; // offset 0x6C, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x18
struct ChainMemberFile {
    // Members
    class iResFile * file; // offset 0x0, size 0x4
    class vector types; // offset 0x4, size 0x10
    unsigned char prohibited; // offset 0x14, size 0x1
};
// total size: 0xD0
class ChainResFile : public iResFile {
    // Members
    struct ChainMemberFile fFiles[8]; // offset 0x10, size 0xC0
};
// total size: 0x14
struct OpenSpec {
    // Members
    int fileType; // offset 0x0, size 0x4
    class StackString extension; // offset 0x4, size 0x10
};
// total size: 0x184
class SeqResFile : public ChainResFile {
    // Members
    struct OpenSpec fOpenSpecs[9]; // offset 0xD0, size 0xB4
};
// total size: 0x10
class StackString : public StringBuffer {
    // Members
    char fChars[8]; // offset 0x8, size 0x8
};
// total size: 0x28
class StackString : public StringBuffer {
    // Members
    char fChars[32]; // offset 0x8, size 0x20
};
static unsigned char bSkipATimeAdvance; // size: 0x1, address: 0x805DB881
float SPEED_MULTIPLIER_REGULAR; // size: 0x4, address: 0x805DD5E4
enum eTRCState {
    eTRCState_None = 0,
    eTRCState_Visible = 1,
    eTRCState_Loading = 2,
    eTRCState_Unloading = 3,
};
// total size: 0x1A4
class TRCTarget : public UIObjectBase, public UIDialog {
    // Members
    enum eTRCState m_dialogState; // offset 0x144, size 0x4
    unsigned int m_aptFilterId; // offset 0x148, size 0x4
    unsigned int m_ignoreFilterId; // offset 0x14C, size 0x4
    unsigned int m_boxHeight; // offset 0x150, size 0x4
    unsigned int m_titleHeight; // offset 0x154, size 0x4
    unsigned int m_bodyHeight; // offset 0x158, size 0x4
    float m_maxOptionWidth; // offset 0x15C, size 0x4
    class EVec2 m_vBackdropPos; // offset 0x160, size 0x8
    class EVec2 m_vBodyBox; // offset 0x168, size 0x8
    class EVec2 m_vPictureSize; // offset 0x170, size 0x8
    class EVec2 m_vBodyPos; // offset 0x178, size 0x8
    class EVec2 m_vIconPos; // offset 0x180, size 0x8
    unsigned char m_TRCSpawned; // offset 0x188, size 0x1
    unsigned char m_TRCLoaded; // offset 0x189, size 0x1
    unsigned char m_TRCFlashLoaded; // offset 0x18A, size 0x1
    unsigned char m_tweenActive; // offset 0x18B, size 0x1
    class UIReflow reflow; // offset 0x18C, size 0x18
};
static class GlobalSkillTables * sTables; // size: 0x4, address: 0x805DB884
// total size: 0x4
class AUTOPTR {
    // Members
    class AnimTable * m_ptr; // offset 0x0, size 0x4
};
// total size: 0x34
class GlobalSkillTables {
    // Members
public:
    class AUTOPTR stdBaseline; // offset 0x0, size 0x4
    class AUTOPTR stdGender[2]; // offset 0x4, size 0x8
    class AUTOPTR stdChimp; // offset 0xC, size 0x4
    class AUTOPTR stdBoar; // offset 0x10, size 0x4
    class AUTOPTR legacyPerson; // offset 0x14, size 0x4
    class AUTOPTR legacyGlobal; // offset 0x18, size 0x4
    class AUTOPTR misc[6]; // offset 0x1C, size 0x18
};
static struct AnimRef sHackedAnimRef; // size: 0x4, address: 0x805DB888
// total size: 0x24
class ERSocialAnimationSet : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class vector m_animSetIndex; // offset 0x14, size 0x10
};
// total size: 0x8
struct AnimSetIndex {
    // Members
    unsigned char m_index; // offset 0x0, size 0x1
    struct AnimRef m_animID; // offset 0x4, size 0x4
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
    struct AnimSetIndex * mpBegin; // offset 0x0, size 0x4
    struct AnimSetIndex * mpEnd; // offset 0x4, size 0x4
    struct AnimSetIndex * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
float kStraightOffset[6]; // size: 0x18, address: 0x8041B508
float kCornerOffset[6]; // size: 0x18, address: 0x80492238
// total size: 0x8
class SlotLoader {
    // Members
    unsigned int mFileID; // offset 0x0, size 0x4
    signed short fStringsID; // offset 0x4, size 0x2
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class ObjectDataSlotDescList * mpData; // offset 0x0, size 0x4
};
// total size: 0x54
class ObjectDataSlotDescList : public IObjectDataResource {
    // Members
protected:
    class StackString mResourceName; // offset 0x4, size 0x48
    class ObjectDataID m_objDataID; // offset 0x4C, size 0x8
};
// total size: 0x60
class QuickDataSlotDescList : public ObjectDataSlotDescList {
    // Members
    struct SlotDescList m_list; // offset 0x54, size 0x8
    unsigned int mRefCount; // offset 0x5C, size 0x4
};
// total size: 0x8
struct SlotDescList : public VECTOR {
    // Members
    int resID; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct SlotDescList * pData; // offset 0x0, size 0x4
};
// total size: 0x10
struct SlotDescriptorList : public vector {};
// total size: 0x68
class IFFSlotDescList : public ObjectDataSlotDescList {
    // Members
    struct SlotDescriptorList m_list; // offset 0x54, size 0x10
    unsigned int mRefCount; // offset 0x64, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x8
class ReconStreamVector {
    // Members
    class vector & fVec; // offset 0x0, size 0x4
    int fType; // offset 0x4, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class ReconStreamVector * fObj; // offset 0x4, size 0x4
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
    class SlotDescriptor * mpBegin; // offset 0x0, size 0x4
    class SlotDescriptor * mpEnd; // offset 0x4, size 0x4
    class SlotDescriptor * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x5C
class QuickDataSoundInfo : public SoundInfo {
    // Members
    unsigned int mRefCount; // offset 0x58, size 0x4
};
// total size: 0x8
struct SndInfo {
    // Members
    int resID; // offset 0x0, size 0x4
    int sndEventID; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct SndInfo * pData; // offset 0x0, size 0x4
};
// total size: 0x184
class StdResFile : public SeqResFile {};
// total size: 0x10
class StackString : public StringBuffer {
    // Members
    char fChars[5]; // offset 0x8, size 0x5
};
// total size: 0x184
class EdithResFile : public SeqResFile {};
// total size: 0x454
class StubObject {
    // Members
public:
    class StackString fName; // offset 0x0, size 0x48
    class StackString fNewFileName; // offset 0x48, size 0x408
    unsigned char fKeepOldNames; // offset 0x450, size 0x1
    unsigned char fUsePrefix; // offset 0x451, size 0x1
};
enum TileWallsSegment sRotateSegmentLookup[4][64]; // size: 0x400, address: 0x80492250
enum DiagonalSideSelector sRotateDiagonalLookup[4][5]; // size: 0x50, address: 0x80492650
signed short DaysInAMonth; // size: 0x2, address: 0x805DD60C
signed short MonthsInAYear; // size: 0x2, address: 0x805DD60E
signed short HoursInADay; // size: 0x2, address: 0x805DD610
signed short MinutesInAnHour; // size: 0x2, address: 0x805DD612
signed short SecondsInAMinute; // size: 0x2, address: 0x805DD614
int SecondsInAnHour; // size: 0x4, address: 0x805DD618
int SecondsInADay; // size: 0x4, address: 0x805DD61C
signed short EpochMonth; // size: 0x2, address: 0x805DD620
signed short EpochDay; // size: 0x2, address: 0x805DD622
signed short EpochHour; // size: 0x2, address: 0x805DD624
signed short EpochMinute; // size: 0x2, address: 0x805DD626
signed short EpochSecond; // size: 0x2, address: 0x805DD628
signed short GameStartYear; // size: 0x2, address: 0x805DD62A
signed short GameStartMonth; // size: 0x2, address: 0x805DD62C
signed short GameStartDay; // size: 0x2, address: 0x805DD62E
signed short GameStartHour; // size: 0x2, address: 0x805DD630
signed short GameStartMinute; // size: 0x2, address: 0x805DD632
signed short GameStartSecond; // size: 0x2, address: 0x805DD634
unsigned char sInMainSim; // size: 0x1, address: 0x805D8781
signed short sMaxIterations; // size: 0x2, address: 0x805D8782
unsigned char sTestingTooLongInPrim; // size: 0x1, address: 0x805DB88C
float sTooLongInPrimTime; // size: 0x4, address: 0x805D8784
float sTooLongInTickTime; // size: 0x4, address: 0x805D8788
unsigned char sTraceOnlyOnPrimBreak; // size: 0x1, address: 0x805D878C
unsigned char sBreakOnCallTreeStringFailure; // size: 0x1, address: 0x805D878D
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class ObjectDataBehaviorTree * mpData; // offset 0x0, size 0x4
};
// total size: 0x18
struct EdithBehaviorTree {
    // Members
    signed short structVersion; // offset 0x0, size 0x2
    signed short numNodes; // offset 0x2, size 0x2
    unsigned char type; // offset 0x4, size 0x1
    unsigned char numParams; // offset 0x5, size 0x1
    unsigned char numLocals; // offset 0x6, size 0x1
    unsigned char unused1; // offset 0x7, size 0x1
    int treeVersion; // offset 0x8, size 0x4
    struct BehaviorNode nodes[1]; // offset 0xC, size 0xC
};
// total size: 0x5C
class ObjectDataBehaviorTree : public IObjectDataResource {
    // Members
protected:
    signed short mResID; // offset 0x4, size 0x2
    unsigned char mbOwnData; // offset 0x6, size 0x1
    class StackString mResourceName; // offset 0x8, size 0x48
    struct EdithBehaviorTree * mpData; // offset 0x50, size 0x4
    class ObjectDataID m_objDataID; // offset 0x54, size 0x8
};
// total size: 0x18
class ObjectDataBehaviorConstants : public IObjectDataResource {
    // Members
public:
    signed short flags; // offset 0x4, size 0x2
protected:
    class ObjectDataID m_objDataID; // offset 0x8, size 0x8
    class BString * valueNames; // offset 0x10, size 0x4
    signed short * values; // offset 0x14, size 0x4
};
char * PrimNames[73]; // size: 0x124, address: 0x8042C14C
float gLowAttenuation; // size: 0x4, address: 0x805D87E0
float gModerateAttenuation; // size: 0x4, address: 0x805D87E4
float gHighAttenuation; // size: 0x4, address: 0x805D87E8
float gVisLowAttenuation; // size: 0x4, address: 0x805D87EC
float gVisModerateAttenuation; // size: 0x4, address: 0x805D87F0
float gVisHighAttenuation; // size: 0x4, address: 0x805D87F4
// total size: 0xC
class TreeTable {
    // Members
public:
    class VECTOR fEntries; // offset 0x0, size 0x4
    signed short fNumAds; // offset 0x4, size 0x2
    signed short resID; // offset 0x6, size 0x2
    signed short mPrefixCheckTreeID; // offset 0x8, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    class TreeTableEntry * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    class TreeTableAd * pData; // offset 0x0, size 0x4
};
enum Attenuation {
    kCustom = 0,
    kNone = 1,
    kLow = 2,
    kModerate = 3,
    kHigh = 4,
};
// total size: 0x24
class TreeTableEntry {
    // Static members
    static int kAvailableToBoars; // size: 0x4
    static int kAvailableToChimps; // size: 0x4
    static int kPermitDynamicAds; // size: 0x4
    static int kAllowOnSelf; // size: 0x4
    static int kAvailableInDemo; // size: 0x4
    static int kAvailableToSmallDogs; // size: 0x4
    static int kAvailableToCats; // size: 0x4
    static int kUseCustomActivation; // size: 0x4
    static int kMustRun; // size: 0x4
    static int kIgnorePrefixTree; // size: 0x4
    static int kAvailableToVisitingPlayers; // size: 0x4
    static int kAutoFirstSelect; // size: 0x4
    static int kDebugOnly; // size: 0x4
    static int kAvailableToAdults; // size: 0x4
    static int kAvailableToLargeDogs; // size: 0x4
    static int kAvailableToGhosts; // size: 0x4
    static int kAllowConsecutive; // size: 0x4
    static int kImmediate; // size: 0x4
    static int kCanJoin; // size: 0x4
    static int kAvailableToVisitors; // size: 0x4

    // Members
public:
    signed short fCheckTreeID; // offset 0x0, size 0x2
    signed short fActionTreeID; // offset 0x2, size 0x2
    class VECTOR fAds; // offset 0x4, size 0x4
    float fAttenuationVal; // offset 0x8, size 0x4
    enum Attenuation fAttenuation; // offset 0xC, size 0x4
    int fFlags; // offset 0x10, size 0x4
    signed short resID; // offset 0x14, size 0x2
    signed short fMinAutonomy; // offset 0x16, size 0x2
    signed short fJoinIndex; // offset 0x18, size 0x2
    signed short fOrderIndex; // offset 0x1A, size 0x2
    class ELocString fName; // offset 0x1C, size 0x4
    unsigned int activationInfo; // offset 0x20, size 0x4
};
// total size: 0x10
class TreeTableAdScratch : public ITreeTableAd {
    // Members
    signed short fPersonalityAd; // offset 0x4, size 0x2
    signed short fMin; // offset 0x6, size 0x2
    signed short fRange; // offset 0x8, size 0x2
    unsigned int mRefCount; // offset 0xC, size 0x4
};
static signed short kFlagLayrerRsrcID; // size: 0x2, address: 0x805D87F8
static signed short kExtFloorRsrcID; // size: 0x2, address: 0x805D87FA
static signed short kExtWallRsrcID; // size: 0x2, address: 0x805D87FC
// total size: 0xA4
class EdithDialogPrimitive : public UIDialog {
    // Members
protected:
    int m_DialogResult; // offset 0xA0, size 0x4
};
// total size: 0x18
class cArray : public c2DArray {};
// total size: 0x18
class c2DArray : public _c2DArray {};
union /* @class$74423game_simulator_core2_unity_cpp */ {
    unsigned char mTopRightStyle; // offset 0x0, size 0x1
    unsigned char mDiagonalStyle; // offset 0x0, size 0x1
};
union /* @class$74424game_simulator_core2_unity_cpp */ {
    unsigned char mBottomLeftPattern; // offset 0x0, size 0x1
    unsigned char mDiagTopLeftPattern; // offset 0x0, size 0x1
};
union /* @class$74425game_simulator_core2_unity_cpp */ {
    unsigned char mBottomRightPattern; // offset 0x0, size 0x1
    unsigned char mDiagBottomRightPattern; // offset 0x0, size 0x1
};
// total size: 0x8
class TileWallStorage {
    // Members
public:
    unsigned char mSegments; // offset 0x0, size 0x1
    unsigned char mPlacement; // offset 0x1, size 0x1
    unsigned char mTopLeftStyle; // offset 0x2, size 0x1
    union { // inferred
        union /* @class$74423game_simulator_core2_unity_cpp */ {
            unsigned char mTopRightStyle; // offset 0x0, size 0x1
            unsigned char mDiagonalStyle; // offset 0x0, size 0x1
        } __anon$74428; // offset 0x3, size 0x1
        unsigned char mTopRightStyle; // offset 0x3, size 0x1
        unsigned char mDiagonalStyle; // offset 0x3, size 0x1
    };
    unsigned char mTopLeftPattern; // offset 0x4, size 0x1
    unsigned char mTopRightPattern; // offset 0x5, size 0x1
    union { // inferred
        union /* @class$74424game_simulator_core2_unity_cpp */ {
            unsigned char mBottomLeftPattern; // offset 0x0, size 0x1
            unsigned char mDiagTopLeftPattern; // offset 0x0, size 0x1
        } __anon$74429; // offset 0x6, size 0x1
        unsigned char mBottomLeftPattern; // offset 0x6, size 0x1
        unsigned char mDiagTopLeftPattern; // offset 0x6, size 0x1
    };
    union { // inferred
        union /* @class$74425game_simulator_core2_unity_cpp */ {
            unsigned char mBottomRightPattern; // offset 0x0, size 0x1
            unsigned char mDiagBottomRightPattern; // offset 0x0, size 0x1
        } __anon$74430; // offset 0x7, size 0x1
        unsigned char mBottomRightPattern; // offset 0x7, size 0x1
        unsigned char mDiagBottomRightPattern; // offset 0x7, size 0x1
    };
};
// total size: 0x4
class cArrayRow {
    // Members
    class TileWallStorage * mRowPtr; // offset 0x0, size 0x4
};
// total size: 0x18
class cArray : public c2DArray {};
// total size: 0x4
class cArrayRow {
    // Members
    unsigned char * mRowPtr; // offset 0x0, size 0x4
};
// total size: 0x18
class CWallArray : public cArray {};
// total size: 0x18
class c2DArray : public _c2DArray {};
// total size: 0x18
class CFloorArray : public cArray {};
// total size: 0x4
class cArrayRow {
    // Members
    unsigned short * mRowPtr; // offset 0x0, size 0x4
};
// total size: 0x8
class XObjLang : public Language {
    // Members
    class ObjSelector * fLangSelector; // offset 0x4, size 0x4
};
// total size: 0x8
struct DialogIcon {
    // Members
    unsigned int iconShader; // offset 0x0, size 0x4
    signed short iconHeight; // offset 0x4, size 0x2
    signed short iconWidth; // offset 0x6, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct DialogIcon * pData; // offset 0x0, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x4
struct DialogIconTable {
    // Members
    class VECTOR icons; // offset 0x0, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct DialogIconTable * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
class vector s_objPartition; // size: 0x10, address: 0x804926B0
// total size: 0x38
struct RoutingParams {
    // Members
    class vector * goalList; // offset 0x0, size 0x4
    class vector * partition1; // offset 0x4, size 0x4
    class vector * partition2; // offset 0x8, size 0x4
    class IPoint begin; // offset 0xC, size 0x8
    unsigned char routeNearDest; // offset 0x14, size 0x1
    int nearDestDistance; // offset 0x18, size 0x4
    unsigned char useRealDistance; // offset 0x1C, size 0x1
    unsigned char limitFreeRectRatio; // offset 0x1D, size 0x1
    int maxFreeRectRatio; // offset 0x20, size 0x4
    unsigned char limitFreeRectSize; // offset 0x24, size 0x1
    int maxFreeRectSize; // offset 0x28, size 0x4
    int defaultPenalty; // offset 0x2C, size 0x4
    unsigned char smooth; // offset 0x30, size 0x1
    class CCollisionGrid * m_CollisionGrid; // offset 0x34, size 0x4
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
    class IPoint * mpBegin; // offset 0x0, size 0x4
    class IPoint * mpEnd; // offset 0x4, size 0x4
    class IPoint * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x6
struct RouteBlockers {
    // Members
    unsigned char fChairOnly; // offset 0x0, size 0x1
    unsigned char fChairOccupied; // offset 0x1, size 0x1
    unsigned char fTileGoalOffWorld; // offset 0x2, size 0x1
    unsigned char fTileOccupied; // offset 0x3, size 0x1
    unsigned char fTileOccupiedByPerson; // offset 0x4, size 0x1
    unsigned char fWallInTheWay; // offset 0x5, size 0x1
};
// total size: 0x38
struct {} __vt__18QuickDataSoundInfo; // size: 0x38, address: 0x8042C2E8
// total size: 0x14
struct {} __vt__56SimpleReconObject<35ReconStreamVector<14SlotDescriptor>>; // size: 0x14, address: 0x8042C320
// total size: 0x14
struct {} __vt__18RoomScoreConstants; // size: 0x14, address: 0x8042C334
// total size: 0x38
struct {} __vt__13RelMatrixImpl; // size: 0x38, address: 0x8042C348
// total size: 0x20
struct {} __vt__13PropTableImpl; // size: 0x20, address: 0x8042C380
// total size: 0xD8
struct {} __vt__16PlayerFamilyImpl; // size: 0xD8, address: 0x8042C3A0
// total size: 0x14
struct {} __vt__23AutonomyConstantsClient; // size: 0x14, address: 0x8042C478
// total size: 0x20
struct {} __vt__9PropTable; // size: 0x20, address: 0x8042C490
// total size: 0x24
struct {} __vt__8XObjLang; // size: 0x24, address: 0x8042C4B0
// total size: 0x24
struct {} __vt__8Language; // size: 0x24, address: 0x8042C4D4
// total size: 0xF4
struct {} __vt__8cXPortal; // size: 0xF4, address: 0x8042C4F8
// total size: 0xC
struct {} __vt__6cTrack; // size: 0xC, address: 0x8042C5EC
// total size: 0x10
struct {} __vt__10cSimulator; // size: 0x10, address: 0x8042C5F8
// total size: 0x18
struct {} __vt__22PassiveInfluencePortal; // size: 0x18, address: 0x8042C608
// total size: 0x18
struct {} __vt__22PassiveInfluenceTarget; // size: 0x18, address: 0x8042C620
// total size: 0x18
struct {} __vt__22PassiveInfluenceObject; // size: 0x18, address: 0x8042C638
// total size: 0x18
struct {} __vt__22PassiveInfluencePerson; // size: 0x18, address: 0x8042C650
// total size: 0x18
struct {} __vt__23PassiveInfluenceMovable; // size: 0x18, address: 0x8042C668
// total size: 0x18
struct {} __vt__20PassiveInfluenceItem; // size: 0x18, address: 0x8042C680
// total size: 0x10
struct {} __vt__11cFixedWorld; // size: 0x10, address: 0x8042C698
// total size: 0x14
struct {} __vt__36SimpleReconObject<15ThumbnailLoader>; // size: 0x14, address: 0x8042C6A8
// total size: 0x98
struct {} __vt__12QuickResFile; // size: 0x98, address: 0x8042C6C0
// total size: 0xEC
struct {} __vt__8cXPerson; // size: 0xEC, address: 0x8042C758
// total size: 0x14
struct {} __vt__11ReconObject; // size: 0x14, address: 0x8042C844
// total size: 0x134
struct {} __vt__16TTabScratchEntry; // size: 0x134, address: 0x8042C858
// total size: 0x3C
struct {} __vt__18TreeTableAdScratch; // size: 0x3C, address: 0x8042C98C
// total size: 0x98
struct {} __vt__10ObjResFile; // size: 0x98, address: 0x8042C9C8
// total size: 0x98
struct {} __vt__12EdithResFile; // size: 0x98, address: 0x8042CA60
// total size: 0x98
struct {} __vt__10StdResFile; // size: 0x98, address: 0x8042CAF8
// total size: 0x98
struct {} __vt__10SeqResFile; // size: 0x98, address: 0x8042CB90
// total size: 0x10
struct {} __vt__11RoutingSlot; // size: 0x10, address: 0x8042CC28
// total size: 0x10
struct {} __vt__10SpriteSlot; // size: 0x10, address: 0x8042CC38
// total size: 0x10
struct {} __vt__10ObjectSlot; // size: 0x10, address: 0x8042CC48
// total size: 0x10
struct {} __vt__4Slot; // size: 0x10, address: 0x8042CC58
// total size: 0x50
struct {} __vt__15IFFSlotDescList; // size: 0x50, address: 0x8042CC68
// total size: 0x50
struct {} __vt__21QuickDataSlotDescList; // size: 0x50, address: 0x8042CCB8
// total size: 0x50
struct {} __vt__22ObjectDataSlotDescList; // size: 0x50, address: 0x8042CD08
// total size: 0x38
struct {} __vt__9RelMatrix; // size: 0x38, address: 0x8042CD58
// total size: 0x68
struct {} __vt__7TreeSim; // size: 0x68, address: 0x8042CD90
// total size: 0x94
struct {} __vt__8iResFile; // size: 0x94, address: 0x8042CDF8
// total size: 0x130
struct {} __vt__15ITreeTableEntry; // size: 0x130, address: 0x8042CE90
// total size: 0x38
struct {} __vt__12ITreeTableAd; // size: 0x38, address: 0x8042CFC0
// total size: 0x50
struct {} __vt__19ObjFnTableQuickData; // size: 0x50, address: 0x8042CFF8
// total size: 0x50
struct {} __vt__10ObjFnTable; // size: 0x50, address: 0x8042D048
// total size: 0x34
struct {} __vt__19IObjectDataResource; // size: 0x34, address: 0x8042D098
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class StackElem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class SlotDescriptor * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ObjectSlot * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class RoutingSlot * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class SpriteSlot * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class cXPerson * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class cXPortal * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class FTilePt * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct MotiveInc * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct ObjectRecord * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class XRoute * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct ListenPacket * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class EVec3 * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    float * mIterator; // offset 0x0, size 0x4
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
    class StackString * mpBegin; // offset 0x0, size 0x4
    class StackString * mpEnd; // offset 0x4, size 0x4
    class StackString * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class StackString * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class RelInt * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class RelArray * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class IPoint * mIterator; // offset 0x0, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    class ERSoundEvent * const first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
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
// total size: 0x1
struct use_first {};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
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
// total size: 0x1
struct use_first {};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct use_first {};
// total size: 0x4
class VECTOR {
    // Members
    class SlotDescriptor * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class Language {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x58
class SoundInfo : public IObjectDataResource {
    // Members
protected:
    class StackString soundEventName; // offset 0x4, size 0x48
    unsigned int soundEventID; // offset 0x4C, size 0x4
    class ObjectDataID m_objDataID; // offset 0x50, size 0x8
};
enum RBTreeSide {
    kRBTreeSideLeft = 0,
    kRBTreeSideRight = 1,
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
static float UNDEFINED; // size: 0x4, address: 0x805DD640
// total size: 0xD44
class ESocialAnimationSetManager : public EResourceManager {};
// total size: 0x30
class cSoundModeManager {
    // Members
protected:
    int m_lMode; // offset 0x0, size 0x4
    unsigned char m_fadeOutMusic; // offset 0x4, size 0x1
    unsigned char m_fadeInMusic; // offset 0x5, size 0x1
    unsigned int m_fadeMusicDelta; // offset 0x8, size 0x4
    unsigned char m_fadeOutSFX; // offset 0xC, size 0x1
    unsigned char m_fadeInSFX; // offset 0xD, size 0x1
    float m_musicFadeVol; // offset 0x10, size 0x4
    unsigned int m_fadeSFXDelta; // offset 0x14, size 0x4
    struct EVoice * m_loadSfxVoice; // offset 0x18, size 0x4
    class EResource * m_loadSfxRes; // offset 0x1C, size 0x4
    unsigned int m_loadSfxResId; // offset 0x20, size 0x4
    int m_curFrontEndTrack; // offset 0x24, size 0x4
    int m_curDemoTrack; // offset 0x28, size 0x4
    int m_curCASTrack; // offset 0x2C, size 0x4
};
// total size: 0x6C
class cBoxX {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned char m_bSoundEnabled; // offset 0x4, size 0x1
    class cHitTimer * m_pSystemTimer; // offset 0x8, size 0x4
    class multimap m_InstanceIdFromSndobId; // offset 0xC, size 0x1C
    class cSoundModeManager m_soundModeManager; // offset 0x28, size 0x30
    class AmbientScorePlayer * m_pAmbientScorePlayer; // offset 0x58, size 0x4
    class ERQuickdata * m_pObjectData; // offset 0x5C, size 0x4
private:
    int m_sfxPauseCount; // offset 0x60, size 0x4
    int m_musicPauseCount; // offset 0x64, size 0x4
    int m_ambientPauseCount; // offset 0x68, size 0x4
};

