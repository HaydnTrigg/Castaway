/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\morphutilities.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003F42C -> 0x80040A30
*/
// Range: 0x8003F42C -> 0x8003F460
// this: r31
MorphTargetParam::MorphTargetParam() {}

// Range: 0x8003F460 -> 0x8003F4A4
class MorphTargetParam * MorphTargetParam::Instance() {
    // References
    // -> class MorphTargetParam * s_pInstance;
}

// Range: 0x8003F4A4 -> 0x8003F4CC
unsigned int MorphTargetParam::GetNumTargetIndices() {}

// Range: 0x8003F4CC -> 0x8003F518
float MorphTargetParam::GetMorphValStart() {}

// Range: 0x8003F518 -> 0x8003F540
float MorphTargetParam::GetMorphValNormal() {}

// Range: 0x8003F540 -> 0x8003F58C
float MorphTargetParam::GetMorphValEnd() {}

// Range: 0x8003F58C -> 0x8003F5F8
// this: r29
float MorphTargetParam::GetMorphValRange(enum eSpecies species /* r30 */, enum eMorphTargetRegion morphRegion /* r31 */) const {}

// Range: 0x8003F5F8 -> 0x8003F6DC
// this: r29
float MorphTargetParam::ConvertScaleToMorphVal(float fScale /* f30 */, enum eSpecies species /* r30 */, enum eMorphTargetRegion morphRegion /* r31 */) const {
    // Local variables
    float fMorphVal; // f31
}

// Range: 0x8003F6DC -> 0x8003F784
// this: r29
float MorphTargetParam::ConvertMorphValToScale(float fMorphVal /* f30 */, enum eSpecies species /* r30 */, enum eMorphTargetRegion morphRegion /* r31 */) const {
    // Local variables
    float fScale; // f1
}

// Range: 0x8003F784 -> 0x8003F7D0
enum eMorphTargetRegion MorphTargetParam::ConvertEventRegionToMorphTargetParamRegion() {
    // Local variables
    enum eMorphTargetRegion morphTargetRegion; // r3
}

// Range: 0x8003F7D0 -> 0x8003F804
// this: r31
LatticeParam::LatticeParam() {}

// Range: 0x8003F804 -> 0x8003F848
class LatticeParam * LatticeParam::Instance() {
    // References
    // -> class LatticeParam * s_pInstance;
}

// Range: 0x8003F848 -> 0x8003F8B0
float LatticeParam::GetMorphValStart() {}

// Range: 0x8003F8B0 -> 0x8003F924
float LatticeParam::GetMorphValNormal() {}

// Range: 0x8003F924 -> 0x8003F9A4
float LatticeParam::GetMorphValForBodyType(enum eBodyType bodyType /* r31 */) {}

// Range: 0x8003F9A4 -> 0x8003FA0C
float LatticeParam::GetMorphValEnd() {}

// Range: 0x8003FA0C -> 0x8003FA78
// this: r29
float LatticeParam::GetMorphValRange(enum eSpecies species /* r30 */, enum eLatticeMorphRegion morphRegion /* r31 */) const {}

// Range: 0x8003FA78 -> 0x8003FB5C
// this: r29
float LatticeParam::ConvertScaleToMorphVal(float fScale /* f30 */, enum eSpecies species /* r30 */, enum eLatticeMorphRegion morphRegion /* r31 */) const {
    // Local variables
    float fMorphVal; // f31
}

// Range: 0x8003FB5C -> 0x8003FC58
// this: r29
float LatticeParam::ConvertMorphValToScale(float fMorphVal /* f30 */, enum eSpecies species /* r30 */, enum eLatticeMorphRegion morphRegion /* r31 */) const {
    // Local variables
    float fScale; // f0
}

// Range: 0x8003FC58 -> 0x8003FCA8
enum eLatticeMorphRegion LatticeParam::ConvertEventRegionToLatticeParamRegion() {
    // Local variables
    enum eLatticeMorphRegion latticeMorphRegion; // r3
}

// Range: 0x8003FCA8 -> 0x8003FCEC
// this: r31
MorphUtilities::MorphUtilities() {}

// Range: 0x8003FCEC -> 0x8003FD34
// this: r31
MorphUtilities::~MorphUtilities() {}

// Range: 0x8003FD34 -> 0x8003FE00
// this: r30
void MorphUtilities::ApplyAllLatticeMorphs(class CasSimDescription * pSimDesc /* r31 */) {}

// Range: 0x8003FE00 -> 0x8003FEE8
unsigned int MorphUtilities::GetLatticeIndex() {}

// Range: 0x8003FEE8 -> 0x800400DC
// this: r31
void MorphUtilities::ApplyLattice(float fMorphValue /* f31 */) {}

// Range: 0x800400DC -> 0x80040370
// this: r28
void MorphUtilities::ApplySimHeadLatticeToBodyPart(enum eBodyPart bodyPart /* r29 */, float morphValue /* f31 */) {
    // Local variables
    unsigned int latticeIndex; // r31
    unsigned int bodyPartIndex; // r0
    class ERModel * pModel; // r29
    int latticeKeyframeIndexPrimary; // r1+0x14
    int latticeKeyframeIndexSecondary; // r1+0x10
    float latticeWeightPrimary; // r1+0xC
    float latticeWeightSecondary; // r1+0x8
    int latticeKeyframeIndex; // r30
}

// Range: 0x80040370 -> 0x80040550
// this: r30
unsigned char MorphUtilities::ApplySimBodyLatticeToBodyPart(enum eBodyPart bodyPart /* r26 */, enum eLatticeMorphRegion morphRegion /* r31 */, float morphValue /* f31 */) {
    // Local variables
    unsigned int latticeIndex; // r28
    int latticeKeyframeIndexPrimary; // r1+0x14
    int latticeKeyframeIndexSecondary; // r1+0x10
    float latticeWeightPrimary; // r1+0xC
    float latticeWeightSecondary; // r1+0x8
    unsigned char morphed; // r27
    unsigned int bodyPartIndex; // r0
    class ERModel * pModel; // r26
    int subIndex; // r29
}

// Range: 0x80040550 -> 0x800406D8
// this: r27
void MorphUtilities::GetSimFacialMorphTargetIndicesAndWeights(float morphValue /* f31 */, float & morphTargetWeightPrimary /* r28 */, int & morphTargetIndexPrimary /* r29 */, float & morphTargetWeightSecondary /* r30 */, int & morphTargetIndexSecondary /* r31 */) {}

// Range: 0x800406D8 -> 0x80040848
// this: r28
void MorphUtilities::GetSimBodyLatticeKeyframeIndicesAndWeights(float morphValue /* f31 */, enum eLatticeMorphRegion morphRegion /* r29 */, float & latticeWeightPrimary /* r30 */, int & latticeKeyframeIndexPrimary /* r31 */) {}

// Range: 0x80040848 -> 0x80040A30
// this: r29
void MorphUtilities::GetSimHeadLatticeKeyframeIndicesAndWeights(float morphValue /* f31 */, float & latticeWeightPrimary /* r26 */, int & latticeKeyframeIndexPrimary /* r30 */, float & latticeWeightSecondary /* r27 */, int & latticeKeyframeIndexSecondary /* r31 */) {}


