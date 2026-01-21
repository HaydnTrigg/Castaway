/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\smooth_route_tester.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80022430 -> 0x80022B80
*/
// Range: 0x80022430 -> 0x80022444
SmoothRouteTester::SmoothRouteTester() {
    // References
    // -> struct [anonymous] __vt__17SmoothRouteTester;
}

// Range: 0x80022444 -> 0x8002248C
// this: r31
SmoothRouteTester::~SmoothRouteTester() {}

// Range: 0x8002248C -> 0x800224F4
unsigned char SmoothRouteTester::CanPlace(class EVec2 & pt /* r30 */) {
    // Local variables
    class CCollisionGrid * grid; // r31
    class FTilePt fpt; // r1+0x10
    unsigned char is_blocked; // r0
}

// Range: 0x800224F4 -> 0x80022564
class FTilePt SmoothRouteTester::GetFTilePt(class EVec2 & pt /* r31 */) {
    // Local variables
    struct FInt x; // r1+0xC
    struct FInt y; // r1+0x8
    class FTilePt fpt; // r1+0x10
}

// Range: 0x80022564 -> 0x80022708
// this: r26
unsigned char SmoothRouteTester::MomentumSmooth(class TileList * pTile /* r27 */, class vector & noSmoothList /* r28 */, int firstIdx /* r29 */) {
    // Local variables
    int listSize; // r30
    class EVec2 p1; // r1+0x40
    class EVec2 p2; // r1+0x38
    class EVec2 v1; // r1+0x30
    float nextTheta; // r1+0x10
    int i; // r29
    unsigned char shouldSmooth; // r1+0x8
}

// Range: 0x80022708 -> 0x800229FC
// this: r28
float SmoothRouteTester::SimulateWalk(class EVec2 & origin /* r29 */, class EVec2 & dest /* r30 */, float currentDir /* f28 */, unsigned char & shouldContinue /* r31 */, float deltaT /* f31 */) {
    // Local variables
    float velocity; // f30
    class EVec2 curPos; // r1+0x38
    class EVec2 v; // r1+0x30
    float curDir; // r1+0x18
    class EVec2 dirVec; // r1+0x28
    float desiredDir; // r1+0x14
    float deltaDir; // r1+0x10
    unsigned char canRotate; // r1+0x8
    float angularVelocity; // f0
    float deltaMovement; // f30
    float deltaAngle; // f29
    float rotateDir; // f28
    float remainingDeltaDir; // r1+0xC
    float dist; // f0
}

// Range: 0x800229FC -> 0x80022AD4
// this: r30
float SmoothRouteTester::GetAngularVelocity(float uniformVelocity /* f30 */, float distance /* f31 */, unsigned char & canRotate /* r31 */) {
    // Local variables
    float cos2Theta; // f0
    float maxRadiusToTarget; // f0
    float minAngularVelocity; // f31
    float minActualVelocity; // f0
}

// Range: 0x80022AD4 -> 0x80022B30
class EVec2 SmoothRouteTester::ConvertFTilePtToEVec2(class FTilePt & pt /* r31 */) {}

// Range: 0x80022B30 -> 0x80022B80
void SmoothRouteTester::FixAngle() {}


