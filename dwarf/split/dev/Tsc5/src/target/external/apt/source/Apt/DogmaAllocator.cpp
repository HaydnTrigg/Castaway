/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\DogmaAllocator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032FAE8 -> 0x80330044
*/
// Range: 0x8032FAE8 -> 0x8032FAF8
void * DOGMA_PoolManager::operator new() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FAF8 -> 0x8032FB0C
void DOGMA_PoolManager::operator delete() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FB0C -> 0x8032FC24
// this: r26
DOGMA_PoolManager::DOGMA_PoolManager(unsigned long mainPoolSizeBytes /* r27 */, unsigned long maxSizeAllocation /* r28 */, unsigned char nOffsetToStoreNextInFreeItem /* r29 */, unsigned char nOffsetToStoreSizeInFreeItem /* r30 */, unsigned char bDoublyLinkFreeList /* r6 */, unsigned char nOffsetToStorePrevInFreeItem /* r31 */, unsigned char bTrackOusideAllocations /* r9 */) {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FC24 -> 0x8032FCF0
// this: r27
DOGMA_PoolManager::~DOGMA_PoolManager() {
    // Local variables
    struct _DOGMA_MemPool * pPool; // r30
    struct _DOGMA_MemPool * pNextPool; // r29
    struct _OutsideAllocationT * pCurrent; // r3
    struct _OutsideAllocationT * pNext; // r29

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FCF0 -> 0x8032FD0C
void * DOGMA_PoolManager::GetFirstOutsideAllocation() {}

// Range: 0x8032FD0C -> 0x8032FD48
void * DOGMA_PoolManager::GetNextOutsideAllocation() {
    // Local variables
    struct _OutsideAllocationT * poa; // r3
}

// Range: 0x8032FD48 -> 0x8032FE7C
// this: r29
void * DOGMA_PoolManager::Allocate(unsigned long nAllocatedSize /* r30 */) {
    // Local variables
    unsigned long nSize; // r31
    struct _OutsideAllocationT * poa; // r3
    struct _DOGMA_MemPool * pPool; // r30
    struct _DOGMA_MemPool * pPool; // r30

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FE7C -> 0x8032FF5C
// this: r29
unsigned char DOGMA_PoolManager::Deallocate(void * pNowFree /* r30 */, unsigned long nAllocatedSize /* r31 */) {
    // Local variables
    unsigned long nSize; // r5
    struct _OutsideAllocationT * poa; // r3

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032FF5C -> 0x8032FFAC
void * DOGMA_PoolManager::ConsumeFreeBlockBySize() {
    // Local variables
    unsigned int * pReturn; // r7
    unsigned int * pNextBuffer; // r8
}

// Range: 0x8032FFAC -> 0x80330018
void DOGMA_PoolManager::AddFreeBlockBySize() {
    // Local variables
    unsigned int * pNewHead; // r0
    unsigned int * pOldHead; // r9
}

// Range: 0x80330018 -> 0x80330044
unsigned long DOGMA_PoolManager::ToNextValidSize() {}


