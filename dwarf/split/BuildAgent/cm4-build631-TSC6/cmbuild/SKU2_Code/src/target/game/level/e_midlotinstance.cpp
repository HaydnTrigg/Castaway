/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_midlotinstance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008BE04 -> 0x8008D438
*/
// Range: 0x8008BE04 -> 0x8008BEBC
// this: r28
EMidLotInstance::EMidLotInstance(struct MidLotObject * mplObj /* r29 */, enum eMidLotObjectType objectType /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15EMidLotInstance;
}

// Range: 0x8008BF14 -> 0x8008BF9C
// this: r30
EMidLotInstance::~EMidLotInstance() {
    // References
    // -> struct [anonymous] __vt__15EMidLotInstance;
}

// Range: 0x8008BF9C -> 0x8008C088
// this: r31
void EMidLotInstance::Init() {
    // Local variables
    float kDegreeConversion; // f0
    class EQuat rot; // r1+0x18
}

// Range: 0x8008C088 -> 0x8008C0CC
void EMidLotInstance::MagicCookieInit() {}

// Range: 0x8008C0CC -> 0x8008C184
// this: r31
void EMidLotInstance::SetupModel() {
    // Local variables
    float newScaler; // f0

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8008C184 -> 0x8008C1DC
// this: r31
void EMidLotInstance::SetupCharacter() {}

// Range: 0x8008C1DC -> 0x8008C254
// this: r31
void EMidLotInstance::SetupAnimation() {}

// Range: 0x8008C254 -> 0x8008C3C0
// this: r31
void EMidLotInstance::BuildDigests() {
    // Local variables
    class DigestGeomShaderPtr * digest; // r28
    int cSubModel; // r27
    class ESubModel & sm; // r26
    int cSubModelShader; // r25
    class ESubModelShader & sms; // r24
    unsigned char isLitFromBothSides; // r1+0x8

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8008C3C0 -> 0x8008C434
// this: r31
void EMidLotInstance::Update() {}

// Range: 0x8008C434 -> 0x8008C5C8
// this: r24
void EMidLotInstance::ProcessAnimationNotes() {
    // Local variables
    const class EACTrack * pTrack; // r0
    const class ERAnim * pAnim; // r0
    float fTimeMultiplier; // f31
    unsigned int iTickUpdateTime; // r0
    unsigned int iSize; // r0
    unsigned int iDelay; // r29
    const class TArray * pNotes; // r28
    unsigned int iOldDuration; // r27
    unsigned int iNewDuration; // r30
    unsigned int iAnimDuration; // r3
    unsigned char bLooped; // r26
    unsigned int i; // r25
    unsigned int iModTime; // r0
    unsigned char handleEvent; // r3

    // References
    // -> float _dt;
}

// Range: 0x8008C5C8 -> 0x8008C650
// this: r30
void EMidLotInstance::HandleAnimationEvent(unsigned int iNegTime /* r31 */) {}

// Range: 0x8008C650 -> 0x8008C6A8
void EMidLotInstance::HandleSoundEvent(const char * eventID /* r30 */, unsigned int iNegTime /* r31 */) {}

// Range: 0x8008C6A8 -> 0x8008C7DC
// this: r29
void EMidLotInstance::HandleEffectsEvent(const struct EAnimNote & pNote /* r30 */) {
    // Local variables
    const class REffectsAttachment * pEffectAttachment; // r31
    class EParticleObj * pParticleObj; // r4
    class NLIteratorPtrType * it; // r1+0x8

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x8008C7DC -> 0x8008C844
class EParticleObj * EMidLotInstance::FindMidLotParticleEffect(const class REffectsAttachment * pEffectAttachment /* r30 */, class NLIteratorPtrType * & it /* r31 */) {
    // Local variables
    class EParticleObj * pParticleObj; // r0
}

// Range: 0x8008C844 -> 0x8008C9A0
// this: r29
void EMidLotInstance::DoAnimation() {
    // Local variables
    class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
    const struct EACNodeState * pNodeStates; // r0
    signed short nNewAnimStateFlags; // r5
}

// Range: 0x8008C9A0 -> 0x8008CA90
// this: r28
void EMidLotInstance::DrawSetup(class ERC * prc /* r29 */, class InstanceData * pInstanceData /* r30 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
}

// Range: 0x8008CA90 -> 0x8008CAEC
// this: r6
void EMidLotInstance::DrawDigest(class ERC * prc /* r30 */, const class DigestGeomShaderPtr * pDigest /* r31 */) {}

// Range: 0x8008CAEC -> 0x8008CBD8
// this: r22
void EMidLotInstance::DrawDigests(class ERC * prc /* r23 */, class EOrderTableData & otd /* r24 */, unsigned char bHasAlpha /* r25 */) {
    // Local variables
    const class DigestGeomShaderPtr * pDigest; // r29
    int nDigest; // r28
    int iDigest; // r27
    const struct EShaderDef * pShaderDef; // r26
}

// Range: 0x8008CBD8 -> 0x8008CC80
// this: r30
void EMidLotInstance::DrawFinish() {
    // Local variables
    class NLIteratorPtrType * it; // r31
    class EParticleObj * pParticleObj; // r0
}

// Range: 0x8008CC80 -> 0x8008CD44
// this: r29
void EMidLotInstance::Draw(class ERC * prc /* r30 */) {
    // Local variables
    unsigned char bHasAlpha; // r31
    class EOrderTableData otd; // r1+0x8
}

// Range: 0x8008CD44 -> 0x8008CE60
// this: r30
void EMidLotInstance::DrawShadow(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
}

// Range: 0x8008CE60 -> 0x8008CFE4
// this: r28
void EMidLotInstance::DrawWithShadow(struct ELevelDrawData & renderParam /* r29 */, class EMat4 & shadowMatrix /* r30 */, float shadowAlpha /* f31 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8008CFE4 -> 0x8008D0B4
void EMidLotInstance::MidlotOrderTableCallback(struct ELevelDrawData & renderParam /* r28 */, class EOrderTableData * otd /* r29 */) {
    // Local variables
    class EMidLotInstance * pInstance; // r31
    const class DigestGeomShaderPtr * pDigest; // r30
    class ERLevel * pLevel; // r0

    // References
    // -> class EVec3 s_vDistantPointToForceSkySortOrder;
    // -> class EEngine * _pEngine;
}

// Range: 0x8008D0B4 -> 0x8008D0DC
// this: r5
unsigned int EMidLotInstance::VisibilityTest() {}

// Range: 0x8008D0DC -> 0x8008D17C
// this: r31
void EMidLotInstance::SetupBounds() {
    // Local variables
    float newScaler; // f0
    class EMat4 mOrient; // r1+0x20
    class EBound3 b; // r1+0x8
}

// Range: 0x8008D17C -> 0x8008D188
void EMidLotInstance::FreezeAnimation() {}

// Range: 0x8008D188 -> 0x8008D2C8
// this: r31
void EMidLotInstance::LightingCalculation() {
    // Local variables
    struct ELights & lightsOut; // r27
    const class DigestGeomShaderPtr * pDigest; // r28
    class EVec3 vTargetPos; // r1+0x14
    const class RoomData * rd; // r0
    int i; // r26
}

// Range: 0x8008D344 -> 0x8008D3E0
// this: r29
void EMidLotInstance::Deallocate() {
    // Local variables
    int i; // r30
}

// Range: 0x8008D3E0 -> 0x8008D438
// this: r31
void EMidLotInstance::SafeDelete() {}


