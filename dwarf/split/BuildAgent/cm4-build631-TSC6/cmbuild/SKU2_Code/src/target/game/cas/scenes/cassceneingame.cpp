/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\scenes\cassceneingame.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004D3C0 -> 0x8004DAA0
*/
// Range: 0x8004D3C0 -> 0x8004D410
// this: r31
CasSceneInGame::CasSceneInGame() {
    // References
    // -> struct [anonymous] __vt__14CasSceneInGame;
}

// Range: 0x8004D410 -> 0x8004D4B8
// this: r30
CasSceneInGame::~CasSceneInGame() {
    // References
    // -> struct [anonymous] __vt__14CasSceneInGame;
}

// Range: 0x8004D4B8 -> 0x8004D818
// this: r27
void CasSceneInGame::Reload() {
    // Local variables
    class ERDataset * pSceneDataset; // r29
    struct CreatedLightingEntry lighting; // r1+0xA8
    class EVec3 vCorners[4]; // r1+0x78
    class EVec3 vOffsetMirrorCorners[4]; // r1+0x48
    class EVec3 vSideA; // r1+0x3C
    class EVec3 vSideB; // r1+0x30
    class EVec3 vNormal; // r1+0x24
    int i; // r28

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

// Range: 0x8004D818 -> 0x8004D880
// this: r30
void CasSceneInGame::DoFirstUpdate() {
    // Local variables
    class WeatherManager * pWeatherManager; // r31
}

// Range: 0x8004D880 -> 0x8004DA48
// this: r28
void CasSceneInGame::DrawRoom(class ERC * prc /* r29 */, const class EMat4 & transform /* r30 */) {
    // Local variables
    unsigned char bIsViewingMirror; // r31
    class CASTargetTSC6 * pTarget; // r0
    class EMat4 mirrorTransform; // r1+0xD8
    class EMat4 finalTransform; // r1+0x98
    class EMat4 finalTransformMirror; // r1+0x58
    class EVec3 pos; // r1+0x8
}

// Range: 0x8004DA48 -> 0x8004DA8C
unsigned char CasSceneInGame::GetMirrorCorners() {
    // References
    // -> class EVec3 kMirrorClothingCorners[4];
}

// Range: 0x8004DA8C -> 0x8004DAA0
void CasSceneInGame::SetMirrorProjectionParams() {}


