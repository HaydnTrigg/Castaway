/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_animcontroller.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286F78 -> 0x80290DB0
*/
// Range: 0x80286F78 -> 0x80287088
// this: r30
EACTrack::EACTrack() {}

// Range: 0x80287088 -> 0x802871AC
// this: r30
EAnimController::EAnimController() {}

// Range: 0x802871AC -> 0x80287260
// this: r30
EAnimController::~EAnimController() {}

// Range: 0x80287260 -> 0x80287354
// this: r30
void EAnimController::Deallocate() {}

// Range: 0x80287354 -> 0x80287430
// this: r28
void EAnimController::DeallocateNodes() {
    // Local variables
    int i; // r29

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80287430 -> 0x8028798C
// this: r30
void EAnimController::Init(unsigned int characterId /* r26 */, enum eAnimatedObjectType animatedType /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    int nodeArraySize; // r27
    int i; // r26
    int j; // r25
    int numNodes; // r12

    // References
    // -> class ECharacterManager _characterman;
}

// Range: 0x8028798C -> 0x80287990
void EAnimController::Shutdown() {}

// Range: 0x80287990 -> 0x80287A4C
enum eTrackFlags EAnimController::GetNonMainTrackFlagFromIndex() {}

// Range: 0x80287A4C -> 0x80287BA0
unsigned char EAnimController::IsTrackValid() {}

// Range: 0x80287BA0 -> 0x80287BC4
void EAnimController::SuspendTrack() {}

// Range: 0x80287BC4 -> 0x80287D2C
void EAnimController::SuspendTrack() {}

// Range: 0x80287D2C -> 0x80287E94
void EAnimController::ResumeTrack() {}

// Range: 0x80287E94 -> 0x80287F34
void EAnimController::CalcOrientMatrix(const class EVec3 & vPosIn /* r29 */, const class EVec3 & vRotIn /* r30 */, class EMat4 & mOrientOut /* r31 */) {}

// Range: 0x80287F34 -> 0x802883BC
// this: r29
void EAnimController::Update(class EVec3 * pvPosInOut /* r30 */, class EVec3 * pvRotInOut /* r31 */, class EVec3 & vScaleIn /* r25 */) {
    // Local variables
    class EVec3 vAccumPos; // r1+0x5C
    class EVec3 vAccumRot; // r1+0x50
    class TNodeList eventRanges; // r1+0x44
    int i; // r27
    unsigned char bHasSlaves; // r26
    class EVec3 vTransRot; // r1+0x38
    class EMat4 mRotX; // r1+0xE8
    class EMat4 mRotY; // r1+0xA8
    class EMat4 mRotZ; // r1+0x68

    // References
    // -> int _framecount;
}

// Range: 0x802883BC -> 0x80288530
// this: r22
void EAnimController::ProcessEvents(class TNodeList & eventRanges /* r31 */, unsigned char addToRunList /* r23 */) {
    // Local variables
    class NLIteratorPtrType * i; // r26
    float minrange; // f30
    float maxrange; // f29
    class TArray & events; // r0
    int nEvents; // r25
    int cEvent; // r24
    float frame; // f1
}

// Range: 0x80288530 -> 0x80289034
// this: r25
void EAnimController::UpdateTrack(class EACTrack * pTrack /* r26 */, class EVec3 & vAccumPos /* r27 */, class EVec3 & vAccumRot /* r8 */, class TNodeList & eventRanges /* r28 */) {
    // Local variables
    class TNodeList trackEventRanges; // r1+0x104
    float intensity; // f31
    unsigned int accumTransFlags; // r30
    class EVec3 vDelta; // r1+0xF8
    float setPos; // f30
    class EVec3 vLastTrans; // r1+0xEC
    float lengthm1; // f29
    unsigned char destroy; // r29
    float prevPos; // f28
    float changedPos; // f28
    class EVec3 vEndTrans; // r1+0xE0
    float changedPos; // f28
    class EVec3 vEndTrans; // r1+0xD4
    float newPos; // f0
    float distFromLastForward; // f1
    float distFromLastBackward; // f2
    class EVec3 vEndTrans; // r1+0xC8
    class EVec3 vEndTrans; // r1+0xBC
    class EVec3 vFinalTrans; // r1+0xB0
    int d; // r6

    // References
    // -> class EVec3 _vZero;
    // -> float _dt;
    // -> int _framecount;
}

// Range: 0x80289034 -> 0x802890B0
float EAnimController::GetSlavePos() {
    // Local variables
    float lengthm1; // f3
    float masterLengthM1; // f2
    float newPos; // f1
}

// Range: 0x802890B0 -> 0x80289278
// this: r28
void EAnimController::Compute(const class EMat4 & mOrient /* r29 */) {
    // Local variables
    class EACTrack * pTrack; // r30
    class EACTrack * pSrcTrack; // r1+0x10
    int firstActiveTrack; // r1+0xC
    int firstTrackId; // r1+0x8
    struct EACAttributeStates srcTrackAttributeStates; // r1+0x14
}

// Range: 0x80289278 -> 0x802893F4
// this: r26
void EAnimController::CalcTightBoundBox(class EBound3 & bOut /* r27 */, unsigned char * includeNodes /* r28 */) {
    // Local variables
    unsigned char first; // r30
    int i; // r29
    class EVec3 v; // r1+0x14

    // References
    // -> int _framecount;
}

// Range: 0x802893F4 -> 0x80289780
void EAnimController::AnimateSpecial(class ERAnim * pAnim /* r28 */, float pos /* f31 */, struct EACTrackNodeStreams * pNodeStreams /* r29 */, class EAnimNodeDataPos * pNodeDataPos /* r30 */, struct EACNodeState & newNodeState /* r31 */) {
    // Local variables
    int visibility; // r9
    unsigned char isVisible; // r3
    int lightColor; // r6
    int lightIntensity; // r4
    int lightAttenuationStart; // r4
    int cameraFOV; // r4
}

// Range: 0x80289780 -> 0x80289C5C
// this: r22
void EAnimController::BlendTrackAttributes(class EACTrack * pTrack /* r23 */, const struct EACAttributeStates & srcAttributeStates /* r24 */, struct EACAttributeStates & destAttributeStates /* r25 */) {
    // Local variables
    float intensity; // f28
    struct EACNodeState * pSrcNodeState; // r30
    struct EACNodeState * pDestNodeState; // r29
    unsigned int layer; // r28
    int nNodes; // r27
    int cNode; // r26
    float trackIntensity; // f21
    class EVec3 vAxis; // r1+0x1C
    float xRot; // f21
    float yRot; // f2
    float zRot; // f27
    class EVec3 vHoldValue; // r1+0x10
    float deltaZRot; // f0
    class EVec2 v2TestDistance; // r1+0x8
    int channel; // r23

    // References
    // -> static float kBlendZRotationCutoff;
}

// Range: 0x80289C5C -> 0x8028A20C
// this: r20
void EAnimController::Animate(class EACTrack * pTrack /* r21 */, struct EACAttributeStates & destAttributes /* r22 */) {
    // Local variables
    class EAnimNodeDataPos * pNodeDataPos; // r26
    struct EACTrackNodeStreams * pNodeStreams; // r25
    struct EACNodeState * pNodeState; // r24
    float pos; // f31
    int cNode; // r23
    struct EACNodeState newNodeState; // r1+0x70
    float trackIntensity; // f1
    int rot; // r0
    int trans; // r0
    int scale; // r0
}

// Range: 0x8028A20C -> 0x8028A310
void EAnimController::AnimateMorphChannels(class EACTrack * pTrack /* r25 */, struct EACAttributeStates & destAttributes /* r26 */) {
    // Local variables
    int numMorphWeightChannels; // r0
    class ERAnim * pAnim; // r28
    int channelIndex; // r27
    int morphChannelPos; // r0
    float currMorphWeightValue; // f0
}

// Range: 0x8028A310 -> 0x8028A4B4
void EAnimController::Blend(float u /* f31 */, struct EACNodeState & curState /* r30 */, const struct EACNodeState & newState /* r31 */) {}

// Range: 0x8028A4B4 -> 0x8028A764
void EAnimController::Layer(float u /* f31 */, struct EACNodeState & curState /* r30 */, const struct EACNodeState & newState /* r31 */) {
    // Local variables
    class EQuat qRotScaled; // r1+0x58
    class EVec3 vAddScale; // r1+0x48
}

// Range: 0x8028A764 -> 0x8028AD00
// this: r23
void EAnimController::ComputeNonUniformScaleMatrices(const class EMat4 & mOrient /* r24 */) {
    // Local variables
    int nodeCounter; // r31
    class EMat4 * mNodes; // r30
    class EMat4 * pmNode; // r29
    class ECharacterNode * pCNode; // r28
    struct EACNodeState * pNodeState; // r27
    class EMat4 * pmParent; // r26
    unsigned int idx; // r25
    class EMat4 mLocal; // r1+0x168
    class EMat4 mInvLocalOrient; // r1+0x128
    class EMat4 mLocalOrient; // r1+0xE8
    class EMat4 mLocal; // r1+0xA8
}

// Range: 0x8028AD00 -> 0x8028ADD0
// this: r26
unsigned char EAnimController::RunTimeBoneTranslation(class EMat4 & mLocal /* r27 */, int boneIdx /* r28 */, unsigned char initMatrix /* r29 */) {
    // Local variables
    unsigned char retVal; // r30
    class EVec3 * pDeltaTrans; // r0
    class EVec3 * pDeltaTrans; // r0
}

// Range: 0x8028ADD0 -> 0x8028B090
// this: r23
void EAnimController::ComputeUniformScaleMatrices(const class EMat4 & mOrient /* r24 */) {
    // Local variables
    int nodeCounter; // r31
    class EMat4 * mNodes; // r30
    class EMat4 * pmNode; // r29
    class ECharacterNode * pCNode; // r28
    struct EACNodeState * pNodeState; // r27
    class EMat4 * pmParent; // r26
    unsigned int idx; // r25
    class EMat4 mLocal; // r1+0x60
    class EMat4 mLocal; // r1+0x20
}

// Range: 0x8028B090 -> 0x8028B21C
// this: r30
void EAnimController::ComputeMatrices(const class EMat4 & mOrient /* r31 */) {
    // References
    // -> class EFrameAllocGroup _frag;
    // -> int _evenodd;
    // -> int _framecount;
}

// Range: 0x8028B21C -> 0x8028B2A0
// this: r29
void EAnimController::StopAllTracks() {
    // Local variables
    int i; // r30
}

// Range: 0x8028B2A0 -> 0x8028B4D4
// this: r29
void EAnimController::DeactivateTrack(class EACTrack * pTrack /* r30 */) {
    // Local variables
    class RBIteratorPtrType * si; // r28
    class EACTrack * pStaticTrack; // r27
    class EACTrack * pSlaveTrack; // r3
}

// Range: 0x8028B4D4 -> 0x8028B8D0
// this: r22
void EAnimController::RemoveTrackFromOutgoingList() {
    // Local variables
    int outgoingIndex; // r23
    class EACTrack * nextOutgoingTrack; // r6
}

// Range: 0x8028B8D0 -> 0x8028BE80
// this: r22
void EAnimController::CreateStreams(class EACTrack * pTrack /* r23 */) {
    // Local variables
    int streamSize; // r21
    int cNode; // r26
    struct EACTrackNodeStreams & acts; // r25
    int pos; // r24
    float prevPos; // f31
    int channelIndex; // r27
    int morphChannelStreamPos; // r28
}

// Range: 0x8028BE80 -> 0x8028BFC0
void EAnimController::DestroyStreams(class EACTrack * pTrack /* r26 */) {
    // Local variables
    int nNodes; // r31
    int i; // r28
    struct EACTrackNodeStreams & s; // r27
    int numMorphChannels; // r27
    int i; // r28
}

// Range: 0x8028BFC0 -> 0x8028C108
void EAnimController::StopTrack() {}

// Range: 0x8028C108 -> 0x8028C27C
unsigned int EAnimController::GetTrackAnimId() {}

// Range: 0x8028C27C -> 0x8028CC50
// this: r22
class EACTrack * EAnimController::SetTrackAnim(enum eTrackFlags trackFlags /* r23 */, unsigned int animId /* r24 */, int blendType /* r30 */, float blendDuration /* f31 */, class EACTrack * * ppOutgoingTrack /* r25 */) {
    // Local variables
    class EACTrack * pTrack; // r28
    class EACTrack * pOutgoingTrack; // r27
    unsigned char bIsMainTrack; // r26

    // References
    // -> int _framecount;
    // -> float kEACDefaultBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x8028CC50 -> 0x8028CCAC
// this: r30
class EACTrack * EAnimController::SetTrackAnim(enum eTrackFlags trackFlags /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x8028CCAC -> 0x8028CE4C
void EAnimController::SetTrackIntensity() {}

// Range: 0x8028CE4C -> 0x8028CEFC
void EAnimController::SetTrackIntensity(class EACTrack * pTrack /* r31 */) {}

// Range: 0x8028CEFC -> 0x8028D064
float EAnimController::GetTrackIntensity() {}

// Range: 0x8028D064 -> 0x8028D1CC
float EAnimController::GetTrackSpeed() {}

// Range: 0x8028D1CC -> 0x8028D2F0
// this: r28
void EAnimController::BlendAllOutgoingTracks(float intensity /* f29 */, float duration /* f30 */, unsigned char includeExternal /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8028D2F0 -> 0x8028D338
void EAnimController::SetTrackBlend() {}

// Range: 0x8028D338 -> 0x8028D388
void EAnimController::SetTrackBlendSmooth() {}

// Range: 0x8028D388 -> 0x8028D51C
void EAnimController::SetTrackBlendSmooth() {}

// Range: 0x8028D51C -> 0x8028D5AC
void EAnimController::SetTrackBlendHermite(float duration /* f2 */) {
    // Local variables
    float delta; // f0
}

// Range: 0x8028D5AC -> 0x8028D76C
void EAnimController::BlendTrackIntensity() {
    // Local variables
    float newIntensity; // f0
    float hermite; // f0

    // References
    // -> float _dt;
}

// Range: 0x8028D76C -> 0x8028D818
void EAnimController::SetTrackPhaseLock(class EACTrack * pTrackToBeLocked /* r30 */, class EACTrack * pMasterTrack /* r31 */, float offset /* f31 */) {}

// Range: 0x8028D818 -> 0x8028DA60
// this: r27
void EAnimController::SetProceduralTrack(enum eTrackFlags trackFlags /* r28 */, void (* pfnUpdateCallback)(unsigned int, class EACTrack *, class ERCharacter *, class EVec3 &, class EVec3 &) /* r29 */, void (* pfnComputeCallback)(unsigned int, class EACTrack *, class EMat4 &, class ERCharacter *, struct EACNodeState *) /* r30 */, unsigned int userParam /* r31 */) {}

// Range: 0x8028DA60 -> 0x8028DCB8
void EAnimController::RestartTrack() {
    // Local variables
    class RBIteratorPtrType * si; // r29
    class EACTrack * pSlave; // r0
}

// Range: 0x8028DCB8 -> 0x8028DE8C
void EAnimController::SetTrackFrame() {
    // Local variables
    float lengthm1; // f0

    // References
    // -> int _framecount;
}

// Range: 0x8028DE8C -> 0x8028DEA8
void EAnimController::SetTrackBlendFactors() {}

// Range: 0x8028DEA8 -> 0x8028E008
void EAnimController::SetTrackBlendFactors() {}

// Range: 0x8028E008 -> 0x8028E17C
int EAnimController::GetTrackFrameCount() {}

// Range: 0x8028E17C -> 0x8028E2E4
float EAnimController::GetTrackFrame() {}

// Range: 0x8028E2E4 -> 0x8028E480
float EAnimController::GetTrackPos() {}

// Range: 0x8028E480 -> 0x8028E4D8
float EAnimController::GetTrackPos() {}

// Range: 0x8028E4D8 -> 0x8028E55C
void EAnimController::SetTrackPos() {
    // References
    // -> int _framecount;
}

// Range: 0x8028E55C -> 0x8028E724
void EAnimController::SetTrackPos() {
    // References
    // -> int _framecount;
}

// Range: 0x8028E724 -> 0x8028E8E0
unsigned char EAnimController::IsTrackAnimComplete() {
    // Local variables
    class EACTrack * pTrack; // r3
}

// Range: 0x8028E8E0 -> 0x8028EA34
struct EAnimDef * EAnimController::GetTrackAnimDef() {}

// Range: 0x8028EA34 -> 0x8028EA78
void EAnimController::SetTrackSpeed() {}

// Range: 0x8028EA78 -> 0x8028EC00
void EAnimController::SetTrackSpeed() {}

// Range: 0x8028EC00 -> 0x8028EC6C
void EAnimController::SetAllTrackSpeed() {
    // Local variables
    int i; // r6
}

// Range: 0x8028EC6C -> 0x8028EC84
unsigned int EAnimController::VisibilityTestNoCompute() {}

// Range: 0x8028EC84 -> 0x8028EFDC
// this: r28
void EAnimController::CalcVisibilitySphere(const class EMat4 & mOrient /* r29 */, class EBoundSphere & sphereOut /* r30 */) {
    // Local variables
    class EBoundSphere sphere; // r1+0x58
    int i; // r31
    class EACTrack * pTrack; // r24
    class ERAnim * pAnim; // r0
    float intensity; // f31
    class EBoundSphere trackSphere; // r1+0x48
    int d; // r0
    float maxScale; // f0
}

// Range: 0x8028EFDC -> 0x8028F070
class EVec3 EAnimController::GetAnimRootNodeTrans() {
    // Local variables
    int trans; // r0
}

// Range: 0x8028F070 -> 0x8028F0F4
// this: r29
void EAnimController::Draw(class ERC * prc /* r30 */, class ERModel * pRModel /* r31 */) {
    // References
    // -> int _framecount;
}

// Range: 0x8028F0F4 -> 0x8028F110
// this: r5
void EAnimController::SetVertexMorphWeights() const {}

// Range: 0x8028F110 -> 0x8028F26C
// this: r30
class EVec3 EAnimController::CalcNodePos(int nIndex /* r31 */) {
    // Local variables
    class EMat4 & mOrient; // r0
}

// Range: 0x8028F26C -> 0x8028F2F4
class EMat4 & EAnimController::GetNodeMatrix() {
    // References
    // -> static class EMat4 unavailable;
}

// Range: 0x8028F2F4 -> 0x8028F348
unsigned int EAnimController::GetNodeChildrenSize() {}

// Range: 0x8028F348 -> 0x8028F3A4
unsigned int EAnimController::GetNodeChildNodeIdx() {}

// Range: 0x8028F3A4 -> 0x8028F3F4
int EAnimController::GetNodeParentIdx() {}

// Range: 0x8028F3F4 -> 0x8028F574
// this: r29
void EAnimController::CalcNodeBindPoseInv(int nIndex /* r30 */, class EMat4 & mOrientOut /* r31 */) {}

// Range: 0x8028F574 -> 0x8028F6AC
// this: r29
void EAnimController::CalcNodeBindPose(int nIndex /* r30 */, class EMat4 & mOrientOut /* r31 */) {}

// Range: 0x8028F6AC -> 0x8028F970
// this: r29
void EAnimController::CalcNodeOrient(int nIndex /* r30 */, class EMat4 & mOrientOut /* r31 */) {
    // Local variables
    class EMat4 mNode; // r1+0x88
    class EMat4 mLocal; // r1+0x48
}

// Range: 0x8028F970 -> 0x8028FAE4
// this: r30
void EAnimController::SetTrackActive(class EACTrack * pTrack /* r31 */, unsigned char active /* r27 */) {}

// Range: 0x8028FAE4 -> 0x8028FBC0
// this: r30
void EAnimController::Enable(const class EMat4 & mOrient /* r6 */) {
    // Local variables
    int size; // r31

    // References
    // -> int _framecount;
}

// Range: 0x8028FBC0 -> 0x8028FBEC
void EAnimController::SetTrackScale() {}

// Range: 0x8028FBEC -> 0x8028FF00
// this: r29
void EAnimController::MirrorBones(struct EACNodeState * pNodeStates /* r30 */) {
    // Local variables
    struct EACNodeState tmp; // r1+0x8
    class RBIteratorPtrType * iter; // r31
    unsigned int boneId; // r0
    unsigned int mirrorBoneId; // r0
    int i; // r19
    int i; // r5
}

// Range: 0x8028FF00 -> 0x8028FF40
void EAnimController::UnsetAllTrackCleanup() {
    // Local variables
    int i; // r8
}

// Range: 0x8028FF40 -> 0x8028FF58
void EAnimController::SetTrackCleanup() {}

// Range: 0x8028FF58 -> 0x8028FFF8
unsigned char EAnimController::IsMirrorNeeded() {
    // Local variables
    int i; // r0
}

// Range: 0x8028FFF8 -> 0x80290000
void EAnimController::AddBoneConstantTranslations() {}

// Range: 0x80290000 -> 0x80290100
// this: r29
void EAnimController::UpdateEnableBoneTranslationFlag() {
    // Local variables
    unsigned char isTransEnabled; // r31
    class RBIteratorPtrType * iter; // r30
    class EVec3 * pDelta; // r0
    class RBIteratorPtrType * iter; // r30
    class EVec3 * pDelta; // r0
}

// Range: 0x80290100 -> 0x802901F8
void EAnimController::AvoidInitialization() {
    // Local variables
    int nNodes; // r6
    struct EACNodeState * state; // r7
}

// Range: 0x802901F8 -> 0x802903A4
// this: r29
void EAnimController::FindAndBlendStaticallyBlendedTracks(class EACTrack * pTrack /* r30 */) {
    // Local variables
    class EACTrack * pStaticBlendTrack; // r31
    struct EACAttributeStates staticTrackAttributeStates; // r1+0x8

    // References
    // -> float tempMorphWeightStates[3][24];
    // -> struct EACNodeState tempNodeStates[3][128];
}

// Range: 0x802903A4 -> 0x80290760
// this: r18
void EAnimController::ComputeBlendOutgoingTracks(struct EACAttributeStates & srcTrackAttributes /* r19 */, class EACTrack * & pSrcTrack /* r20 */) {
    // Local variables
    int i; // r24
    int tempNodeArrayIndex; // r23
    class EACTrack * pTrack; // r22
    class EACTrack * pStaticBlendTrack; // r21
    struct EACAttributeStates outgoingTrackAttributeStates; // r1+0x14
    struct EACAttributeStates staticTrackAttributeStates; // r1+0x8

    // References
    // -> float tempMorphWeightStates[3][24];
    // -> struct EACNodeState tempNodeStates[3][128];
}

// Range: 0x80290760 -> 0x80290808
class EACTrack * EAnimController::GetFirstTrack() {}

// Range: 0x80290808 -> 0x8029094C
// this: r28
void EAnimController::BlendAllOverlayTracks(struct EACAttributeStates & srcAttributeStates /* r29 */, const class EMat4 & mOrient /* r30 */) {
    // Local variables
    int i; // r31
    class EACTrack * pTrack; // r25

    // References
    // -> float tempMorphWeightStates[3][24];
    // -> struct EACNodeState tempNodeStates[3][128];
}

// Range: 0x8029094C -> 0x802909DC
unsigned char EAnimController::IsComputeNeeded() {
    // Local variables
    int i; // r7
}

// Range: 0x802909DC -> 0x80290B5C
void EAnimController::UpdateMirrorForTrack() {}

// Range: 0x80290B5C -> 0x80290CBC
void EAnimController::UpdateTrackPhaseLockOffset() {}

// Range: 0x80290CBC -> 0x80290DB0
void EAnimController::IgnoreComputeThisFrame() {
    // Local variables
    float firstFramePos; // f1

    // References
    // -> int _framecount;
    // -> float _dt;
}


