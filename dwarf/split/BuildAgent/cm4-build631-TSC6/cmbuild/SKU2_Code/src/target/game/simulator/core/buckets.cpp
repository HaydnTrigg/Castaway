/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\buckets.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80107C98 -> 0x80108274
*/
// Range: 0x80107C98 -> 0x80107CC0
CCollisionGrid::CCollisionGrid() {
    // References
    // -> int g_CollisionGridSize;
    // -> int g_CollisionBucketSize;
}

// Range: 0x80107CC0 -> 0x80107D30
// this: r30
CCollisionGrid::~CCollisionGrid() {}

// Range: 0x80107D88 -> 0x80107E30
// this: r30
void CCollisionGrid::Initialize() {}

// Range: 0x80107E78 -> 0x80107F04
// this: r29
void CCollisionGrid::ClearAllBuckets() {
    // Local variables
    int x; // r31
    int y; // r30
}

// Range: 0x80107F04 -> 0x80108010
// this: r30
void CCollisionGrid::AddRectsToBuckets(const class vector & rects /* r31 */) {
    // Local variables
    const class PenaltyRect * i; // r29
    class PenaltyRect * current; // r1+0x8
    int x_start; // [invalid]
    int x_end; // r28
    int y_start; // r27
    int y_end; // r26
    int x; // r25
    int y; // r24
    int index; // r0
    int num_buckets; // r3
}

// Range: 0x80108010 -> 0x8010816C
// this: r22
class PenaltyRect * CCollisionGrid::GetIntersectingRect(const class IRect * rect /* r23 */) {
    // Local variables
    int x_start; // [invalid]
    int x_end; // r31
    int y_start; // r30
    int y_end; // r29
    int x; // r28
    int y; // r27
    int index; // r0
    class PenaltyRect * * i; // r26
    struct CBucket * current_bucket; // r25
    class PenaltyRect * final_rect; // r24
    int num_buckets; // r3
}

// Range: 0x8010816C -> 0x80108274
unsigned char CCollisionGrid::PointIsWithinImpassableRect() {
    // Local variables
    class PenaltyRect * * i; // r29
    struct CBucket * current_bucket; // r28
    int x; // r0
    int y; // r0
    int index; // r4
}


