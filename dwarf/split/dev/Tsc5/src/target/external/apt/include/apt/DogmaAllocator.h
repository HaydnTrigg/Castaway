/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\include\apt\DogmaAllocator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032F97C -> 0x8032F9C4
*/
// Range: 0x8032F97C -> 0x8032F984
void * _DOGMA_MemPool::GetFirstItem() {}

// Range: 0x8032F984 -> 0x8032F98C
struct _DOGMA_MemPool * _DOGMA_MemPool::GetNextPool() {}

// Range: 0x8032F98C -> 0x8032F9C4
unsigned char _DOGMA_MemPool::PtrIsInThisPool() {}


// Range: 0x80330044 -> 0x80330058
void _DOGMA_MemPool::SetupPool() {}

// Range: 0x80330058 -> 0x80330060
void * _OutsideAllocationT::GetReturnedPointer() {}

// Range: 0x80330060 -> 0x80330090
struct _OutsideAllocationT * _OutsideAllocationT::GetStructPointerFromReturnedPointer(void * pReturned /* r31 */) {}

// Range: 0x80330090 -> 0x80330098
unsigned long _OutsideAllocationT::GetStructOverHead() {}

// Range: 0x80330098 -> 0x803300B8
void * _DOGMA_MemPool::ConsumeBytes() {
    // Local variables
    unsigned long mOldFree; // r5
}

// Range: 0x803300B8 -> 0x803300D4
unsigned char _DOGMA_MemPool::CanFitBytes() {}

// Range: 0x803300D4 -> 0x803300F0
unsigned char DOGMA_PoolManager::HasFreeBlockBySize() {}


