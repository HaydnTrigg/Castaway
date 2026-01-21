/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\seqresfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD57C -> 0x800DDFD8
*/
// Range: 0x800DD57C -> 0x800DD694
static unsigned char TryCatExtension(class StackString & origPath /* r30 */, struct OpenSpec * openSpec /* r31 */) {
    // Local variables
    class StackString myExt; // r1+0xC20
    class StackString ext; // r1+0x818
    class StackString barePath; // r1+0x410
    class StackString bareName; // r1+0x8
}

// Range: 0x800DD694 -> 0x800DD75C
// this: r28
SeqResFile::~SeqResFile() {
    // Local variables
    int count; // r31
    class iResFile * del; // r30

    // References
    // -> struct [anonymous] __vt__10SeqResFile;
}

// Range: 0x800DD75C -> 0x800DD85C
// this: r25
int SeqResFile::CreateIResFile(class iResFile * resFile /* r26 */, const class StringBuffer & inName /* r31 */, int ct /* r29 */, int & createCnt /* r27 */, class StackString * * createdStr /* r28 */) {
    // Local variables
    int lastErr; // r30
    class StackString name; // r1+0x8
    int temErr; // r29
}

// Range: 0x800DD85C -> 0x800DD990
// this: r26
int SeqResFile::OpenIResFile(class iResFile * resFile /* r27 */, const class StringBuffer & inName /* r31 */, int ct /* r29 */, unsigned char & success /* r28 */) {
    // Local variables
    int lastErr; // r30
    class StackString name; // r1+0x8
    int temErr; // r29
}

// Range: 0x800DD990 -> 0x800DDA60
// this: r27
int SeqResFile::DeleteIResFile(class iResFile * resFile /* r28 */, const class StringBuffer & inName /* r29 */, int ct /* r30 */) {
    // Local variables
    int lastErr; // r31
    class StackString name; // r1+0x8
    int temErr; // r30
}

// Range: 0x800DDA60 -> 0x800DDC10
// this: r23
int SeqResFile::Create(const class StringBuffer & inName /* r24 */) {
    // Local variables
    int lastErr; // r28
    class StackString created[8]; // r1+0x38
    int createCnt; // r1+0x8
    int ct; // r27
    unsigned char extCreated; // r26
    int t; // r25
    class StackString ext; // r1+0x10
    class iResFile * temFile; // r4
}

// Range: 0x800DDC54 -> 0x800DDD44
// this: r28
int SeqResFile::Delete(const class StringBuffer & inName /* r29 */) {
    // Local variables
    int lastErr; // r3
    int ct; // r30
    class iResFile * temFile; // r4
}

// Range: 0x800DDD44 -> 0x800DDEB8
// this: r22
int SeqResFile::Open(const class StringBuffer & inName /* r23 */) {
    // Local variables
    int lastErr; // r26
    unsigned char success; // r1+0x8
    int ct; // r25
    class iResFile * temFile; // r24
}

// Range: 0x800DDEB8 -> 0x800DDF4C
// this: r29
int SeqResFile::Close() {
    // Local variables
    int err; // r31
    class iResFile * del; // r30
}

// Range: 0x800DDF4C -> 0x800DDFD8
// this: r30
void SeqResFile::GetFileName(class StringBuffer & name /* r31 */) {
    // Local variables
    class StackString fullName; // r1+0x410
    class StackString ext; // r1+0x8
}


