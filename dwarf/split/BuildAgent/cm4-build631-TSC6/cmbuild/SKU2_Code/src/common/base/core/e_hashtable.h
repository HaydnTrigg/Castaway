/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_hashtable.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80095AB0 -> 0x80095AF4
*/
// Range: 0x80095AB0 -> 0x80095AE0
// this: r31
THashTable::THashTable() {}

// Range: 0x80095AE0 -> 0x80095AE4
class HTIteratorPtrType * THashTable::Insert() {}

// Range: 0x80095AE4 -> 0x80095AE8
class HTIteratorPtrType * THashTable::FindNext() {}

// Range: 0x80095AE8 -> 0x80095AEC
void THashTable::Remove() {}

// Range: 0x80095AEC -> 0x80095AF0
class HTIteratorPtrType * THashTable::FindFirst() {}

// Range: 0x80095AF0 -> 0x80095AF4
class HTIteratorPtrType * EHashTable::FindFirst() {}


// Range: 0x80293FDC -> 0x802940AC
class EStream & operator<<(class EStream & s /* r29 */, const class THashTable & d /* r30 */) {
    // Local variables
    int count; // r0
    class HTIteratorPtrType * i; // r30
}

// Range: 0x802940AC -> 0x80294184
class EStream & operator>>(class EStream & s /* r30 */, class THashTable & d /* r31 */) {
    // Local variables
    int tableSize; // r1+0x14
    int count; // r1+0x10
    unsigned int key; // r1+0xC
}

// Range: 0x80294184 -> 0x80294260
class EStream & operator<<(class EStream & s /* r30 */, const class THashTable & d /* r31 */) {
    // Local variables
    int count; // r0
    class HTIteratorPtrType * i; // r31
}

// Range: 0x80294260 -> 0x80294348
class EStream & operator>>(class EStream & s /* r30 */, class THashTable & d /* r31 */) {
    // Local variables
    int tableSize; // r1+0x14
    int count; // r1+0x10
    unsigned int key; // r1+0xC
    int val; // r1+0x8
}


