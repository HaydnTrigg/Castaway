/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\memfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801686F4 -> 0x80168FC0
*/
// Range: 0x801686F4 -> 0x80168840
// this: r28
int MemFile::WriteBlock(void * src_buffer /* r29 */, int * blockSize /* r30 */) {
    // Local variables
    int result; // r31
    unsigned int newFilePos; // r3
    void * newBuffer; // r26
}

// Range: 0x80168840 -> 0x80168894
// this: r30
int MemFile::GetFileSize(int * filesize /* r31 */) {}

// Range: 0x80168894 -> 0x80168918
// this: r29
int MemFile::SetFileSize(int filesize /* r30 */) {
    // Local variables
    int result; // r31
}

// Range: 0x80168918 -> 0x801689B0
int MemFile::Create(const class StringBuffer & name /* r30 */) {}

// Range: 0x801689B0 -> 0x80168A48
int MemFile::Delete(const class StringBuffer & name /* r30 */) {}

// Range: 0x80168A48 -> 0x80168AA0
// this: r31
MemFile::MemFile() {
    // References
    // -> struct [anonymous] __vt__7MemFile;
}

// Range: 0x80168AA0 -> 0x80168B0C
// this: r30
MemFile::~MemFile() {
    // References
    // -> struct [anonymous] __vt__7MemFile;
}

// Range: 0x80168B0C -> 0x80168C3C
// this: r28
int MemFile::Open(const class StringBuffer & name /* r29 */) {
    // Local variables
    class CTGFile * file; // r30
}

// Range: 0x80168C3C -> 0x80168CC0
// this: r30
int MemFile::Close() {
    // Local variables
    int result; // r31
}

// Range: 0x80168CC0 -> 0x80168D80
// this: r28
int MemFile::ReadBlock(void * dest_buffer /* r29 */, int * blockSize /* r30 */) {
    // Local variables
    int result; // r31
    int maxBytes; // r3
}

// Range: 0x80168D80 -> 0x80168DE0
// this: r30
int MemFile::SetPos(int fromStart /* r31 */) {}

// Range: 0x80168DE0 -> 0x80168DF4
unsigned char MemFile::ValidFile() {}

// Range: 0x80168DF4 -> 0x80168F14
// this: r29
int MemFile::Flush() {
    // Local variables
    class CTGFile * file; // r30
}

// Range: 0x80168F14 -> 0x80168F78
// this: r30
int MemFile::GetFileName(class StringBuffer & name /* r31 */) {}

// Range: 0x80168F78 -> 0x80168FC0
// this: r30
void MemFile::SetFileName(const class StringBuffer & name /* r31 */) {}


