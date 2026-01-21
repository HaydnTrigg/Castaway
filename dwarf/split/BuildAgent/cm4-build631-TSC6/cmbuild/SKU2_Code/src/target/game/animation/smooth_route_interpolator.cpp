/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\smooth_route_interpolator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80021800 -> 0x80022430
*/
// Range: 0x80021800 -> 0x8002187C
// this: r31
SmoothRouteInterpolator::SmoothRouteInterpolator() {
    // References
    // -> struct [anonymous] __vt__23SmoothRouteInterpolator;
}

// Range: 0x8002187C -> 0x80021914
// this: r30
SmoothRouteInterpolator::~SmoothRouteInterpolator() {
    // References
    // -> struct [anonymous] __vt__23SmoothRouteInterpolator;
}

// Range: 0x80021914 -> 0x8002197C
unsigned char SmoothRouteInterpolator::CanPlace(class EVec2 & pt /* r30 */) {
    // Local variables
    class CCollisionGrid * grid; // r31
    class FTilePt fpt; // r1+0x10
    unsigned char is_blocked; // r0
}

// Range: 0x8002197C -> 0x80021B3C
// this: r20
void SmoothRouteInterpolator::TrimNearPoints(int startIdx /* r21 */, class TileList * pTile /* r31 */) {
    // Local variables
    int listSize; // r25
    int curListSize; // r24
    class FTilePt * iter; // r0
    unsigned int itArr[25]; // r1+0x50
    int curIdx; // r23
    int curIterIdx; // r22
    class EVec2 p1; // r1+0x48
    class EVec2 p2; // r1+0x40
    class EVec2 v; // r1+0x38
    class EVec2 p12; // r1+0x30
    class EVec2 prevp1; // r1+0x28
    class EVec2 postp2; // r1+0x20
    int i; // r22
}

// Range: 0x80021B3C -> 0x80021C8C
// this: r20
void SmoothRouteInterpolator::TrimNearLinearSegments(int startIdx /* r21 */, class TileList * pTile /* r31 */) {
    // Local variables
    int listSize; // r25
    int curListSize; // r0
    unsigned int itArr[25]; // r1+0x28
    int curIterIdx; // r24
    int idx1; // [invalid]
    int idx2; // r23
    int idx3; // r22
    class FTilePt * iter; // r0
    class EVec2 p1; // r1+0x20
    class EVec2 p2; // r1+0x18
    class EVec2 p3; // r1+0x10
    int i; // r22
}

// Range: 0x80021C8C -> 0x80021CE0
// this: r29
void SmoothRouteInterpolator::TrimTileList(int startIdx /* r30 */, class TileList * pTile /* r31 */) {}

// Range: 0x80021CE0 -> 0x80021E98
// this: r28
class EVec2 SmoothRouteInterpolator::MoveMiddlePoint(class EVec2 & p1 /* r29 */, class EVec2 & p2 /* r30 */, class EVec2 & p3 /* r31 */) {
    // Local variables
    class EVec2 v1; // r1+0x58
    class EVec2 v2; // r1+0x50
    class EVec2 v3; // r1+0x48
    class EVec2 tstpt; // r1+0x40
    class EVec2 v; // r1+0x38
    float nextTheta; // r1+0xC
    unsigned char shouldMoveMiddle; // r1+0x8
}

// Range: 0x80021E98 -> 0x80022008
// this: r28
unsigned char SmoothRouteInterpolator::ShouldRemoveMiddle(class EVec2 & p1 /* r29 */, class EVec2 & p2 /* r30 */, class EVec2 & p3 /* r31 */) {
    // Local variables
    class EVec2 v1; // r1+0x18
    class EVec2 v2; // r1+0x10
    float v1Mag; // f31
    float v2Mag; // f30
    float lengthRatio; // f29
    float costheta; // f0
    float theta; // f0
}

// Range: 0x80022008 -> 0x80022120
// this: r28
unsigned char SmoothRouteInterpolator::ClearPathBetweenEndPoints(class EVec2 & orig /* r29 */, float segmentRatio /* f29 */) {
    // Local variables
    class EVec2 dir; // r1+0x18
    float startRatio; // f29
    int i; // r30
    class EVec2 tstPt; // r1+0x10
}

// Range: 0x80022120 -> 0x80022218
// this: r27
unsigned char SmoothRouteInterpolator::ClearPathBetweenEndPointsApproximateTest(class EVec2 & orig /* r28 */, float tileResolution /* f30 */) {
    // Local variables
    class EVec2 dir; // r1+0x18
    float length; // f0
    int totalDisplacementInBigTiles; // r30
    int i; // r29
    class EVec2 tstPt; // r1+0x10
}

// Range: 0x80022218 -> 0x80022284
class EVec2 SmoothRouteInterpolator::FindIntermediateUnitVector(class EVec2 * v12 /* r30 */, class EVec2 & v1 /* r31 */) {}

// Range: 0x80022284 -> 0x800222FC
// this: r28
void SmoothRouteInterpolator::SmoothRouteList(class TileList * pTile /* r29 */, class vector & noSmoothArr /* r30 */, int beginIdx /* r31 */) {}

// Range: 0x800222FC -> 0x8002234C
// this: r30
void SmoothRouteInterpolator::SmoothRouteList(class TileList * pTile /* r31 */) {}

// Range: 0x8002234C -> 0x800223A8
class EVec2 SmoothRouteInterpolator::ConvertFTilePtToEVec2(class FTilePt & pt /* r31 */) {}

// Range: 0x800223A8 -> 0x80022430
// this: r28
unsigned char SmoothRouteInterpolator::SmoothThisSegment(int i /* r29 */) {
    // Local variables
    int listSize; // r0
    int j; // r30
}


