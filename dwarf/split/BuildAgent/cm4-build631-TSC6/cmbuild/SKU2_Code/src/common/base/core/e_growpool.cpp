/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_growpool.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262478 -> 0x80262794
*/
// Range: 0x80262478 -> 0x802624A8
// this: r31
EGrowPool::EGrowPool() {}

// Range: 0x802624A8 -> 0x802624FC
// this: r30
EGrowPool::~EGrowPool() {}

// Range: 0x802624FC -> 0x80262510
void EGrowPool::Init() {}

// Range: 0x80262510 -> 0x80262590
// this: r29
void EGrowPool::Reset() {
    // Local variables
    void * pSeg; // r31
    void * pNextSeg; // r30
}

// Range: 0x80262590 -> 0x80262794
// this: r30
void EGrowPool::FreeUnusedSegments() {
    // Local variables
    void * pHighestUnalignedSeg; // r5
    void * pSeg; // r6
    void * pLowestAlignedAddress; // r5
    void * pUnalignedSegHead; // r6
    void * pUnalignedSegTail; // r7
    void * pAlignedSegHead; // [invalid]
    void * NextpSeg; // r0
    void * pObj; // r8
    void * pNext; // r9
    void * pAllSegsHead; // r31
    int nTs; // r29
    void * pNextSeg; // r28
    int nFree; // r5
    void * pNextObj; // r4
}


