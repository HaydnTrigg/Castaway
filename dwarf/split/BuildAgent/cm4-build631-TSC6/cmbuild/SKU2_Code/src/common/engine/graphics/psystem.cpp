/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\psystem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A2C8C -> 0x802A4C70
*/
// Range: 0x802A2C8C -> 0x802A3220
void ParticleProcess(struct pemitter * pEmitter /* r25 */, float fTDelta /* f30 */) {
    // Local variables
    float fTRatio; // f0
    float fClrRatio; // f3
    float fSclRatio; // f3
    float fScale; // f2
    float fSpin; // f1
    struct particle * pParticle; // r3
    struct pemitterinfo * pEmitterInfo; // r28
    int iTurbulenceIndex; // r5
    class PVector4 Vel; // r1+0x58
    class PVector4 Drag; // r1+0x48
    class PVector4 vGravity; // r1+0x38
    class PVector4 LocTurbulence; // r1+0x28
    class PVector4 Pos; // r1+0x18
    class PVector4 Color; // r1+0x8
    class PVector4 * pColor; // r27
    class PVector4 * pPos; // r26

    // References
    // -> class PVector4 * g_TurbulanceTable;
    // -> int gPrecomputedTableIndex;
    // -> struct pool * g_pParticlePool;
    // -> int kPreComputedTableSize;
}

// Range: 0x802A3220 -> 0x802A387C
void ParticleProcessType0(struct pemitter * pEmitter /* r25 */, float fTDelta /* f27 */) {
    // Local variables
    float fTRatio; // f0
    float fClrRatio; // f3
    float fSclRatio; // f3
    float fScale; // f2
    float fSpin; // f1
    struct particle * pParticle; // r3
    struct pemitterinfo * pEmitterInfo; // r28
    int iTurbulenceIndex; // r5
    class PVector4 Vel; // r1+0x58
    class PVector4 Drag; // r1+0x48
    class PVector4 vGravity; // r1+0x38
    class PVector4 LocTurbulence; // r1+0x28
    class PVector4 Pos; // r1+0x18
    class PVector4 Color; // r1+0x8
    class PVector4 * pColor; // r27
    class PVector4 * pPos; // r26
    float fTDeltadt; // f1
    float fTDeltaRate; // f2
    float fTDeltadtIn; // f3
    unsigned char bDone; // r0
    unsigned char didItOnce; // r4

    // References
    // -> class PVector4 * g_TurbulanceTable;
    // -> int gPrecomputedTableIndex;
    // -> struct pool * g_pParticlePool;
    // -> int kPreComputedTableSize;
}

// Range: 0x802A387C -> 0x802A3CBC
void ParticleProcessType1(struct pemitter * pEmitter /* r27 */, float fTDelta /* f30 */) {
    // Local variables
    float fTRatio; // f0
    float fClrRatio; // f3
    float fSclRatio; // f3
    float fScale; // f2
    float fSpin; // f1
    struct particle * pParticle; // r3
    struct pemitterinfo * pEmitterInfo; // r30
    class PVector4 Vel; // r1+0x38
    class PVector4 vGravity; // r1+0x28
    class PVector4 Pos; // r1+0x18
    class PVector4 Color; // r1+0x8
    class PVector4 * pColor; // r29
    class PVector4 * pPos; // r28

    // References
    // -> struct pool * g_pParticlePool;
}

// Range: 0x802A3CBC -> 0x802A4118
void ParticleProcessType2(struct pemitter * pEmitter /* r27 */, float fTDelta /* f29 */) {
    // Local variables
    float fTRatio; // f0
    float fClrRatio; // f3
    float fSclRatio; // f3
    float fScale; // f2
    float fSpin; // f30
    struct particle * pParticle; // r3
    struct pemitterinfo * pEmitterInfo; // r30
    class PVector4 Vel; // r1+0x38
    class PVector4 vGravity; // r1+0x28
    class PVector4 Pos; // r1+0x18
    class PVector4 Color; // r1+0x8
    class PVector4 * pColor; // r29
    class PVector4 * pPos; // r28

    // References
    // -> struct pool * g_pParticlePool;
}

// Range: 0x802A4118 -> 0x802A4278
void PEmitterSubmitParticles(struct pemitter * pEmitter /* r1+0x8 */, float fTDelta /* f30 */) {
    // Local variables
    float fERDelta; // f31
    struct psystem * pPSystem; // r31
}

// Range: 0x802A4278 -> 0x802A4328
void PSystemClean(struct psystem * pPSystem /* r31 */) {
    // Local variables
    struct pemitter * pEmitter; // r1+0x8
}

// Range: 0x802A4328 -> 0x802A4370
void PSystemIsEmpty() {}

// Range: 0x802A4370 -> 0x802A4464
void PEmitterReset(struct pemitter * pEmitter /* r31 */) {
    // Local variables
    struct particle * pParticle; // r4

    // References
    // -> struct pool * g_pParticlePool;
}

// Range: 0x802A4464 -> 0x802A4784
void PEmitterDestroy(struct pemitter * * pEmit /* r30 */) {
    // Local variables
    struct pemitter * pEmitter; // r31
    struct particle * pParticle; // r4

    // References
    // -> struct pool * g_pPEmitterPool;
    // -> static struct pool * g_LLMemPool;
    // -> static struct pool * g_LLNodeMemPool;
    // -> static struct LLNode * g_LLTracerStack[8];
    // -> static int g_LLTracerStackIndex;
    // -> struct pool * g_pParticlePool;
}

// Range: 0x802A4784 -> 0x802A48A4
void PEmitterUnReg(struct pemitter * pEmitter /* r31 */) {
    // References
    // -> static struct pool * g_LLNodeMemPool;
}

// Range: 0x802A48A4 -> 0x802A4A0C
int PSystemCreate(struct psystem * * pPSystem /* r30 */, const char * sName /* r31 */) {
    // Local variables
    struct psystem * pSys; // r0

    // References
    // -> static struct pool * g_LLMemPool;
    // -> struct pool * g_pPSystemPool;
}

// Range: 0x802A4A0C -> 0x802A4C70
void PSystemDestroy(struct psystem * * pSys /* r30 */) {
    // References
    // -> struct pool * g_pPSystemPool;
    // -> static struct pool * g_LLMemPool;
    // -> static struct pool * g_LLNodeMemPool;
    // -> static struct LLNode * g_LLTracerStack[8];
    // -> static int g_LLTracerStackIndex;
}


