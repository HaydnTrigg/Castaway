/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\simulation\linear_spring2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80025650 -> 0x80025D28
*/
// Range: 0x80025650 -> 0x800256C8
// this: r31
LinearSpring2D::LinearSpring2D() {
    // References
    // -> struct [anonymous] __vt__14LinearSpring2D;
}

// Range: 0x800256C8 -> 0x8002574C
// this: r31
void LinearSpring2D::Init() {
    // Local variables
    float radiusSq; // f5
}

// Range: 0x8002574C -> 0x800257D4
// this: r31
void LinearSpring2D::CalculateConstants(float fDragMulFactor /* f31 */) {}

// Range: 0x800257D4 -> 0x80025948
// this: r29
void LinearSpring2D::Update(float dt /* f30 */) {
    // Local variables
    unsigned int updateIter; // r30
    unsigned int kMaxIter; // r0
    unsigned int i; // r31
    class EVec3 oldAcc; // r1+0x20
    class EVec3 oldAcc; // r1+0x14
}

// Range: 0x80025948 -> 0x800259C8
// this: r31
void LinearSpring2D::UpdatePosition(float dt /* f31 */) {}

// Range: 0x800259C8 -> 0x80025A70
// this: r31
void LinearSpring2D::UpdateAcceleration() {}

// Range: 0x80025A70 -> 0x80025AD8
// this: r31
void LinearSpring2D::UpdateVelocity(float dt /* f31 */) {}

// Range: 0x80025AD8 -> 0x80025C2C
// this: r29
void LinearSpring2D::ComputeTipRotationTranslation(float lengthRatio /* f30 */, class EQuat & rot /* r30 */, class EVec3 & trans /* r31 */, float mulfac /* f31 */) {
    // Local variables
    float invAreaRatioSq; // f2
    float ratio; // f0
    float totDeflection; // f0
    float slope; // f1
    float angle; // f31
    class EVec3 rotAxis; // r1+0x34
}

// Range: 0x80025C2C -> 0x80025CDC
class EVec3 LinearSpring2D::ComputeRotationAxis(class EVec3 * rotAxis /* r31 */) {
    // Local variables
    class EVec3 orient; // r1+0x8
    float normalZVal; // f1
}

// Range: 0x80025CDC -> 0x80025D28
// this: r31
void LinearSpring2D::Reset() {}


