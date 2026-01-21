/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simcacherendermgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024611C -> 0x80246578
*/
// Range: 0x8024611C -> 0x80246158
CachedSimRenderManager::CachedSimRenderManager() {}

// Range: 0x80246158 -> 0x802461BC
// this: r29
void CachedSimRenderManager::RemoveOneRenderer(unsigned int i /* r30 */) {}

// Range: 0x802461BC -> 0x8024624C
// this: r28
void CachedSimRenderManager::AddSimForRendering(unsigned int index /* r29 */) {
    // Local variables
    class SimModelTSC6 * pModel; // r30
}

// Range: 0x8024624C -> 0x802462B4
// this: r29
void CachedSimRenderManager::AddAllCachedSimsForRendering() {
    // Local variables
    unsigned int nCachedSims; // r0
    unsigned int i; // r30
}

// Range: 0x802462B4 -> 0x802462D4
void CachedSimRenderManager::TurnOffAllSims() {}

// Range: 0x802462D4 -> 0x802462E0
void CachedSimRenderManager::SetSimRenderToggle() {}

// Range: 0x802462E0 -> 0x802462FC
void CachedSimRenderManager::SetSimPosition() {}

// Range: 0x802462FC -> 0x80246318
void CachedSimRenderManager::SetSimAnimation() {}

// Range: 0x80246318 -> 0x80246388
// this: r28
void CachedSimRenderManager::GetSimBoneOrientation(unsigned int index /* r29 */, int bone /* r30 */, class EMat4 & mOrient /* r31 */) {}

// Range: 0x80246388 -> 0x802463F8
// this: r29
void CachedSimRenderManager::Update() {
    // Local variables
    int i; // r30
}

// Range: 0x802463F8 -> 0x80246478
// this: r28
void CachedSimRenderManager::Render(class ERC * prc /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80246478 -> 0x802464CC
void CachedSimRenderManager::TurnOnBoneRendering() {
    // Local variables
    int i; // r30
}

// Range: 0x802464CC -> 0x80246520
void CachedSimRenderManager::TurnOffBoneRendering() {
    // Local variables
    int i; // r30
}


