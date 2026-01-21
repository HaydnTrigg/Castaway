/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\boar_animator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80023494 -> 0x800247E0
*/
// Range: 0x80023494 -> 0x800234D0
// this: r31
BoarAnimator::BoarAnimator() {
    // References
    // -> struct [anonymous] __vt__12BoarAnimator;
}

// Range: 0x800234D0 -> 0x80023568
// this: r27
BoarAnimator::~BoarAnimator() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> struct [anonymous] __vt__12BoarAnimator;
}

// Range: 0x80023568 -> 0x8002364C
void BoarAnimator::GetAllIKBoneIndices(enum eIKBones eBone /* r28 */, unsigned int & outRoot /* r29 */, unsigned int & outMid /* r30 */, unsigned int & outEnd /* r31 */) {}

// Range: 0x8002364C -> 0x800239D8
// this: r29
unsigned char BoarAnimator::Initialize(class cXPerson * person /* r30 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int i; // r30
    unsigned int rootBoneIdx; // r1+0x10
    unsigned int midBoneIdx; // r1+0xC
    unsigned int endBoneIdx; // r1+0x8
}

// Range: 0x80023A14 -> 0x80023C54
// this: r29
void BoarAnimator::setMovementVelocityFromAnimation() {
    // Local variables
    int trans; // r4
    class EVec3 vTrans; // r1+0x1C
    float duration; // f31
    float distance; // f1
    class EACTrack tempTrack; // r1+0x28
    const struct AnimRef * SkillId; // r1+0xC
    class EAnimNodeDataPos * pNodeDataPos; // r0
    struct EACTrackNodeStreams * pStreams; // r0
    class ERAnim * animPointer; // r26
    float * pVelocity; // r31
    unsigned int valueFlag; // r30
    unsigned char scale; // r1+0x8

    // References
    // -> float kMinWalkAnimDistance;
    // -> class EAnimManager _animman;
}

// Range: 0x80023C54 -> 0x80023C58
void BoarAnimator::Update() {}

// Range: 0x80023C58 -> 0x80023E7C
// this: r27
enum TreeReturnCode BoarAnimator::CarryBehavior(const class AnimateNewParam * param /* r28 */, signed short animID /* r29 */, const struct AnimRef * & skill /* r30 */, class StackElem * elem /* r31 */) {
    // Local variables
    float fBlendTime; // f31
    int behavior; // r0
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r31
    enum TreeReturnCode code; // r31
    unsigned char bBackwards; // r0

    // References
    // -> float s_RightArmCarryIndexArray[49];
}

// Range: 0x80023E7C -> 0x80023E80
void BoarAnimator::handleMoodAnimations() {}

// Range: 0x80023E80 -> 0x80023ED4
void BoarAnimator::InitStaticAnimationElements() {
    // References
    // -> float s_RightArmCarryIndexArray[49];
}

// Range: 0x80023ED4 -> 0x80024094
// this: r31
float BoarAnimator::GetZRotation() {
    // Local variables
    float trackFrames; // f0
    float rot; // f1
    float blendinfactor; // f3
    float lastDir; // f4
}

// Range: 0x80024094 -> 0x800240EC
float BoarAnimator::GetMovementVelocityFromStyle() {
    // Local variables
    float fVelocity; // f1
}

// Range: 0x800240EC -> 0x80024140
void BoarAnimator::UpdateSimDirection() {}

// Range: 0x80024140 -> 0x80024308
// this: r30
unsigned char BoarAnimator::rotateAnimation(float DeltaTime /* f30 */, float DesiredDir /* f31 */, float DeltaDir /* f29 */) {
    // Local variables
    unsigned char bRetVal; // r31
    float TurnRate; // f0
    float DeltaMovement; // f30
    float RotateDirection; // f0
}

// Range: 0x80024308 -> 0x80024310
float BoarAnimator::GetWalkToRunDistance() {}

// Range: 0x80024310 -> 0x80024318
float BoarAnimator::GetRunToWalkDistance() {}

// Range: 0x80024318 -> 0x80024360
// this: r31
float BoarAnimator::GetXRotation() {}

// Range: 0x80024360 -> 0x80024420
// this: r31
float BoarAnimator::ComputeOffset() {
    // Local variables
    float retOffset; // f1
    float retOffset; // f0
}

// Range: 0x80024420 -> 0x800247E0
// this: r28
void BoarAnimator::AdjustIKTargetHeight(class IKData * pIKData /* r29 */, class EMat4 & endBoneOrient /* r30 */) {
    // Local variables
    float socialModeDelta; // r31
    unsigned char isFrontBackLower; // r0
    float deltaOffset; // f0
    float deltaFrontBackOffset; // f0
    float totalDelta; // f30
    float totalDelta; // f30
    float totalDelta; // r31
    float totalDelta; // r31
    float totalDelta; // f30
    float totalDelta; // f30
    float totalDelta; // r31
    float totalDelta; // f29
}


