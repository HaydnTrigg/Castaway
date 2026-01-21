/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\wallmanipulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007908C -> 0x8007D344
*/
// Range: 0x8007908C -> 0x800790EC
// this: r31
WallManipulatorParams::WallManipulatorParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule15WallManipulator21WallManipulatorParams;
}

// Range: 0x800790EC -> 0x80079148
int WallManipulator::CalculateAvailableItemCount(int priceperitem /* r31 */) {
    // Local variables
    int result; // r3
    int funds; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80079148 -> 0x80079254
// this: r30
WallManipulator::WallManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule15WallManipulator;
}

// Range: 0x800792AC -> 0x80079374
// this: r30
WallManipulator::~WallManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule15WallManipulator;
}

// Range: 0x80079374 -> 0x800793BC
// this: r31
void WallManipulator::OnCreate() {}

// Range: 0x800793BC -> 0x800793F4
// this: r31
void WallManipulator::OnDestroy() {}

// Range: 0x800793F4 -> 0x800796B8
// this: r30
void WallManipulator::OnStart(const struct InteractorParams * pParams /* r28 */) {
    // Local variables
    struct ButtonSemantic butSems[11]; // r1+0x40
    struct StickSemantic stickSems[4]; // r1+0x20
    class InteractorResourceSet * pResourceSet; // r0
    class ESimsCam * pCamera; // r28

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80079738 -> 0x800797E0
// this: r31
void WallManipulator::OnStop() {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x800797E0 -> 0x800799E4
// this: r31
void WallManipulator::CommitTransaction(enum ClientNotificationState stateMessage /* r29 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    int i; // r30
    struct FenceSellCount fenceSellCount; // r1+0x18
    int i; // r30
    struct PatternSellCount paperSellCount; // r1+0x10
    int i; // r30
    struct InvStock doorWindowSellCount; // r1+0x8
}

// Range: 0x80079A64 -> 0x80079C34
// this: r31
unsigned char WallManipulator::FinalizePlacement() {
    // Local variables
    class EVec3 v0; // r1+0x1C
    class EVec3 v1; // r1+0x10
    unsigned char canAdd; // r1+0x8
    int totalWallsBuilt; // r0
    int placeholder; // r1+0xC
    enum ERoomWallBuildReturnCode previewRetCode; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80079C34 -> 0x80079DEC
// this: r26
unsigned char WallManipulator::FinalizeWallDel(const class EVec3 & v0 /* r27 */, const class EVec3 & v1 /* r28 */, int & count /* r29 */) {
    // Local variables
    int wallsSold; // r1+0x10
    class CTilePt c0; // r1+0xC
    class CTilePt c1; // r1+0x8
    enum eCTilePtDir tileDir; // r0
    enum TileWallsSegment theSeg; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80079DEC -> 0x8007A014
// this: r30
unsigned char WallManipulator::FillRoomEndpointsArray(class EVec3 * outputArray /* r31 */) {
    // Local variables
    float l; // f30
    float r; // f29
    float t; // f28
    float b; // f0
}

// Range: 0x8007A014 -> 0x8007A0FC
// this: r28
int WallManipulator::CountWallsInRoomSelection() {
    // Local variables
    int numSelectedWalls; // r30
    class EVec3 corners[4]; // r1+0x8
    int i; // r29
    int currentSideCount; // r0
}

// Range: 0x8007A0FC -> 0x8007A40C
// this: r29
unsigned char WallManipulator::FinalizeRoom() {
    // Local variables
    class EVec3 corners[4]; // r1+0x18
    int total; // r28
    int count; // r1+0x10
    int i; // r30
    unsigned char bCanAddWall[4]; // r1+0xC
    int totalWallsBuilt; // r30
    int i; // r31
    int wallCost; // r0
    int cost; // r1+0x8
    int i; // r26
    enum ERoomWallBuildReturnCode previewRetCode; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007A40C -> 0x8007A588
// this: r31
void WallManipulator::HandleFinalizeRequest() {
    // Local variables
    unsigned char bDidSucceed; // r30
    int segcount; // r1+0x8
}

// Range: 0x8007A588 -> 0x8007A5D0
// this: r31
void WallManipulator::HandleSwapRequest() {}

// Range: 0x8007A5D0 -> 0x8007A65C
// this: r31
void WallManipulator::HandleExitRequest() {}

// Range: 0x8007A65C -> 0x8007A66C
void WallManipulator::AdjustCursorPosition() {}

// Range: 0x8007A66C -> 0x8007A8E8
// this: r31
void WallManipulator::ValidateWallSegment() {
    // Local variables
    unsigned char bIsValid; // r30
    float testDifference; // f2
    class EVec3 vDragDir; // r1+0x2C
    class EVec3 vStart; // r1+0x20
    class EVec3 vEnd; // r1+0x14
}

// Range: 0x8007A8E8 -> 0x8007A938
void WallManipulator::UpdateStickState() {}

// Range: 0x8007A938 -> 0x8007A9A4
// this: r30
void WallManipulator::ClearWallFadeOffList() {
    // Local variables
    int i; // r31
}

// Range: 0x8007A9A4 -> 0x8007AE78
// this: r31
void WallManipulator::Update(float delta /* f28 */) {
    // Local variables
    class EVec2 screenpt; // r1+0x10
    unsigned char enableCursor; // r30
    class EVec2 tempStickInputValueRead; // r1+0x8
    class EVec3 bestpos; // r1+0x3C
    float rawmag; // f0
    class EVec3 testpos; // r1+0x30
    int deg; // r29
    float testdist; // f29
    float smallestdiff; // f28
    float rad; // f29

    // References
    // -> unsigned char m_lastBlueprintMode;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007AE78 -> 0x8007B424
// this: r31
void WallManipulator::OnCommandPressed() {
    // Local variables
    unsigned char allowanchor; // r29
    struct CallbackData cbd; // r1+0x100
    struct CallbackData cbd; // r1+0xB8
    class EVec3 unused; // r1+0x38
    class ESimsCam * pCamera; // r29
    class EInstance * pClosestWall; // r0
    const class EBound3 & bounds; // r28
    class EVec3 pos0; // r1+0x2C
    class EVec3 pos1; // r1+0x20
    int visibleside; // r0
    class CTilePt ctilept0; // r1+0x1C
    class CTilePt ctilept1; // r1+0x18
    enum eCTilePtDir tileptdir; // r0
    enum TileWallsSegment segtype; // r1+0x14
    class CTilePt inTile; // r1+0x10
    class CTilePt endPoint; // r1+0xC
    enum DiagonalSideSelector dss; // r1+0x8
    class TileWalls tilewalls; // r1+0x44
    enum WallStyle wallstyle; // r0
    unsigned char bIsFence; // r0
    class InteractorResourceSet * pResourceSet; // r28
    struct CallbackData cbd; // r1+0x70

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007B424 -> 0x8007B4AC
void WallManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007B4AC -> 0x8007B518
void WallManipulator::OnCommandReleased() {}

// Range: 0x8007B518 -> 0x8007B56C
void WallManipulator::OnCommandUpdate() {}

// Range: 0x8007B56C -> 0x8007B5B0
int WallManipulator::GetTexGenMode() {}

// Range: 0x8007B5B0 -> 0x8007B5C0
// this: r0
void WallManipulator::PreDraw() {}

// Range: 0x8007B5C0 -> 0x8007B5D0
// this: r0
void WallManipulator::Draw() {}

// Range: 0x8007B5D0 -> 0x8007B7AC
// this: r23
int WallManipulator::GetWallLineCost(const class EVec3 & v0 /* r27 */, const class EVec3 & v1 /* r26 */, unsigned char & bFoundAnAffectedWall /* r24 */, unsigned char bIsSellMode /* r25 */) {
    // Local variables
    class CTilePt c0; // r1+0x14
    class CTilePt c1; // r1+0x10
    class EVec3 vStart; // r1+0x24
    class EVec3 vEnd; // r1+0x18
    enum eCTilePtDir tileDir; // r30
    class cFixedWorld * gWorld; // r29
    enum TileWallsSegment theSeg; // r28
    unsigned char done; // r27
    class CTilePt inTile; // r1+0xC
    int totalWallsBuilt; // r26

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007B7AC -> 0x8007B8D8
// this: r27
unsigned char WallManipulator::SubmitLine(const class EVec3 & v0 /* r28 */, const class EVec3 & v1 /* r29 */, int & changeInNumberOfWalls /* r30 */, unsigned char bDeleteWall /* r31 */) {
    // Local variables
    class CTilePt c0; // r1+0x10
    class CTilePt c1; // r1+0xC
    enum eCTilePtDir tileDir; // r1+0x8
    class EVec3 vStart; // r1+0x20
    class EVec3 vEnd; // r1+0x14
    int side; // r0
}

// Range: 0x8007B8D8 -> 0x8007BC50
unsigned char WallManipulator::DoesNotConflictWithExistingArchitecture(const class CTilePt & inTile /* r25 */, enum TileWallsSegment theSeg /* r26 */) {
    // Local variables
    int mPlacementError; // r29
    class cFixedWorld * gWorld; // r28
    class TileWalls theWalls; // r1+0x30
    unsigned char canAdd; // r31
    class ObjectIterator i; // r1+0x24
    class cXObject * obj; // r0
    class cXObject * thisobj; // r27
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0
    class CTilePt neighbor; // r1+0x14
    class CTilePt worldNeighbor; // r1+0x10
    enum TileWallsSegment theNeighborSeg; // r27
    class cXObject * thisobj; // r28
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0
}

// Range: 0x8007BC6C -> 0x8007BD38
// this: r29
unsigned char WallManipulator::CanChangeTileAdd(const class CTilePt & inTile /* r30 */, enum TileWallsSegment inSeg /* r31 */) {
    // Local variables
    enum TileWallsSegment theSeg; // [invalid]
    class cFixedWorld * gWorld; // r0
    class TileWalls theWalls; // r1+0x8
}

// Range: 0x8007BD38 -> 0x8007C1A0
// this: r25
unsigned char WallManipulator::CanChangeTileDelete(const class CTilePt & inTile /* r28 */, enum TileWallsSegment inSeg /* r29 */) {
    // Local variables
    int mPlacementError; // r0
    class cFixedWorld * gWorld; // r31
    class TileWalls theWalls; // r1+0x24
    enum TileWallsSegment theSeg; // r0
    unsigned char hasWallNotFence; // r0
    unsigned char hasWall; // r0
    unsigned char canDelete; // r30
    class ObjectIterator i; // r1+0x18
    class cXObject * thisobj; // r26
    enum WallStyle style; // r27
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0
    class CTilePt neighbor; // r1+0x8
    class CTilePt & worldNeighbor; // r26
    enum TileWallsSegment theNeighborSeg; // r27
    class ObjectIterator j; // r1+0xC
    class cXObject * thisobj; // r26
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007C1A0 -> 0x8007C574
// this: r26
int WallManipulator::HandleDeleteLine(const class CTilePt & startTile /* r23 */, const class CTilePt & endTile /* r27 */, const enum eCTilePtDir & tileDir /* r28 */) {
    // Local variables
    class cFixedWorld * gWorld; // r31
    class CTilePt curTile; // r1+0x10
    enum TileWallsSegment wallSeg; // r30
    class TileWalls wallsOnCurTile; // r1+0xF0
    int wallsDeleted; // r29
    unsigned char pieceFound; // r3
    enum WallStyle testStyle; // r4
    class CTilePt adjTile; // r1+0xC
    enum TileWallsSegment adjSeg; // r0
    class TileWalls wallsOnAdjTile; // r1+0xC4
    enum WallPattern testPattern; // r0
    enum WallStyle testStyle; // r0
    class CTilePt adjTile; // r1+0x8
    enum TileWallsSegment adjSeg; // r23
    class TileWalls wallsOnAdjTile; // r1+0x98
    enum WallPattern testPattern; // r0

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007C574 -> 0x8007C7B0
// this: r30
int WallManipulator::HandleAddLine(const class CTilePt & startTile /* r31 */, const class CTilePt & endTile /* r22 */, const enum eCTilePtDir & tileDir /* r23 */) {
    // Local variables
    class cFixedWorld * gWorld; // r27
    class CTilePt curTile; // r1+0x8
    enum TileWallsSegment wallSeg; // r26
    class TileWalls wallsOnCurTile; // r1+0x64
    int cost; // r25
    unsigned char failedToAddWall; // r24

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007C7B0 -> 0x8007CA34
unsigned char WallManipulator::LegalWallTile(const class CTilePt & in /* r29 */, enum TileWallsSegment inSeg /* r30 */) {
    // Local variables
    class cFixedWorld * gWorld; // r31
    class CTilePt adjTile; // r1+0x8
    int j; // r30
    class ObjectIterator i; // r1+0xC
    class cXObject * anObj; // r31
    class XRoute * pRoute; // r0
    class cXPerson * pPerson; // r0
    class cXMTObject * mtObject; // r0
}

// Range: 0x8007CA34 -> 0x8007CBA0
// this: r27
unsigned char WallManipulator::AddWallAtTile(const class CTilePt & inTile /* r28 */, class TileWalls & theWalls /* r29 */, enum TileWallsSegment theSeg /* r30 */) {
    // Local variables
    class cFixedWorld * gWorld; // r31
    unsigned char hasWall; // r0
    class CTilePt adjTile; // r1+0x8
    enum TileWallsSegment adjSeg; // r30
    class TileWalls adjWalls; // r1+0x64
}

// Range: 0x8007CBA0 -> 0x8007CC8C
unsigned char WallManipulator::PreviewNRooms() {
    // Local variables
    int nRooms; // r31
    class RoomManager * pRoomman; // r30
    const class map & roomlist; // r29
    struct rbtree_iterator roomItr; // r1+0x14
    class Room * pRoom; // r28
}

// Range: 0x8007CC8C -> 0x8007CD48
// this: r28
void WallManipulator::IncrementSellCountForStyle(enum WallStyle fenceStyle /* r29 */) {
    // Local variables
    unsigned char bFoundit; // r31
    struct FenceSellCount fenceSellCount; // r1+0x8
    int i; // r30
}

// Range: 0x8007CD48 -> 0x8007D164
// this: r27
int WallManipulator::CheckForAffectedWalls(const class EVec3 & vStart /* r21 */, const class EVec3 & vEnd /* r20 */) {
    // Local variables
    class CTilePt startTile; // r1+0x1C
    class CTilePt endTile; // r1+0x18
    enum eCTilePtDir tileDir; // r31
    enum TileWallsSegment segment; // r30
    class cFixedWorld * gWorld; // r29
    class TileWalls walls; // r1+0x64
    class EVec3 curPos; // r1+0x2C
    class EVec3 nextPos; // r1+0x20
    class CTilePt curTile; // r1+0x14
    class CTilePt nextTile; // r1+0x10
    int wallsAffected; // r28
    unsigned char pieceFound; // r0
    class EHouse * ehouse; // r3
    class EIWallPart * ewall; // r0
    class CTilePt adjTile; // r1+0xC
    enum TileWallsSegment adjSegment; // r0
    int testDir; // r20
    class CTilePt testTile; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007D164 -> 0x8007D204
// this: r30
void WallManipulator::SendBuildItemCountChangeEvent(int nSelectionLength /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8007D204 -> 0x8007D20C
unsigned char WallManipulator::GetIsDrawingEnabled() {}

// Range: 0x8007D20C -> 0x8007D214
class EVec3 & WallManipulator::GetAnchorPos() {}

// Range: 0x8007D214 -> 0x8007D21C
class EVec3 & WallManipulator::GetAnchorDrawPos() {}

// Range: 0x8007D21C -> 0x8007D224
float WallManipulator::GetWallHeight() {}

// Range: 0x8007D224 -> 0x8007D22C
float WallManipulator::GetAffectedWallHeight() {}

// Range: 0x8007D22C -> 0x8007D344
// this: r31
unsigned char WallManipulator::OnUndoButton() {
    // Local variables
    struct UndoRedoCommand command; // r1+0x8
    struct CallbackData cbd; // r1+0x20
}


