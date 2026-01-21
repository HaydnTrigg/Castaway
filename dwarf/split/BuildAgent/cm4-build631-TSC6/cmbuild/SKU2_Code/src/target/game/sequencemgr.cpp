/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\sequencemgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80097954 -> 0x8009AD6C
*/
// Range: 0x80097954 -> 0x80097ADC
// this: r28
SequenceManager::SequenceManager() {
    // Local variables
    unsigned int i; // r0
    unsigned int i; // r7
}

// Range: 0x80097ADC -> 0x80097B20
class SequenceManager * SequenceManager::GetSingleton() {
    // References
    // -> class SequenceManager * s_pSequenceManager;
}

// Range: 0x80097B20 -> 0x80097C48
// this: r30
void SequenceManager::StartSequence(enum eSequenceType sequenceType /* r31 */) {
    // Local variables
    class UIScreenManager * pUISM; // r3

    // References
    // -> class GameData _gd;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80097C48 -> 0x80097C5C
unsigned char SequenceManager::IsSequenceStarted() {}

// Range: 0x80097C5C -> 0x80097C74
unsigned char SequenceManager::IsSequenceComplete() {}

// Range: 0x80097C74 -> 0x80097C80
void SequenceManager::PauseSequence() {}

// Range: 0x80097C80 -> 0x80097C8C
void SequenceManager::UnpauseSequence() {}

// Range: 0x80097C8C -> 0x80097E04
// this: r30
void SequenceManager::UpdateSequenceManager(float fDeltaSeconds /* f30 */) {
    // Local variables
    class cSimulator * pSimulator; // r31
    float fTimeMultiplier; // f31
}

// Range: 0x80097E04 -> 0x80097E98
// this: r30
void SequenceManager::UpdateSequence(enum eSequenceType sequenceType /* r31 */) {}

// Range: 0x80097E98 -> 0x80097F60
// this: r30
void SequenceManager::AdvanceSequence(enum eSequenceType sequenceType /* r31 */) {}

// Range: 0x80097F60 -> 0x80098214
// this: r31
void SequenceManager::AdvanceCatamaranSequence() {
    // References
    // -> class EGlobal _globals;
    // -> unsigned int kCatSamples[7];
}

// Range: 0x80098214 -> 0x80098404
// this: r31
void SequenceManager::AdvanceRadioRescueSequence() {
    // References
    // -> class EGlobal _globals;
    // -> unsigned int kRadioSamples[7];
}

// Range: 0x80098404 -> 0x800984B8
// this: r30
void SequenceManager::SetUpCameraForCurrentStage() {
    // Local variables
    class ESimsCam * pCam; // r31
}

// Range: 0x800984B8 -> 0x800984E8
class EVec3 & SequenceManager::GetCurrentOffset() {
    // References
    // -> class EVec3 kDefaultOffset;
    // -> class EVec3 kCatamaranOffset;
}

// Range: 0x800984E8 -> 0x8009853C
float SequenceManager::GetCurrentSlideDuration() {
    // References
    // -> float kRadioDuration[7];
    // -> float kCatDuration[7];
}

// Range: 0x8009853C -> 0x800985F8
// this: r30
class EVec3 SequenceManager::GetCurrentSlideCameraPos() {
    // References
    // -> class EVec3 kDefaultStageCameraPos;
    // -> class EVec3 kRadioCameraPos[7];
    // -> class EVec3 kCatCameraPos[7];
}

// Range: 0x800985F8 -> 0x800986B4
// this: r30
class EVec3 SequenceManager::GetCurrentSlideCameraLookAt() {
    // References
    // -> class EVec3 kDefaultStageCameraLookAt;
    // -> class EVec3 kRadioCameraLookAt[7];
    // -> class EVec3 kCatCameraLookAt[7];
}

// Range: 0x800986B4 -> 0x8009871C
unsigned int SequenceManager::GetNextSlideBackground() {
    // Local variables
    unsigned int iNextSlide; // r4
    unsigned int iNextSlide; // r4
}

// Range: 0x8009871C -> 0x80098938
// this: r30
void SequenceManager::RenderSequence(class ERC * prc /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80098938 -> 0x80098960
void SequenceManager::PositionsSimsForCurrent() {}

// Range: 0x80098960 -> 0x800989C0
// this: r30
void SequenceManager::GetSimOrientationForBoneRendering(class EMat4 & mOrient /* r31 */) {}

// Range: 0x800989C0 -> 0x80098A74
// this: r28
void SequenceManager::PositionsSimsForCatamaranSequence() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> class EVec3 kCatSequenceSimLocs[7][6];
}

// Range: 0x80098A74 -> 0x80098B10
// this: r28
void SequenceManager::PositionsSimsForRadioSequence() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> class EVec3 kRadioSequenceSimLocs[7][6];
}

// Range: 0x80098B10 -> 0x80098B38
void SequenceManager::AnimateSimsForCurrent() {}

// Range: 0x80098B38 -> 0x80098BB4
// this: r28
void SequenceManager::AnimateSimsForCatamaranSequence() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> char * kCatSequenceSimAnimations[7][6];
}

// Range: 0x80098BB4 -> 0x80098C30
// this: r28
void SequenceManager::AnimateSimsForRadioSequence() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> char * kRadioSequenceSimAnimations[7][6];
}

// Range: 0x80098C30 -> 0x80098D88
// this: r23
void SequenceManager::SpawnYesNoDialog(enum eDialogNavOptions navOption /* r24 */, const unsigned short * msg /* r25 */, const unsigned short * title /* r26 */, int preselected /* r27 */, class CBFunctor1 * pCallback /* r28 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80098DF0 -> 0x80098ECC
// this: r30
void SequenceManager::DialogYesNoSelectionCallback() {
    // Local variables
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80098ECC -> 0x80098F50
// this: r31
void SequenceManager::EndCredits() {
    // Local variables
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80098F50 -> 0x800990C0
// this: r24
unsigned char SequenceManager::IsBackgroundModelLoaded(unsigned int iModelIndex /* r25 */) {
    // Local variables
    int iCharID; // r4
    int iAnimID; // r26
    int iModelID; // r31
    class ERLevel * pLevel; // r4

    // References
    // -> class EEngine * _pEngine;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x800990C0 -> 0x80099230
// this: r26
void SequenceManager::LoadBackgroundModel(unsigned int iModelIndex /* r31 */) {
    // Local variables
    unsigned int iCharID; // r0
    unsigned int iModelID; // r0
    unsigned int iAnimationID; // r0

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x80099230 -> 0x8009931C
// this: r31
void SequenceManager::ReleaseBackgroundModel(unsigned int iModelIndex /* r29 */) {}

// Range: 0x8009931C -> 0x80099378
// this: r30
void SequenceManager::ReleaseAllBackgroundModels() {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x80099378 -> 0x800993A0
void SequenceManager::SetBackgroundShaderState() {}

// Range: 0x800993A0 -> 0x80099400
// this: r31
void SequenceManager::UpdateBackgroundObjectForCurrentSlide() {}

// Range: 0x80099400 -> 0x80099484
// this: r30
void SequenceManager::PositionBackgroundModel() {
    // Local variables
    class EMat4 * mOrient; // r31
}

// Range: 0x80099484 -> 0x8009953C
unsigned int SequenceManager::GetCatBackgroundResourceID() {
    // References
    // -> unsigned int kCatBackgroundBills[3];
    // -> unsigned int kCatBackgroundHome[3];
    // -> unsigned int kCatBackgroundBoat3[3];
    // -> unsigned int kCatBackgroundBoat2[3];
    // -> unsigned int kCatBackgroundBoat[3];
    // -> unsigned int kCatBackgroundPushing[3];
    // -> unsigned int kCatBackgroundOpening[3];
}

// Range: 0x8009953C -> 0x800995F4
unsigned int SequenceManager::GetRadioBackgroundResourceID() {
    // References
    // -> unsigned int kRadioBackgroundBills[3];
    // -> unsigned int kRadioBackgroundHome[3];
    // -> unsigned int kRadioBackgroundCrew[3];
    // -> unsigned int kRadioBackgroundWaving[3];
    // -> unsigned int kRadioBackgroundBoat[3];
    // -> unsigned int kRadioBackgroundInterior[3];
    // -> unsigned int kRadioBackgroundOpening[3];
}

// Range: 0x800995F4 -> 0x80099608
void SequenceManager::SwapBackgroundCache() {}

// Range: 0x80099608 -> 0x80099670
// this: r31
void SequenceManager::CheckStartFade(float fDeltaSeconds /* f31 */) {}

// Range: 0x80099670 -> 0x800997C8
// this: r29
unsigned char SequenceManager::IsCatamaranModelLoaded() {
    // Local variables
    int iCharID; // r4
    int iAnimID; // r31
    int iModelID; // r30
    class ERLevel * pLevel; // r4

    // References
    // -> class EEngine * _pEngine;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x800997C8 -> 0x800998D0
// this: r31
void SequenceManager::LoadCatamaranModel() {
    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x800998D0 -> 0x8009997C
// this: r31
void SequenceManager::ReleaseCatamaranModel() {}

// Range: 0x8009997C -> 0x8009999C
void SequenceManager::SetCatmaranShaderState() {}

// Range: 0x8009999C -> 0x80099A44
// this: r30
void SequenceManager::PositionCatamaranForNewSlide() {
    // Local variables
    class EMat4 * mOrient; // r31

    // References
    // -> class EVec3 kCatamaranLocator;
}

// Range: 0x80099A44 -> 0x80099B9C
// this: r25
unsigned char SequenceManager::IsCommonModelLoaded(enum eCommonModels eType /* r26 */) {
    // Local variables
    int iCharID; // r4
    int iAnimID; // r27
    int iModelID; // r31
    class ERLevel * pLevel; // r4

    // References
    // -> class EEngine * _pEngine;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x80099B9C -> 0x80099C1C
// this: r29
unsigned char SequenceManager::AreCommonModelsLoaded() {
    // Local variables
    unsigned char retval; // r31
    unsigned int i; // r30
}

// Range: 0x80099C1C -> 0x80099D80
// this: r26
void SequenceManager::LoadCommonModel(enum eCommonModels eType /* r31 */) {
    // Local variables
    unsigned int iCharID; // r0
    unsigned int iModelID; // r0
    unsigned int iAnimID; // r0

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
}

// Range: 0x80099D80 -> 0x80099DE0
// this: r30
void SequenceManager::LoadAllCommonModels() {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x80099DE0 -> 0x80099ECC
// this: r31
void SequenceManager::ReleaseCommonModel(enum eCommonModels eType /* r29 */) {}

// Range: 0x80099ECC -> 0x80099EF4
void SequenceManager::SetCommonModelShaderState() {}

// Range: 0x80099EF4 -> 0x80099FA0
// this: r28
void SequenceManager::PositionCommonModelsForNewSlide() {
    // Local variables
    unsigned int i; // r30
    class EMat4 * mOrient; // r29
}

// Range: 0x80099FA0 -> 0x8009A078
// this: r29
void SequenceManager::UpdateCommonModels() {
    // Local variables
    unsigned int i; // r30
    class EMat4 mOrient; // r1+0x8
}

// Range: 0x8009A078 -> 0x8009A114
// this: r28
void SequenceManager::RenderCommonModels(class ERC * prc /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8009A114 -> 0x8009A1CC
unsigned int SequenceManager::GetCommonModelResourceID() {
    // References
    // -> unsigned int kCommonModelBills4[3];
    // -> unsigned int kCommonModelBills3[3];
    // -> unsigned int kCommonModelBills2[3];
    // -> unsigned int kCommonModelBills1[3];
    // -> unsigned int kCommonModelBillprop[3];
    // -> unsigned int kCommonModelChair[3];
    // -> unsigned int kCommonModelTable[3];
}

// Range: 0x8009A1CC -> 0x8009A2A4
// this: r31
void SequenceManager::SetupInitialSequenceStage() {
    // Local variables
    class GameTime nGameTime; // r1+0x18
    signed short nCurrentYear; // r1+0x12
    signed short nCurrentMonth; // r1+0x10
    signed short nCurrentDay; // r1+0xE
    signed short nCurrentHour; // r1+0xC
    signed short nCurrentMinute; // r1+0xA
    signed short nCurrentSecond; // r1+0x8
}

// Range: 0x8009A2A4 -> 0x8009AD6C
static void __sinit_\game_level_unity_cpp() {
    // References
    // -> class EVec3 kRadioCameraLookAt[7];
    // -> class EVec3 kRadioCameraPos[7];
    // -> class EVec3 kRadioSequenceSimLocs[7][6];
    // -> class EVec3 kCatamaranLocator;
    // -> class EVec3 kCatCameraLookAt[7];
    // -> class EVec3 kCatCameraPos[7];
    // -> class EVec3 kCatSequenceSimLocs[7][6];
    // -> class EVec3 kCatamaranOffset;
    // -> class EVec3 kDefaultOffset;
    // -> class EVec3 kDebugOffset;
    // -> class EVec3 kDefaultStageCameraLookAt;
    // -> class EVec3 kDefaultStageCameraPos;
    // -> static class EMat4 g_DefaultFacingMat;
    // -> class SimLightingTuning g_simLightingTuning;
    // -> class LevelLightingTuning g_levelLightingTuning;
    // -> class EVec3 s_outsideDiffuse;
    // -> class EVec3 s_outsideAmbient;
    // -> class ETypeInfo * gpTypeInfo_ERLevel;
    // -> float indoorObjectCullDistanceSq;
    // -> static class FastAllocPool g_poolOrderTableDataObjects;
    // -> static unsigned char g_bERLevelOrderTableDataBuffer[15424];
    // -> float indoorObjectCullDistance;
    // -> class EVec3 s_vDistantPointToForceSkySortOrder;
    // -> class ELevelManager _levelman;
    // -> static class EVec3 s_vDistantPointToForceSkySortOrder;
    // -> class ETypeInfo * gpTypeInfo_EIStaticSubModel;
    // -> class ETypeInfo * gpTypeInfo_EIStaticModel;
    // -> class ETypeInfo * gpTypeInfo_EISpotLight;
    // -> class ETypeInfo * gpTypeInfo_EIPortalPointLight;
    // -> class ETypeInfo * gpTypeInfo_EIPointLight;
    // -> class ETypeInfo * gpTypeInfo_EIPointAmbLight;
    // -> class ETypeInfo * gpTypeInfo_EInstance;
    // -> class ETypeInfo * gpTypeInfo_EILight;
    // -> class ETypeInfo * gpTypeInfo_EIGameInstance;
    // -> class ETypeInfo * gpTypeInfo_EIDirLight;
    // -> class ETypeInfo * gpTypeInfo_EIAmbLight;
}


