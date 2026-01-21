/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\e_ngcfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80279DA0 -> 0x8027A154
*/
// Range: 0x80279DA0 -> 0x80279E18
// this: r30
ENgcFile::~ENgcFile() {
    // References
    // -> struct [anonymous] __vt__8ENgcFile;
}

// Range: 0x80279E18 -> 0x80279F20
class EFile * ENgcFile::Creator(const char * fileName /* r28 */, enum DeviceType device /* r29 */, enum AccessMode access /* r30 */) {
    // Local variables
    class ENgcFile * ngcFile; // r0

    // References
    // -> struct [anonymous] __vt__8ENgcFile;
}

// Range: 0x80279F20 -> 0x80279F70
// this: r31
void ENgcFile::Destroy() {}

// Range: 0x80279F70 -> 0x80279FE4
// this: r28
unsigned long ENgcFile::Read(unsigned long nSize /* r29 */) {
    // Local variables
    int bytesRead; // r0
    int bytesToRead; // r31
    unsigned char * buffer; // r30
}

// Range: 0x80279FE4 -> 0x8027A0CC
// this: r30
int ENgcFile::BufferReadRequest(unsigned char * pBuffer /* r29 */, int requestSize /* r31 */) {
    // Local variables
    int readSize; // [invalid]
    int fileReadOffset; // r6
    int length; // r5

    // References
    // -> static unsigned int totalRead;
}

// Range: 0x8027A0CC -> 0x8027A0D4
unsigned long ENgcFile::Write() {}

// Range: 0x8027A0D4 -> 0x8027A134
unsigned long ENgcFile::Seek() {
    // Local variables
    unsigned int oldOffset; // r6
}

// Range: 0x8027A134 -> 0x8027A13C
unsigned long ENgcFile::Tell() {}

// Range: 0x8027A13C -> 0x8027A144
unsigned char ENgcFile::Flush() {}

// Range: 0x8027A144 -> 0x8027A14C
enum ErrorCode ENgcFile::GetLastError() {}

// Range: 0x8027A14C -> 0x8027A154
void * ENgcFile::GetSystemHandle() {}


