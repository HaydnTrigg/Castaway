/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\tilewalls.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E2E20 -> 0x800E416C
*/
// Range: 0x800E2E20 -> 0x800E2EF0
TileWalls::TileWalls() {}

// Range: 0x800E2EF0 -> 0x800E3150
void TileWalls::GenerateRotationLookups() {
    // Local variables
    int rot; // r28
    int s; // r4
    enum TileWallsSegment seg; // r5
    unsigned int temp; // r6
    int i; // r0
    int iseg; // r6
    int temp; // r3

    // References
    // -> enum DiagonalSideSelector sRotateDiagonalLookup[4][5];
    // -> enum TileWallsSegment sRotateSegmentLookup[4][64];
}

// Range: 0x800E3150 -> 0x800E31C4
// this: r30
enum SheerPlacement TileWalls::GetPlacement(enum TileWallsSegment inSeg /* r31 */) const {
    // Local variables
    int index; // r4
}

// Range: 0x800E31C4 -> 0x800E324C
// this: r29
enum TileWallsSegment TileWalls::SetPlacement(enum SheerPlacement inPlc /* r30 */, enum TileWallsSegment inSeg /* r31 */) {
    // Local variables
    int index; // r5
}

// Range: 0x800E324C -> 0x800E34F4
// this: r27
void TileWalls::Rotate(int inRot /* r28 */) {
    // Local variables
    class TileWalls viewRep; // r1+0x8
    enum TileWallsSegment ourSegs; // r30
    enum TileWallsSegment viewSegs; // r29
}

// Range: 0x800E34F4 -> 0x800E3630
// this: r30
unsigned char TileWalls::CanAdd(enum TileWallsSegment inSeg /* r31 */) const {
    // Local variables
    enum TileWallsSegment total; // r3
    int effective_rotation; // r4
    enum TileWallsSegment rotSeg; // r0
}

// Range: 0x800E3630 -> 0x800E3724
void TileWalls::GetAdjacentTile(class CTilePt * inOutTile /* r31 */) {}

// Range: 0x800E3724 -> 0x800E3770
enum TileWallsSegment TileWalls::GetOppositeSegment() {}

// Range: 0x800E3770 -> 0x800E37C8
enum TileWallsSegment TileWalls::DirToWallSeg() {}

// Range: 0x800E37C8 -> 0x800E3838
enum TileWallsSegment TileWalls::GetWallBetween() {}

// Range: 0x800E3838 -> 0x800E39A0
unsigned char TileWalls::GetWallSegsBetweenTiles(class CTilePt * tile2 /* r30 */, enum TileWallsSegment & seg1 /* r28 */, enum TileWallsSegment & seg2 /* r29 */) {
    // Local variables
    class CTilePt tile; // r1+0x8
    int i; // r30

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x800E39A0 -> 0x800E3A10
int TileWalls::SegmentToIndex() {
    // Local variables
    int index; // r5
    int seg; // r3
    int allBits; // r6
}

// Range: 0x800E3A10 -> 0x800E3A94
enum TileWallsSegment TileWalls::IndexToSegment() {
    // Local variables
    int segs; // r3
}

// Range: 0x800E3A94 -> 0x800E3AD4
unsigned char TileWalls::IsSingleWall() {
    // Local variables
    unsigned int segs; // r4
    int bitCount; // r5
}

// Range: 0x800E3AD4 -> 0x800E3B0C
// this: r31
TileWalls::TileWalls() {}

// Range: 0x800E3B0C -> 0x800E3B40
// this: r31
TileWalls::TileWalls() {}

// Range: 0x800E3B40 -> 0x800E3B80
// this: r31
TileWalls::~TileWalls() {}

// Range: 0x800E3B80 -> 0x800E3BB4
// this: r31
class TileWalls & TileWalls::operator=() {}

// Range: 0x800E3BB4 -> 0x800E3BCC
unsigned char TileWalls::HasWall() {}

// Range: 0x800E3BCC -> 0x800E3BE0
unsigned char TileWalls::HasWall() {}

// Range: 0x800E3BE0 -> 0x800E3C24
unsigned char TileWalls::HasWallNotFence() {}

// Range: 0x800E3C24 -> 0x800E3C60
unsigned char TileWalls::HasFenceNotWall() {}

// Range: 0x800E3C60 -> 0x800E3C78
unsigned char TileWalls::HasDiagonal() {}

// Range: 0x800E3C78 -> 0x800E3CF0
// this: r31
unsigned char TileWalls::HasDiagonalNotFence() const {}

// Range: 0x800E3CF0 -> 0x800E3D88
// this: r29
enum WallPattern TileWalls::GetPattern(enum TileWallsSegment inSeg /* r30 */, enum DiagonalSideSelector inSel /* r31 */) const {}

// Range: 0x800E3D88 -> 0x800E3E3C
// this: r27
enum TileWallsSegment TileWalls::SetPattern(enum WallPattern inPattern /* r28 */, enum TileWallsSegment inSeg /* r29 */, enum DiagonalSideSelector inSel /* r30 */) {
    // Local variables
    unsigned int i; // r31
    enum DiagonalSideSelector outSel; // r1+0x8
}

// Range: 0x800E3E3C -> 0x800E3E9C
// this: r30
enum WallStyle TileWalls::GetStyle(enum TileWallsSegment inSeg /* r31 */) const {}

// Range: 0x800E3E9C -> 0x800E3F24
// this: r28
enum TileWallsSegment TileWalls::SetStyle(enum WallStyle inStyle /* r29 */, enum TileWallsSegment inSeg /* r30 */) {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x800E3F24 -> 0x800E3F98
// this: r30
enum TileWallsSegment TileWalls::AddWall(enum TileWallsSegment inSeg /* r31 */) {}

// Range: 0x800E3F98 -> 0x800E3FEC
// this: r30
void TileWalls::RemoveWall(enum TileWallsSegment inSeg /* r31 */) {}

// Range: 0x800E3FEC -> 0x800E3FF8
void TileWalls::RemoveAllWalls() {}

// Range: 0x800E3FF8 -> 0x800E4068
// this: r30
enum TileWallsSegment TileWalls::First() const {
    // Local variables
    unsigned int out; // r31
}

// Range: 0x800E4068 -> 0x800E40D8
// this: r30
enum TileWallsSegment TileWalls::Next(enum TileWallsSegment inPrevious /* r31 */) const {
    // Local variables
    int out; // [invalid]
}

// Range: 0x800E40D8 -> 0x800E40F4
enum FloorPattern TileWalls::GetFloorValue() {}

// Range: 0x800E40F4 -> 0x800E411C
enum FloorPattern TileWalls::SetFloorValue() {
    // Local variables
    enum FloorPattern pat; // r0
}

// Range: 0x800E411C -> 0x800E4134
void TileWalls::ConvertToWorldCoords() {}

// Range: 0x800E4134 -> 0x800E4150
enum TileWallsSegment TileWalls::RotateSegment() {
    // References
    // -> enum TileWallsSegment sRotateSegmentLookup[4][64];
}

// Range: 0x800E4150 -> 0x800E416C
enum DiagonalSideSelector TileWalls::RotateDiagonal() {
    // References
    // -> enum DiagonalSideSelector sRotateDiagonalLookup[4][5];
}


