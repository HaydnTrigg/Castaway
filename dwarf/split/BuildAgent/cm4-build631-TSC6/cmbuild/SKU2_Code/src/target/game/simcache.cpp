/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simcache.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80244A90 -> 0x80245108
*/
// Range: 0x80244A90 -> 0x80244AA0
CachedSimData::CachedSimData() {}

// Range: 0x80244AA0 -> 0x80244AEC
// this: r31
CachedSimData::~CachedSimData() {}

// Range: 0x80244AEC -> 0x80244AF4
unsigned int CachedSimData::GetGUID() {}

// Range: 0x80244AF4 -> 0x80244AFC
void CachedSimData::SetGUID() {}

// Range: 0x80244AFC -> 0x80244B04
class SimModelTSC6 * CachedSimData::GetSimModel() {}

// Range: 0x80244B04 -> 0x80244B18
void CachedSimData::SetSimModel() {}

// Range: 0x80244B18 -> 0x80244B68
// this: r31
SimCache::SimCache() {}

// Range: 0x80244B68 -> 0x80244BD4
// this: r30
SimCache::~SimCache() {}

// Range: 0x80244BD4 -> 0x80244C4C
// this: r29
class CachedSimData * SimCache::GetCachedSimFromGUID(unsigned int guid /* r30 */) {
    // Local variables
    class CachedSimData * iter; // r31
}

// Range: 0x80244C4C -> 0x80244C80
class SimModelTSC6 * SimCache::GetModelFromCacheByGUID() {
    // Local variables
    class CachedSimData * pCachedSim; // r0
}

// Range: 0x80244C80 -> 0x80244CE4
// this: r30
class SimModelTSC6 * SimCache::GetModelFromCacheByIndex(unsigned int index /* r31 */) {
    // Local variables
    class EAutoMutex pcmut; // r1+0x8
}

// Range: 0x80244CE4 -> 0x80244D34
// this: r31
unsigned int SimCache::GetNumCachedSims() {
    // Local variables
    class EAutoMutex pcmut; // r1+0x8
}

// Range: 0x80244D34 -> 0x80244DAC
// this: r29
void SimCache::CacheSim(unsigned int guid /* r30 */, class SimModelTSC6 * pModel /* r31 */) {
    // Local variables
    class CachedSimData simCache; // r1+0x8
}

// Range: 0x80244DAC -> 0x80244E60
// this: r29
void SimCache::ClearSimCache() {
    // Local variables
    class EAutoMutex pcmut; // r1+0x8
    class CachedSimData * iter; // r31
    class SimModelTSC6 * pCachedModel; // r30
}

// Range: 0x80244E60 -> 0x80244F44
// this: r28
void SimCache::ClearOneSimFromCache(unsigned int guid /* r29 */) {
    // Local variables
    class EAutoMutex pcmut; // r1+0x8
    class CachedSimData * iter; // r31
    unsigned char found; // r30
    class SimModelTSC6 * pCachedModel; // r30
}

// Range: 0x80244F44 -> 0x80244FF0
// this: r29
void SimCache::TransferModelToCache(unsigned int guid /* r30 */, class SimModelTSC6 * pModel /* r31 */) {
    // Local variables
    class EAutoMutex pcmut; // r1+0x8
    int size; // r0
    class CachedSimData * pSimData; // r0
}

// Range: 0x80244FF0 -> 0x80245108
// this: r27
void SimCache::ForceFillSimCache() {
    // Local variables
    class NeighborList * pNeighbours; // r30
    class Neighbor * * i; // r29
    class Neighbor * pNeighbour; // r28
    int famNum; // r0
}


