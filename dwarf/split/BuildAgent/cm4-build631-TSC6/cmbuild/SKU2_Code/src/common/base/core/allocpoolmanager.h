/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\allocpoolmanager.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C324 -> 0x8025C730
*/
// Range: 0x8025C324 -> 0x8025C38C
// this: r30
AllocPoolManager::~AllocPoolManager() {}

// Range: 0x8025C38C -> 0x8025C57C
// this: r29
void AllocPoolManager::InitAllocPools(const unsigned int * poolBlockCounts /* r30 */) {
    // Local variables
    int totalSize; // r31
    int pool; // r5
    unsigned char * poolCurrent; // r6
    unsigned char bInitialized[16]; // r1+0x8
    int i; // r0
    unsigned int nCurrentIndex; // r23
    int nAlign; // r24
    int i; // r25
    int nSize; // r3
}

// Range: 0x8025C57C -> 0x8025C62C
void * AllocPoolManager::AttemptPoolAlloc(unsigned int align /* r27 */) {
    // Local variables
    int index; // r28
}

// Range: 0x8025C62C -> 0x8025C6BC
class ProtectedAllocPool * AllocPoolManager::FindPoolForBlock() {
    // Local variables
    int nLeft; // r6
    int nRight; // r7
    int nMid; // r8
}

// Range: 0x8025C6BC -> 0x8025C730
// this: r29
unsigned char * AllocPoolManager::InitPoolByIndex(unsigned char * address /* r30 */) {}


