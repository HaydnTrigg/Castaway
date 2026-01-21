/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_rotdecomp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026A618 -> 0x8026D278
*/
// Range: 0x8026A618 -> 0x8026A9C4
void ERotDecomp::Init() {
    // Local variables
    int k; // r4
}

// Range: 0x8026A9C4 -> 0x8026AA8C
void * ERotDecomp::operator new(unsigned long size /* r28 */) {
    // References
    // -> class ProtectedAllocPool g_poolRotAnimDecompObjects;
}

// Range: 0x8026AA8C -> 0x8026AB5C
void ERotDecomp::operator delete(void * p /* r29 */) {
    // References
    // -> class ProtectedAllocPool g_poolRotAnimDecompObjects;
}

// Range: 0x8026AB5C -> 0x8026B2D8
// this: r31
class EQuat ERotDecomp::GetFrame(float frame /* f31 */) {
    // Local variables
    float fCurrentSplineStartFrame; // f2
    float fCurrentSplineEndFrame; // f3
    float u; // f0
    class EQuat qOut; // r1+0x128
    class EQuat q0; // r1+0x118
    class EQuat q1; // r1+0x108
    class EQuat q2; // r1+0xF8
}

// Range: 0x8026B2D8 -> 0x8026B548
// this: r31
void ERotDecomp::NextSegment() {
    // Local variables
    int nextTimePos; // r4
}

// Range: 0x8026B548 -> 0x8026B7A8
// this: r31
void ERotDecomp::LastSegment() {
    // Local variables
    int lastTimePos; // r4
}

// Range: 0x8026B7A8 -> 0x8026B898
void ERotDecomp::Reset() {
    // Local variables
    int nextTimePos; // r4
}

// Range: 0x8026B898 -> 0x8026B984
void ERotDecomp::ResetEnd() {
    // Local variables
    int timePos; // r8
}

// Range: 0x8026B984 -> 0x8026BBF0
// this: r30
void ERotDecomp::ReadAllQs() {}

// Range: 0x8026BBF0 -> 0x8026C0C0
// this: r28
void ERotDecomp::GetKeyframe(int keyframe /* r29 */, struct ERotKeyframe & out /* r30 */) {
    // Local variables
    struct ERotKeyframe * pKeyFrame; // r0
    int currentKeyframe; // r31
    int currentTime; // r8
    int currentPos; // r9
}

// Range: 0x8026C0C0 -> 0x8026C8B0
void ERotDecomp::GetQuatVal(int dataPos /* r4 */) {
    // Local variables
    float w; // f1
}

// Range: 0x8026C8B0 -> 0x8026D180
// this: r28
void ERotDecomp::GetQ(int sel /* r29 */, int keyframe /* r30 */, class EQuat & qOut /* r31 */) {
    // Local variables
    struct ERotKeyframe kn_1; // r1+0x190
    struct ERotKeyframe kn; // r1+0x174
    struct ERotKeyframe kn1; // r1+0x158
    class EQuat * qn_1; // r0
    class EQuat * qn; // r0
    class EQuat * qn1; // r0
    int d1; // r5
    int d2; // r4
    float f; // f0
    float adjust; // f1
    class EQuat g1; // r1+0x148
    class EQuat g2; // r1+0x138
    class EQuat t; // r1+0x128
}

// Range: 0x8026D180 -> 0x8026D1C0
struct ERotKeyframe * ERotDecomp::GetCachedKeyFrame() {
    // Local variables
    int i; // r6
}

// Range: 0x8026D1C0 -> 0x8026D278
void ERotDecomp::CacheKeyFrame() {}


