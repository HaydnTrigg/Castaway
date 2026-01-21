/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_memorystream.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802654A4 -> 0x8026581C
*/
// Range: 0x802654A4 -> 0x80265570
int EMemoryReadStream::Read(int size /* r31 */) {
    // Local variables
    unsigned char * src; // r6
    unsigned char * dest; // r8
}

// Range: 0x80265570 -> 0x80265620
int EMemoryBufferWriteStream::Write(int size /* r31 */) {
    // Local variables
    unsigned char * dest; // r3
    unsigned char * src; // r4
}

// Range: 0x80265620 -> 0x80265690
// this: r30
EMemoryWriteStream::~EMemoryWriteStream() {
    // References
    // -> struct [anonymous] __vt__18EMemoryWriteStream;
}

// Range: 0x80265690 -> 0x8026581C
// this: r30
int EMemoryWriteStream::Write(int size /* r31 */) {
    // Local variables
    int written; // r28
    unsigned char * pSeg; // r1+0x8
    int i; // r27
    int offset; // r26
    unsigned char * pDest; // r3
    unsigned char * src; // r4
}


