/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\effects\effectsmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027D564 -> 0x8027DBB0
*/
// Range: 0x8027D564 -> 0x8027D5C8
class EffectsManager * EffectsManager::GetSingleton() {
    // References
    // -> class EffectsManager * s_pSingleton;
}

// Range: 0x8027D5C8 -> 0x8027D5EC
unsigned char EffectsManager::Initialize() {}

// Range: 0x8027D5EC -> 0x8027D5F4
unsigned char EffectsManager::Shutdown() {}

// Range: 0x8027D5F4 -> 0x8027D780
// this: r29
void EffectsManager::Update(float delta /* f31 */) {
    // Local variables
    class NLIteratorPtrType * i; // r1+0x8
    struct EffectEntry * pEntry; // r30
    class NLIteratorPtrType * next; // r0
    class NLIteratorPtrType * j; // r30
    struct EffectEntry * pEntry; // r31
    class NLIteratorPtrType * next; // r31

    // References
    // -> int _framecount;
    // -> static int last_frame;
}

// Range: 0x8027D780 -> 0x8027D80C
// this: r29
unsigned char EffectsManager::DeleteAll() {
    // Local variables
    class NLIteratorPtrType * i; // r1+0x8
    struct EffectEntry * pEntry; // r30
    class NLIteratorPtrType * next; // r0
}

// Range: 0x8027D80C -> 0x8027D90C
// this: r29
class FastParticleEmitter * EffectsManager::CreateEffect(class REffectsEmitter & resource /* r30 */, struct ClientParams * pParams /* r31 */) {
    // Local variables
    class FastParticleEmitter * pEmitter; // r31
    unsigned char result; // r0
}

// Range: 0x8027D90C -> 0x8027D98C
// this: r30
unsigned char EffectsManager::DeleteEffect() {
    // Local variables
    class NLIteratorPtrType * iter; // r1+0x8
    struct EffectEntry * pEffectEntry; // r31
}

// Range: 0x8027D98C -> 0x8027D9AC
void EffectsManager::ScheduleEffectForDeletion() {}

// Range: 0x8027D9AC -> 0x8027DA54
// this: r30
unsigned char EffectsManager::AddEffect(class Effect * pEffect /* r29 */) {
    // Local variables
    unsigned char result; // r30
}

// Range: 0x8027DA54 -> 0x8027DA8C
unsigned char EffectsManager::AddEntryToList() {}

// Range: 0x8027DA8C -> 0x8027DAFC
unsigned char EffectsManager::RemoveEntryFromList(class TNodeList & list /* r31 */) {
    // Local variables
    class NLIteratorPtrType * i; // r4
}

// Range: 0x8027DAFC -> 0x8027DB38
struct EffectEntry * EffectsManager::FindEffectInList() {
    // Local variables
    class NLIteratorPtrType * i; // r5
}

// Range: 0x8027DB38 -> 0x8027DB40
unsigned char EffectsManager::ForEachActiveEffect() {
    // Local variables
    unsigned char result; // r0
}

// Range: 0x8027DB40 -> 0x8027DBB0
unsigned char EffectsManager::ForEachEffectInList(class EffectsVisitor & visitor /* r30 */) {
    // Local variables
    class NLIteratorPtrType * i; // r31
    unsigned char result; // r0
}


