/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\intersection.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80231EB0 -> 0x802328D0
*/
// Range: 0x80231EB0 -> 0x80231FB0
int SolveQuadratic(float p_fA /* f29 */, float p_fB /* f30 */, float p_fC /* f31 */, float * p_pafQuadRoots /* r30 */) {
    // Local variables
    int a_nRoots; // r31
    float a_fBSqr_Minus_4AC; // f1
    float a_fQ; // f1
    float temp; // f0
}

// Range: 0x80231FB0 -> 0x802321D4
unsigned char GetCircleCircleIX(const class EVec2 & p_pvC0 /* r27 */, float p_fRad0 /* f28 */, const class EVec2 & p_pvV0 /* r28 */, const class EVec2 & p_pvC1 /* r29 */, float p_fRad1 /* f31 */, const class EVec2 & p_pvV1 /* r30 */, class Intersection & p_roIX /* r31 */) {
    // Local variables
    class EVec2 a_vCenterAB; // r1+0x58
    class EVec2 a_vVelAB; // r1+0x50
    float a_fA; // f30
    float a_fB; // f29
    float a_fC; // f3
    float a_afQuadRoots[2]; // r1+0x48
    int a_nRoots; // r0
}

// Range: 0x802321D4 -> 0x8023244C
unsigned char GetCircleSegmentIX(const class EVec2 & p_pvC0 /* r26 */, float p_fRad0 /* f29 */, const class EVec2 & p_pvV0 /* r27 */, const class EVec2 & p_pvA /* r28 */, const class EVec2 & p_pvB /* r29 */, class Intersection & p_roIX /* r30 */, unsigned char twoSided /* r31 */) {
    // Local variables
    class EVec2 a_vClosestPt; // r1+0x60
    class EVec2 a_vAB; // r1+0x58
    class EVec2 a_vSegNormal; // r1+0x50
    float a_fNormalMag; // f0
    float a_fOONormalMag; // f30
    float a_fVelWRTLine; // f31
    class EVec2 a_vClosestPtWRTA; // r1+0x48
    float a_fDistClosest; // f0
    float a_fT; // f1
    float a_fSegmentT; // f1
}

// Range: 0x8023244C -> 0x802324D8
unsigned char GetCirclePointIX(const class EVec2 & p_pvC0 /* r28 */, float p_fRad0 /* f31 */, const class EVec2 & p_pvV0 /* r29 */, const class EVec2 & p_pvA /* r30 */, class Intersection & p_roIX /* r31 */) {
    // Local variables
    class EVec2 a_vVA; // r1+0x8
}

// Range: 0x802324D8 -> 0x802325C0
unsigned char GetCircleSegmentClosedIX(const class EVec2 & p_pvC0 /* r26 */, float p_fRad0 /* f31 */, const class EVec2 & p_pvV0 /* r27 */, const class EVec2 & p_pvA /* r28 */, const class EVec2 & p_pvB /* r29 */, class Intersection & p_roIX /* r30 */) {
    // Local variables
    unsigned char a_bIntersect; // r31
    class Intersection a_oIXA; // r1+0x1C
    class Intersection a_oIXB; // r1+0x8
}

// Range: 0x802325C0 -> 0x802328D0
unsigned char GetCircleRectangleIX(const class EVec2 & p_pvC0 /* r25 */, float p_fRad0 /* f30 */, const class EVec2 & p_pvV0 /* r26 */, const class EVec2 & p_pvA /* r27 */, const class EVec2 & p_pvB /* r28 */, class Intersection & p_roIX /* r29 */) {
    // Local variables
    class EVec2 a_vUL; // r1+0x10
    class EVec2 a_vLR; // r1+0x8
    unsigned char a_bIntersect; // r30
    class Intersection a_oNextIntersect; // r1+0x18
}


