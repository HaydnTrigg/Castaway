/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\world.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E759C -> 0x800EB4BC
*/
// Range: 0x800E759C -> 0x800E7634
// this: r29
cFixedWorld::cFixedWorld(int xSize /* r30 */, int ySize /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11cFixedWorld;
}

// Range: 0x800E7634 -> 0x800E76A0
// this: r30
cFixedWorld::~cFixedWorld() {
    // References
    // -> struct [anonymous] __vt__11cFixedWorld;
}

// Range: 0x800E76A0 -> 0x800E7AD8
// this: r26
unsigned char cFixedWorld::SetSize(int newXSize /* r27 */, int newYSize /* r28 */, unsigned char bRetainOldData /* r21 */) {
    // Local variables
    class CFloorArray * pNewFloorLayer; // r31
    class cArray * pNewFlagLayer; // r30
    class CWallArray * pNewWallLayer; // r29
    int copyXSize; // r0
    int copyYSize; // r0
    int x; // r22
    int y; // r21
}

// Range: 0x800E7AD8 -> 0x800E7B08
// this: r31
CWallArray::CWallArray() {}

// Range: 0x800E7BB8 -> 0x800E7BE8
// this: r31
CFloorArray::CFloorArray() {}

// Range: 0x800E7C40 -> 0x800E7CF4
// this: r30
void cFixedWorld::DeleteArrays() {}

// Range: 0x800E7DFC -> 0x800E7E9C
// this: r29
int cFixedWorld::Save(class iResFile * file /* r30 */) {
    // Local variables
    int err; // r0

    // References
    // -> static signed short kFlagLayrerRsrcID;
    // -> static signed short kExtWallRsrcID;
    // -> static signed short kExtFloorRsrcID;
}

// Range: 0x800E7E9C -> 0x800E8268
// this: r25
int cFixedWorld::Load(class iResFile * file /* r23 */) {
    // Local variables
    int err; // r0
    int xSize; // r29
    int ySize; // r28
    class ERLevel * pLevel; // r0
    unsigned char bHaveRoutableBits; // r27
    unsigned char y; // r26
    unsigned char x; // r24
    class CTilePt tile; // r1+0x8
    unsigned char flags; // r23

    // References
    // -> class EGlobal _globals;
    // -> static signed short kFlagLayrerRsrcID;
    // -> static signed short kExtWallRsrcID;
    // -> static signed short kExtFloorRsrcID;
}

// Range: 0x800E8268 -> 0x800E868C
// this: r29
class TileWalls cFixedWorld::GetWall(const class CTilePt & inPt /* r20 */) {
    // Local variables
    int x; // r31
    int y; // r30
    class TileWalls someWalls; // r1+0x34
}

// Range: 0x800E868C -> 0x800E8C94
// this: r27
void cFixedWorld::SetWall(const class CTilePt & inLocation /* r26 */, class TileWalls & inWalls /* r28 */) {
    // Local variables
    int x; // r30
    int y; // r29
    class TileWallStorage & walls; // r0
    class TileWallStorage & northWest; // r26
    class TileWallStorage & northWest; // r0
    class TileWallStorage & northEast; // r26
    class TileWallStorage & northEast; // r0
    class TileWallStorage & southEast; // r26
    class TileWallStorage & southEast; // r0
    class TileWallStorage & southWest; // r26
    class TileWallStorage & southWest; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x800E8C94 -> 0x800EA1AC
// this: r15
void cFixedWorld::ComputeRooms(int inLevel /* f1 */) {
    // Local variables
    int x; // r14
    int y; // r14
    class vector sStack; // r1+0x118
    class vector sRoomList; // r1+0x108
    class RoomManager * roomManager; // r25
    unsigned short curRoomID; // f29
    class ERLevel * pLevel; // r14
    int start; // r0
    int stop; // f26
    int level; // f25
    unsigned short nextRoomID; // r24
    class cArray & roomLayer; // r23
    class cArray & flagLayer; // f22
    class cArray & wallLayer; // r22
    unsigned short r1; // r1+0x22
    unsigned short r2; // r1+0x20
    enum Sides s1; // r1+0xF4
    enum Sides s2; // r1+0xF0
    class CTilePt pt; // r1+0xEC
    const class TileWallStorage & walls; // r0
    unsigned short r1; // r1+0x1E
    unsigned short r2; // r1+0x1C
    enum Sides s1; // r1+0xE8
    enum Sides s2; // r1+0xE4
    class CTilePt curTile; // r1+0xE0
    const class TileWallStorage & walls; // r21
    unsigned char searchable_dirs[4]; // r1+0xDC
    unsigned short curTileRoom; // r0
    unsigned short r1; // r1+0x1A
    unsigned short r2; // r1+0x18
    enum Sides s1; // r1+0xD8
    enum Sides s2; // r1+0xD4
    enum TileWallsSegment blockers[4]; // r1+0xF8
    int dir; // r20
    class CTilePt neighbor; // r1+0xD0
    unsigned short neighborSeed; // r19
    const class TileWallStorage & wallsAdj; // r18
    enum WallStyle style; // r0
    enum Sides incomingSide; // r16
    unsigned short r1; // r1+0x16
    unsigned short r2; // r1+0x14
    enum Sides s1; // r1+0xCC
    enum Sides s2; // r1+0xC8
    unsigned short seedingRoomId; // r17
    unsigned short neighborRoomId; // r16
    class Room * curRoom; // r14
    class CTilePt curTile; // r1+0xC4
    int tx; // r1+0xC0
    int ty; // r1+0xBC
    int flags; // r24
    class TileWalls walls; // r1+0x128
    int hdiag; // r0
    int pt1x; // r26
    int pt2x; // r27
    int seeded0; // r0
    int seeded1; // r0
    int seeded2; // r0
    int seeded3; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800EA1AC -> 0x800EA1BC
int cFixedWorld::ComputeArchValue() {}

// Range: 0x800EA1BC -> 0x800EA248
// this: r31
unsigned char cFixedWorld::DoCommand(int info /* r1+0x8 */) {}

// Range: 0x800EA248 -> 0x800EA4CC
// this: r31
void cFixedWorld::OffsetWorld(const class CTilePt & inOffset /* r29 */) {
    // Local variables
    int level; // r0
    int x; // r30
    int y; // r30
}

// Range: 0x800EA4CC -> 0x800EA51C
unsigned char cFixedWorld::OutOfBuildingBounds() {
    // Local variables
    int xUpperBound; // r5
    int yUpperBound; // r3
}

// Range: 0x800EA51C -> 0x800EA5B8
// this: r30
void cFixedWorld::ClampToGrid(class CTilePt & aPt /* r31 */) const {}

// Range: 0x800EA5B8 -> 0x800EA5F8
unsigned char cFixedWorld::OutOfGrid() {}

// Range: 0x800EA5F8 -> 0x800EA600
int cFixedWorld::GetXSize() {}

// Range: 0x800EA600 -> 0x800EA608
int cFixedWorld::GetYSize() {}

// Range: 0x800EA608 -> 0x800EA610
int cFixedWorld::GetMaxSize() {}

// Range: 0x800EA610 -> 0x800EA66C
// this: r31
enum FloorPattern cFixedWorld::GetFloor() {
    // Local variables
    class CTilePt useIn; // r1+0x8
}

// Range: 0x800EA66C -> 0x800EA708
unsigned char cFixedWorld::IsGrassAt() {
    // Local variables
    enum FloorPattern floorType; // r31
    const struct FloorSet & floorSet; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800EA708 -> 0x800EA784
// this: r28
enum FloorPattern cFixedWorld::SetFloor(const class CTilePt & in /* r29 */, enum FloorPattern newFloor /* r31 */) {
    // Local variables
    enum FloorPattern pat; // r30
}

// Range: 0x800EA784 -> 0x800EA844
// this: r29
unsigned short cFixedWorld::GetRoom(const class CTilePt & in /* r30 */) {}

// Range: 0x800EA844 -> 0x800EA878
void cFixedWorld::SetRoom(unsigned short inRoom /* r31 */) {}

// Range: 0x800EA878 -> 0x800EA8A4
unsigned char cFixedWorld::IsOutside() {}

// Range: 0x800EA8A4 -> 0x800EA93C
// this: r29
void cFixedWorld::SetFlag(unsigned char nFlag /* r30 */, unsigned char bVal /* r31 */) {
    // Local variables
    class CTilePt pt; // r1+0x8
    unsigned char flags; // r0
}

// Range: 0x800EA93C -> 0x800EAD04
// this: r30
void cFixedWorld::UpdateRoomStyles() {
    // Local variables
    unsigned char mask; // r1+0x8
    class EIObjectMan * pObjMan; // r29
    class TNodeList allObjects; // r1+0x20
    class NLIteratorPtrType * i; // r28
    class ISimInstance * instance; // r0
    class cXObject * obj; // r29
    enum ObjectStyle style; // r31
    class EBound3 bounds; // r1+0x48
    int x; // r27
    int y; // r26
    unsigned short roomID; // r0
    class Room * r; // r29
    class EBound3 bounds; // r1+0x30
    unsigned short roomID; // r0
    class Room * r; // r26
    unsigned short roomID; // r0
    class Room * r; // r26

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800EAD20 -> 0x800EAD54
unsigned char cFixedWorld::HasWalls() {}

// Range: 0x800EAD54 -> 0x800EAD5C
class TileWallStorage & cFixedWorld::GetWallStorage() {}

// Range: 0x800EAD5C -> 0x800EADC0
// this: r30
unsigned char cFixedWorld::MayEditTile(const class CTilePt & inWhere /* r31 */) const {}

// Range: 0x800EADC0 -> 0x800EAE98
// this: r29
unsigned short cFixedWorld::GetRoomIdFromPoint(class CTilePt & wherePt /* r30 */) {
    // Local variables
    unsigned short room; // r31
    class RoomManager * room_mgr; // r0
    class Room * r1; // r1+0x14
    class Room * r2; // r1+0x10
    enum Sides s1; // r1+0xC
    enum Sides s2; // r1+0x8
    class TileWalls walls; // r1+0x18
}

// Range: 0x800EAE98 -> 0x800EB108
// this: r28
unsigned short cFixedWorld::ResolveRoomID(const class FTilePt & inPt /* r29 */) {
    // Local variables
    class CTilePt cpt; // r1+0x10
    unsigned short roomID; // r30
    class TileWalls tw; // r1+0x14
    class CTilePt adj1; // r1+0xC
    class CTilePt adj2; // r1+0x8
}

// Range: 0x800EB108 -> 0x800EB174
// this: r30
void cFixedWorld::PrepareWallUndoBuffer(class CWallArray * pWallArray /* r31 */) {}

// Range: 0x800EB174 -> 0x800EB1E8
// this: r30
class CWallArray * cFixedWorld::CreateWallUndoBuffer() {}

// Range: 0x800EB1E8 -> 0x800EB23C
// this: r31
void cFixedWorld::DestroyWallUndoBuffer() {}

// Range: 0x800EB23C -> 0x800EB278
void cFixedWorld::CommitWallChanges() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x800EB278 -> 0x800EB2F4
// this: r31
void cFixedWorld::UndoWallChanges() {
    // Local variables
    class CWallArray temp; // r1+0x8
}

// Range: 0x800EB2F4 -> 0x800EB354
// this: r31
void cFixedWorld::PrepareFloorUndoBuffer() {}

// Range: 0x800EB354 -> 0x800EB390
void cFixedWorld::CommitFloorChanges() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x800EB390 -> 0x800EB400
// this: r31
void cFixedWorld::UndoFloorChanges() {
    // Local variables
    class CFloorArray temp; // r1+0x8
}

// Range: 0x800EB400 -> 0x800EB43C
// this: r31
void cFixedWorld::DestroyFloorUndoBuffer() {}

// Range: 0x800EB43C -> 0x800EB478
void cFixedWorld::CreateTheWorld() {
    // References
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x800EB478 -> 0x800EB4BC
void cFixedWorld::DestroyTheWorld() {
    // References
    // -> class cFixedWorld * pFixedWorld;
}


