/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\gameeffectsmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022A298 -> 0x8022A514
*/
// Range: 0x8022A298 -> 0x8022A398
unsigned char EffectsPreRenderVisitor::Visit(class FastParticleEmitter & emitter /* r30 */) {
    // Local variables
    class EOrderTableData otd; // r1+0x8
    const struct ClientParams & params; // r0
    class ERLevel * pLevel; // r0

    // References
    // -> class EEngine * _pEngine;
    // -> class EInstance s_DaveRemoveTheSuck;
}

// Range: 0x8022A398 -> 0x8022A39C
GameEffectsManager::GameEffectsManager() {}

// Range: 0x8022A39C -> 0x8022A3E0
class GameEffectsManager * GameEffectsManager::GetSingleton() {
    // References
    // -> class GameEffectsManager * s_pSingleton;
}

// Range: 0x8022A3E0 -> 0x8022A41C
void GameEffectsManager::PreRender() {
    // Local variables
    class EffectsPreRenderVisitor visitor; // r1+0x8
}

// Range: 0x8022A41C -> 0x8022A474
// this: r30
EffectsPreRenderVisitor::~EffectsPreRenderVisitor() {}

// Range: 0x8022A474 -> 0x8022A4B0
// this: r31
EffectsPreRenderVisitor::EffectsPreRenderVisitor() {
    // References
    // -> struct [anonymous] __vt__23EffectsPreRenderVisitor;
}

// Range: 0x8022A4B0 -> 0x8022A504
void GameEffectsManager::RenderCB(struct ELevelDrawData & renderParam /* r31 */) {
    // Local variables
    class Effect * pEffect; // r0
}

// Range: 0x8022A504 -> 0x8022A50C
unsigned char EffectsPreRenderVisitor::Visit() {}

// Range: 0x8022A50C -> 0x8022A514
unsigned char EffectsPreRenderVisitor::Visit() {}


