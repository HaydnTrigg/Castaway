/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_file.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80260274 -> 0x802609B8
*/
// Range: 0x80260274 -> 0x802602B4
EFile::EFile() {
    // References
    // -> struct [anonymous] __vt__5EFile;
}

// Range: 0x802602B4 -> 0x80260338
// this: r30
EFile::~EFile() {
    // References
    // -> struct [anonymous] __vt__5EFile;
}

// Range: 0x80260338 -> 0x80260524
void SplitPath(const char * path /* r27 */, char * drive /* r24 */, char * dir /* r28 */, char * fname /* r29 */, char * ext /* r30 */) {
    // Local variables
    char * p; // r25
    char * last_slash; // r24
    char * dot; // r31
    unsigned int len; // r0
}

// Range: 0x80260524 -> 0x80260650
// this: r30
void EFile::SetName() {
    // Local variables
    char drive[3]; // r1+0x8
    char path[256]; // r1+0x210
    char name[256]; // r1+0x110
    char ext[256]; // r1+0x10
    unsigned long extLen; // r0
}

// Range: 0x80260650 -> 0x802607D8
// this: r27
class EStorable * EFile::ReadStructure(unsigned int nObjects /* r28 */) {
    // Local variables
    unsigned int pos; // r29
    unsigned int key; // r1+0x14
    class ETypeInfo * pType; // r0
    unsigned short typeVersion; // r1+0xA
    int nCount; // r1+0x10
    unsigned int cObject; // r29
    unsigned char validate; // r1+0x8
    int root; // r1+0xC
    class EStorable * pRoot; // r29
}

// Range: 0x802607D8 -> 0x80260880
class EFile & operator>>(class EFile & f /* r27 */, class EString & s /* r28 */) {
    // Local variables
    char buffer[64]; // r1+0x8
    int pos; // r29
}

// Range: 0x80260880 -> 0x80260920
class EFile & operator>>(class EFile & s /* r29 */, class EStorable & d /* r30 */) {
    // Local variables
    class ETypeInfo * pType; // r31
    unsigned short typeVersion; // r1+0x8
}

// Range: 0x80260920 -> 0x802609B8
class EFile & operator>>(class EFile & s /* r30 */, class EStorable * & pD /* r31 */) {
    // Local variables
    unsigned int index; // r1+0x8
}


