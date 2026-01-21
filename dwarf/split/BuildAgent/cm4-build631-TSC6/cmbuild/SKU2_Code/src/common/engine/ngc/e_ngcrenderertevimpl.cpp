/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrenderertevimpl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5E90 -> 0x802CA038
*/
// Range: 0x802C5E90 -> 0x802C6520
void NGCRendererTevImpl::SetupTextureCoordinateGeneration() {
    // Local variables
    int pass; // r30
}

// Range: 0x802C6520 -> 0x802C67F8
// this: r27
void NGCRendererTevImpl::SetupTEVStageVertexIntensity(int & tevStageIdInt /* r28 */) {
    // Local variables
    enum _GXTevStageID tevStageId; // r10

    // References
    // -> class EGlobal _globals;
    // -> unsigned int ENgcRSTevFlagMap[16];
}

// Range: 0x802C67F8 -> 0x802C6E9C
// this: r16
void NGCRendererTevImpl::Setup2TEVStageTexture(int pass /* r17 */, int & tevStageIdInt /* r18 */, int texcoord /* r19 */, int & texmap /* r20 */, enum _GXTevRegID outputRegister /* r21 */) {
    // Local variables
    enum _GXTevStageID tevStageId; // r22

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
}

// Range: 0x802C6E9C -> 0x802C7784
// this: r27
void NGCRendererTevImpl::SetupFinalBlendMode(int & tevStageId /* r28 */, int passCount /* r29 */) {
    // Local variables
    unsigned char firstPassSrcAlphaAsTevStage; // r30
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k0; // r0
    unsigned char k1; // r5

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
}

// Range: 0x802C7784 -> 0x802C9430
// this: r15
void NGCRendererTevImpl::UpdateTEVStages(int passCount /* r16 */, float fixedAlpha /* f31 */, unsigned int overrideColor /* f2 */, unsigned char useShadowTexture /* f3 */) {
    // Local variables
    int tevStageIdInt; // r1+0x3C
    int texCoord; // r20
    int texMap; // r1+0x38
    class ENgcTexture * tex0; // r18
    class ENgcTexture * tex1; // r19
    unsigned char inShadowGeometryMode; // r0
    int firstPassBlendMode; // r18
    int secondPassBlendMode; // r17
    unsigned char updateFirstPassMode; // r5
    int passIndex; // r17
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k0; // r0
    unsigned char k1; // r5
    unsigned char k; // r0

    // References
    // -> class EGlobal _globals;
    // -> unsigned int ENgcRSTevFlagMap[16];
}

// Range: 0x802C9430 -> 0x802CA038
// this: r27
void NGCRendererTevImpl::UpdateTEVStagesSimple(int nPasses /* r28 */, int iPass /* r29 */, float fixedAlpha /* f31 */, unsigned char useShadowTexture /* r30 */) {
    // Local variables
    int tevStageIdInt; // r1+0x14
    int texMap; // r1+0x10
    int i; // r24
    class ENgcTexture * tex0; // r23
    unsigned char inShadowGeometryMode; // r0
    int firstPassBlendMode; // r26
    int secondPassBlendMode; // r0
    unsigned char updateFirstPassMode; // r5
    unsigned char k; // r5

    // References
    // -> unsigned int ENgcRSTevFlagMap[16];
}


