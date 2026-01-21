/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\newarray2d.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005DFF8 -> 0x8005E058
*/
// Range: 0x8005DFF8 -> 0x8005E058
// this: r29
unsigned char & cArray::operator()(const class CTilePt & in /* r30 */) {}


// Range: 0x800CF0C4 -> 0x800CF134
// this: r29
cArray::cArray(int xSize /* r30 */, int ySize /* r31 */) {}

// Range: 0x800CF18C -> 0x800CF1D0
// this: r31
c2DArray::c2DArray(int ySize /* r0 */) {}

// Range: 0x800CF1D0 -> 0x800CF210
// this: r31
cArrayRow::~cArrayRow() {}

// Range: 0x800CF254 -> 0x800CF264
class TileWallStorage & cArrayRow::operator[]() {}

// Range: 0x800CF264 -> 0x800CF274
class cArrayRow cArray::operator[]() {}

// Range: 0x800CF274 -> 0x800CF27C
cArrayRow::cArrayRow() {}

// Range: 0x800CF27C -> 0x800CF2BC
// this: r31
cArrayRow::~cArrayRow() {}

// Range: 0x800CF2BC -> 0x800CF2C8
unsigned char & cArrayRow::operator[]() {}

// Range: 0x800CF2C8 -> 0x800CF2D8
class cArrayRow cArray::operator[]() {}

// Range: 0x800CF2D8 -> 0x800CF2E0
cArrayRow::cArrayRow() {}

// Range: 0x800CF2E0 -> 0x800CF350
// this: r29
cArray::cArray(int xSize /* r30 */, int ySize /* r31 */) {}

// Range: 0x800CF350 -> 0x800CF394
// this: r31
c2DArray::c2DArray(int ySize /* r0 */) {}

// Range: 0x800CF394 -> 0x800CF404
// this: r29
cArray::cArray(int xSize /* r30 */, int ySize /* r31 */) {}

// Range: 0x800CF45C -> 0x800CF4A0
// this: r31
c2DArray::c2DArray(int ySize /* r0 */) {}

// Range: 0x800CF4A0 -> 0x800CF4A8
int _c2DArray::GetYSize() {}

// Range: 0x800CF4A8 -> 0x800CF4B0
int _c2DArray::GetXSize() {}

// Range: 0x800CF4B0 -> 0x800CF510
// this: r29
unsigned short & cArray::operator()(const class CTilePt & in /* r30 */) {}

// Range: 0x800CF510 -> 0x800CF570
// this: r29
class TileWallStorage & cArray::operator()(const class CTilePt & in /* r30 */) {}

// Range: 0x800CF570 -> 0x800CF5B0
// this: r31
cArrayRow::~cArrayRow() {}

// Range: 0x800CF5B0 -> 0x800CF5C0
unsigned short & cArrayRow::operator[]() {}

// Range: 0x800CF5C0 -> 0x800CF5D0
class cArrayRow cArray::operator[]() {}

// Range: 0x800CF5D0 -> 0x800CF5D8
cArrayRow::cArrayRow() {}

// Range: 0x800CF5D8 -> 0x800CF684
// this: r26
void cArray::AndAll(const unsigned char & inVal /* r27 */) {
    // Local variables
    int xSize; // r0
    int ySize; // r0
    int y; // r29
    int x; // r28
}

// Range: 0x800CF684 -> 0x800CF76C
void c2DArray::Clear() {
    // Local variables
    unsigned short * spot; // r8
    int cnt; // r9
}

// Range: 0x800CF76C -> 0x800CF980
// this: r23
void cArray::DoOffset(const class CTilePt & delta /* r24 */, const class TileWallStorage & init /* r25 */) {
    // Local variables
    class cArray * temp; // r27
    int xSize; // r0
    int ySize; // r0
    int x; // r28
    int y; // r26
    int new_x; // r31
    int new_y; // r5
    int new_x; // r26
    int new_y; // r0
}

// Range: 0x800CF980 -> 0x800CFA80
// this: r25
class cArray * cArray::Clone() {
    // Local variables
    int xSize; // r29
    int ySize; // r28
    int y; // r27
    int x; // r26
}

// Range: 0x800CFA80 -> 0x800CFC90
// this: r29
void cArray::DoOffset(const class CTilePt & delta /* r30 */, const unsigned short & init /* r31 */) {
    // Local variables
    class cArray * temp; // r23
    int xSize; // r0
    int ySize; // r0
    int x; // r24
    int y; // r25
    int new_x; // r28
    int new_y; // r5
    int new_x; // r28
    int new_y; // r0
}

// Range: 0x800CFC90 -> 0x800CFD8C
// this: r25
class cArray * cArray::Clone() {
    // Local variables
    int xSize; // r29
    int ySize; // r28
    int y; // r27
    int x; // r26
}

// Range: 0x800CFD8C -> 0x800CFF9C
// this: r29
void cArray::DoOffset(const class CTilePt & delta /* r30 */, const unsigned char & init /* r31 */) {
    // Local variables
    class cArray * temp; // r23
    int xSize; // r0
    int ySize; // r0
    int x; // r24
    int y; // r25
    int new_x; // r28
    int new_y; // r5
    int new_x; // r28
    int new_y; // r0
}

// Range: 0x800CFF9C -> 0x800D0098
// this: r25
class cArray * cArray::Clone() {
    // Local variables
    int xSize; // r29
    int ySize; // r28
    int y; // r27
    int x; // r26
}


// Range: 0x80123808 -> 0x80123810
void (* _c2DArray::GetFreeFn())(void *) {
    // References
    // -> void (* m_pfnFree)(void *);
}

// Range: 0x80123810 -> 0x80123818
void * (* _c2DArray::GetAllocFn())(unsigned int) {
    // References
    // -> void * (* m_pfnAlloc)(unsigned int);
}


