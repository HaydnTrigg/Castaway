/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_ncamera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80265F28 -> 0x80266798
*/
// Range: 0x80265F28 -> 0x80265F78
// this: r31
ENCamera::ENCamera() {
    // References
    // -> struct [anonymous] __vt__8ENCamera;
}

// Range: 0x80265F78 -> 0x80265FD4
// this: r30
ENCamera::~ENCamera() {}

// Range: 0x80265FD4 -> 0x802661D4
// this: r22
void ENCamera::Write(class EStream & s /* r23 */) {
    // Local variables
    int nVersion; // r0
    int i; // r24
    struct ENCameraPoint & cameraPoint; // r0
}

// Range: 0x802661D4 -> 0x802663FC
// this: r31
void ENCamera::Read(class EStream & s /* r23 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r24
    char copyName[64]; // r1+0x10
    int j; // r24
    int i; // r25
}

// Range: 0x802663FC -> 0x80266604
// this: r27
void ENCamera::Read(class EFile * s /* r28 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r29
    char copyName[64]; // r1+0x10
    int j; // r29
    int i; // r30
}

// Range: 0x80266604 -> 0x80266798
// this: r26
unsigned int ENCamera::Read(unsigned char * buff /* r27 */) {
    // Local variables
    unsigned char * start; // r29
    int nVersion; // r1+0x8
    int i; // r28
    char copyName[64]; // r1+0x10
    int j; // r28
    int i; // r30
}


