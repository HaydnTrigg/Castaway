/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\effects\fastparticleemitter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DBF8 -> 0x80281630
*/
// Range: 0x8027DBF8 -> 0x8027DCB4
void FastParticleEmitter::InitModule() {
    // References
    // -> class EVec4 s_vertArray[256];
}

// Range: 0x8027DCB4 -> 0x8027DD20
// this: r31
FastParticleEmitter::FastParticleEmitter() {
    // References
    // -> struct [anonymous] __vt__Q27Effects19FastParticleEmitter;
}

// Range: 0x8027DD20 -> 0x8027DD8C
// this: r31
FastParticleEmitter::FastParticleEmitter() {
    // References
    // -> struct [anonymous] __vt__Q27Effects19FastParticleEmitter;
}

// Range: 0x8027DD8C -> 0x8027DEA0
// this: r29
FastParticleEmitter::~FastParticleEmitter() {
    // References
    // -> class EGraphics * _pGfx;
    // -> class ETextureManager _textureman;
    // -> struct [anonymous] __vt__Q27Effects19FastParticleEmitter;
}

// Range: 0x8027DEA0 -> 0x8027DF44
// this: r31
void FastParticleEmitter::FreeParticlePackets() {
    // Local variables
    int i; // r8

    // References
    // -> class FastAllocPool * gFastParticlePacketsPool;
}

// Range: 0x8027DF44 -> 0x8027E410
// this: r31
unsigned char FastParticleEmitter::SharedInitPart2() {
    // Local variables
    unsigned char bPersistent; // r5
    int packetCount; // r30
    unsigned char allocResult; // r0
    struct EShaderDef sd; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
    // -> class FastAllocPool * gFastParticlePacketsPool;
}

// Range: 0x8027E410 -> 0x8027E634
// this: r30
unsigned char FastParticleEmitter::PreRollParticles() {
    // Local variables
    int nbAddedParticles; // r1+0xC
    int iNumBursts; // r29
    float T; // f31
    float DT; // f0
    unsigned char bInfiniteParticleLifetime; // r31
    class EVec3 ambientColor; // r1+0x10
    int burstParticleCount; // r4

    // References
    // -> unsigned int gPrecomputedRand32Table[128];
    // -> int gPrecomputedTableIndex;
    // -> int kPreComputedTableSize;
}

// Range: 0x8027E634 -> 0x8027E738
unsigned char FastParticleEmitter::AllocateParticlePackets() {
    // Local variables
    int i; // r9
    int i; // r0
    int j; // r0

    // References
    // -> class FastAllocPool * gFastParticlePacketsPool;
}

// Range: 0x8027E738 -> 0x8027E7E0
// this: r30
unsigned char FastParticleEmitter::Init(class REffectsEmitter & resourceData /* r31 */) {
    // Local variables
    unsigned char result; // r0
}

// Range: 0x8027E7E0 -> 0x8027E9B4
float FastParticleEmitter::UpdateBurst(int * nbAddedParticles /* r31 */) {
    // Local variables
    float actualBurstPeriod; // f31
    int burstParticleCount; // r4
    int nbFreeParticles; // r0

    // References
    // -> int gPrecomputedTableIndex;
    // -> unsigned int gPrecomputedRand32Table[128];
    // -> int kPreComputedTableSize;
}

// Range: 0x8027E9B4 -> 0x8027F2EC
// this: r19
int FastParticleEmitter::AddBurst(int nbParticles /* r20 */, float T0 /* f29 */, class EVec3 & ambientColor /* r21 */) {
    // Local variables
    unsigned int uvMirroringOn; // r28
    unsigned int bgr555; // r27
    float P; // f31
    float dP; // f30
    int current; // r26
    int nbAddedParticles; // r25
    unsigned int partI; // r24
    struct FastParticlePacket * pPacket; // r23
    struct FastParticleState * pState; // r22
    float fVlen; // f0
    class EVec4 V; // r1+0x98
    float VX; // f20
    float VY; // f2
    unsigned char bCalculateOrientation; // r18
    float tmp; // f1
    float scale; // f2
    class EVec4 color; // r1+0x88
    class EVec4 color; // r1+0x78
    class EVec4 color; // r1+0x68
    unsigned int random32bitsValue; // r0
    float r; // f0

    // References
    // -> class E3DWindow * m_pCurrent3DWindow;
    // -> int gPrecomputedTableIndex;
    // -> const class EMat4 * gpCurrentMatrix1Ptr;
    // -> unsigned int gPrecomputedRand32Table[128];
    // -> int kPreComputedTableSize;
}

// Range: 0x8027F2EC -> 0x8027F374
void FastParticleEmitter::RotateEmitter() {
    // Local variables
    class EMat4 & M; // r5
}

// Range: 0x8027F374 -> 0x8027F3E4
void FastParticleEmitter::InitParticlePool() {
    // References
    // -> class FastAllocPool * gFastParticlePacketsPool;
    // -> static unsigned char * gFastParticlePoolBuffer;
    // -> static int gsNumberFastParticlePacketsInPool;
}

// Range: 0x8027F3E4 -> 0x8027F644
// this: r31
void FastParticleEmitter::ComputeCombinedMatrix() {
    // Local variables
    class EMat4 T; // r1+0x18
    class EVec3 v; // r1+0x8

    // References
    // -> class E3DWindow * m_pCurrent3DWindow;
}

// Range: 0x8027F644 -> 0x8027FBBC
// this: r24
void FastParticleEmitter::Update(float currentDT /* f31 */, class EVec3 & ambientColor /* r25 */) {
    // Local variables
    unsigned char killall; // r0
    float td; // f30
    int currentFirstUsed; // r30
    int currentNbUsed; // r29
    int current; // r28
    int counter; // r27
    int nbKilled; // r26
    struct FastParticlePacket * killed_pPacket; // r0
    unsigned int killed_partI; // r0
    int packetI; // r4
    int partI; // r5
    struct FastParticlePacket * pPacket; // r22
    float * pTimeAlive; // r0
    float newTimeAlive; // f29
    float lifetime; // f1
    int nbAddedParticles; // r22
    int n; // r23
    int nbAdded; // r1+0x8
    float f; // f0
    unsigned char bSystemIsEmpty; // r26
}

// Range: 0x8027FBBC -> 0x8027FBF0
void FastParticleEmitter::Stop() {}

// Range: 0x8027FBF0 -> 0x802806BC
// this: r30
void FastParticleEmitter::ComputeDispersionPositionAndVelocity(struct FastParticleState * pState /* r31 */, float P /* f26 */, float dP /* f27 */) {
    // Local variables
    float sina; // r1+0x40
    float cosa; // r1+0x3C
    float sinb; // r1+0x38
    float cosb; // r1+0x34
    float vMag; // f31
    float rMag; // f30
    float a; // f29
    float b; // f25
    float rCosB; // f4
    float vCosB; // f4
    unsigned int random32bitsValue; // r5
    float dp; // f28
    float ds; // f27
    float d; // f0
    float ood; // f0
    float x; // f0
    float y; // f1
    float z; // f6
    float r; // f4
    float dy; // f2
    float f; // f2
    float dy; // f4
    float f; // f4
    class EVec4 DP; // r1+0x58
    float f; // f0
    class EVec4 DP; // r1+0x48
    int gPrecomputedTableIndex'362; // r0

    // References
    // -> const class EMat4 * gpCurrentMatrix1Ptr;
    // -> int gPrecomputedTableIndex;
    // -> unsigned int gPrecomputedRand32Table[128];
    // -> int kPreComputedTableSize;
}

// Range: 0x802806BC -> 0x8028078C
float FastParticleEmitter::DieOnLastFrame_Lifetime() {
    // Local variables
    struct FastParticleState * pState; // r0
    float lifetime; // f0
    float f; // f2
}

// Range: 0x8028078C -> 0x80280790
void FastParticleEmitter::Render() {}

// Range: 0x80280790 -> 0x80280FD4
// this: r25
void FastParticleEmitter::DoSimulationAndRender(class ERC * pRC /* r26 */) {
    // Local variables
    int particleCount; // r30
    int current; // r29
    const struct FastParticleParticleInitData & particleInit; // r28
    class EMat4 particleDrawMat; // r1+0x50
    struct FastParticleQuad particleQuad; // r1+0x90
    int submittedParticles; // r27
    int particleIndex; // r7
    struct FastParticlePacket * pPacket; // r8
    struct FastParticleState * pState; // r0
    float timeAlive; // f0
    float size; // f2
    class EVec4 tmpV; // r1+0x40
    class EVec4 rgba; // r1+0x30
    unsigned char bMirrorUV; // r5
    float val; // f12
    class EVec4 worldPos; // r1+0x20
    float tMin; // f0
    float angle0; // f6
    float angle; // f1
    float fRandomTimeOffset; // f3
    unsigned int uiRandomTimeOffset; // r1+0x8
    float du; // f6
    unsigned int iFrameU; // r0
    float uLeft; // f6
    float uRight; // f4
    float dv; // f4
    unsigned int iFrameV; // r0
    float uTop; // f4
    float uBottom; // f0

    // References
    // -> unsigned int s_colorArray[256];
    // -> class EVec2 s_texCoordArray[256];
    // -> class EVec4 s_vertArray[256];
    // -> class E3DWindow * m_pCurrent3DWindow;
    // -> int s_renderBufferIndex;
}

// Range: 0x80280FD4 -> 0x80281598
void FastParticleEmitter::RenderQuad() {
    // Local variables
    class EVec4 vToTopLeft; // r1+0x50
    class EVec4 vToTopRight; // r1+0x40
    class EVec4 vOffset; // r1+0x30
    float scale; // f0
    float dx; // f9
    float dy; // f1
    float offsetU; // f7
    float offsetV; // f1
    float localOffsetU; // f12
    float localOffsetV; // f28
    float rotOffsetU; // f2
    float rotOffsetV; // f10
    float sinA; // f1
    float cosA; // f5
    int phasein; // r25
    float modphase; // f3
    int quarter; // r25
    float tA; // f3
    float temp; // f2
    float tA; // f3
    float temp; // f2
    float tA; // f3
    float temp; // f2
    float tA; // f3
    float temp; // f2

    // References
    // -> class EVec2 s_texCoordArray[256];
    // -> class EVec4 s_vertArray[256];
    // -> unsigned int s_colorArray[256];
    // -> int s_renderBufferIndex;
}

// Range: 0x80281598 -> 0x802815B4
// this: r0
unsigned char FastParticleEmitter::Accept() {}

// Range: 0x802815B4 -> 0x80281630
static void __sinit_\engine_effects2_unity_cpp() {
    // References
    // -> static class EVec4 maxClamp;
    // -> class EVec2 s_texCoordArray[256];
    // -> class EVec4 s_vertArray[256];
}


