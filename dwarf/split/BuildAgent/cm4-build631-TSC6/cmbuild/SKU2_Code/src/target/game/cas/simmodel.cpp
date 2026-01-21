/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003BAF8 -> 0x8003E814
*/
// Range: 0x8003BAF8 -> 0x8003BE64
// this: r29
SimModelTSC6::SimModelTSC6() {
    // Local variables
    int i; // r30

    // References
    // -> char s_SimPartsMapNames[4][4];
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__12SimModelTSC6;
}

// Range: 0x8003BE64 -> 0x8003BFB8
// this: r30
SimModelTSC6::~SimModelTSC6() {
    // References
    // -> struct [anonymous] __vt__12SimModelTSC6;
}

// Range: 0x8003BFB8 -> 0x8003C04C
// this: r29
void SimModelTSC6::Init(class CasSimDescription * pSimDesc /* r30 */, unsigned char bHighRes /* r31 */) {}

// Range: 0x8003C04C -> 0x8003C09C
// this: r31
void SimModelTSC6::Reset() {}

// Range: 0x8003C09C -> 0x8003C0E8
void SimModelTSC6::DeallocateAllSkinTextures() {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8003C0E8 -> 0x8003C1A8
// this: r28
void SimModelTSC6::DeallocateChangingData() {
    // Local variables
    unsigned char nBodyPartIndex; // r29
}

// Range: 0x8003C1A8 -> 0x8003C1B0
class CasSimDescription * SimModelTSC6::GetSimDescription() {}

// Range: 0x8003C1B0 -> 0x8003C1B8
void SimModelTSC6::SetHighResolution() {}

// Range: 0x8003C1B8 -> 0x8003C20C
// this: r31
class CasSimDescription & SimModelTSC6::GetSimDescriptionRef() {}

// Range: 0x8003C20C -> 0x8003C274
// this: r29
void SimModelTSC6::SetSimDescription() {
    // Local variables
    int i; // r30
}

// Range: 0x8003C274 -> 0x8003C2CC
// this: r30
class SimModelPart * SimModelTSC6::GetSimModelPart(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003C2CC -> 0x8003C314
// this: r30
void SimModelTSC6::SetSimModelPart(class SimModelPart * pSimModelPart /* r31 */) {}

// Range: 0x8003C314 -> 0x8003C370
// this: r30
class BitFlags & SimModelTSC6::GetModelFlags(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003C370 -> 0x8003C3DC
// this: r29
unsigned char SimModelTSC6::GetModelFlag(enum eBodyPart bodyPart /* r30 */, int flag /* r31 */) {}

// Range: 0x8003C3DC -> 0x8003C458
// this: r28
void SimModelTSC6::SetModelFlag(enum eBodyPart bodyPart /* r29 */, int flag /* r30 */, unsigned char val /* r31 */) {}

// Range: 0x8003C458 -> 0x8003C5E8
// this: r29
void SimModelTSC6::ChangeClothing(unsigned char bDeallocateCurrentModelsBeforeChange /* r30 */, unsigned char bRemoveMorphResources /* r31 */) {
    // Local variables
    unsigned char bAnyModelsChanged; // r0
}

// Range: 0x8003C5E8 -> 0x8003C7BC
// this: r31
void SimModelTSC6::UseChangingModels() {
    // Local variables
    unsigned char bModelChanged[15]; // r1+0x14
    unsigned char bodyPartIndex; // r24
    class EIStaticModel * pOldStaticModel; // r23
    class BitFlags nOldModelFlags; // r1+0x10
    unsigned char i; // r23
    class ERTexture * pOldTexture; // r0
    unsigned char bodyPartIndex; // r23
}

// Range: 0x8003C7BC -> 0x8003C824
// this: r30
void SimModelTSC6::SetAllModels() {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003C824 -> 0x8003CBF4
// this: r24
unsigned char SimModelTSC6::PrepareChangingModels() {
    // Local variables
    unsigned char bAnyModelsChanged; // r28
    int bodyPart; // r21
    unsigned char bodyPartIndex; // r0
    unsigned int nCurrentModelID; // r0
    unsigned int nNewModelID; // r0
    unsigned char bAnyBodyPartsLoadedForMorphing; // r27
    unsigned char bChecked[15]; // r1+0x18
    unsigned char bodyPartIndex; // r0
    unsigned int connectionList[3]; // r1+0xC
    int bodyPart; // r26
    unsigned char bodyPartIndex; // r0
    unsigned int nConnectionListSize; // r1+0x8
    unsigned int i; // r25
    unsigned char bodyPartIndex2; // r0
    unsigned int i; // r21
    unsigned char bodyPartIndex; // r22

    // References
    // -> char s_SimPartsMapNames[4][4];
}

// Range: 0x8003CBF4 -> 0x8003CC50
// this: r30
class EIStaticModel * SimModelTSC6::GetModelPart(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003CC50 -> 0x8003CCE8
// this: r25
unsigned char SimModelTSC6::GetChangedModels(int * modelIDList /* r26 */) {
    // Local variables
    unsigned char bAnyChanged; // r28
    unsigned char nBodyPartIndex; // r27
    unsigned int nCurrentModelID; // r0
    unsigned int nNewModelID; // r0
}

// Range: 0x8003CCE8 -> 0x8003CCF0
void SimModelTSC6::WeldChangedBodyParts() {}

// Range: 0x8003CCF0 -> 0x8003CF20
void SimModelTSC6::WeldChangedBodyParts(class SimModelPart * * ppSimModelParts /* r31 */) {
    // Local variables
    unsigned int connectionList[3]; // r1+0xC
    unsigned char bWelded[15][15]; // r1+0x18
    unsigned char bodyPartIndex; // r7
    unsigned char bodyPartIndex2; // r0
    unsigned char bodyPartIndex; // r22
    unsigned int nConnectionListSize; // r1+0x8
    unsigned int i; // r21
    unsigned char bodyPartIndex2; // r0
}

// Range: 0x8003CF20 -> 0x8003CF28
void SimModelTSC6::UpdateReweld() {}

// Range: 0x8003CF28 -> 0x8003D0CC
// this: r27
void SimModelTSC6::UpdateReweld(unsigned char bRemoveMorphResources /* r29 */, class SimModelPart * * ppSimModelParts /* r28 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
    unsigned char bNeedToMorph; // r30
    unsigned char bodyPartIndex; // r29
    unsigned char bodyPartIndex; // r29
}

// Range: 0x8003D0CC -> 0x8003D0D4
unsigned char SimModelTSC6::VerifyRequiredModels() {}

// Range: 0x8003D0D4 -> 0x8003D164
unsigned char SimModelTSC6::VerifyRequiredModels(class SimModelPart * * ppSimModelParts /* r29 */) {
    // Local variables
    unsigned char bResult; // r31
    unsigned char nBodyPartIndex; // r30
}

// Range: 0x8003D164 -> 0x8003D1C0
// this: r30
void SimModelTSC6::DeallocateAllModels() {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D1C0 -> 0x8003D2EC
// this: r30
unsigned char SimModelTSC6::AllMorphDataDeallocated() {
    // Local variables
    unsigned int bodyPart; // r31
}

// Range: 0x8003D2EC -> 0x8003D510
void SimModelTSC6::GetImageModels() {}

// Range: 0x8003D510 -> 0x8003D5B4
// this: r26
void SimModelTSC6::GetPortraitModels(enum eBodyPart * bodyParts /* r27 */, unsigned int nMaxBodyParts /* r28 */, unsigned int & nNumParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D5B4 -> 0x8003D658
// this: r26
void SimModelTSC6::GetSimHeadModels(enum eBodyPart * bodyParts /* r27 */, unsigned int nMaxBodyParts /* r28 */, unsigned int & nNumParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D658 -> 0x8003D6B4
// this: r30
void SimModelTSC6::ApplySkinToModels() {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D6B4 -> 0x8003D6BC
void SimModelTSC6::ApplyAllLatticeMorphs() {}

// Range: 0x8003D6BC -> 0x8003D7A8
// this: r26
void SimModelTSC6::ApplyAllLatticeMorphs(class SimModelPart * * ppSimModelParts /* r27 */) {
    // Local variables
    class EIStaticModel * bodyPartsToMorph[15]; // r1+0x14
    unsigned char bodyPartIndex; // r28
    class MorphUtilities morpher; // r1+0x8
}

// Range: 0x8003D7A8 -> 0x8003D7B0
void SimModelTSC6::DeallocateMorphResources() {}

// Range: 0x8003D7B0 -> 0x8003D818
void SimModelTSC6::DeallocateMorphResources(class SimModelPart * * ppSimModelParts /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D818 -> 0x8003D878
// this: r30
unsigned char SimModelTSC6::BodyPartCanBeMorphedByMorphTargets(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003D878 -> 0x8003D8E0
// this: r30
unsigned char SimModelTSC6::BodyPartContainsMorphTargets(enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003D8E0 -> 0x8003D8E8
void SimModelTSC6::ApplyAllMorphTargets() {}

// Range: 0x8003D8E8 -> 0x8003D97C
void SimModelTSC6::ApplyAllMorphTargets(unsigned char bUnregisterMorphTargets /* r28 */, class SimModelPart * * ppSimModelParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D97C -> 0x8003D9F4
// this: r29
void SimModelTSC6::LoadCurrentBrowseMorphTargets(enum eBodyPart bodyPart /* r30 */, enum eMorphTargetRegion morphRegion /* r31 */) {}

// Range: 0x8003D9F4 -> 0x8003DA50
enum eMorphTargetRegion SimModelTSC6::GetMorphRegionStart() {
    // Local variables
    enum eMorphTargetRegion morphRegionStart; // r3
}

// Range: 0x8003DA50 -> 0x8003DB24
// this: r28
void SimModelTSC6::UnregisterUserSelectedMorphTargetsInRegion(enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DB24 -> 0x8003DBF8
// this: r28
void SimModelTSC6::PromoteCurrentBrowseMorphTargets(enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DBF8 -> 0x8003DC8C
// this: r30
void SimModelTSC6::UnregisterCurrentBrowseMorphTargets(enum eBodyPart bodyPart /* r31 */) {
    // Local variables
    class ERModel * pModel; // r0
}

// Range: 0x8003DC8C -> 0x8003DD60
// this: r28
void SimModelTSC6::CopyWeightsFromUserSelectedToCurrentBrowse(enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DD60 -> 0x8003DDCC
// this: r28
void SimModelTSC6::CreateSkin(const char * szBaseName /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8003DDCC -> 0x8003DDD4
void SimModelTSC6::CompositeAllSkin() {}

// Range: 0x8003DDD4 -> 0x8003DECC
// this: r29
void SimModelTSC6::CompositeAllSkin(class SimTexturePart * pSimTextureParts /* r28 */) {
    // Local variables
    class ERDataset * pSkinDataset; // r30
    unsigned int nSkinTextureDatasetID; // r29
    unsigned char i; // r29

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8003DECC -> 0x8003DEE8
void SimModelTSC6::CompositeSkinPart() {}

// Range: 0x8003DEE8 -> 0x8003E4D8
// this: r29
void SimModelTSC6::HandleEventChangeCharacter(const class CasEventChangeCharacter & event /* r31 */, class CasMediator * pMediator /* r30 */) {
    // Local variables
    enum CharacterPart eventCharacterPart; // r0
    class CasSimDescription & simDesc; // r31
}

// Range: 0x8003E4D8 -> 0x8003E608
// this: r27
void SimModelTSC6::HandleEventMorphCharacter(const class CasEventMorphCharacter & event /* r28 */) {
    // Local variables
    class EIStaticModel * ppModelList[15]; // r1+0x14
    unsigned char bodyPartIndex; // r29
    class MorphUtilities morpher; // r1+0x8
    unsigned char bodyPartIndex; // r29
}

// Range: 0x8003E608 -> 0x8003E690
// this: r28
void SimModelTSC6::SetupPreMorphRegion(enum eMorphTargetRegion morphTargetRegion /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003E690 -> 0x8003E718
// this: r28
void SimModelTSC6::SetupPostMorphRegion(enum eMorphTargetRegion morphTargetRegion /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003E718 -> 0x8003E784
// this: r31
class SimModelPart * SimModelTSC6::GetChangingSimModelPart() {
    // Local variables
    unsigned char bodyPartDBIndex; // r0
}

// Range: 0x8003E784 -> 0x8003E7F4
// this: r31
class EIStaticModel * SimModelTSC6::GetChangingModelPart() {
    // Local variables
    unsigned char bodyPartDBIndex; // r0
}

// Range: 0x8003E7F4 -> 0x8003E814
class ERTexture * SimModelTSC6::GetChangingQuadrantTexture() {}


