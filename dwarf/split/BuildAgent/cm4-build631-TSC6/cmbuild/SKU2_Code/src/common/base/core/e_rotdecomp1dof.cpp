/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_rotdecomp1dof.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026D278 -> 0x8026F0B8
*/
// Range: 0x8026D278 -> 0x8026D8AC
void ERotDecomp1Dof::Init() {
    // Local variables
    int currentDataPos; // r10
    int k; // r4
}

// Range: 0x8026D8AC -> 0x8026D8E4
void * ERotDecomp1Dof::operator new(unsigned long size /* r31 */) {}

// Range: 0x8026D8E4 -> 0x8026D918
void ERotDecomp1Dof::operator delete(void * p /* r31 */) {}

// Range: 0x8026D918 -> 0x8026DDC0
// this: r31
class EQuat ERotDecomp1Dof::GetFrame(float frame /* f31 */) {
    // Local variables
    float fCurrentSplineStartFrame; // f2
    float fCurrentSplineEndFrame; // f4
    float u; // f0
    float qn; // f1
    float qnp1; // f2
    float angle; // f0
    float bn; // f3
    float anp1; // f4
    float u2; // f11
    float u3; // f12
}

// Range: 0x8026DDC0 -> 0x8026E07C
// this: r31
void ERotDecomp1Dof::NextSegment() {
    // Local variables
    int nextTimePos; // r4
    int nextFrame; // r30
}

// Range: 0x8026E07C -> 0x8026E33C
// this: r31
void ERotDecomp1Dof::LastSegment() {
    // Local variables
    int lastTimePos; // r4
}

// Range: 0x8026E33C -> 0x8026E40C
void ERotDecomp1Dof::Reset() {
    // Local variables
    int nextTimePos; // r4
}

// Range: 0x8026E40C -> 0x8026E4F8
void ERotDecomp1Dof::ResetEnd() {
    // Local variables
    int timePos; // r8
}

// Range: 0x8026E4F8 -> 0x8026E848
// this: r31
void ERotDecomp1Dof::ReadAllAngles() {
    // Local variables
    int nextFrame; // r5
}

// Range: 0x8026E848 -> 0x8026ED74
void ERotDecomp1Dof::GetKeyframe() {
    // Local variables
    int currentKeyframe; // r11
    int currentTime; // r12
    int currentPos; // r31
}

// Range: 0x8026ED74 -> 0x8026F0B8
// this: r29
float ERotDecomp1Dof::GetAngle(int sel /* r30 */, int keyframe /* r31 */) {
    // Local variables
    struct ERotDecomp1DofKeyframe kn_1; // r1+0x20
    struct ERotDecomp1DofKeyframe kn; // r1+0x14
    struct ERotDecomp1DofKeyframe kn1; // r1+0x8
    float qn_1; // f30
    float qn; // f31
    float qn1; // f30
    float ret; // f1
    float qNextAn; // f1
    float qLastBn; // f1
    int d1; // r5
    int d2; // r4
    float f; // f0
    float adjust; // f6
}


