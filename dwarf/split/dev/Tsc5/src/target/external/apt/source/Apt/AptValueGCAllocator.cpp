/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValueGCAllocator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032F5EC -> 0x8032F8EC
*/
unsigned char snOffsetToStoreNext; // size: 0x1, address: 0x805DC490
unsigned char snOffsetToStoreSize; // size: 0x1, address: 0x805DC491
unsigned char snOffsetToStorePrev; // size: 0x1, address: 0x805DC492
unsigned char snMinAllocation; // size: 0x1, address: 0x805DC493
unsigned int snMaxAllocation; // size: 0x4, address: 0x805DC494
// Range: 0x8032F5EC -> 0x8032F628
class AptValueGC * AptValueGC_PoolManager::AllocateAptValueGC() {
    // Local variables
    class AptValueGC * pValue; // r31

    // References
    // -> unsigned char snOffsetToStoreSize;
}

// total size: 0xC
struct /* @class$1549AptValueGCAllocator_cpp */ {
    // Members
    struct _AptValueGC_MemItem * pNextItem; // offset 0x0, size 0x4
    unsigned int bIsAllocated : 1; // offset 0x4, size 0x4
    unsigned int nSize : 31; // offset 0x4, size 0x4
    struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1550AptValueGCAllocator_cpp */ {
    // Members
    unsigned int bIsAllocated : 1; // offset 0x0, size 0x4
    unsigned int nSize : 31; // offset 0x0, size 0x4
    struct _AptValueGC_MemItem * pNextItem; // offset 0x4, size 0x4
    struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
};
union /* @class$1548AptValueGCAllocator_cpp */ {
    // total size: 0xC
    struct /* @class$1549AptValueGCAllocator_cpp */ {
        // Members
        struct _AptValueGC_MemItem * pNextItem; // offset 0x0, size 0x4
        unsigned int bIsAllocated : 1; // offset 0x4, size 0x4
        unsigned int nSize : 31; // offset 0x4, size 0x4
        struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
    } Type1; // offset 0x0, size 0xC
    // total size: 0xC
    struct /* @class$1550AptValueGCAllocator_cpp */ {
        // Members
        unsigned int bIsAllocated : 1; // offset 0x0, size 0x4
        unsigned int nSize : 31; // offset 0x0, size 0x4
        struct _AptValueGC_MemItem * pNextItem; // offset 0x4, size 0x4
        struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
    } Type2; // offset 0x0, size 0xC
};
// total size: 0xC
struct _AptValueGC_MemItem {
    // Members
    union { // inferred
        union /* @class$1548AptValueGCAllocator_cpp */ {
            // total size: 0xC
            struct /* @class$1549AptValueGCAllocator_cpp */ {
                // Members
                struct _AptValueGC_MemItem * pNextItem; // offset 0x0, size 0x4
                unsigned int bIsAllocated : 1; // offset 0x4, size 0x4
                unsigned int nSize : 31; // offset 0x4, size 0x4
                struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
            } Type1; // offset 0x0, size 0xC
            // total size: 0xC
            struct /* @class$1550AptValueGCAllocator_cpp */ {
                // Members
                unsigned int bIsAllocated : 1; // offset 0x0, size 0x4
                unsigned int nSize : 31; // offset 0x0, size 0x4
                struct _AptValueGC_MemItem * pNextItem; // offset 0x4, size 0x4
                struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
            } Type2; // offset 0x0, size 0xC
        } __anon$1555; // offset 0x0, size 0xC
        // total size: 0xC
        struct /* @class$1549AptValueGCAllocator_cpp */ {
            // Members
            struct _AptValueGC_MemItem * pNextItem; // offset 0x0, size 0x4
            unsigned int bIsAllocated : 1; // offset 0x4, size 0x4
            unsigned int nSize : 31; // offset 0x4, size 0x4
            struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
        } Type1; // offset 0x0, size 0xC
        // total size: 0xC
        struct /* @class$1550AptValueGCAllocator_cpp */ {
            // Members
            unsigned int bIsAllocated : 1; // offset 0x0, size 0x4
            unsigned int nSize : 31; // offset 0x0, size 0x4
            struct _AptValueGC_MemItem * pNextItem; // offset 0x4, size 0x4
            struct _AptValueGC_MemItem * pPrevItem; // offset 0x8, size 0x4
        } Type2; // offset 0x0, size 0xC
    };
};
// Range: 0x8032F628 -> 0x8032F66C
void AptValueGC_PoolManager::DeallocateAptValueGC() {
    // Local variables
    struct _AptValueGC_MemItem * pItem; // r31

    // References
    // -> unsigned char snOffsetToStoreSize;
}

// Range: 0x8032F66C -> 0x8032F7B8
// this: r29
class AptValue * AptValueGC_PoolManager::GetNextAptValue(const class AptValue * pPrevious /* r31 */) {
    // Local variables
    struct _DOGMA_MemPool * pPool; // r30
    struct _AptValueGC_MemItem * pItem; // r0
    unsigned int nItemSize; // r0
    unsigned int nItemSize; // r0

    // References
    // -> unsigned char snOffsetToStoreSize;
}

// Range: 0x8032F7B8 -> 0x8032F850
class AptValue * AptValueGC_PoolManager::GetFirstAptValue() {
    // Local variables
    struct _DOGMA_MemPool * pPool; // r31
    struct _AptValueGC_MemItem * pItem; // r30
    unsigned int nItemSize; // r0

    // References
    // -> unsigned char snOffsetToStoreSize;
}

// Range: 0x8032F850 -> 0x8032F8EC
void AptValueGC_PoolManager::StaticInitialize() {
    // Local variables
    unsigned int maxSizeSoFar; // r4
    unsigned int minSizeSoFar; // r7
    int i; // r6

    // References
    // -> unsigned char snMinAllocation;
    // -> unsigned int snMaxAllocation;
    // -> unsigned char snOffsetToStorePrev;
    // -> unsigned char snOffsetToStoreNext;
    // -> unsigned char snOffsetToStoreSize;
    // -> unsigned char AptValueSizesByVType[47];
}


