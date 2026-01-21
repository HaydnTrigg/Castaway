/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_bitarray2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096A04 -> 0x80096C68
*/
// Range: 0x80096A04 -> 0x80096AA4
class EStream & operator<<(class EStream & s /* r29 */, const class BitArray2D & d /* r30 */) {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x80096AA4 -> 0x80096B64
class EStream & operator>>(class EStream & s /* r29 */, class BitArray2D & d /* r30 */) {
    // Local variables
    unsigned short version; // r1+0xC
    unsigned char xOffset; // r1+0xB
    unsigned char yOffset; // r1+0xA
    unsigned char xSize; // r1+0x9
    unsigned char ySize; // r1+0x8
    unsigned int i; // r31
}

// Range: 0x80096B64 -> 0x80096C68
class EFile & operator>>(class EFile & s /* r30 */, class BitArray2D & d /* r31 */) {
    // Local variables
    unsigned short version; // r1+0xC
    unsigned char xOffset; // r1+0xB
    unsigned char yOffset; // r1+0xA
    unsigned char xSize; // r1+0x9
    unsigned char ySize; // r1+0x8
}


