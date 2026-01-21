/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\resfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8068 -> 0x800D83B4
*/
// Range: 0x800D8068 -> 0x800D8078
void iResFile::Link() {
    // References
    // -> class iResFile * sFileList;
}

// Range: 0x800D8078 -> 0x800D80A8
void iResFile::Unlink() {
    // Local variables
    class iResFile * * srch; // r5

    // References
    // -> class iResFile * sFileList;
}

// Range: 0x800D80A8 -> 0x800D80F8
// this: r31
iResFile::iResFile() {
    // References
    // -> struct [anonymous] __vt__8iResFile;
}

// Range: 0x800D80F8 -> 0x800D8158
// this: r30
iResFile::~iResFile() {
    // References
    // -> struct [anonymous] __vt__8iResFile;
}

// Range: 0x800D8158 -> 0x800D8160
int iResFile::GetError() {}

// Range: 0x800D8160 -> 0x800D8168
void iResFile::SetError() {}

// Range: 0x800D8168 -> 0x800D81E0
// this: r30
void iResFile::Release(struct HandleNode * res /* r31 */) {}

// Range: 0x800D81E0 -> 0x800D82C8
// this: r29
int iResFile::Open(const class StringBuffer & path /* r30 */, enum OpenFlags openFlags /* r31 */) {
    // Local variables
    int err; // r0
}

// Range: 0x800D82C8 -> 0x800D82FC
char iResFile::GetLanguage() {
    // Local variables
    signed short id; // r1+0x8
}

// Range: 0x800D82FC -> 0x800D836C
// this: r27
void iResFile::AddWithLanguage(struct HandleNode * theHandle /* r28 */, int rType /* r29 */, signed short rID /* r30 */, unsigned char littleEndian /* r31 */) {
    // Local variables
    class StackString empty; // r1+0x8
}

// Range: 0x800D836C -> 0x800D83B4
struct HandleNode * iResFile::GetByIDAndLanguage() {}


