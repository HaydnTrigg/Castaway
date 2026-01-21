/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\quickresfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D572C -> 0x800D5A38
*/
// Range: 0x800D572C -> 0x800D5768
// this: r31
QuickResFile::QuickResFile() {
    // References
    // -> struct [anonymous] __vt__12QuickResFile;
}

// Range: 0x800D5768 -> 0x800D57DC
// this: r30
QuickResFile::~QuickResFile() {
    // References
    // -> struct [anonymous] __vt__12QuickResFile;
}

// Range: 0x800D57DC -> 0x800D57E4
int QuickResFile::Create() {}

// Range: 0x800D57E4 -> 0x800D57EC
int QuickResFile::Delete() {}

// Range: 0x800D57EC -> 0x800D5824
// this: r31
int QuickResFile::Open() {}

// Range: 0x800D5824 -> 0x800D582C
int QuickResFile::CloseForReopen() {}

// Range: 0x800D582C -> 0x800D5834
int QuickResFile::Reopen() {}

// Range: 0x800D5834 -> 0x800D583C
int QuickResFile::Close() {}

// Range: 0x800D583C -> 0x800D5840
void QuickResFile::Update() {}

// Range: 0x800D5840 -> 0x800D5848
unsigned char QuickResFile::Writable() {}

// Range: 0x800D5848 -> 0x800D58BC
// this: r30
void QuickResFile::GetFileName(class StringBuffer & name /* r31 */) {
    // Local variables
    class ERQuickdata * db; // r0
    const char * rowName; // r4
}

// Range: 0x800D58BC -> 0x800D58D0
unsigned char QuickResFile::ValidFile() {}

// Range: 0x800D58D0 -> 0x800D58D8
signed short QuickResFile::CountTypes() {}

// Range: 0x800D58D8 -> 0x800D58E0
int QuickResFile::GetIndType() {}

// Range: 0x800D58E0 -> 0x800D58E8
signed short QuickResFile::Count() {}

// Range: 0x800D58E8 -> 0x800D58F0
struct HandleNode * QuickResFile::GetByID() {}

// Range: 0x800D58F0 -> 0x800D58F8
struct HandleNode * QuickResFile::GetByName() {}

// Range: 0x800D58F8 -> 0x800D5900
struct HandleNode * QuickResFile::GetByIndex() {}

// Range: 0x800D5900 -> 0x800D5908
struct HandleNode * QuickResFile::GetByIDAndLanguage() {}

// Range: 0x800D5908 -> 0x800D5910
void QuickResFile::GetName() {}

// Range: 0x800D5910 -> 0x800D5918
int QuickResFile::GetResType() {}

// Range: 0x800D5918 -> 0x800D5924
void QuickResFile::GetID() {}

// Range: 0x800D5924 -> 0x800D5930
void QuickResFile::GetIndex() {}

// Range: 0x800D5930 -> 0x800D5938
char QuickResFile::GetLanguage() {}

// Range: 0x800D5938 -> 0x800D5940
void QuickResFile::FindUniqueName() {}

// Range: 0x800D5940 -> 0x800D5948
signed short QuickResFile::FindUniqueID() {}

// Range: 0x800D5948 -> 0x800D594C
void QuickResFile::Detach() {}

// Range: 0x800D594C -> 0x800D5950
void QuickResFile::Load() {}

// Range: 0x800D5950 -> 0x800D5958
unsigned char QuickResFile::IsLittleEndian() {}

// Range: 0x800D5958 -> 0x800D595C
void QuickResFile::SetID() {}

// Range: 0x800D595C -> 0x800D5960
void QuickResFile::Add() {}

// Range: 0x800D5960 -> 0x800D5964
void QuickResFile::AddWithLanguage() {}

// Range: 0x800D5964 -> 0x800D5968
void QuickResFile::Write() {}

// Range: 0x800D5968 -> 0x800D596C
void QuickResFile::Remove() {}

// Range: 0x800D596C -> 0x800D5970
void QuickResFile::SetInfo() {}

// Range: 0x800D5970 -> 0x800D5A38
// this: r31
void QuickResFile::GetString(class StringBuffer & str /* r28 */, signed short resID /* r29 */, signed short index /* r30 */) {
    // Local variables
    const struct AStringSet * pStringSet; // r31
    const char * ptr; // r4
}


