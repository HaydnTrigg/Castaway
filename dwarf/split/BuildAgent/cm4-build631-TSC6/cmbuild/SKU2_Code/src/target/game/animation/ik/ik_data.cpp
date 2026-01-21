/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\ik\ik_data.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800282BC -> 0x80028EC0
*/
// Range: 0x800282BC -> 0x800283A4
// this: r28
IKData::IKData() {
    // References
    // -> struct [anonymous] __vt__6IKData;
}

// Range: 0x800283A4 -> 0x800283B4
void IKData::Init() {}

// Range: 0x800283B4 -> 0x800283D4
unsigned int IKData::GetIKBoneIdx() {}

// Range: 0x800283D4 -> 0x800283E8
void IKData::SetEnableIK() {}

// Range: 0x800283E8 -> 0x80028458
// this: r27
void IKData::SetOriginalBonesPosOrient(class EAnimController * pAC /* r28 */) {
    // Local variables
    unsigned int i; // r29
}

// Range: 0x80028458 -> 0x800286C8
// this: r29
void IKData::ComputeBoneInfo(class EAnimController * pAC /* r30 */) {
    // Local variables
    class EMat4 rootBindPose; // r1+0xF0
    class EMat4 midBindPose; // r1+0xB0
    class EMat4 endBindPose; // r1+0x70
    class EVec3 rootToMid; // r1+0x60
    class EVec3 midToEnd; // r1+0x54
    class EVec3 rootToEnd; // r1+0x48
    float internalBoneAngle; // f0
}

// Range: 0x800286C8 -> 0x80028730
void IKData::ComputeParentOrient(class EAnimController * pAC /* r29 */, class EMat4 & parentOrient /* r30 */, class EMat4 & parentOrientInv /* r31 */) {
    // Local variables
    int parentIdx; // r0
}

// Range: 0x80028730 -> 0x800287F8
void IKData::PreRotateMatrixWithQuatNoTrans(class EMat4 & mat /* r29 */, class EQuat & quat /* r30 */) {
    // Local variables
    class EVec4 tmpTrans; // r1+0x18
    class EMat4 rotM; // r1+0x68
}

// Range: 0x800287F8 -> 0x80028888
void IKData::UpdateBoneInAnimController(class EAnimController * pAC /* r28 */, class EMat4 & updMat /* r29 */, class EMat4 & bindPoseInv /* r30 */) {
    // Local variables
    class EMat4 & nodeMatrix; // r31
    float modelScaler; // f0
}

// Range: 0x80028888 -> 0x80028A04
// this: r28
void IKData::ComputeIKBoneOrient(class EAnimController * pAC /* r29 */, class EQuat & rootQ /* r30 */, class EQuat & midQ /* r31 */) {
    // Local variables
    class EMat4 parentOrient; // r1+0x248
    class EMat4 parentOrientInv; // r1+0x208
    class EMat4 localRoot; // r1+0x1C8
    class EMat4 newRoot; // r1+0x188
    class EMat4 localMidBone; // r1+0x148
    class EMat4 newMid; // r1+0x108
    class EMat4 midOrientInv; // r1+0xC8
    class EMat4 localEnd; // r1+0x88
    class EMat4 newEnd; // r1+0x48
    class EMat4 endOrientInv; // r1+0x8
}

// Range: 0x80028A04 -> 0x80028B14
// this: r24
void IKData::UpdateChildBones(class EAnimController * pAC /* r25 */, unsigned int boneIdx /* r26 */, class EMat4 & newMat /* r27 */, class EMat4 & boneOrientInv /* r28 */) {
    // Local variables
    unsigned int numChild; // r0
    unsigned int i; // r30
    int childBoneId; // r29
    class EMat4 childOrient; // r1+0x108
    class EMat4 localMat; // r1+0xC8
    class EMat4 newChild; // r1+0x88
    class EMat4 childBindPoseInv; // r1+0x48
    class EMat4 childOrientInv; // r1+0x8
}

// Range: 0x80028B14 -> 0x80028EC0
// this: r29
void IKData::ComputeIK(class EAnimController * pAC /* r30 */) {
    // Local variables
    class EVec3 targetFromRoot; // r1+0x104
    class EVec3 targetDiff; // r1+0xF8
    class EMat4 rootMatInv; // r1+0x150
    class EVec3 targetInRootSpace; // r1+0xEC
    class EVec3 midInRootSpace; // r1+0xE0
    float rootToMidLengthSq; // f30
    float midToEndLengthSq; // f29
    float rootToTargetLength; // f0
    float cosBoneAngle; // f0
    float boneAngle; // f0
    float midBoneRotation; // f2
    float sinBoneAngle; // f0
    float alpha; // f29
    class EVec3 axisOfSwivel; // r1+0xD4
    class EVec3 center; // r1+0xC8
    class EVec3 arbitAxis; // r1+0xBC
    float arbitSwivelAxisDotProd; // f0
    class EVec3 axisNormalToSwivel; // r1+0xB0
    class EVec3 midPosInRootSpace; // r1+0xA4
    class EVec3 rootToMid; // r1+0x98
    float angleFromGoalToOrigElbow; // f29
    class EVec3 normalToPlane; // r1+0x8C
    class EMat4 localMidBoneInv; // r1+0x110
    class EVec3 normalToPlaneMid; // r1+0x80
    class EQuat rootQ; // r1+0x70
    class EQuat midQ; // r1+0x60

    // References
    // -> class EGlobal _globals;
}


