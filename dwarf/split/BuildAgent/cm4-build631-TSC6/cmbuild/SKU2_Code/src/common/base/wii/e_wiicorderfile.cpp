/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\wii\e_wiicorderfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80279A70 -> 0x80279DA0
*/
// Range: 0x80279A70 -> 0x80279ACC
// this: r30
EWiicorderFile::~EWiicorderFile() {}

// Range: 0x80279ACC -> 0x80279BE4
class EFile * EWiicorderFile::Creator(class EFile * pFile /* r29 */, const char * fileName /* r30 */) {
    // Local variables
    class EWiicorderFile * wiiFile; // r0
    char * localPath; // r6
    char OpenCommand[512]; // r1+0x8

    // References
    // -> int m_channelCounter;
    // -> struct [anonymous] __vt__14EWiicorderFile;
    // -> static unsigned char firstFile;
}

// Range: 0x80279BE4 -> 0x80279C04
void EWiicorderFile::Destroy() {}

// Range: 0x80279C04 -> 0x80279CF8
// this: r25
unsigned long EWiicorderFile::Write(unsigned long nSize /* r26 */) {
    // Local variables
    unsigned long sizeleft; // r29
    char * pStringleft; // r28
    char WriteCommand[1024]; // r1+0x8
    int len; // r27
}

// Range: 0x80279CF8 -> 0x80279D28
unsigned long EWiicorderFile::Read() {}

// Range: 0x80279D28 -> 0x80279D58
unsigned long EWiicorderFile::Seek() {}

// Range: 0x80279D58 -> 0x80279D88
unsigned long EWiicorderFile::Tell() {}

// Range: 0x80279D88 -> 0x80279D90
unsigned char EWiicorderFile::Flush() {}

// Range: 0x80279D90 -> 0x80279D98
enum ErrorCode EWiicorderFile::GetLastError() {}

// Range: 0x80279D98 -> 0x80279DA0
void * EWiicorderFile::GetSystemHandle() {}


