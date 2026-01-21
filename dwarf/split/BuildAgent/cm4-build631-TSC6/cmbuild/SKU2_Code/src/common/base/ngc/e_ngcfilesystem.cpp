/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\e_ngcfilesystem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027A154 -> 0x8027A680
*/
// Range: 0x8027A154 -> 0x8027A190
// this: r31
ENgcFileSystem::ENgcFileSystem() {
    // References
    // -> struct [anonymous] __vt__14ENgcFileSystem;
}

// Range: 0x8027A190 -> 0x8027A208
// this: r30
ENgcFileSystem::~ENgcFileSystem() {
    // References
    // -> unsigned char m_shutdownComplete;
    // -> struct [anonymous] __vt__14ENgcFileSystem;
}

// Range: 0x8027A208 -> 0x8027A2E0
// this: r30
unsigned char ENgcFileSystem::Init(enum DeviceType eDefaultType /* r31 */) {
    // Local variables
    unsigned char result; // r31
}

// Range: 0x8027A2E0 -> 0x8027A338
struct _FILE * efopen() {
    // Local variables
    class EFile * pFile; // r1+0x8

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x8027A338 -> 0x8027A36C
int efclose() {
    // Local variables
    class EFile * pFile; // r1+0x8

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x8027A36C -> 0x8027A38C
unsigned long efread(void * ptr /* r0 */) {}

// Range: 0x8027A38C -> 0x8027A3E8
int efseek() {
    // Local variables
    class EFile * pFile; // r31

    // References
    // -> static enum SeekType lutSeekType[3];
}

// Range: 0x8027A3E8 -> 0x8027A3F8
long eftell() {}

// Range: 0x8027A3F8 -> 0x8027A498
// this: r29
void ENgcFileSystem::InitResetFileList() {}

// Range: 0x8027A498 -> 0x8027A524
void ENgcFileSystem::AddFileToResetList(class EFile * pFile /* r1+0x8 */) {}

// Range: 0x8027A524 -> 0x8027A5A4
void ENgcFileSystem::DeleteFileFromResetList() {}

// Range: 0x8027A5A4 -> 0x8027A680
// this: r28
void ENgcFileSystem::ShutdownResetList() {
    // Local variables
    class EFile * * iter; // r31
    class EFile * pFile; // r1+0x8
}


