/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\ik\ik_data_boar.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80028EC0 -> 0x800292D8
*/
// Range: 0x80028EC0 -> 0x80029170
// this: r29
void IKDataBoar::ComputeIK(class EAnimController * pAC /* r30 */) {
    // Local variables
    class EVec3 targetFromRoot; // r1+0x70
    class EVec3 targetDiff; // r1+0x64
    class EMat4 rootMatInv; // r1+0x80
    class EVec3 targetInRootSpace; // r1+0x58
    float rootToMidLengthSq; // f29
    float midToEndLengthSq; // f31
    float rootToTargetLength; // f0
    float boneAngle; // f0
    float midBoneRotation; // f2
    float r2m_r2e; // f28
    float signValue; // f0
    float angleX; // f0
    float angleY; // f0
    float originalAngleX; // f0
    float deltaRootRotX; // f28
    float originalAngleY; // f0
    float deltaRootRotY; // f2
    class EQuat rootQ; // r1+0x48
    class EQuat midQ; // r1+0x38

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80029170 -> 0x800292D8
// this: r28
void IKDataBoar::ComputeIKBoneOrient(class EAnimController * pAC /* r29 */, class EQuat & rootQ /* r30 */, class EQuat & midQ /* r31 */) {
    // Local variables
    class EMat4 parentOrient; // r1+0x208
    class EMat4 parentOrientInv; // r1+0x1C8
    class EMat4 localRoot; // r1+0x188
    class EMat4 newRoot; // r1+0x148
    class EMat4 localMidBone; // r1+0x108
    class EMat4 newMid; // r1+0xC8
    class EMat4 midOrientInv; // r1+0x88
    class EMat4 newEnd; // r1+0x48
    class EMat4 endOrientInv; // r1+0x8
}


