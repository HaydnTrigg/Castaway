/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\reffects_emitter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EA730 -> 0x802EAE88
*/
// Range: 0x802EA730 -> 0x802EA77C
REffectsEmitter::REffectsEmitter() {
    // References
    // -> struct [anonymous] __vt__15REffectsEmitter;
}

// Range: 0x802EA77C -> 0x802EA808
// this: r30
REffectsEmitter::~REffectsEmitter() {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__15REffectsEmitter;
}

// Range: 0x802EA808 -> 0x802EA884
// this: r30
void REffectsEmitter::Deallocate() {}

// Range: 0x802EA884 -> 0x802EA904
// this: r31
void REffectsEmitter::DelRefSubResources() {}

// Range: 0x802EA904 -> 0x802EA964
// this: r31
void REffectsEmitter::AddRefSubResources() {
    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802EA964 -> 0x802EA9D0
// this: r31
unsigned char REffectsEmitter::TryIncrementSubResources() {
    // Local variables
    class EResource * pRes; // r1+0x8

    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x802EA9D0 -> 0x802EAAE8
void CopyV1EmitterInitData(struct FastParticleEmitterInitData * pDest /* r31 */, struct FastParticleEmitterInitDataV1 * pSrc /* r30 */) {}

// Range: 0x802EAAE8 -> 0x802EAC60
// this: r29
void REffectsEmitter::OldLoad(class EFile * binaryFile /* r30 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
}

// Range: 0x802EAC60 -> 0x802EADE0
// this: r29
void REffectsEmitter::Load(class EFile * binaryFile /* r30 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
}

// Range: 0x802EADE0 -> 0x802EAE88
// this: r29
void REffectsEmitter::Refresh(class EFile * pFile /* r30 */) {}


