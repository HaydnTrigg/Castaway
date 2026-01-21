/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\scenes\casscenedefault.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004BD4C -> 0x8004CFA8
*/
// Range: 0x8004BD4C -> 0x8004BE1C
// this: r30
CasSceneDefault::CasSceneDefault() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__15CasSceneDefault;
}

// Range: 0x8004BE1C -> 0x8004BEF0
// this: r30
CasSceneDefault::~CasSceneDefault() {
    // References
    // -> struct [anonymous] __vt__15CasSceneDefault;
}

// Range: 0x8004BEF0 -> 0x8004C43C
// this: r30
void CasSceneDefault::Reload() {
    // Local variables
    class ERDataset * pSceneDataset; // r31
    struct CreatedLightingEntry lighting; // r1+0xB8
    class vector glassList; // r1+0x48
    unsigned int index; // r29
    class EMidLotInstance * * iter; // r27
    class EVec3 vCorners[4]; // r1+0x88
    class EVec3 vOffsetMirrorCorners[4]; // r1+0x58
    class EVec3 vSideA; // r1+0x3C
    class EVec3 vSideB; // r1+0x30
    class EVec3 vNormal; // r1+0x24
    int i; // r27

    // References
    // -> class EModelManager _modelman;
    // -> class EGlobal _globals;
    // -> class EEngine * _pEngine;
    // -> class ELevelManager _levelman;
    // -> class EDatasetManager _datasetman;
    // -> signed short GameStartSecond;
    // -> signed short GameStartMinute;
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> signed short GameStartYear;
}

// Range: 0x8004C43C -> 0x8004C448
void CasSceneDefault::PauseSequence() {}

// Range: 0x8004C448 -> 0x8004C454
void CasSceneDefault::UnpauseSequence() {}

// Range: 0x8004C454 -> 0x8004C4B0
// this: r31
void CasSceneDefault::Update(float fDeltaSeconds /* f31 */) {}

// Range: 0x8004C4B0 -> 0x8004C520
// this: r30
void CasSceneDefault::DoFirstUpdate() {
    // Local variables
    class WeatherManager * pWeatherManager; // r31
}

// Range: 0x8004C520 -> 0x8004C6E8
// this: r28
void CasSceneDefault::DrawRoom(class ERC * prc /* r29 */, const class EMat4 & transform /* r30 */) {
    // Local variables
    unsigned char bIsViewingMirror; // r31
    class CASTargetTSC6 * pTarget; // r0
    class EMat4 mirrorTransform; // r1+0xD8
    class EMat4 finalTransform; // r1+0x98
    class EMat4 finalTransformMirror; // r1+0x58
    class EVec3 pos; // r1+0x8
}

// Range: 0x8004C6E8 -> 0x8004C72C
unsigned char CasSceneDefault::GetMirrorCorners() {
    // References
    // -> class EVec3 kMirrorClothingCorners[4];
}

// Range: 0x8004C72C -> 0x8004C740
void CasSceneDefault::SetMirrorProjectionParams() {}

// Range: 0x8004C740 -> 0x8004C7A8
enum eSlideShowPositions CasSceneDefault::MapSimIndexToCrewPosition(unsigned int index /* r30 */) {
    // Local variables
    unsigned int slide; // r31

    // References
    // -> enum eSlideShowPositions kCASToCAFPositionMap[6][6];
}

// Range: 0x8004C7A8 -> 0x8004C830
// this: r29
void CasSceneDefault::GetSimOrient(unsigned int index /* r31 */, class EMat4 & orient /* r30 */) {
    // References
    // -> int kSimBoatLocatorBones[6];
}

// Range: 0x8004C830 -> 0x8004C91C
// this: r29
void CasSceneDefault::PlayClosingSequence() {
    // Local variables
    class CAFTarget * pTarget; // r0

    // References
    // -> unsigned int kSnapShotSamples[6];
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8004C91C -> 0x8004C970
unsigned char CasSceneDefault::IsClosingSequenceComplete() {}

// Range: 0x8004C970 -> 0x8004C990
float CasSceneDefault::GetSceneFade() {}

// Range: 0x8004C990 -> 0x8004CA10
unsigned char CasSceneDefault::SwitchCellPhone(const char * pString /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8004CA10 -> 0x8004CAD8
// this: r31
class EMidLotInstance * CasSceneDefault::GetPropForSim() {
    // Local variables
    unsigned int iSimIndex; // r0

    // References
    // -> enum eSlideShowProps kCASSnapShotProps[6][6];
}

// Range: 0x8004CAD8 -> 0x8004CB68
// this: r31
unsigned int CasSceneDefault::GetPropBoneForSim() {
    // Local variables
    unsigned int iSimIndex; // r0

    // References
    // -> enum eSlideShowProps kCASSnapShotProps[6][6];
}

// Range: 0x8004CB68 -> 0x8004CC6C
// this: r31
void CasSceneDefault::UpdateClosingSnapshot(float fDeltaSeconds /* f31 */) {
    // Local variables
    class CAFTarget * pTarget; // r0

    // References
    // -> float kSnapShotIntervalDuration[6];
    // -> char * kSnapShotPhoneStates[6];
}

// Range: 0x8004CC6C -> 0x8004CCA4
void CasSceneDefault::CheckStartFade() {
    // Local variables
    float fadeInMod; // f1

    // References
    // -> float kSnapShotIntervalDuration[6];
}

// Range: 0x8004CCA4 -> 0x8004CFA8
// this: r31
void CasSceneDefault::AdvanceClosingSnapshot() {
    // Local variables
    unsigned char bAdvanced; // r4
    class CAFTarget * pTarget; // r0
    unsigned int i; // r29
    class CAFTarget * pCAFTarget; // r30
    class CasSimRenderer * pRenderer; // r28

    // References
    // -> unsigned int kSnapShotBoatAnimations[6];
    // -> char * ms_szWeatherStateNames[4];
    // -> unsigned int kSnapShotSamples[6];
    // -> char * kSnapShotPhoneStates[6];
}


