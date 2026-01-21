/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\newarray2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012D0EC -> 0x8012DC34
*/
// Range: 0x8012D0EC -> 0x8012D124
void * _Default2dArrayAlloc(unsigned int size /* r31 */) {}

// Range: 0x8012D124 -> 0x8012D158
void _Default2dArrayFree(void * p /* r31 */) {}

// Range: 0x8012D158 -> 0x8012D284
// this: r25
int _c2DArray::ReadFromDisk(class iResFile * pFile /* r26 */) {
    // Local variables
    struct HandleNode * tmphandle; // r30
    unsigned char * data; // r29
    signed short * header; // r0
    signed short xsize; // r28
    signed short ysize; // r27
    void * dataStart; // r4
    unsigned int dataSize; // r5
    int size; // r0
    class ReconBuffer rb; // r1+0x8

    // References
    // -> static void (* sCurEntrySwizzle)(void *, int);
}

// Range: 0x8012D284 -> 0x8012D288
void _c2DArray::Swizzle() {}

// Range: 0x8012D288 -> 0x8012D31C
// this: r27
_c2DArray::_c2DArray(int entrySize /* r28 */, int xSize /* r29 */, int ySize /* r30 */, const class BString & name /* r31 */) {}

// Range: 0x8012D31C -> 0x8012D3C0
// this: r29
_c2DArray::~_c2DArray() {}

// Range: 0x8012D3C0 -> 0x8012D3D0
void _c2DArray::AddArray() {
    // References
    // -> class _c2DArray * sArrayList;
}

// Range: 0x8012D3D0 -> 0x8012D400
void _c2DArray::RemoveArray() {
    // Local variables
    class _c2DArray * * srch; // r4

    // References
    // -> class _c2DArray * sArrayList;
}

// Range: 0x8012D400 -> 0x8012D554
// this: r25
int _c2DArray::WriteToDisk(class iResFile * pFile /* r26 */, int rType /* r27 */, signed short id /* r28 */, unsigned char enableCompression /* r29 */) {
    // Local variables
    int size; // r31
    struct HandleNode * h; // r30
    unsigned char * data; // r0
    class ReconBuffer rb2; // r1+0x8
    class StackString resName; // r1+0x30
    int err; // r31
}

// Range: 0x8012D554 -> 0x8012D590
void _c2DArray::ClearBytes() {}

// Range: 0x8012D590 -> 0x8012D6E0
// this: r31
unsigned char _c2DArray::SetSize(int newxSize /* r28 */, int newySize /* r29 */) {
    // Local variables
    int dataSize; // r30
    int count; // r6
}

// Range: 0x8012D6E0 -> 0x8012DAA4
// this: r28
void _c2DArray::DoStream(class ReconBuffer * r /* r27 */, unsigned char compressionEnabledForWriting /* r25 */) {
    // Local variables
    signed short placeHolder; // r1+0x10
    signed short version; // r1+0xE
    int xSize; // r1+0x1C
    int ySize; // r1+0x18
    int compressed; // r1+0x14
    signed char * current; // r30
    signed char * end; // r29
    signed char * test; // r5
    int repCnt; // [invalid]
    int size; // r31
    unsigned char isRepeatRun; // r25
    signed short token; // r1+0xC
    signed char dummy; // r1+0x9
    signed short token; // r1+0xA
    unsigned short size; // r28
    int i; // r3
    signed char dummy; // r1+0x8
}

// Range: 0x8012DAA4 -> 0x8012DB04
void _c2DArray::CopyFrom() {
    // Local variables
    int howmuch; // r5
}

// Range: 0x8012DB04 -> 0x8012DB68
class _c2DArray * _c2DArray::GetArray(const class BString & name /* r30 */) {
    // Local variables
    class _c2DArray * srch; // r31

    // References
    // -> class _c2DArray * sArrayList;
}

// Range: 0x8012DB68 -> 0x8012DC34
// this: r28
void _c2DArray::SetName(const class BString & name /* r29 */) {
    // Local variables
    int cnt; // r31
    unsigned char found; // r30
    char appendedName[512]; // r1+0x8
}


