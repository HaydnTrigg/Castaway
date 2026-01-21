/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\simulation\angular_spring.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800247E0 -> 0x800253F8
*/
// Range: 0x800247E0 -> 0x800248CC
// this: r30
AngularSpring::AngularSpring(float mass /* f30 */, float xArea /* f31 */, unsigned char bEnableGravityUpdate /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13AngularSpring;
}

// Range: 0x800248CC -> 0x80024984
// this: r31
void AngularSpring::Init() {}

// Range: 0x80024984 -> 0x800249D8
// this: r31
void AngularSpring::InitRotationalAxis() {}

// Range: 0x800249D8 -> 0x80024A24
// this: r31
void AngularSpring::InitPlaneNormal() {}

// Range: 0x80024A24 -> 0x80024AC0
// this: r31
void AngularSpring::CalculateConstants(float fDragMulFactor /* f31 */) {
    // Local variables
    float radiusSq; // f6
    float fMOI; // f3
}

// Range: 0x80024AC0 -> 0x80024C98
// this: r29
void AngularSpring::Update(float dt /* f29 */) {
    // Local variables
    class TreeBranchManager * pTreeBranchManager; // r30
    unsigned int updateIter; // r30
    unsigned int kMaxIter; // r0
    unsigned int i; // r31
    float oldAngularAcc; // f31
    float oldtwistAcc; // f30
    float oldAngularAcc; // f30
    float oldtwistAcc; // f31
}

// Range: 0x80024C98 -> 0x80024CE8
void AngularSpring::UpdateAngle() {}

// Range: 0x80024CE8 -> 0x800250E0
// this: r30
void AngularSpring::UpdateAngularAcceleration(float dt /* f31 */) {
    // Local variables
    enum WindLevel windLevel; // r0
}

// Range: 0x800250E0 -> 0x80025170
void AngularSpring::UpdateAngularVelocity() {}

// Range: 0x80025170 -> 0x800251E0
// this: r31
void AngularSpring::UpdateExternalTorque() {
    // Local variables
    class EVec3 force; // r1+0x14
    class EVec3 torque; // r1+0x8
    float torqueMagnitude; // f0
}

// Range: 0x800251E0 -> 0x80025288
// this: r31
void AngularSpring::ComputeCurrentBranchOrient() {
    // Local variables
    class EQuat orientAxis; // r1+0x58
    class EQuat rotQ; // r1+0x48
    class EQuat rotatedOrientAxis; // r1+0x38
}

// Range: 0x80025288 -> 0x8002534C
float AngularSpring::ComputeSpringTipAngle(float angle /* f30 */) {
    // Local variables
    float tipangle; // f1
}

// Range: 0x8002534C -> 0x800253D0
// this: r30
void AngularSpring::ComputeTipRotationTranslation(class EQuat & rot /* r31 */, float mulfac /* f30 */) {
    // Local variables
    float tipangle; // f31
    float twistangle; // f3
}

// Range: 0x800253D0 -> 0x800253F8
void AngularSpring::Reset() {}


