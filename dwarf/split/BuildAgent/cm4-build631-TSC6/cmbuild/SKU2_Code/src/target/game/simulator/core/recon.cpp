/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\recon.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D5A38 -> 0x800D74F8
*/
// Range: 0x800D5A38 -> 0x800D5A70
ReconBuffer::ReconBuffer() {}

// Range: 0x800D5A70 -> 0x800D5AAC
ReconBuffer::ReconBuffer() {}

// Range: 0x800D5AAC -> 0x800D5B34
// this: r30
ReconBuffer::~ReconBuffer() {}

// Range: 0x800D5B34 -> 0x800D5B40
void ReconBuffer::EnableCompression() {}

// Range: 0x800D5B40 -> 0x800D5C64
// this: r29
void ReconBuffer::ReconCmprInt(int * value /* r30 */, class Scheme * sch /* r31 */) {
    // Local variables
    int nonZero; // r1+0x14
    int size; // r1+0x10
    int nonZero; // r1+0xC
    int size; // r1+0x8
    class Precision * p; // r31
}

// Range: 0x800D5C64 -> 0x800D5C80
void Precision::SignExtend() {}

// Range: 0x800D5C80 -> 0x800D5C88
int Precision::GetBitCount() {}

// Range: 0x800D5C88 -> 0x800D5C94
class Precision * Scheme::GetPrecision() {}

// Range: 0x800D5C94 -> 0x800D5D30
// this: r30
int Scheme::GetSize(int intVal /* r31 */) {}

// Range: 0x800D5D30 -> 0x800D5D54
unsigned char Precision::Fits() {
    // Local variables
    int tmp; // r4
}

// Range: 0x800D5D54 -> 0x800D5F70
// this: r29
void ReconBuffer::ReconBits(int bitCount /* r30 */, int * bitVal /* r31 */) {
    // Local variables
    unsigned char * dest; // r4
    unsigned int mask; // r6
    unsigned int destMask; // r7
    unsigned char * src; // r5
    unsigned int mask; // r3
    unsigned int srcMask; // r7

    // References
    // -> static struct _FILE * dumpFile;
}

// Range: 0x800D5F70 -> 0x800D5F7C
void ReconBuffer::PadBits() {}

// Range: 0x800D5F7C -> 0x800D6180
// this: r28
void ReconBuffer::Recon8(signed char * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme8;
}

// Range: 0x800D6180 -> 0x800D61D4
void ReconBuffer::ReconBool(unsigned char * value /* r31 */) {
    // Local variables
    signed char byte; // r1+0x8
}

// Range: 0x800D61D4 -> 0x800D6348
// this: r28
void ReconBuffer::Recon16(signed short * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme16;
}

// Range: 0x800D6348 -> 0x800D634C
void ReconBuffer::ReconInt() {}

// Range: 0x800D634C -> 0x800D64E0
// this: r28
void ReconBuffer::Recon32(int * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme32;
}

// Range: 0x800D64E0 -> 0x800D6674
// this: r28
void ReconBuffer::ReconFloat(float * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme32;
}

// Range: 0x800D6674 -> 0x800D676C
// this: r31
void ReconBuffer::ReconMark() {
    // Local variables
    int * lastMark; // r3
    signed char * src; // r0
    signed char * dest; // r0
    signed char * dest; // r3
    signed char * src; // r5
    signed char * dest; // r3
}

// Range: 0x800D676C -> 0x800D67B8
// this: r31
void ReconBuffer::ReadToNextMark() {}

// Range: 0x800D67B8 -> 0x800D690C
// this: r29
void ReconBuffer::ReconString(class BString & str /* r30 */) {
    // Local variables
    int index; // r31
    const char * cstr; // r4
}

// Range: 0x800D690C -> 0x800D6BB4
// this: r30
void ReconBuffer::ReconString(class BString2 & str /* r31 */) {
    // Local variables
    int index; // r28
    const char * cstr; // r4
    unsigned short * out; // r6
    unsigned char * pOffset; // r0
    unsigned char pTempValue; // r5
    unsigned short curChar; // r1+0x8
    unsigned int i; // r27
    unsigned int strLength; // r0
    unsigned short * out; // r27
}

// Range: 0x800D6BB4 -> 0x800D6CFC
// this: r29
void ReconBuffer::ReconString(class StringBuffer & str /* r30 */) {
    // Local variables
    int index; // r31
}

// Range: 0x800D6CFC -> 0x800D6F54
// this: r30
void ReconBuffer::ReconString(class StringBuffer2 & str /* r31 */) {
    // Local variables
    int index; // r27
    unsigned short * out; // r4
    int len; // r0
    int i; // r26
    unsigned short * out; // r26
}

// Range: 0x800D6F54 -> 0x800D7094
// this: r24
struct HandleNode * ReconBuilder::Compact(class ReconObject * recon /* r25 */, int version /* r26 */) {
    // Local variables
    int size; // r29
    class ReconBuffer rb; // r1+0x30
    struct HandleNode * hmem; // r28
    unsigned char * data; // r27
    class ReconBuffer rb2; // r1+0x8
}

// Range: 0x800D7094 -> 0x800D71B0
// this: r27
int ReconBuilder::Compact(class ReconObject * recon /* r28 */, int version /* r30 */, class iResFile * pFile /* r29 */, signed short id /* r31 */) {
    // Local variables
    struct HandleNode * res; // r30
    class StackString empty; // r1+0x8
    int err; // r31
}

// Range: 0x800D71B0 -> 0x800D7254
// this: r27
int ReconBuilder::Reconstitute(class ReconObject * recon /* r28 */, class iResFile * pFile /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    struct HandleNode * res; // r5
}

// Range: 0x800D7254 -> 0x800D7354
// this: r27
void ReconBuilder::Reconstitute(class ReconObject * recon /* r28 */, struct HandleNode * hmem /* r29 */, int * version /* r30 */) {
    // Local variables
    unsigned char * data; // r0
    int headerType; // r1+0x10
    unsigned int headerSwizzle; // r1+0xC
    unsigned int headerVersion; // r1+0x8
    class ReconBuffer rb; // r1+0x18
}

// Range: 0x800D7354 -> 0x800D7394
void ReconBuilder::Swizzle(void * recon /* r31 */) {
    // Local variables
    struct Header * rh; // r0
}

// Range: 0x800D7394 -> 0x800D73B8
void ReconBuilder::SwapFourByteNumber() {
    // Local variables
    unsigned char * pFakeArray; // r0
    unsigned char nBuffer; // r6
}

// Range: 0x800D73B8 -> 0x800D73F8
// this: r31
ReconObject::~ReconObject() {}

// Range: 0x800D73F8 -> 0x800D73FC
void ReconObject::DoStream() {}

// Range: 0x800D73FC -> 0x800D7408
int ReconObject::GetType() {}

// Range: 0x800D7408 -> 0x800D74C8
// this: r25
Scheme::Scheme(int bcnt0 /* r26 */, int bcnt1 /* r27 */, int bcnt2 /* r28 */, int bcnt3 /* r29 */) {}

// Range: 0x800D74DC -> 0x800D74F4
Precision::Precision() {}

// Range: 0x800D74F4 -> 0x800D74F8
Precision::Precision() {}


