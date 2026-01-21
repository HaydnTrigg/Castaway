/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_dataheader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025FFB4 -> 0x80260274
*/
// Range: 0x8025FFB4 -> 0x8025FFEC
// this: r31
EDataHeader::EDataHeader() {}

// Range: 0x8025FFEC -> 0x80260040
// this: r30
EDataHeader::~EDataHeader() {}

// Range: 0x80260040 -> 0x80260098
// this: r30
void EDataHeader::Clear() {}

// Range: 0x80260098 -> 0x8026026C
// this: r22
unsigned char EDataHeader::Read(class EFile & f /* r23 */, unsigned int signature /* r24 */, unsigned int minVersion /* r25 */, unsigned int maxVersion /* r26 */) {
    // Local variables
    unsigned int pos; // r29
    int retryCnt; // r28
    unsigned int data[4]; // r1+0x8
    int nameLength; // r27
}

// Range: 0x8026026C -> 0x80260274
char * EDataHeader::GetName() {}


