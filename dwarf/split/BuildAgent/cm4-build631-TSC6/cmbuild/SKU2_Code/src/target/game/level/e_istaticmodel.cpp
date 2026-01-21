/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_istaticmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80086DC8 -> 0x8008857C
*/
// Range: 0x80086DC8 -> 0x80086E68
static void ExpandBoundingBox(class EBound3 & bound /* r31 */) {
    // Local variables
    class EVec3 extraPts[2]; // r1+0x20
}

// Range: 0x80086E68 -> 0x80086F18
// this: r30
EIStaticModel::EIStaticModel() {
    // References
    // -> struct [anonymous] __vt__13EIStaticModel;
}

// Range: 0x80086F18 -> 0x80086F8C
// this: r30
EIStaticModel::~EIStaticModel() {
    // References
    // -> struct [anonymous] __vt__13EIStaticModel;
}

// Range: 0x80086F8C -> 0x80086FD8
// this: r30
void EIStaticModel::Write(class EStream & s /* r31 */) {}

// Range: 0x80086FD8 -> 0x80087044
// this: r30
void EIStaticModel::Read(class EStream & s /* r31 */) {}

// Range: 0x80087044 -> 0x80087054
// this: r5
void EIStaticModel::GetBoundSphere() {}

// Range: 0x80087054 -> 0x80087134
// this: r29
void EIStaticModel::Setup(class EInstance * shadowOwner /* r30 */, class EAnimController * pAC /* r31 */) {}

// Range: 0x80087134 -> 0x800871D4
// this: r29
void EIStaticModel::DeallocateModel() {
    // Local variables
    int i; // r30
}

// Range: 0x800871D4 -> 0x80087234
// this: r29
void EIStaticModel::SetModel(class EInstance * shadowOwner /* r30 */, class EAnimController * pAC /* r31 */) {}

// Range: 0x80087234 -> 0x800872B0
// this: r30
void EIStaticModel::SetOrient(const class EMat4 & mOrient /* r31 */) {
    // Local variables
    float scaler; // f0
}

// Range: 0x800872B0 -> 0x800872F8
// this: r30
void EIStaticModel::SlamOrient(const class EMat4 & mOrient2 /* r31 */) {}

// Range: 0x800872F8 -> 0x80087498
// this: r31
void EIStaticModel::RegisterFloor() {
    // Local variables
    int cSubModel; // r27
    class ESubModel * pSubModel; // r26
    class EOrderTableData otd; // r1+0x8
    int cShader; // r25
    int nTotalShaders; // r0
    class ESubModelShader * pSubModelShader; // r24
    const struct EShaderDef * sd; // r0

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80087498 -> 0x800875BC
// this: r29
void EIStaticModel::SetupModel(class EInstance * shadowOwner /* r30 */, class EAnimController * pAC /* r31 */) {
    // Local variables
    float prevScaler; // f0
    float newScaler; // f0

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x800875BC -> 0x8008776C
// this: r31
void EIStaticModel::BuildDigests() {
    // Local variables
    class DigestGeomShaderPtr * digest; // r28
    int cSubModel; // r27
    class ESubModel & sm; // r26
    int cSubModelShader; // r25
    class ESubModelShader & sms; // r24

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8008776C -> 0x800878C4
// this: r31
void EIStaticModel::SetupBounds() {
    // Local variables
    class EBound3 b; // r1+0x38
    class EVec3 vCenter; // r1+0x2C
    class EVec3 vDimension; // r1+0x20
    float dimension; // f31
}

// Range: 0x800878C4 -> 0x80087908
unsigned int EIStaticModel::VisibilityTest(class E3DWindow & win /* r31 */) {}

// Range: 0x80087908 -> 0x80087AE8
// this: r27
void EIStaticModel::Draw(struct ELevelDrawData & renderParam /* r28 */) {
    // Local variables
    unsigned char isAlphaFadeOn; // r31
    struct ELights * pLights; // r26
    class EMat4 * pmOrient; // r30
    class EOrderTableData otd; // r1+0x8
    unsigned char bSentMatrices; // r29
    const class DigestGeomShaderPtr * pDigest; // r26
    int nDigest; // r25
}

// Range: 0x80087AE8 -> 0x80087BE8
// this: r30
void EIStaticModel::DrawAsShadow(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
}

// Range: 0x80087BE8 -> 0x80087D54
// this: r30
void EIStaticModel::DrawShadow(struct ELevelDrawData & renderParam /* r31 */) {
    // Local variables
    signed short location; // r1+0xA
    signed short lightLoc; // r1+0x8
    class EVec3 light; // r1+0xC
    class EMat4 mShadowView; // r1+0x58
    const class EMat4 & mPrevLookAt; // r0
}

// Range: 0x80087D54 -> 0x80087DD0
void EIStaticModel::AnimOrderTableCallback(struct ELevelDrawData & renderParam /* r29 */, class EOrderTableData * otd /* r30 */) {
    // Local variables
    class ERShader * shader; // r31
}

// Range: 0x80087DD0 -> 0x80087EA8
// this: r24
void EIStaticModel::ChangeShader(unsigned int oldId /* r25 */, unsigned int newId /* r26 */) {
    // Local variables
    class DigestGeomShaderPtr * digest; // r30
    int cSubModel; // r29
    class ESubModel & sm; // r28
    int cSubModelShader; // r27
    class ESubModelShader & sms; // r0

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80087EA8 -> 0x80087F3C
// this: r29
void EIStaticModel::RebuildShaders() {
    // Local variables
    int i; // r30
}

// Range: 0x80087F3C -> 0x80087F88
// this: r31
void EIStaticModel::RealizeShaderTuning() {}

// Range: 0x80087F88 -> 0x800882B8
// this: r14
void EIStaticModel::ReplaceBaseTexture(class ERTexture * pTexture /* r15 */, unsigned int altShaderID /* r16 */, class ERTexture * pAltTexture /* r17 */, enum ERenderPassReplaceTexture eReplaceRenderPassTexture /* r18 */) {
    // Local variables
    class DigestGeomShaderPtr * pDigest; // r27
    class ERShader * pOverrideShader; // r26
    class ERShader * pNewShader; // r19
    int nNumSubModels; // r0
    int nNumSubModelShaders; // r0
    int cSubModel; // r25
    int cSubModelShader; // r24
    unsigned int newResID; // r23
    class ERTexture * pCurrentBaseTexture; // r19
    class ESubModel & sm; // r22
    class ESubModelShader & sms; // r0
    unsigned char bUseAltTexture; // r21
    unsigned int i; // r20
    unsigned int nFreeUnreferencedResourcesCount; // r19
    char szCloneNum[12]; // r1+0x8

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800882B8 -> 0x800882D0
unsigned char EIStaticModel::HasModifiableColor() {}

// Range: 0x800882D0 -> 0x800882D8
void EIStaticModel::ModifyColor() {}

// Range: 0x800882D8 -> 0x800882E0
unsigned int EIStaticModel::GetModifiableColor() {}

// Range: 0x800882E0 -> 0x80088424
// this: r30
void EIStaticModel::DrawImmediate(class ERC * prc /* r31 */, class EAnimController * pAC /* r23 */) {
    // Local variables
    int nSubModels; // r0
    class ESubModel * pSubModel; // r27
    const struct EACNodeState * pNodeStates; // r26
    int cSubModel; // r25
    int nSubModelShaders; // r0
    int cSubModelShader; // r24
    class ESubModelShader * pSubModelShader; // r23
}

// Range: 0x80088424 -> 0x8008853C
// this: r26
void EIStaticModel::DrawImmediateNoShader(class ERC * prc /* r24 */, class EAnimController * pAC /* r25 */) {
    // Local variables
    int nSubModels; // r0
    class ESubModel * pSubModel; // r29
    const struct EACNodeState * pNodeStates; // r28
    int cSubModel; // r27
    int nSubModelShaders; // r0
    class ESubModelShader * pSubModelShader; // r26
    int cSubModelShader; // r25
}

// Range: 0x8008853C -> 0x8008857C
char * EIStaticModel::GetInstName() {
    // Local variables
    class ERModel * model; // r0
}


