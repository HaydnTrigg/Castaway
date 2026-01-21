/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_storage.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800845BC -> 0x80084ACC
*/
// Range: 0x800845BC -> 0x80084604
class EStream & operator<<(class EStream & s /* r31 */, float d /* r1+0x8 */) {}

// Range: 0x80084604 -> 0x80084650
class EStream & operator<<(class EStream & s /* r31 */) {
    // Local variables
    unsigned char v; // r1+0x8
}

// Range: 0x80084650 -> 0x80084690
class EStream & operator>>(class EStream & s /* r31 */) {}

// Range: 0x80084690 -> 0x800846F4
class EStream & operator>>(class EStream & s /* r30 */, unsigned char & d /* r31 */) {
    // Local variables
    unsigned char v; // r1+0x8
}

// Range: 0x800846F4 -> 0x8008473C
class EStream & operator<<(class EStream & s /* r31 */, unsigned int d /* r1+0x8 */) {}

// Range: 0x8008473C -> 0x8008477C
class EStream & operator>>(class EStream & s /* r31 */) {}

// Range: 0x8008477C -> 0x80084824
class EStream & operator<<(class EStream & s /* r29 */, const class TRedBlackTree & d /* r30 */) {
    // Local variables
    int count; // r0
    class RBIteratorPtrType * i; // r30
}

// Range: 0x80084824 -> 0x8008486C
class EStream & operator<<(class EStream & s /* r31 */, int d /* r1+0x8 */) {}

// Range: 0x8008486C -> 0x800848E8
class EStream & operator>>(class EStream & s /* r30 */, class TNodeList & d /* r31 */) {
    // Local variables
    int count; // r1+0xC
    class EInstance * p; // r1+0x8
}

// Range: 0x800848E8 -> 0x8008497C
class EStream & operator>>(class EStream & s /* r29 */, class TRedBlackTree & d /* r30 */) {
    // Local variables
    int count; // r1+0x10
    unsigned int key; // r1+0xC
    class EInstance * val; // r1+0x8
}

// Range: 0x8008497C -> 0x800849BC
class EStream & operator>>(class EStream & s /* r31 */) {}

// Range: 0x800849BC -> 0x80084A04
class EStream & operator<<(class EStream & s /* r31 */, unsigned char d /* r1+0x8 */) {}

// Range: 0x80084A04 -> 0x80084A4C
class EStream & operator<<(class EStream & s /* r31 */, unsigned short d /* r1+0x8 */) {}

// Range: 0x80084A4C -> 0x80084A8C
class EStream & operator>>(class EStream & s /* r31 */) {}

// Range: 0x80084A8C -> 0x80084ACC
class EStream & operator>>(class EStream & s /* r31 */) {}


// Range: 0x80260B44 -> 0x80260B84
// this: r31
EStream::~EStream() {}


// Range: 0x80294348 -> 0x802943CC
class EStream & operator<<(class EStream & s /* r27 */, const class TArray & d /* r28 */) {
    // Local variables
    unsigned int size; // r30
    int i; // r29
}

// Range: 0x802943CC -> 0x80294464
class EStream & operator>>(class EStream & s /* r27 */, class TArray & d /* r28 */) {
    // Local variables
    unsigned int size; // r1+0xC
    int i; // r29
}

// Range: 0x80294464 -> 0x802944E4
class EStream & operator<<(class EStream & s /* r30 */, const class TNodeList & d /* r31 */) {
    // Local variables
    int count; // r0
    class NLIteratorPtrType * i; // r31
}

// Range: 0x802944E4 -> 0x80294570
class EStream & operator>>(class EStream & s /* r30 */, class TNodeList & d /* r31 */) {
    // Local variables
    int count; // r1+0xC
}


