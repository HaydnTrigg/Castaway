/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\floorpainter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80059BAC -> 0x8005C5A0
*/
// Range: 0x80059BAC -> 0x80059C08
// this: r31
FloorPainterParams::FloorPainterParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule12FloorPainter18FloorPainterParams;
}

// Range: 0x80059C08 -> 0x80059C6C
int FloorPainter::CalculateAvailableItemCount(int priceperitem /* r31 */) {
    // Local variables
    int result; // r3
    int funds; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80059C6C -> 0x80059D28
// this: r30
FloorPainter::FloorPainter() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__Q216InteractorModule12FloorPainter;
}

// Range: 0x80059D28 -> 0x80059DBC
// this: r30
FloorPainter::~FloorPainter() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule12FloorPainter;
}

// Range: 0x80059DBC -> 0x80059E20
// this: r31
void FloorPainter::OnCreate() {
    // Local variables
    int floorPatternCount; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80059E20 -> 0x80059E68
// this: r31
void FloorPainter::OnDestroy() {}

// Range: 0x80059E68 -> 0x8005A070
// this: r30
void FloorPainter::OnStart(const struct InteractorParams * pParams /* r29 */) {
    // Local variables
    struct ButtonSemantic butSems[12]; // r1+0x40
    struct StickSemantic stickSems[4]; // r1+0x20
    class ESimsCam * pCamera; // r29
    class InteractorResourceSet * pResourceSet; // r0

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8005A070 -> 0x8005A108
// this: r31
void FloorPainter::OnStop() {
    // Local variables
    class cFixedWorld * world; // r0
    class InteractorResourceSet * pResourceSet; // r0

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8005A108 -> 0x8005A158
void FloorPainter::UpdateStickState() {}

// Range: 0x8005A158 -> 0x8005A650
// this: r29
void FloorPainter::Update(float delta /* f31 */) {
    // Local variables
    class cFixedWorld * pWorld; // r30
    struct FloorSet floorset; // r1+0x28
    int floorsetsize; // r0
    enum FloorPattern floorid; // r28
    class vector floorpatterncounts; // r1+0x38
    int startX; // r1+0x24
    int startY; // r1+0x20
    int endX; // r1+0x1C
    int endY; // r1+0x18
    class CTilePt ctpt; // r1+0x14
    int x; // r27
    int y; // r26
    int x; // r0
    int y; // r0
    class CTilePt ctpt; // r1+0x10
    unsigned short roomID; // r0
    class RoomManager * pRoomman; // r0
    const class vector & tiles; // r26
    const class CTilePt * it; // r27
    int totalcount; // r26
    unsigned long index; // r27
    unsigned long floorpatterncount; // r0
    struct InvStock invstock; // r1+0x30
    int tilesSelected; // r1+0xC

    // References
    // -> class EGlobal _globals;
    // -> unsigned char m_lastBlueprintMode;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8005A650 -> 0x8005A6CC
// this: r30
void FloorPainter::SendBuildItemCountChangeEvent(int tilesLeft /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8005A724 -> 0x8005A79C
// this: r30
void FloorPainter::SendSuccessEvent(int tilecount /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8005A79C -> 0x8005A7AC
unsigned char FloorPainter::IsInRemoveMode() {}

// Range: 0x8005A7AC -> 0x8005A7C4
unsigned char FloorPainter::IsArmed() {}

// Range: 0x8005A7C4 -> 0x8005A984
// this: r30
void FloorPainter::HandleActionCmdInRemoveMode() {
    // Local variables
    int floorPatternCount; // r31
    int floorPatternCount; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005A984 -> 0x8005AA20
// this: r28
void FloorPainter::UpdateStockChanges(int * floorList /* r29 */, int floorPatternCount /* r30 */) {
    // Local variables
    struct InvStock floorPack; // r1+0x8
    int i; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005AA20 -> 0x8005ABE8
// this: r29
void FloorPainter::HandleActionCmdInPlaceMode() {
    // Local variables
    int floorPatternCount; // r31
    int floorsPainted; // r30
    int floorPatternCount; // r30
    int floorsPainted; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005ABE8 -> 0x8005ABF0
unsigned char FloorPainter::IsInPlaceMode() {}

// Range: 0x8005ABF0 -> 0x8005B0C0
// this: r31
void FloorPainter::OnCommandPressed() {
    // Local variables
    struct InvStock stock; // r1+0x10
    class CTilePt ctpt; // r1+0x8
    class TileWalls wall; // r1+0x6C
    int floorpattern; // r29
    struct FloorTile * pFloorTile; // r30
    class InteractorResourceSet * pResourceSet; // r28
    struct CallbackData cbd; // r1+0x50
    struct CallbackData cbd; // r1+0x34
    struct CallbackData cbd; // r1+0x18

    // References
    // -> unsigned char m_blueprintMode;
    // -> class EGlobal _globals;
}

// Range: 0x8005B0C0 -> 0x8005B148
void FloorPainter::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8005B148 -> 0x8005B1E8
// this: r31
void FloorPainter::OnCommandReleased() {}

// Range: 0x8005B1E8 -> 0x8005B238
void FloorPainter::OnCommandUpdate() {}

// Range: 0x8005B238 -> 0x8005B248
// this: r0
void FloorPainter::PreDraw() {}

// Range: 0x8005B248 -> 0x8005B258
// this: r0
void FloorPainter::Draw() {}

// Range: 0x8005B258 -> 0x8005B324
unsigned char FloorPainter::IsValidFloorPlacement(const class CTilePt & point /* r30 */, enum FloorPattern floorpat /* r31 */) {
    // Local variables
    unsigned char floorFlags; // r0
    class ObjectIterator i; // r1+0x8
    class cXObject * thisobj; // r0
    int pflags; // r0
}

// Range: 0x8005B324 -> 0x8005B4AC
unsigned char FloorPainter::SetFloorTile(class CTilePt * pCTilePt /* r26 */, enum FloorPattern floorTileId /* r27 */, int * replacedFloorPatternCounts /* r28 */) {
    // Local variables
    unsigned char tileWasReplaced; // r31
    class cFixedWorld & world; // r30
    class TileWalls wall; // r1+0x34
    enum FloorPattern pat; // r0
    enum DiagonalSideSelector A; // r29
    enum DiagonalSideSelector B; // r5
    enum FloorPattern pat; // r0
}

// Range: 0x8005B4AC -> 0x8005B6BC
// this: r26
unsigned char FloorPainter::SetFloorTile(const class CTilePt & cTilePt /* r30 */, enum FloorPattern floorTileId /* r27 */, class Room * pRoom /* r28 */, int * pReplacedFloorPatternCounts /* r31 */) {
    // Local variables
    unsigned char bTileWasReplaced; // r29
    class TileWalls walls; // r1+0x3C
    enum FloorPattern pat; // r0
    enum DiagonalSideSelector A; // r1+0xC
    enum DiagonalSideSelector B; // r1+0x8
    enum FloorPattern pat; // r0
    enum FloorPattern pat; // r0
    enum FloorPattern pat; // r0
}

// Range: 0x8005B6BC -> 0x8005B8C4
void FloorPainter::RemoveFloorTile(class CTilePt * pCTilePt /* r29 */, int * floorPatternCounts /* r30 */) {
    // Local variables
    class cFixedWorld & world; // r31
    class TileWalls wall; // r1+0x3C
    enum FloorPattern floorPat; // r28
    struct FloorSet floorSet; // r1+0xC
    enum DiagonalSideSelector A; // r27
    enum DiagonalSideSelector B; // r26
    unsigned char resetFloor; // r25
    struct FloorSet floorSet; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005B8C4 -> 0x8005B970
void FloorPainter::GetSelectedRectPoints() {}

// Range: 0x8005B970 -> 0x8005BAA4
// this: r26
int FloorPainter::PaintFloor(int * replacedFloorPatternCounts /* r27 */) {
    // Local variables
    int startX; // r1+0x18
    int startY; // r1+0x14
    int endX; // r1+0x10
    int endY; // r1+0xC
    class CTilePt ctpt; // r1+0x8
    int tileCount; // r31
    enum FloorPattern floorTileId; // r30
    int x; // r29
    int y; // r28
    int price; // r4
}

// Range: 0x8005BAA4 -> 0x8005BC44
// this: r31
unsigned char FloorPainter::RemoveFloor(int * floorPatternCounts /* r27 */) {
    // Local variables
    int startX; // r1+0x1C
    int startY; // r1+0x18
    int endX; // r1+0x14
    int endY; // r1+0x10
    class CTilePt ctpt; // r1+0xC
    int x; // r30
    int y; // r29
    int price; // r29
    struct FloorSet floorset; // r1+0x8
    int count; // r0
    struct FloorTile * pFloorTile; // r3
    int index; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005BC44 -> 0x8005BDE8
// this: r24
int FloorPainter::PaintRoom(int * pReplacedFloorPatternCounts /* r25 */) {
    // Local variables
    int x; // r0
    int y; // r0
    class CTilePt ctpt; // r1+0x8
    unsigned short roomID; // r0
    class RoomManager * pRoomman; // r0
    class Room * pRoom; // r30
    int tileCount; // r29
    int tilesNotPlaced; // r28
    const class vector & tiles; // r31
    enum FloorPattern floorTileId; // r27
    const class CTilePt * it; // r26
    int price; // r5
}

// Range: 0x8005BDE8 -> 0x8005BFE8
// this: r31
unsigned char FloorPainter::RemoveRoom(int * replacedFloorPatternCounts /* r27 */) {
    // Local variables
    int x; // r0
    int y; // r0
    class CTilePt ctpt; // r1+0x10
    unsigned short roomID; // r0
    class RoomManager * pRoomman; // r0
    const class vector & tiles; // r30
    enum FloorPattern floorTileId; // r29
    const class CTilePt * it; // r28
    class CTilePt tile; // r1+0xC
    int price; // r28
    struct FloorSet floorset; // r1+0x8
    int count; // r0
    struct FloorTile * pFloorTile; // r3
    int index; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005BFE8 -> 0x8005C134
void FloorPainter::CheckDiagForRoomContainment(class Room * pRoom /* r25 */, const class CTilePt & cTilePt /* r26 */, class TileWalls & walls /* r27 */, enum DiagonalSideSelector & A /* r28 */, enum DiagonalSideSelector & B /* r29 */) {
    // Local variables
    unsigned char leftIn; // r0
    unsigned char rightIn; // r0
}

// Range: 0x8005C134 -> 0x8005C1A0
// this: r31
void FloorPainter::SwapTools() {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8005C1A0 -> 0x8005C410
// this: r30
unsigned char FloorPainter::CurrentSelectionIsValid(int & tilesSelected /* r31 */) {
    // Local variables
    int startX; // r1+0x1C
    int startY; // r1+0x18
    int endX; // r1+0x14
    int endY; // r1+0x10
    class CTilePt ctpt; // r1+0xC
    int tileCount; // r29
    enum FloorPattern floorTileId; // r28
    class cFixedWorld & world; // r27
    enum FloorPattern pat; // r26
    int x; // r25
    int y; // r24
    class CTilePt ctpt; // r1+0x8
    unsigned short roomID; // r0
    class RoomManager * pRoomman; // r0
    int tileCount; // r24
    const class vector & tiles; // r25
    enum FloorPattern floorTileId; // r26
    class cFixedWorld & world; // r27
    enum FloorPattern pat; // r28
    const class CTilePt * it; // r29
}

// Range: 0x8005C410 -> 0x8005C418
unsigned char FloorPainter::GetIsAnchorDrawingOn() {}

// Range: 0x8005C418 -> 0x8005C534
// this: r31
unsigned char FloorPainter::OnUndoButton() {
    // Local variables
    struct UndoRedoCommand command; // r1+0x28
    struct CallbackData cbd; // r1+0x8
}


