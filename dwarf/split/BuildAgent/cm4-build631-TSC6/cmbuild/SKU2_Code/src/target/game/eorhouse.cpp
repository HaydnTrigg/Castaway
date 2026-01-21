/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\eorhouse.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802164EC -> 0x80217930
*/
// Range: 0x802164EC -> 0x80216548
char * GetHouseNameText() {
    // Local variables
    int houseId; // r31

    // References
    // -> static char * s_houseNames[27];
}

// Range: 0x80216548 -> 0x80216550
char * EHouse::GetHouseName() {}

// Range: 0x80216550 -> 0x802167B4
// this: r23
EHouse::EHouse(const class EVec2 & vOff /* r24 */, int lot /* r25 */, class ERLevel * pLevel /* r26 */, unsigned char bObjects /* r27 */, unsigned char bWalls /* r28 */, unsigned char bForNeighborHoodMode /* r29 */) {
    // Local variables
    unsigned int levelId; // r30
    char hack_lots[64]; // r1+0x8
    const struct LightingSequence * pLightingSequence; // r0

    // References
    // -> class EModelManager _modelman;
    // -> class EEngine * _pEngine;
    // -> class ELevelManager _levelman;
    // -> class EGlobal _globals;
}

// Range: 0x802167B4 -> 0x80216820
// this: r30
EHouse::~EHouse() {}

// Range: 0x80216820 -> 0x80216854
// this: r31
void EHouse::Init() {}

// Range: 0x80216854 -> 0x8021693C
// this: r31
void EHouse::BuildHouse() {
    // Local variables
    class EBound3 bLevel; // r1+0x18
    class EBoundSphere tempSphere; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8021693C -> 0x802169F0
// this: r31
void EHouse::SetNextWallMode() {
    // References
    // -> class EGraphics * _pGfx;
    // -> class HeightFade g_heightFade;
}

// Range: 0x802169F0 -> 0x80217060
static void SetupInterestFade() {
    // Local variables
    class ESimsCam * pCam; // r29
    const class EVec3 & eye; // r30
    class Interactor * pInteractor; // r0
    const struct InteractorInfo & info; // r0
    class EVec3 top; // r1+0xA8
    float halfWidth; // f31
    const class EVec3 & at; // r0
    class EVec3 right; // r1+0x9C
    class EVec2 leftSide; // r1+0x28
    class EVec2 rightSide; // r1+0x20
    class EInstance * inst; // r29
    class EInstance * cont; // r28
    unsigned char isPointTest; // r27
    class cXPerson * person; // r0
    const class Interaction & action; // r31
    class cXObject * obj; // r26
    class cXObject * obj2; // r0
    class CameraDirector * director; // r26
    const class EMat4 * targetMatrix; // r0
    const class EBound3 & bbox; // r0
    class EVec2 objCenter; // r1+0x18
    class EVec2 simCenter; // r1+0x10
    float objDot; // f0
    float simDot; // f0
    class EVec2 simCenter; // r1+0x8
    float alphaMin; // f1
    class EVec3 corners[4]; // r1+0xB8
    class EVec3 adjustedInterestPoint; // r1+0x90

    // References
    // -> class HeightFade g_heightFade;
    // -> class WallFadeParms * s_wallFadeParms;
    // -> class WallFadeParms s_wallFadeParmsDC;
    // -> class WallFadeParms s_wallFadeParmsClassic;
    // -> class TrapezoidFade _interestFade;
    // -> class LineFade g_lineFade;
    // -> class PyramidFade g_pyramidFade;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80217060 -> 0x802170BC
// this: r30
void EHouse::Draw(class ERC * prc /* r31 */) {}

// Range: 0x802170BC -> 0x8021726C
// this: r28
void EHouse::Update() {
    // Local variables
    class EController * controller; // r0
    class WeatherManager * pWeatherManager; // r29
    signed short hour; // r0
    signed short minutes; // r0
    signed short seconds; // r0
    struct CreatedLightingEntry lighting; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> unsigned char m_bRebuildFloors;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8021726C -> 0x802172FC
// this: r27
void EHouse::UpdateRoomAmbient(const struct LightingEntry & lighting /* r28 */) const {
    // Local variables
    int roomId; // r30
    class EIAmbLight * pLight; // r29
    class Room * pRoom; // r0
}

// Range: 0x802172FC -> 0x802173A8
// this: r30
void EHouse::Cleanup() {}

// Range: 0x802173A8 -> 0x802173F8
// this: r31
void EHouse::DestroyWalls() {}

// Range: 0x802173F8 -> 0x802174E8
// this: r31
void EHouse::ReCalcHouse() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802174E8 -> 0x80217688
// this: r31
void EHouse::UpdateRoomLights() {
    // Local variables
    class RoomManager * pRoomman; // r29
    const class map & roomlist; // r28
    struct rbtree_iterator roomItr; // r1+0x14
    class Room * pRoom; // r30
    class Room * pLightRoom; // r27

    // References
    // -> class LevelLightingTuning g_levelLightingTuning;
}

// Range: 0x80217688 -> 0x80217708
void LightLocation(signed short & loc /* r29 */, signed short & lightLoc /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x80217708 -> 0x8021784C
// this: r25
void EHouse::InitRoomLighting() {
    // Local variables
    class RoomManager * roomManager; // r27
    int c; // r26
    class Room * room; // r0
    unsigned short lightGroup; // r0
    struct CreatedLightingEntry lighting; // r1+0x8
}

// Range: 0x8021784C -> 0x802178FC
// this: r29
void EHouse::CleanUpRoomLights() {
    // Local variables
    int c; // r30
}

// Range: 0x802178FC -> 0x80217924
void EHouse::InsertHouseObject() {}

// Range: 0x80217924 -> 0x80217930
void EHouse::Refresh() {
    // References
    // -> class EQuickdataManager _quickdataman;
}


