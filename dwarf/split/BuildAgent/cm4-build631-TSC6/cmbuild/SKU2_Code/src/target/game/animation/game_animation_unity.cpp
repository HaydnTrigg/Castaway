/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\game_animation_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80007DDC -> 0x80007DDC
*/
float s_censor_rect_Z_offset; // size: 0x4, address: 0x805D8360
float kMinWalkAnimDistance; // size: 0x4, address: 0x805D8364
// total size: 0x10
class vector : public VectorBase {};
class vector s_wallPartArray; // size: 0x10, address: 0x8048BE10
unsigned char s_bwallArrayDirty; // size: 0x1, address: 0x805D8368
enum PropKind {
    kAnchor = 0,
    kFootstep = 1,
    kInterruptable = 2,
    kLeftHand = 3,
    kRightHand = 4,
    kSound = 5,
    kXEvt = 6,
    kRumble = 7,
    kShadowEvt = 8,
    kSplash = 9,
    kParticle = 10,
    kCameraBloom = 11,
    kCameraBlur = 12,
    kFrameEffectsBloom = 13,
    kFrameEffectsMotionBlur = 14,
    kFrameEffectsDepthOfField = 15,
    kParticleContinual = 16,
    kParticleContinualOn = 17,
    kParticleContinualOff = 18,
    kIKLeftHand = 19,
    kIKRightHand = 20,
    kIKLeftFoot = 21,
    kIKRightFoot = 22,
};
// total size: 0xC4
class Motives {
    // Static members
    static float sMotiveDecayNeatMod[3][16]; // size: 0xC0
    static float sMotiveDecayOutgoingMod[3][16]; // size: 0xC0
    static float sMotiveDecayPlayfulMod[3][16]; // size: 0xC0
    static float sMotiveDecayActiveMod[3][16]; // size: 0xC0
    static float sMotiveDecayBase[3][16]; // size: 0xC0
    static int kSleepOffset; // size: 0x4

    // Members
    float m_DecayRates[16]; // offset 0x0, size 0x40
    class cXPerson * m_Person; // offset 0x40, size 0x4
public:
    float Motive[16]; // offset 0x44, size 0x40
    float oldMotive[16]; // offset 0x84, size 0x40
};
// total size: 0xC
struct MotiveInc {
    // Members
    int whichMotive; // offset 0x0, size 0x4
    float incPerTick; // offset 0x4, size 0x4
    float limit; // offset 0x8, size 0x4
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
    struct MotiveInc * mpBegin; // offset 0x0, size 0x4
    struct MotiveInc * mpEnd; // offset 0x4, size 0x4
    struct MotiveInc * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0xC
struct ObjectRecord {
    // Members
    class cXObject * fObject; // offset 0x0, size 0x4
    int fStackLevel; // offset 0x4, size 0x4
    unsigned char fHasIcon; // offset 0x8, size 0x1
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
    struct ObjectRecord * mpBegin; // offset 0x0, size 0x4
    struct ObjectRecord * mpEnd; // offset 0x4, size 0x4
    struct ObjectRecord * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
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
// total size: 0x18
struct ScoredInteraction {
    // Members
    float m_AttenScore; // offset 0x0, size 0x4
    int m_ActionIndex; // offset 0x4, size 0x4
    class Behavior * m_Behavior; // offset 0x8, size 0x4
    int m_StackObjGuid; // offset 0xC, size 0x4
    signed short m_StackObjectID; // offset 0x10, size 0x2
    signed short m_CheckTreeID; // offset 0x12, size 0x2
    signed short m_PrefixTreeID; // offset 0x14, size 0x2
    class BitFlags m_Flags; // offset 0x16, size 0x2
};
// total size: 0xC
class list : public ListBase {};
// total size: 0x10
class TileList : public vector {};
// total size: 0x68
class Queue {
    // Members
protected:
    class cXPerson * fElems[24]; // offset 0x0, size 0x60
    unsigned int fFirst; // offset 0x60, size 0x4
    unsigned int fLast; // offset 0x64, size 0x4
};
enum RoutingState {
    RoutingState_None = 0,
    RoutingState_Initial = 1,
    RoutingState_WaitingForPortal = 2,
    RoutingState_Walking = 3,
    RoutingState_WaitingForSit = 4,
    RoutingState_WaitingForStand = 5,
    RoutingState_Trapped = 6,
    RoutingState_Failed = 7,
    RoutingState_Succeeded = 8,
    RoutingState_WalkingSucceeded = 9,
    RoutingState_WalkingFailed = 10,
    RoutingState_WalkTerminated = 11,
    RoutingState_FoundPath = 12,
    RoutingState_Waiting = 13,
    RoutingState_WaitingForPersonToMove = 14,
    RoutingState_RouteInvalidatedWhileWalking = 15,
    RoutingState_NeedFailureFeedback = 16,
    RoutingState_WaitingForFailureFeedback = 17,
    RoutingState_FoundGoals = 18,
    RoutingState_ObjectDeleted = 19,
    RoutingState_ObjectDeletedWhileWalking = 20,
    RoutingState_ReRoute = 21,
    RoutingState_NumRoutingStates = 22,
};
// total size: 0x600
class cXPerson : public cXObject {
    // Static members
    static class CCollisionGrid * m_sCollisionGrid; // size: 0x4
    static class Queue s_TrappedQueue; // size: 0x68
    static int s_nNumTrappedThisFrame; // size: 0x4
    static class Queue s_RoutingQueue; // size: 0x68
    static int s_nNumRoutedThisFrame; // size: 0x4
    static int MAX_ASK_OTHERS_TO_MOVE_CALLS_PER_FRAME; // size: 0x4
    static int MAX_ROUTING_CALLS_PER_FRAME; // size: 0x4
    static int ASK_OTHERS_TO_MOVE_ITERATION_LIMIT_CAP; // size: 0x4
    static int INIT_ROUTE_ITERATION_LIMIT_CAP; // size: 0x4
    static int ROUTING_QUEUE_MAX_SIZE; // size: 0x4
    static int kMoveRequestWaitLimitTicks; // size: 0x4
    static int kWaitLimitTicks; // size: 0x4
    static signed char sOldPersondataIndexArray[80]; // size: 0x50
    static unsigned char sbAllowingCheckTreeAds; // size: 0x1
    static signed short sDumpTFBACount; // size: 0x2
    static unsigned char sDumpTFBA; // size: 0x1
    static unsigned char sUseScalingInteractionRange; // size: 0x1
    static class MotiveCurveArray sBoarMoodWeightCurves; // size: 0xD0
    static class MotiveCurveArray sChimpMoodWeightCurves; // size: 0xD0
    static class MotiveCurveArray sAdultMoodWeightCurves; // size: 0xD0
    static unsigned char sMoodCurvesSetup; // size: 0x1
    static int kMaxMotiveCurvePoints; // size: 0x4
    static int kSimTicksPerMotiveTick; // size: 0x4

    // Members
    class Motives fMotives; // offset 0x138, size 0xC4
    class vector fMotiveIncs; // offset 0x1FC, size 0x10
    class MotiveEffects * fMotiveEffects; // offset 0x20C, size 0x4
    int fLastMotiveTick; // offset 0x210, size 0x4
    int m_rainItem; // offset 0x214, size 0x4
    class ActionQueue fTreeQueue; // offset 0x218, size 0x30C
    class vector fObjectRecords; // offset 0x524, size 0x10
    unsigned char m_bActionExecuting; // offset 0x534, size 0x1
    class list m_Interactions; // offset 0x538, size 0xC
    signed short fPersonData[36]; // offset 0x544, size 0x48
    class Neighbor * mNeighbor; // offset 0x58C, size 0x4
    signed short lastCensorshipState; // offset 0x590, size 0x2
    unsigned char bChangingOutfit; // offset 0x592, size 0x1
    class TileList fDestList; // offset 0x594, size 0x10
    class TileList fTempList; // offset 0x5A4, size 0x10
    class FTilePt m_TargetLastLoc; // offset 0x5B4, size 0x8
    signed short m_time; // offset 0x5BC, size 0x2
    signed short m_tick_counter; // offset 0x5BE, size 0x2
    unsigned char m_time_to_end; // offset 0x5C0, size 0x1
    signed char m_error_count; // offset 0x5C1, size 0x1
    class vector fRouteStack; // offset 0x5C4, size 0x10
    class cXObject * m_ignoringThisObjectWhenRouting; // offset 0x5D4, size 0x4
    unsigned short fCurrentRoom; // offset 0x5D8, size 0x2
    unsigned char m_bInRoutingQueue; // offset 0x5DA, size 0x1
    unsigned char m_bInTrappedQueue; // offset 0x5DB, size 0x1
    class SAnimator2 * fAnimator; // offset 0x5DC, size 0x4
    signed short m_idleLoopCount; // offset 0x5E0, size 0x2
    unsigned char m_Transitions[30]; // offset 0x5E2, size 0x1E
};
enum eFollowState {
    kNotFollowingDestListState = 0,
    kFollowDestListState = 1,
    kCompletedDestListState = 2,
    kErrorFollowingListState = 3,
};
enum OutfitS2C {
    kOutfitNormal = 0,
    kOutfitNaked = 1,
    kOutfitSwimSuit = 2,
    kOutfitJob = 3,
    kOutfitFormal = 4,
    kOutfitSleep = 5,
    kOutfitWorkout = 6,
    kOutfitSciFiJumpsuit = 7,
    kOutfitYeti = 8,
    kOutfitPanda = 9,
    kOutfitRobot = 10,
    kOutfitCount = 11,
};
// total size: 0x870
class SAnimator2 : public SAnimator {
    // Static members
    static char * m_shoeTypeTable[4]; // size: 0x10
    static char * m_surfaceTypeTable[10]; // size: 0x28
    static unsigned char s_bwallArrayDirty; // size: 0x1
    static class vector s_wallPartArray; // size: 0x10
    static float kMinWalkAnimDistance; // size: 0x4
    static int mkFootprintSoundNameLength; // size: 0x4
    static float s_censor_rect_Z_offset; // size: 0x4
    static float kTileMultipleFactor; // size: 0x4
    static float s_minIntensity; // size: 0x4

    // Members
protected:
    class EMat4 m_mHeadOrient; // offset 0x8, size 0x40
    class EMat4 m_Orient; // offset 0x48, size 0x40
    class cXPerson * m_pPerson; // offset 0x88, size 0x4
    class ESim * m_pSim; // offset 0x8C, size 0x4
    class TileList * m_pDestList; // offset 0x90, size 0x4
    enum eFollowState m_FollowState; // offset 0x94, size 0x4
    int m_CurrentDestNode; // offset 0x98, size 0x4
    enum eFollowMode m_FollowMode; // offset 0x9C, size 0x4
    class EVec3 m_Pos; // offset 0xA0, size 0xC
    unsigned char m_ResetPos; // offset 0xAC, size 0x1
    unsigned int m_AnimPending; // offset 0xB0, size 0x4
    unsigned int m_AnimLowMotivePending; // offset 0xB4, size 0x4
    int m_pendingCount; // offset 0xB8, size 0x4
    enum eAnimState m_AnimState; // offset 0xBC, size 0x4
    float m_Dir; // offset 0xC0, size 0x4
    float m_LastDir; // offset 0xC4, size 0x4
    float m_DirCompensation; // offset 0xC8, size 0x4
    float m_RenderPosX; // offset 0xCC, size 0x4
    float m_RenderPosY; // offset 0xD0, size 0x4
    float m_RenderPosZ; // offset 0xD4, size 0x4
    unsigned int m_MotionFlags; // offset 0xD8, size 0x4
    float m_TurnDurations[2][11]; // offset 0xDC, size 0x58
    float m_RoutingTurnRate; // offset 0x134, size 0x4
    float m_RoutingWalkVelocity; // offset 0x138, size 0x4
    float m_RoutingRunVelocity; // offset 0x13C, size 0x4
    float m_RoutingTreadVelocity; // offset 0x140, size 0x4
    float m_RoutingFreeStyleSwimVelocity; // offset 0x144, size 0x4
    float m_RoutingSidestepVelocity; // offset 0x148, size 0x4
    float m_TiredWalkVelocity; // offset 0x14C, size 0x4
    float m_BladderLowWalkVelocity; // offset 0x150, size 0x4
    enum eAnimState m_DesiredAnimState; // offset 0x154, size 0x4
    float m_fDesiredFacing; // offset 0x158, size 0x4
    float m_CameraZoomRatio; // offset 0x15C, size 0x4
    const class REffectsAttachment * m_CurParticleEffect; // offset 0x160, size 0x4
    int m_CurParticleDuration; // offset 0x164, size 0x4
    int m_CurParticleTime; // offset 0x168, size 0x4
    int m_iAnimDuration; // offset 0x16C, size 0x4
    int m_iFXAnimDuration; // offset 0x170, size 0x4
    float m_fAnimInterval; // offset 0x174, size 0x4
    const struct AnimRef * m_skillName; // offset 0x178, size 0x4
    const struct AnimRef * m_FXSkillName; // offset 0x17C, size 0x4
    class vector m_eventQueue; // offset 0x180, size 0x10
    unsigned char m_bAnimatePrimitiveEntered; // offset 0x190, size 0x1
    int m_iAnimatePrimitiveEventCount; // offset 0x194, size 0x4
    class EVec2 m_ContinueDestination; // offset 0x198, size 0x8
    float m_TimeMultiplier; // offset 0x1A0, size 0x4
    float m_LastTimeMultiplier; // offset 0x1A4, size 0x4
    float m_pauseMultiplier; // offset 0x1A8, size 0x4
    enum eWalkRunStyle m_WalkRunStyle; // offset 0x1AC, size 0x4
    enum eWalkRunStyle m_LastWalkRunStyle; // offset 0x1B0, size 0x4
    float m_MotionBlendingFactor; // offset 0x1B4, size 0x4
    float m_LastSpeed; // offset 0x1B8, size 0x4
    int m_ShuffleDir; // offset 0x1BC, size 0x4
    int m_IdleCount; // offset 0x1C0, size 0x4
    unsigned char m_IdleInitialized; // offset 0x1C4, size 0x1
    int m_IdleState; // offset 0x1C8, size 0x4
    float m_ImpatientTiming; // offset 0x1CC, size 0x4
    const struct AnimRef * m_CustomIdleSkill; // offset 0x1D0, size 0x4
    int m_LastCostume; // offset 0x1D4, size 0x4
    class EVec3 m_CarryPos; // offset 0x1D8, size 0xC
    class EVec3 m_CarryDir; // offset 0x1E4, size 0xC
    class EVec3 m_HeadPos; // offset 0x1F0, size 0xC
    class EVec3 m_PelvisPos; // offset 0x1FC, size 0xC
    signed short m_carryObjectID; // offset 0x208, size 0x2
    class vector m_PropItemArray; // offset 0x20C, size 0x10
    int m_LastHappySadAnimId; // offset 0x21C, size 0x4
    unsigned char m_DrawCensor; // offset 0x220, size 0x1
    float m_FootprintTiming; // offset 0x224, size 0x4
    unsigned char m_UpdateFootprints; // offset 0x228, size 0x1
    int m_MinMovementIndex; // offset 0x22C, size 0x4
    int m_bFirstFollowRoute; // offset 0x230, size 0x4
    char m_AnimationName[8][128]; // offset 0x234, size 0x400
    class TRedBlackTree m_activeParticles; // offset 0x634, size 0xC
    class TRedBlackTree m_activeRelationshipParticles; // offset 0x640, size 0xC
    unsigned int m_CurrentAnimationId; // offset 0x64C, size 0x4
    unsigned int m_SpecialOverrideAnimId; // offset 0x650, size 0x4
    unsigned char m_bSpecialAnimOverride; // offset 0x654, size 0x1
    unsigned char m_bCheckDrawCurtain; // offset 0x655, size 0x1
public:
    signed char m_PortalWalkMode; // offset 0x656, size 0x1
protected:
    unsigned char m_lowMotiveWalk; // offset 0x657, size 0x1
    unsigned char m_lowMotiveIdle; // offset 0x658, size 0x1
    unsigned char m_pendingLongIdle; // offset 0x659, size 0x1
    unsigned char m_pendingIdleOverlay; // offset 0x65A, size 0x1
    unsigned char m_PortalModeSet; // offset 0x65B, size 0x1
    unsigned char m_autoRunSet; // offset 0x65C, size 0x1
    class CasSimDescription * m_pNonCostumedSimDesc; // offset 0x660, size 0x4
    float m_lastRotation; // offset 0x664, size 0x4
    int boneIndex[12]; // offset 0x668, size 0x30
    unsigned int m_StateFlags; // offset 0x698, size 0x4
    unsigned int m_PendingStateFlags; // offset 0x69C, size 0x4
    class AwarenessManager * m_pAwarenessManager; // offset 0x6A0, size 0x4
    class EACTrack * m_pMonitoredTrack; // offset 0x6A4, size 0x4
    class SmoothRouteInterpolator * m_pRouteInterpolator; // offset 0x6A8, size 0x4
    float m_movingTurnRate; // offset 0x6AC, size 0x4
    unsigned char m_bMustComputeAnimationThisFrame; // offset 0x6B0, size 0x1
    class IKData * m_pikData[4]; // offset 0x6B4, size 0x10
    float m_raycast_elevation[4]; // offset 0x6C4, size 0x10
    class RaycastLastHit m_raycast_elevation_cache[4]; // offset 0x6D4, size 0xC0
    class EVec2 m_LastRaycastSimPosition; // offset 0x794, size 0x8
    float m_LastRaycastSimDir; // offset 0x79C, size 0x4
    enum eLocomotionState m_locomotion_state; // offset 0x7A0, size 0x4
    float m_terrain_swim_height; // offset 0x7A4, size 0x4
public:
    unsigned char m_bFollowingDCSim; // offset 0x7A8, size 0x1
    class cXObject * m_pPathFindingGoalObject; // offset 0x7AC, size 0x4
    class EVec3 m_LastPosOfTargetSim; // offset 0x7B0, size 0xC
    class FTilePt m_LastTileOfTargetSim; // offset 0x7BC, size 0x8
    class StackElem m_CurrentStackElem; // offset 0x7C4, size 0x18
    class RoutingSlot m_CurrentRoutingSlot; // offset 0x7DC, size 0x3C
    unsigned char m_bNoDirectRouteAvailable; // offset 0x818, size 0x1
    class Interaction m_RoutingInteraction; // offset 0x81C, size 0x40
    unsigned char m_bFollowingNewRoute; // offset 0x85C, size 0x1
    unsigned char m_bWaitingForNewRoute; // offset 0x85D, size 0x1
    class cXObject * m_GoHereObject; // offset 0x860, size 0x4
    unsigned char m_bTerminateCurrentRoute; // offset 0x864, size 0x1
protected:
    class EBoneParticle * m_pWaterEffect; // offset 0x868, size 0x4
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
    struct EPropItem * * mpBegin; // offset 0x0, size 0x4
    struct EPropItem * * mpEnd; // offset 0x4, size 0x4
    struct EPropItem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
enum BoneIdx {
    kRightHandBoneID = 0,
    kLeftHandBoneID = 1,
    kHeadBoneID = 2,
    kPelvisBoneID = 3,
    kTorsoBoneID = 4,
    kSpineBone0ID = 5,
    kSpineBone1ID = 6,
    kSpineBone2ID = 7,
    kNeckBone0ID = 8,
    kNeckBone1ID = 9,
    kLeftFootBoneID = 10,
    kRightFootBoneID = 11,
    kBoneIDMax = 12,
};
// total size: 0x4
class SAnimator {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    unsigned int * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    char * * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    unsigned char * pData; // offset 0x0, size 0x4
};
// total size: 0x18
struct BodyPartGeometryTSC6 {
    // Members
    char * setName; // offset 0x0, size 0x4
    class VECTOR models; // offset 0x4, size 0x4
    class VECTOR textureVariations; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    unsigned int hitPoints; // offset 0x10, size 0x4
    class VECTOR armor; // offset 0x14, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartGeometryTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x10
struct BodyPartTextureTSC6 {
    // Members
    char * setName; // offset 0x0, size 0x4
    unsigned int texture; // offset 0x4, size 0x4
    unsigned int textureIcon; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartTextureTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct BodyPartSkinTSC6 {
    // Members
    char * setName; // offset 0x0, size 0x4
    class VECTOR textures; // offset 0x4, size 0x4
    unsigned int hitPoints; // offset 0x8, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartSkinTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x48
struct SimPartsTSC6 {
    // Members
    class VECTOR bodyparts[13]; // offset 0x0, size 0x34
    class VECTOR tattoos[4]; // offset 0x34, size 0x10
    class VECTOR skin; // offset 0x44, size 0x4
};
// total size: 0x8
struct BodyPartStyleInfoTSC6 {
    // Members
    char * styleCode; // offset 0x0, size 0x4
    unsigned char numDegradationStates; // offset 0x4, size 0x1
    unsigned char nextStyleIndexDegrade; // offset 0x5, size 0x1
    unsigned char nextStyleIndexRepair; // offset 0x6, size 0x1
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartStyleInfoTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x8
struct BodyPartModelInfoTSC6 {
    // Members
    char * modelCode; // offset 0x0, size 0x4
    class VECTOR styles; // offset 0x4, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartModelInfoTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x18
struct BodyPartTypeInfoTSC6 {
    // Members
    char * name; // offset 0x0, size 0x4
    char * modelDir; // offset 0x4, size 0x4
    class VECTOR models; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    class VECTOR defaultClothingSetIndex; // offset 0x10, size 0x4
    class VECTOR nudeClothingSetIndex; // offset 0x14, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct BodyPartTypeInfoTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    int * pData; // offset 0x0, size 0x4
};
// total size: 0x1C
struct LatticeMorphTSC6 {
    // Members
    int numKeyframes; // offset 0x0, size 0x4
    int keyframeIndexStart; // offset 0x4, size 0x4
    int keyframeIndexEnd; // offset 0x8, size 0x4
    class VECTOR keyframeForBodyType; // offset 0xC, size 0x4
    float morphRangeBegin; // offset 0x10, size 0x4
    float morphRangeEnd; // offset 0x14, size 0x4
    class VECTOR morphValueForBodyType; // offset 0x18, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct LatticeMorphTSC6 * pData; // offset 0x0, size 0x4
};
// total size: 0x38
struct BodyPartTypeInfoTableTSC6 {
    // Members
    class VECTOR bodyPartTypeInfo; // offset 0x0, size 0x4
    class VECTOR typeCode; // offset 0x4, size 0x4
    char * reflectionMaskCode; // offset 0x8, size 0x4
    char * lowResCode; // offset 0xC, size 0x4
    char * iconCode; // offset 0x10, size 0x4
    class VECTOR bodyTypes; // offset 0x14, size 0x4
    class VECTOR latticeMorph; // offset 0x18, size 0x4
    class VECTOR morphTargetValues; // offset 0x1C, size 0x4
    float morphTargetValueNormal; // offset 0x20, size 0x4
    class VECTOR skinColors; // offset 0x24, size 0x4
    class VECTOR skinStyleCodes; // offset 0x28, size 0x4
    signed short skinHitPoints; // offset 0x2C, size 0x2
    float skinDamageReductionClothingHitPointThreshold; // offset 0x30, size 0x4
    unsigned char skinNumDegradationStates; // offset 0x34, size 0x1
};
// total size: 0x1C
struct TextureBlendInfo {
    // Members
    unsigned int nTextureID; // offset 0x0, size 0x4
    unsigned int nReflectionMaskID; // offset 0x4, size 0x4
    class TRect destRect; // offset 0x8, size 0x8
    enum eBodyPart bodyPart; // offset 0x10, size 0x4
    enum eSimPartsMapLocation nQuadrantNumber; // offset 0x14, size 0x4
    unsigned char bIsLayered; // offset 0x18, size 0x1
};
// total size: 0x4
class FamilyMember {
    // Members
    int fGUID; // offset 0x0, size 0x4
};
// total size: 0x4
class Family {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x18
struct CatalogToken {
    // Members
    int m_ID; // offset 0x0, size 0x4
    class ELocString m_Name; // offset 0x4, size 0x4
    class ELocString m_Desc; // offset 0x8, size 0x4
    unsigned int m_SmallIconID; // offset 0xC, size 0x4
    unsigned int m_LargeIconID; // offset 0x10, size 0x4
    int m_Sort; // offset 0x14, size 0x4
};
// total size: 0x24
struct InventoryTokens {
    // Static members
    static int kFlagsDye; // size: 0x4
    static int kFlagsPropUsed; // size: 0x4
    static int kFlagsCatalogToken; // size: 0x4
    static int kFlagsCanBePlanted; // size: 0x4
    static int kFlagsIdentification; // size: 0x4
    static int kFlagsInHand; // size: 0x4
    static int kFlagsEatFromInventory; // size: 0x4
    static int kFlagsFastTool; // size: 0x4
    static int kFlagsObject; // size: 0x4
    static int kFlagsFood; // size: 0x4
    static int kFlagsResource; // size: 0x4
    static int kFlagsTool; // size: 0x4

    // Members
    int GUID; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    struct CatalogToken * catalogRef; // offset 0x8, size 0x4
    unsigned short ID; // offset 0xC, size 0x2
    unsigned short FCS_ID; // offset 0xE, size 0x2
    unsigned short harvestHeight; // offset 0x10, size 0x2
    unsigned short propIndex; // offset 0x12, size 0x2
    signed short replenishRate; // offset 0x14, size 0x2
    int seedSourceGUID; // offset 0x18, size 0x4
    unsigned short toolClass; // offset 0x1C, size 0x2
    unsigned short toolClassHarvest; // offset 0x1E, size 0x2
    unsigned short toolLevel; // offset 0x20, size 0x2
    unsigned short toolLevelHarvest; // offset 0x22, size 0x2
};
// total size: 0x8
class InventoryItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    signed short m_nInstanceID; // offset 0x4, size 0x2
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
    class InventoryItem * * mpBegin; // offset 0x0, size 0x4
    class InventoryItem * * mpEnd; // offset 0x4, size 0x4
    class InventoryItem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct ClothingItems {
    // Members
    signed short tokenID; // offset 0x0, size 0x2
    const char * bodyPart; // offset 0x4, size 0x4
    const char * clothingSetName; // offset 0x8, size 0x4
    struct CatalogToken * catalogToken; // offset 0xC, size 0x4
};
// total size: 0x20
class InventoryItems {
    // Static members
    static signed short s_nNextInstanceID; // size: 0x2
    static signed short kMAX_INSTANCE_ID; // size: 0x2
    static unsigned char MaxNonTokenItems; // size: 0x1
    static char * ItemStatusArray[]; // size: 0x0
    static int ItemStatusArraySize; // size: 0x4

    // Members
    unsigned char mNonTokenCount; // offset 0x0, size 0x1
    class vector mItems; // offset 0x4, size 0x10
    class Family * mFamily; // offset 0x14, size 0x4
    int * gatheredList; // offset 0x18, size 0x4
    int gatheredListSize; // offset 0x1C, size 0x4
};
enum eLatticeMorphRegion {
    kLATTICE_MORPH_REGION_SIM_BEGIN = 0,
    kLATTICE_MORPH_REGION_SIM_HEAD = 0,
    kLATTICE_MORPH_REGION_SIM_TORSO = 1,
    kLATTICE_MORPH_REGION_SIM_ARMS = 2,
    kLATTICE_MORPH_REGION_SIM_LEGS = 3,
    kLATTICE_MORPH_REGION_SIM_END = 3,
    kLATTICE_MORPH_REGION_PET_BEGIN = 4,
    kLATTICE_MORPH_REGION_PET_BODY = 4,
    kLATTICE_MORPH_REGION_PET_END = 4,
    kLATTICE_MORPH_REGION_INVALID_REGION = 5,
    kNUM_LATTICE_MORPH_REGIONS_SIM = 4,
    kNUM_LATTICE_MORPH_REGIONS_PET = 0,
    kNUM_LATTICE_MORPH_REGIONS = 4,
    kNUM_LATTICE_MORPH_CONNECTIONS_PER_BODY_PART_SIM_TSC5 = 7,
    kNUM_LATTICE_MORPH_CONNECTIONS_PER_BODY_PART_SIM_TSC6 = 3,
};
// total size: 0x334
class CasSimDescription {
    // Static members
    static unsigned char s_nudeTattooIndex[4][2]; // size: 0x8
    static char s_SimPartsMapNames[4][4]; // size: 0x10
    static signed short sSimDescUniqueIdentifier; // size: 0x2
    static signed short sCharDescDefaultUniqueIdentifier; // size: 0x2
    static int kINVALID_THUMBNAIL_INDEX; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned short m_firstName[32]; // offset 0x4, size 0x40
    unsigned short m_lastName[32]; // offset 0x44, size 0x40
    int m_nThumbnailIndex; // offset 0x84, size 0x4
private:
    signed short m_nUniqueIdentifier; // offset 0x88, size 0x2
    signed char m_nVersion; // offset 0x8A, size 0x1
    class BitFlags m_nCharacterDescriptionFlags; // offset 0x8C, size 0x4
    const struct SimPartsTSC6 * m_pBodyData; // offset 0x90, size 0x4
    const struct BodyPartTypeInfoTableTSC6 * m_pBodyPartTypeInfoTable; // offset 0x94, size 0x4
    class SimBodyPart * m_pBodyPart[15]; // offset 0x98, size 0x3C
    float m_fLatticeMorphValues[4]; // offset 0xD4, size 0x10
    float m_fMorphTargetValues[4]; // offset 0xE4, size 0x10
    unsigned char m_nTattooIndex[4]; // offset 0xF4, size 0x4
    unsigned char m_nPersonalityVal[5]; // offset 0xF8, size 0x5
    unsigned char m_nArchetype; // offset 0xFD, size 0x1
    unsigned char m_nBodyType; // offset 0xFE, size 0x1
    unsigned char m_nSkinColor; // offset 0xFF, size 0x1
    unsigned char m_nSkinDegradationState; // offset 0x100, size 0x1
    signed short m_nCurrentSkinHitPoints; // offset 0x102, size 0x2
    class SimBodyPartHead m_bodyPartHead; // offset 0x104, size 0x24
    class SimBodyPartFacialFeature m_bodyPartFacialFeature; // offset 0x128, size 0x2C
    class SimBodyPartHair m_bodyPartHair; // offset 0x154, size 0x2C
    class SimBodyPartGlasses m_bodyPartGlasses; // offset 0x180, size 0x24
    class SimBodyPartTorso m_bodyPartTorso; // offset 0x1A4, size 0x24
    class SimBodyPartLowerBody m_bodyPartLowerBody; // offset 0x1C8, size 0x24
    class SimBodyPartShoes m_bodyPartShoes; // offset 0x1EC, size 0x24
    class SimBodyPartHat m_bodyPartHat; // offset 0x210, size 0x24
    class SimBodyPartNecklaceEarring m_bodyPartNecklaceEarring; // offset 0x234, size 0x24
    class SimBodyPartArmAccessory m_bodyPartArmAccessory; // offset 0x258, size 0x24
    class SimBodyPartBelt m_bodyPartBelt; // offset 0x27C, size 0x24
    class SimBodyPartAddonUpperBody m_bodyPartAddonUpperBody; // offset 0x2A0, size 0x24
    class SimBodyPartAddonLowerBody m_bodyPartAddonLowerBody; // offset 0x2C4, size 0x24
    class SimBodyPartSleeves m_bodyPartSleeves; // offset 0x2E8, size 0x28
    class SimBodyPartUnused m_bodyPartUnused; // offset 0x310, size 0x24
};
// total size: 0x24
class SimBodyPartHead : public SimBodyPart {};
// total size: 0x2C
class SimBodyPartFacialFeature : public SimBodyPart {
    // Members
    int m_nCurrentHitPoints; // offset 0x24, size 0x4
    unsigned char m_bIsDamaged; // offset 0x28, size 0x1
};
// total size: 0x2C
class SimBodyPartHair : public SimBodyPart {
    // Members
    int m_nCurrentHitPoints; // offset 0x24, size 0x4
    unsigned char m_bIsDamaged; // offset 0x28, size 0x1
};
// total size: 0x24
class SimBodyPartGlasses : public SimBodyPart {};
// total size: 0x24
class SimBodyPartTorso : public SimBodyPart {};
// total size: 0x24
class SimBodyPartLowerBody : public SimBodyPart {};
// total size: 0x24
class SimBodyPartShoes : public SimBodyPart {};
// total size: 0x24
class SimBodyPartHat : public SimBodyPart {};
// total size: 0x24
class SimBodyPartNecklaceEarring : public SimBodyPart {};
// total size: 0x24
class SimBodyPartArmAccessory : public SimBodyPart {};
// total size: 0x24
class SimBodyPartBelt : public SimBodyPart {};
// total size: 0x24
class SimBodyPartAddonUpperBody : public SimBodyPart {};
// total size: 0x24
class SimBodyPartAddonLowerBody : public SimBodyPart {};
// total size: 0x28
class SimBodyPartSleeves : public SimBodyPart {
    // Members
    unsigned char m_nModelIndexOffset; // offset 0x24, size 0x1
};
// total size: 0x24
class SimBodyPartUnused : public SimBodyPart {};
// total size: 0xC
struct HandleNode {
    // Members
    unsigned int allocSize; // offset 0x0, size 0x4
    void * ptr; // offset 0x4, size 0x4
    unsigned char owned; // offset 0x8, size 0x1
};
enum OpenFlags {
    kJustOpen = 0,
    kCreate = 1,
    kOverwrite = 2,
    kReset = 3,
};
// total size: 0x10
class iResFile {
    // Static members
    static class iResFile * sFileList; // size: 0x4

    // Members
protected:
    class iResFile * fNextFile; // offset 0x0, size 0x4
    int fLastError; // offset 0x4, size 0x4
    const struct ResFile * mpResFileData; // offset 0x8, size 0x4
public:
    void * __vptr$; // offset 0xC, size 0x4
};
// total size: 0x4
class AnimTable {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x1
class PlumbBobOwner {};
// total size: 0x370
class ESimShadow : public EIStaticModel {
    // Members
public:
    class cXPerson * m_pPerson; // offset 0x368, size 0x4
};
enum eSkinChangeState {
    kSIM_SKINCHANGE_STATE_NONE = -1,
    kSIM_SKINCHANGE_STATE_BEGIN = 0,
    kSIM_SKINCHANGE_STATE_WAIT = 1,
    kSIM_SKINCHANGE_STATE_END = 2,
};
// total size: 0x748
class ESim : public ISimInstance, public PlumbBobOwner {
    // Static members
    static int s_nNumInitializingSims; // size: 0x4
    static int kNUM_FRAMES_TO_SYNC_ENTITY_ON_INITIAL_SIM_DRAW; // size: 0x4
    static volatile class ESim * s_changingSim; // size: 0x4
    static float PLUMBOB_POP_MAXSIZE; // size: 0x4
    static float PLUMBOB_TRANSITION_TIME; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    int m_nFramesToSyncEntityOnSimInitWiiHack; // offset 0x4C4, size 0x4
    class EOrderTableData m_otd; // offset 0x4C8, size 0x3C
    class EOrderTableData m_otdCensorRect; // offset 0x504, size 0x3C
    class EOrderTableData m_otdSkillMeter; // offset 0x540, size 0x3C
    class EOrderTableData m_otdProps; // offset 0x57C, size 0x3C
    class EOrderTableData m_otdFurCards; // offset 0x5B8, size 0x3C
    struct ELights m_propLights; // offset 0x5F4, size 0xF8
    class cXPerson * m_pPerson; // offset 0x6EC, size 0x4
    class SimModelTSC6 * m_pSimModel; // offset 0x6F0, size 0x4
    class ESimShadow * m_pShadow; // offset 0x6F4, size 0x4
    class ERModel * m_pPlumbBob; // offset 0x6F8, size 0x4
    unsigned int m_plumbBobState; // offset 0x6FC, size 0x4
    float m_skillmeterValue; // offset 0x700, size 0x4
    float m_plumbBobTransitionTime; // offset 0x704, size 0x4
    class ERModel * m_pTrackBase; // offset 0x708, size 0x4
    float m_scaletime; // offset 0x70C, size 0x4
    int m_ring_S0; // offset 0x710, size 0x4
    int m_ring_S1; // offset 0x714, size 0x4
    class ERModel * m_curtainModel; // offset 0x718, size 0x4
    float m_curtainCurrentHeight; // offset 0x71C, size 0x4
    class ESpriteRender * m_pSkillMeterRenderer; // offset 0x720, size 0x4
    class ESims3DHead * m_pSimHead; // offset 0x724, size 0x4
    unsigned int m_nTypeOfObject; // offset 0x728, size 0x4
    int m_prevFrameCensorState; // offset 0x72C, size 0x4
    enum eSkinChangeState m_SkinChangeStage; // offset 0x730, size 0x4
    int m_iQueueCount; // offset 0x734, size 0x4
    unsigned char m_bCurrentlyChangingOutfit; // offset 0x738, size 0x1
    unsigned char m_bUseVanityDraw; // offset 0x739, size 0x1
    unsigned char m_bDontDrawCurtainWhenChangingSkin; // offset 0x73A, size 0x1
    unsigned char m_bDrawSim; // offset 0x73B, size 0x1
    unsigned char m_curtainIsVisible; // offset 0x73C, size 0x1
    unsigned char m_curtainShouldBeVisible; // offset 0x73D, size 0x1
    unsigned char m_queuedOperationInProgress; // offset 0x73E, size 0x1
    unsigned char m_drawSimThisFrame; // offset 0x73F, size 0x1
    unsigned char m_removeMorphResource; // offset 0x740, size 0x1
    unsigned char m_bSimIsHidden; // offset 0x741, size 0x1
    unsigned char m_bSkipDrawNextFrame; // offset 0x742, size 0x1
    unsigned char m_bIsModelLoaded; // offset 0x743, size 0x1
    unsigned char m_bUpdateSimModel; // offset 0x744, size 0x1
    unsigned char m_bCheckThumbnail; // offset 0x745, size 0x1
};
// total size: 0xC
class cIGZSnd {
    // Members
public:
    unsigned char m_IsFootStep; // offset 0x0, size 0x1
    float m_timeToPlayAt; // offset 0x4, size 0x4
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0x4
class cIGZSndSys {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x14
struct SoundEventInfo {
    // Members
    int m_objectID; // offset 0x0, size 0x4
    int m_EventID; // offset 0x4, size 0x4
    float m_time_call; // offset 0x8, size 0x4
    int m_delay_mod; // offset 0xC, size 0x4
    unsigned char m_isFootstep; // offset 0x10, size 0x1
};
// total size: 0x4
struct ListIterator {
    // Members
    struct ListNode * mpNode; // offset 0x0, size 0x4
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
class list : public ListBase {};
// total size: 0xC
class TArray {
    // Members
protected:
    class TArray * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x30
class ERSoundEvent : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    unsigned short m_volume; // offset 0x14, size 0x2
    unsigned int m_eventType : 5; // offset 0x14, size 0x4
    unsigned int m_argsType : 2; // offset 0x14, size 0x4
    unsigned int m_loop : 1; // offset 0x14, size 0x4
    unsigned int m_duckingPri : 5; // offset 0x14, size 0x4
    unsigned int m_controlGroup : 2; // offset 0x14, size 0x4
    unsigned int m_interrupt : 1; // offset 0x14, size 0x4
    unsigned int m_prob : 7; // offset 0x18, size 0x4
    unsigned int m_duck : 2; // offset 0x18, size 0x4
    unsigned int m_pad : 1; // offset 0x18, size 0x4
    unsigned char m_superduck; // offset 0x1A, size 0x1
    unsigned char m_minRange; // offset 0x1B, size 0x1
    unsigned char m_maxRange; // offset 0x1C, size 0x1
    class TArray m_hitlists; // offset 0x20, size 0xC
    class ERSoundTrackData * m_trackData; // offset 0x2C, size 0x4
};
enum eMode {
    kNoMode = 0,
    kLive = 1,
    kFrontEnd = 2,
    kLoad = 3,
    kCAS = 4,
    kDiskOpen = 5,
    kBuildBuy = 6,
};
// total size: 0x20
class cSoundPlayer {
    // Members
    unsigned char fInitialized; // offset 0x0, size 0x1
    class cIGZSndSys * fTheSystem; // offset 0x4, size 0x4
    unsigned char m_SoundOn; // offset 0x8, size 0x1
    unsigned char m_SoundPaused; // offset 0x9, size 0x1
    struct ListIterator m_kill_index; // offset 0xC, size 0x4
    unsigned char m_kill; // offset 0x10, size 0x1
    class list m_event_list; // offset 0x14, size 0xC
};
enum eLocomotionState {
    SANIMATOR2_LOCOMOTION_LAND = 0,
    SANIMATOR2_LOCOMOTION_WATER = 1,
};
// total size: 0x78
class EBoneParticle {
    // Members
public:
    struct ClientParams m_effectClientParams; // offset 0x0, size 0x50
    class cXPerson * m_pPerson; // offset 0x50, size 0x4
    int m_boneId; // offset 0x54, size 0x4
    class EIParticleEmit * m_pEmit; // offset 0x58, size 0x4
    class ERParticleType * m_pType; // offset 0x5C, size 0x4
    unsigned int m_effectId; // offset 0x60, size 0x4
    enum AttachmentEffectType m_effectType; // offset 0x64, size 0x4
    class FastParticleEmitter * m_pFastParticleEmitter; // offset 0x68, size 0x4
    class REffectsEmitter * m_pREffectsEmitter; // offset 0x6C, size 0x4
    unsigned char m_bStopImmediate; // offset 0x70, size 0x1
    unsigned char m_bShouldContinueOnSkillStart; // offset 0x71, size 0x1
};
// total size: 0xC
struct AnimParticleData {
    // Members
    int m_boneId; // offset 0x0, size 0x4
    unsigned int m_effectId; // offset 0x4, size 0x4
    signed short m_effectTypeAndFlags; // offset 0x8, size 0x2
    signed short m_sortOffset; // offset 0xA, size 0x2
};
// total size: 0xD44
class EffectsAttachmentManager : public EResourceManager {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class FTilePt * mpBegin; // offset 0x0, size 0x4
    class FTilePt * mpEnd; // offset 0x4, size 0x4
    class FTilePt * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x1
struct copy_generic_iterator {};
// total size: 0x1
struct copy_impl {};
// total size: 0x64
class AwarenessManager {
    // Static members
    static float kAwarenessSmallEpsilon; // size: 0x4
    static float kMaxDistance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int m_stateFlags; // offset 0x4, size 0x4
    class SAnimator2 * m_pSAnimator; // offset 0x8, size 0x4
    class EAnimController * m_pAC; // offset 0xC, size 0x4
    class EVec3 m_faceRot; // offset 0x10, size 0xC
    float m_timeFromLastAwarenessCheck; // offset 0x1C, size 0x4
    int m_activeMemoryCategory; // offset 0x20, size 0x4
    enum eAwarenessAction m_awarenessAction; // offset 0x24, size 0x4
    class cXObject * m_pAwareOfObject; // offset 0x28, size 0x4
    class EVec3 m_GoalAwarenessDirection; // offset 0x2C, size 0xC
    int m_headBoneIndex; // offset 0x38, size 0x4
    int m_torsoBoneIndex; // offset 0x3C, size 0x4
    float m_timeMultiplier; // offset 0x40, size 0x4
    float m_pauseMultiplier; // offset 0x44, size 0x4
    class cXPerson * m_pPerson; // offset 0x48, size 0x4
    class ESim * m_pSim; // offset 0x4C, size 0x4
    unsigned int m_pendingAnim; // offset 0x50, size 0x4
    unsigned int m_pendingMemoryAwarenessAnim; // offset 0x54, size 0x4
    int m_PropId; // offset 0x58, size 0x4
    float m_HungerTimer; // offset 0x5C, size 0x4
    const struct AnimRef * m_PassiveInfluenceSkill; // offset 0x60, size 0x4
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
class list : public ListBase {};
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
class PassiveInfluenceObject : public PassiveInfluenceItem {
    // Members
public:
    class cXObject * m_pObj; // offset 0x4, size 0x4
    class vector m_TileVector; // offset 0x8, size 0x10
    signed char m_areaType; // offset 0x18, size 0x1
    signed char m_areaSize; // offset 0x19, size 0x1
    signed char m_flags; // offset 0x1A, size 0x1
    signed char m_category; // offset 0x1B, size 0x1
};
// total size: 0xC
class list : public ListBase {};
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
// total size: 0x8
struct pair {
    // Members
    class cXObject * first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
};
// total size: 0x10
struct ListNode : public ListNodeBase {
    // Members
    struct pair mValue; // offset 0x8, size 0x8
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
class list : public ListBase {};
// total size: 0x28
class PassiveInfluenceTarget : public PassiveInfluenceItem {
    // Members
public:
    class cXObject * m_pObj; // offset 0x4, size 0x4
    class vector m_TileVector; // offset 0x8, size 0x10
    signed char m_category; // offset 0x18, size 0x1
    class list m_lockoutList; // offset 0x1C, size 0xC
};
// total size: 0xC
class list : public ListBase {};
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
// total size: 0x20
class PassiveInfluenceMovable : public PassiveInfluenceItem {
    // Static members
    static class vector m_TileVector; // size: 0x10

    // Members
public:
    class cXObject * m_pObj; // offset 0x4, size 0x4
    class vector m_motiveEffects; // offset 0x8, size 0x10
    int m_radius; // offset 0x18, size 0x4
    unsigned char m_useMFJHrules; // offset 0x1C, size 0x1
};
// total size: 0xC
class list : public ListBase {};
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
// total size: 0x20
class PassiveInfluencePortal : public PassiveInfluenceItem {
    // Static members
    static signed short lotToDisplayTextFor; // size: 0x2
    static class vector m_TileVector; // size: 0x10

    // Members
public:
    class cXObject * m_pObj; // offset 0x4, size 0x4
    class list m_lockoutList; // offset 0x8, size 0xC
    int m_textRadius; // offset 0x14, size 0x4
    int m_triggerRadius; // offset 0x18, size 0x4
    signed short lotID; // offset 0x1C, size 0x2
};
// total size: 0xC
class list : public ListBase {};
// total size: 0x3C
class PassiveInfluenceSystem {
    // Static members
    static class PassiveInfluenceSystem * s_passiveInfluenceSystem; // size: 0x4

    // Members
    class list m_personList; // offset 0x0, size 0xC
    class list m_objectList; // offset 0xC, size 0xC
    class list m_targetList; // offset 0x18, size 0xC
    class list m_movableList; // offset 0x24, size 0xC
    class list m_portalList; // offset 0x30, size 0xC
};
// total size: 0xC
struct EButtonFilter {
    // Members
    unsigned int m_filterId; // offset 0x0, size 0x4
    unsigned int m_filterPriority; // offset 0x4, size 0x4
    unsigned int m_filterMask; // offset 0x8, size 0x4
};
// total size: 0x8
struct EBtnToCmdAssoc {
    // Members
    unsigned int nCommandId; // offset 0x0, size 0x4
    unsigned int nBitfield; // offset 0x4, size 0x4
};
// total size: 0x10
struct EVibrateState {
    // Members
    float m_IntensityOne; // offset 0x0, size 0x4
    float m_IntensityTwo; // offset 0x4, size 0x4
    float m_DelayOne; // offset 0x8, size 0x4
    float m_DelayTwo; // offset 0xC, size 0x4
};
// total size: 0x208
class EController {
    // Static members
    static int _nCtrlPads; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int m_id; // offset 0x4, size 0x4
    int m_status; // offset 0x8, size 0x4
    int m_filterStackTop; // offset 0xC, size 0x4
    struct EButtonFilter m_filterStack[32]; // offset 0x10, size 0x180
    unsigned char m_bAxesSwapped[2]; // offset 0x190, size 0x2
    int m_axisDirection[2][2]; // offset 0x194, size 0x10
    struct EBtnToCmdAssoc * m_pButtonToCommand; // offset 0x1A4, size 0x4
    int m_numCommands; // offset 0x1A8, size 0x4
    unsigned char m_bIsControlFaked; // offset 0x1AC, size 0x1
    unsigned int m_fakeButtons; // offset 0x1B0, size 0x4
    unsigned int m_autoRepeatState; // offset 0x1B4, size 0x4
    unsigned char m_autoRepeat[32]; // offset 0x1B8, size 0x20
    unsigned char m_autoRepeatDelay; // offset 0x1D8, size 0x1
    unsigned char m_autoRepeatRate; // offset 0x1D9, size 0x1
    struct EVibrateState m_MotorStates; // offset 0x1DC, size 0x10
    struct EVibrateState m_MotorStatesBackup; // offset 0x1EC, size 0x10
    class EControllerData * m_pControllerThreadData; // offset 0x1FC, size 0x4
    class EControllerData * m_pControllerAppData; // offset 0x200, size 0x4
    unsigned char m_bEnableVibration; // offset 0x204, size 0x1
};
// total size: 0x1
struct copy_impl {};
enum eFollowMode {
    kFollowModeNone = 0,
    kFollowStart = 1,
    kFollowSidestep = 2,
    kFollowMiddle = 3,
    kFollowEnd = 4,
    kFollowDone = 5,
    kAwarenessFollowStart = 6,
    kAwarenessFollowMiddle = 7,
    kAwarenessFollowEnd = 8,
    kFirstAwarenessFollowMode = 6,
};
enum eWalkRunStyle {
    kWalkingStyle = 0,
    kRunningStyle = 1,
    kImmediateRunStyle = 2,
    kTiredWalkStyle = 3,
    kBladderLowWalkStyle = 4,
    kPreSidestepStyle = 5,
    kSidestepStyle = 6,
    kPostSidestepStyle = 7,
    kFreeMoveWalkStyle = 8,
    kFreeMoveRunStyle = 9,
};
enum Mode {
    kReading = 0,
    kWriting = 1,
    kCounting = 2,
};
// total size: 0x4
class BString {
    // Static members
    static class basic_string_ref defaultReference; // size: 0x10

    // Members
    class basic_string_ref * reference; // offset 0x0, size 0x4
};
// total size: 0x8
class StringBuffer2 {
    // Members
    unsigned short * fMem; // offset 0x0, size 0x4
    unsigned int fCapacity; // offset 0x4, size 0x4
};
// total size: 0x28
class ReconBuffer {
    // Members
    void * fData; // offset 0x0, size 0x4
    int fSize; // offset 0x4, size 0x4
    int fPosition; // offset 0x8, size 0x4
    enum Mode fMode; // offset 0xC, size 0x4
    unsigned char fSwizzle; // offset 0x10, size 0x1
    unsigned char fUsesStringTable; // offset 0x11, size 0x1
    unsigned char fCmprsOn; // offset 0x12, size 0x1
    class StringSet * fStrings; // offset 0x14, size 0x4
    int fLastStringIndex; // offset 0x18, size 0x4
    int fBits; // offset 0x1C, size 0x4
    int fNextMask; // offset 0x20, size 0x4
    int fMarkPos; // offset 0x24, size 0x4
};
enum ObjectStyle {
    kStyleNone = 0,
    kStyleMakeshift = 1,
    kStyleSurvival = 2,
    kStyleDurable = 3,
    kStyleStylish = 4,
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
    class CTilePt * mpBegin; // offset 0x0, size 0x4
    class CTilePt * mpEnd; // offset 0x4, size 0x4
    class CTilePt * mpCapacity; // offset 0x8, size 0x4
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
    class EVec3 * mpBegin; // offset 0x0, size 0x4
    class EVec3 * mpEnd; // offset 0x4, size 0x4
    class EVec3 * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    unsigned short first; // offset 0x0, size 0x2
    class Room * second; // offset 0x4, size 0x4
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
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
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
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
enum Sides {
    kRoomNone = 0,
    kRoomLeft = 1,
    kRoomBelow = 2,
    kRoomRight = 3,
    kRoomAbove = 4,
};
// total size: 0x8
struct DiagonalNode {
    // Members
    unsigned short mID; // offset 0x0, size 0x2
    enum Sides mSide; // offset 0x4, size 0x4
};
// total size: 0x10
struct pair {
    // Members
    struct DiagonalNode first; // offset 0x0, size 0x8
    struct DiagonalNode second; // offset 0x8, size 0x8
};
// total size: 0x14
struct pair {
    // Members
    class CTilePt first; // offset 0x0, size 0x3
    struct pair second; // offset 0x4, size 0x10
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
// total size: 0x44
class RoomManager {
    // Static members
    static class RoomManager * sRoomMgr; // size: 0x4

    // Members
    class map fRooms; // offset 0x0, size 0x1C
    class map fDiagonals; // offset 0x1C, size 0x1C
    unsigned char areRoomsDirty; // offset 0x38, size 0x1
    unsigned char fLightsInited; // offset 0x39, size 0x1
    float fOutdoorScore; // offset 0x3C, size 0x4
    float fOutdoorObjectScore; // offset 0x40, size 0x4
};
enum IterateType {
    kAll = 0,
};
// total size: 0xC
class ObjectIterator {
    // Members
    class cXObject * fRoot; // offset 0x0, size 0x4
    class cXObject * fCurrent; // offset 0x4, size 0x4
    enum IterateType fType; // offset 0x8, size 0x4
};
// total size: 0xA0
class Room {
    // Members
public:
    enum ObjectStyle m_LowestWallStyle; // offset 0x0, size 0x4
    enum ObjectStyle m_LowestRoofStyle; // offset 0x4, size 0x4
private:
    unsigned short fRoomID; // offset 0x8, size 0x2
    unsigned short m_lightingGroup; // offset 0xA, size 0x2
    class vector fRoomList; // offset 0xC, size 0x10
    class vector fLightPositions; // offset 0x1C, size 0x10
    class vector fPartition; // offset 0x2C, size 0x10
    int fUsed; // offset 0x3C, size 0x4
    class EVec3 m_roomIntensityColorScale; // offset 0x40, size 0xC
    unsigned char m_roomIntensityScaleDirty; // offset 0x4C, size 0x1
    float m_pointLightDimmer; // offset 0x50, size 0x4
    int fArea; // offset 0x54, size 0x4
    int fFlooredArea; // offset 0x58, size 0x4
    int fObjectCount; // offset 0x5C, size 0x4
    int fWindowLightContribution; // offset 0x60, size 0x4
    int fObjLightContribution; // offset 0x64, size 0x4
    int fDirtyTotal; // offset 0x68, size 0x4
    int fRoomImpactContribution; // offset 0x6C, size 0x4
    int fGoodObjectCount; // offset 0x70, size 0x4
    int fBedCount; // offset 0x74, size 0x4
    int fBathFixtureCount; // offset 0x78, size 0x4
    int fWallSegmentCount; // offset 0x7C, size 0x4
    int fPatternedWallSegmentCount; // offset 0x80, size 0x4
    float fBasicScore; // offset 0x84, size 0x4
    float fLightLevel; // offset 0x88, size 0x4
    unsigned char fDirty; // offset 0x8C, size 0x1
    unsigned char fKnowIfOutside; // offset 0x8D, size 0x1
    unsigned char fOutside; // offset 0x8E, size 0x1
    unsigned char fOverheadLightsOn; // offset 0x8F, size 0x1
    unsigned char fIsPool; // offset 0x90, size 0x1
    class RoomManager * fRoomManager; // offset 0x94, size 0x4
    int fLampCount; // offset 0x98, size 0x4
    int fPeopleCount; // offset 0x9C, size 0x4
};
// total size: 0x10
struct RouteGoal {
    // Members
    class FTilePt loc; // offset 0x0, size 0x8
    int score; // offset 0x8, size 0x4
    signed short chairID; // offset 0xC, size 0x2
    signed short entryDirFlag; // offset 0xE, size 0x2
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
    struct RouteGoal * mpBegin; // offset 0x0, size 0x4
    struct RouteGoal * mpEnd; // offset 0x4, size 0x4
    struct RouteGoal * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x14
class PenaltyRect {
    // Members
public:
    class IRect bounds; // offset 0x0, size 0x10
    int penalty; // offset 0x10, size 0x4
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
    class PenaltyRect * * mpBegin; // offset 0x0, size 0x4
    class PenaltyRect * * mpEnd; // offset 0x4, size 0x4
    class PenaltyRect * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct CBucket {
    // Members
    class vector m_PenaltyRectList; // offset 0x0, size 0x10
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
    class PenaltyRect * mpBegin; // offset 0x0, size 0x4
    class PenaltyRect * mpEnd; // offset 0x4, size 0x4
    class PenaltyRect * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x14
class CCollisionGrid {
    // Members
public:
    int m_BucketSize; // offset 0x0, size 0x4
    int m_WorldSize; // offset 0x4, size 0x4
    int m_BucketsPerSide; // offset 0x8, size 0x4
    struct CBucket * m_Buckets; // offset 0xC, size 0x4
    unsigned char m_bInitialized; // offset 0x10, size 0x1
};
enum EvalTile {
    kEvalTileOutOfBounds = 0,
    kEvalTileObstacle = 1,
    kEvalTileRoom = 2,
    kEvalTileWallInFront = 3,
    kEvalTilePersonObstacle = 4,
    kEvalTileAllClear = 5,
};
// total size: 0xA4
class XRoute : private vector {
    // Static members
    static class vector s_objPartition; // size: 0x10

    // Members
    class RoutingSlot fSlot; // offset 0x10, size 0x3C
    class cXObject * fDest; // offset 0x4C, size 0x4
    class cXObject * fStart; // offset 0x50, size 0x4
    int fCurGoal; // offset 0x54, size 0x4
    int fMaxScore; // offset 0x58, size 0x4
    int fTrapCount; // offset 0x5C, size 0x4
    int fWaitStartTicks; // offset 0x60, size 0x4
    class FTilePt fLastLocation; // offset 0x64, size 0x8
    class cXPortal * fCurPortal; // offset 0x6C, size 0x4
    class FTilePt fStartPt; // offset 0x70, size 0x8
    int fExitDirFlag; // offset 0x78, size 0x4
    unsigned char fValid; // offset 0x7C, size 0x1
    class cXPerson * fIgnore; // offset 0x80, size 0x4
    class cXPerson * fMoving; // offset 0x84, size 0x4
    unsigned char fMoveSuccess; // offset 0x88, size 0x1
    int fResult; // offset 0x8C, size 0x4
    signed short fBlockingObjectID; // offset 0x90, size 0x2
    unsigned char fIgnoreAllPeople; // offset 0x92, size 0x1
    int fMoveInteractionID; // offset 0x94, size 0x4
    signed short fFootprintMask; // offset 0x98, size 0x2
    int fMaxGoalCount; // offset 0x9C, size 0x4
    class CCollisionGrid * m_CollisionGrid; // offset 0xA0, size 0x4
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
    class XRoute * mpBegin; // offset 0x0, size 0x4
    class XRoute * mpEnd; // offset 0x4, size 0x4
    class XRoute * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum eAwarenessAction {
    kAwarenessNone = 0,
    kAwarenessHeadTurn = 1,
    kAwarenessUpperBodyAction = 2,
    kAwarenessWholeBodyAction = 3,
    kAwarenessNumAwarenessActions = 4,
};
// total size: 0xD44
class EAnimManager : public EResourceManager {};
enum eAnimState {
    kAnimStateSMIdle = 0,
    kAnimStateSMWalkRun = 1,
    kAnimStateSMStartShuffle = 2,
    kAnimStateSMEndShuffle = 3,
    kAnimStateSMSidestep = 4,
    kAnimStateSMSkill = 5,
    kAnimStateSocialModeStance = 6,
    kAnimStateSMSkillIdle = 7,
    kAnimStateFMContainedIdle = 8,
    kAnimStateFMIdle = 9,
    kAnimStateFMImpatientIdle = 10,
    kAnimStateFMRunStop = 11,
    kAnimStateFMTurning = 12,
    kAnimStateFMWalking = 13,
    kAnimStateFMRunning = 14,
    kAnimStateAWStartShuffle = 15,
    kAnimStateAWMiddle = 16,
    kAnimStateAWEndShuffle = 17,
    kAnimStateSMSitIdle = 18,
    kAnimStateFirstFMState = 9,
    kAnimStateFirstFMMovmentState = 13,
    kAnimStateLastFMMovmentState = 14,
    kAnimStateLastFMState = 14,
};
// total size: 0x4
class IBaseSimInstance {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4C8
class ISimInstance : public EIStaticModel, public IBaseSimInstance {
    // Static members
    static struct ELights _ERRORLightCur; // size: 0xF8
    static class EVec3 _ERRORLight; // size: 0xC
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class cXObject * m_pXOb; // offset 0x36C, size 0x4
    unsigned int m_cursFlags; // offset 0x370, size 0x4
    float m_cursorLightTime; // offset 0x374, size 0x4
    class EAnimController m_AC; // offset 0x378, size 0xAC
    int m_cachedInteractionExpires; // offset 0x424, size 0x4
    unsigned char m_cachedInterationPresent; // offset 0x428, size 0x1
public:
    class EIPortalPointLight * m_pPortalLight[2]; // offset 0x42C, size 0x8
    class RaycastLastHit m_lastElevationHit; // offset 0x434, size 0x30
    class RaycastLastHit m_lastBoundsHit; // offset 0x464, size 0x30
    class RaycastLastHit m_lastBndSphereHit; // offset 0x494, size 0x30
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
char * m_shoeTypeTable[4]; // size: 0x10, address: 0x80423B90
char * m_surfaceTypeTable[10]; // size: 0x28, address: 0x80423BA0
enum SurfaceType {
    kWood = 0,
    kSand = 1,
    kDirt = 2,
    kGrass = 3,
    kLeaves = 4,
    kMud = 5,
    kPebbles = 6,
    kStone = 7,
    kPuddle = 8,
    kSlosh = 9,
    kNumSurfaceType = 10,
};
enum ShoeType {
    kBare = 0,
    kShoe = 1,
    kPaw = 2,
    kHoof = 3,
    kNumShoeType = 4,
};
// total size: 0x2
class BitFlags {
    // Members
public:
    unsigned short value; // offset 0x0, size 0x2
};
enum eBodyPart {
    kSIM_BODY_PARTS_S2C_BEGIN = 0,
    kSIM_GLASSES_S2C = 0,
    kSIM_HEAD_S2C = 1,
    kSIM_HAIR_TOP_S2C = 2,
    kSIM_HAIR_BOTTOM_S2C = 3,
    kSIM_HAIR_ACCESSORY1_S2C = 4,
    kSIM_HAIR_ACCESSORY2_S2C = 5,
    kSIM_HAIR_ACCESSORY3_S2C = 6,
    kSIM_INNER_LAYER_TORSO_TORSO_S2C = 7,
    kSIM_INNER_LAYER_TORSO_SLEEVE_S2C = 8,
    kSIM_MID_LAYER_TORSO_TORSO_S2C = 9,
    kSIM_MID_LAYER_TORSO_COLLAR_S2C = 10,
    kSIM_MID_LAYER_TORSO_SLEEVE_S2C = 11,
    kSIM_OUTER_LAYER_TORSO_TORSO_S2C = 12,
    kSIM_OUTER_LAYER_TORSO_COLLAR_S2C = 13,
    kSIM_OUTER_LAYER_TORSO_SLEEVE_S2C = 14,
    kSIM_LOWERBODY_S2C = 15,
    kSIM_SHOES_SHOE_S2C = 16,
    kSIM_SHOES_BOOTTOP_S2C = 17,
    kSIM_FACIALFEATURE_S2C = 18,
    kSIM_HAT_S2C = 19,
    kSIM_NECKLACE_EARRING_S2C = 20,
    kSIM_ARM_ACCESSORY_S2C = 21,
    kSIM_BELT_BELT_S2C = 22,
    kSIM_BELT_MUSICPLAYER_S2C = 23,
    kSIM_BELT_EARBUDS_S2C = 24,
    kSIM_VEST_SCARF_S2C = 25,
    kSIM_BODY_PARTS_S2C_END = 25,
    kSIM_BODY_PARTS_TSC6_BEGIN = 26,
    kSIM_BODY_PARTS_TSC6_BEGIN_DB = 26,
    kSIM_HEAD_TSC6 = 26,
    kSIM_FACIALFEATURE_TSC6 = 27,
    kSIM_HAIR_TSC6 = 28,
    kSIM_CLOTHING_BEGIN_TSC6 = 29,
    kSIM_GLASSES_TSC6 = 29,
    kSIM_TORSO_TSC6 = 30,
    kSIM_LOWERBODY_TSC6 = 31,
    kSIM_SHOES_TSC6 = 32,
    kSIM_HAT_TSC6 = 33,
    kSIM_NECKLACE_EARRING_TSC6 = 34,
    kSIM_ARM_ACCESSORY_TSC6 = 35,
    kSIM_BELT_TSC6 = 36,
    kSIM_ADDON_UPPER_BODY_TSC6 = 37,
    kSIM_ADDON_LOWER_BODY_TSC6 = 38,
    kSIM_BODY_PARTS_TSC6_END_DB = 38,
    kSIM_SLEEVES_TSC6 = 39,
    kSIM_UNUSED_BODY_PART_TSC6 = 40,
    kSIM_CLOTHING_END = 40,
    kSIM_BODY_PARTS_TSC6_END = 40,
    kPET_BODY_PARTS_BEGIN = 41,
    kPET_HEAD = 41,
    kPET_EYES_REGION_BEARD = 42,
    kPET_SNOUT_REGION_BEARD = 43,
    kPET_CRANIUM_REGION_BEARD = 44,
    kPET_EARS = 45,
    kPET_EARS_CARDS = 46,
    kPET_NECK = 47,
    kPET_NECK_CARDS = 48,
    kPET_FRONT_TORSO = 49,
    kPET_FRONT_TORSO_CARDS = 50,
    kPET_HIND_QUARTERS = 51,
    kPET_HIND_QUARTERS_CARDS = 52,
    kPET_FRONT_LEGS = 53,
    kPET_FRONT_LEGS_CARDS = 54,
    kPET_FEET = 55,
    kPET_FEET_CARDS = 56,
    kPET_TAIL = 57,
    kPET_TAIL_CARDS = 58,
    kPET_HAT = 59,
    kPET_GLASSES = 60,
    kPET_SHIRT = 61,
    kPET_COLLAR = 62,
    kPET_SHOES = 63,
    kPET_HEAD_FURCOLOR = 64,
    kPET_BODY_FURCOLOR = 65,
    kPET_BODY_PARTS_END = 65,
    kSIM_NUM_BODY_PARTS_S2C = 26,
    kSIM_NUM_BODY_PARTS_TSC6 = 15,
    kSIM_NUM_BODY_PARTS_TSC6_DB = 13,
    kPET_NUM_BODY_PARTS = 25,
    kPET_NUM_BODY_PARTS_TEXTURE_ONLY = 2,
    kSIM_NUM_MAX_BODY_PARTS_IN_QUADRANT = 16,
    kINVALID_BODY_PART = 127,
};
enum eSimPartsMapLocation {
    kSIMPARTS_MAP_BEGIN = 0,
    kSIMPARTS_MAP_UL = 0,
    kSIMPARTS_MAP_UR = 1,
    kSIMPARTS_MAP_LL = 2,
    kSIMPARTS_MAP_LR = 3,
    kSIMPARTS_MAP_END = 4,
    kSIMPARTS_NUM_MAPS = 4,
};
enum eMorphTargetRegion {
    kMORPH_TARGET_REGION_SIM_START = 0,
    kMORPH_TARGET_REGION_SIM_EYES = 0,
    kMORPH_TARGET_REGION_SIM_NOSE = 1,
    kMORPH_TARGET_REGION_SIM_MOUTH = 2,
    kMORPH_TARGET_REGION_SIM_CHIN = 3,
    kMORPH_TARGET_REGION_SIM_END = 3,
    kMORPH_TARGET_REGION_PET_FACIAL_START = 4,
    kMORPH_TARGET_REGION_PET_FACIAL_EYES = 4,
    kMORPH_TARGET_REGION_PET_FACIAL_SNOUT = 5,
    kMORPH_TARGET_REGION_PET_FACIAL_JOWLS = 6,
    kMORPH_TARGET_REGION_PET_FACIAL_END = 6,
    kMORPH_TARGET_REGION_PET_EYES_BEARD_START = 7,
    kMORPH_TARGET_REGION_PET_EYES_BEARD_EYES = 7,
    kMORPH_TARGET_REGION_PET_EYES_BEARD_END = 7,
    kMORPH_TARGET_REGION_PET_SNOUT_BEARD_START = 8,
    kMORPH_TARGET_REGION_PET_SNOUT_BEARD_SNOUT = 8,
    kMORPH_TARGET_REGION_PET_SNOUT_BEARD_END = 8,
    kMORPH_TARGET_REGION_INVALID_REGION = 9,
    kNUM_MORPH_TARGET_REGIONS_SIM = 4,
    kNUM_MORPH_TARGET_REGIONS_PET_FACIAL = 3,
    kNUM_MORPH_TARGET_REGIONS_PET_EYES_BEARD = 1,
    kNUM_MORPH_TARGET_REGIONS_PET_SNOUT_BEARD = 1,
    kNUM_MORPH_TARGET_INDICES_MAX_IN_REGION_SIM = 3,
};
enum EventCategory {
    CATEGORY_INIT_CHAR = 0,
    CATEGORY_RESET_CHAR = 1,
    CATEGORY_CHANGE_FOCUS = 2,
    CATEGORY_STORE_CHAR = 3,
    CATEGORY_CHANGE_CHAR = 4,
    CATEGORY_MORPH_CHAR = 5,
    CATEGORY_RESET_CHAR_DRAW = 6,
    CATEGORY_SET_MORPH_REGION = 7,
};
// total size: 0x8
class CasEvent {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    enum EventCategory m_category; // offset 0x4, size 0x4
};
enum eMorphRegion {
    SIM_TORSO = 0,
    SIM_ARMS = 1,
    SIM_HEAD = 2,
    SIM_LEGS = 3,
    SIM_EYES = 4,
    SIM_NOSE = 5,
    SIM_LIPS = 6,
    SIM_CHIN = 7,
    SIM_NONE = 8,
    PET_EYES = 9,
    PET_SNOUT = 10,
    PET_JOWLS = 11,
    PET_BODY = 12,
    PET_NONE = 13,
};
// total size: 0x10
class CasEventMorphCharacter : public CasEvent {
    // Members
    enum eMorphRegion m_morphRegion; // offset 0x8, size 0x4
    float m_morphValue; // offset 0xC, size 0x4
};
// total size: 0x8
class TRect {
    // Members
public:
    unsigned short left; // offset 0x0, size 0x2
    unsigned short top; // offset 0x2, size 0x2
    unsigned short right; // offset 0x4, size 0x2
    unsigned short bottom; // offset 0x6, size 0x2
};
// total size: 0x14
class SimModelPart {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class SimModelTSC6 * m_pSimModel; // offset 0x4, size 0x4
    class BitFlags m_nModelFlags; // offset 0x8, size 0x4
    class EIStaticModel * m_pModel; // offset 0xC, size 0x4
    class SimBodyPart * m_pBodyPart; // offset 0x10, size 0x4
};
// total size: 0x1C
class SimTexturePart {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class SimModelTSC6 * m_pSimModel; // offset 0x4, size 0x4
    class ERTexture * m_pTexture; // offset 0x8, size 0x4
    class EString m_strQuadrantName; // offset 0xC, size 0x4
    class EString m_strBaseName; // offset 0x10, size 0x4
    class EString m_strCompositeTextureName; // offset 0x14, size 0x4
    unsigned char m_nQuadrantNumber; // offset 0x18, size 0x1
    unsigned char m_bHighRes; // offset 0x19, size 0x1
};
// total size: 0x14
class SimModelPartHead : public SimModelPart {};
// total size: 0x14
class SimModelPartFacialFeature : public SimModelPart {};
// total size: 0x14
class SimModelPartHair : public SimModelPart {};
// total size: 0x14
class SimModelPartGlasses : public SimModelPart {};
// total size: 0x14
class SimModelPartTorso : public SimModelPart {};
// total size: 0x14
class SimModelPartLowerBody : public SimModelPart {};
// total size: 0x14
class SimModelPartShoes : public SimModelPart {};
// total size: 0x14
class SimModelPartHat : public SimModelPart {};
// total size: 0x14
class SimModelPartNecklaceEarring : public SimModelPart {};
// total size: 0x14
class SimModelPartArmAccessory : public SimModelPart {};
// total size: 0x14
class SimModelPartBelt : public SimModelPart {};
// total size: 0x14
class SimModelPartAddonUpperBody : public SimModelPart {};
// total size: 0x14
class SimModelPartAddonLowerBody : public SimModelPart {};
// total size: 0x14
class SimModelPartSleeves : public SimModelPart {};
// total size: 0x14
class SimModelPartUnused : public SimModelPart {};
enum eImageModelSetType {
    kIMAGE_MODEL_SET_TYPE_PORTRAIT = 0,
    kIMAGE_MODEL_SET_TYPE_SIMHEAD = 1,
    kIMAGE_MODEL_SET_TYPE_HEAD = 2,
    kIMAGE_MODEL_SET_TYPE_FACIALFEATURE = 3,
    kIMAGE_MODEL_SET_TYPE_HAIR = 4,
    kIMAGE_MODEL_SET_TYPE_GLASSES = 5,
    kIMAGE_MODEL_SET_TYPE_TORSO = 6,
    kIMAGE_MODEL_SET_TYPE_LOWERBODY = 7,
    kIMAGE_MODEL_SET_TYPE_SHOES = 8,
    kIMAGE_MODEL_SET_TYPE_HAT = 9,
    kIMAGE_MODEL_SET_TYPE_NECKLACE_EARRING = 10,
    kIMAGE_MODEL_SET_TYPE_ARM_ACCESSORY = 11,
    kIMAGE_MODEL_SET_TYPE_BELT = 12,
    kIMAGE_MODEL_SET_TYPE_ADDON_UPPER_BODY = 13,
    kIMAGE_MODEL_SET_TYPE_ADDON_LOWER_BODY = 14,
};
enum CharacterPart {
    INNER_LAYER_TORSO = 0,
    INNER_LAYER_TORSO_TORSO_STYLE = 1,
    INNER_LAYER_TORSO_TEXTURE = 2,
    INNER_LAYER_TORSO_DEGRADATION = 3,
    INNER_LAYER_TORSO_SLEEVE_STYLE = 4,
    INNER_LAYER_TORSO_SLEEVE_DEGRADATION = 5,
    LOWERBODY = 6,
    LOWERBODY_LEG_STYLE = 7,
    LOWERBODY_TEXTURE = 8,
    LOWERBODY_DEGRADATION = 9,
    SHOES = 10,
    SHOES_TEXTURE = 11,
    SHOES_DEGRADATION = 12,
    HAIR = 13,
    HAIR_MODEL_CODE = 14,
    HAIR_STYLE = 15,
    HAIR_TEXTURE = 16,
    HAIR_DEGRADATION = 17,
    HEAD = 18,
    FACIAL_FEATURE = 19,
    FACIAL_FEATURE_STYLE = 20,
    FACIAL_FEATURE_TEXTURE = 21,
    FACIAL_FEATURE_DEGRADATION = 22,
    TATTOO_ARM = 23,
    TATTOO_TORSO = 24,
    TATTOO_LOWER_BODY = 25,
    TATTOO_FACE = 26,
    HAT = 27,
    HAT_STYLE = 28,
    HAT_TEXTURE = 29,
    GLASSES = 30,
    GLASSES_TEXTURE = 31,
    ARM_ACCESSORY = 32,
    ARM_ACCESSORY_STYLE = 33,
    ARM_ACCESSORY_TEXTURE = 34,
    NECKLACE_EARRING = 35,
    NECKLACE_EARRING_TEXTURE = 36,
    BELT = 37,
    BELT_TEXTURE = 38,
    BODY_TYPE = 39,
    GENDER_MALE = 40,
    NAME_FIRST = 41,
    NAME_LAST = 42,
    SKIN_COLOR = 43,
    INVALID_CHARACTER_PART = 44,
};
enum ChangeType {
    NEXT = 0,
    PREVIOUS = 1,
    SET = 2,
    WEAR_CLOTHING_INSTANCE = 3,
};
enum eTattooLocation {
    kTATTOO_BEGIN = 0,
    kTATTOO_ARM = 0,
    kTATTOO_TORSO = 1,
    kTATTOO_LOWER_BODY = 2,
    kTATTOO_FACE = 3,
    kTATTOO_END = 4,
    kTATTOO_INVALID_LOCATION = 4,
    kNUM_TATTOO_LOCATIONS_S2C = 3,
    kNUM_TATTOO_LOCATIONS_TSC6 = 4,
};
// total size: 0x1C
class CasEventChangeCharacter : public CasEvent {
    // Members
    enum CharacterPart m_part; // offset 0x8, size 0x4
    enum ChangeType m_changeType; // offset 0xC, size 0x4
    unsigned int m_newIndex; // offset 0x10, size 0x4
    unsigned int m_oldIndex; // offset 0x14, size 0x4
    unsigned char m_bBlockOnLoad; // offset 0x18, size 0x1
};
enum FocusArea {
    SIM_UPPERBODY = 0,
    SIM_UPPERBODY_DECAL = 1,
    SIM_LOWERBODY = 2,
    SIM_SHOES = 3,
    SIM_BRACELET = 4,
    SIM_RING = 5,
    SIM_BODYRING = 6,
    SIM_BELT = 7,
    SIM_HAIR = 8,
    SIM_FACE = 9,
    SIM_EYES = 10,
    SIM_EARS = 11,
    SIM_NOSE = 12,
    SIM_MOUTH = 13,
    SIM_FACIAL_HAIR = 14,
    SIM_HAT = 15,
    SIM_GLASSES = 16,
    SIM_EARRINGS = 17,
    SIM_LIPRING = 18,
    SIM_TATTOO = 19,
    SIM_GENDER = 20,
    SIM_BODYTYPE = 21,
    SIM_SKINCOLOR = 22,
    SIM_TATTOO_LEFT_THIGH = 23,
    SIM_TATTOO_RIGHT_THIGH = 24,
    SIM_TATTOO_LEFT_CALF = 25,
    SIM_TATTOO_RIGHT_CALF = 26,
    SIM_TATTOO_LEFT_UPPER_ARM = 27,
    SIM_TATTOO_RIGHT_UPPER_ARM = 28,
    SIM_TATTOO_LEFT_LOWER_ARM = 29,
    SIM_TATTOO_RIGHT_LOWER_ARM = 30,
    SIM_TATTOO_CHEST_UPPER = 31,
    SIM_TATTOO_CHEST_LOWER = 32,
    SIM_TATTOO_BACK_UPPER = 33,
    SIM_TATTOO_BACK_LOWER = 34,
    SIM_HEADMORPH_FRONT = 35,
    SIM_HEADMORPH_SIDE = 36,
    SIM_EARRING_LEFT = 37,
    SIM_EARRING_RIGHT = 38,
    SIM_EYEBROWRING_LEFT = 39,
    SIM_EYEBROWRING_RIGHT = 40,
    SIM_NOSERING = 41,
    SIM_NIPPLERING_LEFT = 42,
    SIM_NIPPLERING_RIGHT = 43,
    SIM_NAVELRING = 44,
    SIM_NECKLACE = 45,
    SIM_WRIST_LEFT = 46,
    SIM_WRIST_RIGHT = 47,
    CGE_GENERAL = 48,
    CAR_ADDSIM = 49,
    CAR_EDITSIM = 50,
    CAR_DELETESIM = 51,
    CAR_DONE = 52,
    PET_BODY = 53,
    PET_HEAD = 54,
};
// total size: 0x18
class CasEventChangeFocus : public CasEvent {
    // Members
    enum FocusArea m_newFocus; // offset 0x8, size 0x4
    int m_curUIFocus; // offset 0xC, size 0x4
    int m_prevUIFocus; // offset 0x10, size 0x4
    int m_curPartUIFocus; // offset 0x14, size 0x4
};
// total size: 0x8
class CasListener {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class CasMediator * m_pMediator; // offset 0x4, size 0x4
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
    class CasListener * * mpBegin; // offset 0x0, size 0x4
    class CasListener * * mpEnd; // offset 0x4, size 0x4
    class CasListener * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum eSkinChangeState {
    kSKINCHANGE_STATE_NONE = -1,
    kSKINCHANGE_STATE_BEGIN = 0,
    kSKINCHANGE_STATE_WAIT = 1,
    kSKINCHANGE_STATE_END = 2,
};
// total size: 0x124
class CasSimRenderer : public CasListener {
    // Static members
    static volatile class CasSimRenderer * s_changingSim; // size: 0x4
    static unsigned int s_nCasMaleSimAnimations[]; // size: 0x0
    static unsigned int s_nCasFemaleSimAnimations[]; // size: 0x0
    static float CAMERA_DPAD_ROTATION_DELTA; // size: 0x4
    static int CAS_IDLE_FIDGET_MAX_B; // size: 0x4
    static int CAS_IDLE_FIDGET_MAX_A; // size: 0x4
    static int CAS_IDLE_FIDGET_MAX; // size: 0x4

    // Members
    class EMat4 * m_pBaseOrient; // offset 0x8, size 0x4
    class EAnimController m_ac; // offset 0xC, size 0xAC
    float m_fAnimInterval; // offset 0xB8, size 0x4
    int m_iAnimDuration; // offset 0xBC, size 0x4
    class SimModelTSC6 * m_pSimModel; // offset 0xC0, size 0x4
    class ERModel * m_pLowResShadowModel; // offset 0xC4, size 0x4
    class EMidLotInstance * m_pCurrentProp; // offset 0xC8, size 0x4
    unsigned int m_iCurrentPropBone; // offset 0xCC, size 0x4
    class EVec3 m_vPos; // offset 0xD0, size 0xC
    class EVec3 m_vScale; // offset 0xDC, size 0xC
    unsigned int m_pendingAnimation; // offset 0xE8, size 0x4
    float m_fBaseRotation; // offset 0xEC, size 0x4
    float m_fCharRotation; // offset 0xF0, size 0x4
    class ETexture * m_pFaceImage; // offset 0xF4, size 0x4
    unsigned int m_nPositionNum; // offset 0xF8, size 0x4
    enum eMorphTargetRegion m_morphTargetRegion; // offset 0xFC, size 0x4
    int m_CharId; // offset 0x100, size 0x4
    const unsigned int * m_casSimAnimations; // offset 0x104, size 0x4
    unsigned int m_nextIdleId; // offset 0x108, size 0x4
    unsigned int m_personalityAnimId; // offset 0x10C, size 0x4
    enum FocusArea m_currentFocus; // offset 0x110, size 0x4
    class BitFlags m_nFlags; // offset 0x114, size 0x4
    int m_iQueueCount; // offset 0x118, size 0x4
    enum eSkinChangeState m_SkinChangeStage; // offset 0x11C, size 0x4
    unsigned char m_bFreezeAnimations; // offset 0x120, size 0x1
};
// total size: 0x34
class CasMediator {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class vector m_listeners; // offset 0x4, size 0x10
    class CasSimState * m_pMediatorSimState; // offset 0x14, size 0x4
    class CasSimRenderer * m_pMediatorSimRenderer; // offset 0x18, size 0x4
    class CasScene * m_pMediatorScene; // offset 0x1C, size 0x4
    class CASTargetTSC6 * m_pNavTarget; // offset 0x20, size 0x4
    class CAFTarget * m_pCAFTarget; // offset 0x24, size 0x4
    unsigned int m_filterId[2]; // offset 0x28, size 0x8
    int m_nCASMode; // offset 0x30, size 0x4
};
enum eSpecies {
    kSimMale = 0,
    kSimFemale = 1,
    kLargeDog = 2,
    kSmallDog = 3,
    kCat = 4,
    kInvalidSpecies = 5,
    kNumSimGenders = 2,
    kNumPetSpecies = 3,
};
// total size: 0x1F0
class SimModelTSC6 {
    // Static members
    static enum eBodyPart s_simBodyPartRenderOrder[14]; // size: 0x38

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class EIStaticModel * * m_pModels; // offset 0x4, size 0x4
    class CasSimDescription * m_pSimDesc; // offset 0x8, size 0x4
    class SimModelPart * m_pSimModelPart[15]; // offset 0xC, size 0x3C
    class SimTexturePart m_simTexturePart[4]; // offset 0x48, size 0x70
    class SimModelPartHead m_simModelPartHead; // offset 0xB8, size 0x14
    class SimModelPartFacialFeature m_simModelPartFacialFeature; // offset 0xCC, size 0x14
    class SimModelPartHair m_simModelPartHair; // offset 0xE0, size 0x14
    class SimModelPartGlasses m_simModelPartGlasses; // offset 0xF4, size 0x14
    class SimModelPartTorso m_simModelPartTorso; // offset 0x108, size 0x14
    class SimModelPartLowerBody m_simModelPartLowerBody; // offset 0x11C, size 0x14
    class SimModelPartShoes m_simModelPartShoes; // offset 0x130, size 0x14
    class SimModelPartHat m_simModelPartHat; // offset 0x144, size 0x14
    class SimModelPartNecklaceEarring m_simModelPartNecklaceEarring; // offset 0x158, size 0x14
    class SimModelPartArmAccessory m_simModelPartArmAccessory; // offset 0x16C, size 0x14
    class SimModelPartBelt m_simModelPartBelt; // offset 0x180, size 0x14
    class SimModelPartAddonUpperBody m_simModelPartAddonUpperBody; // offset 0x194, size 0x14
    class SimModelPartAddonLowerBody m_simModelPartAddonLowerBody; // offset 0x1A8, size 0x14
    class SimModelPartSleeves m_simModelPartSleeves; // offset 0x1BC, size 0x14
    class SimModelPartUnused m_simModelPartUnused; // offset 0x1D0, size 0x14
    class SimModelPart * * m_ppChangingSimModelParts; // offset 0x1E4, size 0x4
    class SimTexturePart * m_pChangingTexturePart; // offset 0x1E8, size 0x4
    unsigned char m_bHighRes; // offset 0x1EC, size 0x1
};
enum eDamageType {
    kDAMAGE_TYPE_BEGIN = 0,
    kDAMAGE_TYPE_NORMAL_BEGIN = 0,
    kDAMAGE_TYPE_CUTTING = 0,
    kDAMAGE_TYPE_CORROSION = 1,
    kDAMAGE_TYPE_TIME = 2,
    kDAMAGE_TYPE_NORMAL_END = 3,
    kDAMAGE_TYPE_SUN = 3,
    kDAMAGE_TYPE_END = 4,
    kNUM_DAMAGE_TYPES = 4,
    kNUM_DAMAGE_TYPES_NORMAL = 3,
};
// total size: 0x24
class SimBodyPart {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class CasSimDescription * m_pSimDesc; // offset 0x4, size 0x4
    class BitFlags m_nFlags; // offset 0x8, size 0x4
    const class VECTOR * m_pBodyPartData; // offset 0xC, size 0x4
    const struct BodyPartTypeInfoTSC6 * m_pBodyPartTypeInfo; // offset 0x10, size 0x4
    const struct BodyPartGeometryTSC6 * m_pClothingSetData; // offset 0x14, size 0x4
    class ClothingItem * m_pClothingItem; // offset 0x18, size 0x4
    unsigned char m_nClothingSetIndex; // offset 0x1C, size 0x1
    unsigned char m_nModelCodeIndex; // offset 0x1D, size 0x1
    unsigned char m_nModelIndex; // offset 0x1E, size 0x1
    unsigned char m_nStyleIndex; // offset 0x1F, size 0x1
    unsigned char m_nTextureIndex; // offset 0x20, size 0x1
    unsigned char m_nDegradationState; // offset 0x21, size 0x1
    class BitFlags m_nCharacterFlags; // offset 0x22, size 0x2
};
// total size: 0x48
class StackString : public StringBuffer {
    // Members
    char fChars[64]; // offset 0x8, size 0x40
};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    int first; // offset 0x0, size 0x4
    signed short second; // offset 0x4, size 0x2
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
// total size: 0x3C
class ENeighborhoodCustomChar {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class CasSimDescription * m_pSimDesc; // offset 0x4, size 0x4
    class map m_neighborData; // offset 0x8, size 0x1C
    class ETexture * m_pThumbnailTexturePtr; // offset 0x24, size 0x4
    int m_simGuid; // offset 0x28, size 0x4
    int m_neighborId; // offset 0x2C, size 0x4
    class Family * m_pFamily; // offset 0x30, size 0x4
    int m_nStartingLot; // offset 0x34, size 0x4
    unsigned char m_bSimInSlot; // offset 0x38, size 0x1
    unsigned char m_bNewSimInSlot; // offset 0x39, size 0x1
};
enum tRelationshipType {
    Rel_All = 0,
    Rel_NemesisUnused = 1,
    Rel_Enemy = 2,
    Rel_Dislike = 3,
    Rel_Neutral = 4,
    Rel_LikeUnused = 5,
    Rel_Friend = 6,
    Rel_BestFriend = 7,
    Rel_Crush = 8,
    Rel_Lover = 9,
    Rel_NumTypes = 10,
};
// total size: 0x194
class Neighbor {
    // Static members
    static int sLoverMemoryThreshold; // size: 0x4
    static int sCrushMemoryThreshold; // size: 0x4
    static int sRelationshipLevelMax[10]; // size: 0x28
    static int sRelationshipLevelMin[10]; // size: 0x28
    static int kParentBit; // size: 0x4
    static int kMarriageBit; // size: 0x4
    static int kPackBit; // size: 0x4
    static int kMineBit; // size: 0x4
    static int kMasterBit; // size: 0x4
    static int kLoveBit; // size: 0x4
    static signed char sOldNeighborPersondataIndexArray[80]; // size: 0x50

    // Members
    int fPersonDataVersion; // offset 0x0, size 0x4
    signed short fID; // offset 0x4, size 0x2
    int fGUID; // offset 0x8, size 0x4
    class ObjSelector * fSelector; // offset 0xC, size 0x4
    class RelMatrix * fRelations; // offset 0x10, size 0x4
    int fCurrentHouse; // offset 0x14, size 0x4
    class cXPerson * m_Person; // offset 0x18, size 0x4
    signed short fFriendCount; // offset 0x1C, size 0x2
    signed short fEnemyCount; // offset 0x1E, size 0x2
    unsigned char m_relationshipDirty; // offset 0x20, size 0x1
    class StackString fOriginalFileName; // offset 0x24, size 0x48
    signed short fNeighborPersonData[49]; // offset 0x6C, size 0x62
    class Motives fMotives; // offset 0xD0, size 0xC4
};
// total size: 0x10
class EFontCharacter : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int m_left; // offset 0x4, size 0x4
    int m_right; // offset 0x8, size 0x4
    unsigned short m_line; // offset 0xC, size 0x2
    unsigned short m_page; // offset 0xE, size 0x2
};
// total size: 0x10
class THashTable : public EHashTable {};
// total size: 0x14
class EFontPage : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    unsigned int m_shaderId; // offset 0x4, size 0x4
    class ERShader * m_pRShader; // offset 0x8, size 0x4
    int m_xsize; // offset 0xC, size 0x4
    int m_ysize; // offset 0x10, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class EFontPage * * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
// total size: 0x2C
class EFontSize : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int m_size; // offset 0x4, size 0x4
    int m_lineSize; // offset 0x8, size 0x4
    int m_superSample; // offset 0xC, size 0x4
    class THashTable m_characters; // offset 0x10, size 0x10
    class TArray m_pPages; // offset 0x20, size 0xC
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x10
class THashTable : public EHashTable {};
// total size: 0x38
class EFontData : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class TNodeList m_sizeList; // offset 0x4, size 0xC
    int m_baseline; // offset 0x10, size 0x4
    int m_topline; // offset 0x14, size 0x4
    int m_defaultSpacing; // offset 0x18, size 0x4
    int m_verticalSpacing; // offset 0x1C, size 0x4
    int m_sourceImageSize; // offset 0x20, size 0x4
    int m_spaceWidth; // offset 0x24, size 0x4
    class THashTable m_kerningPairs; // offset 0x28, size 0x10
};
enum EFontAlignX {
    E_FAX_LEFT = 0,
    E_FAX_RIGHT = 1,
    E_FAX_CENTER = 2,
};
enum EFontAlignY {
    E_FAY_TOP = 0,
    E_FAY_BOTTOM = 1,
    E_FAY_CENTER = 2,
};
enum EFontMatrixType {
    E_MATTYPE_APPLYCHAR = 0,
    E_MATTYPE_APPLYWORD = 1,
};
// total size: 0x4
struct /* @class$15740game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char randomSeed; // offset 0x1, size 0x1
    unsigned char intensity; // offset 0x2, size 0x1
    unsigned char fps; // offset 0x3, size 0x1
};
// total size: 0x4
struct /* @class$15741game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char angle; // offset 0x1, size 0x1
    unsigned char amplitude; // offset 0x2, size 0x1
    unsigned char frequency; // offset 0x3, size 0x1
};
// total size: 0x4
struct /* @class$15742game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char size; // offset 0x1, size 0x1
    unsigned char spread; // offset 0x2, size 0x1
    signed char position; // offset 0x3, size 0x1
};
// total size: 0x4
struct /* @class$15743game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char seed; // offset 0x1, size 0x1
    unsigned char timeLo; // offset 0x2, size 0x1
    unsigned char timeHi; // offset 0x3, size 0x1
};
// total size: 0x4
struct /* @class$15744game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char speed; // offset 0x1, size 0x1
    unsigned char pause; // offset 0x2, size 0x1
    signed char position; // offset 0x3, size 0x1
};
// total size: 0x4
struct /* @class$15745game_animation_unity_cpp */ {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char reserved; // offset 0x1, size 0x1
    signed short angle; // offset 0x2, size 0x2
};
union fontFXcommand {
    unsigned char effect; // offset 0x0, size 0x1
    // total size: 0x4
    struct /* @class$15740game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char randomSeed; // offset 0x1, size 0x1
        unsigned char intensity; // offset 0x2, size 0x1
        unsigned char fps; // offset 0x3, size 0x1
    } rumbleEffect; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$15741game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char angle; // offset 0x1, size 0x1
        unsigned char amplitude; // offset 0x2, size 0x1
        unsigned char frequency; // offset 0x3, size 0x1
    } waveEffect; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$15742game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char size; // offset 0x1, size 0x1
        unsigned char spread; // offset 0x2, size 0x1
        signed char position; // offset 0x3, size 0x1
    } bulgeEffect; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$15743game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char seed; // offset 0x1, size 0x1
        unsigned char timeLo; // offset 0x2, size 0x1
        unsigned char timeHi; // offset 0x3, size 0x1
    } tipsyEffect; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$15744game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char speed; // offset 0x1, size 0x1
        unsigned char pause; // offset 0x2, size 0x1
        signed char position; // offset 0x3, size 0x1
    } revealEffect; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$15745game_animation_unity_cpp */ {
        // Members
        unsigned char command; // offset 0x0, size 0x1
        unsigned char reserved; // offset 0x1, size 0x1
        signed short angle; // offset 0x2, size 0x2
    } rotateEffect; // offset 0x0, size 0x4
};
// total size: 0x6C
class ERFont : public EResource {
    // Static members
    static class EVec2 m_vScaler; // size: 0x8
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class EFontData m_fd; // offset 0x14, size 0x38
    float m_ysize; // offset 0x4C, size 0x4
    float m_aspect; // offset 0x50, size 0x4
    class EFontSize * m_pCurrentSize; // offset 0x54, size 0x4
    class EVec4 m_vColor; // offset 0x58, size 0x10
    int m_cPage; // offset 0x68, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x1C
class ERQuickdata : public EResource {
    // Members
protected:
    struct QD_IMAGE * m_pImage; // offset 0x14, size 0x4
    unsigned int m_uImageSize; // offset 0x18, size 0x4
};
// total size: 0x8
struct RumbleDataElement {
    // Members
    unsigned short SmallMotorOn; // offset 0x0, size 0x2
    unsigned short LargeMotorSpeed; // offset 0x2, size 0x2
    float Duration; // offset 0x4, size 0x4
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
// total size: 0x8
struct pair {
    // Members
    class BString first; // offset 0x0, size 0x4
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
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class iResFile * second; // offset 0x4, size 0x4
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
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct FileRec {
    // Members
    int usecount; // offset 0x0, size 0x4
    class iResFile * file; // offset 0x4, size 0x4
};
// total size: 0xC
struct pair {
    // Members
    const struct ResFile * const first; // offset 0x0, size 0x4
    struct FileRec second; // offset 0x4, size 0x8
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
// total size: 0x1C
class FileList {
    // Members
protected:
    class map fFiles; // offset 0x0, size 0x1C
};
// total size: 0x1C
class FileAllocator : public FileList {};
// total size: 0x1C
class QuickFileAllocator : public FileAllocator {};
// total size: 0x400
struct HashList {
    // Members
    class ObjSelector * table[256]; // offset 0x0, size 0x400
};
// total size: 0x408
class StackString : public StringBuffer {
    // Members
    char fChars[1024]; // offset 0x8, size 0x400
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
    class ObjectTypeAttrBlock * * mpBegin; // offset 0x0, size 0x4
    class ObjectTypeAttrBlock * * mpEnd; // offset 0x4, size 0x4
    class ObjectTypeAttrBlock * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x1
struct rehash_base {};
// total size: 0x8
struct pair {
    // Members
    signed short first; // offset 0x0, size 0x2
    int second; // offset 0x4, size 0x4
};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct equal_to : public binary_function {};
// total size: 0x1
struct hash {};
// total size: 0x1
struct mod_range_hashing {};
// total size: 0x1
struct default_ranged_hash {};
// total size: 0x4
struct hash_code_base {
    // Members
protected:
    struct use_first mExtractKey; // offset 0x0, size 0x1
    struct equal_to mEqual; // offset 0x1, size 0x1
    struct hash m_h1; // offset 0x2, size 0x1
    struct mod_range_hashing m_h2; // offset 0x3, size 0x1
};
// total size: 0xC
struct prime_rehash_policy {
    // Members
    float mfMaxLoadFactor; // offset 0x0, size 0x4
    float mfGrowthFactor; // offset 0x4, size 0x4
    unsigned int mnNextResize; // offset 0x8, size 0x4
};
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
// total size: 0x20
class hash_map : public hashtable {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class IObjectDataResource * mpData; // offset 0x0, size 0x4
};
// total size: 0xC
struct DataCache {
    // Members
    unsigned short resID; // offset 0x0, size 0x2
    class ConsoleAutoRefCount data; // offset 0x4, size 0x4
    int timesUsed; // offset 0x8, size 0x4
};
// total size: 0x14
struct ListNode : public ListNodeBase {
    // Members
    struct DataCache mValue; // offset 0x8, size 0xC
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
class list : public ListBase {};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
// total size: 0x8
struct pair {
    // Members
    int first; // offset 0x0, size 0x4
    int second; // offset 0x4, size 0x4
};
// total size: 0x18
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x8
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
struct IffMap {
    // Members
    int id; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x20
class EREdithTreeSet : public EResource {
    // Static members
    static unsigned int kMaxTreesToPrint; // size: 0x4
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    void * m_pData; // offset 0x14, size 0x4
    unsigned int m_numTrees; // offset 0x18, size 0x4
    struct IffMap * m_trees; // offset 0x1C, size 0x4
};
// total size: 0x4C
class NamespaceSelector {
    // Static members
    static int RESOURCE_TYPES[]; // size: 0x0

    // Members
    unsigned int m_id; // offset 0x0, size 0x4
    unsigned char m_loaded; // offset 0x4, size 0x1
    class list m_stringCache; // offset 0x8, size 0xC
    class list m_constantsCache; // offset 0x14, size 0xC
    class list m_soundCache; // offset 0x20, size 0xC
    class map m_missingStringSets; // offset 0x2C, size 0x1C
    class EREdithTreeSet * m_treeSetResource; // offset 0x48, size 0x4
};
// total size: 0x50
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class NamespaceSelector second; // offset 0x4, size 0x4C
};
// total size: 0x60
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x50
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
enum Sex {
    kMale = 0,
    kFemale = 1,
};
enum Age {
    kAdult = 0,
    kChild = 1,
    kDog = 2,
    kCat = 3,
    kMonkey = 4,
    kBoar = 5,
};
// total size: 0x14
struct NPC {
    // Members
    enum Sex sex; // offset 0x0, size 0x4
    enum Age age; // offset 0x4, size 0x4
    unsigned int body; // offset 0x8, size 0x4
    unsigned int thumbnail; // offset 0xC, size 0x4
    class ELocString name; // offset 0x10, size 0x4
};
// total size: 0xD30
class ObjectFolder : public BehaviorFinder, public Commander {
    // Static members
    static unsigned int fGlobalFileID; // size: 0x4

    // Members
    class map m_modulesToNamespaces; // offset 0x14, size 0x1C
    class map m_namespacesToResFiles; // offset 0x30, size 0x1C
    unsigned char fInitialized; // offset 0x4C, size 0x1
    class QuickFileAllocator * fQuickFileList; // offset 0x50, size 0x4
    struct HashList fSelectors; // offset 0x54, size 0x400
    class QuickResFile * fGlobalFile; // offset 0x454, size 0x4
    class StackString fObjPath; // offset 0x458, size 0x408
    class StackString fPath; // offset 0x860, size 0x408
    unsigned char fSkipDisabled; // offset 0xC68, size 0x1
    class vector fTypeAttrBlocks; // offset 0xC6C, size 0x10
    class vector fSaveTypes; // offset 0xC7C, size 0x10
    class vector fDeadPeopleGuids; // offset 0xC8C, size 0x10
    class hash_map m_guid16Map; // offset 0xC9C, size 0x20
    class ERQuickdata * m_pObjectData; // offset 0xCBC, size 0x4
    class ERQuickdata * m_pCreateSimData; // offset 0xCC0, size 0x4
    unsigned int mGlobalUserResFileID; // offset 0xCC4, size 0x4
    unsigned int mGlobalPetResFileID; // offset 0xCC8, size 0x4
    class ObjectDataObjDefinition m_TemplateUserDef; // offset 0xCCC, size 0x20
    class ObjectDataObjDefinition m_TemplatePetDef; // offset 0xCEC, size 0x20
    signed short m_fLastResID; // offset 0xD0C, size 0x2
    class map m_namespaceSels; // offset 0xD10, size 0x1C
    const class StringBuffer * const * mpFileList; // offset 0xD2C, size 0x4
};
static float rumbleEndTime; // size: 0x4, address: 0x805DB688
static float nextRumbleStartTime; // size: 0x4, address: 0x805DB68C
// total size: 0x8
class QTimer {
    // Members
    float m_fStartTime; // offset 0x0, size 0x4
    float m_fLastTime; // offset 0x4, size 0x4
};
// total size: 0x30C
class ActionQueue {
    // Members
    class Queue m_queue; // offset 0x0, size 0x308
    unsigned char m_hudAccessLock; // offset 0x308, size 0x1
    unsigned char m_hudNum; // offset 0x309, size 0x1
};
// total size: 0x308
class Queue {
    // Members
protected:
    class Interaction fElems[12]; // offset 0x0, size 0x300
    unsigned int fFirst; // offset 0x300, size 0x4
    unsigned int fLast; // offset 0x304, size 0x4
};
enum tColor {
    kColorNormal = 0,
    kColorGreen = 1,
    kColorYellow = 2,
    kColorRed = 3,
    kColorGray = 4,
    kFirstColor = 1,
    kLastColor = 4,
    kNumColors = 4,
};
// total size: 0x40
class Interaction {
    // Static members
    static int sLastUniqueID; // size: 0x4

    // Members
    class BString2 fName; // offset 0x0, size 0x4
    class Interaction * m_pNextItem; // offset 0x4, size 0x4
    class cXPerson * fPerson; // offset 0x8, size 0x4
    class cXObject * fStackObject; // offset 0xC, size 0x4
    class cXObject * fIconObject; // offset 0x10, size 0x4
    int fTreeTabEntryIndex; // offset 0x14, size 0x4
    signed short fStackVars[4]; // offset 0x18, size 0x8
    int fNumLocalVars; // offset 0x20, size 0x4
    signed short * fLocalVars; // offset 0x24, size 0x4
    int fPriority; // offset 0x28, size 0x4
    float fAttenuation; // offset 0x2C, size 0x4
    int fID; // offset 0x30, size 0x4
    int fFlags; // offset 0x34, size 0x4
    signed short fTreeID; // offset 0x38, size 0x2
public:
    void * __vptr$; // offset 0x3C, size 0x4
};
// total size: 0x18
class FindGoodLocationParams {
    // Members
    unsigned char fHasStart; // offset 0x0, size 0x1
    class FTilePt fLocation; // offset 0x4, size 0x8
    int fLevel; // offset 0xC, size 0x4
    int fDirectionVector; // offset 0x10, size 0x4
    unsigned char fStayInRoom; // offset 0x14, size 0x1
    unsigned char fPreferEmptyTiles; // offset 0x15, size 0x1
    unsigned char fEditableOnly; // offset 0x16, size 0x1
    unsigned char fPreferUnderRoof; // offset 0x17, size 0x1
};
// total size: 0x1C
class RayPicker {
    // Members
protected:
    float m_ScreenWidth; // offset 0x0, size 0x4
    float m_ScreenHeight; // offset 0x4, size 0x4
    unsigned short m_FinalRenderTargetWidth; // offset 0x8, size 0x2
    unsigned short m_FinalRenderTargetHeight; // offset 0xA, size 0x2
    unsigned short m_RenderTargetBitDepth; // offset 0xC, size 0x2
    class ETexture * m_RenderTargetTexture; // offset 0x10, size 0x4
    unsigned char m_bUseMultisampling; // offset 0x14, size 0x1
    int m_SamplingValue; // offset 0x18, size 0x4
};
// total size: 0xC4
class TrapezoidFade {
    // Members
    class EVec3 m_eye; // offset 0x0, size 0xC
    class EVec3 m_up; // offset 0xC, size 0xC
    class EVec3 m_interest; // offset 0x18, size 0xC
    class EVec3 m_trapNearCenterPos; // offset 0x24, size 0xC
    class EBound3 m_trapBounds; // offset 0x30, size 0x18
    float m_trapWidthAtEye; // offset 0x48, size 0x4
    float m_trapWidthAtInterest; // offset 0x4C, size 0x4
    float m_fadeRange; // offset 0x50, size 0x4
    float m_fadeDistNearSideOfFadeLine; // offset 0x54, size 0x4
    float m_fadeRecipricalRange; // offset 0x58, size 0x4
    float m_fadeMaxAlpha; // offset 0x5C, size 0x4
    float m_fadeMinAlpha; // offset 0x60, size 0x4
    float m_fadeLowAlpha; // offset 0x64, size 0x4
    unsigned char m_bIn3D; // offset 0x68, size 0x1
    int m_planeCount; // offset 0x6C, size 0x4
    unsigned char m_bEnabled; // offset 0x70, size 0x1
    unsigned char m_parmsChanged; // offset 0x71, size 0x1
    class EVec4 m_trapWall[5]; // offset 0x74, size 0x50
};
// total size: 0x2AC
class EIStaticSubModel : public EInstance {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    unsigned int m_subModelId; // offset 0x78, size 0x4
    class InstanceData m_instanceData; // offset 0x7C, size 0x224
    class TArray m_levelSmsVisArray; // offset 0x2A0, size 0xC
};
// total size: 0x30
class Quad {
    // Members
    class EVec3 m_corner[4]; // offset 0x0, size 0x30
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
    class EIWallPart * * mpBegin; // offset 0x0, size 0x4
    class EIWallPart * * mpEnd; // offset 0x4, size 0x4
    class EIWallPart * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class EIWallPart * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct copy_generic_iterator {};
enum StdAnimIdx {
    kAnimBlank = 0,
    kAnimSittingLoop = 1,
    kAnimSittingFloorLoop = 2,
    kAnimStandingLoop = 3,
    kAnimStandingTurn180CW = 4,
    kAnimStandingTurn180CCW = 5,
    kAnimStandingTurn90CW = 6,
    kAnimStandingTurn90CCW = 7,
    kAnimStandingTurn45CW = 8,
    kAnimStandingTurn45CCW = 9,
    kAnimStandingTurn0 = 10,
    kAnimOverlayHoldUmbrellaLeftHand = 11,
    kAnimIdleOverlayWatchlook = 12,
    kAnimStandingTurn22halfCCW = 13,
    kAnimStandingTurn22halfCW = 14,
    kAnimOverlayHoldPaperLeftHand = 15,
    kAnimStandingTurn135CCW = 16,
    kAnimStandingTurn135CW = 17,
    kAnimWalkLowEnergy = 18,
    kAnimIdleOverlayFidget1 = 19,
    kAnimWalkingLoop = 20,
    kAnimRunningLoop = 21,
    kAnimIdleWL = 22,
    kAnimIdleWR = 23,
    kAnimIdleOverlayFidget2 = 24,
    kAnimIdleOverlayFidget3 = 25,
    kAnimIdleWRToWL = 26,
    kAnimPlaceholder5 = 27,
    kAnimPlaceholder6 = 28,
    kAnimStandToWalkTurn45CW = 29,
    kAnimStandToWalkTurn45CCW = 30,
    kAnimStandToWalkTurn90CW = 31,
    kAnimStandToWalkTurn90CCW = 32,
    kAnimStandToWalkTurn135CW = 33,
    kAnimStandToWalkTurn135CCW = 34,
    kAnimStandToWalkTurn180CW = 35,
    kAnimStandToWalkTurn180CCW = 36,
    kAnimPlaceholder7 = 37,
    kAnimRightArmCarry = 38,
    kAnimStepLeft = 39,
    kAnimStepRight = 40,
    kAnimStepForwardLeftFoot = 41,
    kAnimStepForwardRightFoot = 42,
    kAnimStepBackwardLeftFoot = 43,
    kAnimStepBackwardRightFoot = 44,
    kAnimPlaceholder8 = 45,
    kAnimPlaceholder9 = 46,
    kAnimPlaceholder10 = 47,
    kAnimPlaceholder11 = 48,
    kAnimRunStopLeft = 49,
    kAnimRunStopRight = 50,
    kAnimPetHappyTailOverlay = 51,
    kAnimPetSadTailOverlay = 52,
    kAnimPlaceholder14 = 53,
    kAnimPlaceholder15 = 54,
    kAnimPlaceholder16 = 55,
    kAnimPlaceholder17 = 56,
    kAnimPlaceholder18 = 57,
    kAnimMotiveLowBladderIdle = 58,
    kAnimMotiveLowBladderWalk = 59,
    kAnimMotiveLowEnergyIdle = 60,
    kAnimMotiveFunLowBoredIdle = 61,
    kAnimMotiveHungerLowIdle = 62,
    kAnimMotiveHygieneLowIdle = 63,
    kAnimMotiveSocialLowTalktoselfIdle = 64,
    kAnimImpatientIdle = 65,
    kAnimImpatientSocial = 66,
    kAnimIdleFidget1 = 67,
    kAnimIdleFidget2 = 68,
    kAnimIdleFidget3 = 69,
    kAnimIdleBase = 70,
    kAnimIdleOverlayFidget4 = 71,
    kAnimIdleOverlayFidget5 = 72,
    kAnimRunGhost = 73,
    kAnimWalkGhost = 74,
    kAnimWalkCurve = 75,
    kAnimRunCurve = 76,
    kAnimDead = 77,
    kAnimPlaceholder19 = 78,
    kAnimSwimTurnInPlace22halfCW = 79,
    kAnimSwimTurnInPlace45CW = 80,
    kAnimSwimTurnInPlace90CW = 81,
    kAnimSwimTurnInPlace135CW = 82,
    kAnimSwimTurnInPlace180CW = 83,
    kAnimSwimIdle = 84,
    kAnimSwimTread = 85,
    kAnimSwimFreeStyle = 86,
    kAnimSwimTread2Idle = 87,
    kAnimCount = 88,
};
enum eRaycastLocation {
    kRaycast_Front = 0,
    kRaycast_Left = 1,
    kRaycast_Back = 2,
    kRaycast_Right = 3,
    kRaycastTotal = 4,
};
// total size: 0x2C0
class IKData {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class EMat4 m_lockBone; // offset 0x8, size 0x40
    class EMat4 m_boneOrient[3]; // offset 0x48, size 0xC0
    class EMat4 m_bindPose[3]; // offset 0x108, size 0xC0
    class EMat4 m_bindPoseInv[3]; // offset 0x1C8, size 0xC0
    unsigned int m_boneIdx[3]; // offset 0x288, size 0xC
    float m_boneLength[2]; // offset 0x294, size 0x8
    float m_originalBindPoseAngle; // offset 0x29C, size 0x4
    float m_targetAngle; // offset 0x2A0, size 0x4
    class EVec3 m_originalMidPosInRoot; // offset 0x2A4, size 0xC
    unsigned char m_bIsBoneInfoCached; // offset 0x2B0, size 0x1
    unsigned int m_AnimationResId; // offset 0x2B4, size 0x4
    unsigned char m_IKEnabled; // offset 0x2B8, size 0x1
    unsigned char m_IKValueStored; // offset 0x2B9, size 0x1
    unsigned char m_bIsArm; // offset 0x2BA, size 0x1
    unsigned char m_bIsLeft; // offset 0x2BB, size 0x1
};
// total size: 0x870
class AdultFemaleSimAnimator : public AdultSimAnimator {};
class EVec3 s_BoneTranslationData[6]; // size: 0x48, address: 0x8048BE20
unsigned int s_BoneTranslationIds[6]; // size: 0x18, address: 0x8048BE68
// total size: 0x870
class AdultMaleSimAnimator : public AdultSimAnimator {
    // Static members
    static unsigned int s_BoneTranslationIds[6]; // size: 0x18
    static class EVec3 s_BoneTranslationData[6]; // size: 0x48
};
float s_RightArmCarryIndexArray[58]; // size: 0xE8, address: 0x8048BE80
float s_LeftArmCarryIndexArray[58]; // size: 0xE8, address: 0x8048BF68
float s_DualArmCarryIndexArray[58]; // size: 0xE8, address: 0x8048C050
float s_HeadIndexArray[58]; // size: 0xE8, address: 0x8048C138
float s_FXNodeIndexArray[58]; // size: 0xE8, address: 0x8048C220
float s_UpperBodyIndexArray[58]; // size: 0xE8, address: 0x8048C308
unsigned int s_lRequiredAnimations[34]; // size: 0x88, address: 0x8041A880
unsigned int s_nNumRequiredAnimations; // size: 0x4, address: 0x805DCFD0
// total size: 0x870
class AdultSimAnimator : public SAnimator2 {
    // Static members
    static unsigned int s_nNumRequiredAnimations; // size: 0x4
    static unsigned int s_lRequiredAnimations[34]; // size: 0x88
    static float s_UpperBodyIndexArray[58]; // size: 0xE8
    static float s_FXNodeIndexArray[58]; // size: 0xE8
    static float s_HeadIndexArray[58]; // size: 0xE8
    static float s_DualArmCarryIndexArray[58]; // size: 0xE8
    static float s_LeftArmCarryIndexArray[58]; // size: 0xE8
    static float s_RightArmCarryIndexArray[58]; // size: 0xE8
};
enum eIKBones {
    kIKLeftHandBone = 0,
    kIKLeftFootBone = 1,
    kIKRightHandBone = 2,
    kIKRightFootBone = 3,
    kTotalIKBones = 4,
};
// total size: 0x4
class EGlobalManagerClient {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ECoordinateSystem {
    E_COORDSYS_XRIGHT_YFORWARD_ZUP = 0,
    E_COORDSYS_XRIGHT_YUP_ZBACK = 1,
};
// total size: 0x260
class EGraphics : public EGlobalManagerClient {
    // Members
protected:
    unsigned char m_insideBeginEnd; // offset 0x4, size 0x1
    unsigned char m_initialized; // offset 0x5, size 0x1
    unsigned char m_frameBufferClear; // offset 0x6, size 0x1
    unsigned char m_frameBufferClearRequest; // offset 0x7, size 0x1
    unsigned char m_displayTiming; // offset 0x8, size 0x1
    int m_xScreen; // offset 0xC, size 0x4
    int m_yScreen; // offset 0x10, size 0x4
    int m_xOffset; // offset 0x14, size 0x4
    int m_yOffset; // offset 0x18, size 0x4
    int m_frameBufferFormat; // offset 0x1C, size 0x4
    int m_zBufferFormat; // offset 0x20, size 0x4
    int m_nRenderSurfaces; // offset 0x24, size 0x4
    int m_nTextures; // offset 0x28, size 0x4
    int m_nShaders; // offset 0x2C, size 0x4
    int m_nRenderContexts; // offset 0x30, size 0x4
    class EMat4 m_mNormalMap; // offset 0x38, size 0x40
    class EVec3 m_backgroundColor; // offset 0x78, size 0xC
    int m_backgroundAlpha; // offset 0x84, size 0x4
    class ERFont * m_pFont; // offset 0x88, size 0x4
    class ERLevel * m_pCurrentLevel; // offset 0x8C, size 0x4
    enum ECoordinateSystem m_coordSys; // offset 0x90, size 0x4
    class EVec2 m_vLTInd; // offset 0x94, size 0x8
    unsigned char m_rgCensorEnabled[16]; // offset 0x9C, size 0x10
    class EVec3 m_rgCensorUpperLeft[16]; // offset 0xAC, size 0xC0
    class EVec3 m_rgCensorLowerRight[16]; // offset 0x16C, size 0xC0
    unsigned char m_rgBrighten[16]; // offset 0x22C, size 0x10
    int m_currentCensor; // offset 0x23C, size 0x4
    unsigned char m_allowWireframe; // offset 0x240, size 0x1
    unsigned char m_renderOnlyFirstPass; // offset 0x241, size 0x1
    float m_AspectRatio; // offset 0x244, size 0x4
    unsigned char m_bWiiFullScreen; // offset 0x248, size 0x1
    float m_WiiWideScreenXScale; // offset 0x24C, size 0x4
    float m_WiiWideScreenXOffset; // offset 0x250, size 0x4
    float m_WiiWideScreenXOffsetScaled; // offset 0x254, size 0x4
public:
    class ERC * m_pRCImmediate; // offset 0x258, size 0x4
};
class AnimatorFactory * s_pSingleton; // size: 0x4, address: 0x805DB690
// total size: 0x1
class AnimatorFactory {
    // Static members
    static class AnimatorFactory * s_pSingleton; // size: 0x4
};
// total size: 0x4
class AutorunTweakTool {
    // Static members
    static float kPlayerAutoRunDistance; // size: 0x4
    static float kNpcAutoRunDistance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
float kAwarenessSmallEpsilon; // size: 0x4, address: 0x805D8418
static class EVec3 zAxis; // size: 0xC, address: 0x8048C3F0
// total size: 0x8
struct vert2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class PassiveInfluenceMap {
    // Static members
    static class PassiveInfluenceMap * s_passiveInfluenceMap; // size: 0x4

    // Members
    int m_xSize; // offset 0x0, size 0x4
    int m_ySize; // offset 0x4, size 0x4
    class vector * m_map; // offset 0x8, size 0x4
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
    struct TilePt * mpBegin; // offset 0x0, size 0x4
    struct TilePt * mpEnd; // offset 0x4, size 0x4
    struct TilePt * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x4
class PassiveInfluenceItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x10
struct TypedMotiveInc : public MotiveInc {
    // Members
    signed char typeToAffectFlags; // offset 0xC, size 0x1
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
    struct TypedMotiveInc * mpBegin; // offset 0x0, size 0x4
    struct TypedMotiveInc * mpEnd; // offset 0x4, size 0x4
    struct TypedMotiveInc * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x30
class PassiveInfluencePerson : public PassiveInfluenceItem {
    // Members
public:
    class cXObject * m_pObj; // offset 0x4, size 0x4
    class vector m_TileVector; // offset 0x8, size 0x10
    signed char m_areaType; // offset 0x18, size 0x1
    signed char m_areaSize; // offset 0x19, size 0x1
    signed char m_animationOverlay; // offset 0x1A, size 0x1
    signed char m_flags; // offset 0x1B, size 0x1
    const struct AnimRef * m_skillName; // offset 0x1C, size 0x4
    class vector m_motiveEffects; // offset 0x20, size 0x10
};
// total size: 0x18
class _c2DArray {
    // Static members
    static void (* m_pfnFree)(void *); // size: 0x4
    static void * (* m_pfnAlloc)(unsigned int); // size: 0x4
    static class _c2DArray * sArrayList; // size: 0x4

    // Members
    class _c2DArray * fNextArray; // offset 0x0, size 0x4
protected:
    int fySize; // offset 0x4, size 0x4
    int fxSize; // offset 0x8, size 0x4
    void * fData; // offset 0xC, size 0x4
    class BString fName; // offset 0x10, size 0x4
    int fEntrySize; // offset 0x14, size 0x4
};
// total size: 0x18
class c2DArray : public _c2DArray {};
// total size: 0x18
class cArray : public c2DArray {};
// total size: 0x38
class cFixedWorld : public Commander {
    // Members
    int fXSize; // offset 0x10, size 0x4
    int fYSize; // offset 0x14, size 0x4
    class CFloorArray * m_FloorLayer; // offset 0x18, size 0x4
    class cArray * m_RoomLayer; // offset 0x1C, size 0x4
    class cArray * m_FlagLayer; // offset 0x20, size 0x4
    class CWallArray * m_WallLayer; // offset 0x24, size 0x4
    class InfluenceMap * m_influenceMap; // offset 0x28, size 0x4
    class PassiveInfluenceMap * m_passiveInfluenceMap; // offset 0x2C, size 0x4
    class CWallArray * m_WallUndoBuffer; // offset 0x30, size 0x4
    class CFloorArray * m_FloorUndoBuffer; // offset 0x34, size 0x4
};
float kAwarenessAngleTurnRate; // size: 0x4, address: 0x805DD018
float kAwarenessLookupDelay; // size: 0x4, address: 0x805DD01C
float kInfluenceTileDistance; // size: 0x4, address: 0x805DD020
float kAwarenessMaxAllowableAngle; // size: 0x4, address: 0x805DD024
float kAwarenessMaxAllowableLookupAngle; // size: 0x4, address: 0x805DD028
float kMaxLookupAngle; // size: 0x4, address: 0x805DD02C
float kTimeBetweenHungerAnims; // size: 0x4, address: 0x805DD030
// total size: 0x4
class AwarenessTweakTool {
    // Static members
    static float kTotalAngleTurn; // size: 0x4
    static float kTimeBetweenHungerAnims; // size: 0x4
    static float kMaxLookupAngle; // size: 0x4
    static float kAwarenessMaxAllowablePetLookupAngle; // size: 0x4
    static float kAwarenessMaxAllowableLookupAngle; // size: 0x4
    static float kAwarenessMaxAllowablePetAngle; // size: 0x4
    static float kAwarenessMaxAllowableAngle; // size: 0x4
    static float kInfluenceTileDistance; // size: 0x4
    static float kAwarenessLookupDelay; // size: 0x4
    static float kAwarenessAngleTurnRate; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
float kExitIdleOverlayBlend; // size: 0x4, address: 0x805DD040
float kDefaultBlendTime; // size: 0x4, address: 0x805DD044
float kBlendToDefaultIdle; // size: 0x4, address: 0x805DD048
float kWalkRunBlendTime; // size: 0x4, address: 0x805DD04C
float kTurnToIdleBlendTime; // size: 0x4, address: 0x805DD050
float kIdleToSkillBlendTime; // size: 0x4, address: 0x805DD054
float kTurnToTurnBlendTime; // size: 0x4, address: 0x805DD058
float kOtherToTurnBlendTime; // size: 0x4, address: 0x805DD05C
float kSidestepBlendTime; // size: 0x4, address: 0x805DD060
float kAwarenessBlendTime; // size: 0x4, address: 0x805DD064
float kCarryBlendTime; // size: 0x4, address: 0x805DD068
float kFastRemoveBlendTime; // size: 0x4, address: 0x805DD06C
// total size: 0x4
class BlendingTweakTool {
    // Static members
    static float kFastRemoveBlendTime; // size: 0x4
    static float kCarryBlendTime; // size: 0x4
    static float kAwarenessBlendTime; // size: 0x4
    static float kSidestepBlendTime; // size: 0x4
    static float kOtherToTurnBlendTime; // size: 0x4
    static float kTurnToTurnBlendTime; // size: 0x4
    static float kEarlyExitBlendTime; // size: 0x4
    static float kIdleToSkillBlendTime; // size: 0x4
    static float kTurnToIdleBlendTime; // size: 0x4
    static float kWalkRunBlendTime; // size: 0x4
    static float kBlendToDefaultIdle; // size: 0x4
    static float kDefaultBlendTime; // size: 0x4
    static float kExitIdleOverlayBlend; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
float kFreeMoveRunVelocity; // size: 0x4, address: 0x805DD070
float kFreeMoveWalkVelocity; // size: 0x4, address: 0x805DD074
float kFreeMoveStandingTurnRate; // size: 0x4, address: 0x805DD078
float kFreeMoveMovingTurnRate; // size: 0x4, address: 0x805DD07C
float kRoutingSidestepVelocity; // size: 0x4, address: 0x805DD080
float kSidestepStartMotionTrackPos; // size: 0x4, address: 0x805DD084
float kSidestepStopMotionTrackPos; // size: 0x4, address: 0x805DD088
float kCameraZoomVelocityFactor; // size: 0x4, address: 0x805DD08C
float s_simRadius; // size: 0x4, address: 0x805DD090
// total size: 0x4
class DirectControlTweakTool {
    // Static members
    static float s_simRadius; // size: 0x4
    static float kCameraZoomVelocityFactor; // size: 0x4
    static float kSidestepStopMotionTrackPos; // size: 0x4
    static float kSidestepStartMotionTrackPos; // size: 0x4
    static float kRoutingSidestepVelocity; // size: 0x4
    static float kFreeMoveMovingTurnRate; // size: 0x4
    static float kFreeMoveStandingTurnRate; // size: 0x4
    static float kFreeMoveWalkVelocity; // size: 0x4
    static float kFreeMoveRunVelocity; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
int kReselectIdleCount; // size: 0x4, address: 0x805DD094
int kIdleOverlayChance; // size: 0x4, address: 0x805DD098
int kIdleOverlayOneChance; // size: 0x4, address: 0x805DD09C
int kIdleOverlayTwoChance; // size: 0x4, address: 0x805DD0A0
int kIdleOverlayThreeChance; // size: 0x4, address: 0x805DD0A4
int kIdleOverlayFourChance; // size: 0x4, address: 0x805DD0A8
int kIdleOverlayFiveChance; // size: 0x4, address: 0x805DD0AC
float kLowMotiveValue; // size: 0x4, address: 0x805DD0B0
float kImpatientWaitTime; // size: 0x4, address: 0x805DD0B4
float kTrackScale; // size: 0x4, address: 0x805DD0B8
float kSimMoveWalkVelocity; // size: 0x4, address: 0x805DD0BC
float kSimMoveRunVelocity; // size: 0x4, address: 0x805DD0C0
// total size: 0x4
class MiscTweakTool {
    // Static members
    static float kChimpMoveRunVelocity; // size: 0x4
    static float kChimpMoveWalkVelocity; // size: 0x4
    static float kBoarMoveRunVelocity; // size: 0x4
    static float kBoarMoveWalkVelocity; // size: 0x4
    static float kCatMoveRunVelocity; // size: 0x4
    static float kCatMoveWalkVelocity; // size: 0x4
    static float kSmallDogMoveRunVelocity; // size: 0x4
    static float kSmallDogMoveWalkVelocity; // size: 0x4
    static float kDogMoveRunVelocity; // size: 0x4
    static float kDogMoveWalkVelocity; // size: 0x4
    static float kSimMoveRunVelocity; // size: 0x4
    static float kSimMoveWalkVelocity; // size: 0x4
    static float kTrackScaleTurnFactor; // size: 0x4
    static float kTrackScaleVelocityFactor; // size: 0x4
    static float kTrackScale; // size: 0x4
    static float kImpatientWaitTime; // size: 0x4
    static float kLowMotiveValue; // size: 0x4
    static int kIdleOverlayFiveChance; // size: 0x4
    static int kIdleOverlayFourChance; // size: 0x4
    static int kIdleOverlayThreeChance; // size: 0x4
    static int kIdleOverlayTwoChance; // size: 0x4
    static int kIdleOverlayOneChance; // size: 0x4
    static int kIdleOverlayChance; // size: 0x4
    static int kReselectIdleCount; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
float s_RightArmCarryIndexArray[57]; // size: 0xE4, address: 0x8048C3FC
unsigned int s_lRequiredAnimations[20]; // size: 0x50, address: 0x8041A908
unsigned int s_nNumRequiredAnimations; // size: 0x4, address: 0x805DD0C4
// total size: 0x878
class ChimpAnimator : public SAnimator2 {
    // Static members
    static unsigned int s_nNumRequiredAnimations; // size: 0x4
    static unsigned int s_lRequiredAnimations[20]; // size: 0x50
    static float s_RightArmCarryIndexArray[57]; // size: 0xE4

    // Members
    unsigned char m_bIsSitting; // offset 0x86C, size 0x1
    unsigned int m_nStandOrSitCount; // offset 0x870, size 0x4
};
// total size: 0x1C
class SmoothRouteInterpolator {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class SAnimator2 * m_pAnimator; // offset 0x4, size 0x4
    class SmoothRouteTester * m_pRouteTester; // offset 0x8, size 0x4
    class vector m_NoSmoothIdxArr; // offset 0xC, size 0x10
};
// total size: 0x8
class SmoothRouteTester {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class SAnimator2 * m_pAnimator; // offset 0x4, size 0x4
};
// total size: 0x24
class REffectsEmitter : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    struct FastParticleEmitterInitData * m_pEmitterInitData; // offset 0x14, size 0x4
    struct FastParticleBirthDataNgc * m_pParticleBirthData; // offset 0x18, size 0x4
    class ERTexture * m_pTexture; // offset 0x1C, size 0x4
    unsigned int m_resourceFlags; // offset 0x20, size 0x4
};
float s_RightArmCarryIndexArray[49]; // size: 0xC4, address: 0x8048C4E0
unsigned int s_lRequiredAnimations[12]; // size: 0x30, address: 0x8041A958
unsigned int s_nNumRequiredAnimations; // size: 0x4, address: 0x805DD0E4
// total size: 0x870
class BoarAnimator : public SAnimator2 {
    // Static members
    static unsigned int s_nNumRequiredAnimations; // size: 0x4
    static unsigned int s_lRequiredAnimations[12]; // size: 0x30
    static float s_RightArmCarryIndexArray[49]; // size: 0xC4
};
// total size: 0x9C
class AngularSpring {
    // Static members
    static float MAX_VELOCITY; // size: 0x4
    static float MAX_ACCELERATION; // size: 0x4
    static float GRAVITATIONAL_ACCELERATION; // size: 0x4
    static float MAX_TIME_STEP_INV; // size: 0x4
    static float MAX_TIME_STEP; // size: 0x4
    static float DEFAULT_DRAG_MULTIPLICATION_FACTOR; // size: 0x4
    static float DEFAULT_STIFFNESS_MULTIPLICATION_FACTOR; // size: 0x4
    static float DEFAULT_ELASTIC_MODULUS; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class EVec3 m_orient; // offset 0x4, size 0xC
    class EVec3 m_rotAxis; // offset 0x10, size 0xC
    class EVec3 m_normal; // offset 0x1C, size 0xC
    class EVec3 m_currentNormal; // offset 0x28, size 0xC
    class EVec3 m_currentOrient; // offset 0x34, size 0xC
    float m_xArea; // offset 0x40, size 0x4
    float m_elasticMod; // offset 0x44, size 0x4
    float m_viscousDrag; // offset 0x48, size 0x4
    float m_length; // offset 0x4C, size 0x4
    float m_mass; // offset 0x50, size 0x4
    float m_mMOI; // offset 0x54, size 0x4
    float m_invmMOI; // offset 0x58, size 0x4
    float m_stiffness; // offset 0x5C, size 0x4
    float m_rotAngle; // offset 0x60, size 0x4
    float m_twistAngle; // offset 0x64, size 0x4
    float m_angularVel; // offset 0x68, size 0x4
    float m_twistVel; // offset 0x6C, size 0x4
    float m_angularAcc; // offset 0x70, size 0x4
    float m_twistAcc; // offset 0x74, size 0x4
    unsigned char m_bEnableGravityUpdate; // offset 0x78, size 0x1
    class EVec3 m_gravityForce; // offset 0x7C, size 0xC
    class EVec3 m_externForce; // offset 0x88, size 0xC
    float m_extTorque; // offset 0x94, size 0x4
    float m_twistTorque; // offset 0x98, size 0x4
};
enum RainLevel {
    RAIN_LEVEL_NONE = 0,
    RAIN_LEVEL_LIGHT = 1,
    RAIN_LEVEL_MODERATE = 2,
    RAIN_LEVEL_HEAVY = 3,
    RAIN_LEVEL_VERY_HEAVY = 4,
    NUM_RAIN_LEVELS = 5,
};
enum CloudLevel {
    CLOUD_LEVEL_NORMAL = 0,
    CLOUD_LEVEL_OVERCAST = 1,
    CLOUD_LEVEL_STORMY = 2,
    NUM_CLOUD_LEVELS = 3,
};
enum FogLevel {
    FOG_LEVEL_NONE = 0,
    FOG_LEVEL_LIGHT = 1,
    FOG_LEVEL_MODERATE = 2,
    FOG_LEVEL_HEAVY = 3,
    NUM_FOG_LEVELS = 4,
};
// total size: 0x24
struct WeatherSequence {
    // Members
    int length; // offset 0x0, size 0x4
    int transitionLength; // offset 0x4, size 0x4
    enum WindLevel windLevel; // offset 0x8, size 0x4
    enum RainLevel rainLevel; // offset 0xC, size 0x4
    int lightningCheckInterval; // offset 0x10, size 0x4
    float lightningChance; // offset 0x14, size 0x4
    float gloomLevel; // offset 0x18, size 0x4
    enum CloudLevel cloudLevel; // offset 0x1C, size 0x4
    enum FogLevel fogLevel; // offset 0x20, size 0x4
};
// total size: 0x4
class VECTOR {
    // Members
    struct WeatherSequence * pData; // offset 0x0, size 0x4
};
// total size: 0xC
struct WeatherState {
    // Members
    class VECTOR sequences; // offset 0x0, size 0x4
    class VECTOR weights; // offset 0x4, size 0x4
    int ID; // offset 0x8, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct WeatherState * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x0
struct ERQTable {};
// total size: 0x1C
struct WindLevelRef {
    // Members
    int changeInterval; // offset 0x0, size 0x4
    float minSpeed; // offset 0x4, size 0x4
    float maxSpeed; // offset 0x8, size 0x4
    float maxDeltaSpeed; // offset 0xC, size 0x4
    float maxDeltaDirectionSide; // offset 0x10, size 0x4
    class VECTOR damagePerHour; // offset 0x14, size 0x4
    unsigned int plantAnimation; // offset 0x18, size 0x4
};
// total size: 0x8
struct RainLevelRef {
    // Members
    class VECTOR damagePerHour; // offset 0x0, size 0x4
    unsigned int rainAnimation; // offset 0x4, size 0x4
};
// total size: 0x8
struct FogLevelRef {
    // Members
    float intensity; // offset 0x0, size 0x4
    class VECTOR color; // offset 0x4, size 0x4
};
// total size: 0x8
struct WeatherEvent {
    // Members
    class GameTime startTime; // offset 0x0, size 0x4
    unsigned short eventType; // offset 0x4, size 0x2
    unsigned char windLevel; // offset 0x6, size 0x1
    unsigned char rainLevel; // offset 0x7, size 0x1
};
// total size: 0x8
struct WindyPlantInfo {
    // Members
    class EMidLotInstance * pMidLotInstance; // offset 0x0, size 0x4
    int nBucketNumber; // offset 0x4, size 0x4
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
    struct WindyPlantInfo * mpBegin; // offset 0x0, size 0x4
    struct WindyPlantInfo * mpEnd; // offset 0x4, size 0x4
    struct WindyPlantInfo * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum WeatherStateType {
    WEATHER_STATE_CLEAR = 0,
    WEATHER_STATE_HURRICANE = 1,
    WEATHER_STATE_RAINY = 2,
    WEATHER_STATE_STORMY = 3,
    NUM_WEATHER_STATES = 4,
};
// total size: 0x4EC
class WeatherManager {
    // Static members
    static int MAX_WINDY_PLANT_BUCKETS; // size: 0x4
    static float SUN_MOON_MAX_HEIGHT; // size: 0x4
    static float SUN_MOON_DISTANCE; // size: 0x4
    static int SECONDS_BETWEEN_MOON_PHASE_UPDATE; // size: 0x4
    static int SECONDS_BETWEEN_SUN_MOON_UPDATE; // size: 0x4
    static int MAX_WEATHER_EVENTS; // size: 0x4
    static int SECONDS_BETWEEN_DAMAGE_ACCUMULATION; // size: 0x4
    static int MAX_NEAR_THUNDER_DELAY; // size: 0x4
    static int MAX_THUNDER_DELAY; // size: 0x4
    static float LIGHTNING_CHANCE_TO_INCREASE; // size: 0x4
    static float LIGHTNING_DECREASE_PER_FRAME; // size: 0x4
    static float MAX_WIND_SPEED; // size: 0x4
    static char * ms_szMoonPhaseNames[]; // size: 0x0
    static char * ms_szFogLevelNames[]; // size: 0x0
    static char * ms_szCloudLevelNames[]; // size: 0x0
    static char * ms_szRainLevelNames[]; // size: 0x0
    static char * ms_szWindLevelNames[]; // size: 0x0
    static char * ms_szWeatherStateNames[]; // size: 0x0

    // Members
    class ERQuickdata * m_pWeatherQData; // offset 0x0, size 0x4
    const struct ERQTable * m_pWeatherStateTable; // offset 0x4, size 0x4
    const struct ERQTable * m_pWindLevelRefTable; // offset 0x8, size 0x4
    const struct ERQTable * m_pRainLevelRefTable; // offset 0xC, size 0x4
    const struct ERQTable * m_pFogLevelRefTable; // offset 0x10, size 0x4
    const struct ERQTable * m_pWeatherSoundsTable; // offset 0x14, size 0x4
    const struct WorldData * m_pWorldData; // offset 0x18, size 0x4
    int m_nTotalWeights[12]; // offset 0x1C, size 0x30
    class BitFlags m_nWeatherFlags; // offset 0x4C, size 0x4
    class GameTime m_nCurrentTime; // offset 0x50, size 0x4
    signed short m_nCurrentMonth; // offset 0x54, size 0x2
    signed short m_nCurrentDay; // offset 0x56, size 0x2
    signed short m_nCurrentHour; // offset 0x58, size 0x2
    signed short m_nCurrentMinute; // offset 0x5A, size 0x2
    float m_fShaderDT; // offset 0x5C, size 0x4
    const struct MonthData * m_pMonthData; // offset 0x60, size 0x4
    const struct DayData * m_pDayData; // offset 0x64, size 0x4
    const struct WeatherState * m_pCurrentWeatherState; // offset 0x68, size 0x4
    const struct WeatherSequence * m_pCurrentWeatherSequence; // offset 0x6C, size 0x4
    const struct WeatherSequence * m_pPreviousWeatherSequence; // offset 0x70, size 0x4
    int m_nCurrentSequenceNumber; // offset 0x74, size 0x4
    class GameTime m_currentSequenceStartTime; // offset 0x78, size 0x4
    const struct WindLevelRef * m_pWindLevelData; // offset 0x7C, size 0x4
    enum WindLevel m_windLevel; // offset 0x80, size 0x4
    class GameTime m_nextWindChangeTime; // offset 0x84, size 0x4
    class EVec3 m_v3WindDirection; // offset 0x88, size 0xC
    float m_fWindSpeed; // offset 0x94, size 0x4
    const struct RainLevelRef * m_pRainLevelData; // offset 0x98, size 0x4
    enum RainLevel m_rainLevel; // offset 0x9C, size 0x4
    float m_fRainBlend; // offset 0xA0, size 0x4
    class RainEffect * m_pRain; // offset 0xA4, size 0x4
    class GameTime m_nextLightningCheckTime; // offset 0xA8, size 0x4
    float m_fCurrentLightningLevel; // offset 0xAC, size 0x4
    class EVec2 m_v2LightningPitchYaw; // offset 0xB0, size 0x8
    float m_fLightningSpeedMultiplier; // offset 0xB8, size 0x4
    float m_fLightningRateMultiplier; // offset 0xBC, size 0x4
    float m_fTargetGloomLevel; // offset 0xC0, size 0x4
    float m_fCurrentGloomLevel; // offset 0xC4, size 0x4
    enum CloudLevel m_cloudLevel; // offset 0xC8, size 0x4
    const struct FogLevelRef * m_pFogLevelData; // offset 0xCC, size 0x4
    enum FogLevel m_fogLevel; // offset 0xD0, size 0x4
    float m_fCurrentFogIntensity; // offset 0xD4, size 0x4
    float m_fTargetFogIntensity; // offset 0xD8, size 0x4
    class EVec4 m_fogColor; // offset 0xDC, size 0x10
    class GameTime m_nextDamageTime; // offset 0xEC, size 0x4
    float m_fAccumulatedDamage[4]; // offset 0xF0, size 0x10
    const struct LevelData * m_pCurrentLevelData; // offset 0x100, size 0x4
    class BitFlags m_nCurrentLevelFlags; // offset 0x104, size 0x4
    class GameTime m_nextEarthquakeCheckTime; // offset 0x108, size 0x4
    struct WeatherEvent m_weatherEvents[100]; // offset 0x10C, size 0x320
    int m_nWeatherEventListHead; // offset 0x42C, size 0x4
    int m_nNumWeatherEvents; // offset 0x430, size 0x4
    class GameTime m_nextSunMoonUpdateTime; // offset 0x434, size 0x4
    float m_fSunriseAdd; // offset 0x438, size 0x4
    float m_fSunsetAdd; // offset 0x43C, size 0x4
    float m_fSunDeclination; // offset 0x440, size 0x4
    class GameTime m_sunriseTime; // offset 0x444, size 0x4
    class GameTime m_sunsetTime; // offset 0x448, size 0x4
    float m_fSunPhi; // offset 0x44C, size 0x4
    float m_fSunTheta; // offset 0x450, size 0x4
    class EVec3 m_sunPos; // offset 0x454, size 0xC
    class EVec3 m_sunlightDir; // offset 0x460, size 0xC
    enum MoonPhase m_moonPhase; // offset 0x46C, size 0x4
    const struct DayData * m_pMoonPhaseDayData; // offset 0x470, size 0x4
    class GameTime m_moonriseTime; // offset 0x474, size 0x4
    class GameTime m_moonsetTime; // offset 0x478, size 0x4
    float m_fMoonPhi; // offset 0x47C, size 0x4
    float m_fMoonTheta; // offset 0x480, size 0x4
    class EVec3 m_moonPos; // offset 0x484, size 0xC
    class EVec3 m_moonlightDir; // offset 0x490, size 0xC
    float m_fMoonDeclination; // offset 0x49C, size 0x4
    class EVec3 m_sunMoonAdditionalOffset; // offset 0x4A0, size 0xC
    class GameTime m_nextMoonPhaseUpdateTime; // offset 0x4AC, size 0x4
    class vector m_windyPlants; // offset 0x4B0, size 0x10
    unsigned int m_nWindyPlantBlendAnimID; // offset 0x4C0, size 0x4
    class ERAnim * m_pWindyPlantBlendAnim; // offset 0x4C4, size 0x4
    float m_fMaxOutsideGloomIntensity; // offset 0x4C8, size 0x4
    float m_fMaxSkylightGloomIntensity; // offset 0x4CC, size 0x4
    class ERModel * m_pRainModel; // offset 0x4D0, size 0x4
    class ERCharacter * m_pRainCharacter; // offset 0x4D4, size 0x4
    class ERAnim * m_pRainAnimations[5]; // offset 0x4D8, size 0x14
};
enum WindLevel {
    WIND_LEVEL_CALM = 0,
    WIND_LEVEL_LIGHT = 1,
    WIND_LEVEL_MODERATE = 2,
    WIND_LEVEL_HEAVY = 3,
    WIND_LEVEL_VERY_HEAVY = 4,
    NUM_WIND_LEVELS = 5,
};
// total size: 0x2104
class TreeBranchManager {
    // Static members
    static class TreeBranchManager * s_pTreeBranchManager; // size: 0x4
    static float DEFAULT_MAX_ANGULAR_VELOCITY; // size: 0x4
    static float DEFAULT_WIND_FORCE_MULTIPLICATION_FACTOR; // size: 0x4

    // Members
    class EVec3 m_lastPosition[2][36]; // offset 0x0, size 0x360
    class BranchInstance * m_pBranchInstances[2][36]; // offset 0x360, size 0x120
    class AngularSpring * m_pAngularSprings[36]; // offset 0x480, size 0x90
    struct MidLotObject m_BranchData[2][36]; // offset 0x510, size 0x10E0
    class InstanceData m_AdditionalBranchInstances[2]; // offset 0x15F0, size 0x448
    struct BranchTreeInfo m_TreeBranchAssociation[2][36]; // offset 0x1A38, size 0x6C0
    float m_windForceMultiplier; // offset 0x20F8, size 0x4
    float m_maxAngularVelocity; // offset 0x20FC, size 0x4
    class ERLevel * m_pLevel; // offset 0x2100, size 0x4
};
union /* @class$54587game_animation_unity_cpp */ {
    float f; // offset 0x0, size 0x4
    unsigned int u; // offset 0x0, size 0x4
};
// total size: 0x54
class LinearSpring2D {
    // Static members
    static float MAX_TIME_STEP_INV; // size: 0x4
    static float MAX_TIME_STEP; // size: 0x4
    static float DEFAULT_DRAG_MULTIPLICATION_FACTOR; // size: 0x4
    static float DEFAULT_STIFFNESS_MULTIPLICATION_FACTOR; // size: 0x4
    static float DEFAULT_ELASTIC_MODULUS; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    float m_length; // offset 0x4, size 0x4
    float m_area; // offset 0x8, size 0x4
    float m_mass; // offset 0xC, size 0x4
    float m_invmass; // offset 0x10, size 0x4
    float m_elasticModulus; // offset 0x14, size 0x4
    float m_MOI; // offset 0x18, size 0x4
    float m_stiffness; // offset 0x1C, size 0x4
    float m_viscousDrag; // offset 0x20, size 0x4
    class EVec3 m_pos; // offset 0x24, size 0xC
    class EVec3 m_vel; // offset 0x30, size 0xC
    class EVec3 m_acc; // offset 0x3C, size 0xC
    class EVec3 m_curForce; // offset 0x48, size 0xC
};
// total size: 0x1C
class TreeManager {
    // Static members
    static class TreeManager * s_pTreeManager; // size: 0x4
    static float DEFAULT_MAX_TRUNK_VELOCITY; // size: 0x4
    static float DEFAULT_MAX_TRUNK_POSITION; // size: 0x4
    static float DEFAULT_WIND_FORCE_MULTIPLICATION_FACTOR; // size: 0x4

    // Members
    class LinearSpring2D * m_pTreeTrunk[4]; // offset 0x0, size 0x10
    float m_windForceMultiplier; // offset 0x10, size 0x4
    float m_maxTrunkPosition; // offset 0x14, size 0x4
    float m_maxTrunkVelocity; // offset 0x18, size 0x4
};
class TreeBranchManager * s_pTreeBranchManager; // size: 0x4, address: 0x805DB694
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
    class allocator mAllocator; // offset 0x8, size 0x1
};
// total size: 0xC
class list : public ListBase {};
// total size: 0xC
class list : public ListBase {};
// total size: 0x18
class ERTexture : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class ETexture * m_pTexture; // offset 0x14, size 0x4
};
enum eBranchAnimControllers {
    kPalmBranchController = 0,
    kDateBranchController = 0,
    kPapayaBranchController = 0,
    kBananaBranchController = 1,
    kTotalBranchControllers = 2,
};
// total size: 0x3C0
class BranchInstance : public EMidLotInstance {
    // Members
protected:
    enum eBranchStyle m_eBranchStyle; // offset 0x3B4, size 0x4
    enum eBranchOrientation m_eBranchOrientation; // offset 0x3B8, size 0x4
};
// total size: 0x18
struct BranchTreeInfo {
    // Members
    class list fTreeInstanceList; // offset 0x0, size 0xC
    class list fObjInstanceList; // offset 0xC, size 0xC
};
// total size: 0xD44
class EModelManager : public EResourceManager {};
// total size: 0xD44
class EShaderManager : public EResourceManager {};
// total size: 0x8
struct ListNodeBase {
    // Members
    struct ListNodeBase * mpNext; // offset 0x0, size 0x4
    struct ListNodeBase * mpPrev; // offset 0x4, size 0x4
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class TreeInstance * mValue; // offset 0x8, size 0x4
};
// total size: 0x3C0
class TreeInstance : public EMidLotInstance {
    // Members
protected:
    enum eTreeType m_eTreeType; // offset 0x3B4, size 0x4
    enum eBranchStyle m_eBranchType; // offset 0x3B8, size 0x4
};
enum eTreeType {
    kPalmTree = 0,
    kDateTree = 1,
    kBananaTree = 2,
    kPapayaTree = 3,
    kTotalTreeTypes = 4,
    kErrorTree = 4,
};
// total size: 0xC
struct ListNode : public ListNodeBase {
    // Members
    class ISimInstance * mValue; // offset 0x8, size 0x4
};
enum eBranchPitch {
    kBranchUp = 0,
    kBranchNeutral = 1,
    kBranchDown = 2,
    kTotalBranchPitches = 3,
};
enum eBranchOrientation {
    kBranchUp_CCW0 = 0,
    kBranchNeutral_CCW0 = 1,
    kBranchDown_CCW0 = 2,
    kBranchUp_CCW30 = 3,
    kBranchNeutral_CCW30 = 4,
    kBranchDown_CCW30 = 5,
    kBranchUp_CCW60 = 6,
    kBranchNeutral_CCW60 = 7,
    kBranchDown_CCW60 = 8,
    kBranchUp_CCW90 = 9,
    kBranchNeutral_CCW90 = 10,
    kBranchDown_CCW90 = 11,
    kBranchUp_CCW120 = 12,
    kBranchNeutral_CCW120 = 13,
    kBranchDown_CCW120 = 14,
    kBranchUp_CCW150 = 15,
    kBranchNeutral_CCW150 = 16,
    kBranchDown_CCW150 = 17,
    kBranchUp_CCW180 = 18,
    kBranchNeutral_CCW180 = 19,
    kBranchDown_CCW180 = 20,
    kBranchUp_CCW210 = 21,
    kBranchNeutral_CCW210 = 22,
    kBranchDown_CCW210 = 23,
    kBranchUp_CCW240 = 24,
    kBranchNeutral_CCW240 = 25,
    kBranchDown_CCW240 = 26,
    kBranchUp_CCW270 = 27,
    kBranchNeutral_CCW270 = 28,
    kBranchDown_CCW270 = 29,
    kBranchUp_CCW300 = 30,
    kBranchNeutral_CCW300 = 31,
    kBranchDown_CCW300 = 32,
    kBranchUp_CCW330 = 33,
    kBranchNeutral_CCW330 = 34,
    kBranchDown_CCW330 = 35,
    kTotalBranchOrientations = 36,
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
enum eBranchStyle {
    kPalmBranch = 0,
    kDateBranch = 1,
    kBananaBranch = 2,
    kPapayaBranch = 3,
    kTotalBranchStyles = 4,
};
class TreeManager * s_pTreeManager; // size: 0x4, address: 0x805DB698
// total size: 0x2C0
class IKDataBoar : public IKData {};
// total size: 0x2C0
class IKDataChimp : public IKData {};
// total size: 0xC
struct {} __vt__14LinearSpring2D; // size: 0xC, address: 0x804240BC
// total size: 0xC
struct {} __vt__13AngularSpring; // size: 0xC, address: 0x804240C8
// total size: 0x18
struct {} __vt__10IKDataBoar; // size: 0x18, address: 0x804240D8
// total size: 0xC
struct {} __vt__17SmoothRouteTester; // size: 0xC, address: 0x804240F0
// total size: 0x18
struct {} __vt__11IKDataChimp; // size: 0x18, address: 0x80424100
// total size: 0xC
struct {} __vt__18AwarenessTweakTool; // size: 0xC, address: 0x80424118
// total size: 0xC
struct {} __vt__16AutorunTweakTool; // size: 0xC, address: 0x80424124
// total size: 0x128
struct {} __vt__12BoarAnimator; // size: 0x128, address: 0x80424130
// total size: 0x128
struct {} __vt__13ChimpAnimator; // size: 0x128, address: 0x80424258
// total size: 0x128
struct {} __vt__20AdultMaleSimAnimator; // size: 0x128, address: 0x80424380
// total size: 0x128
struct {} __vt__22AdultFemaleSimAnimator; // size: 0x128, address: 0x804244A8
// total size: 0x128
struct {} __vt__16AdultSimAnimator; // size: 0x128, address: 0x804245D0
// total size: 0x128
struct {} __vt__10SAnimator2; // size: 0x128, address: 0x804246F8
// total size: 0x18
struct {} __vt__6IKData; // size: 0x18, address: 0x80424820
// total size: 0xC
struct {} __vt__23SmoothRouteInterpolator; // size: 0xC, address: 0x80424838
// total size: 0xC
struct {} __vt__22DirectControlTweakTool; // size: 0xC, address: 0x80424844
// total size: 0xC
struct {} __vt__13MiscTweakTool; // size: 0xC, address: 0x80424850
// total size: 0xC
struct {} __vt__17BlendingTweakTool; // size: 0xC, address: 0x8042485C
// total size: 0xA0
struct {} __vt__9SAnimator; // size: 0xA0, address: 0x80424868
// total size: 0x38
struct {} __vt__16AwarenessManager; // size: 0x38, address: 0x80424908
// total size: 0x4
class generic_iterator {
    // Members
protected:
    int * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct copy_backward_generic_iterator {};
// total size: 0x1
struct copy_backward_impl {};
// total size: 0xC
struct EPropItem {
    // Members
    unsigned int Id; // offset 0x0, size 0x4
    unsigned char DrawInWindow; // offset 0x4, size 0x1
    class ERModel * m_model; // offset 0x8, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct EPropItem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
class TArrayDefaultAllocator {};
// total size: 0xD44
class EffectsEmitterManager : public EResourceManager {};
enum ESimsPreloadMode {
    kPreloadModeNone = 0,
    kPreloadModeSavegame = 1,
    KPreloadModeSelector = 2,
};
// total size: 0x18
class EEvent {
    // Members
protected:
    class ESemaphore m_sema; // offset 0x0, size 0x18
};
// total size: 0xD5C
class ESimsDataManager : public EResourceManager {
    // Static members
    static class EResourceManager * _pCurrentManager; // size: 0x4

    // Members
    enum ESimsPreloadMode m_mode; // offset 0xD44, size 0x4
    unsigned int m_uTotalCompleted; // offset 0xD48, size 0x4
    unsigned int m_uTotalListSize; // offset 0xD4C, size 0x4
    int m_iWorkQueued; // offset 0xD50, size 0x4
    class ObjSelector * volatile m_pCurrentSelector; // offset 0xD54, size 0x4
    class ObjectSaveTypeTable2 * m_pSaveTable; // offset 0xD58, size 0x4
};
enum CameraZoomState {
    CAMERAZOOM_NORMAL = 0,
    CAMERAZOOM_PET = 1,
    CAMERAZOOM_SOCIAL = 2,
};
// total size: 0x1A0
class SimsCameraParameters {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float m_deadZoneMinZoom; // offset 0x4, size 0x4
    float m_deadZoneMaxZoom; // offset 0x8, size 0x4
    float m_transStiffnessMinZoom; // offset 0xC, size 0x4
    float m_transStiffnessMaxZoom; // offset 0x10, size 0x4
    float m_rotStiffnessMinZoom; // offset 0x14, size 0x4
    float m_rotStiffnessMaxZoom; // offset 0x18, size 0x4
    float m_zoomStiffnessMinZoom; // offset 0x1C, size 0x4
    float m_zoomStiffnessMaxZoom; // offset 0x20, size 0x4
    float m_minZoom; // offset 0x24, size 0x4
    float m_maxZoom; // offset 0x28, size 0x4
    float m_fZoomPosIndexRatios[4]; // offset 0x2C, size 0x10
    float m_socialModeMinZoom; // offset 0x3C, size 0x4
    float m_socialModeMaxZoom; // offset 0x40, size 0x4
    float m_petCamMinZoom; // offset 0x44, size 0x4
    float m_petCamMaxZoom; // offset 0x48, size 0x4
    float m_minTilt; // offset 0x4C, size 0x4
    float m_maxTilt; // offset 0x50, size 0x4
    float m_petCamMinTilt; // offset 0x54, size 0x4
    float m_petCamMaxTilt; // offset 0x58, size 0x4
    class EVec3 m_socialModeTargetPointOffset; // offset 0x5C, size 0xC
    float m_minCursorSpeed; // offset 0x68, size 0x4
    float m_maxCursorSpeed; // offset 0x6C, size 0x4
    float m_minFov; // offset 0x70, size 0x4
    float m_maxFov; // offset 0x74, size 0x4
    float m_farPlane; // offset 0x78, size 0x4
    float m_minNearPlane; // offset 0x7C, size 0x4
    float m_maxNearPlane; // offset 0x80, size 0x4
    float m_rotateSpeed0; // offset 0x84, size 0x4
    float m_rotateSpeed1; // offset 0x88, size 0x4
    float m_rotateSpeed1Threshold; // offset 0x8C, size 0x4
    float m_translateSpeed1; // offset 0x90, size 0x4
    float m_translateSpeed1Threshold; // offset 0x94, size 0x4
    float m_zoomSpeed; // offset 0x98, size 0x4
    float m_lookAtHeight; // offset 0x9C, size 0x4
    float m_petLookAtHeight; // offset 0xA0, size 0x4
    float m_cursorRectLeft; // offset 0xA4, size 0x4
    float m_cursorRectTop; // offset 0xA8, size 0x4
    float m_cursorRectRight; // offset 0xAC, size 0x4
    float m_cursorRectBottom; // offset 0xB0, size 0x4
    float m_degRotAngDef; // offset 0xB4, size 0x4
    float m_degTiltAngDef; // offset 0xB8, size 0x4
    float m_zoomDef; // offset 0xBC, size 0x4
    class EVec3 m_vEyeDef; // offset 0xC0, size 0xC
    class EVec3 m_vTargetDef; // offset 0xCC, size 0xC
    class EVec3 m_vUpDef; // offset 0xD8, size 0xC
    unsigned char m_noiseOn[7]; // offset 0xE4, size 0x7
    class EVec4 m_vNoise[7]; // offset 0xEC, size 0x70
    float m_noiseTransScale[7]; // offset 0x15C, size 0x1C
    int m_noisePriority[7]; // offset 0x178, size 0x1C
    unsigned char m_useNoiseAnim[7]; // offset 0x194, size 0x7
    unsigned char m_displayCameraInfo; // offset 0x19B, size 0x1
    enum CameraZoomState m_cameraZoomState; // offset 0x19C, size 0x4
};
enum eTrackSimCameraState {
    TRACK_SIM_REGULAR = 0,
    TRACK_SIM_TRANSITION_TO_REGULAR = 1,
    TRACK_SIM_SHALLOW_WATER = 2,
    TRACK_SIM_TRANSITION_TO_SHALLOW_WATER = 3,
    TRACK_SIM_SHALLOW_TO_DEEP_WATER = 4,
    TRACK_SIM_TRANSITION_SHALLOW_TO_DEEP_WATER = 5,
    TRACK_SIM_DEEP_WATER = 6,
    TRACK_SIM_TRANSITION_TO_DEEP_WATER = 7,
    TRACK_SIM_OUTSIDE = 8,
    TRACK_SIM_TRANSITION_TO_OUTSIDE = 9,
    TRACK_SIM_NEAR = 10,
    TRACK_SIM_TRANSITION_TO_NEAR = 11,
    TRACK_SIM_MID = 12,
    TRACK_SIM_TRANSITION_TO_MID = 13,
    TRACK_SIM_FAR = 14,
    TRACK_SIM_TRANSITION_TO_FAR = 15,
};
enum eCameraZoomPositionIndex {
    ZOOMPOS_NEAR = 0,
    ZOOMPOS_MID1 = 1,
    ZOOMPOS_MID2 = 2,
    ZOOMPOS_FAR = 3,
    ZOOMPOS_NUM_POSITIONS = 4,
};
enum CameraMode {
    CAM_MODE_ZOOM = 0,
    CAM_MODE_TRACK_SIM = 1,
    CAM_MODE_RAY_INTERACTOR = 2,
    CAM_MODE_BLUEPRINT_MODE = 3,
    CAM_MODE_LASTMODE = 4,
    CAM_MODE_STATIC = 5,
};
// total size: 0x18
struct CameraParameters {
    // Members
    class EVec3 m_vLookAt; // offset 0x0, size 0xC
    float m_zoom; // offset 0xC, size 0x4
    float m_degRotAng; // offset 0x10, size 0x4
    float m_degTiltAng; // offset 0x14, size 0x4
};
enum CameraNoiseSetting {
    CAMERA_NOISE_OFF = -1,
    CAMERA_NOISE_SETTING_PRIMITVE_0 = 0,
    CAMERA_NOISE_SETTING_PRIMITVE_1 = 1,
    CAMERA_NOISE_SETTING_PRIMITVE_2 = 2,
    CAMERA_NOISE_SETTING_PRIMITVE_3 = 3,
    CAMERA_NOISE_SETTING_RUNNING = 4,
    CAMERA_NOISE_SETTING_NOCONTROL = 5,
    CAMERA_NOISE_SETTING_CONTROL = 6,
    CAMERA_MAX_NOISE_SETTINGS = 7,
};
enum CameraAnimationMode {
    kCameraAnimationNone = 0,
    kCameraAnimationLookAtObject = 1,
    kCameraAnimationLookFromObject = 2,
    kCameraAnimationLookFromObjectToAnother = 3,
    kCameraAnimationOverride = 4,
};
enum eCameraParamIdx {
    kRegularCameraMinIdx = 0,
    kRegularCameraMaxIdx = 1,
    kWaterCameraMinIdx = 2,
    kWaterCameraMaxIdx = 3,
    kWaterShallowToDeepCameraMinIdx = 4,
    kWaterShallowToDeepCameraMaxIdx = 5,
    kDeepWaterCameraMinIdx = 6,
    kDeepWaterCameraMaxIdx = 7,
    kOutsideCameraMinIdx = 8,
    kOutsideCameraMaxIdx = 9,
    kNearCameraMinIdx = 10,
    kNearCameraMaxIdx = 11,
    kMidCameraMinIdx = 12,
    kMidCameraMaxIdx = 13,
    kFarCameraMinIdx = 14,
    kFarCameraMaxIdx = 15,
    kTotalCameraIdx = 16,
};
// total size: 0xB4
class NewControlParms {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    unsigned char m_bEnableMoveToInsteadOfGravitateTo; // offset 0x4, size 0x1
    float m_gravityWellVelDrag; // offset 0x8, size 0x4
    float m_gravityWellVelMax; // offset 0xC, size 0x4
    float m_gravityWellAcc; // offset 0x10, size 0x4
    float m_gravityWellZFactor; // offset 0x14, size 0x4
    float m_magneticWellAttractionVelDrag; // offset 0x18, size 0x4
    float m_magneticWellMaxVel; // offset 0x1C, size 0x4
    float m_magneticWellAttractionAcc; // offset 0x20, size 0x4
    float m_magneticWellPullAwayVelScale; // offset 0x24, size 0x4
    float m_magneticWellPullAwayAccScale; // offset 0x28, size 0x4
    unsigned char m_showObjectOverlap; // offset 0x2C, size 0x1
    unsigned char m_cameraFollowPlumbBob; // offset 0x2D, size 0x1
    unsigned char m_plumbBobFadePlane; // offset 0x2E, size 0x1
    float m_plumbBobFadePlaneOffset; // offset 0x30, size 0x4
    float m_plumbBobFadePlaneRadius; // offset 0x34, size 0x4
    float m_plumbBobFadePlaneAttenuation; // offset 0x38, size 0x4
    unsigned char m_autoSelect; // offset 0x3C, size 0x1
    float m_autoSelectGoHereDelay; // offset 0x40, size 0x4
    float m_autoSelectObjectDelay; // offset 0x44, size 0x4
    float m_cursorOffSimThreshold; // offset 0x48, size 0x4
    unsigned char m_bAutoSnapBackIsEnabled; // offset 0x4C, size 0x1
    float m_timeToSnapBack; // offset 0x50, size 0x4
    unsigned char m_snapBackAfterSelect; // offset 0x54, size 0x1
    unsigned char m_cutBackAfterSelect; // offset 0x55, size 0x1
    float m_playerSimPauseMultiplier; // offset 0x58, size 0x4
    float m_simPauseMultiplier; // offset 0x5C, size 0x4
    unsigned char m_autoDriftRotation; // offset 0x60, size 0x1
    float m_autoDriftDelay; // offset 0x64, size 0x4
    float m_autoDriftRotationAcc; // offset 0x68, size 0x4
    float m_autoDriftZoomAcc; // offset 0x6C, size 0x4
    unsigned char m_showCursorLimit; // offset 0x70, size 0x1
    float m_cursorAcc; // offset 0x74, size 0x4
    float m_cursorLimitTrap[4]; // offset 0x78, size 0x10
    float m_cursorLimitTopWidthMinZoom; // offset 0x88, size 0x4
    float m_cursorLimitTopWidthMaxZoom; // offset 0x8C, size 0x4
    float m_cursorLimitDepthMinZoom; // offset 0x90, size 0x4
    float m_cursorLimitDepthMaxZoom; // offset 0x94, size 0x4
    unsigned char m_playerWindowSlop; // offset 0x98, size 0x1
    unsigned char m_showPlayerSlop; // offset 0x99, size 0x1
    float m_playerSlopAcc; // offset 0x9C, size 0x4
    float m_playerSlopTrapScale; // offset 0xA0, size 0x4
    float m_playerSlopTrap[4]; // offset 0xA4, size 0x10
};
enum Panelstate {
    LIVE_DEFAULT_STATE = 0,
    LIVE_DIALOG_STATE = 1,
    LIVE_ACTIONQ_STATE = 2,
    LIVE_INFOUP_1_STATE = 3,
    LIVE_INFOUP_2_STATE = 4,
    LIVE_PIMENU_STATE = 5,
    LIVE_SIM_EDIT = 6,
    LIVE_TWITCHOMATIC = 7,
    NSTATES = 8,
};
// total size: 0x770
class ESimsCam {
    // Static members
    static enum CameraMode m_modeDef; // size: 0x4
    static float m_zoomDef; // size: 0x4
    static float m_degTiltAngDef; // size: 0x4
    static float m_degRotAngDef; // size: 0x4
    static class EVec3 m_vUpDef; // size: 0xC
    static class EVec3 m_vTargetDef; // size: 0xC
    static class EVec3 m_vEyeDef; // size: 0xC
    static unsigned int kTotalCameraLegalRayCasts; // size: 0x4
    static class NewControlParms s_newControlParms; // size: 0xB4
    static class SimsCameraParameters s_params; // size: 0x1A0
    static float CAMERA_DPAD_ROTATION_DELTA; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class SimsCameraParameters * m_params; // offset 0x4, size 0x4
private:
    enum eTrackSimCameraState m_eTrackSimCameraState; // offset 0x8, size 0x4
    enum eCameraZoomPositionIndex m_CameraZoomPosIdx; // offset 0xC, size 0x4
    class RaycastLastHit m_lastElevationHit; // offset 0x10, size 0x30
    class RaycastLastHit m_lastElevationHitFSS; // offset 0x40, size 0x30
    class RaycastLastHit m_lastLegalCameraHitActualPos; // offset 0x70, size 0x30
    class RaycastLastHit m_lastLegalCameraHit[6]; // offset 0xA0, size 0x120
    class EMat4 m_mFirstPerson; // offset 0x1C0, size 0x40
    class E3DWindow m_win; // offset 0x200, size 0x358
    class EAnimController m_ac; // offset 0x558, size 0xAC
    class Quad m_cursorQuad; // offset 0x604, size 0x30
    class Quad m_playerQuad; // offset 0x634, size 0x30
    class EVec3 m_vEye; // offset 0x664, size 0xC
    class EVec3 m_vUp; // offset 0x670, size 0xC
    class EVec3 m_lastCursorPosition; // offset 0x67C, size 0xC
    class EVec3 m_noiseVel; // offset 0x688, size 0xC
    class EVec3 m_noiseNewVel; // offset 0x694, size 0xC
    class EVec3 m_noisePos; // offset 0x6A0, size 0xC
    float m_camSpeed; // offset 0x6AC, size 0x4
    float m_autoDriftDelay; // offset 0x6B0, size 0x4
    float m_autoDriftRotationVel; // offset 0x6B4, size 0x4
    float m_autoDriftZoomVel; // offset 0x6B8, size 0x4
    float m_noiseStartTime; // offset 0x6BC, size 0x4
    float m_noiseVelScale; // offset 0x6C0, size 0x4
    int m_playerId; // offset 0x6C4, size 0x4
    int m_LockedPad; // offset 0x6C8, size 0x4
    int m_noiseCameraAnim[7]; // offset 0x6CC, size 0x1C
    unsigned int m_ControllerFilterId; // offset 0x6E8, size 0x4
    class cXObject * m_animationObject1; // offset 0x6EC, size 0x4
    class cXObject * m_animationObject2; // offset 0x6F0, size 0x4
    unsigned short m_roomId; // offset 0x6F4, size 0x2
    enum CameraMode m_mode; // offset 0x6F8, size 0x4
    enum CameraMode m_lastMode; // offset 0x6FC, size 0x4
    struct CameraParameters m_TargetParams; // offset 0x700, size 0x18
    float m_TargetTerrainOffset; // offset 0x718, size 0x4
    float m_CameraTerrainOffset; // offset 0x71C, size 0x4
    struct CameraParameters m_ActualParams; // offset 0x720, size 0x18
    enum CameraNoiseSetting m_activeNoiseSetting; // offset 0x738, size 0x4
    enum CameraAnimationMode m_animationMode; // offset 0x73C, size 0x4
    unsigned char m_actualParamsInitialized; // offset 0x740, size 0x1
    unsigned char m_alignCameraWithPlayerMotion; // offset 0x741, size 0x1
    unsigned char m_centerNew; // offset 0x742, size 0x1
    unsigned char m_roomOpaque; // offset 0x743, size 0x1
    unsigned char m_bmoved; // offset 0x744, size 0x1
    unsigned char m_bForceFullScreen; // offset 0x745, size 0x1
    unsigned char m_interpolatingToOrFromSocialModeCamera; // offset 0x746, size 0x1
    unsigned char m_interpolatingFromLotIntroCamera; // offset 0x747, size 0x1
    unsigned char m_interpolatingInLivemode; // offset 0x748, size 0x1
    unsigned char m_bIsCameraOnCollisionGeometry; // offset 0x749, size 0x1
    float m_playerPan; // offset 0x74C, size 0x4
    unsigned char m_lastPositionIllegal; // offset 0x750, size 0x1
    class EVec3 m_vStaticCamPos; // offset 0x754, size 0xC
    class EVec3 m_vStaticCamLookAt; // offset 0x760, size 0xC
};
enum SOUND {
    sHARD = 0,
    sMEDIUM = 1,
    sSOFT = 2,
    sSQUISHY = 3,
    sGRASS = 4,
    sTRASH = 5,
    sDIRT = 6,
    sSAND = 7,
    sPUDDLE = 8,
    sWOOD = 9,
    sTILE = 10,
    sCARPET = 11,
    sMETAL = 12,
    sCONCRETE = 13,
    sNumSounds = 14,
};
enum CATEGORY {
    kFloorTile_Tiles = 0,
    kFloorTile_Carpet = 1,
    kFloorTile_Landscape = 2,
    kFloorTile_Hardwood = 3,
    kFloorTile_Grass = 9,
    kFloorTile_Invisible = 10,
};
// total size: 0x18
struct FloorTile {
    // Members
    unsigned int cost; // offset 0x0, size 0x4
    class ELocString name; // offset 0x4, size 0x4
    enum SOUND sound; // offset 0x8, size 0x4
    unsigned int shaderID; // offset 0xC, size 0x4
    enum CATEGORY category; // offset 0x10, size 0x4
    unsigned char displayInCatalog; // offset 0x14, size 0x1
    signed short cultureFlags; // offset 0x16, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct FloorTile * * pData; // offset 0x0, size 0x4
};
// total size: 0x4
struct FloorSet : public VECTOR {};
enum CATEGORY {
    kWallTile_DoNotUse0 = 0,
    kWallTile_Outdoor = 1,
    kWallTile_IndoorPanel = 2,
    kWallTile_IndoorWallpaper = 3,
    kWallTile_IndoorTile = 4,
    kWallTile_IndoorDrywall = 5,
};
// total size: 0x14
struct WallTile {
    // Members
    unsigned int cost; // offset 0x0, size 0x4
    class ELocString name; // offset 0x4, size 0x4
    unsigned int shaderID; // offset 0x8, size 0x4
    enum CATEGORY category; // offset 0xC, size 0x4
    unsigned char displayInCatalog; // offset 0x10, size 0x1
    signed short cultureFlags; // offset 0x12, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct WallTile * * pData; // offset 0x0, size 0x4
};
// total size: 0x4
struct WallSet : public VECTOR {};
// total size: 0x14
struct FenceData {
    // Members
    unsigned int shaderID; // offset 0x0, size 0x4
    unsigned int cost; // offset 0x4, size 0x4
    class ELocString name; // offset 0x8, size 0x4
    enum WallStyle type; // offset 0xC, size 0x4
    signed short cultureFlags; // offset 0x10, size 0x2
};
// total size: 0x4
class VECTOR {
    // Members
    struct FenceData * * pData; // offset 0x0, size 0x4
};
// total size: 0x4
struct FenceSet : public VECTOR {};
enum CancelState {
    CAMDIR_CANCELSTATE_NONACTIVE = 0,
    CAMDIR_CANCELSTATE_ACTIVE = 1,
    CAMDIR_CANCELSTATE_TRIGGERED = 2,
};
enum CameraDirectorMode {
    CAMDIR_MODE_NONE = 0,
    CAMDIR_MODE_LOCK = 1,
    CAMDIR_MODE_HOLD = 2,
    CAMDIR_MODE_CUT = 3,
    CAMDIR_MODE_INTERP_GAME = 4,
    CAMDIR_MODE_INTERP = 5,
    CAMDIR_MODE_ANIMATE = 6,
    CAMDIR_MODE_INTERP_CANCEL = 7,
    CAMDIR_MODE_SOCIALMODEPLAYERCONTROLLED = 8,
};
enum CamDirInterpType {
    CAMDIR_INTERPTYPE_SPEED = 0,
    CAMDIR_INTERPTYPE_TIME = 1,
};
// total size: 0x2C0
class CameraDirector {
    // Members
    class EMat4 m_gameModeCameraMat; // offset 0x0, size 0x40
    class EMat4 m_interpolationStartMat; // offset 0x40, size 0x40
    class EMat4 m_interpolationDestinationMat; // offset 0x80, size 0x40
    class EMat4 m_defaultMat; // offset 0xC0, size 0x40
    class EMat4 m_worldToSimMatrix; // offset 0x100, size 0x40
    class EMat4 m_simToWorldMatrix; // offset 0x140, size 0x40
    class EAnimController m_ac; // offset 0x180, size 0xAC
    class EVec3 m_gameModeCameraLookAtPos; // offset 0x22C, size 0xC
    class EVec3 m_gameModeCameraUp; // offset 0x238, size 0xC
    class FrameEffectsManager * m_pFrameEffectsManager; // offset 0x244, size 0x4
    class EMat4 * m_dummyMat; // offset 0x248, size 0x4
    class EMat4 * m_dummyOffsetMat; // offset 0x24C, size 0x4
    class ESimsCam * m_simsCam; // offset 0x250, size 0x4
    const struct AnimRef * m_pAnimRef; // offset 0x254, size 0x4
    float m_holdTImer; // offset 0x258, size 0x4
    float m_simsFOV; // offset 0x25C, size 0x4
    float m_simsMinFOV; // offset 0x260, size 0x4
    float m_simsMaxFOV; // offset 0x264, size 0x4
    float m_simsMaxNearPlane; // offset 0x268, size 0x4
    float m_simsMinNearPlane; // offset 0x26C, size 0x4
    float m_simsTiltAng; // offset 0x270, size 0x4
    float m_targetPointZOffset; // offset 0x274, size 0x4
    float m_interpStartTime; // offset 0x278, size 0x4
    float m_interpTotalTime; // offset 0x27C, size 0x4
    float m_interpolationStartFOV; // offset 0x280, size 0x4
    float m_interpolationDestinationFOV; // offset 0x284, size 0x4
    float m_fAnimInterval; // offset 0x288, size 0x4
    float m_fAnimDuration; // offset 0x28C, size 0x4
    float m_animFrame; // offset 0x290, size 0x4
    unsigned char m_resetWhenDone; // offset 0x294, size 0x1
    int m_forceDisableHud; // offset 0x298, size 0x4
    int m_flags; // offset 0x29C, size 0x4
    unsigned int m_ctrlFilterId; // offset 0x2A0, size 0x4
    int m_ctrlPlayerId; // offset 0x2A4, size 0x4
    enum CancelState m_cancelState; // offset 0x2A8, size 0x4
    enum CameraDirectorMode m_cameraMode; // offset 0x2AC, size 0x4
    enum CameraDirectorMode m_pendingCameraMode; // offset 0x2B0, size 0x4
    unsigned char m_isCameraMirrored; // offset 0x2B4, size 0x1
    unsigned char m_bIsIntroPlaying; // offset 0x2B5, size 0x1
    unsigned char m_interpOn; // offset 0x2B6, size 0x1
    unsigned char m_relativeAnim; // offset 0x2B7, size 0x1
    unsigned char m_animStartRecal; // offset 0x2B8, size 0x1
    unsigned char m_letterbox; // offset 0x2B9, size 0x1
    unsigned char m_recalCancelCam; // offset 0x2BA, size 0x1
};
// total size: 0x18
struct ActState {
    // Members
    float Duration; // offset 0x0, size 0x4
    float Intensity; // offset 0x4, size 0x4
    int Actuator; // offset 0x8, size 0x4
    int Function; // offset 0xC, size 0x4
    int SubFunction; // offset 0x10, size 0x4
    int DataLength; // offset 0x14, size 0x4
};
// total size: 0x40
struct VibrateControl {
    // Members
    struct ActState Actuators[2]; // offset 0x0, size 0x30
    unsigned char VibrationOn; // offset 0x30, size 0x1
    unsigned char Port; // offset 0x31, size 0x1
    unsigned char Slot; // offset 0x32, size 0x1
    unsigned char NumActuators; // offset 0x33, size 0x1
    unsigned char Direct[6]; // offset 0x34, size 0x6
    unsigned char LastDirect[6]; // offset 0x3A, size 0x6
};
// total size: 0x84
class EVibrate {
    // Static members
    static unsigned char s_u8SysAlign[6]; // size: 0x6

    // Members
protected:
    unsigned char m_Initialized; // offset 0x0, size 0x1
    unsigned char m_Pause; // offset 0x1, size 0x1
    struct VibrateControl m_VControls[2]; // offset 0x4, size 0x80
};
union /* @class$32555game_animation_unity_cpp */ {
    void (* func)(); // offset 0x0, size 0x4
    char memFunc[12]; // offset 0x0, size 0xC
};
// total size: 0x10
class CBFunctorBase {
    // Members
protected:
    union { // inferred
        union /* @class$32555game_animation_unity_cpp */ {
            void (* func)(); // offset 0x0, size 0x4
            char memFunc[12]; // offset 0x0, size 0xC
        } __anon$32560; // offset 0x0, size 0xC
        void (* func)(); // offset 0x0, size 0x4
        char memFunc[12]; // offset 0x0, size 0xC
    };
    void * callee; // offset 0xC, size 0x4
};
// total size: 0x14
class CBFunctor1wRet : public CBFunctorBase {
    // Members
    char * (* thunk)(class CBFunctorBase &, char *); // offset 0x10, size 0x4
};
// total size: 0x8
class GetVariableCommandPair {
    // Members
public:
    const char * cmd; // offset 0x0, size 0x4
    class CBFunctor1wRet * ftor; // offset 0x4, size 0x4
};
// total size: 0x14
class GetVariableCommandTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class GetVariableCommandTableRecord * prev; // offset 0x4, size 0x4
    class GetVariableCommandTableRecord * next; // offset 0x8, size 0x4
    class GetVariableCommandPair entry; // offset 0xC, size 0x8
};
// total size: 0x10
class GetVariableCommandTable {
    // Static members
    static class GetVariableCommandTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class GetVariableCommandTableRecord * m_head; // offset 0x4, size 0x4
    class GetVariableCommandTableRecord * m_tail; // offset 0x8, size 0x4
    class GetVariableCommandTableRecord * m_freelist; // offset 0xC, size 0x4
};
// total size: 0x14
class CBFunctor2 : public CBFunctorBase {
    // Members
    void (* thunk)(class CBFunctorBase &, char *, char *); // offset 0x10, size 0x4
};
// total size: 0x8
class SetVariableCommandPair {
    // Members
public:
    const char * cmd; // offset 0x0, size 0x4
    class CBFunctor2 * ftor; // offset 0x4, size 0x4
};
// total size: 0x14
class SetVariableCommandTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class SetVariableCommandTableRecord * prev; // offset 0x4, size 0x4
    class SetVariableCommandTableRecord * next; // offset 0x8, size 0x4
    class SetVariableCommandPair entry; // offset 0xC, size 0x8
};
// total size: 0x10
class SetVariableCommandTable {
    // Static members
    static class SetVariableCommandTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class SetVariableCommandTableRecord * m_head; // offset 0x4, size 0x4
    class SetVariableCommandTableRecord * m_tail; // offset 0x8, size 0x4
    class SetVariableCommandTableRecord * m_freelist; // offset 0xC, size 0x4
};
// total size: 0x14
class CBFunctor1wRet : public CBFunctorBase {
    // Members
    unsigned short * (* thunk)(class CBFunctorBase &, char *); // offset 0x10, size 0x4
};
// total size: 0x8
class GetLocalizableCommandPair {
    // Members
public:
    const char * cmd; // offset 0x0, size 0x4
    class CBFunctor1wRet * ftor; // offset 0x4, size 0x4
};
// total size: 0x14
class GetLocalizableCommandTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class GetLocalizableCommandTableRecord * prev; // offset 0x4, size 0x4
    class GetLocalizableCommandTableRecord * next; // offset 0x8, size 0x4
    class GetLocalizableCommandPair entry; // offset 0xC, size 0x8
};
// total size: 0x10
class GetLocalizableCommandTable {
    // Static members
    static class GetLocalizableCommandTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class GetLocalizableCommandTableRecord * m_head; // offset 0x4, size 0x4
    class GetLocalizableCommandTableRecord * m_tail; // offset 0x8, size 0x4
    class GetLocalizableCommandTableRecord * m_freelist; // offset 0xC, size 0x4
};
enum UpdateTablePriority {
    eHighPriority = 75,
    eFlashPriority_Reserved = 50,
    eLowPriority = 25,
    eDefaultPriority = 75,
    eBeforeFlashPriority = 75,
    eAfterFlashPriority = 25,
};
// total size: 0x14
class CBFunctor0 : public CBFunctorBase {
    // Members
    void (* thunk)(class CBFunctorBase &); // offset 0x10, size 0x4
};
// total size: 0xC
class UpdateTableEntry {
    // Members
public:
    enum UpdateTablePriority priority; // offset 0x0, size 0x4
    class CBFunctor0 * ftor; // offset 0x4, size 0x4
    const char * name; // offset 0x8, size 0x4
};
// total size: 0x18
class UpdateTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class UpdateTableRecord * prev; // offset 0x4, size 0x4
    class UpdateTableRecord * next; // offset 0x8, size 0x4
    class UpdateTableEntry entry; // offset 0xC, size 0xC
};
// total size: 0x10
class UIUpdateTable {
    // Static members
    static class UIUpdateTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class UpdateTableRecord * m_head; // offset 0x4, size 0x4
    class UpdateTableRecord * m_tail; // offset 0x8, size 0x4
    class UpdateTableRecord * m_freelist; // offset 0xC, size 0x4
};
enum DrawTablePriority {
    eHighPriority = 75,
    eFlashPriority_Reserved = 50,
    eLowPriority = 25,
    eDefaultPriority = 75,
    eBeforeFlashPriority = 75,
    eAfterFlashPriority = 25,
};
// total size: 0x14
class CBFunctor1 : public CBFunctorBase {
    // Members
    void (* thunk)(class CBFunctorBase &, class ERC *); // offset 0x10, size 0x4
};
// total size: 0xC
class DrawTableEntry {
    // Members
public:
    enum DrawTablePriority priority; // offset 0x0, size 0x4
    class CBFunctor1 * ftor; // offset 0x4, size 0x4
    const char * name; // offset 0x8, size 0x4
};
// total size: 0x18
class DrawTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class DrawTableRecord * prev; // offset 0x4, size 0x4
    class DrawTableRecord * next; // offset 0x8, size 0x4
    class DrawTableEntry entry; // offset 0xC, size 0xC
};
// total size: 0x10
class UIDrawTable {
    // Static members
    static class UIDrawTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class DrawTableRecord * m_head; // offset 0x4, size 0x4
    class DrawTableRecord * m_tail; // offset 0x8, size 0x4
    class DrawTableRecord * m_freelist; // offset 0xC, size 0x4
};
// total size: 0xC
class UserDrawCBTableEntry {
    // Members
public:
    const char * flashName; // offset 0x0, size 0x4
    class CBFunctor2 * ftor; // offset 0x4, size 0x4
    const char * className; // offset 0x8, size 0x4
};
// total size: 0x18
class UserDrawCBTableRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class UserDrawCBTableRecord * prev; // offset 0x4, size 0x4
    class UserDrawCBTableRecord * next; // offset 0x8, size 0x4
    class UserDrawCBTableEntry entry; // offset 0xC, size 0xC
};
// total size: 0x10
class UIUserDrawCBTable {
    // Static members
    static class UIUserDrawCBTable * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class UserDrawCBTableRecord * m_head; // offset 0x4, size 0x4
    class UserDrawCBTableRecord * m_tail; // offset 0x8, size 0x4
    class UserDrawCBTableRecord * m_freelist; // offset 0xC, size 0x4
};
// total size: 0x20
class UI2DEntry {
    // Members
public:
    const char * flashName; // offset 0x0, size 0x4
    unsigned int shaderId; // offset 0x4, size 0x4
    int colorIndex; // offset 0x8, size 0x4
    const char * className; // offset 0xC, size 0x4
    class ERShader * shader; // offset 0x10, size 0x4
    unsigned char asyncLoadPending; // offset 0x14, size 0x1
    unsigned char asyncStateChangePending; // offset 0x15, size 0x1
    unsigned int extraAddRefedID; // offset 0x18, size 0x4
    unsigned char stateRequestSuccess; // offset 0x1C, size 0x1
};
// total size: 0x2C
class UI2DRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class UI2DRecord * prev; // offset 0x4, size 0x4
    class UI2DRecord * next; // offset 0x8, size 0x4
    class UI2DEntry entry; // offset 0xC, size 0x20
};
// total size: 0x14
class UI2D {
    // Static members
    static class UI2D * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class UI2DRecord * m_head; // offset 0x4, size 0x4
    class UI2DRecord * m_tail; // offset 0x8, size 0x4
    class UI2DRecord * m_freelist; // offset 0xC, size 0x4
    class ERShader * m_placeHolderShader; // offset 0x10, size 0x4
};
enum eUnlockDisplayStates {
    eUnlockDisplayStates_None = 0,
    eUnlockDisplayStates_Init = 1,
    eUnlockDisplayStates_WaitForObjectsReady = 2,
    eUnlockDisplayStates_TriggerAnimations = 3,
    eUnlockDisplayStates_WaitForAllDone = 4,
    eUnlockDisplayStates_Done = 5,
    eUnlockDisplayStates_LAST = 6,
};
enum eUnlockDisplayMode {
    eUnlockDisplayMode_None = 0,
    eUnlockDisplayMode_object = 1,
    eUnlockDisplayMode_promotion = 2,
    eUnlockDisplayMode_social = 3,
    eUnlockDisplayMode_LAST = 4,
};
// total size: 0x10
struct ObjectDefinition {
    // Members
    unsigned int characterID; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int animationID; // offset 0x8, size 0x4
    struct ObjectDefinition * next; // offset 0xC, size 0x4
};
// total size: 0x4E0
class CUnlockDisplay {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class E3DWindow m_win; // offset 0x8, size 0x358
    struct ELights m_lights; // offset 0x360, size 0xF8
    enum eUnlockDisplayStates m_state; // offset 0x458, size 0x4
    enum eUnlockDisplayMode m_mode; // offset 0x45C, size 0x4
    unsigned char m_bObjectReady; // offset 0x460, size 0x1
    unsigned char m_bDrawEnable; // offset 0x461, size 0x1
    unsigned char m_bHide; // offset 0x462, size 0x1
    unsigned char m_bDone; // offset 0x463, size 0x1
    float m_radius; // offset 0x464, size 0x4
    class CUnlockDisplayObject * m_objectList; // offset 0x468, size 0x4
    float m_displayBoxLeft; // offset 0x46C, size 0x4
    float m_displayBoxTop; // offset 0x470, size 0x4
    float m_displayBoxRight; // offset 0x474, size 0x4
    float m_displayBoxBottom; // offset 0x478, size 0x4
    float m_fDirectRed; // offset 0x47C, size 0x4
    float m_fDirectGreen; // offset 0x480, size 0x4
    float m_fDirectBlue; // offset 0x484, size 0x4
    float m_fAmbientRed; // offset 0x488, size 0x4
    float m_fAmbientGreen; // offset 0x48C, size 0x4
    float m_fAmbientBlue; // offset 0x490, size 0x4
    int m_nNumberOfObjects; // offset 0x494, size 0x4
    int m_nNumberOfSims; // offset 0x498, size 0x4
    float nCamZoomFactor; // offset 0x49C, size 0x4
    class EVec3 m_vCamPosVals; // offset 0x4A0, size 0xC
    unsigned char m_bDirectLightIsRelative[4]; // offset 0x4AC, size 0x4
    class EVec3 m_vDirLightTransform[4]; // offset 0x4B0, size 0x30
};
// total size: 0x1C
class UI3DEntry {
    // Members
public:
    const char * flashName; // offset 0x0, size 0x4
    unsigned int characterID; // offset 0x4, size 0x4
    unsigned int modelID; // offset 0x8, size 0x4
    unsigned int animationID; // offset 0xC, size 0x4
    const char * className; // offset 0x10, size 0x4
    class CUnlockDisplay * pDisplay; // offset 0x14, size 0x4
    int colorIndex; // offset 0x18, size 0x4
};
// total size: 0x28
class UI3DRecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class UI3DRecord * prev; // offset 0x4, size 0x4
    class UI3DRecord * next; // offset 0x8, size 0x4
    class UI3DEntry entry; // offset 0xC, size 0x1C
};
// total size: 0x24
class UI3D {
    // Static members
    static class UI3D * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class UI3DRecord * m_head; // offset 0x4, size 0x4
    class UI3DRecord * m_tail; // offset 0x8, size 0x4
    class UI3DRecord * m_freelist; // offset 0xC, size 0x4
    class CBFunctor0 m_updateFtor; // offset 0x10, size 0x14
};
// total size: 0xC
class UIAUDIOEntry {
    // Members
public:
    const char * flashName; // offset 0x0, size 0x4
    unsigned int sampleId; // offset 0x4, size 0x4
    const char * className; // offset 0x8, size 0x4
};
// total size: 0x18
class UIAUDIORecord {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class UIAUDIORecord * prev; // offset 0x4, size 0x4
    class UIAUDIORecord * next; // offset 0x8, size 0x4
    class UIAUDIOEntry entry; // offset 0xC, size 0xC
};
// total size: 0x80
class UIAUDIO {
    // Static members
    static class UIAUDIO * s_pInstance; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class UIAUDIORecord * m_head; // offset 0x4, size 0x4
    class UIAUDIORecord * m_tail; // offset 0x8, size 0x4
    class UIAUDIORecord * m_freelist; // offset 0xC, size 0x4
    int m_nextVoice; // offset 0x10, size 0x4
    struct EVoice * m_voice[5]; // offset 0x14, size 0x14
    class EResource * m_voiceLastPlayedSampleRes[5]; // offset 0x28, size 0x14
    unsigned int m_voiceLastPlayedSample[5]; // offset 0x3C, size 0x14
    float m_voiceLeftVolume[5]; // offset 0x50, size 0x14
    float m_voiceRightVolume[5]; // offset 0x64, size 0x14
    unsigned char m_voiceBind[5]; // offset 0x78, size 0x5
};
// total size: 0x4
struct _E_CtrlToPlayerAssoc {
    // Members
    unsigned int controllerIndex; // offset 0x0, size 0x4
};
// total size: 0xC
class EControllerManager {
    // Static members
    static class QTimer _ctrlLastActivetime[4]; // size: 0x20
    static class EController * _ctrlPads[4]; // size: 0x10

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct _E_CtrlToPlayerAssoc m_controllerToPlayer; // offset 0x4, size 0x4
    unsigned char m_bPlayerMapped; // offset 0x8, size 0x1
};
// total size: 0xA4
class UIObjectBase {
    // Static members
    static float SAFE_BOTTOM; // size: 0x4
    static float SAFE_RIGHT; // size: 0x4
    static float SAFE_TOP; // size: 0x4
    static float SAFE_LEFT; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char m_initialized; // offset 0x4, size 0x1
    class GetVariableCommandTable * m_pGVCTable; // offset 0x8, size 0x4
    class SetVariableCommandTable * m_pSVCTable; // offset 0xC, size 0x4
    class GetLocalizableCommandTable * m_pGLCTable; // offset 0x10, size 0x4
    class UIUpdateTable * m_pUpdateTable; // offset 0x14, size 0x4
    class UIDrawTable * m_pDrawTable; // offset 0x18, size 0x4
    class UIUserDrawCBTable * m_pUserDrawCBTable; // offset 0x1C, size 0x4
    class UI2D * m_pUi2d; // offset 0x20, size 0x4
    class UI3D * m_pUi3d; // offset 0x24, size 0x4
    class UIAUDIO * m_pAudio; // offset 0x28, size 0x4
    class CBFunctor1wRet m_getFtor; // offset 0x2C, size 0x14
    class CBFunctor2 m_setFtor; // offset 0x40, size 0x14
    class CBFunctor1wRet m_getlocFtor; // offset 0x54, size 0x14
    class CBFunctor0 m_updateFtor; // offset 0x68, size 0x14
    class CBFunctor1 m_drawFtor; // offset 0x7C, size 0x14
    class CBFunctor2 * m_userDrawCBFtor; // offset 0x90, size 0x4
    const char * m_className; // offset 0x94, size 0x4
    class EVec2 m_CurrentControllerCursorPosXY; // offset 0x98, size 0x8
    int m_CURRefID; // offset 0xA0, size 0x4
};
// total size: 0xA4
class UIAUDIOTarget : public UIObjectBase {};
// total size: 0xA4
class UIAnalog : public UIObjectBase {};
// total size: 0x14
class CBFunctor1 : public CBFunctorBase {
    // Members
    void (* thunk)(class CBFunctorBase &, int); // offset 0x10, size 0x4
};
// total size: 0xA0
class UIDialog {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    int number_of_selections; // offset 0x4, size 0x4
    int preselected; // offset 0x8, size 0x4
    int positioning; // offset 0xC, size 0x4
    int continueType; // offset 0x10, size 0x4
    int smallDialogFlag; // offset 0x14, size 0x4
    int timeoutEnabled; // offset 0x18, size 0x4
    int m_timeoutMS; // offset 0x1C, size 0x4
    int backoutEnabled; // offset 0x20, size 0x4
    int closeCallbackEnabled; // offset 0x24, size 0x4
    int useSelectButton; // offset 0x28, size 0x4
    unsigned char m_addToFront; // offset 0x2C, size 0x1
    class BString2 body; // offset 0x30, size 0x4
    class BString2 title; // offset 0x34, size 0x4
    class BString2 selection0; // offset 0x38, size 0x4
    class BString2 selection1; // offset 0x3C, size 0x4
    class BString2 selection2; // offset 0x40, size 0x4
    class ERShader * m_pIconShader; // offset 0x44, size 0x4
    unsigned int m_iconShaderId; // offset 0x48, size 0x4
    class ERShader * m_pIconBackgroundShader; // offset 0x4C, size 0x4
    unsigned int m_iconBackgroundShaderId; // offset 0x50, size 0x4
    class ERShader * m_pPictureShader; // offset 0x54, size 0x4
    unsigned int m_pictureShaderId; // offset 0x58, size 0x4
    signed short m_iconHeight; // offset 0x5C, size 0x2
    signed short m_iconWidth; // offset 0x5E, size 0x2
    class CBFunctor1 m_cbFtor; // offset 0x60, size 0x14
    class CBFunctor0 m_cbFtorZeroInputs; // offset 0x74, size 0x14
    class CBFunctor0 m_cbFtorDialogClosed; // offset 0x88, size 0x14
    const char * m_dialogName; // offset 0x9C, size 0x4
};
enum eG2DState {
    eG2DState_None = 0,
    eG2DState_ShowTweenStart = 1,
    eG2DState_ShowTweening = 2,
    eG2DState_Visible = 3,
    eG2DState_Removing = 4,
    eG2DState_HideTweening = 5,
    eG2DState_UnloadingUI = 6,
};
enum UIScreenID {
    UIScreenID_None = 0,
    UIScreenID_MainMenu = 1,
    UIScreenID_CAS_BEGIN = 2,
    UIScreenID_CAS_CGE = 2,
    UIScreenID_CAS_CBA = 3,
    UIScreenID_CAS_CBO = 4,
    UIScreenID_CAS_CMB = 5,
    UIScreenID_CAS_CHD = 6,
    UIScreenID_CAS_CMH = 7,
    UIScreenID_CAS_CTA = 8,
    UIScreenID_CAS_CFA = 9,
    UIScreenID_CAS_CHS = 10,
    UIScreenID_CAS_CTO = 11,
    UIScreenID_CAS_CHA = 12,
    UIScreenID_CAS_CBS = 13,
    UIScreenID_CAS_CSO = 14,
    UIScreenID_CAS_CSL = 15,
    UIScreenID_CAS_CFC = 16,
    UIScreenID_CAS_CSM = 17,
    UIScreenID_CAS_CST = 18,
    UIScreenID_CAS_CAP = 19,
    UIScreenID_CAS_CHT = 20,
    UIScreenID_CAS_CPR = 21,
    UIScreenID_CAS_CKB = 22,
    UIScreenID_K2Y = 23,
    UIScreenID_CAS_CAR = 24,
    UIScreenID_CAS_END = 25,
    UIScreenID_Logo = 26,
    UIScreenID_CAPET_BEGIN = 27,
    UIScreenID_CAPET_CMU = 27,
    UIScreenID_CAPET_END = 28,
    UIScreenID_CAF = 28,
    UIScreenID_CGR = 29,
    UIScreenID_CTW = 30,
    UIScreenID_CAP_PPR = 31,
    UIScreenID_CAP_CBR = 32,
    UIScreenID_CAP_CMA = 33,
    UIScreenID_CAP_CPI = 34,
    UIScreenID_MixIngredients = 35,
    UIScreenID_Recipes = 36,
    UIScreenID_PDACatalog = 37,
    UIScreenID_PDARelationships = 38,
    UIScreenID_PDACareerSkillsPersonality = 39,
    UIScreenID_O2ETarget = 40,
    UIScreenID_MMUTarget = 41,
    UIScreenID_WantsAndFearsXAM = 42,
    UIScreenID_PRGTarget = 43,
    UIScreenID_PetPurveyor = 44,
    UIScreenID_BuildBuyCatalog5 = 45,
    UIScreenID_BuildBuyHUD = 46,
    UIScreenID_BuildBuyToolMenu = 47,
    UIScreenID_BuildBuySections = 48,
    UIScreenID_Credits = 49,
    UIScreenID_OPT = 50,
    UIScreenID_PZ5 = 51,
    UIScreenID_PER = 52,
    UIScreenID_SVQ = 53,
    UIScreenID_G2D = 54,
    UIScreenID_M2M = 55,
    UIScreenID_TRC = 56,
    UIScreenID_H2D = 57,
    UIScreenID_HUD = 58,
    UIScreenID_Motives = 59,
    UIScreenID_WantsAndFears = 60,
    UIScreenID_ActionQueue = 61,
    UIScreenID_RelationshipSidePanel = 62,
    UIScreenID_FireCodeMeter = 63,
    UIScreenID_IntroThoughtBalloon = 64,
    UIScreenID_ModelessDialog = 65,
    UIScreenID_RewardMomentDialog = 66,
    UIScreenID_InteractionMenu = 67,
    UIScreenID_WhowantsToGoDialog = 68,
    UIScreenID_PetPointsConversionDialog = 69,
    UIScreenID_PetKennelDialog = 70,
    UIScreenID_InventoryScreen = 71,
    UIScreenID_Crafting = 72,
    UIScreenID_Collectibles = 73,
    UIScreenID_SimSwitcher = 74,
    UIScreenID_SimSwitcherHide = 75,
    UIScreenID_SimSwitcherCustom = 76,
    UIScreenID_FoodCreation = 77,
    UIScreenID_Dummy_TutorialSuspend = 78,
    UIScreenID_LotSelectMap = 79,
    UIScreenID_TIR = 80,
    UIScreenID_CEL = 81,
    UIScreenID_Goals = 82,
    UIScreenID_COI = 83,
    UIScreenID_LAST = 84,
    UIScreenID_endmarker = 84,
};
// total size: 0x18
class UIReflow {
    // Members
    char * m_pReflowBlock; // offset 0x0, size 0x4
    char * m_pReflow; // offset 0x4, size 0x4
    int m_reflowBlockSizeMultiplier; // offset 0x8, size 0x4
    unsigned int m_sizeReflowBlockAllocation; // offset 0xC, size 0x4
    unsigned int m_reflowSizeAccumulator; // offset 0x10, size 0x4
    unsigned char m_recordWidgetXML; // offset 0x14, size 0x1
};
// total size: 0x24
struct sReflowMemory {
    // Members
    int btnX[3]; // offset 0x0, size 0xC
    int btnText[3]; // offset 0xC, size 0xC
    int btnHelp[3]; // offset 0x18, size 0xC
};
// total size: 0x50
class CursorMovementTracker {
    // Members
    float m_MaxCursorSpeed; // offset 0x0, size 0x4
    float m_CurrentFuzzyEdgeInfluence; // offset 0x4, size 0x4
    float m_CurrentCursorSpeed; // offset 0x8, size 0x4
    int m_FuzzyEdgeWidth; // offset 0xC, size 0x4
    int m_ScreenLeftCursorCutoff; // offset 0x10, size 0x4
    int m_ScreenRightCursorCutoff; // offset 0x14, size 0x4
    int m_ScreenTopCursorCutoff; // offset 0x18, size 0x4
    int m_ScreenBottomCursorCutoff; // offset 0x1C, size 0x4
    int m_MiddleScreenWidth; // offset 0x20, size 0x4
    int m_MiddleScreenHeight; // offset 0x24, size 0x4
    int m_CurrentPixelX; // offset 0x28, size 0x4
    int m_CurrentPixelY; // offset 0x2C, size 0x4
    unsigned char m_ForcingEdge; // offset 0x30, size 0x1
    class EVec2 m_StickInput; // offset 0x34, size 0x8
    class EVec2 m_ControllerCursorPosition; // offset 0x3C, size 0x8
    class EVec2 m_LastControllerCursorPosition; // offset 0x44, size 0x8
    int m_ControllerCursorSameSpotCount; // offset 0x4C, size 0x4
};
// total size: 0x14
class WiiMoteToMenuInteractor {
    // Static members
    static float m_BottomCursorLimit; // size: 0x4
    static float m_TopCursorLimit; // size: 0x4

    // Members
    unsigned int m_nWiiMoteMenuSelect; // offset 0x0, size 0x4
    class EVec4 m_vBoundingBox; // offset 0x4, size 0x10
};
// total size: 0x224
class G2DTarget : public UIObjectBase {
    // Static members
    static int G2D_DIALOG_INTEROPTION_SPACE; // size: 0x4
    static int G2D_DIALOG_CURSOR_PADDING; // size: 0x4
    static unsigned char m_bInitComplete; // size: 0x1
    static float G2D_DIALOG_TIMEOUT_AUTOTEST; // size: 0x4

    // Members
    unsigned char m_G2DSpawned; // offset 0xA4, size 0x1
    unsigned char m_G2DLoaded; // offset 0xA5, size 0x1
    unsigned char m_G2DFlashLoaded; // offset 0xA6, size 0x1
    unsigned char m_tweenActive; // offset 0xA7, size 0x1
    int m_drawnCount; // offset 0xA8, size 0x4
    unsigned char m_bDrawnCountReached; // offset 0xAC, size 0x1
    class UIDialog * m_newDialogData; // offset 0xB0, size 0x4
    int m_mode; // offset 0xB4, size 0x4
    int m_numberOfSelections; // offset 0xB8, size 0x4
    int m_preselected; // offset 0xBC, size 0x4
    int m_continueType; // offset 0xC0, size 0x4
    int m_selection; // offset 0xC4, size 0x4
    unsigned char m_smallDialogBox; // offset 0xC8, size 0x1
    unsigned char m_timeoutEnabled; // offset 0xC9, size 0x1
    unsigned char m_timeoutOccured; // offset 0xCA, size 0x1
    unsigned char m_backoutEnabled; // offset 0xCB, size 0x1
    unsigned char m_closeCallbackEnabled; // offset 0xCC, size 0x1
    unsigned char m_bUseSelectButton; // offset 0xCD, size 0x1
    class ERShader * m_pPictureShader; // offset 0xD0, size 0x4
    class ERShader * m_pIconShader; // offset 0xD4, size 0x4
    class ERShader * m_pBackgroundShader; // offset 0xD8, size 0x4
    signed short m_pictureHeight; // offset 0xDC, size 0x2
    signed short m_pictureWidth; // offset 0xDE, size 0x2
    unsigned int m_boxHeight; // offset 0xE0, size 0x4
    unsigned int m_bodyHeight; // offset 0xE4, size 0x4
    float m_maxOptionWidth; // offset 0xE8, size 0x4
    class EVec2 m_vTitleBox; // offset 0xEC, size 0x8
    class EVec2 m_vBackdropPos; // offset 0xF4, size 0x8
    class EVec2 m_vBody1Box; // offset 0xFC, size 0x8
    class EVec2 m_vPictureSize; // offset 0x104, size 0x8
    class EVec2 m_vBody1Pos; // offset 0x10C, size 0x8
    class EVec2 m_vIconPos; // offset 0x114, size 0x8
    class BString2 m_body1; // offset 0x11C, size 0x4
    class BString2 m_title; // offset 0x120, size 0x4
    class BString2 m_selection0; // offset 0x124, size 0x4
    class BString2 m_selection1; // offset 0x128, size 0x4
    class BString2 m_selection2; // offset 0x12C, size 0x4
    class CBFunctor1 * m_cb; // offset 0x130, size 0x4
    class CBFunctor0 * m_cbZeroInputs; // offset 0x134, size 0x4
    class CBFunctor0 * m_cbDialogClosed; // offset 0x138, size 0x4
    unsigned int m_filterId; // offset 0x13C, size 0x4
    float m_originalTimerValue; // offset 0x140, size 0x4
    float m_nDialogTimer; // offset 0x144, size 0x4
    int m_savePlayerNumber; // offset 0x148, size 0x4
    enum eG2DState m_dialogState; // offset 0x14C, size 0x4
    class UIReflow reflow; // offset 0x150, size 0x18
    int m_memoryOfDisableAnalogNavigation; // offset 0x168, size 0x4
    struct sReflowMemory reflowMemory; // offset 0x16C, size 0x24
    float m_body1TextHeight; // offset 0x190, size 0x4
    class BString2 m_body2; // offset 0x194, size 0x4
    class EVec2 m_vBody2Box; // offset 0x198, size 0x8
    class EVec2 m_vBody2Pos; // offset 0x1A0, size 0x8
    class WiiMoteToMenuInteractor m_WiiMoteToMenuInteractor; // offset 0x1A8, size 0x14
    class CursorMovementTracker m_CursorTracker; // offset 0x1BC, size 0x50
    class EVec2 m_CursorPoint; // offset 0x20C, size 0x8
    int m_OptionsPosition_TopX; // offset 0x214, size 0x4
    int m_OptionsPosition_TopY; // offset 0x218, size 0x4
    int m_OptionsPosition_BottomX; // offset 0x21C, size 0x4
    int m_OptionsPosition_BottomY; // offset 0x220, size 0x4
};
enum UIScreenState {
    UIScreenState_None = 0,
    UIScreenState_Active = 1,
    UIScreenState_Suspended = 2,
    UIScreenState_Unloading = 3,
    UIScreenState_LAST = 4,
};
// total size: 0x14
struct UIManagedScreenRecord {
    // Members
    enum UIScreenID id; // offset 0x0, size 0x4
    enum UIScreenState active; // offset 0x4, size 0x4
    int groupWeAreSuspendedIn; // offset 0x8, size 0x4
    int weSuspendedThisGroup; // offset 0xC, size 0x4
    int screenFocusNumber; // offset 0x10, size 0x4
};
enum UISuspensionRule {
    UISuspensionRule_None = 0,
    UISuspensionRule_Own = 1,
    UISuspensionRule_Share = 2,
    UISuspensionRule_GPD = 3,
    UISuspensionRule_Tools = 4,
    UISuspensionRule_Recipes = 5,
    UISuspensionRule_KP = 6,
    UISuspensionRule_Tutorial = 7,
    UISuspensionRule_LAST = 8,
};
// total size: 0x14
struct UIScreenData {
    // Members
    enum UIScreenID screenId; // offset 0x0, size 0x4
    enum UISuspensionRule rule; // offset 0x4, size 0x4
    unsigned char handlesInput; // offset 0x8, size 0x1
    const char * * ppLayout; // offset 0xC, size 0x4
    char * pFlashInterfaceName; // offset 0x10, size 0x4
};
// total size: 0x2A8
class UIScreenManager : public UIObjectBase {
    // Static members
    static int m_groupNumber; // size: 0x4
    static struct UIScreenData UIScreenDataTable[]; // size: 0x0

    // Members
    struct UIManagedScreenRecord m_activeScreens[24]; // offset 0xA4, size 0x1E0
    enum UIScreenID m_loadQueue[8]; // offset 0x284, size 0x20
    int m_currentFocusNumber; // offset 0x2A4, size 0x4
};

