/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\awarenessmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001D060 -> 0x8001FEDC
*/
// Range: 0x8001D060 -> 0x8001D134
// this: r29
AwarenessManager::AwarenessManager() {
    // References
    // -> struct [anonymous] __vt__16AwarenessManager;
}

// Range: 0x8001D134 -> 0x8001D264
// this: r29
void AwarenessManager::Init(class SAnimator2 * pSAnimator /* r30 */) {
    // References
    // -> float kAwarenessLookupDelay;
}

// Range: 0x8001D264 -> 0x8001D34C
// this: r30
void AwarenessManager::Reset() {
    // References
    // -> float kAwarenessLookupDelay;
}

// Range: 0x8001D34C -> 0x8001D3AC
// this: r31
void AwarenessManager::ClearPendingCarryAnim() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001D3AC -> 0x8001D430
// this: r30
AwarenessManager::~AwarenessManager() {
    // References
    // -> struct [anonymous] __vt__16AwarenessManager;
}

// Range: 0x8001D430 -> 0x8001D52C
// this: r29
void AwarenessManager::AwarenessCheck(unsigned int animState /* r30 */) {
    // Local variables
    unsigned char isPaused; // r31
}

// Range: 0x8001D52C -> 0x8001D584
// this: r30
void AwarenessManager::handleAwarenessAnimations(unsigned int animState /* r31 */) {}

// Range: 0x8001D584 -> 0x8001D5C8
void AwarenessManager::SetIsRaining(unsigned char newVal /* r31 */) {}

// Range: 0x8001D5C8 -> 0x8001D654
unsigned char AwarenessManager::AwarenessAutoRunCheck(float fRouteDistance /* f31 */) {
    // Local variables
    float autoRunTestDistance; // f0
    unsigned char bRetVal; // r31
}

// Range: 0x8001D654 -> 0x8001D67C
void AwarenessManager::SetPlayerControl() {}

// Range: 0x8001D67C -> 0x8001D9B0
// this: r28
class EQuat AwarenessManager::GetFirstNodeRotation(class AwarenessManager * const this /* r29 */, float deltaTime /* f29 */, const class EVec3 & maxFirstNodeRotation /* r31 */) {
    // Local variables
    class EVec3 maxRotation; // r1+0x14
    class EVec3 faceRot; // r1+0x8
    int i; // r30
    float mulFactor; // f27

    // References
    // -> float kAwarenessAngleTurnRate;
}

// Range: 0x8001D9B0 -> 0x8001DB3C
// this: r28
class EQuat AwarenessManager::GetSecondNodeRotation(const class AwarenessManager * const this /* r29 */, const class EVec3 & maxFirstNodeRotation /* r31 */) const {
    // Local variables
    class EVec3 torsoRot; // r1+0x8
    int i; // r30
}

// Range: 0x8001DB3C -> 0x8001DD48
void AwarenessManager::AwarenessAnimateHeadLeadsMotion(unsigned int userParam /* r31 */, struct EACNodeState * nodes /* r29 */) {
    // Local variables
    class AwarenessManager * pAwarenessManager; // [invalid]
    float deltaTime; // f31
    struct EACNodeState * pNodeState; // r30
    struct EACNodeState newNodeState; // r1+0x88

    // References
    // -> float kMaxLookupAngle;
    // -> float _dt;
}

// Range: 0x8001DD48 -> 0x8001DF0C
void AwarenessManager::AwarenessAnimateTorsoLeadsMotion(unsigned int userParam /* r29 */, struct EACNodeState * nodes /* r30 */) {
    // Local variables
    class AwarenessManager * pAwarenessManager; // [invalid]
    float deltaTime; // f31
    struct EACNodeState * pNodeState; // r31
    struct EACNodeState newNodeState; // r1+0x78

    // References
    // -> float _dt;
}

// Range: 0x8001DF0C -> 0x8001E138
// this: r28
unsigned char AwarenessManager::SetAwarenessTargetAngle(class cXObject * awarenessTargetObject /* r29 */) {
    // Local variables
    unsigned char bRetVal; // r31
    float distance; // f29
    float deltaDir; // f0
    float thresholdAngle; // f0
    class cXPerson * pPerson; // r30
    class EVec3 awareLookAtPos; // r1+0x20
    class ISimInstance * pInstance; // r0
    class EVec3 lookerHeadPos; // r1+0x14
    float deltaElevation; // f29

    // References
    // -> float kAwarenessMaxAllowableLookupAngle;
    // -> float kAwarenessMaxAllowableAngle;
    // -> float kInfluenceTileDistance;
}

// Range: 0x8001E138 -> 0x8001E24C
// this: r31
void AwarenessManager::handlePassiveInfluenceAnimation() {
    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessBlendTime;
}

// Range: 0x8001E24C -> 0x8001E288
void AwarenessManager::handleMemoryAwarenessAnimation() {}

// Range: 0x8001E288 -> 0x8001E33C
// this: r31
void AwarenessManager::handleAwarenessTurningAnimation() {
    // Local variables
    unsigned int animatorParam; // [invalid]
}

// Range: 0x8001E33C -> 0x8001E37C
unsigned char AwarenessManager::SetAwareOfObject() {}

// Range: 0x8001E37C -> 0x8001E3AC
unsigned char AwarenessManager::SetAwareOfObjectKilled() {}

// Range: 0x8001E3AC -> 0x8001E428
// this: r31
unsigned char AwarenessManager::ClearAwareOfObject() {}

// Range: 0x8001E428 -> 0x8001E4AC
unsigned char AwarenessManager::IsTimeToCheckMemoryAwareness() {
    // Local variables
    float deltaTime; // f3
    unsigned char bRetVal; // r31

    // References
    // -> float kAwarenessLookupDelay;
    // -> float _dt;
}

// Range: 0x8001E4AC -> 0x8001E570
// this: r30
unsigned char AwarenessManager::ShouldAwarenessBeActive() {
    // Local variables
    unsigned char bRetVal; // r31
    class EACTrack * pTrack; // r0
}

// Range: 0x8001E570 -> 0x8001E638
// this: r28
int AwarenessManager::CanSeePlayer() {
    // Local variables
    float distance; // f0
    int playerID; // r30
    class cXPerson * pPlayer; // r29
    float deltaDir; // f0
    float thresholdAngle; // f0

    // References
    // -> float kAwarenessMaxAllowableAngle;
    // -> float kInfluenceTileDistance;
    // -> class EGlobal _globals;
}

// Range: 0x8001E638 -> 0x8001E6F8
// this: r28
void AwarenessManager::GetActiveMemoryCategory(int & outputMemoryCategory /* r29 */, int & outputMemoryCategoryValue /* r30 */) {
    // Local variables
    class cXPerson * personToTry; // r31
}

// Range: 0x8001E6F8 -> 0x8001E870
// this: r29
void AwarenessManager::StartMemoryAwarenessSprite() {
    // Local variables
    class SpriteSlot & slot; // r31
    int index; // r30
}

// Range: 0x8001E870 -> 0x8001E92C
// this: r30
unsigned char AwarenessManager::SetPendingMemoryAwarenessAnim() {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x8
    unsigned char bRetVal; // r31

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001E92C -> 0x8001EAF4
// this: r31
void AwarenessManager::StartMemoryAwarenessAnimation(enum eAwarenessAction awarenessAction /* r29 */) {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x8
    class EACTrack * pTrack; // r30

    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessSmallEpsilon;
    // -> float kAwarenessBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x8001EAF4 -> 0x8001EC1C
// this: r31
void AwarenessManager::SetMemoryAwarenessActionToTry() {
    // Local variables
    int activeMemoryCategoryValue; // r1+0x8
}

// Range: 0x8001EC1C -> 0x8001EC80
// this: r31
void AwarenessManager::ClearPendingMemoryAwarenessAnim() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001EC80 -> 0x8001EEC0
// this: r31
void AwarenessManager::MemoryAwarenessClearAction() {
    // Local variables
    class cXPerson * pPerson; // r0
    class SpriteSlot & slot; // r31

    // References
    // -> float kAwarenessBlendTime;
}

// Range: 0x8001EEC0 -> 0x8001EF28
unsigned char AwarenessManager::IsMemoryAwarenessAnimDone() {
    // Local variables
    enum eTrackFlags trkFlags; // r4
    unsigned char bRetVal; // r31
}

// Range: 0x8001EF28 -> 0x8001EFE8
// this: r31
void AwarenessManager::UpdateAwarenessAngle() {}

// Range: 0x8001EFE8 -> 0x8001EFEC
void AwarenessManager::RelationshipAwarenessCheck() {}

// Range: 0x8001EFEC -> 0x8001F168
// this: r30
void AwarenessManager::MemoryAwarenessCheck(unsigned int animState /* r31 */) {
    // Local variables
    int playerID; // r4

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8001F168 -> 0x8001F27C
// this: r29
void AwarenessManager::StopPassiveInfluenceAnimation() {
    // Local variables
    const struct AnimRef * SkillId; // r30

    // References
    // -> float kAwarenessBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x8001F27C -> 0x8001F3DC
// this: r28
unsigned char AwarenessManager::StartPassiveInfluenceAnimation(const struct AnimRef * SkillId /* r29 */) {
    // Local variables
    unsigned char bRetVal; // r30
    class EACTrack * pTrack; // r30

    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessBlendTime;
    // -> float kAwarenessSmallEpsilon;
    // -> class EAnimManager _animman;
}

// Range: 0x8001F3DC -> 0x8001F478
// this: r31
void AwarenessManager::RainAwarenessCheck() {}

// Range: 0x8001F478 -> 0x8001F734
// this: r31
void AwarenessManager::PassiveInfluenceAwarenessCheck(unsigned int animState /* r27 */) {
    // Local variables
    class PassiveInfluenceMap * pInfluenceMap; // r30
    int x; // r29
    int y; // r28
    class PassiveInfluencePerson * influenceItem; // r28
    unsigned char animType; // r29
    const struct AnimRef * animName; // r1+0x8
    unsigned char valid; // r0

    // References
    // -> float kTimeBetweenHungerAnims;
    // -> float _dt;
}

// Range: 0x8001F734 -> 0x8001F744
class cXObject * AwarenessManager::GetPlayerObject() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8001F744 -> 0x8001F8C8
// this: r29
float AwarenessManager::GetDeltaAngleToTargetObject(class cXObject * awarenessTargetObject /* r30 */) {
    // Local variables
    float testTargetAngle; // f0
    float deltaDir; // f31
    class EVec2 TempVec; // r1+0x10
    class EVec2 pos; // r1+0x8
    class EVec3 BonePos; // r1+0x18

    // References
    // -> float kAwarenessSmallEpsilon;
}

// Range: 0x8001F8C8 -> 0x8001F94C
void AwarenessManager::getPassiveInfluenceSkillID() {
    // Local variables
    int animID; // r4
    unsigned char scale; // r1+0x8
}

// Range: 0x8001F94C -> 0x8001FA8C
void AwarenessManager::getAwarenessSkillID() {
    // Local variables
    int animID; // r7
    unsigned char scale; // r1+0x9
    unsigned char scale; // r1+0x8
}

// Range: 0x8001FA8C -> 0x8001FB54
// this: r30
unsigned char AwarenessManager::shouldAutoCarry() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x8001FB54 -> 0x8001FDE4
// this: r31
void AwarenessManager::startAutoCarry() {
    // Local variables
    class EACTrack * pTrack; // r29
    int index; // r3
    const struct AnimRef * skill; // r1+0xC
    enum StdAnimIdx animIndex; // r28
    int propID; // r27
    class InventoryItems * pInventory; // r30
    unsigned char scale; // r1+0x8

    // References
    // -> float s_LeftArmCarryIndexArray[58];
    // -> float kCarryBlendTime;
    // -> float kAwarenessSmallEpsilon;
    // -> class EAnimManager _animman;
}

// Range: 0x8001FDE4 -> 0x8001FEDC
// this: r28
void AwarenessManager::endAutoCarry() {
    // Local variables
    int index; // r29

    // References
    // -> float kCarryBlendTime;
}


