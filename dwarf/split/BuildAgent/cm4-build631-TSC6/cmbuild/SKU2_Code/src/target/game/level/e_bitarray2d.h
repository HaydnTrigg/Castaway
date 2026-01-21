/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_bitarray2d.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80095AF4 -> 0x80095CC8
*/
// Range: 0x80095AF4 -> 0x80095B48
// this: r30
BitArray2D::~BitArray2D() {}

// Range: 0x80095B48 -> 0x80095B94
// this: r31
void BitArray2D::Deallocate() {}

// Range: 0x80095B94 -> 0x80095BB8
void BitArray2D::Initialize() {}

// Range: 0x80095BB8 -> 0x80095BE8
// this: r31
BitArray2D::BitArray2D() {}

// Range: 0x80095BE8 -> 0x80095C3C
// this: r29
void BitArray2D::ResizeSize(unsigned char xSize /* r30 */, unsigned char ySize /* r31 */) {}

// Range: 0x80095C3C -> 0x80095CBC
// this: r31
void BitArray2D::Allocate() {
    // Local variables
    unsigned int i; // r5
}

// Range: 0x80095CBC -> 0x80095CC8
void BitArray2D::SetOffsets() {}


// Range: 0x800EB5B4 -> 0x800EB670
// this: r29
unsigned char BitArray2D::Get(unsigned char x /* r30 */, unsigned char y /* r31 */) const {
    // Local variables
    unsigned int byteIndex; // r1+0xC
    unsigned char bitMask; // r1+0x8
}

// Range: 0x800EB670 -> 0x800EB6AC
void BitArray2D::IndexAndMask(unsigned char y /* r5 */) {}

// Range: 0x800EB6AC -> 0x800EB6C0
unsigned char BitArray2D::GetYSize() {}

// Range: 0x800EB6C0 -> 0x800EB6D4
unsigned char BitArray2D::GetXSize() {}


