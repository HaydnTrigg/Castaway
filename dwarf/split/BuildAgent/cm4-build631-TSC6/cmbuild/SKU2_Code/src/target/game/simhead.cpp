/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simhead.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802409D4 -> 0x802416AC
*/
// Range: 0x802409D4 -> 0x80240A60
// this: r30
ESims3DHead::ESims3DHead(class ESim * pESim /* r31 */) {
    // Local variables
    class cXPerson * xperson; // r0

    // References
    // -> struct [anonymous] __vt__11ESims3DHead;
}

// Range: 0x80240A60 -> 0x80240AA8
void ESims3DHead::InitShaders() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class ERShader * m_pHeadBorder;
}

// Range: 0x80240AA8 -> 0x80240ADC
void ESims3DHead::ResetShaders() {
    // References
    // -> class ERShader * m_pHeadBorder;
}

// Range: 0x80240ADC -> 0x80240B6C
// this: r31
void ESims3DHead::InitHead() {}

// Range: 0x80240B6C -> 0x80240BC8
// this: r30
ESims3DHead::~ESims3DHead() {}

// Range: 0x80240BC8 -> 0x80240BCC
void ESims3DHead::Update() {}

// Range: 0x80240BCC -> 0x802416AC
// this: r30
void ESims3DHead::Draw(class ERC * prc /* r31 */, struct structDrawCBparams * params /* r22 */) {
    // Local variables
    class EWindow * pOldWin; // r28
    class E3DWindow * pOld3DWin; // r26
    float x1; // f30
    float y1; // f31
    float x2; // f29
    float y2; // f28
    float w; // f28
    float h; // f29
    class EAnimController * AC; // r27
    class EMat4 mOrient; // r1+0x270
    int nNodes; // r25
    class EMat4 * pmNodes; // r24
    class EMat4 neckMat; // r1+0x230
    float raiseCameraMultiplier; // f31
    int headBone; // r23
    int neckBone; // r22
    class EVec3 vTarget; // r1+0x164
    class EVec3 TempVec; // r1+0x158
    class EMat4 headMat; // r1+0x1F0
    class EMat4 M2; // r1+0x1B0
    class EVec3 vEye; // r1+0x14C
    class EVec3 vUp; // r1+0x140
    class EVec3 vRight; // r1+0x134
    class EVec3 vOut; // r1+0x128
    struct ELights pLights; // r1+0x2B0
    class SimModelTSC6 * pSimModel; // r22
    enum eBodyPart bodyParts[15]; // r1+0x170
    unsigned int numParts; // r1+0x8
    unsigned int n; // r23
    class EIStaticModel * pSM; // r29

    // References
    // -> class EVec4 _YELLOW;
    // -> class ERShader * m_pHeadBorder;
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
}


