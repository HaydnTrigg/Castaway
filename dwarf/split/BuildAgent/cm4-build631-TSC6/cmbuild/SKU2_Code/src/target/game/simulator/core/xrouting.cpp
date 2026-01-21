/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\xrouting.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EB7C8 -> 0x800EEC74
*/
// Range: 0x800EB7C8 -> 0x800EB988
static void TransformToWorldCoords(const class FTilePt * baseLocation /* r30 */, float tileX /* r1+0x8 */, float tileY /* r1+0xC */, class FTilePt * worldPoint /* r31 */) {
    // Local variables
    int tem; // r0
    class EMat4 tr; // r1+0x38
    class EVec3 point; // r1+0x2C
    class FTilePt isoCoord; // r1+0x18
}

// Range: 0x800EB988 -> 0x800EBB00
static unsigned char TILEROUTABLE(int x /* r27 */, int y /* r28 */, int level /* r29 */, unsigned short room /* r30 */) {
    // Local variables
    class cFixedWorld * inWorld; // r31
    class CTilePt pt; // r1+0xC
    unsigned char bNonRoutable; // r0
    unsigned short tileRoom; // r0
    unsigned char roomOK; // r31
    class CTilePt tmpTile; // r1+0x8
    class ObjectIterator i; // r1+0x10
    class cXPortal * portal; // r0
}

// Range: 0x800EBB00 -> 0x800EBF18
static void CollapsePenaltyRects(class vector & partition /* r26 */) {
    // Local variables
    int i; // r28
    int j; // r29
    int end; // r27
    unsigned char bCombine; // r30
    int pass; // r31
}

// Range: 0x800EBF18 -> 0x800EC128
// this: r28
enum EvalTile XRoute::EvalTileForGoal(class FTilePt & loc /* r29 */, int facingDirection /* r30 */) {
    // Local variables
    class RoutingSlot * rs; // r0
    class CTilePt pt; // r1+0xC
    int blockFlags; // r0

    // References
    // -> int gPlacementError;
    // -> class cXObject * gPlacementConflict;
}

// Range: 0x800EC128 -> 0x800EC19C
// this: r31
XRoute::XRoute() {}

// Range: 0x800EC19C -> 0x800EC234
// this: r28
XRoute::XRoute(class cXObject * start /* r29 */, class cXObject * dest /* r30 */, const class RoutingSlot * slot /* r31 */) {}

// Range: 0x800EC234 -> 0x800EC320
// this: r30
void XRoute::Construct() {
    // Local variables
    class cXPerson * person; // r31
}

// Range: 0x800EC320 -> 0x800EC338
unsigned char XRoute::HasCurrentGoal() {}

// Range: 0x800EC338 -> 0x800EC33C
int XRoute::CountGoals() {}

// Range: 0x800EC33C -> 0x800EC340
struct RouteGoal & XRoute::GetNthGoal() {}

// Range: 0x800EC340 -> 0x800EC384
// this: r30
void XRoute::SetCurrentGoal(int goal /* r31 */) {}

// Range: 0x800EC384 -> 0x800EC408
// this: r30
void XRoute::ClearCurrentGoal() {}

// Range: 0x800EC408 -> 0x800EC410
class RoutingSlot * XRoute::GetRoutingSlot() {}

// Range: 0x800EC410 -> 0x800EC45C
// this: r30
void XRoute::AddGoal(const struct RouteGoal & goal /* r31 */) {}

// Range: 0x800EC45C -> 0x800EC4A8
// this: r30
struct RouteGoal & XRoute::GetCurrentGoal() {}

// Range: 0x800EC4A8 -> 0x800EC554
// this: r28
unsigned char XRoute::IsPersonSittingOnChairGoal(class cXPerson * person /* r29 */) {
    // Local variables
    struct RouteGoal * i; // r31
    signed short chairID; // r4
    class cXObject * obj; // r30
}

// Range: 0x800EC554 -> 0x800EC678
// this: r30
unsigned char XRoute::ShouldIgnore(class cXObject * obj /* r31 */) {
    // Local variables
    int penalty; // r0
    class cXPerson * pers; // r0
    float dist; // f0
}

// Range: 0x800EC678 -> 0x800EC67C
void XRoute::DoStream() {}

// Range: 0x800EC67C -> 0x800EC6B4
// this: r31
void XRoute::ResetGoals() {}

// Range: 0x800EC6B4 -> 0x800ECDCC
void BuildRoomPartition(unsigned short inRoom /* r21 */, class vector * outPartition /* r22 */) {
    // Local variables
    class House * house; // r29
    int inflateSize; // r28
    int x; // r20
    int y; // r19
    int l; // r27
    int r; // r26
    int t; // r25
    int b; // r24
    unsigned char done; // r31
    class cFixedWorld * world; // r23
    int gridXLim; // r18
    int gridYLim; // r30
    class CTilePt pt; // r1+0x10
    class CTilePt pt; // r1+0xC
    class PenaltyRect left; // r1+0xA0
    class PenaltyRect top; // r1+0x8C
    class PenaltyRect rect; // r1+0x78
    int sectNum; // r4
    int right; // r3
    int x2; // r18
    int right; // r0
    int y2; // r19
    unsigned char rowclear; // r17
    class CTilePt pt; // r1+0x8
    class TileWalls tw; // r1+0xB4
    unsigned char canWalkThrough; // r17
    class PenaltyRect rect; // r1+0x64
    unsigned char canWalkThrough; // r17
    class PenaltyRect rect; // r1+0x50
    class PenaltyRect rect1; // r1+0x3C
    class PenaltyRect rect2; // r1+0x28
    class PenaltyRect rect3; // r1+0x14
    int roomStop; // r0
    class PenaltyRect * i; // r17
    int cnt; // r18
}

// Range: 0x800ECDCC -> 0x800ECE00
static void ConvertToFTileRect() {}

// Range: 0x800ECE00 -> 0x800ECE08
void BuildRoomPartition() {}

// Range: 0x800ECE08 -> 0x800ECEEC
// this: r29
void XRoute::BuildGoalList() {
    // Local variables
    class cXPerson * person; // r30
    class Room * rm; // r0
    signed short dir; // r0
}

// Range: 0x800ECEEC -> 0x800ED93C
// this: r15
unsigned char XRoute::FindPath(class TileList & outTileList /* r16 */, int nMaxIterations /* r17 */) {
    // Local variables
    unsigned char ignoreAllObjects; // f24
    unsigned char ignoreRooms; // r24
    unsigned char enableTerrainPenalty; // r19
    class cXPerson * person; // r23
    class ObjectModule * module; // r14
    unsigned short roomID; // r0
    class Room * room; // r22
    unsigned char outside; // r0
    class IPoint ptbegin; // r1+0x28
    class IRect startRect; // r1+0x70
    int defaultPenalty; // f16
    int inflateSize; // r21
    int personInflateSize; // r20
    class cXObject * srch; // r19
    const class FTileRect & srchRect; // r0
    int penalty; // r18
    class PenaltyRect rect; // r1+0xE4
    int flags; // r0
    class IRect tmp; // r1+0x60
    struct RoutingParams prs; // r1+0xF8
    class vector overridePartition; // r1+0x50
    class vector goalList; // r1+0x40
    class vector goalMap; // r1+0x30
    int i; // r1+0x14
    const struct RouteGoal & rg; // r0
    int x; // r0
    int y; // r0
    class PenaltyRect pr; // r1+0xD0
    class Path thePath; // r1+0x130
    unsigned char unreachable; // r14
    const class vector & finalPath; // r17
    int numPoints; // r0
    int ct; // r18
    class FTilePt fpt; // r1+0x20

    // References
    // -> class vector s_objPartition;
}

// Range: 0x800ED93C -> 0x800EDBC0
// this: r28
void TileList::FindNearestPoint(class FTilePt * inOutPt /* r29 */) {
    // Local variables
    int minCnt; // [invalid]
    int maxCnt; // r31
    class FTilePt p; // r1+0x28
    class FTilePt best; // r1+0x20
    float bestDist; // f28
    int cnt; // r30
    class FTilePt a; // r1+0x18
    class FTilePt b; // r1+0x10
    float xdelAB; // f4
    float ydelAB; // f5
    float xdelPB; // f1
    float ydelPB; // f0
    float sqDistAB; // f2
    float t; // f1
    class FTilePt closest; // r1+0x8
    float dist; // f0
}

// Range: 0x800EDBC0 -> 0x800EDCB0
static void SetDirectionForGoalSearch(class cXObject * router /* r28 */, signed short objDir /* r29 */, signed short scanDir /* r30 */, class RoutingSlot * slot /* r31 */) {
    // Local variables
    signed short dir; // [invalid]
}

// Range: 0x800EDCB0 -> 0x800EDE1C
// this: r31
void XRoute::ChooseStartingPoint() {
    // Local variables
    class FTilePt startLoc; // r1+0x20
    class cXObject * container; // r28
    signed short entryFlags; // r27
    int bestDist; // r26
    unsigned char distFound; // r25
    class FTilePt destLoc; // r1+0x18
    int dir; // r24
    int checkDir; // r23
    class FTilePt checkLoc; // r1+0x10
    enum EvalTile tileResult; // r0
    int dist; // r23
}

// Range: 0x800EDE1C -> 0x800EEAF8
// this: r27
void XRoute::ConstructGoals() {
    // Local variables
    class RoutingSlot * routingSlot; // r23
    class cXObject * dest; // r22
    int simType; // r21
    int objDir; // cr4
    class FTilePt objLoc; // r1+0x40
    struct RouteGoal rg; // r1+0x68
    int wallDir; // r15
    struct RouteBlockers block; // r1+0x38
    enum EvalTile tileResult; // r14
    int minTileDist; // r0
    int maxTileDist; // r0
    int optimalDist; // r0
    int chairBonus; // r20
    int standBonus; // r19
    int maxSqDist; // mq
    int minSqDist; // f31
    struct RouteGoal rg; // r1+0x58
    class FTilePt & objectLocation; // r18
    int wallBlockFlags; // f29
    int wallDiminishFlags; // f28
    int i; // r3
    int resolution; // f26
    float coneMult; // f29
    struct RouteBlockers block; // r1+0x30
    int dirCount; // f25
    int curDirection; // r17
    int chairDir; // f23
    int endY; // f22
    int startY; // r0
    unsigned char wallFound; // f20
    int y; // r16
    int maxX; // r15
    int x; // f17
    class FTilePt test; // r1+0x28
    class cXObject * obstacle; // r26
    int entryDir; // r31
    int bonus; // r30
    signed short chairID; // r29
    signed short entryDirFlag; // r28
    int finalX; // r1+0x14
    int finalY; // r1+0x10
    unsigned char award; // r0
    int testX; // r3
    int testY; // r5
    unsigned char inCone; // r6
    signed short chairEntryFlags; // r0
    class cXObject * sitter; // r0
    float sqDist; // f1
    int dist; // r26
    enum EvalTile tileResult; // r26
    class vector tempGoals; // r1+0x48
    struct RouteGoal * it; // r15
    int i; // r16
    struct RouteGoal * choice; // r15
}

// Range: 0x800EEAF8 -> 0x800EEB60
int RouteBlockers::ComputeRouteResult() {}

// Range: 0x800EEB60 -> 0x800EEBD0
void RouteBlockers::ProcessTile() {}

// Range: 0x800EEBD0 -> 0x800EEBF0
RouteBlockers::RouteBlockers() {}

// Range: 0x800EEC20 -> 0x800EEC74
void XRoute::DeallocateAllPathData() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> class vector s_objPartition;
}


