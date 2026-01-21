/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\sanimator2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80007DDC -> 0x800168D0
*/
// Range: 0x80007DDC -> 0x80007DFC
static int GetSimIndex() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80007DFC -> 0x80007EC8
static void HandleEffectNote(const struct EAnimNote & event /* r29 */, enum PropKind noteType /* r30 */) {
    // Local variables
    int playerId; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80007EC8 -> 0x80008278
// this: r29
SAnimator2::SAnimator2() {
    // Local variables
    int i; // r30
    int i; // r0
    int j; // r0

    // References
    // -> float kRoutingSidestepVelocity;
    // -> struct [anonymous] __vt__10SAnimator2;
}

// Range: 0x80008278 -> 0x800084B8
// this: r30
SAnimator2::~SAnimator2() {
    // Local variables
    class CasSimDescription & currentSimDesc; // r0

    // References
    // -> class EAnimManager _animman;
    // -> class ESimsDataManager _simsdataman;
    // -> struct [anonymous] __vt__10SAnimator2;
}

// Range: 0x800084B8 -> 0x800085D0
// this: r30
unsigned char SAnimator2::Initialize() {}

// Range: 0x800085D0 -> 0x800085D4
void SAnimator2::SetIsRaining() {}

// Range: 0x800085D4 -> 0x800085D8
void SAnimator2::Render() {}

// Range: 0x800085D8 -> 0x80008698
// this: r31
enum TreeReturnCode SAnimator2::TryChangeSuit() {
    // Local variables
    const struct NPC * pServiceNPC; // r0
}

// Range: 0x80008698 -> 0x80008704
// this: r31
void SAnimator2::checkParticleCleanup() {}

// Range: 0x80008704 -> 0x80008A14
// this: r31
void SAnimator2::updateFreeMoveState() {
    // Local variables
    float DeltaTime; // f31
    float fDeltaDir; // f30
    class cSoundPlayer * sndPlayer; // r30
    class EACTrack * pOutgoingTrack; // r0

    // References
    // -> float _dt;
}

// Range: 0x80008A14 -> 0x80008B18
// this: r31
enum eLocomotionState SAnimator2::GetCurrentLocomotionState() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80008B18 -> 0x80008B60
// this: r31
void SAnimator2::EndWaterParticleEffect() {}

// Range: 0x80008B60 -> 0x80008CBC
// this: r31
void SAnimator2::SpawnWaterParticleEffect() {
    // Local variables
    class REffectsAttachment * pParticleInfo; // r29
    const struct AttachmentNode & node; // r28
    struct AnimParticleData data; // r1+0x8

    // References
    // -> unsigned char kSendEmitterPosToForeground;
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x80008CBC -> 0x80008D7C
// this: r31
void SAnimator2::updateMovementState() {
    // Local variables
    enum eLocomotionState curState; // r0
}

// Range: 0x80008D7C -> 0x80008E20
// this: r31
void SAnimator2::Update() {}

// Range: 0x80008E20 -> 0x80008E7C
// this: r31
void SAnimator2::UpdateCheckDrawCurtain() {}

// Range: 0x80008E7C -> 0x80008F28
// this: r30
void SAnimator2::UpdateSetTimeMultiplier() {}

// Range: 0x80008F28 -> 0x8000918C
// this: r31
void SAnimator2::UpdateProcessSkillEvents() {
    // Local variables
    float fTickUpdateTime; // f31
    class ERAnim * pAnim; // r0
    int duration; // r30
    int interval; // r29
    int interval; // r29

    // References
    // -> class EAnimManager _animman;
    // -> float _dt;
}

// Range: 0x8000918C -> 0x800091D8
// this: r31
void SAnimator2::adjustAnimationPlayRates() {}

// Range: 0x800091D8 -> 0x800092DC
// this: r29
void SAnimator2::Reset() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x800092DC -> 0x80009340
// this: r31
void SAnimator2::ClearLowMotivePendingAnim() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80009340 -> 0x80009344
void SAnimator2::ResetSuits() {}

// Range: 0x80009344 -> 0x80009350
void SAnimator2::SnapToGrid() {}

// Range: 0x80009350 -> 0x80009360
void SAnimator2::ForceLocation() {}

// Range: 0x80009360 -> 0x8000954C
// this: r26
enum TreeReturnCode SAnimator2::resolveSkillForPrimitive(class StackElem * elem /* r31 */, const class IdleAnimateParam * param /* r27 */, const struct AnimRef * & theSkill /* r28 */, unsigned char & scale /* r29 */) {
    // Local variables
    class cXObject * obj; // r31
    signed short animID; // r30
    unsigned char useSocialTable; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8000954C -> 0x80009728
// this: r26
enum TreeReturnCode SAnimator2::resolveSkillForPrimitive(class StackElem * elem /* r27 */, const class AnimateNewParam * param /* r28 */, const struct AnimRef * & theSkill /* r29 */, unsigned char & scale /* r30 */) {
    // Local variables
    class cXObject * obj; // r3
    signed short animID; // r31

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80009728 -> 0x800097E0
// this: r28
enum TreeReturnCode SAnimator2::loadSkillAnim(const struct AnimRef * skill /* r29 */) {
    // Local variables
    unsigned int animID; // r30

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x800097E0 -> 0x80009AF8
// this: r29
enum TreeReturnCode SAnimator2::TryIdleAnimate(class StackElem * elem /* r27 */, class IdleAnimateParam * param /* r30 */) {
    // Local variables
    signed short animID; // r28
    enum TreeReturnCode code; // r31
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r0
    const struct AnimRef * skill; // r1+0x10
    float animPosOverride; // r1+0xC
    unsigned char bResetEventCount; // r28
    class EACTrack * pTrack; // r0

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80009AF8 -> 0x80009CB8
// this: r27
enum TreeReturnCode SAnimator2::SelectAlgorithmicIdle(const struct AnimRef * & skill /* r28 */, unsigned char & scale /* r29 */) {
    // Local variables
    enum TreeReturnCode code; // r3
    int desiredAnim; // r30

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80009CB8 -> 0x80009F14
// this: r26
enum TreeReturnCode SAnimator2::TryAnimate(class StackElem * elem /* r27 */, const class AnimateNewParam * param /* r28 */) {
    // Local variables
    enum TreeReturnCode result; // r1+0x14
    int eventNumber; // r1+0x10
    unsigned char overrideCarry; // r30
    const struct AnimRef * skill; // r1+0xC
    int behavior; // r0
    unsigned char shouldReturn; // r1+0x8
    signed short animID; // r29
}

// Range: 0x80009F14 -> 0x80009F18
void SAnimator2::SetAnimDisplacements() {}

// Range: 0x80009F18 -> 0x8000A0C8
// this: r29
void SAnimator2::BeginFollow(float routeDistance /* f31 */) {
    // Local variables
    enum eFollowMode followMode; // r30
    int x; // r0
    int y; // r0
    float z; // f0

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8000A0C8 -> 0x8000A1AC
// this: r31
void SAnimator2::determineWalkRunStyle(float routeDistance /* f31 */) {
    // Local variables
    enum eWalkRunStyle runWalkStyle; // r3
}

// Range: 0x8000A1AC -> 0x8000A1D0
enum eFollowMode SAnimator2::determineFirstFollowMode() {}

// Range: 0x8000A1D0 -> 0x8000A354
// this: r27
enum TreeReturnCode SAnimator2::FollowOneStep() {
    // Local variables
    enum TreeReturnCode result; // r29
    class FTilePt goal; // r1+0x8
    int oldX; // r0
    int oldY; // r0
    int level; // r28
}

// Range: 0x8000A354 -> 0x8000A438
// this: r30
unsigned char SAnimator2::EndFollow() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x8000A438 -> 0x8000A5A4
// this: r29
void SAnimator2::StartDefaultIdle() {
    // Local variables
    class EACTrack * pTrack; // r31
    int desiredAnim; // r30
    const struct AnimRef * SkillId; // r1+0xC
    int lowMotive; // r0
    unsigned char scale; // r1+0x8

    // References
    // -> float kBlendToDefaultIdle;
    // -> class EAnimManager _animman;
}

// Range: 0x8000A5A4 -> 0x8000A604
void SAnimator2::SetIdleAnimPlaybackParameters(class EACTrack * pTrack /* r31 */) {}

// Range: 0x8000A604 -> 0x8000A618
int SAnimator2::IsFollowing() {}

// Range: 0x8000A618 -> 0x8000A620
int SAnimator2::IsInterruptable() {}

// Range: 0x8000A620 -> 0x8000A6B0
// this: r29
int SAnimator2::DequeueAnimEvent(int * number /* r30 */) {
    // Local variables
    int result; // r31
    int qsize; // r0
}

// Range: 0x8000A6B0 -> 0x8000A9C8
// this: r30
void SAnimator2::ReconStream(class ReconBuffer * r /* r31 */, int version /* r27 */) {
    // Local variables
    signed short count; // r1+0xE
    int i; // r28
    struct EPropItem * pNew; // r1+0x1C
    unsigned char WasAnimating; // r1+0xA
    float AnimInterval; // r1+0x18
    int AnimDuration; // r1+0x14
    int EventCount; // r1+0x10
    unsigned char bStreamNonCostumedSimDesc; // r1+0x9
    signed short count; // r1+0xC
    int i; // r28
    struct EPropItem * pItem; // r29
    unsigned char bStreamNonCostumedSimDesc; // r1+0x8

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8000A9C8 -> 0x8000AA64
// this: r29
void SAnimator2::Dress(const struct PropRef * pProp /* r30 */) {
    // Local variables
    unsigned int id; // r31
}

// Range: 0x8000AA64 -> 0x8000AAEC
// this: r29
void SAnimator2::AddProp(unsigned int id /* r30 */, unsigned char bShowInWindow /* r31 */) {
    // Local variables
    struct EPropItem * Prop; // r1+0x8

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8000AAEC -> 0x8000AB70
// this: r30
void SAnimator2::RemoveProp(unsigned int id /* r31 */) {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8000AB70 -> 0x8000ABCC
unsigned char SAnimator2::PreloadDress(const struct PropRef * pProp /* r31 */) {
    // Local variables
    unsigned int id; // r4

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8000ABCC -> 0x8000AC40
// this: r30
void SAnimator2::Undress(const struct PropRef * pProp /* r31 */) {
    // Local variables
    unsigned int id; // r0
    int index; // r4
}

// Range: 0x8000AC40 -> 0x8000AC68
int SAnimator2::getPersonX() {}

// Range: 0x8000AC68 -> 0x8000AC90
int SAnimator2::getPersonY() {}

// Range: 0x8000AC90 -> 0x8000AD08
// this: r30
float SAnimator2::getPersonZ() {
    // Local variables
    float zOffset; // f31
    class cXObject * pContainer; // r31
    class ObjectSlot * pSlot; // r0
}

// Range: 0x8000AD08 -> 0x8000AD54
// this: r31
void SAnimator2::DetachMonitoredTrack() {
    // References
    // -> float kFastRemoveBlendTime;
}

// Range: 0x8000AD54 -> 0x8000ADC0
// this: r31
void SAnimator2::setFirstFollowMode() {}

// Range: 0x8000ADC0 -> 0x8000AE00
void SAnimator2::setFollowDone() {}

// Range: 0x8000AE00 -> 0x8000B058
// this: r30
unsigned char SAnimator2::endFollowDone() {
    // Local variables
    int size; // r0
    class EACTrack * pTrack; // r29
    int desiredAnim; // r29
    const struct AnimRef * SkillId; // r1+0x10
    unsigned char scale; // r1+0x8
    class EACTrack * pOldTrack; // r1+0xC
    float blendtime; // f0

    // References
    // -> float kDefaultBlendTime;
}

// Range: 0x8000B058 -> 0x8000B0F8
// this: r29
unsigned char SAnimator2::followStandToTurnUpdate(float & DesiredDir /* r30 */, float & DeltaDir /* r31 */, float DeltaTime /* f31 */) {
    // Local variables
    unsigned char bRetVal; // r0
}

// Range: 0x8000B0F8 -> 0x8000B2DC
// this: r27
unsigned char SAnimator2::followSidestepUpdate(float & DesiredDir /* r28 */, float & DeltaDir /* r29 */, float DeltaTime /* r1+0x8 */) {
    // Local variables
    unsigned char bRetVal; // r30
    int size; // r0

    // References
    // -> float kSidestepStopMotionTrackPos;
    // -> float kSidestepStartMotionTrackPos;
}

// Range: 0x8000B2DC -> 0x8000B5DC
// this: r30
void SAnimator2::SetMovingTurnRate(float deltaDir /* f31 */) {
    // Local variables
    class EVec2 dist; // r1+0x8
    float cos2Theta; // f0
    float maxRadiusToTarget; // f0
    float minAngularVelocity; // f0
    float movementVel; // f0
    float minActualVelocity; // f0
    float newRadius; // f30
    float blendFactor; // f1
}

// Range: 0x8000B5DC -> 0x8000B710
// this: r26
unsigned char SAnimator2::followMiddleUpdate(float & DesiredDir /* r27 */, float & DeltaDir /* r28 */, float DeltaTime /* r1+0x8 */) {
    // Local variables
    unsigned char bRetVal; // r30
    int size; // r29
}

// Range: 0x8000B710 -> 0x8000B7B4
// this: r29
unsigned char SAnimator2::followMoveToTurnUpdate(float & DesiredDir /* r30 */, float & DeltaDir /* r31 */, float DeltaTime /* f31 */) {
    // Local variables
    unsigned char bRetVal; // r0
}

// Range: 0x8000B7B4 -> 0x8000B864
// this: r29
unsigned char SAnimator2::followDoneUpdate(float & DesiredDir /* r30 */, float & DeltaDir /* r31 */, float DeltaTime /* f31 */) {
    // Local variables
    unsigned char bRetVal; // r0
}

// Range: 0x8000B864 -> 0x8000B9A4
// this: r29
void SAnimator2::endMoveAnimation() {
    // Local variables
    class FTilePt goal; // r1+0x8
    int level; // r30
    int size; // r0
    unsigned char bCanPlace; // r0
}

// Range: 0x8000B9A4 -> 0x8000BB1C
// this: r31
void SAnimator2::UpdatePortalMode() {
    // Local variables
    int rsSize; // r0
    int size; // r0
    class FTilePt ptLast; // r1+0x10
    class CTilePt cptLast; // r1+0x8
    int curRoomID; // r30
    class Room * curRoom; // r0
}

// Range: 0x8000BB1C -> 0x8000BE3C
// this: r28
void SAnimator2::moveAnimation() {
    // Local variables
    float DesiredDir; // r1+0xC
    float DeltaDir; // r1+0x8
    unsigned char bContinueMove; // r30
    unsigned char ShuffleRotationDone; // r29
    float DeltaTime; // f30
    int size; // r0

    // References
    // -> float _dt;
}

// Range: 0x8000BE3C -> 0x8000BE64
void SAnimator2::setFollowMiddle() {}

// Range: 0x8000BE64 -> 0x8000BEBC
// this: r29
void SAnimator2::updateDesiredAndDeltaDir(float & DesiredDir /* r30 */, float & DeltaDir /* r31 */) {}

// Range: 0x8000BEBC -> 0x8000BEF8
void SAnimator2::setFollowEnd() {}

// Range: 0x8000BEF8 -> 0x8000C154
// this: r30
void SAnimator2::awarenessMove() {
    // Local variables
    float DeltaDir; // r1+0x8
    unsigned char bContinueMove; // r31
    float DeltaTime; // f30
    class FTilePt goal; // r1+0x10
    int level; // r31

    // References
    // -> float _dt;
}

// Range: 0x8000C154 -> 0x8000C3CC
// this: r29
void SAnimator2::setMovementVelocityFromAnimation() {
    // Local variables
    int trans; // r4
    class EVec3 vTrans; // r1+0x1C
    float duration; // f31
    float distance; // f1
    class EACTrack tempTrack; // r1+0x28
    const struct AnimRef * SkillId; // r1+0xC
    class EAnimNodeDataPos * pNodeDataPos; // r0
    struct EACTrackNodeStreams * pStreams; // r5
    class ERAnim * animPointer; // r26
    float * pVelocity; // r31
    unsigned int valueFlag; // r30
    unsigned char scale; // r1+0x8

    // References
    // -> float kMinWalkAnimDistance;
    // -> class EAnimManager _animman;
}

// Range: 0x8000C440 -> 0x8000C484
float SAnimator2::getAnimDuration() {
    // Local variables
    float duration; // f1
}

// Range: 0x8000C484 -> 0x8000C534
// this: r31
void SAnimator2::initShuffleRotation(float DeltaDir /* f30 */) {
    // Local variables
    float animDurationInSeconds; // f0
}

// Range: 0x8000C534 -> 0x8000C720
// this: r26
float SAnimator2::setRotationRateFromShuffleDir(int ShuffleDir /* r27 */) {
    // Local variables
    unsigned int valueFlag; // r30
    unsigned int turnVelocityIndex; // r29
    unsigned int turnStartEndIndex; // r28
    float fAngle; // f0
    float animDuration; // f0
    class ERAnim * animPointer; // r25
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char isMirrored; // r1+0x9
    unsigned char scale; // r1+0x8

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8000C720 -> 0x8000C7BC
int SAnimator2::getShuffleDirFromDeltaDir() {
    // Local variables
    int ShuffleDir; // r3
    int tmpDir; // r0
}

// Range: 0x8000C7BC -> 0x8000C83C
float SAnimator2::getDeltaDirFromDesiredDir() {
    // Local variables
    float DeltaDir; // f31
}

// Range: 0x8000C83C -> 0x8000CAB8
// this: r31
float SAnimator2::getDesiredDir() {
    // Local variables
    float DesiredDir; // f1
    class EVec2 TempVec; // r1+0x8
}

// Range: 0x8000CAB8 -> 0x8000CBCC
// this: r31
float SAnimator2::GetTurnRate() {
    // Local variables
    float TurnRate; // f0

    // References
    // -> float kFreeMoveMovingTurnRate;
    // -> float kFreeMoveStandingTurnRate;
}

// Range: 0x8000CBCC -> 0x8000CE9C
// this: r30
unsigned char SAnimator2::rotateAnimation(float DeltaTime /* f30 */, float DesiredDir /* f31 */, float DeltaDir /* f29 */) {
    // Local variables
    unsigned char bRetVal; // r31
    float TurnRate; // f0
    float DeltaMovement; // f30
    float RotateDirection; // f0
    unsigned char bRetVal; // r31
    float TurnRate; // f0
    float DeltaMovement; // f30
    float RotateDirection; // f0
}

// Range: 0x8000CE9C -> 0x8000D080
// this: r29
void SAnimator2::sidestepAlongNode(float & DeltaTime /* r30 */) {
    // Local variables
    class EVec2 Target; // r1+0x20
    float Velocity; // f30
    class EVec2 DirectionVec; // r1+0x18
    float Dist; // f0
    float TempY; // f30
    class EVec2 tmp; // r1+0x10
}

// Range: 0x8000D080 -> 0x8000D1C0
// this: r28
void SAnimator2::advanceAlongNode(float & DeltaTime /* r29 */) {
    // Local variables
    class EVec2 Target; // r1+0x8
    int x; // r30
    int y; // r0
}

// Range: 0x8000D1C0 -> 0x8000D27C
// this: r31
float SAnimator2::GetWalkRunIntensityRatio() {
    // Local variables
    float runVel; // f30
    float walkVel; // f1
    float deltaVel; // f2
    float intensity; // f1
}

// Range: 0x8000D27C -> 0x8000D30C
// this: r31
void SAnimator2::UpdateWalkRunStyleForMovingTurns() {
    // Local variables
    float intensity; // f0
}

// Range: 0x8000D30C -> 0x8000D37C
// this: r31
void SAnimator2::UpdateWalkRunMonitoredTrack() {}

// Range: 0x8000D37C -> 0x8000D384
float SAnimator2::GetWalkToRunDistance() {}

// Range: 0x8000D384 -> 0x8000D38C
float SAnimator2::GetRunToWalkDistance() {}

// Range: 0x8000D38C -> 0x8000D680
// this: r31
void SAnimator2::UpdateWalkRunAnimation() {
    // Local variables
    int dx1; // r30
    int dy1; // r29
    int dx2; // r28
    int dy2; // r29
    float distanceFromOrigin; // f0
    float distanceFromTarget; // f0
    float runDistance; // f0
    float runToWalkDistance; // f0
    enum eWalkRunStyle style; // r3
    int destListSize; // r0
    unsigned char switchToWalk; // r28
    int dx; // r29
    int dy; // r0
    float distanceOfLastSegment; // f0
}

// Range: 0x8000D680 -> 0x8000D81C
// this: r31
float SAnimator2::getUseSpeed(float maxSpeed /* f31 */, float dist /* f26 */, float deltaTime /* f27 */) {
    // Local variables
    float acc; // f30
    float ThresholdDist; // f29
    float UseSpeed; // f28
    float tempnum; // f1
    float ratio; // f1
}

// Range: 0x8000D81C -> 0x8000D964
// this: r30
void SAnimator2::EnableWalkFade(unsigned int & uFlags /* r31 */, float dist /* f29 */, float maxSpeed /* f30 */, float rampUpTime /* f31 */) {
    // Local variables
    int size; // r0
    float acc; // f3
    float thresholdDist; // f4
    float actualRatio; // f1
}

// Range: 0x8000D964 -> 0x8000DC18
// this: r29
void SAnimator2::moveTowardsDestination(float & DeltaTime /* r30 */, class EVec2 & Target /* r31 */) {
    // Local variables
    float MaxVelocity; // f31
    class EVec2 DirectionVec; // r1+0x18
    float Dist; // f29
    float RampupTime; // f2
    float FadeTime; // f28
    float rampupFactor; // f3
    float UseSpeed; // f0
    float TempY; // f28
    class EVec2 tmp; // r1+0x10
}

// Range: 0x8000DC18 -> 0x8000DE44
// this: r30
void SAnimator2::setAnimationState() {
    // Local variables
    enum eAnimState newAnimState; // r31
    int iCurrIdleState; // r3
}

// Range: 0x8000DE44 -> 0x8000E148
// this: r29
void SAnimator2::updateRenderAnimation() {
    // Local variables
    int x; // r0
    int y; // r0
    float z; // f0
    float fTerrainOffset; // f31
    class EVec3 vPos; // r1+0xC
    float elevation; // r1+0x8
    class cXObject * pContainer; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8000E148 -> 0x8000E2D0
// this: r27
void SAnimator2::updateParticles() {
    // Local variables
    class RBIteratorPtrType * i; // r30
    class TRedBlackTree * pList; // r0
    class RBIteratorPtrType * i2; // r29
    class EBoneParticle * pValue; // r28
    struct ClientParams & params; // r0
    class TRedBlackTree * pList; // r0
    class RBIteratorPtrType * i2; // r28
    class EBoneParticle * pValue; // r29
    struct ClientParams & params; // r0
    struct ClientParams & params; // r0
}

// Range: 0x8000E2D0 -> 0x8000E300
float SAnimator2::GetMotiveMag(float val /* f2 */) {
    // Local variables
    float mag; // f0
}

// Range: 0x8000E300 -> 0x8000E37C
enum SurfaceType SAnimator2::GetSurfaceType() {}

// Range: 0x8000E37C -> 0x8000E508
// this: r26
void SAnimator2::playFootprint(const char * anim_event /* r27 */) {
    // Local variables
    enum SurfaceType surfaceType; // r0
    enum ShoeType shoeType; // r0
    class SimBodyPart * pShoes; // r28
    char footstepId[256]; // r1+0x8

    // References
    // -> char * m_shoeTypeTable[4];
    // -> char * m_surfaceTypeTable[10];
}

// Range: 0x8000E508 -> 0x8000E5E4
float SAnimator2::GetAnimationTurnAngle(int m_ShuffleDir /* r30 */) {}

// Range: 0x8000E5E4 -> 0x8000E820
// this: r28
void SAnimator2::getTurnSkillID(const struct AnimRef * & SkillId /* r29 */, int ShuffleDir /* r27 */, unsigned char & isMirrored /* r30 */, unsigned char & scale /* r31 */) {}

// Range: 0x8000E820 -> 0x8000EB44
// this: r29
void SAnimator2::getWalkRunSkillID(const struct AnimRef * & SkillId /* r30 */, unsigned char & scale /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8000EB44 -> 0x8000EC18
// this: r31
void SAnimator2::UpdateNPCAutoRun() {
    // Local variables
    float pos; // f31
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r0

    // References
    // -> float kWalkRunBlendTime;
}

// Range: 0x8000EC18 -> 0x8000ECB4
// this: r30
unsigned char SAnimator2::UpdateNPCAutoRunState() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x8000ECB4 -> 0x8000ED18
// this: r30
void SAnimator2::SetupWalkRunCurveBlendTrack(class EACTrack * pTrack /* r31 */) {
    // Local variables
    float trackPos; // f0
}

// Range: 0x8000ED18 -> 0x8000ED38
void SAnimator2::handleSidestepAnimation() {}

// Range: 0x8000ED38 -> 0x8000EEF8
// this: r31
void SAnimator2::initSidestep() {
    // Local variables
    float intensity; // f31
    const struct AnimRef * ForwardSkillID; // r1+0x10
    const struct AnimRef * SideSkillID; // r1+0xC
    class EACTrack * pTrack; // r0
    unsigned char fwdScale; // r1+0x9
    unsigned char sideScale; // r1+0x8

    // References
    // -> float kRoutingSidestepVelocity;
    // -> float kSidestepBlendTime;
}

// Range: 0x8000EEF8 -> 0x8000EF44
float SAnimator2::getSidestepIntensity() {
    // Local variables
    float intensity; // f1
}

// Range: 0x8000EF44 -> 0x8000F100
// this: r29
void SAnimator2::setSideStepSpeedFromAnimation(const struct AnimRef * SkillId /* r30 */) {
    // Local variables
    class EAnimNodeDataPos * pNodeDataPos; // r0
    struct EACTrackNodeStreams * pStreams; // r5
    int trans; // r4
    class EVec3 vTrans; // r1+0x14
    float duration; // f31
    float distance; // f0
    class EACTrack tempTrack; // r1+0x20
    class ERAnim * animPointer; // r30

    // References
    // -> float kMinWalkAnimDistance;
    // -> float kSidestepStartMotionTrackPos;
    // -> float kSidestepStopMotionTrackPos;
    // -> class EAnimManager _animman;
}

// Range: 0x8000F100 -> 0x8000F21C
// this: r28
void SAnimator2::getSidestepSkillIDs(const struct AnimRef * & ForwardSkillID /* r29 */, unsigned char & fwdScale /* r30 */) {
    // Local variables
    unsigned char bForward; // r31
    unsigned char bRight; // r0
}

// Range: 0x8000F21C -> 0x8000F4F8
// this: r31
void SAnimator2::handleWalkRunAnimation() {
    // Local variables
    float intensity; // f0
    float fVelocityRatio; // f1
}

// Range: 0x8000F4F8 -> 0x8000F5AC
// this: r31
void SAnimator2::initWalkRunFadeOut() {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x10
    class EACTrack * pTrack; // r1+0xC
    unsigned char scale; // r1+0x8
    class EACTrack * pNewTrack; // r0
}

// Range: 0x8000F5AC -> 0x8000F8C8
// this: r31
void SAnimator2::initWalkRun() {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x14
    class EACTrack * pTrack; // r1+0x10
    unsigned char scale; // r1+0x9
    const struct AnimRef * name; // r1+0xC
    unsigned char motionScale; // r1+0x8
    class EACTrack * pNewTrack; // r30
    class EACTrack * pSlaveTrack; // r29
    float blendDuration; // f31

    // References
    // -> float kDefaultBlendTime;
}

// Range: 0x8000F8C8 -> 0x8000F964
// this: r29
void SAnimator2::getMotionCurveSkillID(const struct AnimRef * & SkillId /* r30 */, unsigned char & scale /* r31 */) {}

// Range: 0x8000F964 -> 0x8000FB5C
// this: r28
void SAnimator2::CheckCollision(class EVec2 & startPosSimCoords /* r30 */, class EVec2 & endPosSimCoords /* r29 */) {
    // Local variables
    class EVec2 stopPos; // r1+0x18
    float simCollisionRadius; // f31
    class EVec2 startPosWorldCoords; // r1+0x10
    class EVec2 endPosWorldCoords; // r1+0x8
    unsigned char bGhost; // r30

    // References
    // -> float s_simRadius;
}

// Range: 0x8000FB5C -> 0x8001002C
// this: r31
void SAnimator2::handleFreeMoveWalkRunAnimation() {
    // Local variables
    class EVec3 lastPosition; // r1+0x40
    enum eWalkRunStyle runWalkStyle; // r29
    class EVec2 DirectionVec; // r1+0x38
    float fVelocity; // f30
    const struct AnimRef * SkillId; // r1+0x10
    class EACTrack * pOutgoingTrack; // r0
    unsigned int uMainTrackAnimID; // r0
    float DeltaTime; // f31
    unsigned char scale; // r1+0x8
    class EACTrack * pOldTrack; // r1+0xC
    class EACTrack * pTrack; // r29
    float fOutgoingVelocity; // f29
    class EVec2 tmp; // r1+0x30
    class FTilePt tilePos; // r1+0x28

    // References
    // -> float kCameraZoomVelocityFactor;
    // -> float kWalkRunBlendTime;
    // -> class EAnimManager _animman;
    // -> float _dt;
}

// Range: 0x8001002C -> 0x80010188
// this: r30
void SAnimator2::handleRunStopAnimation() {
    // Local variables
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r31
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char bIsLeftFoot; // r0
    float blendDuration; // f31

    // References
    // -> float kDefaultBlendTime;
}

// Range: 0x80010188 -> 0x800101DC
unsigned char SAnimator2::getIsLeftFootUp() {
    // Local variables
    float trackPos; // f0
}

// Range: 0x800101DC -> 0x80010290
// this: r31
void SAnimator2::SetNextStateFromCompletedTurn() {}

// Range: 0x80010290 -> 0x8001037C
// this: r30
void SAnimator2::stopIdleOverlay() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * skillId; // r1+0xC

    // References
    // -> float kExitIdleOverlayBlend;
    // -> class EAnimManager _animman;
}

// Range: 0x8001037C -> 0x80010694
// this: r30
int SAnimator2::selectRandomIdle() {
    // Local variables
    unsigned char desiredAnim; // r31
    int lowMotive; // r0
    unsigned char scale; // r1+0x8
    const struct AnimRef * SkillId; // r1+0x10
    const struct AnimRef * SkillId; // r1+0xC

    // References
    // -> int kReselectIdleCount;
    // -> class EAnimManager _animman;
}

// Range: 0x80010694 -> 0x8001089C
// this: r31
void SAnimator2::handleSkillIdleAnimation() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * skill; // r1+0xC
    class EACTrack * pTrack; // r30
    int desiredAnim; // r4

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001089C -> 0x80010940
// this: r30
void SAnimator2::SetPendingLowMotiveAnim(const struct AnimRef * & skill /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80010940 -> 0x80010EB0
// this: r31
void SAnimator2::handleIdleAnimation() {
    // Local variables
    int iCurrentIdleState; // r30
    unsigned char scale; // r1+0x8
    unsigned char bIsIdleTrackComplete; // r0
    unsigned char bJustSwitchedToImpatient; // r29
    class EACTrack * pTrack; // r29
    int desiredAnim; // r4
    const struct AnimRef * SkillId; // r1+0x18
    class EACTrack * pShuffleTrack; // r1+0x14
    int desiredAnim; // r29
    class EACTrack * pTrack; // r29
    const struct AnimRef * SkillId; // r1+0x10
    class EACTrack * pShuffleTrack; // r1+0xC

    // References
    // -> float kTurnToIdleBlendTime;
    // -> class EAnimManager _animman;
    // -> float kImpatientWaitTime;
    // -> float _dt;
}

// Range: 0x80010EB0 -> 0x80010FF4
// this: r31
void SAnimator2::handleImpatientIdleAnimation() {
    // Local variables
    class EACTrack * pTrack; // r30
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x8

    // References
    // -> float kDefaultBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x80010FF4 -> 0x8001109C
// this: r31
void SAnimator2::clearImpatientIdleAnimation() {
    // Local variables
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x8

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001109C -> 0x80011194
// this: r31
void SAnimator2::LoadSMOptionalMotionAnims() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * SkillId; // r1+0xC

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80011194 -> 0x8001128C
// this: r31
void SAnimator2::LoadDCOptionalMotionAnims() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * SkillId; // r1+0xC

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001128C -> 0x80011370
// this: r30
struct AnimRef * SAnimator2::LoadOptionalIdleAnim(unsigned char & scale /* r31 */) {
    // Local variables
    int desiredAnim; // r4
    const struct AnimRef * SkillId; // r1+0x8
}

// Range: 0x80011370 -> 0x80011448
// this: r30
void SAnimator2::UnloadPendingLongIdleAnim() {
    // Local variables
    int desiredAnim; // r4
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x8

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80011448 -> 0x8001154C
// this: r31
void SAnimator2::UnloadOptionalIdleAnim() {
    // Local variables
    int desiredAnim; // r4
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x8
}

// Range: 0x8001154C -> 0x80011680
// this: r30
void SAnimator2::UnloadDCOptionalMotionAnims() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * SkillId; // r1+0xC

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80011680 -> 0x800117B4
// this: r30
void SAnimator2::UnloadSMOptionalMotionAnims() {
    // Local variables
    unsigned char scale; // r1+0x8
    const struct AnimRef * SkillId; // r1+0xC

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x800117B4 -> 0x8001182C
// this: r30
void SAnimator2::CheckOptionalMotionAnimStatusOnStateChange(enum eAnimState nextAnimState /* r31 */) {}

// Range: 0x8001182C -> 0x80011B30
// this: r31
void SAnimator2::handleTurnAnimation() {
    // Local variables
    class EACTrack * pTrack; // r30
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char isMirrored; // r1+0x9
    unsigned char scale; // r1+0x8
    enum eTrackFlags trkFlag; // r30
    float blendDuration; // f31
    float fVelocityFactor; // f2
    float fVelocityFactor; // f2
    float turnrate; // f1
    float turnrate; // f1

    // References
    // -> float kFreeMoveStandingTurnRate;
    // -> float kOtherToTurnBlendTime;
    // -> float kTurnToTurnBlendTime;
}

// Range: 0x80011B30 -> 0x800120E0
// this: r30
void SAnimator2::positionCharacter(class EMat4 * mOrient /* r31 */) {
    // Local variables
    class EVec3 vTempVec; // r1+0x7C
    class EVec3 vPos; // r1+0x70
    float zRot; // f31
    float xRot; // f0
    class EQuat rotQ; // r1+0x60
    unsigned char simVisible; // r28
    class E3DWindow * pWin; // r27
    class EBoundSphere sphere; // r1+0x50
    class EBoundSphere animsphere; // r1+0x40
    unsigned char isSimOccluded; // r0
    class EIStaticModel * shadow; // r27
    class EBoundSphere shadowSphere; // r1+0x30
    class EBound3 shadowBound; // r1+0xA0
    class EMat4 TempMat; // r1+0xB8
    int boneIndex; // r3
    float rotDir; // f31
    class EVec3 zAxis; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800120E0 -> 0x80012140
void SAnimator2::UpdateSimDirection() {}

// Range: 0x80012140 -> 0x8001214C
void SAnimator2::GetBonePosAndDirForParticle() {}

// Range: 0x8001214C -> 0x8001220C
// this: r27
void SAnimator2::AttachParticleEffect(unsigned int bone /* r28 */, unsigned int effectId /* r29 */, int effectTypeAndFlags /* r30 */) {
    // Local variables
    class TRedBlackTree * pTree; // r1+0x8
    class RBIteratorPtrType * rbi; // r0
    struct AnimParticleData data; // r1+0xC

    // References
    // -> unsigned char kSendEmitterPosToForeground;
}

// Range: 0x8001220C -> 0x800122A8
// this: r30
void SAnimator2::DetachParticleEffect() {
    // Local variables
    struct AnimParticleData data; // r1+0x8

    // References
    // -> unsigned char kSendEmitterPosToForeground;
}

// Range: 0x800122A8 -> 0x800122B0
unsigned char SAnimator2::StartParticleEffectFromEdithPrimitive() {}

// Range: 0x800122B0 -> 0x800122DC
void SAnimator2::convertAnimationFormatToEngineFormat() {}

// Range: 0x800122DC -> 0x8001233C
// this: r30
class EVec3 SAnimator2::GetEngineFormatPos(class SAnimator2 * const this /* r31 */) {
    // Local variables
    class EVec3 vWorldPos; // r1+0x8
}

// Range: 0x8001233C -> 0x8001251C
// this: r28
void SAnimator2::processEvents(int iStartTime /* r29 */, int interval /* r30 */, unsigned char bBackward /* r24 */, unsigned char bUseRelationshipList /* r23 */) {
    // Local variables
    class ERAnim * pAnim; // r0
    int size; // r26
    int delay; // r25
    const class TArray * notes; // r31
    int i; // r24
    int modTime; // r0
    int negTime; // r23
    int i; // r23
    int duration; // r0
    int rStartTime; // r24
    int modTime; // r0
    int negTime; // r25

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001251C -> 0x80012574
void SAnimator2::PlayBySource(const char * eventID /* r29 */, signed short sourceID /* r30 */, int preLoadMod /* r31 */) {}

// Range: 0x80012574 -> 0x80012768
// this: r28
void SAnimator2::eventHandler(const struct EAnimNote & event /* r29 */, int preLoadMod /* r30 */) {
    // Local variables
    int number; // r1+0x10
    class ERQuickdata * pObjectData; // r31
    const struct ERQTable * pTable; // r1+0xC
    const struct RumbleDataElement * rumble; // r1+0x8
    class cXObject * pXob; // r0
    class REffectsAttachment * pParticleInfo; // r31

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x80012768 -> 0x80012864
// this: r26
void SAnimator2::PreloadEvents() {
    // Local variables
    class ERAnim * pAnim; // r0
    const class TArray * notes; // r30
    int size; // r29
    int i; // r28
    class REffectsAttachment * pParticleInfo; // r27

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
    // -> class EAnimManager _animman;
}

// Range: 0x80012864 -> 0x800128E8
void SAnimator2::PreloadBoneParticleEvent(const class REffectsAttachment * particle /* r28 */) {
    // Local variables
    int nEmitters; // r0
    int i; // r29
    const struct AttachmentNode & node; // r0

    // References
    // -> class EffectsEmitterManager g_effectsEmitterMan;
}

// Range: 0x800128E8 -> 0x800129E4
// this: r26
void SAnimator2::_handleParticleEvent(const class REffectsAttachment * particle /* r27 */, enum PropKind kind /* r28 */) {
    // Local variables
    int nEmitters; // r0
    int i; // r29
    const struct AttachmentNode & node; // r24
    struct AnimParticleData data; // r1+0x8

    // References
    // -> unsigned char kSendEmitterPosToForeground;
}

// Range: 0x800129E4 -> 0x80012BE4
// this: r31
void SAnimator2::procBoneParticleEvt(const struct AnimParticleData * pParticleData /* r24 */, enum PropKind kind /* r25 */) {
    // Local variables
    unsigned char bShouldContinueOnSkillStart; // r28
    unsigned int type; // r27
    unsigned int bone; // r29
    class TRedBlackTree * pBPTree; // r26
    class TRedBlackTree * pTree; // r1+0xC
    class RBIteratorPtrType * rbi; // r0
    class EBoneParticle * pEffect; // r1+0x8
    class RBIteratorPtrType * ioldEffect; // r4
}

// Range: 0x80012BE4 -> 0x80012C90
// this: r28
void SAnimator2::cleanupParticlesDelayed(class TRedBlackTree * pActiveParticleTree /* r29 */) {
    // Local variables
    class RBIteratorPtrType * i; // r31
    class RBIteratorPtrType * j; // r30
    class EBoneParticle * pValue; // r0
    class TRedBlackTree * pTree; // r0
}

// Range: 0x80012C90 -> 0x80012D3C
// this: r27
void SAnimator2::cleanupParticlesImmediate(class TRedBlackTree * pActiveParticleTree /* r28 */) {
    // Local variables
    class RBIteratorPtrType * i; // r31
    class RBIteratorPtrType * j; // r30
    class EBoneParticle * pValue; // r29
    class TRedBlackTree * pTree; // r0
}

// Range: 0x80012D3C -> 0x80012E00
void SAnimator2::cleanupParticles(class TRedBlackTree * pActiveParticleTree /* r26 */) {
    // Local variables
    class RBIteratorPtrType * i; // r31
    unsigned char bShouldDeleteManagerTree; // r30
    class TRedBlackTree * pTree; // r29
    class EBoneParticle * pValue; // r0
    unsigned char bShouldDeleteTree; // r28
    class RBIteratorPtrType * j; // r27
}

// Range: 0x80012E00 -> 0x80012F40
// this: r28
void SAnimator2::playRumble(const struct RumbleDataElement * pRumble /* r29 */) {
    // Local variables
    int ControlNum; // r30
    class EGlobal & Globals; // r0
    class QTimer timer; // r1+0x8
    float realTime; // f0
    float Intensity; // f1
    float duration; // f3

    // References
    // -> static float nextRumbleStartTime;
    // -> static float rumbleEndTime;
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80012F40 -> 0x80012F44
void SAnimator2::footstepEvent() {}

// Range: 0x80012F44 -> 0x80013340
// this: r25
unsigned char SAnimator2::startSkill(const struct AnimRef * skill /* r26 */, unsigned char bBackwards /* r27 */, unsigned int skillType /* r28 */, unsigned char scale /* r29 */, float animPosOverride /* f31 */, unsigned char mirrored /* r30 */) {
    // Local variables
    class EACTrack * pTrack; // r26
    class ERAnim * pAnim; // r3
    int duration; // r24
    float animPos; // f0
    unsigned char useAnimPosOverride; // r31
    float durationInSeconds; // f29
    int interval; // r24

    // References
    // -> float kIdleToSkillBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x80013340 -> 0x800133EC
// this: r28
unsigned char SAnimator2::MakeSureAllAnimEventsAreDone(const struct AnimRef * animId /* r29 */, int & iStartTime /* r30 */) {
    // Local variables
    class ERAnim * pAnim; // r0
    int duration; // r31

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x800133EC -> 0x80013450
// this: r30
unsigned char SAnimator2::isAnimationDone() {
    // Local variables
    unsigned char result; // r31
}

// Range: 0x80013450 -> 0x800134E0
// this: r30
unsigned char SAnimator2::ShouldEndSkillTrack() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x800134E0 -> 0x8001357C
// this: r30
void SAnimator2::stopCurAnim(unsigned char bResetEventCount /* r31 */) {}

// Range: 0x8001357C -> 0x80013608
// this: r31
void SAnimator2::setPersonDirection() {
    // Local variables
    int TempDir; // r5
}

// Range: 0x80013608 -> 0x80013754
// this: r30
void SAnimator2::updateCarryAnimation() {
    // Local variables
    unsigned int animID; // r31
    signed short obj_group; // r0
}

// Range: 0x80013754 -> 0x800138AC
// this: r30
void SAnimator2::stopCarry() {
    // Local variables
    class ObjectModule * module; // r0
    class cXObject * pObj; // r31
    const struct AnimRef * skill; // r1+0xC
    unsigned char scale; // r1+0x8

    // References
    // -> float kCarryBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x800138AC -> 0x80013914
// this: r31
void SAnimator2::clearSuspendedCarry() {
    // References
    // -> float kDefaultBlendTime;
}

// Range: 0x80013914 -> 0x80013A30
// this: r30
void SAnimator2::updateRenderModels() {
    // Local variables
    signed short currentOutfit; // r0
    unsigned char bCostumeChanged; // r3
}

// Range: 0x80013A30 -> 0x80013A34
unsigned char SAnimator2::setJobModel() {}

// Range: 0x80013A34 -> 0x80013AD8
// this: r30
unsigned char SAnimator2::wearNormal() {
    // Local variables
    class CasSimDescription & currentSimDesc; // r31
}

// Range: 0x80013AD8 -> 0x80013BF0
// this: r28
unsigned char SAnimator2::setNewModel(const char * rowname /* r29 */) {
    // Local variables
    class CasSimDescription & personSimDesc; // r30
}

// Range: 0x80013BF0 -> 0x80013CDC
char * SAnimator2::GetCostumeName() {
    // Local variables
    int nRandom; // r0
}

// Range: 0x80013CDC -> 0x80013CE4
unsigned char SAnimator2::removeCostume() {}

// Range: 0x80013CE4 -> 0x80013D94
// this: r28
void SAnimator2::GetCarryHandPosAndDir(class EVec3 & Dir /* r29 */, class EMat4 & posDirMat /* r30 */, unsigned int slotId /* r31 */) {}

// Range: 0x80013D94 -> 0x80013DE0
// this: r6
void SAnimator2::GetBonePos() {}

// Range: 0x80013DE0 -> 0x80013E80
// this: r29
unsigned char SAnimator2::PropsHaveAlpha() {
    // Local variables
    unsigned char bl; // r31
    int i; // r30
}

// Range: 0x80013E80 -> 0x80013F94
// this: r26
void SAnimator2::DrawProps(class ERC * prc /* r27 */, unsigned char InWindow /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80013F94 -> 0x8001409C
// this: r27
void SAnimator2::DrawPropsShadow(class ERC * prc /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8001409C -> 0x8001414C
// this: r29
void SAnimator2::removeAllProps() {
    // Local variables
    int i; // r30

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8001414C -> 0x80014234
// this: r30
void SAnimator2::updateCensor() {
    // Local variables
    int censorship; // r31
    int size; // r0
}

// Range: 0x80014234 -> 0x80014268
// this: r31
void SAnimator2::SetIdleInitialized() {}

// Range: 0x80014268 -> 0x800142C4
// this: r30
void SAnimator2::UpdateAnimationValidity() {
    // Local variables
    unsigned char shouldUpdate; // r31
}

// Range: 0x800142C4 -> 0x800142CC
class cXObject * SAnimator2::GetAwareOfObject() {}

// Range: 0x800142CC -> 0x800142D4
unsigned char SAnimator2::SetAwareOfObject() {}

// Range: 0x800142D4 -> 0x800142DC
unsigned char SAnimator2::SetAwareOfObjectKilled() {}

// Range: 0x800142DC -> 0x800142E4
unsigned char SAnimator2::ClearAwareOfObject() {}

// Range: 0x800142E4 -> 0x800143A8
// this: r31
void SAnimator2::setAwarenessFollowStart(float deltaDir /* f31 */) {}

// Range: 0x800143A8 -> 0x80014410
// this: r31
void SAnimator2::setAwarenessFollowEnd() {}

// Range: 0x80014410 -> 0x80014454
// this: r31
void SAnimator2::setAwarenessFollowMiddle() {}

// Range: 0x80014454 -> 0x800144D4
// this: r31
void SAnimator2::exitAwarenessFollow() {}

// Range: 0x800144D4 -> 0x80014680
// this: r30
int SAnimator2::shouldUseLowMotiveIdle() {
    // Local variables
    int motive; // r31
    float motiveValue; // f31
    float lowMotiveThreshold; // f30

    // References
    // -> float kLowMotiveValue;
}

// Range: 0x80014680 -> 0x8001477C
// this: r30
int SAnimator2::shouldUseLowMotiveWalk() {
    // Local variables
    int retVal; // r31
    float lowMotiveThreshold; // f31
    float motiveValue; // f30

    // References
    // -> float kLowMotiveValue;
}

// Range: 0x8001477C -> 0x80014818
// this: r30
unsigned char SAnimator2::IsSimulatorControlled() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x80014818 -> 0x8001488C
// this: r30
void SAnimator2::SetPlayerControl(unsigned char isPlayerControlled /* r31 */) {}

// Range: 0x8001488C -> 0x800148E8
// this: r31
enum eWalkRunStyle SAnimator2::StartAutoRun() {}

// Range: 0x80014998 -> 0x800149A4
class EAnimController & SAnimator2::GetAnimController() {}

// Range: 0x800149A4 -> 0x80014A50
// this: r28
unsigned char SAnimator2::PendingAnimationLoaded(enum TreeReturnCode & result /* r29 */, const class AnimateNewParam * param /* r30 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80014A50 -> 0x80014B14
// this: r26
enum TreeReturnCode SAnimator2::PreloadOnly(unsigned char & shouldReturn /* r27 */, const class AnimateNewParam * param /* r28 */, const struct AnimRef * & skill /* r29 */, class StackElem * elem /* r30 */) {
    // Local variables
    enum TreeReturnCode result; // r31
    unsigned char scale; // r1+0x8

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80014B14 -> 0x80014C9C
// this: r29
enum TreeReturnCode SAnimator2::BackgroundBehavior(const struct AnimRef * & skill /* r30 */) {
    // Local variables
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r31
    int desiredAnim; // r0
    enum TreeReturnCode code; // r31
}

// Range: 0x80014C9C -> 0x80014ED8
// this: r30
enum TreeReturnCode SAnimator2::FXAnimationBehavior(const class AnimateNewParam * param /* r28 */, const struct AnimRef * & skill /* r31 */) {
    // Local variables
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r29
    enum TreeReturnCode code; // r29
    unsigned char bBackwards; // r0
}

// Range: 0x80014ED8 -> 0x80014EE0
enum TreeReturnCode SAnimator2::CarryBehavior() {}

// Range: 0x80014EE0 -> 0x80014F3C
// this: r31
enum TreeReturnCode SAnimator2::TurnOffAnim() {}

// Range: 0x80014F3C -> 0x80015050
// this: r28
enum TreeReturnCode SAnimator2::ProcessDequeueEvent(const class AnimateNewParam * param /* r30 */, int eventNumber /* r29 */, class StackElem * elem /* r31 */) {
    // Local variables
    int local; // r30

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80015050 -> 0x800151E4
// this: r28
enum TreeReturnCode SAnimator2::ProcessNoDequeueEvent(const class AnimateNewParam * param /* r30 */, int eventNumber /* r29 */, class StackElem * elem /* r31 */) {
    // Local variables
    int local; // r30

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800151E4 -> 0x80015408
// this: r26
unsigned char SAnimator2::ProcessAnimatePrimitiveNotEntered(enum TreeReturnCode & result /* r27 */, const class AnimateNewParam * param /* r24 */, const struct AnimRef * & skill /* r28 */, class StackElem * elem /* r31 */, unsigned char overrideCarry /* r29 */, unsigned char mirrored /* r30 */) {
    // Local variables
    unsigned char scale; // r1+0x8
    enum TreeReturnCode code; // r3
    int behavior; // r0
    float animPosOverride; // r1+0xC
    unsigned char bResetEventCount; // r31
}

// Range: 0x80015408 -> 0x8001546C
void SAnimator2::ProcessOverrideCarry() {
    // Local variables
    float blendTime; // f2
}

// Range: 0x8001546C -> 0x80015488
void SAnimator2::UpdateTrackScale() {
    // References
    // -> float kTrackScale;
}

// Range: 0x80015488 -> 0x80015498
void SAnimator2::TrackCleanup() {
    // Local variables
    class SAnimator2 * pAnimator; // r0
}

// Range: 0x80015498 -> 0x800154A8
void SAnimator2::WalkToTurnTrackEnd() {}

// Range: 0x800154A8 -> 0x8001569C
// this: r31
float SAnimator2::GetZRotation() {
    // Local variables
    float trackFrames; // f0
    float rot; // f1
    float blendinfactor; // f3
    float lastDir; // f4
}

// Range: 0x8001569C -> 0x80015700
unsigned char SAnimator2::IsSmoothRouteEnabled() {}

// Range: 0x80015700 -> 0x80015808
// this: r31
void SAnimator2::DisableSmoothRoute() {
    // Local variables
    enum eWalkRunStyle style; // r3
}

// Range: 0x80015808 -> 0x80015818
void SAnimator2::EnableSmoothRoute() {}

// Range: 0x80015818 -> 0x80015AA0
class EInstance * SAnimator2::FindClosestWall(const class EVec3 & ray_dir /* r25 */, float & dist /* r26 */, float distSq /* f28 */) {
    // Local variables
    class EVec3 cam_pos; // r1+0x58
    class ERLevel * level; // r29
    int num_instances; // r0
    class EInstance * closest_instance; // r28
    float nearest_distance; // f30
    int i; // r27
    class EInstance * instance; // r1+0xC
    int num_instances; // r0
    int i; // r27
    class EIWallPart * pWall; // r29
    class EBound3 mBound; // r1+0x80
    float hit_dist; // r1+0x8
    class EVec3 hit_pos; // r1+0x4C
    class EVec3 bbox_max; // r1+0x40
    class EVec3 bbox_min; // r1+0x34
    class EBound3 new_bound; // r1+0x68
    unsigned char obj_hit; // r0
    float near_plane; // f29
    unsigned char is_wall_opaque; // r0

    // References
    // -> unsigned char s_bwallArrayDirty;
    // -> class vector s_wallPartArray;
    // -> class EGlobal _globals;
}

// Range: 0x80015AA0 -> 0x80015B50
// this: r5
void SAnimator2::GetCurrentSimSphere(class EBoundSphere & sphere /* r31 */) {
    // Local variables
    class EVec3 curSimPos; // r1+0x8
    float tmp; // f30
}

// Range: 0x80015B50 -> 0x80015B90
// this: r5
void SAnimator2::GetAnimSimSphere(class EBoundSphere & sphere /* r31 */) {}

// Range: 0x80015B90 -> 0x80015C68
// this: r29
unsigned char SAnimator2::IsSimOccluded(class E3DWindow * pWin /* r30 */, class EVec3 & simPos /* r31 */) {
    // Local variables
    class EVec3 delta; // r1+0x18
    float dist; // f0
    class EVec3 rayDir; // r1+0xC
    float wallDist; // r1+0x8
}

// Range: 0x80015C68 -> 0x80015C80
void SAnimator2::InitStaticAnimationElements() {
    // References
    // -> unsigned char s_bwallArrayDirty;
    // -> class vector s_wallPartArray;
}

// Range: 0x80015C80 -> 0x80015CD4
void SAnimator2::DeallocateStaticAnimationElements() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> class vector s_wallPartArray;
}

// Range: 0x80015CD4 -> 0x80015D4C
// this: r30
void SAnimator2::UpdateLocomotionState(enum eLocomotionState state /* r31 */) {}

// Range: 0x80015D4C -> 0x80015DEC
enum StdAnimIdx SAnimator2::GetLocomotionAnimIndex() {}

// Range: 0x80015DEC -> 0x80015EA8
// this: r30
void SAnimator2::HandleIKEvent(const struct EAnimNote & event /* r31 */) {
    // Local variables
    const char * strOne; // r0
    unsigned char bTurnOn; // r31
    class IKData * pIKData; // r3
}

// Range: 0x80015EA8 -> 0x80015ECC
float SAnimator2::GetIKLeftRightDelta() {
    // Local variables
    float retVal; // f1
}

// Range: 0x80015ECC -> 0x80015EF0
float SAnimator2::GetIKFrontBackDelta() {
    // Local variables
    float retVal; // f1
}

// Range: 0x80015EF0 -> 0x80015F84
unsigned char SAnimator2::IsFrontBackLower() {
    // Local variables
    float minOffset; // f1
    enum eRaycastLocation lowestLoc; // r0
    unsigned int i; // r0
}

// Range: 0x80015F84 -> 0x80016074
// this: r30
float SAnimator2::GetSocialModeDelta() {
    // Local variables
    float socialModeDelta; // f30
    class cXObject * pObj; // r31
    float curSimOffset; // f0
    class cXPerson * pSocialPerson; // r0
    class SAnimator2 * pSocialPersonAnimator; // r0
    float offset; // f0
}

// Range: 0x80016074 -> 0x8001615C
// this: r29
void SAnimator2::AdjustIKTargetHeight(class IKData * pIKData /* r30 */, class EMat4 & endBoneOrient /* r31 */) {
    // Local variables
    float socialModeDelta; // f0
}

// Range: 0x8001615C -> 0x800161B4
float SAnimator2::GetFootOrientation() {
    // Local variables
    float zDelta; // f31
    float distMag; // f2
    float xAngle; // f0
}

// Range: 0x800161B4 -> 0x80016218
// this: r30
unsigned char SAnimator2::IsIKEnabled() {
    // Local variables
    unsigned char i; // r31
}

// Range: 0x80016218 -> 0x800163EC
// this: r31
void SAnimator2::updateIKAnimation() {
    // Local variables
    unsigned char i; // r28
    class IKData * pIKData; // r27
    unsigned int boneToUpdateId; // r26
    class EACTrack * pTrack; // r0
    class EMat4 endBoneOrient; // r1+0x8
    float angle; // f0
    class EACTrack * pTrack; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800163EC -> 0x80016400
void SAnimator2::GetAllIKBoneIndices() {}

// Range: 0x80016400 -> 0x80016568
// this: r29
class EVec2 SAnimator2::GetRaycastPosition(class SAnimator2 * const this /* r30 */, enum eRaycastLocation eLoc /* r31 */) {
    // Local variables
    float mulFac; // f4
    float angleToSim; // f31
    class EVec2 direction; // r1+0x10
    float kMulFactor; // f1
}

// Range: 0x80016568 -> 0x80016580
unsigned char SAnimator2::IsFrontBoneLower() {}

// Range: 0x80016580 -> 0x80016598
unsigned char SAnimator2::IsLeftBoneLower() {}

// Range: 0x80016598 -> 0x8001664C
// this: r29
unsigned char SAnimator2::GetOffSetForSocialMode(float & offset /* r30 */) {
    // Local variables
    unsigned char isMinOffsetChanged; // r31
    class cXObject * pObj; // r0
    class cXPerson * pSocialPerson; // r0
    class SAnimator2 * pSocialPersonAnimator; // r31
}

// Range: 0x8001664C -> 0x80016664
float SAnimator2::ComputeOffset() {}

// Range: 0x80016664 -> 0x800166E8
// this: r31
float SAnimator2::GetSimTerrainOffset() {
    // Local variables
    float socialOffset; // r1+0x8
    float simOffset; // f31
    float retOffset; // f0
}

// Range: 0x800166E8 -> 0x80016844
// this: r26
void SAnimator2::UpdateRaycastElevations() {
    // Local variables
    class EVec2 curPos; // r1+0x10
    unsigned int i; // r27
    class EVec3 vPos; // r1+0x24
    class EVec3 simPos; // r1+0x18

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80016844 -> 0x800168D0
static void __sinit_\game_animation_unity_cpp() {
    // References
    // -> static class EVec3 zAxis;
    // -> class EVec3 s_BoneTranslationData[6];
    // -> class vector s_wallPartArray;
}


