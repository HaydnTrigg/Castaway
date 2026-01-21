/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_quadtree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A4C70 -> 0x802A6C84
*/
// Range: 0x802A4C70 -> 0x802A4D90
// this: r31
EQuadTree::EQuadTree() {
    // References
    // -> struct [anonymous] __vt__9EQuadTree;
}

// Range: 0x802A4D90 -> 0x802A4E90
EQuadTree::EQuadTree() {
    // References
    // -> struct [anonymous] __vt__9EQuadTree;
}

// Range: 0x802A4E90 -> 0x802A4F38
// this: r27
EQuadTree::~EQuadTree() {
    // Local variables
    unsigned int i; // r29

    // References
    // -> struct [anonymous] __vt__9EQuadTree;
}

// Range: 0x802A4F38 -> 0x802A5088
class EBound3 EQuadTree::GetChildBoundingBox() {
    // Local variables
    class EVec3 vMin; // r1+0x14
    class EVec3 vMax; // r1+0x8
}

// Range: 0x802A5088 -> 0x802A51DC
void EQuadTree::SetupBoundingBoxFromParent() {
    // Local variables
    class EVec3 vMin; // r1+0x14
    class EVec3 vMax; // r1+0x8
}

// Range: 0x802A51DC -> 0x802A52E8
void EQuadTree::SetQuadTreeSMS(class ESubModelShader * pSMS /* r30 */) {
    // Local variables
    unsigned int desiredDepth; // r10
    class EVec3 vMin; // r1+0x14
    class EVec3 vMax; // r1+0x8
    class EBound3 smsBB; // r1+0x20
    class EQuadTree * pSMSParentQuadTree; // r31
}

// Range: 0x802A52E8 -> 0x802A5408
void EQuadTree::SetActualBoundingBoxFromSMS() {
    // Local variables
    class EVec3 centerOrig; // r1+0x14
    float xWidth; // f0
    float yWidth; // f2

    // References
    // -> float kActualBBZHeight;
}

// Range: 0x802A5408 -> 0x802A572C
// this: r27
class EQuadTree * EQuadTree::ComputeParentForSMS(class EBound3 & smsBB /* r28 */, unsigned int depth /* r29 */) {
    // Local variables
    unsigned int i; // r30
    class EBound3 childQuadBB; // r1+0x50
    class EQuadTree * pTree; // r0
}

// Range: 0x802A572C -> 0x802A5B18
// this: f0
void EQuadTree::UpdateActualBoundingBox() {
    // Local variables
    unsigned int i; // f1
}

// Range: 0x802A5B18 -> 0x802A6170
// this: r26
void EQuadTree::GetSMSListForRayIntersection(class EVec3 & ray /* r27 */, class TArray & smsArray /* r28 */) {
    // Local variables
    unsigned int i; // r29
}

// Range: 0x802A6170 -> 0x802A65CC
// this: f0
void EQuadTree::GetSMSListForFrustumVisibility(class E3DWindow * pWin /* r15 */, class TArray & smsIdArray /* r16 */) {
    // Local variables
    unsigned int i; // f3
}

// Range: 0x802A65CC -> 0x802A6C84
// this: r21
void EQuadTree::GetSMSListForFrustumVisibility(class E3DWindow * pWin /* r22 */, class TArray & smsIdArray /* r23 */, class TArray & smsCheckArray /* r24 */, class TArray & smsCenters /* r25 */) {
    // Local variables
    unsigned int i; // r14
}


