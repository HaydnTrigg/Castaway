/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_mutex.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80265C04 -> 0x80265F28
*/
// Range: 0x80265C04 -> 0x80265C58
// this: r31
EMutex::EMutex() {
    // References
    // -> struct [anonymous] __vt__6EMutex;
}

// Range: 0x80265C58 -> 0x80265CC0
// this: r30
EMutex::~EMutex() {}

// Range: 0x80265CC0 -> 0x80265CD4
unsigned char EMutex::Acquire() {
    // Local variables
    unsigned char ret; // r0
}

// Range: 0x80265CD4 -> 0x80265CE4
unsigned char EMutex::Acquire() {
    // Local variables
    unsigned char ret; // r0
}

// Range: 0x80265CE4 -> 0x80265CF4
unsigned char EMutex::Release() {}

// Range: 0x80265CF4 -> 0x80265D04
unsigned char EMutex::Release() {}

// Range: 0x80265D04 -> 0x80265DA8
// this: r29
EThreadMutex::EThreadMutex() {
    // References
    // -> struct [anonymous] __vt__12EThreadMutex;
    // -> struct [anonymous] __vt__6EMutex;
}

// Range: 0x80265DA8 -> 0x80265E9C
// this: r31
unsigned char EThreadMutex::Acquire() {}

// Range: 0x80265E9C -> 0x80265F28
// this: r31
unsigned char EThreadMutex::Release() {}


