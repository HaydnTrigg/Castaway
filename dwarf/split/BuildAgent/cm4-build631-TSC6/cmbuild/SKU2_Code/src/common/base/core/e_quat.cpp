/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_quat.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80268B14 -> 0x802699A4
*/
// Range: 0x80268B14 -> 0x80268BD4
void EQuat::ToMat4() {
    // Local variables
    const float & x; // r0
    const float & y; // r0
    const float & z; // r0
    const float & w; // r0
    float fTx; // f3
    float fTy; // f9
    float fTz; // f10
    float fTwx; // f11
    float fTwy; // f5
    float fTwz; // f7
    float fTxx; // f5
    float fTxy; // f8
    float fTxz; // f11
    float fTyy; // f12
    float fTyz; // f13
    float fTzz; // f0
}

// Range: 0x80268BD4 -> 0x80268D58
void EQuat::FromMat4() {
    // Local variables
    float & x; // r0
    float & y; // r11
    float & z; // r12
    float & w; // r0
    float fTrace; // f1
    float fRoot; // f8
    int i; // r6
    int j; // r0
    int k; // r6
    float fRoot; // f7
    float * apkQuat[3]; // r1+0x8

    // References
    // -> static int s_iNext[3];
}

// Range: 0x80268D58 -> 0x80268E48
// this: r30
float EQuat::ExtractAxisRotation(const class EVec3 & vAxis /* r31 */) const {
    // Local variables
    class EVec3 vRotAxis; // r1+0x8
    float rotAngle; // f30
    float dot; // f0
}

// Range: 0x80268E48 -> 0x80268F90
// this: r31
class EQuat & EQuat::SetEuler(float rotX /* f28 */, float rotY /* f27 */, float rotZ /* f26 */) {
    // Local variables
    float sinAngleX; // f0
    float cosAngleX; // f0
    float sinAngleY; // f0
    float cosAngleY; // f0
    float sinAngleZ; // f0
    float cosAngleZ; // f0
}

// Range: 0x80268F90 -> 0x802691EC
// this: r31
class EQuat & EQuat::Set(float rotY /* f27 */, float rotZ /* f26 */) {
    // Local variables
    class EQuat qRotX; // r1+0x70
    class EQuat qRotY; // r1+0x60
    class EQuat qRotZ; // r1+0x50
}

// Range: 0x802691EC -> 0x80269570
// this: r31
class EQuat & EQuat::Slerp(float u /* f30 */, const class EQuat & qA /* r29 */, class EQuat & qB /* r30 */) {
    // Local variables
    float dot; // f5
    float theta; // f0
    float sinTheta; // f0
    float invSinTheta; // f31
}

// Range: 0x80269570 -> 0x80269900
// this: r30
class EQuat & EQuat::Scale(float u /* f31 */, const class EQuat & q /* r31 */) {
    // Local variables
    class EQuat qId; // r1+0x78
}

// Range: 0x80269900 -> 0x802699A4
// this: r30
class EQuat & EQuat::Set(const class EVec3 & vAxis /* r31 */, float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
}


