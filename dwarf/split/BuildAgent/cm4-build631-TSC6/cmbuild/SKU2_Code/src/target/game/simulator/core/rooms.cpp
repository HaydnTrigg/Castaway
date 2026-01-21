/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\rooms.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D83B4 -> 0x800DAAA4
*/
// Range: 0x800D83B4 -> 0x800D87B0
// this: r31
void RoomScoreConstants::UpdateConstants() {
    // Local variables
    unsigned int fileID; // r29
    signed short id; // r0
    class ConsoleAutoRefCount mc; // r1+0x8
    float floorScoreHighLimit; // f0
    float wallScoreHighLimit; // f0
    float areaScoreHighLimit; // f0
    float lightScoreHighLimit; // f0

    // References
    // -> static float sFloorScoreRange;
    // -> static float sWallScoreRange;
    // -> static float sLightScoreRange;
    // -> static float sAreaScoreRange;
    // -> static float sWallScoreLowLimit;
    // -> static float sFloorScoreLowLimit;
    // -> static float sOutdoorNightBonus;
    // -> static float sOutdoorDawnDuskBonus;
    // -> static float sOutdoorDaylightBonus;
    // -> static float sOutdoorObjectDivisor;
    // -> static float sOutdoorGoodMultiplier;
    // -> static float sOutdoorBadMultiplier;
    // -> static float sRoomImpactMultiplier;
    // -> static float sEffectiveAreaHighClip;
    // -> static float sEffectiveAreaLowClip;
    // -> static float sLightScoreLowLimit;
    // -> static float sAreaScoreLowLimit;
    // -> static float sAreaScoreClip;
    // -> static float sLightContributionFactor;
}

// Range: 0x800D87B0 -> 0x800D8834
// this: r30
RoomManager::RoomManager() {
    // References
    // -> class RoomManager * sRoomMgr;
}

// Range: 0x800D888C -> 0x800D896C
// this: r30
RoomManager::~RoomManager() {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    class Room * aRoom; // r0

    // References
    // -> class RoomManager * sRoomMgr;
}

// Range: 0x800D896C -> 0x800D89E4
// this: r31
void RoomManager::RoomScoreChanged() {
    // Local variables
    struct rbtree_iterator f; // r1+0x10
    class Room * aRoom; // r0
}

// Range: 0x800D89E4 -> 0x800D8A5C
// this: r31
void RoomManager::RoomLightingChanged() {
    // Local variables
    struct rbtree_iterator f; // r1+0x10
    class Room * aRoom; // r0
}

// Range: 0x800D8A5C -> 0x800D8B08
// this: r30
void RoomManager::AllRoomsLightingChanged() {
    // Local variables
    struct rbtree_iterator f; // r1+0x10
    class Room * aRoom; // r31
}

// Range: 0x800D8B08 -> 0x800D8BB4
// this: r30
void RoomManager::AllRoomsScoreChanged() {
    // Local variables
    struct rbtree_iterator f; // r1+0x10
    class Room * aRoom; // r31
}

// Range: 0x800D8BB4 -> 0x800D8F50
// this: r27
void RoomManager::ComputeRooms() {
    // Local variables
    int houseArea; // r30
    struct rbtree_iterator i; // r1+0x20
    class Room * aRoom; // r29
    float old_ambient; // f0
    const class vector & roomList; // r28
    const class CTilePt * it; // r0
    class ObjectIterator oi; // r1+0x30
    class Room * aRoom; // r28

    // References
    // -> static float sOutdoorDawnDuskBonus;
    // -> static float sOutdoorNightBonus;
    // -> static float sOutdoorDaylightBonus;
    // -> static float sOutdoorObjectDivisor;
    // -> static class RoomScoreConstants sTheClient;
    // -> static unsigned char sConstantsLoaded;
}

// Range: 0x800D8F50 -> 0x800D8FD0
// this: r31
class Room * RoomManager::GetRoom(unsigned short inRoomID /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    class Room * aRoom; // r0
}

// Range: 0x800D8FD0 -> 0x800D90C4
// this: r31
class Room * RoomManager::GetNewRoom(unsigned short inRoomID /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x14
    class Room * aRoom; // r31
    class Room * aRoom; // r1+0x10
    struct pair v; // r1+0x20
}

// Range: 0x800D90C4 -> 0x800D90F8
void RoomManager::UpdateRooms() {}

// Range: 0x800D90F8 -> 0x800D9270
// this: r27
unsigned char RoomManager::ProcessDegenerateTile(const class CTilePt & inPt /* r28 */, unsigned short inRoom /* r29 */, enum Sides inSide /* r30 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x18
    enum Sides opposite_side; // r31
    struct pair v; // r1+0x48
    struct pair & v; // r0
}

// Range: 0x800D9270 -> 0x800D93AC
// this: r26
unsigned char RoomManager::ResolveDiagonal(const class CTilePt & inPt /* r27 */, class Room * * outRoom1 /* r28 */, class Room * * outRoom2 /* r29 */, enum Sides * outSide1 /* r30 */, enum Sides * outSide2 /* r31 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    struct pair v; // r1+0x14
}

// Range: 0x800D93F4 -> 0x800D94DC
// this: r26
unsigned char RoomManager::ResolveDiagonal(const class CTilePt & inPt /* r27 */, unsigned short * outRoom1 /* r28 */, unsigned short * outRoom2 /* r29 */, enum Sides * outSide1 /* r30 */, enum Sides * outSide2 /* r31 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    struct pair v; // r1+0x14
}

// Range: 0x800D94DC -> 0x800D9584
// this: r30
void RoomManager::ResetRooms() {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    class Room * rm; // r31
}

// Range: 0x800D9584 -> 0x800D9588
void RoomManager::InitLights() {}

// Range: 0x800D9588 -> 0x800D9604
float RoomManager::GetOutsideAmbientLevel() {
    // Local variables
    float ambient; // f31
}

// Range: 0x800D9604 -> 0x800D9688
// this: r31
void RoomManager::ClearRoomPartitions() {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    class Room * rm; // r0
}

// Range: 0x800D9688 -> 0x800D9750
// this: r31
void RoomManager::ResetRoomManager() {
    // Local variables
    struct rbtree_iterator i; // r1+0x14
    class map tempRooms; // r1+0x18
}

// Range: 0x800D9750 -> 0x800D985C
void RoomManager::SetRoomIntensityScale(int roomId /* r27 */, unsigned char notRoom /* r28 */, float scale /* f31 */) {
    // Local variables
    class RoomManager * pRoomman; // r31
    const class map & roomlist; // r30
    struct rbtree_iterator roomItr; // r1+0x14
    class Room * pRoom; // r29
}

// Range: 0x800D985C -> 0x800D999C
void RoomManager::SetRoomIntensityColorScale(int roomId /* r26 */, unsigned char notRoom /* r27 */, int color /* r28 */, float scale /* f31 */) {
    // Local variables
    class RoomManager * pRoomman; // r31
    const class map & roomlist; // r30
    class EVec3 scaleVect; // r1+0x24
    struct rbtree_iterator roomItr; // r1+0x14
    class Room * pRoom; // r29
}

// Range: 0x800D999C -> 0x800D9A70
// this: r28
void RoomManager::ChangeLightingGroup(unsigned short newGroup /* r29 */) {
    // Local variables
    class Room * targetRoom; // r0
    unsigned short oldGroup; // r0
    struct rbtree_iterator roomItr; // r1+0x10
    class Room * pRoom; // r30
}

// Range: 0x800D9A70 -> 0x800D9B38
// this: r28
Room::Room(class RoomManager * inMgr /* r29 */) {}

// Range: 0x800D9B38 -> 0x800D9BDC
// this: r29
Room::~Room() {}

// Range: 0x800D9BDC -> 0x800D9C48
void Room::Clear() {}

// Range: 0x800D9C48 -> 0x800D9C98
// this: r31
class vector * Room::GetPartition() {}

// Range: 0x800D9C98 -> 0x800D9FA0
// this: r31
void Room::ComputeRoom() {
    // Local variables
    float score; // f2
    float objAmbient; // f31
    float windowAmbient; // f30
    float outsideAmbient; // f29
    float tem; // f1
    float areaScore; // f29
    float lightScore; // f30
    float effectiveArea; // f9
    float roomImpactScore; // f10
    float floorScore; // f11
    float wallScore; // f4

    // References
    // -> static float sWallScoreLowLimit;
    // -> static float sWallScoreRange;
    // -> static float sFloorScoreLowLimit;
    // -> static float sFloorScoreRange;
    // -> static float sRoomImpactMultiplier;
    // -> static float sEffectiveAreaHighClip;
    // -> static float sEffectiveAreaLowClip;
    // -> static float sLightScoreLowLimit;
    // -> static float sAreaScoreLowLimit;
    // -> static float sLightScoreRange;
    // -> static float sAreaScoreRange;
    // -> static float sAreaScoreClip;
    // -> static float sLightContributionFactor;
    // -> static float sOutdoorBadMultiplier;
    // -> static float sOutdoorGoodMultiplier;
}

// Range: 0x800D9FA0 -> 0x800DA008
unsigned char IsScoredStyle(enum WallStyle s /* r30 */) {}

// Range: 0x800DA008 -> 0x800DA240
// this: r31
void Room::CollectTileStats(const class CTilePt & tile /* r25 */) {
    // Local variables
    class TileWalls tw; // r1+0x8
    struct SegSearch * ss; // r0
    enum WallStyle style; // r28
    unsigned char hasPatt; // r27
    unsigned char hasFloor; // r26
    int i; // r25
    enum WallPattern pattern; // r0
    enum TileWallsSegment seg; // r25
    enum WallStyle style; // r0
    enum WallPattern pattern; // r0

    // References
    // -> static struct SegSearch segSrch[2];
}

// Range: 0x800DA240 -> 0x800DA438
// this: r29
void Room::CollectObjectStats(class ObjectIterator & objectIter /* r30 */) {
    // Local variables
    class cXObject * object; // r31
    int category; // r0
    int objContrib; // r0
    class FTilePt aPt; // r1+0x8
    class EVec3 position; // r1+0x10
    int roomImpact; // r3
}

// Range: 0x800DA438 -> 0x800DA480
float Room::GetObjectDensity() {}

// Range: 0x800DA480 -> 0x800DA494
int Room::GetArea() {}

// Range: 0x800DA494 -> 0x800DA4EC
// this: r30
void Room::AbsorbNewRoomList(const class vector & inRoomList /* r31 */) {}

// Range: 0x800DA4EC -> 0x800DA590
unsigned char Room::IsTileInRoom(const class CTilePt & where /* r28 */) {
    // Local variables
    const class vector & tiles; // r30
    const class CTilePt * it; // r29
}

// Range: 0x800DA590 -> 0x800DA694
// this: r30
unsigned char Room::IsOutside() {
    // Local variables
    const class CTilePt * it; // r31
    int id; // r3
    int flags; // r0
}

// Range: 0x800DA694 -> 0x800DA724
// this: r30
void Room::SetOverheadLights(unsigned char on /* r31 */) {}

// Range: 0x800DA724 -> 0x800DA7C0
// this: r25
int Room::GetPeopleCount() {
    // Local variables
    int count; // r29
    class ObjectModule * om; // r28
    int iNumPeople; // r0
    int i; // r27
    class cXPerson * p; // r26
}

// Range: 0x800DA7C0 -> 0x800DA810
float Room::GetAmbientLight() {}

// Range: 0x800DA810 -> 0x800DA930
// this: r28
float Room::GetAmbientLightMultiplier() {
    // Local variables
    const class vector & tiles; // r31
    const class CTilePt * it; // r30
    float portalCount; // f30
    int id; // r29
    class cXObject * pObj; // r0
    float roomArea; // f0
    float portalFactor; // f0
}

// Range: 0x800DA930 -> 0x800DA9A0
unsigned short GetLightRoomID(unsigned short roomId /* r30 */) {
    // Local variables
    class RoomManager * roomMan; // r31
    class Room * room; // r0
    class Room * lightRoom; // r0
}

// Range: 0x800DA9A0 -> 0x800DAA64
// this: r28
void RoomManager::ResetRoomStyles() {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
    class Room * rm; // r29
}

// Range: 0x800DAA64 -> 0x800DAAA4
// this: r31
RoomScoreConstants::RoomScoreConstants() {
    // References
    // -> struct [anonymous] __vt__18RoomScoreConstants;
}


