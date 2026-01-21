/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_hashtable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262794 -> 0x80262D14
*/
// Range: 0x80262794 -> 0x802627D0
// this: r31
EHashTable::EHashTable() {}

// Range: 0x802627D0 -> 0x80262838
// this: r30
EHashTable::~EHashTable() {}

// Range: 0x80262838 -> 0x8026288C
// this: r30
void EHashTable::InitTable(int tableSize /* r31 */) {}

// Range: 0x8026288C -> 0x802628A4
// this: r4
void EHashTable::ClearTable() {}

// Range: 0x802628A4 -> 0x80262948
// this: r28
class HTIteratorPtrType * EHashTable::Insert(unsigned int key /* r29 */, unsigned int value /* r30 */) {
    // Local variables
    struct EHashTableNode * pNode; // r0
}

// Range: 0x80262948 -> 0x802629FC
// this: r28
class HTIteratorPtrType * EHashTable::InsertNew(unsigned int hash /* r29 */, unsigned int key /* r30 */, unsigned int value /* r31 */) {
    // Local variables
    struct EHashTableNode * pNode; // r3
    struct EHashTableNode * & pHead; // r0
}

// Range: 0x802629FC -> 0x80262A18
void EHashTable::Remove() {}

// Range: 0x80262A18 -> 0x80262ACC
void EHashTable::Remove() {
    // Local variables
    struct EHashTableNode * * ppNode; // r4
    struct EHashTableNode * pNode; // r31
}

// Range: 0x80262ACC -> 0x80262B20
class HTIteratorPtrType * EHashTable::Find() {
    // Local variables
    struct EHashTableNode * pNode; // r3
}

// Range: 0x80262B20 -> 0x80262B60
class HTIteratorPtrType * EHashTable::FindNext() {
    // Local variables
    struct EHashTableNode * pNode; // r0
    unsigned int key; // r6
}

// Range: 0x80262B60 -> 0x80262B90
class HTIteratorPtrType * EHashTable::Find() {
    // Local variables
    struct EHashTableNode * pNode; // r3
}

// Range: 0x80262B90 -> 0x80262C00
// this: r30
void EHashTable::RemoveAll() {}

// Range: 0x80262C00 -> 0x80262C20
int EHashTable::GetSize() {}

// Range: 0x80262C20 -> 0x80262C60
void EHashTable::AutoSizeTable() {
    // Local variables
    int count; // r0
    int tableSize; // r4
}

// Range: 0x80262C60 -> 0x80262D14
// this: r30
void EHashTable::SetTableSize(int tableSize /* r31 */) {
    // Local variables
    struct EHashTableNode * pNode; // r6
    struct EHashTableNode * & pHead; // r0
}


