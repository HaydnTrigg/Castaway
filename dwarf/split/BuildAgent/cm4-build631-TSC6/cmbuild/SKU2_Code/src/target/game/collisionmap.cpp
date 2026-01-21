/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\collisionmap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80212DAC -> 0x80214314
*/
// Range: 0x80212DAC -> 0x80212DB8
void CollisionMap::ResetCollisionMap() {
    // References
    // -> class RaycastLastHit m_lastHit;
}

// Range: 0x80212DB8 -> 0x80213570
unsigned char CollisionMap::DoesCollideEnvironment(const class EVec2 & startPos /* r18 */, const class EVec2 & endPos /* r19 */, float radius /* f31 */, unsigned char doSliding /* r20 */, unsigned char ignoreWallsAndNotRoutable /* r21 */, unsigned char lookSubTiles /* r22 */, class EVec2 & resultPos /* r23 */, class RaycastLastHit * currentHit /* r24 */) {
    // Local variables
    class EVec2 delta; // r1+0xA0
    int xMaxSide; // r31
    int xMinSide; // [invalid]
    int yMaxSide; // r30
    int yMinSide; // r29
    unsigned char hasCollision; // r28
    unsigned char subTileCollision; // r1+0x8
    class Intersection bestIntersect; // r1+0xF8
    class Intersection testIntersect; // r1+0xE4
    int x; // r27
    int y; // r26
    unsigned char diagonal_collision; // r25
    class CTilePt location; // r1+0xC
    class TileWalls walls; // r1+0x10C
    class EVec2 adjustMove; // r1+0x98

    // References
    // -> class RaycastLastHit m_lastHit;
}

// Range: 0x80213570 -> 0x80213660
unsigned char CollisionMap::IsLocationGood(const class EVec2 & vPos /* r29 */, unsigned char ignoreWallsAndNotRoutable /* r30 */, unsigned char lookSubTiles /* r31 */) {
    // Local variables
    class CTilePt location; // r1+0x8
}

// Range: 0x80213660 -> 0x802137BC
void CollisionMap::HandleDiagonalCollision(class EVec2 & pos /* r31 */, float radius /* f31 */) {
    // Local variables
    float bounce; // f0
}

// Range: 0x802137BC -> 0x80213B60
unsigned char CollisionMap::TestForRoutingBoundary(const class RaycastLastHit & startPos /* r27 */, const class RaycastLastHit & endPos /* r31 */, class EVec2 & result /* r28 */) {
    // Local variables
    class EVec3 shared[3]; // r1+0xB8
    class EVec3 start; // r1+0x48
    class EVec3 end; // r1+0x3C
    unsigned char found; // r29
    float x1; // f5
    float y1; // f31
    float x2; // f0
    float y2; // f1
    float x3; // f2
    float y3; // f2
    float x4; // f3
    float y4; // f3
    float y1minusy3; // f6
    float y4minusy3; // f2
    float y2minusy1; // f30
    float x1minusx3; // f7
    float x4minusx3; // f8
    float x2minusx1; // f0
    float denom; // f9
    float Ua; // f3
    float Ub; // f4
    float m; // f5
    float b; // f3
    class EVec2 start2; // r1+0x28
    class EVec2 velocity; // r1+0x20
    float fScale; // f1
    float elevation; // r1+0x8

    // References
    // -> class RaycastLastHit m_lastHit;
    // -> class EGlobal _globals;
}

// Range: 0x80213B60 -> 0x80213CF8
void CollisionMap::FindRoutingBoundary(int maxDivide /* r25 */, const class RaycastLastHit & startPos /* r26 */, class RaycastLastHit & endPos /* r27 */, float radius /* r1+0x8 */, class EVec2 & result /* r28 */) {
    // Local variables
    class RaycastLastHit lastOOBRaycast; // r1+0x80
    class RaycastLastHit lastRaycast; // r1+0x50
    int divideRemaining; // [invalid]
    unsigned char solved; // r30
    unsigned char toofar; // r29
    class EVec3 newTestPosition; // r1+0x40
    float elevation; // r1+0xC

    // References
    // -> class RaycastLastHit m_lastHit;
}

// Range: 0x80213D7C -> 0x80213DD8
unsigned char CollisionMap::IsMeshUnroutable() {
    // Local variables
    float elevation; // r1+0x8

    // References
    // -> class RaycastLastHit m_lastHit;
}

// Range: 0x80213DD8 -> 0x80213F2C
unsigned char CollisionMap::IsMoveBlocked(const class EVec3 & vPos /* r27 */, unsigned char ignoreWallsAndNotRoutable /* r28 */, unsigned char lookSubTiles /* r29 */, unsigned char & subTileCollision /* r30 */, enum TileWallsSegment segment /* r31 */) {
    // Local variables
    class CTilePt location; // r1+0x8
    class TileWalls walls; // r1+0xC
}

// Range: 0x80213F2C -> 0x80214314
unsigned char CollisionMap::DoesCollideObject(const class EVec2 & worldStartPos /* r24 */, const class EVec2 & worldEndPos /* r25 */, float radius /* f30 */, unsigned char doSliding /* r26 */, class EVec2 & resultPos /* r27 */) {
    // Local variables
    class EVec2 startPos; // r1+0x80
    class EVec2 endPos; // r1+0x78
    class EVec2 ourMin; // r1+0x70
    class EVec2 ourMax; // r1+0x68
    class ObjectModule * objMod; // r31
    class cXObject * obj; // r23
    unsigned char hasCollision; // r30
    class Intersection bestIntersect; // r1+0xAC
    class Intersection result; // r1+0x98
    class EVec2 itemMin; // r1+0x60
    class EVec2 itemMax; // r1+0x58
    int x; // r29
    int y; // r28
    class CTilePt location; // r1+0x8
    signed short firstObjId; // r0
    class FTileRect objRect; // r1+0x88
    class EVec2 delta; // r1+0x50
    class EVec2 worldNormal; // r1+0x48
    class EVec2 adjustMove; // r1+0x40
}


