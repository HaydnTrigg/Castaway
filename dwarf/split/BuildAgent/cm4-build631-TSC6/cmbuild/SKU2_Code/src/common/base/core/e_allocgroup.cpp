/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_allocgroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DB50 -> 0x8024DDDC
*/
// Range: 0x8024DB50 -> 0x8024DBA4
// this: r31
EAllocGroup::EAllocGroup() {}

// Range: 0x8024DBA4 -> 0x8024DBAC
void EAllocGroup::SetAllocHeap() {}

// Range: 0x8024DBAC -> 0x8024DC98
// this: r29
void * EAllocGroup::Alloc(unsigned long size /* r30 */) {
    // Local variables
    void * pData; // r31
    int alignmentMinus1; // r5
    int pos; // r5
    int newPos; // r7
    void * pSeg; // r31
}

// Range: 0x8024DC98 -> 0x8024DC9C
void EAllocGroup::Validate() {}

// Range: 0x8024DC9C -> 0x8024DD00
// this: r30
void EAllocGroup::DeallocateAll() {
    // Local variables
    class NLIteratorPtrType * i; // r31
}

// Range: 0x8024DD00 -> 0x8024DD9C
// this: r29
void EAllocGroup::MoveContents(class EAllocGroup & source /* r30 */) {}

// Range: 0x8024DD9C -> 0x8024DDDC
// this: r31
void EAllocGroup::RemoveAllocExternal() {}


