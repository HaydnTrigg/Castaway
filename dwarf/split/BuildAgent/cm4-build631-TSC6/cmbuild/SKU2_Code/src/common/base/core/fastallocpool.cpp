/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\fastallocpool.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802736C0 -> 0x802738FC
*/
// Range: 0x802736C0 -> 0x80273738
// this: r31
FastAllocPool::FastAllocPool() {
    // References
    // -> struct [anonymous] __vt__13FastAllocPool;
}

// Range: 0x80273738 -> 0x80273778
// this: r31
FastAllocPool::~FastAllocPool() {}

// Range: 0x80273778 -> 0x802737F0
void FastAllocPool::Init() {
    // Local variables
    unsigned int alignBits; // r9
    struct AllocBlock * p; // r4
    unsigned int i; // r7
}

// Range: 0x802737F0 -> 0x80273898
// this: r31
ProtectedAllocPool::ProtectedAllocPool() {
    // References
    // -> struct [anonymous] __vt__6EMutex;
    // -> struct [anonymous] __vt__18ProtectedAllocPool;
    // -> struct [anonymous] __vt__13FastAllocPool;
}

// Range: 0x80273898 -> 0x802738FC
// this: r30
ProtectedAllocPool::~ProtectedAllocPool() {}


