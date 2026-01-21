/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\scalardecomp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80273A18 -> 0x802750A8
*/
// Range: 0x80273A18 -> 0x80273ED4
void ScalarDecomp::Init() {
    // Local variables
    int k; // r4
}

// Range: 0x80273ED4 -> 0x80273F0C
void * ScalarDecomp::operator new(unsigned long size /* r31 */) {}

// Range: 0x80273F0C -> 0x80273F40
void ScalarDecomp::operator delete(void * p /* r31 */) {}

// Range: 0x80273F40 -> 0x80274240
// this: r31
float ScalarDecomp::GetFrame(float frame /* f31 */) {
    // Local variables
    float fCurrentSplineStartFrame; // f2
    float fCurrentSplineEndFrame; // f3
    float u; // f9
    float vOut; // f1
    float u2; // f10
    float u3; // f11
}

// Range: 0x80274240 -> 0x802743E4
// this: r31
void ScalarDecomp::NextSegment() {
    // Local variables
    int nextTimePos; // r4
    int nextFrame; // r30
}

// Range: 0x802743E4 -> 0x80274588
// this: r31
void ScalarDecomp::LastSegment() {
    // Local variables
    int lastTimePos; // r4
    int nextFrame; // r30
}

// Range: 0x80274588 -> 0x80274658
void ScalarDecomp::Reset() {
    // Local variables
    int nextTimePos; // r4
}

// Range: 0x80274658 -> 0x80274744
void ScalarDecomp::ResetEnd() {
    // Local variables
    int timePos; // r8
}

// Range: 0x80274744 -> 0x802747C0
// this: r30
void ScalarDecomp::ReadAllVs() {
    // Local variables
    int nextFrame; // r31
}

// Range: 0x802747C0 -> 0x80274B9C
void ScalarDecomp::GetKeyframe() {
    // Local variables
    int currentKeyframe; // r11
    int currentTime; // r12
    int currentPos; // r31
}

// Range: 0x80274B9C -> 0x80274CFC
void ScalarDecomp::GetVal() {}

// Range: 0x80274CFC -> 0x80274E84
void ScalarDecomp::GetVPoint() {
    // Local variables
    int pos; // r9
}

// Range: 0x80274E84 -> 0x802750A8
// this: r28
void ScalarDecomp::GetV(int sel /* r29 */, int keyframe /* r30 */, float & vOut /* r31 */) {
    // Local variables
    struct ScalarKeyframe kn_1; // r1+0x28
    struct ScalarKeyframe kn; // r1+0x1C
    struct ScalarKeyframe kn1; // r1+0x10
    float * vn_1; // r0
    float * vn; // r0
    float * vn1; // r0
    int d1; // r5
    int d2; // r4
    float vNextAn; // r1+0xC
    float vLastBn; // r1+0x8
    float adjust; // f7
}


