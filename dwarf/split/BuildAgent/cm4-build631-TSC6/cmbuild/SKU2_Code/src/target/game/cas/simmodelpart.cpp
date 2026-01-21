/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simmodelpart.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80048BD8 -> 0x8004B794
*/
// Range: 0x80048BD8 -> 0x80048C34
// this: r30
SimModelPart::SimModelPart() {
    // References
    // -> struct [anonymous] __vt__12SimModelPart;
}

// Range: 0x80048C34 -> 0x80048CA8
// this: r30
SimModelPart::~SimModelPart() {
    // References
    // -> struct [anonymous] __vt__12SimModelPart;
}

// Range: 0x80048CA8 -> 0x80048D28
// this: r31
void SimModelPart::Init() {}

// Range: 0x80048D28 -> 0x80048D38
void SimModelPart::Reset() {}

// Range: 0x80048D38 -> 0x80048D98
// this: r30
void SimModelPart::SetSimDescription(class CasSimDescription & simDesc /* r31 */) {}

// Range: 0x80048D98 -> 0x80048DF0
// this: r31
unsigned int SimModelPart::GetCurrentModelID() const {}

// Range: 0x80048DF0 -> 0x80048E04
unsigned int SimModelPart::GetExpectedModelID() {}

// Range: 0x80048E04 -> 0x80048EA0
// this: r29
unsigned char SimModelPart::Update(unsigned char bUpdateTexture /* r30 */, unsigned char bMorphAfterModelChange /* r31 */) {}

// Range: 0x80048EA0 -> 0x800490DC
// this: r27
unsigned char SimModelPart::ChangeModel(unsigned int nModelID /* r30 */, unsigned char bUpdateTexture /* r28 */, unsigned char bApplyMorph /* r29 */) {}

// Range: 0x800490DC -> 0x800491C0
// this: r31
void SimModelPart::DeallocateModel() {}

// Range: 0x800491C0 -> 0x80049248
// this: r31
void SimModelPart::RebuildModified() {}

// Range: 0x80049248 -> 0x800492EC
void SimModelPart::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x800492EC -> 0x80049424
// this: r28
void SimModelPart::WeldSharedVertices(unsigned char bRebuild /* r29 */) {
    // Local variables
    class SimModelPart * pSimModelPart2; // r30
}

// Range: 0x80049424 -> 0x80049550
// this: r29
void SimModelPart::ApplySkin() {
    // Local variables
    unsigned int nAltShaderID; // r31
    class ERTexture * pAltTexture; // r30
}

// Range: 0x80049550 -> 0x8004963C
// this: r29
void SimModelPart::ReapplySkin() {
    // Local variables
    unsigned int nAltShaderID; // r31
    class ERTexture * pAltTexture; // r30
}

// Range: 0x8004963C -> 0x800496F8
// this: r31
void SimModelPart::TransformModelUV() {
    // Local variables
    class EVec2 scale; // r1+0x28
    class EVec2 translate; // r1+0x20
    class EVec2 altScale; // r1+0x18
    class EVec2 altTranslate; // r1+0x10
    unsigned int altShaderID; // r1+0x8
}

// Range: 0x800496F8 -> 0x800498EC
// this: r26
void SimModelPart::GetModelUVTransformParameters(class EVec2 & scale /* r27 */, class EVec2 & translate /* r28 */, unsigned int & altShaderID /* r29 */, class EVec2 & altScale /* r30 */, class EVec2 & altTranslate /* r31 */) {
    // Local variables
    class TRect bodyPartRect; // r1+0x10
    class TRect altBodyPartRect; // r1+0x8
}

// Range: 0x800498EC -> 0x80049F74
// this: r27
void SimModelPart::ApplyLatticeMorphing() {
    // Local variables
    class EIStaticModel * bodyPartsToMorph[15]; // r1+0x14
    unsigned char bMorphHead; // r30
    unsigned char bMorphTorso; // r31
    unsigned char bMorphArms; // r29
    unsigned char bMorphLegs; // r28
    int i; // r0
    class MorphUtilities morpher; // r1+0x8
    int bodyPart; // r23
    unsigned char bodyPartIndex; // r0
    class SimModelPart * pSimModelPart; // r22
}

// Range: 0x80049F74 -> 0x8004A000
// this: r31
void SimModelPart::DeallocateMorphResources() {}

// Range: 0x8004A000 -> 0x8004A074
// this: r30
class SimModelPart * SimModelPart::GetSimModelPart(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8004A074 -> 0x8004A0F4
// this: r30
class EIStaticModel * SimModelPart::GetModelPart(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8004A0F4 -> 0x8004A168
// this: r30
class ERTexture * SimModelPart::GetQuadrantTexture(enum eSimPartsMapLocation quadrantNumber /* r31 */) {}

// Range: 0x8004A168 -> 0x8004A17C
void SimModelPart::SwapChangingData(class EIStaticModel * pModel /* r0 */) {}

// Range: 0x8004A17C -> 0x8004A338
class SimModelPart * SimModelPart::CreateInstance() {}

// Range: 0x8004A338 -> 0x8004A34C
unsigned char SimModelPartHead::VerifyRequiredModels() {}

// Range: 0x8004A34C -> 0x8004A428
void SimModelPartHead::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004A428 -> 0x8004A470
unsigned char SimModelPartHead::ClothingSetHasMorphTargets() {
    // Local variables
    const struct BodyPartGeometryTSC6 * pBodyPartClothingSetData; // r0
}

// Range: 0x8004A470 -> 0x8004A478
unsigned int SimModelPartHead::GetMaxNumMorphTargetsInAnyRegion() {}

// Range: 0x8004A478 -> 0x8004A480
unsigned int SimModelPartHead::GetNumMorphTargetsInRegion() {}

// Range: 0x8004A480 -> 0x8004A488
unsigned int SimModelPartHead::GetNumMorphTargetRegions() {}

// Range: 0x8004A488 -> 0x8004A5EC
// this: r31
void SimModelPartHead::GetMorphTargetResID(enum eMorphTargetRegion morphRegion /* r29 */, unsigned int * pMorphTargetResID /* r27 */, unsigned int morphTargetResIDSize /* r28 */) {
    // Local variables
    unsigned int nBeginIndex; // r30
    const struct BodyPartGeometryTSC6 * pBodyPartClothingSetData; // r0
    unsigned int i; // r29
}

// Range: 0x8004A5EC -> 0x8004A6D4
// this: r31
void SimModelPartHead::LoadCurrentBrowseMorphTargets(enum eMorphTargetRegion morphRegion /* r28 */) {
    // Local variables
    class ERModel * pModel; // r30
    unsigned int numMorphTargets; // r29
    unsigned int nMorphTargetResID[3]; // r1+0x8
    unsigned int i; // r28
}

// Range: 0x8004A6D4 -> 0x8004A84C
// this: r26
void SimModelPartHead::ApplyMorphTargets(unsigned char bUnregisterMorphTargets /* r27 */) {
    // Local variables
    class ERModel * pHeadModel; // r31
    class CasSimDescription & simDesc; // r30
    enum eSpecies species; // r29
    unsigned int i; // r28
    enum eMorphTargetRegion morphRegion; // r0
}

// Range: 0x8004A84C -> 0x8004AB84
// this: r24
void SimModelPartHead::ApplyMorphTargetsToRegion(enum eMorphTargetRegion morphRegion /* r25 */, float fMorphValue /* f31 */, unsigned char bUnregisterMorphTargets /* r26 */) {
    // Local variables
    class ERModel * pStaticModel; // r31
    class CasSimDescription & simDesc; // r30
    enum eSpecies species; // r22
    class EIStaticModel * ppModelList[15]; // r1+0x24
    unsigned char bodyPart; // r23
    unsigned char bodyPartIndex; // r0
    class MorphUtilities morpher; // r1+0x18
    int morphTargetIndexPrimary; // r1+0x14
    int morphTargetIndexSecondary; // r1+0x10
    float morphTargetWeightPrimary; // r1+0xC
    float morphTargetWeightSecondary; // r1+0x8
    int numMorphTargets; // r29
    class ERModel * * pMorphTargets; // r28
    unsigned int * pMorphTargetResID; // r27
    int i; // r6
    float fMorphTargetWeightScaleFactor; // f31
    int nMorphRegionIndex; // r0
}

// Range: 0x8004AB84 -> 0x8004B018
// this: r30
void SimModelPartHead::HandleMorphTargetEvent(const class CasEventMorphCharacter & event /* r31 */) {
    // Local variables
    int morphTargetIndexPrimary; // r1+0x14
    int morphTargetIndexSecondary; // r1+0x10
    float morphTargetWeightPrimary; // r1+0xC
    float morphTargetWeightSecondary; // r1+0x8
    class EIStaticModel * ppModelList[15]; // r1+0xFC
    unsigned char bodyPart; // r27
    unsigned char bodyPartIndex; // r0
    class MorphUtilities morpher; // r1+0x3C
    float fMorphTargetWeightScaleFactor; // f31
    class ERModel * pHeadModel; // r27
    class EIStaticModel * ppModelList[15]; // r1+0xC0
    unsigned char bodyPart; // r27
    unsigned char bodyPartIndex; // r0
    class MorphUtilities morpher; // r1+0x30
    float fMorphTargetWeightScaleFactor; // f31
    class ERModel * pHeadModel; // r27
    class EIStaticModel * ppModelList[15]; // r1+0x84
    unsigned char bodyPart; // r27
    unsigned char bodyPartIndex; // r0
    class MorphUtilities morpher; // r1+0x24
    float fMorphTargetWeightScaleFactor; // f31
    class ERModel * pHeadModel; // r27
    class EIStaticModel * ppModelList[15]; // r1+0x48
    unsigned char bodyPart; // r27
    unsigned char bodyPartIndex; // r0
    class MorphUtilities morpher; // r1+0x18
    float fMorphTargetWeightScaleFactor; // f31
    class ERModel * pHeadModel; // r27
}

// Range: 0x8004B018 -> 0x8004B0B0
// this: r30
void SimModelPartHead::SetupPreMorphRegion(enum eMorphTargetRegion morphTargetRegion /* r31 */) {}

// Range: 0x8004B0B0 -> 0x8004B158
// this: r30
void SimModelPartHead::SetupPostMorphRegion(enum eMorphTargetRegion morphTargetRegion /* r31 */) {}

// Range: 0x8004B158 -> 0x8004B19C
unsigned int SimModelPartFacialFeature::GetAltShaderID() {}

// Range: 0x8004B19C -> 0x8004B1E0
unsigned int SimModelPartHair::GetAltShaderID() {}

// Range: 0x8004B1E0 -> 0x8004B1F4
unsigned char SimModelPartHair::VerifyRequiredModels() {}

// Range: 0x8004B1F4 -> 0x8004B2C0
void SimModelPartHair::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004B2C0 -> 0x8004B2D4
unsigned char SimModelPartTorso::VerifyRequiredModels() {}

// Range: 0x8004B2D4 -> 0x8004B3B0
void SimModelPartTorso::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004B3B0 -> 0x8004B3C4
unsigned char SimModelPartLowerBody::VerifyRequiredModels() {}

// Range: 0x8004B3C4 -> 0x8004B490
void SimModelPartLowerBody::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004B490 -> 0x8004B4A4
unsigned char SimModelPartShoes::VerifyRequiredModels() {}

// Range: 0x8004B4A4 -> 0x8004B560
void SimModelPartShoes::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004B560 -> 0x8004B5A4
unsigned int SimModelPartHat::GetAltShaderID() {}

// Range: 0x8004B5A4 -> 0x8004B670
void SimModelPartHat::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}

// Range: 0x8004B670 -> 0x8004B6D8
// this: r31
unsigned char SimModelPartSleeves::VerifyRequiredModels() const {
    // Local variables
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
}

// Range: 0x8004B6D8 -> 0x8004B794
void SimModelPartSleeves::GetWeldableBodyPartConnections() {
    // Local variables
    unsigned int index; // r9
}


