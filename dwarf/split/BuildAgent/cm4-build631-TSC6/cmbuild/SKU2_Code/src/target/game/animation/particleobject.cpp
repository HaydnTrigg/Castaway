/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\particleobject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80022B80 -> 0x80023254
*/
// Range: 0x80022B80 -> 0x80022C3C
// this: r29
EParticleEffect::EParticleEffect(struct AttachmentNode & node /* r30 */, const class EMat4 & parentTransform /* r31 */) {
    // References
    // -> class EffectsEmitterManager g_effectsEmitterMan;
    // -> unsigned char kUseEmitterPosForAlphaSort;
}

// Range: 0x80022C3C -> 0x80022CF0
// this: r30
unsigned char EParticleEffect::UpdateParticleEffectLoad() {
    // References
    // -> class EffectsEmitterManager g_effectsEmitterMan;
}

// Range: 0x80022CF0 -> 0x80022DC4
// this: r30
EParticleEffect::~EParticleEffect() {
    // References
    // -> class EffectsEmitterManager g_effectsEmitterMan;
}

// Range: 0x80022DC4 -> 0x80022E54
// this: r29
void EParticleEffect::SetPos(const class EMat4 & m /* r30 */, class EVec3 * sortPos /* r31 */) {
    // Local variables
    struct ClientParams & params; // r0
}

// Range: 0x80022E54 -> 0x80022E74
void EParticleEffect::SetAlphaFade() {}

// Range: 0x80022E74 -> 0x80022EB4
// this: r31
EParticleObj::EParticleObj() {}

// Range: 0x80022F0C -> 0x80022F84
// this: r30
EParticleObj::~EParticleObj() {}

// Range: 0x80022F84 -> 0x80022FF0
// this: r30
unsigned char EParticleObj::CreateEffects(const class EMat4 & mObj /* r31 */, float theata /* f31 */) {
    // Local variables
    unsigned int effectAttachmentId; // r5
}

// Range: 0x80022FF0 -> 0x80023100
// this: r27
unsigned char EParticleObj::CreateEffects(const class EMat4 & mObj /* r28 */, unsigned int effectAttachmentId /* r29 */) {
    // Local variables
    int nEmitters; // r0
    int i; // r30
    struct AttachmentNode & node; // r29

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x80023100 -> 0x80023254
// this: r23
void EParticleObj::UpdateEffectPosAndAlphaFade(class EAnimController & ac /* r24 */, const class EMat4 & mObj /* r25 */, class EVec3 * sortPos /* r26 */, float alphaScale /* f31 */) {
    // Local variables
    class NLIteratorPtrType * i; // r30
    int j; // r29
    class EParticleEffect * pEffect; // r28
    struct AttachmentNode & node; // r27
    class EMat4 mOrient; // r1+0x8
}


