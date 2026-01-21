/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_vec3decomp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80271A94 -> 0x802735BC
*/
// Range: 0x80271A94 -> 0x80271F84
void EVec3Decomp::Init() {
    // Local variables
    int currentDataPos; // r7
    float vecScale; // f0
    int i; // r0
    int k; // r4
}

// Range: 0x80271F84 -> 0x80271FBC
void * EVec3Decomp::operator new(unsigned long size /* r31 */) {}

// Range: 0x80271FBC -> 0x80271FF0
void EVec3Decomp::operator delete(void * p /* r31 */) {}

// Range: 0x80271FF0 -> 0x8027246C
// this: r31
class EVec3 EVec3Decomp::GetFrame(float frame /* f31 */) {
    // Local variables
    float fCurrentSplineStartFrame; // f2
    float fCurrentSplineEndFrame; // f3
    float u; // f10
    class EVec3 vOut; // r1+0x80
    float u2; // f12
    float u3; // f31
}

// Range: 0x8027246C -> 0x802725D8
// this: r31
void EVec3Decomp::NextSegment() {
    // Local variables
    int nextTimePos; // r4
    int nextFrame; // r30
}

// Range: 0x802725D8 -> 0x80272744
// this: r31
void EVec3Decomp::LastSegment() {
    // Local variables
    int lastTimePos; // r4
}

// Range: 0x80272744 -> 0x80272814
void EVec3Decomp::Reset() {
    // Local variables
    int nextTimePos; // r4
}

// Range: 0x80272814 -> 0x80272900
void EVec3Decomp::ResetEnd() {
    // Local variables
    int timePos; // r8
}

// Range: 0x80272900 -> 0x80272984
// this: r30
void EVec3Decomp::ReadAllVs() {
    // Local variables
    int nextFrame; // r31
}

// Range: 0x80272984 -> 0x80272DE4
void EVec3Decomp::GetKeyframe() {
    // Local variables
    int currentKeyframe; // r11
    int currentTime; // r12
    int currentPos; // r31
}

// Range: 0x80272DE4 -> 0x80272F80
void EVec3Decomp::GetVecVal() {
    // Local variables
    int i; // r0
    float streamTrans; // f0
}

// Range: 0x80272F80 -> 0x8027318C
void EVec3Decomp::GetVPoint() {
    // Local variables
    int pos; // r11
}

// Range: 0x8027318C -> 0x802735BC
// this: r28
void EVec3Decomp::GetV(int sel /* r29 */, int keyframe /* r30 */, class EVec3 & vOut /* r31 */) {
    // Local variables
    struct EVec3Keyframe kn_1; // r1+0x110
    struct EVec3Keyframe kn; // r1+0xF8
    struct EVec3Keyframe kn1; // r1+0xE0
    class EVec3 * vn_1; // r0
    class EVec3 * vn; // r0
    class EVec3 * vn1; // r0
    int d1; // r5
    int d2; // r4
    class EVec3 vNextAn; // r1+0xD4
    class EVec3 vLastBn; // r1+0xC8
    float adjust; // f0
}


