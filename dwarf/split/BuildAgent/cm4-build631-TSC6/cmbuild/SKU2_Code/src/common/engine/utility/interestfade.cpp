/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\interestfade.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F5B48 -> 0x802F7D40
*/
// Range: 0x802F5B48 -> 0x802F69FC
// this: r31
void TrapezoidFade::Setup() {
    // Local variables
    class EVec3 vDelta; // r1+0x260
    float fD; // f0
    class EVec3 vEyetoInterestPerp; // r1+0x254
    class EVec3 vNear; // r1+0x248
    class EVec3 vFar; // r1+0x23C
    class EVec3 vInterest; // r1+0x230
    float mag; // f0
    class EVec3 v3; // r1+0x224
}

// Range: 0x802F69FC -> 0x802F6BAC
// this: r28
float TrapezoidFade::CalcAlpha(const class EBound3 & bounds /* r29 */) {
    // Local variables
    class EVec3 pt; // r1+0x20
    float fdMax; // f31
    int i; // r29
    float d; // f1
    float retAlpha; // f1
}

// Range: 0x802F6BAC -> 0x802F6CE0
// this: r31
PyramidFade::PyramidFade() {}

// Range: 0x802F6CE0 -> 0x802F71D8
// this: r29
void PyramidFade::Setup(const class EVec3 & eye /* r30 */, const class EVec3 * farPlaneCorners /* r31 */) {
    // Local variables
    class EVec3 a; // r1+0x108
    class EVec3 b; // r1+0xFC
    class EVec3 nRight; // r1+0xF0
    class EVec3 nTop; // r1+0xE4
    class EVec3 c; // r1+0xD8
    class EVec3 nLeft; // r1+0xCC
    class EVec3 d; // r1+0xC0
    class EVec3 nFar; // r1+0xB4
    class EVec3 nBottom; // r1+0xA8
}

// Range: 0x802F71D8 -> 0x802F7304
void PyramidFade::DeriveDepthData() {
    // Local variables
    class EBound3 box; // r1+0x28
    float * boxAddr; // r7
    class EVec4 planeEq; // r1+0x18
    int i; // r0
}

// Range: 0x802F7304 -> 0x802F7844
// this: r26
unsigned char PyramidFade::IsOutsideFadeVolume(class EInstance * instance /* r27 */, const class EBound3 & bounds /* r28 */) const {
    // Local variables
    void * obj; // r0
    unsigned char test1; // r30
    unsigned char test2; // r29
    unsigned char test6; // r27
    unsigned char test7; // r24
    float distCamSim; // f0
    float distCamCenter; // f0
    float kFudgeFac; // f0
    unsigned char test8; // r7
}

// Range: 0x802F7844 -> 0x802F785C
void PyramidFade::SetEnabled() {}

// Range: 0x802F785C -> 0x802F7990
void LineFade::Setup() {
    // Local variables
    int i; // r0
    float inv; // f2
}

// Range: 0x802F7990 -> 0x802F7B70
unsigned char LineFade::IsLineIntersected() {
    // Local variables
    int d; // r5
    int dp1; // r6
    int dp2; // r7
    float invDelta; // f0
    float tmin; // f7
    float imindp1; // f1
    float imindp2; // f4
    float tmax; // f7
    float imaxdp1; // f1
    float imaxdp2; // f4
}

// Range: 0x802F7B70 -> 0x802F7B90
void LineFade::SetEnabled() {}

// Range: 0x802F7B90 -> 0x802F7BE0
void HeightFade::Setup() {}

// Range: 0x802F7BE0 -> 0x802F7D34
// this: r28
class EVec3 HeightFade::GenerateAdjustedInterestPt(class HeightFade * const this /* r29 */, const class EVec3 & baseEyePoint /* r30 */, const class EVec3 & baseInterestPoint /* r31 */) {
    // Local variables
    class EVec3 delta; // r1+0x2C
    class EVec3 fullAdjustedPoint; // r1+0x20
}

// Range: 0x802F7D34 -> 0x802F7D3C
void HeightFade::SetCeilingForceInvisible() {}

// Range: 0x802F7D3C -> 0x802F7D40
float HeightFade::GetWallAlpha() {}


