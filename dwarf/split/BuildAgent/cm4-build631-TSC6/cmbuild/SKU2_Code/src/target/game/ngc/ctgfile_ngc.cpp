/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ngc\ctgfile_ngc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A088C -> 0x800A0F28
*/
// Range: 0x800A088C -> 0x800A08CC
// this: r31
CTGFile::~CTGFile() {}

// Range: 0x800A08CC -> 0x800A0918
// this: r31
CTGFileImpl::CTGFileImpl() {
    // References
    // -> struct [anonymous] __vt__11CTGFileImpl;
}

// Range: 0x800A0918 -> 0x800A09B0
// this: r30
CTGFileImpl::~CTGFileImpl() {
    // References
    // -> struct [anonymous] __vt__11CTGFileImpl;
}

// Range: 0x800A09B0 -> 0x800A0A24
// this: r29
int CTGFileImpl::GetSize() {
    // Local variables
    int oldPos; // r31
    int size; // r30
}

// Range: 0x800A0A24 -> 0x800A0A2C
unsigned char CTGFileImpl::IsWritable() {}

// Range: 0x800A0A2C -> 0x800A0A4C
int CTGFileImpl::Read() {}

// Range: 0x800A0A4C -> 0x800A0A54
int CTGFileImpl::Write() {}

// Range: 0x800A0A54 -> 0x800A0A80
unsigned char CTGFileImpl::Seek() {}

// Range: 0x800A0A80 -> 0x800A0A98
int CTGFileImpl::Tell() {}

// Range: 0x800A0A98 -> 0x800A0AA0
unsigned char CTGFileImpl::SetSize() {}

// Range: 0x800A0AA0 -> 0x800A0AA8
unsigned char CTGFileImpl::Flush() {}

// Range: 0x800A0AA8 -> 0x800A0AB0
unsigned char CTGFileImpl::FlushCache() {}

// Range: 0x800A0AB0 -> 0x800A0AE8
unsigned char CTGFileImpl::ReadBytes() {}

// Range: 0x800A0AE8 -> 0x800A0B2C
unsigned char CTGFileImpl::WriteBytes(int n /* r31 */) {
    // Local variables
    int bytes; // r0
}

// Range: 0x800A0B2C -> 0x800A0B40
unsigned char CTGFileImpl::ReadByte() {}

// Range: 0x800A0B40 -> 0x800A0B78
unsigned char CTGFileImpl::WriteByte(unsigned char b /* r1+0x8 */) {}

// Range: 0x800A0B78 -> 0x800A0B8C
unsigned char CTGFileImpl::ReadInteger() {}

// Range: 0x800A0B8C -> 0x800A0BC4
unsigned char CTGFileImpl::WriteInteger(int i /* r1+0x8 */) {}

// Range: 0x800A0BC4 -> 0x800A0BD8
unsigned char CTGFileImpl::ReadFloat() {}

// Range: 0x800A0BD8 -> 0x800A0C10
unsigned char CTGFileImpl::WriteFloat(float f /* r1+0x8 */) {}

// Range: 0x800A0C10 -> 0x800A0CD0
// this: r30
unsigned char CTGFileImpl::ReadString(char * buf /* r31 */) {
    // Local variables
    unsigned char bytelen; // r1+0x8
    int len; // r1+0xC
    unsigned char good; // r0
}

// Range: 0x800A0CD0 -> 0x800A0DB4
// this: r29
unsigned char CTGFileImpl::WriteString(const char * buf /* r30 */) {
    // Local variables
    int len; // r31
    unsigned char good; // r0
}

// Range: 0x800A0DB4 -> 0x800A0DB8
CTGFileManager::CTGFileManager() {}

// Range: 0x800A0DB8 -> 0x800A0DF8
// this: r31
CTGFileManager::~CTGFileManager() {}

// Range: 0x800A0DF8 -> 0x800A0EA0
class CTGFile * CTGFileManager::OpenFile(const char * name /* r31 */, unsigned char bWritable /* r30 */) {
    // Local variables
    class StackString sName; // r1+0x8
    struct _FILE * pFile; // r0
}

// Range: 0x800A0EA0 -> 0x800A0EC4
void CTGFileManager::ReleaseFile() {}

// Range: 0x800A0EC4 -> 0x800A0ECC
unsigned char CTGFileManager::CreateFile() {}

// Range: 0x800A0ECC -> 0x800A0ED4
unsigned char CTGFileManager::DeleteFile() {}

// Range: 0x800A0ED4 -> 0x800A0F20
unsigned char CTGFileManager::FileExists() {
    // Local variables
    struct _FILE * pFile; // r31
}

// Range: 0x800A0F20 -> 0x800A0F28
char * CTGFileImpl::GetName() {}


