/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\e_ngcsemaphore.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027A7F0 -> 0x8027A9DC
*/
// Range: 0x8027A7F0 -> 0x8027A838
// this: r31
ESemaphore::ESemaphore() {
    // References
    // -> struct [anonymous] __vt__10ESemaphore;
}

// Range: 0x8027A838 -> 0x8027A8B0
// this: r30
ESemaphore::~ESemaphore() {
    // References
    // -> struct [anonymous] __vt__10ESemaphore;
}

// Range: 0x8027A8B0 -> 0x8027A90C
// this: r30
unsigned char ESemaphore::Create(int maxCount /* r31 */) {}

// Range: 0x8027A90C -> 0x8027A918
void ESemaphore::Destroy() {}

// Range: 0x8027A918 -> 0x8027A978
// this: r31
unsigned char ESemaphore::Acquire() {
    // Local variables
    int count; // r0
}

// Range: 0x8027A978 -> 0x8027A9DC
// this: r30
unsigned char ESemaphore::Release() {
    // Local variables
    unsigned char enabled; // r31
}


