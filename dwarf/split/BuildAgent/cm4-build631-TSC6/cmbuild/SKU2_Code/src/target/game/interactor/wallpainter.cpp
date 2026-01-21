/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\wallpainter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007D420 -> 0x80080020
*/
// Range: 0x8007D420 -> 0x8007D478
// this: r31
WallPainterParams::WallPainterParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule11WallPainter17WallPainterParams;
}

// Range: 0x8007D478 -> 0x8007D524
// this: r30
WallPainter::WallPainter() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule11WallPainter;
}

// Range: 0x8007D57C -> 0x8007D614
// this: r30
WallPainter::~WallPainter() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule11WallPainter;
}

// Range: 0x8007D614 -> 0x8007D65C
// this: r31
void WallPainter::OnCreate() {}

// Range: 0x8007D65C -> 0x8007D694
// this: r31
void WallPainter::OnDestroy() {}

// Range: 0x8007D694 -> 0x8007D928
// this: r29
void WallPainter::OnStart(const struct InteractorParams * pParams /* r30 */) {
    // Local variables
    struct ButtonSemantic butSems[7]; // r1+0x40
    struct StickSemantic stickSems[4]; // r1+0x20
    class ESimsCam * pCamera; // r15
    class InteractorResourceSet * pResourceSet; // r0

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007D984 -> 0x8007D9FC
// this: r31
void WallPainter::OnStop() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007D9FC -> 0x8007DB0C
// this: r29
void WallPainter::CommitTransaction(enum ClientNotificationState stateMessage /* r30 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x10
    int i; // r31
    struct PatternSellCount sellCount; // r1+0x8
}

// Range: 0x8007DBCC -> 0x8007DCAC
// this: r30
void WallPainter::HandleFinalizeRequest() {
    // Local variables
    unsigned char bDidSucceed; // r31
}

// Range: 0x8007DCAC -> 0x8007DCF4
// this: r31
void WallPainter::HandleSwapRequest() {}

// Range: 0x8007DCF4 -> 0x8007DD68
// this: r31
void WallPainter::HandleExitRequest() {}

// Range: 0x8007DD68 -> 0x8007DE58
// this: r31
void WallPainter::AdjustCursorPosition() {
    // Local variables
    int side; // r0

    // References
    // -> static float kCursorBaseAdditionalRotation;
}

// Range: 0x8007DE58 -> 0x8007E228
// this: r29
void WallPainter::ValidateWallSegment() {
    // Local variables
    unsigned char bIsValid; // r31
    class EVec3 vDragDir; // r1+0x3C
    float testDifference; // f2
    class EVec3 vStart; // r1+0x30
    class EVec3 vEnd; // r1+0x24
    int whichSide; // r25
    class TileWalls walls; // r1+0x74
    class cFixedWorld * gWorld; // r30
    class CTilePt curTile; // r1+0x14
    class CTilePt endTile; // r1+0x10
    enum eCTilePtDir tileDir; // r26
    enum TileWallsSegment segment; // r1+0xC
    enum DiagonalSideSelector side; // r1+0x8
    enum WallPattern userBoughtPattern; // r0
    enum WallPattern testPattern; // r0

    // References
    // -> class EGlobal _globals;
    // -> class CTilePt sDirections[8];
}

// Range: 0x8007E228 -> 0x8007E278
void WallPainter::UpdateStickState() {}

// Range: 0x8007E278 -> 0x8007E70C
// this: r31
void WallPainter::Update(float delta /* f28 */) {
    // Local variables
    class EVec3 wall_hit_pos; // r1+0x48
    class EInstance * pClosestWall; // r30
    unsigned char cursorHighlight; // r29
    class EVec3 bestpos; // r1+0x3C
    float rawmag; // f0
    class EVec3 testpos; // r1+0x30
    int deg; // r29
    float rad; // f29
    float testdist; // f29
    float smallestdiff; // f28
    class TileWalls walls; // r1+0x80
    class cFixedWorld * gWorld; // r28
}

// Range: 0x8007E70C -> 0x8007EC70
// this: r31
void WallPainter::OnCommandPressed() {
    // Local variables
    class EVec3 unused; // r1+0x38
    class EInstance * pClosestWall; // r0
    const class EBound3 & bounds; // r29
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
    class TileWalls theWalls; // r1+0xC8
    int paperpattern; // r28
    class InteractorResourceSet * pResourceSet; // r28
    struct CallbackData cbd; // r1+0x9C
    struct CallbackData cbd; // r1+0x70
    struct CallbackData cbd; // r1+0x44

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007EC70 -> 0x8007ECE8
void WallPainter::OnCommandReleased() {}

// Range: 0x8007ECE8 -> 0x8007ED38
void WallPainter::OnCommandUpdate() {}

// Range: 0x8007ED38 -> 0x8007ED48
// this: r0
void WallPainter::PreDraw() {}

// Range: 0x8007ED48 -> 0x8007ED58
// this: r0
void WallPainter::Draw() {}

// Range: 0x8007ED58 -> 0x8007F210
// this: r15
void WallPainter::CountWallsInRoomSelection() {
    // Local variables
    class EVec3 testPoint; // r1+0x38
    class CTilePt testtilept; // r1+0x1C
    unsigned short room; // r0
    class cFixedWorld * gWorld; // r22
    class RoomManager * room_mgr; // r21
    class Room * pRoom; // r0
    const class vector & floorTiles; // r14
    const class CTilePt * i; // r20
    enum WallPattern pattern; // r0
    class vector diagtiles; // r1+0x28
    class TileWalls walls; // r1+0x44
    enum TileWallsSegment aSeg; // r19
    enum DiagonalSideSelector aSel[2]; // r1+0x20
    int sel_count; // r18
    const class CTilePt * diagit; // r0
    class Room * r1; // r1+0x18
    class Room * r2; // r1+0x14
    enum Sides s1; // r1+0x10
    enum Sides s2; // r1+0xC
    int i; // r17
    enum WallPattern oldPattern; // r16

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007F210 -> 0x8007F7B4
// this: r15
unsigned char WallPainter::FinalizePaperForRoom() {
    // Local variables
    class EVec3 testPoint; // r1+0x30
    class CTilePt wherePt; // r1+0x20
    unsigned short room; // r0
    class cFixedWorld * gWorld; // r14
    class RoomManager * room_mgr; // r23
    class Room * pRoom; // r0
    const class vector & floorTiles; // f8
    const class CTilePt * i; // r22
    enum WallPattern pattern; // r21
    class CTilePt thePt; // r1+0x1C
    class TileWalls walls; // r1+0x94
    enum TileWallsSegment aSeg; // r20
    enum DiagonalSideSelector aSel[2]; // r1+0x28
    int sel_count; // r19
    class CTilePt wherePt; // r1+0x18
    class Room * r1; // r1+0x14
    class Room * r2; // r1+0x10
    enum Sides s1; // r1+0xC
    enum Sides s2; // r1+0x8
    int i; // r18
    class cFixedWorld * gWorld; // r17
    class TileWalls theWalls; // r1+0x68
    enum WallPattern oldPattern; // r16

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007F7B4 -> 0x8007F8D8
// this: r28
unsigned char WallPainter::FinalizePaperForLine() {
    // Local variables
    int visibleSide; // r0
    unsigned char ret; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007F8D8 -> 0x8007F9B8
// this: r29
unsigned char WallPainter::FinalizeSellPaperForLine() {
    // Local variables
    int visibleSide; // r0
    unsigned char ret; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007F9B8 -> 0x8007FD14
// this: r27
unsigned char WallPainter::SubmitPaperLine(const class EVec2 & v0 /* r25 */, const class EVec2 & v1 /* r24 */, enum WallPattern pattern /* r28 */, int whichSide /* r23 */) {
    // Local variables
    class CTilePt c0; // r1+0x20
    class CTilePt c1; // r1+0x1C
    enum WallPattern userBoughtPattern; // r0
    unsigned char bBuyMode; // r30
    enum eCTilePtDir tileDir; // r29
    enum TileWallsSegment theSeg; // r1+0x18
    class CTilePt inTile; // r1+0x14
    class CTilePt endPoint; // r1+0x10
    enum DiagonalSideSelector side; // r1+0xC
    class cFixedWorld * gWorld; // r25
    int nwallsadded; // r24
    unsigned char done; // r23
    class TileWalls theWalls; // r1+0x68
    enum WallPattern testPattern; // r0

    // References
    // -> class CTilePt sDirections[8];
    // -> class EGlobal _globals;
}

// Range: 0x8007FD14 -> 0x8007FD20
int WallPainter::GetShaderID() {}

// Range: 0x8007FD20 -> 0x8007FDB8
// this: r30
void WallPainter::SendBuildItemCountChangeEvent(int segementsLeft /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8007FDB8 -> 0x8007FDC0
unsigned char WallPainter::GetIsAnchorDrawingOn() {}

// Range: 0x8007FDC0 -> 0x8007FDC8
class EVec3 & WallPainter::GetAnchorPos() {}

// Range: 0x8007FDC8 -> 0x8007FDD0
class EVec3 & WallPainter::GetAnchorDrawPos() {}

// Range: 0x8007FDD0 -> 0x8007FDD8
float WallPainter::GetPaperToolHeight() {}

// Range: 0x8007FDD8 -> 0x8007FDE0
float WallPainter::GetWallHeight() {}

// Range: 0x8007FDE0 -> 0x8007FE28
// this: r31
void WallPainter::SaveInHoldPos() {}

// Range: 0x8007FE28 -> 0x8007FE9C
// this: r30
void WallPainter::RestoreFromHoldPos(class EVec3 & vToRestore /* r31 */) {}

// Range: 0x8007FE9C -> 0x8007FEA4
int WallPainter::calc_paper_price() {}

// Range: 0x8007FEA4 -> 0x8007FFBC
// this: r31
unsigned char WallPainter::OnUndoButton() {
    // Local variables
    struct UndoRedoCommand command; // r1+0x8
    struct CallbackData cbd; // r1+0x20
}

// Range: 0x8007FFBC -> 0x80080020
int WallPainter::CalculateAvailableItemCount(int priceperitem /* r31 */) {
    // Local variables
    int result; // r3
    int funds; // r0

    // References
    // -> class EGlobal _globals;
}


