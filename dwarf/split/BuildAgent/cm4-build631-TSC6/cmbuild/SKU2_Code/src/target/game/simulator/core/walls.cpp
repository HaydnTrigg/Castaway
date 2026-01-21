/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\walls.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E685C -> 0x800E759C
*/
// Range: 0x800E685C -> 0x800E6A74
unsigned char SectWall(class FTileRect * testRect /* r23 */, int inLevel /* r24 */) {
    // Local variables
    int left; // r31
    int right; // r30
    int bottom; // r29
    int y; // r28
    int x; // r27
    class CTilePt cur; // r1+0x8
    class TileWalls tw; // r1+0xC
    enum TileWallsSegment seg; // r26
    enum TileWallsSegment end; // r25
    int wallPos; // r6
    int side1; // r4
    int side2; // r0
}

// Range: 0x800E6A74 -> 0x800E759C
unsigned char CheckWallFlags(const class FTilePt & location /* r24 */, int level /* r23 */, int objDir /* r30 */, int wflags /* r31 */) {
    // Local variables
    int x; // r26
    int y; // r0
    class CTilePt pt; // r1+0xB4
    class TileWalls walls; // r1+0xD8
    unsigned char wallIsDiag; // r0
    enum TileWallsSegment segs[4]; // r1+0xC8
    unsigned char requires[4]; // r1+0xB0
    unsigned char prohibits[4]; // r1+0xAC
    class CTilePt borderTiles[4]; // r1+0xB8
    int i; // r25
    unsigned char normal; // r24
    unsigned char walled; // r0
    enum WallStyle style; // r23
    class CTilePt borderPt; // r1+0xA8
    unsigned char edgeOfLot; // r0

    // References
    // -> int gPlacementError;
}


