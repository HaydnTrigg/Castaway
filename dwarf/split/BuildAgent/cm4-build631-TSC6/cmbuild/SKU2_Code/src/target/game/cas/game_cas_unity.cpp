/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\game_cas_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800294E8 -> 0x800294E8
*/
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041A988
// total size: 0x1C
class StateMachineState {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int m_stateId; // offset 0x4, size 0x4
    int m_nextStateId; // offset 0x8, size 0x4
    class StateMachine * m_parentStateMachine; // offset 0xC, size 0x4
    int m_stage; // offset 0x10, size 0x4
    unsigned int m_bitFlags; // offset 0x14, size 0x4
protected:
    unsigned char m_bStateChangeDoesUpdate; // offset 0x18, size 0x1
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
    class StateMachine * * mpBegin; // offset 0x0, size 0x4
    class StateMachine * * mpEnd; // offset 0x4, size 0x4
    class StateMachine * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
class StateMachineManager {
    // Static members
    static class StateMachineManager * s_pStateMachineManager; // size: 0x4

    // Members
    class vector m_machineList; // offset 0x0, size 0x10
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
    class StateMachineState * * mpBegin; // offset 0x0, size 0x4
    class StateMachineState * * mpEnd; // offset 0x4, size 0x4
    class StateMachineState * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x18
class StateMachineStatus {
    // Members
    class StateMachineState * m_pCurState; // offset 0x0, size 0x4
    class StateMachineState * m_pNextState; // offset 0x4, size 0x4
    class StateMachineState * m_pLastState; // offset 0x8, size 0x4
    class StateMachineState * m_pCallingState; // offset 0xC, size 0x4
    float m_fSecondsBeforeNextState; // offset 0x10, size 0x4
    float m_fSecondsInCurState; // offset 0x14, size 0x4
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
    class StateMachineStatus * * mpBegin; // offset 0x0, size 0x4
    class StateMachineStatus * * mpEnd; // offset 0x4, size 0x4
    class StateMachineStatus * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
class stack {
    // Members
public:
    class vector c; // offset 0x0, size 0x10
};
// total size: 0x78
class StateMachine : public StateMachineState {
    // Members
    int m_machineId; // offset 0x1C, size 0x4
    class StateMachineManager * m_parentStateMachineManager; // offset 0x20, size 0x4
    unsigned char m_bPauseUpdate; // offset 0x24, size 0x1
    float m_fDeltaSeconds; // offset 0x28, size 0x4
    class vector m_stateList; // offset 0x2C, size 0x10
    class StateMachineStatus m_status; // offset 0x3C, size 0x18
    class stack m_statusStack; // offset 0x54, size 0x10
    class StateMachineState * m_pPendingCall; // offset 0x64, size 0x4
    unsigned char m_bPendingReturn; // offset 0x68, size 0x1
    int m_iPendingReturnVal; // offset 0x6C, size 0x4
    int m_iReturnVal; // offset 0x70, size 0x4
    unsigned char m_bEnabled; // offset 0x74, size 0x1
};
enum AmbientScoreState {
    SCORE_STOPPED = 0,
    SCORE_RUNNING = 1,
    SCORE_PAUSED = 2,
};
// total size: 0xC
struct ER_Point3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x34
class ERAmbientSound {
    // Members
public:
    struct ER_Point3d m_point1; // offset 0x0, size 0xC
    struct ER_Point3d m_point2; // offset 0xC, size 0xC
    unsigned char m_volume; // offset 0x18, size 0x1
    unsigned char m_looping; // offset 0x19, size 0x1
    unsigned char m_positionType; // offset 0x1A, size 0x1
    unsigned char m_probability; // offset 0x1B, size 0x1
    unsigned char m_radius; // offset 0x1C, size 0x1
    unsigned char m_startTime; // offset 0x1D, size 0x1
    unsigned char m_endTime; // offset 0x1E, size 0x1
    unsigned char m_angle; // offset 0x1F, size 0x1
    unsigned char m_angleVariation; // offset 0x20, size 0x1
    unsigned char m_velocity; // offset 0x21, size 0x1
    class vector m_samples; // offset 0x24, size 0x10
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
    class ERAmbientSound * mpBegin; // offset 0x0, size 0x4
    class ERAmbientSound * mpEnd; // offset 0x4, size 0x4
    class ERAmbientSound * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x3C
class ERAmbientScore : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    int m_version; // offset 0x14, size 0x4
    int m_sign; // offset 0x18, size 0x4
    int m_reserved; // offset 0x1C, size 0x4
    char * m_name; // offset 0x20, size 0x4
    int m_size; // offset 0x24, size 0x4
    unsigned char m_minSounds; // offset 0x28, size 0x1
    unsigned char m_maxSounds; // offset 0x29, size 0x1
    unsigned char m_volume; // offset 0x2A, size 0x1
    class vector m_sounds; // offset 0x2C, size 0x10
};
// total size: 0x30
class AmbientSoundPlayer {
    // Members
    class AmbientScorePlayer * m_ambientScorePlayer; // offset 0x0, size 0x4
    const class ERAmbientSound * m_ambientSound; // offset 0x4, size 0x4
    class cIGZSnd * m_gzSnd; // offset 0x8, size 0x4
    int m_curVol; // offset 0xC, size 0x4
    int m_curPan; // offset 0x10, size 0x4
    class EVec3 m_curPos; // offset 0x14, size 0xC
    class EVec2 m_moveDir; // offset 0x20, size 0x8
    unsigned int m_curPlayingSoundId; // offset 0x28, size 0x4
    int m_startRoom; // offset 0x2C, size 0x4
};
// total size: 0x1C
struct ListenerInfo {
    // Members
    class EVec3 m_pos; // offset 0x0, size 0xC
    class EVec3 m_dir; // offset 0xC, size 0xC
    int m_room; // offset 0x18, size 0x4
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
    struct ListenerInfo * mpBegin; // offset 0x0, size 0x4
    struct ListenerInfo * mpEnd; // offset 0x4, size 0x4
    struct ListenerInfo * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x38
class AmbientScorePlayer {
    // Static members
    static unsigned char s_duckAmbient; // size: 0x1

    // Members
    enum AmbientScoreState m_state; // offset 0x0, size 0x4
    unsigned char m_isPaused; // offset 0x4, size 0x1
    const class ERAmbientScore * m_curAmbientScore; // offset 0x8, size 0x4
    class AmbientSoundPlayer * m_ambientSoundPlayers; // offset 0xC, size 0x4
    int m_numPlayingSounds; // offset 0x10, size 0x4
    int m_volume; // offset 0x14, size 0x4
    int m_minSounds; // offset 0x18, size 0x4
    int m_maxSounds; // offset 0x1C, size 0x4
    class vector m_listenerInfoVect; // offset 0x20, size 0x10
    float m_curGameTime; // offset 0x30, size 0x4
    int m_lastUpdateTime; // offset 0x34, size 0x4
};
// total size: 0xAC
class CasScene : public IConsoleUnknown, public CasListener {
    // Static members
    static struct CameraAngle m_altCameraAngles[9]; // size: 0xD8
    static struct CameraAngle m_cameraAngles[9]; // size: 0xD8
    static float CAMERA_DPAD_ROTATION_DELTA; // size: 0x4
    static float NO_CAMERA_DELAY; // size: 0x4
    static float DEFAULT_CAMERA_DELAY; // size: 0x4
    static float NO_CAMERA_DURATION; // size: 0x4
    static float DEFAULT_CAMERA_DURATION; // size: 0x4
    static unsigned int kIID_CasScene; // size: 0x4

    // Members
protected:
    unsigned int mRefCount; // offset 0xC, size 0x4
    class ERLevel * m_pRoomClothing; // offset 0x10, size 0x4
    class EVec3 m_cameraPos; // offset 0x14, size 0xC
    class EVec3 m_cameraTarget; // offset 0x20, size 0xC
    float m_cameraBlend; // offset 0x2C, size 0x4
    float m_cameraMoveDelay; // offset 0x30, size 0x4
    float m_altCameraBlend; // offset 0x34, size 0x4
    unsigned int m_currentAngle; // offset 0x38, size 0x4
    unsigned int m_oldAngle; // offset 0x3C, size 0x4
    float m_fov; // offset 0x40, size 0x4
    class AmbientScorePlayer * m_pAmbientPlayer; // offset 0x44, size 0x4
    class GameTime m_nCurrentGameTime; // offset 0x48, size 0x4
    int m_nSecondsToAdvancePerFrame; // offset 0x4C, size 0x4
    unsigned char m_bAdvanceWeatherTime; // offset 0x50, size 0x1
    unsigned char m_bFirstUpdate; // offset 0x51, size 0x1
private:
    class EVec3 m_cameraPosOld; // offset 0x54, size 0xC
    class EVec3 m_cameraPosNew; // offset 0x60, size 0xC
    class EVec3 m_altCameraPosNew; // offset 0x6C, size 0xC
    class EVec3 m_altCameraTargetNew; // offset 0x78, size 0xC
    class EVec3 m_cameraTargetOld; // offset 0x84, size 0xC
    class EVec3 m_cameraTargetNew; // offset 0x90, size 0xC
    float m_blendDuration; // offset 0x9C, size 0x4
    float m_clipNear; // offset 0xA0, size 0x4
    float m_clipFar; // offset 0xA4, size 0x4
    class E3DWindow * m_pWin; // offset 0xA8, size 0x4
};
char * s_NPCEditTypeNames[3]; // size: 0xC, address: 0x80424994
// total size: 0x8
struct ButtonInfo {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
struct ButtonInfo s_buttonInfo[7]; // size: 0x38, address: 0x8041A9C8
const char * CAS_ICON_EDITOR_CONFIG_FILENAME; // size: 0x4, address: 0x805D8460
// total size: 0x2A4
class CasNpcEditor : public CasListener {
    // Static members
    static const char * CAS_ICON_EDITOR_CONFIG_FILENAME; // size: 0x4
    static struct ButtonInfo s_buttonInfo[7]; // size: 0x38
    static unsigned int FAILURE_SOUND; // size: 0x4
    static unsigned int SUCCESS_SOUND; // size: 0x4
    static float LOAD_PREVIEW_TIME; // size: 0x4
    static char * s_NPCEditTypeNames[3]; // size: 0xC

    // Members
protected:
    enum eNPCEditTypeFlag m_editType; // offset 0x8, size 0x4
    unsigned int m_guid; // offset 0xC, size 0x4
    unsigned int m_npcIndex; // offset 0x10, size 0x4
    float m_secondsUntilLoad; // offset 0x14, size 0x4
    char m_firstName[32]; // offset 0x18, size 0x20
    char m_lastName[32]; // offset 0x38, size 0x20
    class EString m_strRootDir; // offset 0x58, size 0x4
    class EString m_strThumbnailsDir; // offset 0x5C, size 0x4
    class EString m_strTexturesDir; // offset 0x60, size 0x4
    struct _IconImageInfo m_iconImageInfo[13]; // offset 0x64, size 0x208
    class SimBodyPart * m_pBodyPart; // offset 0x26C, size 0x4
    unsigned char m_bMale; // offset 0x270, size 0x1
    enum eBodyPart m_nCurrentBodyPart; // offset 0x274, size 0x4
    unsigned char m_nCurrentBodyPartIndex; // offset 0x278, size 0x1
    unsigned char m_nCurrentActualModelIndex; // offset 0x279, size 0x1
    unsigned char m_nCurrentActualStyleIndex; // offset 0x27A, size 0x1
    unsigned char m_nCurrentActualModelCodeIndex; // offset 0x27B, size 0x1
    unsigned char m_bTattooPass; // offset 0x27C, size 0x1
    enum eTattooLocation m_nCurrentTattooLocation; // offset 0x280, size 0x4
    unsigned char m_nCurrentTattooIndex; // offset 0x284, size 0x1
    enum eBodyPart m_initialBodyPart; // offset 0x288, size 0x4
    enum eSpecies m_initialSpecies; // offset 0x28C, size 0x4
    unsigned char m_nInitialClothingSetIndex; // offset 0x290, size 0x1
    unsigned char m_nInitialStyleIndex; // offset 0x291, size 0x1
    unsigned char m_nInitialTextureIndex; // offset 0x292, size 0x1
    unsigned char m_nInitialDegradationState; // offset 0x293, size 0x1
    int m_nIconHeight; // offset 0x294, size 0x4
    int m_nIconWidth; // offset 0x298, size 0x4
    int m_nIconDepth; // offset 0x29C, size 0x4
    unsigned char m_bInitialLoadDone; // offset 0x2A0, size 0x1
    unsigned char m_bUseShadowMap; // offset 0x2A1, size 0x1
};
// total size: 0x28
struct _IconImageInfo {
    // Members
    class EVec3 cameraPos; // offset 0x0, size 0xC
    class EVec3 cameraTarget; // offset 0xC, size 0xC
    float fCameraFOV; // offset 0x18, size 0x4
    unsigned int nBackgroundImageID; // offset 0x1C, size 0x4
    unsigned int nAnimationID; // offset 0x20, size 0x4
    unsigned char bExclude; // offset 0x24, size 0x1
    unsigned char bTattooPass; // offset 0x25, size 0x1
};
enum eNPCEditTypeFlag {
    kEDIT_TYPES_START = 0,
    kEDIT_NONE = 0,
    kEDIT_NPC = 1,
    kEDIT_ICONS = 2,
    kEDIT_TYPES_END = 3,
};
// total size: 0xC
class UserDataSaveLoad {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int m_guid; // offset 0x4, size 0x4
    class CasSimDescription * m_pSimDesc; // offset 0x8, size 0x4
};
// total size: 0x18
class CasEventInitCharacter : public CasEvent {
    // Members
    class CasSimDescription * m_pDescription; // offset 0x8, size 0x4
    unsigned char m_bRenderCharacter; // offset 0xC, size 0x1
    int m_CharId; // offset 0x10, size 0x4
    unsigned char m_bBlockOnLoad; // offset 0x14, size 0x1
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
    class Neighbor * * mpBegin; // offset 0x0, size 0x4
    class Neighbor * * mpEnd; // offset 0x4, size 0x4
    class Neighbor * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
class NeighborList : public vector {};
// total size: 0x48
class StackString2 : public StringBuffer2 {
    // Members
    unsigned short fChars[32]; // offset 0x8, size 0x40
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
    class FamilyMember * mpBegin; // offset 0x0, size 0x4
    class FamilyMember * mpEnd; // offset 0x4, size 0x4
    class FamilyMember * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x5C
class FamilyImpl : public Family {
    // Members
public:
    class BString2 fName; // offset 0x4, size 0x4
    int fNumber; // offset 0x8, size 0x4
    int fHouseNumber; // offset 0xC, size 0x4
    int fCreationOrder; // offset 0x10, size 0x4
    int m_Funds; // offset 0x14, size 0x4
    int m_PetPoints; // offset 0x18, size 0x4
    int fHouseValue; // offset 0x1C, size 0x4
    int fFriendCount; // offset 0x20, size 0x4
    unsigned char fFriendCountDirty; // offset 0x24, size 0x1
    class vector fMembers; // offset 0x28, size 0x10
private:
    int fFlags; // offset 0x38, size 0x4
    class InventoryItems mInventory; // offset 0x3C, size 0x20
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
    class FamilyImpl * * mpBegin; // offset 0x0, size 0x4
    class FamilyImpl * * mpEnd; // offset 0x4, size 0x4
    class FamilyImpl * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
enum UnlockType {
    kUnlockTypeBook = 0,
    kUnlockTypePage = 1,
    kUnlockTypeGoal = 2,
    kUnlockTypeTutorial = 4,
};
// total size: 0x4
class IGoalUnlock {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x88
class GoalUnlock : public IGoalUnlock {
    // Static members
    static int kNumGoalAndUnlockVariables; // size: 0x4

    // Members
    signed char m_goalAndUnlockVars[128]; // offset 0x4, size 0x80
    signed short Tuning_210_MoodLevel; // offset 0x84, size 0x2
    signed short Tuning_122_FriendLevel; // offset 0x86, size 0x2
};
// total size: 0x8
class CachedSimData {
    // Members
    unsigned int m_GUID; // offset 0x0, size 0x4
    class SimModelTSC6 * m_pCachedModel; // offset 0x4, size 0x4
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
    class CachedSimData * mpBegin; // offset 0x0, size 0x4
    class CachedSimData * mpEnd; // offset 0x4, size 0x4
    class CachedSimData * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x2C
class SimCache {
    // Members
    class vector m_SimsCache; // offset 0x0, size 0x10
    class EMutex m_simCacheMutex; // offset 0x10, size 0x1C
};
enum ResourceStage {
    kStageAddRef = 0,
    kStageDelRef = 1,
};
// total size: 0x2068
class LotHelper {
    // Static members
    static float m_PulseSecondsMin; // size: 0x4

    // Members
    signed short m_pNumResFileObjects; // offset 0x0, size 0x2
    unsigned int m_pResFileDatasetIds[1024]; // offset 0x4, size 0x1000
    unsigned int m_pResFileDatasetLotFlags[1024]; // offset 0x1004, size 0x1000
    signed short m_numQueuedResFileAdds; // offset 0x2004, size 0x2
    int m_CurrentLot; // offset 0x2008, size 0x4
    unsigned int m_AdjacentLotsMask; // offset 0x200C, size 0x4
    unsigned int m_CurrentResourceID; // offset 0x2010, size 0x4
    char * m_CurrentResourceName; // offset 0x2014, size 0x4
    int m_CurrentResourceIndex; // offset 0x2018, size 0x4
    int m_CurrentLotMaskIndex; // offset 0x201C, size 0x4
    enum ResourceStage m_CurrentStage; // offset 0x2020, size 0x4
    char m_HousePreDataset[64]; // offset 0x2024, size 0x40
    float m_PulseClock; // offset 0x2064, size 0x4
};
// total size: 0x108
class StackString2 : public StringBuffer2 {
    // Members
    unsigned short fChars[128]; // offset 0x8, size 0x100
};
// total size: 0x114
class FamilyInfo {
    // Members
public:
    class StackString2 mName; // offset 0x0, size 0x108
    int mNetWorth; // offset 0x108, size 0x4
    int mFriendCount; // offset 0x10C, size 0x4
    int mLotNumber; // offset 0x110, size 0x4
};
// total size: 0x124
class HouseInfo {
    // Members
public:
    unsigned char mMoveInAllowed; // offset 0x0, size 0x1
    unsigned char mIsTutorial; // offset 0x1, size 0x1
    unsigned char mHasHouse; // offset 0x2, size 0x1
    int mPrice; // offset 0x4, size 0x4
    int mOccupants; // offset 0x8, size 0x4
    class FamilyInfo mOccupantInfo; // offset 0xC, size 0x114
    int mHouseNumber; // offset 0x120, size 0x4
};
// total size: 0x21F4
class Neighborhood {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class NeighborList fNeighbors; // offset 0x4, size 0x10
    signed short fVars[36]; // offset 0x14, size 0x48
private:
    class StackString2 fNeighborhoodName; // offset 0x5C, size 0x48
    class vector fNeighborHouses; // offset 0xA4, size 0x10
    class vector fFamilies; // offset 0xB4, size 0x10
    int fHouseNum; // offset 0xC4, size 0x4
    class GoalUnlock m_goalUnlock; // offset 0xC8, size 0x88
    class BitFlags m_nEventFlags1; // offset 0x150, size 0x4
    class BitFlags m_nEventFlags2; // offset 0x154, size 0x4
    signed short m_nOldTransitionType; // offset 0x158, size 0x2
    class SimCache m_SimCache; // offset 0x15C, size 0x2C
    class LotHelper m_LotHelper; // offset 0x188, size 0x2068
    class GameTime m_lastTransitionSimulatorTime; // offset 0x21F0, size 0x4
};
// total size: 0x24
class TGAWriter {
    // Members
    class EString m_fileName; // offset 0x0, size 0x4
    struct TGA_INFO m_info; // offset 0x4, size 0x14
    void * m_pPaletteData; // offset 0x18, size 0x4
    void * m_pPixelBuffer; // offset 0x1C, size 0x4
    class EFile * m_pTGAFile; // offset 0x20, size 0x4
};
// total size: 0x18
struct TDF_INFO {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    class EString filter; // offset 0x8, size 0x4
    class EString format; // offset 0xC, size 0x4
    class EString clamp; // offset 0x10, size 0x4
    class EString sourceFile; // offset 0x14, size 0x4
};
// total size: 0x4
class ReconObject {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0xC
class SimpleReconObject : public ReconObject {
    // Members
    class UserDataSaveLoad * fObj; // offset 0x4, size 0x4
    int fType; // offset 0x8, size 0x4
};
// total size: 0x1
class ReconBuilder {};
// total size: 0x14
struct TGA_INFO {
    // Members
    unsigned char identsize; // offset 0x0, size 0x1
    unsigned char colourmaptype; // offset 0x1, size 0x1
    unsigned char imagetype; // offset 0x2, size 0x1
    unsigned short colourmapstart; // offset 0x4, size 0x2
    unsigned short colourmaplength; // offset 0x6, size 0x2
    unsigned char colourmapbits; // offset 0x8, size 0x1
    unsigned short xstart; // offset 0xA, size 0x2
    unsigned short ystart; // offset 0xC, size 0x2
    unsigned short width; // offset 0xE, size 0x2
    unsigned short height; // offset 0x10, size 0x2
    unsigned char bits; // offset 0x12, size 0x1
    unsigned char descriptor; // offset 0x13, size 0x1
};
enum IOMode {
    IOM_MODE_NULL = 0,
    IOM_READ = 1,
    IOM_WRITE = 2,
    IOM_READ_WRITE = 3,
    IOM_APPEND = 4,
    IOM_WRITE_APPEND = 6,
    IOM_READ_WRITE_APPEND = 7,
    _IOM_COUNT = 8,
    IOM_USER_MASK = 255,
    IOM_DESTROY = 65536,
    IOM_UNSPECIFIED = -2147483648,
};
enum AccessMode {
    AM_RANDOM_ACCESS = 0,
    AM_SEQUENTIAL_SCAN = 1,
    AM_CHECK_ACCESS = 2,
    _AM_COUNT = 3,
    AM_UNSPECIFIED = -2147483648,
};
enum DeviceType {
    DT_HD0 = 0,
    DT_HD1 = 1,
    DT_HOST = 2,
    DT_DVD = 3,
    DT_MC0 = 4,
    DT_MC1 = 5,
    _DT_COUNT = 6,
    DT_UNSPECIFIED = -2147483648,
};
enum ErrorCode {
    ER_NONE = 0,
    ER_EOF = 1,
    ER_INVALID_HANDLE = 2,
    ER_INVALID_ARGUMENT = 3,
    ER_IO_FAULT = 4,
    ER_OUTOFMEMORY = 5,
    ER_ACCESS_DENIED = 6,
    ER_FILE_EXISTS = 7,
    ER_FILE_NOT_FOUND = 8,
    ER_DEVICE_NOT_FOUND = 9,
    ER_WRITE_PROTECT = 10,
    ER_TOO_MANY_OPEN_FILES = 11,
    ER_DEVICE_FULL = 12,
    ER_UNKNOWN = 13,
    _ER_COUNT = 14,
};
enum SeekType {
    ST_SET = 0,
    ST_CURRENT = 1,
    ST_END = 2,
    _ST_COUNT = 3,
    ST_UNSPECIFIED = -2147483648,
};
// total size: 0x2C
class EFile {
    // Static members
    static unsigned char m_bSimulateError; // size: 0x1

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char m_streamingStructure; // offset 0x4, size 0x1
    class EStorable * * m_pObjectsToLoad; // offset 0x8, size 0x4
    enum IOMode m_eIOMode; // offset 0xC, size 0x4
    enum AccessMode m_eAccess; // offset 0x10, size 0x4
    enum DeviceType m_eDevice; // offset 0x14, size 0x4
    unsigned long m_length; // offset 0x18, size 0x4
private:
    char m_Drive[4]; // offset 0x1C, size 0x4
    char * m_Path; // offset 0x20, size 0x4
    char * m_Name; // offset 0x24, size 0x4
    char m_Ext[4]; // offset 0x28, size 0x4
};
// total size: 0x340
class EThread {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    class EThread * m_pLastThread; // offset 0x4, size 0x4
    class EThread * m_pNextThread; // offset 0x8, size 0x4
protected:
    struct OSThread m_osThread; // offset 0x10, size 0x318
    int m_threadId; // offset 0x328, size 0x4
    void * m_pStack; // offset 0x32C, size 0x4
    int m_stackSize; // offset 0x330, size 0x4
    unsigned char m_stackAutoAllocated; // offset 0x334, size 0x1
    unsigned char m_stackFilledWithDebugVal; // offset 0x335, size 0x1
    const char * m_szName; // offset 0x338, size 0x4
};
enum EAppState {
    E_APPSTATE_NORMAL = 0,
    E_APPSTATE_NEXTMOVIEPLAY = 1,
    E_APPSTATE_MOVIEPLAY = 2,
};
enum OVERALL_GAME_STATE {
    GAME_STATE_CURRENT = -1,
    GAME_STATE_SINGLE_PLAYER = 0,
    GAME_STATE_SERVER = 1,
    GAME_STATE_CLIENT = 2,
    TOTAL_GAME_STATES = 3,
};
// total size: 0x470
class EApp : public EThread {
    // Members
public:
    unsigned char m_done; // offset 0x33C, size 0x1
    unsigned char m_activeApp; // offset 0x33D, size 0x1
    int m_nArgc; // offset 0x340, size 0x4
    const char * * m_ppszArgv; // offset 0x344, size 0x4
    char szArgumentString[256]; // offset 0x348, size 0x100
    enum EAppState m_appState; // offset 0x448, size 0x4
    enum EAppState m_appNextState; // offset 0x44C, size 0x4
    class ERMovie * m_pRMovie; // offset 0x450, size 0x4
    unsigned int m_uNextMovieID; // offset 0x454, size 0x4
    int m_MovieX; // offset 0x458, size 0x4
    int m_MovieY; // offset 0x45C, size 0x4
private:
    enum OVERALL_GAME_STATE gameState; // offset 0x460, size 0x4
    enum OVERALL_GAME_STATE menuOwner; // offset 0x464, size 0x4
    class EString * m_pRootPath; // offset 0x468, size 0x4
};
// total size: 0x488
class ESimsApp : public EApp {
    // Static members
    static int s_startLot; // size: 0x4
    static char m_nameOfNgh[]; // size: 0x0

    // Members
public:
    class EGameStateMan * m_pGameStateMan; // offset 0x46C, size 0x4
    class ERC * m_prc; // offset 0x470, size 0x4
    class EWindow * m_pFullWindow; // offset 0x474, size 0x4
    unsigned char m_bOkayToMapController1; // offset 0x478, size 0x1
protected:
    unsigned char m_takeBigScreenshot; // offset 0x479, size 0x1
    int m_screenShotTilesX; // offset 0x47C, size 0x4
    int m_screenShotTilesY; // offset 0x480, size 0x4
};
// total size: 0x1C
class SkinCompositor {
    // Static members
    static unsigned char s_fullAlphaValue; // size: 0x1

    // Members
    class ETexture * m_pBaseTexture; // offset 0x0, size 0x4
    unsigned int * m_pBaseTexturePixels; // offset 0x4, size 0x4
    unsigned char * m_pReflectionMask; // offset 0x8, size 0x4
    class ERTexture * m_pFinalTexture; // offset 0xC, size 0x4
    unsigned int m_nSkinTextureID; // offset 0x10, size 0x4
    unsigned short m_destSize; // offset 0x14, size 0x2
    unsigned char m_quadrant; // offset 0x16, size 0x1
    unsigned char m_isDestPalettized; // offset 0x17, size 0x1
    unsigned char m_bInGame; // offset 0x18, size 0x1
};
// total size: 0x1C
class ConfigReader {
    // Static members
    static int MAX_LINE_LEN; // size: 0x4
    static int INVALID_INDEX; // size: 0x4

    // Members
    class vector m_lSectionList; // offset 0x0, size 0x10
    char * m_szRawData; // offset 0x10, size 0x4
    unsigned long m_nRawDataLen; // offset 0x14, size 0x4
    char * m_szNextDataLocation; // offset 0x18, size 0x4
};
// total size: 0x8
struct Item {
    // Members
    char * m_szItemName; // offset 0x0, size 0x4
    char * m_szItemValue; // offset 0x4, size 0x4
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
    struct Item * mpBegin; // offset 0x0, size 0x4
    struct Item * mpEnd; // offset 0x4, size 0x4
    struct Item * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x14
struct Section {
    // Members
    char * szSectionName; // offset 0x0, size 0x4
    class vector m_lItemList; // offset 0x4, size 0x10
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
    struct Section * * mpBegin; // offset 0x0, size 0x4
    struct Section * * mpEnd; // offset 0x4, size 0x4
    struct Section * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
static class EVec3 kSimPosDefault; // size: 0xC, address: 0x8048C5A8
static class EVec3 kPosSimCAR[6]; // size: 0x48, address: 0x8048C5B8
static float kRotationSimCAR[6]; // size: 0x18, address: 0x8041AA00
static class EVec3 kListenerDir; // size: 0xC, address: 0x8048C600
struct CameraAngle m_cameraAngles[9]; // size: 0xD8, address: 0x8041AA18
struct CameraAngle m_altCameraAngles[9]; // size: 0xD8, address: 0x8041AAF0
// total size: 0x98
struct CreatedLightingEntry {
    // Members
    struct LightingEntry lightingEntry; // offset 0x0, size 0x50
    class EVec3 outsideAmbientColor; // offset 0x50, size 0xC
    class EVec3 sunColor; // offset 0x5C, size 0xC
    class EVec3 insideAmbientColor; // offset 0x68, size 0xC
    class EVec3 skyLightSunColor; // offset 0x74, size 0xC
    class EVec3 skyLightAmbientColor; // offset 0x80, size 0xC
    class EVec3 moonColor; // offset 0x8C, size 0xC
};
// total size: 0x48
class EEngine : public EGlobalManagerClient {
    // Members
protected:
    unsigned char m_initialized; // offset 0x4, size 0x1
    unsigned char m_frameRatePredictiveSmoothing; // offset 0x5, size 0x1
    unsigned char m_resetAllowed; // offset 0x6, size 0x1
    class EClock m_frameClock; // offset 0x8, size 0x10
    class EClock m_cpuClock; // offset 0x18, size 0x10
    class ERLevel * m_pCurrentLevel; // offset 0x28, size 0x4
public:
    class EEvent m_frameEvent; // offset 0x2C, size 0x18
};
// total size: 0x18
struct CameraAngle {
    // Members
    float position[3]; // offset 0x0, size 0xC
    float target[3]; // offset 0xC, size 0xC
};
// total size: 0x1
class CasUtils {};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct BodyPartTypeInfoTableTSC6 * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x0
struct ERQTable {};
// total size: 0xD48
class EQuickdataManager : public EResourceManager {
    // Members
    int m_iLanguage; // offset 0xD44, size 0x4
};
// total size: 0x14
struct ERQTable {
    // Members
    const char * pName; // offset 0x0, size 0x4
    const struct SimPartsTSC6 * pData; // offset 0x4, size 0x4
    const char * const * ppRowNames; // offset 0x8, size 0x4
    unsigned int uNumRows; // offset 0xC, size 0x4
    unsigned int uRowSize; // offset 0x10, size 0x4
};
// total size: 0x10
struct CostumesTSC6 {
    // Members
    char * name; // offset 0x0, size 0x4
    class VECTOR maleClothingSets; // offset 0x4, size 0x4
    class VECTOR femaleClothingSets; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
};
enum eArchetype {
    kCHARACTER_ARCHETYPE_BEGIN = 0,
    kCHARACTER_ARCHETYPE_RANGER = 0,
    kCHARACTER_ARCHETYPE_TEACHER = 1,
    kCHARACTER_ARCHETYPE_MECHANIC = 2,
    kCHARACTER_ARCHETYPE_EXECUTIVE = 3,
    kCHARACTER_ARCHETYPE_CHEF = 4,
    kCHARACTER_ARCHETYPE_MUSICIAN = 5,
    kCHARACTER_ARCHETYPE_DOCTOR = 6,
    kCHARACTER_ARCHETYPE_END = 7,
};
char s_SimPartsMapNames[4][4]; // size: 0x10, address: 0x8041ABC8
unsigned char s_nudeTattooIndex[4][2]; // size: 0x8, address: 0x805E00E0
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x8
struct ClothingSetIndexInfo {
    // Members
    unsigned int m_nIconTextureID; // offset 0x0, size 0x4
    signed short m_nClothingItemInstanceID; // offset 0x4, size 0x2
    unsigned char m_nClothingSetIndex; // offset 0x6, size 0x1
    unsigned char m_nFlags; // offset 0x7, size 0x1
};
// total size: 0x1C
class ClothingItem : public InventoryItem {
    // Members
    int m_nCurrentHitPoints; // offset 0x8, size 0x4
    signed short m_nNeighborID; // offset 0xC, size 0x2
    signed short m_nID; // offset 0xE, size 0x2
    enum eBodyPart m_bodyPart; // offset 0x10, size 0x4
    unsigned char m_nClothingSetIndex; // offset 0x14, size 0x1
    unsigned char m_nStyleIndex; // offset 0x15, size 0x1
    unsigned char m_nTextureIndex; // offset 0x16, size 0x1
    unsigned char m_nDegradationState; // offset 0x17, size 0x1
    unsigned char m_bMale; // offset 0x18, size 0x1
    unsigned char m_bIsDamaged; // offset 0x19, size 0x1
};
static unsigned char snInitialTextureIndex; // size: 0x1, address: 0x805DB6A0
unsigned int s_nCasFemaleSimAnimations[39]; // size: 0x9C, address: 0x8041ABD8
unsigned int s_nCasMaleSimAnimations[39]; // size: 0x9C, address: 0x8041AC74
volatile class CasSimRenderer * s_changingSim; // size: 0x4, address: 0x805DB6A4
// total size: 0x10
class stack {
    // Members
public:
    class vector c; // offset 0x0, size 0x10
};
// total size: 0x208
class StackString2 : public StringBuffer2 {
    // Members
    unsigned short fChars[256]; // offset 0x8, size 0x200
};
enum eCASMenuButtons {
    CAS_BUTTON_BACK = -1,
    CAS_BUTTON_GENDER_BEGIN = 0,
    CAS_BUTTON_GENDER_CHOOSER = 0,
    CAS_BUTTON_GENDER_RANDOM = 1,
    CAS_BUTTON_GENDER_CUSTOMIZE = 2,
    CAS_BUTTON_GENDER_END = 3,
    CAS_BUTTON_MAIN_BEGIN = 0,
    CAS_BUTTON_MAIN_BODY = 0,
    CAS_BUTTON_MAIN_FASHION = 1,
    CAS_BUTTON_MAIN_PERSONALITY = 2,
    CAS_BUTTON_MAIN_NAME = 3,
    CAS_BUTTON_MAIN_DONE = 4,
    CAS_BUTTON_MAIN_END = 5,
    CAS_BUTTON_BODY_BEGIN = 0,
    CAS_BUTTON_BODY_SKINTONE = 0,
    CAS_BUTTON_BODY_BODYTYPE = 1,
    CAS_BUTTON_BODY_MORPHBODY = 2,
    CAS_BUTTON_BODY_MORPHHEAD = 3,
    CAS_BUTTON_BODY_HAIR = 4,
    CAS_BUTTON_BODY_DONE = 5,
    CAS_BUTTON_BODY_END = 6,
    CAS_BUTTON_MORPHBODY_BEGIN = 0,
    CAS_BUTTON_MORPHBODY_TORSO = 0,
    CAS_BUTTON_MORPHBODY_ARMS = 1,
    CAS_BUTTON_MORPHBODY_LEGS = 2,
    CAS_BUTTON_MORPHBODY_DONE = 3,
    CAS_BUTTON_MORPHBODY_END = 4,
    CAS_BUTTON_MORPHHEAD_BEGIN = 0,
    CAS_BUTTON_MORPHHEAD_HEAD = 0,
    CAS_BUTTON_MORPHHEAD_EYES = 1,
    CAS_BUTTON_MORPHHEAD_NOSE = 2,
    CAS_BUTTON_MORPHHEAD_MOUTH = 3,
    CAS_BUTTON_MORPHHEAD_JAW = 4,
    CAS_BUTTON_MORPHHEAD_DONE = 5,
    CAS_BUTTON_MORPHHEAD_END = 6,
    CAS_BUTTON_FASHION_BEGIN = 0,
    CAS_BUTTON_FASHION_HEAD = 0,
    CAS_BUTTON_FASHION_TOPS = 1,
    CAS_BUTTON_FASHION_BOTTOMS_SHOES = 2,
    CAS_BUTTON_FASHION_ACCESSORIES = 3,
    CAS_BUTTON_FASHION_DONE = 4,
    CAS_BUTTON_FASHION_END = 5,
    CAS_BUTTON_FASHION_HEAD_BEGIN = 0,
    CAS_BUTTON_FASHION_HEAD_HAIR = 0,
    CAS_BUTTON_FASHION_HEAD_HATS = 1,
    CAS_BUTTON_FASHION_HEAD_GLASSES = 2,
    CAS_BUTTON_FASHION_HEAD_FACIALTATTOO = 3,
    CAS_BUTTON_FASHION_HEAD_FACIALFEATURE = 4,
    CAS_BUTTON_FASHION_HEAD_DONE = 5,
    CAS_BUTTON_FASHION_HEAD_END = 6,
    CAS_BUTTON_FASHION_TOP_BEGIN = 0,
    CAS_BUTTON_FASHION_TOP_UNDERSHIRTS = 0,
    CAS_BUTTON_FASHION_TOP_DONE = 1,
    CAS_BUTTON_FASHION_TOP_END = 2,
    CAS_BUTTON_FASHION_BOTTOM_BEGIN = 0,
    CAS_BUTTON_FASHION_BOTTOM_PANTS_SKIRTS = 0,
    CAS_BUTTON_FASHION_BOTTOM_SHOES = 1,
    CAS_BUTTON_FASHION_BOTTOM_DONE = 2,
    CAS_BUTTON_FASHION_BOTTOM_END = 3,
    CAS_BUTTON_FASHION_ACCESSORIES_BEGIN = 0,
    CAS_BUTTON_FASHION_ACCESSORIES_ARM = 0,
    CAS_BUTTON_FASHION_ACCESSORIES_WAIST = 1,
    CAS_BUTTON_FASHION_ACCESSORIES_JEWELRY = 2,
    CAS_BUTTON_FASHION_ACCESSORIES_DONE = 3,
    CAS_BUTTON_FASHION_ACCESSORIES_END = 4,
    CAS_BUTTON_CFC_TYPE_BEGIN = 0,
    CAS_BUTTON_CFC_TORSO = 0,
    CAS_BUTTON_CFC_SLEEVES = 1,
    CAS_BUTTON_CFC_COLLAR = 2,
    CAS_BUTTON_CFC_STYLE = 3,
    CAS_BUTTON_CFC_COLOR = 4,
    CAS_BUTTON_CFC_MATERIAL = 5,
    CAS_BUTTON_CFC_ACCESSORY = 6,
    CAS_BUTTON_CFC_DONE = 7,
    CAS_BUTTON_CFC_TYPE_END = 8,
    NUM_CAS_GENDER_SCREEN_BUTTONS = 3,
    NUM_CAS_MAIN_SCREEN_BUTTONS = 5,
    NUM_CAS_BODY_SCREEN_BUTTONS = 6,
    NUM_CAS_BODY_MORPH_BODY_SCREEN_BUTTONS = 4,
    NUM_CAS_BODY_MORPH_HEAD_SCREEN_BUTTONS = 6,
    NUM_CAS_FASHION_SCREEN_BUTTONS = 5,
    NUM_CAS_FASHION_HEAD_SCREEN_BUTTONS = 6,
    NUM_CAS_FASHION_TOP_SCREEN_BUTTONS = 2,
    NUM_CAS_FASHION_BOTTOM_SCREEN_BUTTONS = 3,
    NUM_CAS_FASHION_ACCESSORIES_SCREEN_BUTTONS = 4,
};
enum eScreenName {
    CAS_GENDER_SCREEN = 0,
    CAS_MAIN_SCREEN = 1,
    CAS_BODY_SCREEN = 2,
    CAS_BODY_MORPH_BODY_SCREEN = 3,
    CAS_BODY_MORPH_HEAD_SCREEN = 4,
    CAS_BODY_FACIALFEATURE_SCREEN = 5,
    CAS_FASHION_SCREEN = 6,
    CAS_FASHION_HEAD_SCREEN = 7,
    CAS_FASHION_TOP_SCREEN = 8,
    CAS_FASHION_BOTTOM_SCREEN = 9,
    CAS_FASHION_ACCESSORIES_SCREEN = 10,
    CAS_FASHION_DESIGN_SCREEN = 11,
    CAS_ASPIRATION_SCREEN = 12,
    CAS_PERSONALITY_SCREEN = 13,
    CAS_NAME_SCREEN = 14,
    CAS_ARCHETYPE_SCREEN = 15,
};
// total size: 0x40
struct CASUIScreenState {
    // Members
    unsigned int numButtons; // offset 0x0, size 0x4
    char buttonStr[9]; // offset 0x4, size 0x9
    unsigned int highlightedButton; // offset 0x10, size 0x4
    unsigned int extraButtons; // offset 0x14, size 0x4
    enum eCASMenuButtons fashionDesignButtons[9]; // offset 0x18, size 0x24
    enum eScreenName screenName; // offset 0x3C, size 0x4
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
    struct CASUIScreenState * mpBegin; // offset 0x0, size 0x4
    struct CASUIScreenState * mpEnd; // offset 0x4, size 0x4
    struct CASUIScreenState * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
class stack {
    // Members
public:
    class vector c; // offset 0x0, size 0x10
};
// total size: 0x13C
class CASPersonalTarget : public UIObjectBase, public CasListener {
    // Members
    unsigned char m_nSavedPersVal[5]; // offset 0xAC, size 0x5
    unsigned char m_bLoadPersonality; // offset 0xB1, size 0x1
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0xB4, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0xE4, size 0x50
    class EVec2 m_CursorPoint; // offset 0x134, size 0x8
};
enum eCASDialogNavOptions {
    CAS_NAV_NONE = 0,
    CAS_NAV_BACK_EXIT = 1,
    CAS_NAV_EDIT_EXIT = 2,
    CAS_NAV_FASHION_BACK_EXIT = 3,
    CAS_NAV_EXIT = 4,
    CAS_NAV_DELETE_CLOTHING_ITEM = 5,
};
// total size: 0x4D0
class CASTargetTSC6 : public UIObjectBase, public CasListener {
    // Static members
    static class ERCharacter * s_pIdleAnimCharacters; // size: 0x4
    static class ERAnim * * s_pIdleAnimations; // size: 0x4
    static class ERShader * s_pGridIconShaders[17]; // size: 0x44
    static int kCAS_MAX_NUM_FASHION_FIELDS; // size: 0x4
    static enum eSpecies kCAS_DEFAULT_GENDER; // size: 0x4
    static char CAS_END_BUTTON_ARRAY; // size: 0x1
    static char CAS_DYE_INVENTORY; // size: 0x1
    static char CAS_RANDOMIZE_BUTTON; // size: 0x1
    static char CAS_GENDERSELECT_BUTTON; // size: 0x1
    static char CAS_TEXTURESWATCH_BUTTON; // size: 0x1
    static char CAS_COLORSWATCH_BUTTON; // size: 0x1
    static char CAS_MORPH_SLIDER; // size: 0x1
    static char CAS_TEXTWITHSHADER_BUTTON; // size: 0x1
    static char CAS_ARROW_BUTTON; // size: 0x1
    static char CAS_PUSH_BUTTON; // size: 0x1
    static unsigned long kCAS_UI_STRING_SIZE; // size: 0x4
    static unsigned int kGRID_SHADERS_IDS[17]; // size: 0x44

    // Members
    enum UIScreenID m_currentScreen; // offset 0xAC, size 0x4
    enum UIScreenID m_lastUnloadedScreen; // offset 0xB0, size 0x4
    enum UIScreenID m_baseScreen; // offset 0xB4, size 0x4
    int m_currentScreenOption; // offset 0xB8, size 0x4
    int m_prevUIFocus; // offset 0xBC, size 0x4
    int m_curPartUIFocus; // offset 0xC0, size 0x4
    class stack m_optionsStack; // offset 0xC4, size 0x10
    class CasMediator * m_pMediator; // offset 0xD4, size 0x4
    class CasSimState * * m_pCharState; // offset 0xD8, size 0x4
    class CasSimRenderer * * m_pCharRenderer; // offset 0xDC, size 0x4
    class BitFlags m_nFlags; // offset 0xE0, size 0x4
    int m_nCurrentChar; // offset 0xE4, size 0x4
    class CasScene * m_pScene; // offset 0xE8, size 0x4
    unsigned int m_filterId; // offset 0xEC, size 0x4
    class UIDialog m_UIDialog; // offset 0xF0, size 0xA0
    unsigned int m_retConditional; // offset 0x190, size 0x4
    class StackString2 m_strFamilyName; // offset 0x194, size 0x208
    int m_shutdownStage; // offset 0x39C, size 0x4
    class CasNpcEditor * m_pNPCEditor; // offset 0x3A0, size 0x4
    class stack m_UIScreenStack; // offset 0x3A4, size 0x10
    class K2YTarget * m_pK2YTarget; // offset 0x3B4, size 0x4
    class CASPersonalTarget * m_pCASPersonalTarget; // offset 0x3B8, size 0x4
    class CASArchetypeTarget * m_pCASArchetypeTarget; // offset 0x3BC, size 0x4
    class CASGridTarget * m_pCASGridTarget; // offset 0x3C0, size 0x4
    float m_prevMorphValuef; // offset 0x3C4, size 0x4
    int m_nArrowDirection; // offset 0x3C8, size 0x4
    int m_CurrentFashionChoice[7]; // offset 0x3CC, size 0x1C
    signed short m_nStoredDyesInInventory[9]; // offset 0x3E8, size 0x12
    signed short m_nLastClothingItemInstanceID; // offset 0x3FA, size 0x2
    struct CASUIScreenState m_currentScreenState; // offset 0x3FC, size 0x40
    enum eCASDialogNavOptions m_DialogNavOption; // offset 0x43C, size 0x4
    enum eMorphRegion m_prevMorphRegion; // offset 0x440, size 0x4
    unsigned char m_bPreviousCpuSmoothSkinsSetting; // offset 0x444, size 0x1
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x448, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x478, size 0x50
    class EVec2 m_CursorPoint; // offset 0x4C8, size 0x8
};
// total size: 0x230
class SimImageMaker : public CharacterImageMaker {
    // Static members
    static unsigned int kSkeletonID[2]; // size: 0x8
    static unsigned int kDefaultAnimID[2]; // size: 0x8

    // Members
    class EIStaticModel * m_pModels[15]; // offset 0x1F4, size 0x3C
};
// total size: 0x10
class CasEventResetCharacterDraw : public CasEvent {
    // Members
    unsigned char m_bSpeciesChanged; // offset 0x8, size 0x1
    unsigned char m_bRenderCharacter; // offset 0x9, size 0x1
    unsigned char m_bBlockOnLoad; // offset 0xA, size 0x1
    int m_CharID; // offset 0xC, size 0x4
};
// total size: 0xC
class CasEventSetMorphRegion : public CasEvent {
    // Members
    enum eMorphRegion m_morphRegion; // offset 0x8, size 0x4
};
// total size: 0x18
struct /* @class$26756game_cas_unity_cpp */ {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int row; // offset 0x8, size 0x4
    int column; // offset 0xC, size 0x4
    int width; // offset 0x10, size 0x4
    int height; // offset 0x14, size 0x4
};
union /* @class$26755game_cas_unity_cpp */ {
    int keyData[6]; // offset 0x0, size 0x18
    // total size: 0x18
    struct /* @class$26756game_cas_unity_cpp */ {
        // Members
        int x; // offset 0x0, size 0x4
        int y; // offset 0x4, size 0x4
        int row; // offset 0x8, size 0x4
        int column; // offset 0xC, size 0x4
        int width; // offset 0x10, size 0x4
        int height; // offset 0x14, size 0x4
    } __anon$26757; // offset 0x0, size 0x18
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int row; // offset 0x8, size 0x4
    int column; // offset 0xC, size 0x4
    int width; // offset 0x10, size 0x4
    int height; // offset 0x14, size 0x4
};
// total size: 0x1C
class MenuItemPosition {
    // Members
public:
    union { // inferred
        union /* @class$26755game_cas_unity_cpp */ {
            int keyData[6]; // offset 0x0, size 0x18
            // total size: 0x18
            struct /* @class$26756game_cas_unity_cpp */ {
                // Members
                int x; // offset 0x0, size 0x4
                int y; // offset 0x4, size 0x4
                int row; // offset 0x8, size 0x4
                int column; // offset 0xC, size 0x4
                int width; // offset 0x10, size 0x4
                int height; // offset 0x14, size 0x4
            } __anon$26757; // offset 0x0, size 0x18
            int x; // offset 0x0, size 0x4
            int y; // offset 0x4, size 0x4
            int row; // offset 0x8, size 0x4
            int column; // offset 0xC, size 0x4
            int width; // offset 0x10, size 0x4
            int height; // offset 0x14, size 0x4
        } __anon$26758; // offset 0x0, size 0x18
        int keyData[6]; // offset 0x0, size 0x18
        // total size: 0x18
        struct /* @class$26756game_cas_unity_cpp */ {
            // Members
            int x; // offset 0x0, size 0x4
            int y; // offset 0x4, size 0x4
            int row; // offset 0x8, size 0x4
            int column; // offset 0xC, size 0x4
            int width; // offset 0x10, size 0x4
            int height; // offset 0x14, size 0x4
        } __anon$26757; // offset 0x0, size 0x18
        struct { // inferred
            int x; // offset 0x0, size 0x4
            int y; // offset 0x4, size 0x4
            int row; // offset 0x8, size 0x4
            int column; // offset 0xC, size 0x4
            int width; // offset 0x10, size 0x4
            int height; // offset 0x14, size 0x4
        };
    };
    unsigned char bValid; // offset 0x18, size 0x1
};
// total size: 0x4
class GridInteractorResponseHandler {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x30
class WiiMoteToGridInteractor {
    // Members
public:
    class MenuItemPosition * m_KeyPositions; // offset 0x0, size 0x4
    int m_keyAddIndex; // offset 0x4, size 0x4
    int m_selectedRow; // offset 0x8, size 0x4
    int m_selectedColumn; // offset 0xC, size 0x4
    int m_xOffset; // offset 0x10, size 0x4
    int m_yOffset; // offset 0x14, size 0x4
    int m_SizeX; // offset 0x18, size 0x4
    int m_SizeY; // offset 0x1C, size 0x4
private:
    int m_MAX_NUM_ITEMS; // offset 0x20, size 0x4
    char * m_AptFunctionName_Select; // offset 0x24, size 0x4
    class GridInteractorResponseHandler * m_ResponseHandler; // offset 0x28, size 0x4
    char * m_AptFunctionName_DeSelectAll; // offset 0x2C, size 0x4
};
enum ESimCommands {
    kESimCommandInitModel = 0,
    kESimCommandChangeClothing = 1,
    kCASCommandChangeClothing = 2,
};
// total size: 0x14
class CasSimState : public CasListener {
    // Members
    class CasSimDescription * m_pDescription; // offset 0x8, size 0x4
    class CasSimDescription * m_pStoredDescription; // offset 0xC, size 0x4
    int m_CharId; // offset 0x10, size 0x4
};
// total size: 0xC
class CasEventResetCharacter : public CasEvent {
    // Members
    enum eSpecies m_nSpecies; // offset 0x8, size 0x4
};
// total size: 0x3C
class CasTweakTool {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    class EVec3 m_cameraPos; // offset 0x4, size 0xC
    class EVec3 m_cameraTarget; // offset 0x10, size 0xC
    float m_ssOpeningDuration; // offset 0x1C, size 0x4
    float m_ssFishingDuration; // offset 0x20, size 0x4
    float m_ssDrinkingDuration; // offset 0x24, size 0x4
    float m_ssSingingDuration; // offset 0x28, size 0x4
    float m_ssCapsizingDuration; // offset 0x2C, size 0x4
    float m_ssClosingDuration; // offset 0x30, size 0x4
    float m_ssFadeInDuration; // offset 0x34, size 0x4
    float m_ssFadeOutDuration; // offset 0x38, size 0x4
};
class CasTweakTool _gCasTweakTool; // size: 0x3C, address: 0x8048C618
static int sLocalToPersonDataMap[5]; // size: 0x14, address: 0x80425500
static class ELocString sLocalized[12]; // size: 0x30, address: 0x8048C658
static unsigned char sInited; // size: 0x1, address: 0x805DB6A8
enum eBodyPart s_simBodyPartRenderOrder[14]; // size: 0x38, address: 0x8041AD10
unsigned short gSimPartsMapSizeMultiplier_CAS; // size: 0x2, address: 0x805D851E
unsigned short gSimPartsMapSizeMultiplier_Game; // size: 0x2, address: 0x805D8520
// total size: 0xC
class MorphUtilities {
    // Members
    class EIStaticModel * * m_pModels; // offset 0x0, size 0x4
    enum eSpecies m_species; // offset 0x4, size 0x4
    const struct BodyPartTypeInfoTableTSC6 * m_pBodyPartTypeInfoTable; // offset 0x8, size 0x4
};
// total size: 0xC
struct ResourceInfo {
    // Members
    unsigned int m_id; // offset 0x0, size 0x4
    class EResourceManager * m_manager; // offset 0x4, size 0x4
    class EResource * m_resource; // offset 0x8, size 0x4
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
    struct ResourceInfo * mpBegin; // offset 0x0, size 0x4
    struct ResourceInfo * mpEnd; // offset 0x4, size 0x4
    struct ResourceInfo * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x24
class ERDataset : public EResource {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    class vector m_resourceList; // offset 0x14, size 0x10
};
// total size: 0xD54
class EDatasetManager : public EResourceManager {
    // Static members
    static unsigned char m_loadEnabled; // size: 0x1
    static unsigned char m_outputEnabled; // size: 0x1

    // Members
protected:
    unsigned char (* m_pFilterCheckCB)(unsigned int, unsigned int, void *, int); // offset 0xD44, size 0x4
    void * m_pFilterUserData; // offset 0xD48, size 0x4
    int m_meta; // offset 0xD4C, size 0x4
    float m_fLoadProgress; // offset 0xD50, size 0x4
};
class MorphTargetParam * s_pInstance; // size: 0x4, address: 0x805DB6AC
class LatticeParam * s_pInstance; // size: 0x4, address: 0x805DB6B0
// total size: 0x4
class MorphTargetParam {
    // Static members
    static class MorphTargetParam * s_pInstance; // size: 0x4

    // Members
    const struct BodyPartTypeInfoTableTSC6 * m_pBodyPartTypeInfoTable; // offset 0x0, size 0x4
};
// total size: 0x4
class LatticeParam {
    // Static members
    static class LatticeParam * s_pInstance; // size: 0x4

    // Members
    const struct BodyPartTypeInfoTableTSC6 * m_pBodyPartTypeInfoTable; // offset 0x0, size 0x4
};
enum eBodyType {
    kBODYTYPE_BEGIN = 0,
    kBODYTYPE_CHOOSEABLE_BEGIN = 0,
    kBODYTYPE_NORMAL = 0,
    kBODYTYPE_SKINNY = 1,
    kBODYTYPE_CHOOSEABLE_END = 2,
    kBODYTYPE_ULTRA_SKINNY = 2,
    kBODYTYPE_END = 3,
    kNUM_BODYTYPES = 3,
    kNUM_BODYTYPES_CHOOSEABLE = 2,
};
class EVec4 kDefaultBackgroundColor; // size: 0x10, address: 0x8048C688
class EVec3 kDefaultLightAmbientColor; // size: 0xC, address: 0x8048C698
class EVec3 kDefaultDirLightColor[4]; // size: 0x30, address: 0x8048C6A8
class EVec3 kDefaultDirLightDir[4]; // size: 0x30, address: 0x8048C6D8
unsigned char kClearPinkArray[4]; // size: 0x4, address: 0x805DD220
unsigned char kCatalogBackgroundColorArray[4]; // size: 0x4, address: 0x805DD224
unsigned int kDefaultAnimID[2]; // size: 0x8, address: 0x805DD228
unsigned int kSkeletonID[2]; // size: 0x8, address: 0x805DD230
class EVec3 kDefaultCameraPos; // size: 0xC, address: 0x8048C708
class EVec3 kDefaultCameraTarget; // size: 0xC, address: 0x8048C714
class EVec3 kDefaultCameraUp; // size: 0xC, address: 0x8048C720
// total size: 0x1F4
class CharacterImageMaker {
    // Static members
    static unsigned char ONE_MINUS_FURCARD_BACKGROUND_THRESHOLD_VALUE; // size: 0x1
    static unsigned char FURCARD_BACKGROUND_THRESHOLD_VALUE; // size: 0x1
    static unsigned char BACKGROUND_THRESHOLD_VALUE_16; // size: 0x1
    static unsigned char BACKGROUND_THRESHOLD_VALUE; // size: 0x1
    static unsigned char kCatalogBackgroundColorArray[4]; // size: 0x4
    static unsigned char kClearPinkArray[4]; // size: 0x4
    static class EVec3 kDefaultDirLightDir[4]; // size: 0x30
    static class EVec3 kDefaultDirLightColor[4]; // size: 0x30
    static int kDefaultLightNumPoint; // size: 0x4
    static int kDefaultLightNumDir; // size: 0x4
    static float kDefaultCameraFOV; // size: 0x4
    static class EVec3 kDefaultCameraUp; // size: 0xC
    static class EVec3 kDefaultCameraTarget; // size: 0xC
    static class EVec3 kDefaultCameraPos; // size: 0xC
    static class EVec3 kDefaultLightAmbientColor; // size: 0xC
    static class EVec4 kDefaultBackgroundColor; // size: 0x10
    static unsigned int kDefaultImageDepth; // size: 0x4
    static unsigned int kDefaultImageHeight; // size: 0x4
    static unsigned int kDefaultImageWidth; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned int m_width; // offset 0x4, size 0x4
    unsigned int m_height; // offset 0x8, size 0x4
    unsigned int m_depth; // offset 0xC, size 0x4
    unsigned char m_bSepia; // offset 0x10, size 0x1
    unsigned char m_bUseShadowMapAsRenderSurface; // offset 0x11, size 0x1
    class EAnimController m_ac; // offset 0x14, size 0xAC
    enum eSpecies m_nSpecies; // offset 0xC0, size 0x4
    class EShader * m_pSkinShader; // offset 0xC4, size 0x4
    struct ELights m_lights; // offset 0xC8, size 0xF8
    class EVec3 m_camPos; // offset 0x1C0, size 0xC
    class EVec3 m_camTarget; // offset 0x1CC, size 0xC
    class EVec3 m_camUp; // offset 0x1D8, size 0xC
    float m_camFOV; // offset 0x1E4, size 0x4
    unsigned int m_animId; // offset 0x1E8, size 0x4
    class ERTexture * m_pBackgroundTexture; // offset 0x1EC, size 0x4
    class SimModelTSC6 * m_pSimModel; // offset 0x1F0, size 0x4
};
// total size: 0xD44
class ETextureManager : public EResourceManager {};
// total size: 0x20
struct ERenderSurfaceDef {
    // Members
    int xsize; // offset 0x0, size 0x4
    int ysize; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    class EVec3 bgColor; // offset 0xC, size 0xC
    int format; // offset 0x18, size 0x4
    int zformat; // offset 0x1C, size 0x4
};
// total size: 0x4
class IRTQuantize {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x8
struct ERTQCacheNode {
    // Members
    unsigned int color; // offset 0x0, size 0x4
    int data; // offset 0x4, size 0x4
};
// total size: 0x38
struct ERTQNode {
    // Members
    class EVec3 vMidColor; // offset 0x0, size 0xC
    class EVec3 vTotalColor; // offset 0xC, size 0xC
    unsigned int number_colors; // offset 0x18, size 0x4
    unsigned int number_unique; // offset 0x1C, size 0x4
    unsigned short parent; // offset 0x20, size 0x2
    unsigned short child[8]; // offset 0x22, size 0x10
    unsigned char children; // offset 0x32, size 0x1
    unsigned char level; // offset 0x33, size 0x1
    unsigned char color_number; // offset 0x34, size 0x1
    unsigned char id; // offset 0x35, size 0x1
};
// total size: 0x1CF8
class ERTQuantize : public IRTQuantize {
    // Members
protected:
    class EMat4 m_mTrans; // offset 0x8, size 0x40
    class EMat4 m_mInvTrans; // offset 0x48, size 0x40
    struct ERTQCacheNode m_cache[511]; // offset 0x88, size 0xFF8
    void * (* m_pfnAlloc)(unsigned int); // offset 0x1080, size 0x4
    void (* m_pfnFree)(void *); // offset 0x1084, size 0x4
    unsigned short m_root; // offset 0x1088, size 0x2
    unsigned short m_nFreeNodeHead; // offset 0x108A, size 0x2
    struct ERTQNode * m_pNodes; // offset 0x108C, size 0x4
    unsigned int m_mode; // offset 0x1090, size 0x4
    unsigned int m_nNodes; // offset 0x1094, size 0x4
    unsigned int m_maxColors; // offset 0x1098, size 0x4
    unsigned int m_maxNodes; // offset 0x109C, size 0x4
    unsigned int m_depth; // offset 0x10A0, size 0x4
    unsigned int m_nPixels; // offset 0x10A4, size 0x4
    unsigned int m_nColors; // offset 0x10A8, size 0x4
    unsigned int m_pruningThreshold; // offset 0x10AC, size 0x4
    unsigned int m_nextPruningThreshold; // offset 0x10B0, size 0x4
    unsigned int m_shift[11]; // offset 0x10B4, size 0x2C
    unsigned int m_color_number; // offset 0x10E0, size 0x4
    class EVec3 m_colormap[256]; // offset 0x10E4, size 0xC00
    class EVec3 m_vColor; // offset 0x1CE4, size 0xC
    float m_distance; // offset 0x1CF0, size 0x4
    unsigned char m_YUVColorSpace; // offset 0x1CF4, size 0x1
};
// total size: 0x1
class TextureUtils {
    // Static members
    static unsigned char s_fullAlphaValue; // size: 0x1
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
    struct ClothingSetIndexInfo * mpBegin; // offset 0x0, size 0x4
    struct ClothingSetIndexInfo * mpEnd; // offset 0x4, size 0x4
    struct ClothingSetIndexInfo * mpCapacity; // offset 0x8, size 0x4
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
    class ClothingItem * * mpBegin; // offset 0x0, size 0x4
    class ClothingItem * * mpEnd; // offset 0x4, size 0x4
    class ClothingItem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
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
    unsigned int * mpBegin; // offset 0x0, size 0x4
    unsigned int * mpEnd; // offset 0x4, size 0x4
    unsigned int * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
unsigned int CAS_DEFAULT_ROOM_ID; // size: 0x4, address: 0x805DD248
class EVec3 kMirrorClothingCorners[4]; // size: 0x30, address: 0x8048C730
enum eSlideShowPositions kCASToCAFPositionMap[6][6]; // size: 0x90, address: 0x8041AD48
int kSimBoatLocatorBones[6]; // size: 0x18, address: 0x8041ADD8
float kSnapShotIntervalDuration[6]; // size: 0x18, address: 0x8041ADF0
unsigned int kSnapShotBoatAnimations[6]; // size: 0x18, address: 0x8041AE08
unsigned int kSnapShotSamples[6]; // size: 0x18, address: 0x8041AE20
char * kSnapShotPhoneStates[6]; // size: 0x18, address: 0x80425CD0
unsigned int kSnapshotSimAnimations[6][6]; // size: 0x90, address: 0x80425CE8
enum eSlideShowProps {
    CAS_PROP_NONE = 0,
    CAS_PROP_GLASSES_SIM0 = 1,
    CAS_PROP_GLASSES_SIM1 = 2,
    CAS_PROP_GLASSES_SIM2 = 3,
    CAS_PROP_GLASSES_SIM3 = 4,
    CAS_PROP_GLASSES_SIM4 = 5,
    CAS_PROP_GLASSES_SIM5 = 6,
    CAS_PROP_POLES_SIM2 = 7,
    CAS_PROP_POLES_SIM4 = 8,
    CAS_PROP_POLES_SIM5 = 9,
    CAS_PROP_MICROPHONE = 10,
    CAS_PROP_TOAL = 11,
};
enum eSlideShowProps kCASSnapShotProps[6][6]; // size: 0x90, address: 0x8041AE38
// total size: 0xA8
class CELTarget : public UIObjectBase {
    // Members
    unsigned char m_IsLoaded; // offset 0xA4, size 0x1
};
// total size: 0x10C
class CasSceneDefault : public CasScene {
    // Static members
    static unsigned int kRightAltPropBone; // size: 0x4
    static unsigned int kRightPropBone; // size: 0x4
    static unsigned int kLeftAltPropBone; // size: 0x4
    static unsigned int kLeftPropBone; // size: 0x4
    static float kLightingTimeOfDayBeginHours; // size: 0x4
    static float kFadeInTime; // size: 0x4
    static float kFadeOutTime; // size: 0x4
    static char * kSnapShotPhoneStates[6]; // size: 0x18
    static unsigned int kSnapShotSamples[6]; // size: 0x18
    static unsigned int kSnapShotCameraSound; // size: 0x4
    static unsigned int kSnapShotBoatAnimations[6]; // size: 0x18
    static float kSnapShotIntervalDuration[6]; // size: 0x18
    static int kSimBoatLocatorBones[6]; // size: 0x18
    static enum eSlideShowPositions kCASToCAFPositionMap[6][6]; // size: 0x90
    static float kMirrorFarPlaneDistance; // size: 0x4
    static float kMirrorNearPlaneDistance; // size: 0x4
    static float kMirrorFOV; // size: 0x4
    static float kSceneFarPlaneDistance; // size: 0x4
    static float kSceneNearPlaneDistance; // size: 0x4
    static float kSceneFOV; // size: 0x4
    static enum eSlideShowProps kCASSnapShotProps[6][6]; // size: 0x90
    static unsigned int kSnapshotSimAnimations[6][6]; // size: 0x90
    static float kMirrorCornerOffset; // size: 0x4
    static unsigned int kMirrorPortalShaderID; // size: 0x4
    static unsigned int kMirrorModelID; // size: 0x4
    static class EVec3 kMirrorClothingCorners[4]; // size: 0x30
    static unsigned int CAS_DEFAULT_ROOM_ID; // size: 0x4

    // Members
    class ERModel * m_pMirrorModel; // offset 0xAC, size 0x4
    class EMirrorPortal * m_pMirrorPortal; // offset 0xB0, size 0x4
    class EMidLotInstance * m_pBoatObject; // offset 0xB4, size 0x4
    class EMidLotInstance * m_pDockObject; // offset 0xB8, size 0x4
    class EMidLotInstance * m_pMicrophoneObject; // offset 0xBC, size 0x4
    class EMidLotInstance * m_pSim0Cup; // offset 0xC0, size 0x4
    class EMidLotInstance * m_pSim3Cup; // offset 0xC4, size 0x4
    class EMidLotInstance * m_pSim5Cup; // offset 0xC8, size 0x4
    class EMidLotInstance * m_pSimRestCups[3]; // offset 0xCC, size 0xC
    unsigned char m_bLeftCupsLoaded; // offset 0xD8, size 0x1
    class EMidLotInstance * m_pSim2Pole; // offset 0xDC, size 0x4
    class EMidLotInstance * m_pSim4Pole; // offset 0xE0, size 0x4
    class EMidLotInstance * m_pSim5Pole; // offset 0xE4, size 0x4
    unsigned char m_bClosingSequenceStarted; // offset 0xE8, size 0x1
    enum eSlideShowSequence m_eCurrentSlide; // offset 0xEC, size 0x4
    float m_fCurrentSlideDuration; // offset 0xF0, size 0x4
    class Fader m_fader; // offset 0xF4, size 0x10
    class CELTarget * m_pCelPhoneScreen; // offset 0x104, size 0x4
    unsigned char m_bLoadingCelPhone; // offset 0x108, size 0x1
    unsigned char m_bPauseSequence; // offset 0x109, size 0x1
};
// total size: 0x10
class Fader {
    // Members
    float m_fFadeTimeMax; // offset 0x0, size 0x4
    float m_fFadeTimeMaxInv; // offset 0x4, size 0x4
    float m_fFadeTimeLeft; // offset 0x8, size 0x4
    unsigned int m_status; // offset 0xC, size 0x4
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
    class EMidLotInstance * * mpBegin; // offset 0x0, size 0x4
    class EMidLotInstance * * mpEnd; // offset 0x4, size 0x4
    class EMidLotInstance * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0xD44
class ELevelManager : public EResourceManager {};
// total size: 0x24
class ERenderSurface {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct ERenderSurfaceDef m_rsd; // offset 0x4, size 0x20
};
// total size: 0x54
class EMirrorPortal {
    // Members
    float m_fov; // offset 0x0, size 0x4
    class EVec3 m_corners[4]; // offset 0x4, size 0x30
    struct EGEVert * m_verts; // offset 0x34, size 0x4
    int m_numCorners; // offset 0x38, size 0x4
    class EMat4 * m_prevLookAt; // offset 0x3C, size 0x4
    class EMat4 * m_mirrorMatrix; // offset 0x40, size 0x4
    class ERShader * m_mirrorShader; // offset 0x44, size 0x4
    float m_fNearPlane; // offset 0x48, size 0x4
    float m_fFarPlane; // offset 0x4C, size 0x4
    unsigned char m_isRendering; // offset 0x50, size 0x1
};
enum eSlideShowPositions {
    CAS_POSITION0 = 0,
    CAS_POSITION1 = 1,
    CAS_POSITION2 = 2,
    CAS_POSITION3 = 3,
    CAS_POSITION4 = 4,
    CAS_POSITION5 = 5,
    CAS_TOTAL_POSITIONS = 6,
};
enum SourceType {
    SOURCE_CARD = 0,
    SOURCE_DISK = 1,
};
enum SectionID {
    SectionNullId = 0,
    UIDBSection1ID = 1432970289,
    UIDBSection2ID = 1432970290,
    UIDBSection3ID = 1432970291,
    UIDBSection4ID = 1432970292,
    UIxxSection1ID = 1432975409,
    UIxxSection2ID = 1432975410,
    UIxxSection3ID = 1432975411,
    UIxxSection4ID = 1432975412,
};
// total size: 0x8
class SaveRecord {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    void * ptr; // offset 0x4, size 0x4
};
// total size: 0x10
struct RegistryNode {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    void (* saveSection)(enum SectionID, class SaveRecord &); // offset 0x4, size 0x4
    void (* loadSection)(enum SectionID, class SaveRecord &); // offset 0x8, size 0x4
    void (* saveComplete)(enum SectionID, class SaveRecord &); // offset 0xC, size 0x4
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
    struct RegistryNode * mpBegin; // offset 0x0, size 0x4
    struct RegistryNode * mpEnd; // offset 0x4, size 0x4
    struct RegistryNode * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0xC
struct NghResFileWriteInfo {
    // Members
    struct NghResFileWriteInfo * pNext; // offset 0x0, size 0x4
    struct HandleNode * handle; // offset 0x4, size 0x4
    unsigned short resIndex; // offset 0x8, size 0x2
};
enum RegistryID {
    RegistryNullId = 0,
    UIDBRegistryID = 1432970322,
    UIxxRegistryID = 1432975480,
};
// total size: 0x18
class NghSection {
    // Members
public:
    unsigned int m_subSectionCnt; // offset 0x0, size 0x4
    unsigned int m_subSectionSize; // offset 0x4, size 0x4
    unsigned int m_sectionOffset; // offset 0x8, size 0x4
    unsigned int m_sectionSize; // offset 0xC, size 0x4
    enum RegistryID m_registeryId; // offset 0x10, size 0x4
    enum SectionID m_firstSubSectionId; // offset 0x14, size 0x4
};
// total size: 0x28
class NghLayout {
    // Members
    unsigned int m_version; // offset 0x0, size 0x4
    class NghSection * m_section; // offset 0x4, size 0x4
    unsigned int m_sectionCnt; // offset 0x8, size 0x4
    unsigned int m_subSectionCnt; // offset 0xC, size 0x4
    unsigned int m_size; // offset 0x10, size 0x4
    unsigned int m_sectionMaxSize; // offset 0x14, size 0x4
    unsigned int m_numHouses; // offset 0x18, size 0x4
    unsigned int m_numThumbnails; // offset 0x1C, size 0x4
    unsigned int m_numModifiableFamilies; // offset 0x20, size 0x4
    unsigned int m_numSimsPerFamily; // offset 0x24, size 0x4
};
enum MCCError {
    NoError = 0,
    CacheInvalid = 1,
    NotEnoughMemory = 2,
    LoadError = 3,
    SaveError = 4,
    InvalidSize = 5,
};
// total size: 0x18
class MemoryCardCache {
    // Static members
    static unsigned int s_xboxSaveConfigPosition; // size: 0x4
    static unsigned int s_ngcSaveConfigPosition; // size: 0x4
    static unsigned int s_configCacheSize; // size: 0x4

    // Members
    char * m_configCache; // offset 0x0, size 0x4
    char * * m_cache; // offset 0x4, size 0x4
    unsigned long * m_cacheSizes; // offset 0x8, size 0x4
    class NghLayout * m_pLayout; // offset 0xC, size 0x4
    enum MCCError m_lastError; // offset 0x10, size 0x4
    unsigned char m_cacheValid; // offset 0x14, size 0x1
    unsigned char m_configValid; // offset 0x15, size 0x1
    unsigned char m_systemInitialized; // offset 0x16, size 0x1
    unsigned char m_sourceIsFile; // offset 0x17, size 0x1
};
// total size: 0x1C
class NghResFileSectionHeader {
    // Members
public:
    unsigned int m_uSectionType; // offset 0x0, size 0x4
    unsigned int m_uSize; // offset 0x4, size 0x4
    unsigned int m_uDataSize; // offset 0x8, size 0x4
    unsigned int m_uCompressedDataSize; // offset 0xC, size 0x4
    unsigned int m_uChecksum; // offset 0x10, size 0x4
    unsigned int m_uVersion; // offset 0x14, size 0x4
    unsigned int m_uNumEntries; // offset 0x18, size 0x4
};
// total size: 0x450
class NghResFile : public iResFile {
    // Static members
    static unsigned int s_nNumSimsPerFamily; // size: 0x4
    static unsigned int s_nNumModifiableFamilies; // size: 0x4
    static unsigned int s_nNumHouses; // size: 0x4
    static unsigned int s_nNumThumbnails; // size: 0x4
    static unsigned int m_uLastBothSectionChecksum; // size: 0x4
    static unsigned int m_uBothSectionChecksum; // size: 0x4
    static class NghSection s_nghSectionLayout10[]; // size: 0x0
    static class NghSection s_nghSectionLayout11[]; // size: 0x0
    static char s_ValidationValue[]; // size: 0x0
    static int s_userIndex[]; // size: 0x0
    static int s_houseIndex[]; // size: 0x0
    static int s_nghIndex[]; // size: 0x0
    static int kRES_ENTRY_SIZE; // size: 0x4
    static const char * s_configFileName; // size: 0x4
    static const char * s_saveFileName; // size: 0x4

    // Members
public:
    enum SourceType m_nSourceType; // offset 0x10, size 0x4
    class StackString m_sSourceFilePath; // offset 0x14, size 0x408
private:
    class vector m_registry; // offset 0x41C, size 0x10
    unsigned int m_uCurrentHouse; // offset 0x42C, size 0x4
    struct NghResFileWriteInfo * * m_ppNghWriteInfo; // offset 0x430, size 0x4
    struct NghResFileWriteInfo * * * m_ppHouseWriteInfo; // offset 0x434, size 0x4
    struct NghResFileWriteInfo * * m_ppUserWriteInfo; // offset 0x438, size 0x4
    struct NghResFileWriteInfo * m_pLastGetByIndexNode; // offset 0x43C, size 0x4
    class MemoryCardCache * m_pMemoryCardCache; // offset 0x440, size 0x4
    unsigned int * m_pThumbGUID; // offset 0x444, size 0x4
    class NghLayout * m_pLayout; // offset 0x448, size 0x4
    unsigned char m_bStoreChecksum; // offset 0x44C, size 0x1
    unsigned char m_bConvertingFromV10ToV11; // offset 0x44D, size 0x1
};
enum eCAFMenuScreens {
    CAF_MAIN_MENU = 0,
    CAF_ADD_MENU = 1,
    CAF_SELECT_MENU = 2,
};
enum eCAFMenuButtons {
    CAF_BUTTON_BACK = -1,
    CAF_BUTTON_NONE = 0,
    CAF_BUTTON_MAIN_BEGIN = 0,
    CAF_BUTTON_MAIN_ADD = 0,
    CAF_BUTTON_MAIN_EDIT = 1,
    CAF_BUTTON_MAIN_DELETE = 2,
    CAF_BUTTON_MAIN_DONE = 3,
    CAF_BUTTON_MAIN_END = 4,
    CAF_BUTTON_ADD_BEGIN = 0,
    CAF_BUTTON_ADD_SIM = 0,
    CAF_BUTTON_ADD_CAT = 1,
    CAF_BUTTON_ADD_DOG = 2,
    CAF_BUTTON_ADD_DONE = 3,
    CAF_BUTTON_ADD_END = 4,
    CAF_BUTTON_SELECT_BEGIN = 0,
    CAF_BUTTON_SELECT_SIMSLOT1 = 0,
    CAF_BUTTON_SELECT_SIMSLOT2 = 1,
    CAF_BUTTON_SELECT_SIMSLOT3 = 2,
    CAF_BUTTON_SELECT_SIMSLOT4 = 3,
    CAF_BUTTON_SELECT_DONE = 4,
    CAF_BUTTON_SELECT_END = 5,
    NUM_CAF_MAIN_BUTTONS = 4,
    NUM_CAF_ADD_BUTTONS = 4,
    NUM_CAF_SELECT_BUTTONS = 5,
};
// total size: 0x10
struct CAFUIScreenState {
    // Members
    enum eCAFMenuScreens screenName; // offset 0x0, size 0x4
    unsigned int numButtons; // offset 0x4, size 0x4
    unsigned int highlightedButton; // offset 0x8, size 0x4
    enum eCAFMenuButtons parentButtonPressed; // offset 0xC, size 0x4
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
    struct CAFUIScreenState * mpBegin; // offset 0x0, size 0x4
    struct CAFUIScreenState * mpEnd; // offset 0x4, size 0x4
    struct CAFUIScreenState * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
class stack {
    // Members
public:
    class vector c; // offset 0x0, size 0x10
};
enum eCAFMode {
    CAF_MAIN_MODE = 0,
    CAF_SELECTOR_MODE = 1,
    CAF_CAS_MODE = 2,
    CAF_DIALOG_MODE = 3,
    CAF_OFF_MODE = 4,
};
enum eCAFDialogNavOptions {
    CAF_NAV_NONE = 0,
    CAF_NAV_EXIT = 1,
    CAF_NAV_DELETE_CHARACTER = 2,
    CAF_NAV_CHOOSE_INITIAL_SIM = 3,
};
enum eCAFTargetState {
    CAF_START_TRANSITION = 0,
    CAF_TRANSITION_TO = 1,
    CAF_IN_TARGET_STATE = 2,
    CAF_TARGET_SHUTDOWN = 3,
    CAF_FINISHED_TARGET = 4,
    CAF_TRANSITION_OUT = 5,
    CAF_TARGET_WAIT_FOR_SIM_CREATION = 6,
    CAF_TARGET_CLEANUP = 7,
};
enum eCharacterTargetMode {
    ENTER_TARGET_NEW_CHARACTER = 0,
    ENTER_TARGET_EDIT_CHARACTER = 1,
};
// total size: 0x10
struct TargetState {
    // Members
    enum eSpecies speciesType; // offset 0x0, size 0x4
    enum eCAFTargetState transState; // offset 0x4, size 0x4
    enum eCharacterTargetMode targetMode; // offset 0x8, size 0x4
    int charSlot; // offset 0xC, size 0x4
};
enum eCAFUIMessage {
    CAF_INVALID_MSG = 0,
    CAF_ADD_FAMILY_MEMBER = 1,
    CAF_EDIT_FAMILY_MEMBER = 2,
    CAF_REMOVE_FAMILY_MEMBER = 3,
    CAF_ADD_SIM = 4,
    CAF_CANCEL = 5,
    CAF_KEYBOARD = 6,
    CAF_DONE = 7,
    CAF_CHOOSE_INITIAL_SIM = 8,
};
enum eSlideShowSequence {
    CAS_SCENE_SLIDE_OPENING = 0,
    CAS_SCENE_SLIDE_FISHING = 1,
    CAS_SCENE_SLIDE_DRINKING = 2,
    CAS_SCENE_SLIDE_SINGING = 3,
    CAS_SCENE_SLIDE_CAPSIZING = 4,
    CAS_SCENE_SLIDE_COMPLETED = 5,
    CAS_SCENE_TOTAL_SLIDES = 6,
};
// total size: 0x578
class CAFTarget : public UIObjectBase, public CasListener {
    // Members
public:
    class CasMediator m_mediator; // offset 0xAC, size 0x34
    class CasSimState * * m_pCharState; // offset 0xE0, size 0x4
    class CasSimRenderer * * m_pSimRenderer; // offset 0xE4, size 0x4
    int m_currentCharSlot; // offset 0xE8, size 0x4
    int m_prevUIFocus; // offset 0xEC, size 0x4
    int m_curPartUIFocus; // offset 0xF0, size 0x4
    struct CAFUIScreenState m_currentScreenState; // offset 0xF4, size 0x10
    class stack m_UIScreenStack; // offset 0x104, size 0x10
    enum UIScreenID m_lastUnloadedScreen; // offset 0x114, size 0x4
    int m_shutdownStage; // offset 0x118, size 0x4
    class BitFlags m_nFlags; // offset 0x11C, size 0x4
    enum eCAFMode m_CAFMode; // offset 0x120, size 0x4
    class UIDialog m_UIDialog; // offset 0x124, size 0xA0
    enum eCAFDialogNavOptions m_DialogNavOption; // offset 0x1C4, size 0x4
    class StackString2 m_strFamilyName; // offset 0x1C8, size 0x208
    class CASTargetTSC6 * m_pCharacterTarget; // offset 0x3D0, size 0x4
    class K2YTarget * m_pK2YTarget; // offset 0x3D4, size 0x4
    class CasScene * m_pScene; // offset 0x3D8, size 0x4
    unsigned int m_filterId; // offset 0x3DC, size 0x4
    class PlumbBobModel * m_pSelector; // offset 0x3E0, size 0x4
    struct ELights m_plumbBobLight; // offset 0x3E4, size 0xF8
    struct TargetState m_TargetState; // offset 0x4DC, size 0x10
    enum eCAFUIMessage m_CAFUIState; // offset 0x4EC, size 0x4
private:
    class WiiMoteToGridInteractor m_WiiMoteToGridInteractor; // offset 0x4F0, size 0x30
    class CursorMovementTracker m_CursorTracker; // offset 0x520, size 0x50
    class EVec2 m_CursorPoint; // offset 0x570, size 0x8
};
unsigned int CAS_INGAME_ROOM_ID; // size: 0x4, address: 0x805DD264
class EVec3 kMirrorClothingCorners[4]; // size: 0x30, address: 0x8048C760
// total size: 0xB4
class CasSceneInGame : public CasScene {
    // Static members
    static float kMirrorFarPlaneDistance; // size: 0x4
    static float kMirrorNearPlaneDistance; // size: 0x4
    static float kMirrorFOV; // size: 0x4
    static float kSceneFarPlaneDistance; // size: 0x4
    static float kSceneNearPlaneDistance; // size: 0x4
    static float kSceneFOV; // size: 0x4
    static float kMirrorCornerOffset; // size: 0x4
    static unsigned int kMirrorPortalShaderID; // size: 0x4
    static unsigned int kMirrorModelID; // size: 0x4
    static class EVec3 kMirrorClothingCorners[4]; // size: 0x30
    static unsigned int CAS_INGAME_ROOM_ID; // size: 0x4

    // Members
    class ERModel * m_pMirrorModel; // offset 0xAC, size 0x4
    class EMirrorPortal * m_pMirrorPortal; // offset 0xB0, size 0x4
};
// total size: 0xAC
struct {} __vt__14CasSceneInGame; // size: 0xAC, address: 0x80425DF4
// total size: 0x2C
struct {} __vt__13SimImageMaker; // size: 0x2C, address: 0x80425EA0
// total size: 0x2C
struct {} __vt__19CharacterImageMaker; // size: 0x2C, address: 0x80425ECC
// total size: 0x10
struct {} __vt__26CasEventResetCharacterDraw; // size: 0x10, address: 0x80425EF8
// total size: 0xAC
struct {} __vt__15CasSceneDefault; // size: 0xAC, address: 0x80425F08
// total size: 0xC
struct {} __vt__12CasTweakTool; // size: 0xC, address: 0x80425FB4
// total size: 0x14
struct {} __vt__37SimpleReconObject<16UserDataSaveLoad>; // size: 0x14, address: 0x80425FC0
// total size: 0x98
struct {} __vt__12SimModelTSC6; // size: 0x98, address: 0x80425FD8
// total size: 0x10
struct {} __vt__14SimTexturePart; // size: 0x10, address: 0x80426070
// total size: 0x90
struct {} __vt__18SimModelPartUnused; // size: 0x90, address: 0x80426080
// total size: 0x90
struct {} __vt__19SimModelPartSleeves; // size: 0x90, address: 0x80426110
// total size: 0x90
struct {} __vt__26SimModelPartAddonLowerBody; // size: 0x90, address: 0x804261A0
// total size: 0x90
struct {} __vt__26SimModelPartAddonUpperBody; // size: 0x90, address: 0x80426230
// total size: 0x90
struct {} __vt__16SimModelPartBelt; // size: 0x90, address: 0x804262C0
// total size: 0x90
struct {} __vt__24SimModelPartArmAccessory; // size: 0x90, address: 0x80426350
// total size: 0x90
struct {} __vt__27SimModelPartNecklaceEarring; // size: 0x90, address: 0x804263E0
// total size: 0x90
struct {} __vt__15SimModelPartHat; // size: 0x90, address: 0x80426470
// total size: 0x90
struct {} __vt__17SimModelPartShoes; // size: 0x90, address: 0x80426500
// total size: 0x90
struct {} __vt__21SimModelPartLowerBody; // size: 0x90, address: 0x80426590
// total size: 0x90
struct {} __vt__17SimModelPartTorso; // size: 0x90, address: 0x80426620
// total size: 0x90
struct {} __vt__19SimModelPartGlasses; // size: 0x90, address: 0x804266B0
// total size: 0x90
struct {} __vt__16SimModelPartHair; // size: 0x90, address: 0x80426740
// total size: 0x90
struct {} __vt__25SimModelPartFacialFeature; // size: 0x90, address: 0x804267D0
// total size: 0x90
struct {} __vt__16SimModelPartHead; // size: 0x90, address: 0x80426860
// total size: 0x90
struct {} __vt__12SimModelPart; // size: 0x90, address: 0x804268F0
// total size: 0xC
struct {} __vt__16UserDataSaveLoad; // size: 0xC, address: 0x80426980
// total size: 0x34
struct {} __vt__12CasNpcEditor; // size: 0x34, address: 0x8042698C
// total size: 0x10
struct {} __vt__21CasEventInitCharacter; // size: 0x10, address: 0x804269C0
// total size: 0xAC
struct {} __vt__8CasScene; // size: 0xAC, address: 0x804269D0
// total size: 0x14
struct {} __vt__15IConsoleUnknown; // size: 0x14, address: 0x80426A7C
// total size: 0x34
struct {} __vt__14CasSimRenderer; // size: 0x34, address: 0x80426A90
// total size: 0x10
struct {} __vt__22CasEventMorphCharacter; // size: 0x10, address: 0x80426AC8
// total size: 0x34
struct {} __vt__11CasSimState; // size: 0x34, address: 0x80426AD8
// total size: 0xC
struct {} __vt__11CasMediator; // size: 0xC, address: 0x80426B0C
// total size: 0x114
struct {} __vt__17CasSimDescription; // size: 0x114, address: 0x80426B18
// total size: 0x10
struct {} __vt__23CasEventChangeCharacter; // size: 0x10, address: 0x80426C30
// total size: 0x128
struct {} __vt__17SimBodyPartUnused; // size: 0x128, address: 0x80426C40
// total size: 0x128
struct {} __vt__18SimBodyPartSleeves; // size: 0x128, address: 0x80426D68
// total size: 0x128
struct {} __vt__25SimBodyPartAddonLowerBody; // size: 0x128, address: 0x80426E90
// total size: 0x128
struct {} __vt__25SimBodyPartAddonUpperBody; // size: 0x128, address: 0x80426FB8
// total size: 0x128
struct {} __vt__15SimBodyPartBelt; // size: 0x128, address: 0x804270E0
// total size: 0x128
struct {} __vt__23SimBodyPartArmAccessory; // size: 0x128, address: 0x80427208
// total size: 0x128
struct {} __vt__26SimBodyPartNecklaceEarring; // size: 0x128, address: 0x80427330
// total size: 0x128
struct {} __vt__14SimBodyPartHat; // size: 0x128, address: 0x80427458
// total size: 0x128
struct {} __vt__16SimBodyPartShoes; // size: 0x128, address: 0x80427580
// total size: 0x128
struct {} __vt__20SimBodyPartLowerBody; // size: 0x128, address: 0x804276A8
// total size: 0x128
struct {} __vt__16SimBodyPartTorso; // size: 0x128, address: 0x804277D0
// total size: 0x128
struct {} __vt__18SimBodyPartGlasses; // size: 0x128, address: 0x804278F8
// total size: 0x128
struct {} __vt__15SimBodyPartHair; // size: 0x128, address: 0x80427A20
// total size: 0x128
struct {} __vt__24SimBodyPartFacialFeature; // size: 0x128, address: 0x80427B48
// total size: 0x128
struct {} __vt__15SimBodyPartHead; // size: 0x128, address: 0x80427C70
// total size: 0x128
struct {} __vt__11SimBodyPart; // size: 0x128, address: 0x80427D98
// total size: 0x34
struct {} __vt__11CasListener; // size: 0x34, address: 0x80427EC0
// total size: 0x10
struct {} __vt__8CasEvent; // size: 0x10, address: 0x80427EF8
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct ClothingSetIndexInfo * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct copy_backward_impl {};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class CasListener * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct fill_n_imp {};
// total size: 0x1
struct fill_imp {};
enum RoomId {
    ROOM_PREGAME = 0,
    ROOM_INGAME = 1,
    NUM_ROOMS = 2,
};
enum GameState {
    kGameState_Startup = 0,
    kGameState_MainMenu = 1,
    kGameState_Continue = 2,
    kGameState_StoryMode = 3,
    kGameState_FreePlay = 4,
    kGameState_Max = 5,
};
// total size: 0x8
class Panelstateman {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    enum Panelstate m_state; // offset 0x4, size 0x4
};
// total size: 0x30
class EMemoryMeterWin : public Panelstateman {
    // Members
public:
    float m_curPercent; // offset 0x8, size 0x4
    float m_calcPercent; // offset 0xC, size 0x4
private:
    float m_totalRamWeight; // offset 0x10, size 0x4
    int m_totalRam; // offset 0x14, size 0x4
    float m_totalWeight; // offset 0x18, size 0x4
    int m_totalObjects; // offset 0x1C, size 0x4
    float m_totalNodesWeight; // offset 0x20, size 0x4
    int m_totalNodes; // offset 0x24, size 0x4
    int m_totalStructures; // offset 0x28, size 0x4
    unsigned char m_skip; // offset 0x2C, size 0x1
};
// total size: 0xC
class Player {
    // Members
    class Neighbor * m_neighbor; // offset 0x0, size 0x4
    class FlashPiMenu * m_pPiMenu; // offset 0x4, size 0x4
    class ESimsCam * m_pCamera; // offset 0x8, size 0x4
};
// total size: 0xBC
class GameData {
    // Static members
    static float s_fStageTotal; // size: 0x4
    static float s_fStageDeltaActual[64]; // size: 0x100
    static float s_fStageDeltaRecip[64]; // size: 0x100
    static float s_fStageDelta[64]; // size: 0x100
    static int s_iWorstIterationStageEnd; // size: 0x4
    static int s_iWorstIterationStageStart; // size: 0x4
    static float s_fWorstIterationTime; // size: 0x4
    static float s_fScaleFactor; // size: 0x4
    static const float * s_pStageDelta; // size: 0x4
    static int s_iStageCntMax; // size: 0x4
    static int s_iStage; // size: 0x4
    static class QTimer s_frameTimer; // size: 0x8
    static class QTimer s_stageTimer; // size: 0x8

    // Members
public:
    enum GameState m_gameState; // offset 0x0, size 0x4
    class EMemoryMeterWin m_memoryMeterWin; // offset 0x4, size 0x30
    unsigned char m_bDrawBlackOneFrame; // offset 0x34, size 0x1
    unsigned char m_bWasCtrlOneUnplugged; // offset 0x35, size 0x1
    unsigned char m_bWasCtrlTwoUnplugged; // offset 0x36, size 0x1
    int m_iFamilyNum; // offset 0x38, size 0x4
    class CASTargetTSC6 * m_pCharacterTarget; // offset 0x3C, size 0x4
    class CAFTarget * m_pCAFTarget; // offset 0x40, size 0x4
    class HUDTarget * m_pHUDTarget; // offset 0x44, size 0x4
    class H2DTarget * m_pH2DTarget; // offset 0x48, size 0x4
    class M2MTarget * m_pM2MTarget; // offset 0x4C, size 0x4
    class MMUTarget * m_pMMUTarget; // offset 0x50, size 0x4
    class EALTarget * m_pEALTarget; // offset 0x54, size 0x4
    class PAZTarget * m_pPAZTarget; // offset 0x58, size 0x4
    class UIObjectBase * m_pPDSTarget; // offset 0x5C, size 0x4
    class EFamilyConstructData * m_pFamilyConstructData; // offset 0x60, size 0x4
    unsigned char m_bAuthorModeSaveDuringTransitions; // offset 0x64, size 0x1
    unsigned char m_bLoadDefaultNeighborhood; // offset 0x65, size 0x1
    unsigned char m_bPreDrawStatus; // offset 0x66, size 0x1
    unsigned char m_bInLevel; // offset 0x67, size 0x1
    unsigned char m_bInGamePlay; // offset 0x68, size 0x1
    unsigned char m_bQuitGamePlay; // offset 0x69, size 0x1
    unsigned char m_bInTransition; // offset 0x6A, size 0x1
    unsigned char m_bMUQuitBackToMainMenu; // offset 0x6B, size 0x1
    unsigned char m_bQuittingToMainMenu; // offset 0x6C, size 0x1
    unsigned char m_bFreePlayUnlocked; // offset 0x6D, size 0x1
    unsigned char m_bUpdateWalls; // offset 0x6E, size 0x1
    class ELiveMode * m_pLiveMode; // offset 0x70, size 0x4
    unsigned char m_bCenterOnSelected; // offset 0x74, size 0x1
    int m_iCenterOnSelectedDelayFrames; // offset 0x78, size 0x4
    int m_initialSim; // offset 0x7C, size 0x4
    int m_selectedFamily; // offset 0x80, size 0x4
    class QTimer m_qtimer; // offset 0x84, size 0x8
    unsigned char m_SimSwitcherLockout; // offset 0x8C, size 0x1
    int m_CraftingMode; // offset 0x90, size 0x4
private:
    unsigned char m_bAuthorMode; // offset 0x94, size 0x1
    unsigned char m_bBuildBuyMode; // offset 0x95, size 0x1
    class Player m_player; // offset 0x98, size 0xC
    unsigned int m_copyrightFlags; // offset 0xA4, size 0x4
    float m_copyrightAlpha; // offset 0xA8, size 0x4
    class QTimer m_copyrightTimer; // offset 0xAC, size 0x8
    unsigned int m_bCtrlDisableBits; // offset 0xB4, size 0x4
    int m_BuildBuyPlayer; // offset 0xB8, size 0x4
};
// total size: 0x10
class SimLightingTuning {
    // Members
    float m_simBrightness; // offset 0x0, size 0x4
    float m_simContrast; // offset 0x4, size 0x4
    float m_simEdgeLightIntensity; // offset 0x8, size 0x4
    float m_simAmbientMinimum; // offset 0xC, size 0x4
};
// total size: 0x14
class FileCreator {
    // Members
    class EFile * (* m_creatorCB)(class EFile *, char *, char *, enum DeviceType, enum AccessMode, unsigned int); // offset 0x0, size 0x4
    enum DeviceType m_device; // offset 0x4, size 0x4
    enum IOMode m_ioMode; // offset 0x8, size 0x4
    enum AccessMode m_accMode; // offset 0xC, size 0x4
    char m_ext[4]; // offset 0x10, size 0x4
};
// total size: 0xC
class TArray {
    // Members
protected:
    class FileCreator * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
enum HDDStatusFlags {
    HDD_STAT_NO_SPACE_FOR_YOURSAVE_FILES = 0,
    HDD_STAT_NO_SPACE_FOR_YOURSAVE_DIR = 1,
    HDD_STAT_NO_SPACE_FOR_YOURSAVE_ZONES = 2,
    HDD_STAT_UNFORMATTED = 3,
    HDD_STAT_NO_DRIVER = 4,
    HDD_STAT_NO_DEVICE = 5,
    HDD_STAT_HDD_LOCKED = 6,
    HDD_STAT_IO_ERROR = 7,
    HDD_STAT_FILESYSTEM_CORRUPT = 8,
    HDD_STAT_NO_SPACE = 9,
    HDD_STAT_NO_FILES = 10,
    HDD_STAT_READY = 11,
};
// total size: 0x28
class EFileSystem : public EGlobalManagerClient {
    // Members
protected:
    class TArray m_creators; // offset 0x4, size 0xC
    enum DeviceType m_eDefaultDeviceType; // offset 0x10, size 0x4
    unsigned char m_initialized; // offset 0x14, size 0x1
    enum HDDStatusFlags m_hddStatus; // offset 0x18, size 0x4
    enum HDDStatusFlags m_hddTmpStatus; // offset 0x1C, size 0x4
    enum HDDStatusFlags m_hddSaveStatus; // offset 0x20, size 0x4
    class vector * m_pFilesToCloseOnReset; // offset 0x24, size 0x4
};
// total size: 0x28
class ENgcFileSystem : public EFileSystem {};
// total size: 0x8
struct aptFilterStackEntry {
    // Members
    unsigned int filterId; // offset 0x0, size 0x4
    const char * targetName; // offset 0x4, size 0x4
};
// total size: 0x8
class AddDirectionToQue {
    // Members
public:
    unsigned char bAddVar; // offset 0x0, size 0x1
    int controllerNum; // offset 0x4, size 0x4
};
// total size: 0x430
class AptViewer {
    // Static members
    static int repeatCount[4]; // size: 0x10
    static int repeatRate[4]; // size: 0x10
    static float repeatSeconds; // size: 0x4

    // Members
protected:
    class E3DWindow m_win; // offset 0x0, size 0x358
    unsigned char m_bAnimLoaded; // offset 0x358, size 0x1
    unsigned char m_bWindowCorrectSize; // offset 0x359, size 0x1
    class EMutex m_mutex; // offset 0x35C, size 0x1C
    class EClock * m_pClock; // offset 0x378, size 0x4
    float m_startTime; // offset 0x37C, size 0x4
    float m_repeatTime; // offset 0x380, size 0x4
    char m_loadedFile[32]; // offset 0x384, size 0x20
    unsigned char m_bInitialized; // offset 0x3A4, size 0x1
    unsigned char m_bReadController; // offset 0x3A5, size 0x1
    unsigned char m_bAllowFilters; // offset 0x3A6, size 0x1
    unsigned char m_bAnalogOnlyNavigation; // offset 0x3A7, size 0x1
    int m_unmappedControllerPlayer; // offset 0x3A8, size 0x4
    struct aptFilterStackEntry m_aptFilterStack[10]; // offset 0x3AC, size 0x50
    int m_topOfAptFilterStack; // offset 0x3FC, size 0x4
    int m_ViewportLeft; // offset 0x400, size 0x4
    int m_ViewportRight; // offset 0x404, size 0x4
    int m_ViewportTop; // offset 0x408, size 0x4
    int m_ViewportBottom; // offset 0x40C, size 0x4
    class AddDirectionToQue m_AddUpToQue; // offset 0x410, size 0x8
    class AddDirectionToQue m_AddDownToQue; // offset 0x418, size 0x8
    class AddDirectionToQue m_AddLeftToQue; // offset 0x420, size 0x8
    class AddDirectionToQue m_AddRightToQue; // offset 0x428, size 0x8
};
// total size: 0xA4
class UIDBTarget : public UIObjectBase {};
enum eUIDBDataType {
    eUIDBInt = 105,
    eUIDBFloat = 102,
    eUIDBString = 115,
    eUIDBNone = 0,
};
union /* @class$27159game_cas_unity_cpp */ {
    int idata; // offset 0x0, size 0x4
    float fdata; // offset 0x0, size 0x4
    unsigned short * sdata; // offset 0x0, size 0x4
};
// total size: 0xC
struct UIDBData {
    // Members
    char * name; // offset 0x0, size 0x4
    enum eUIDBDataType type; // offset 0x4, size 0x4
    union { // inferred
        union /* @class$27159game_cas_unity_cpp */ {
            int idata; // offset 0x0, size 0x4
            float fdata; // offset 0x0, size 0x4
            unsigned short * sdata; // offset 0x0, size 0x4
        } __anon$27160; // offset 0x8, size 0x4
        int idata; // offset 0x8, size 0x4
        float fdata; // offset 0x8, size 0x4
        unsigned short * sdata; // offset 0x8, size 0x4
    };
};

