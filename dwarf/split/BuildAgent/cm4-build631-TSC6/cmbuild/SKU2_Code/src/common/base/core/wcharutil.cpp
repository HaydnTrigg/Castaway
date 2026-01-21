/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\wcharutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802750A8 -> 0x80275440
*/
// Range: 0x802750A8 -> 0x802750CC
unsigned long ewcslen() {
    // Local variables
    unsigned long result; // r4
}

// Range: 0x802750CC -> 0x802750FC
int ewcscmp() {
    // Local variables
    int diff; // r6
}

// Range: 0x802750FC -> 0x8027512C
unsigned short * ewcscpy(unsigned short * out /* r5 */) {
    // Local variables
    unsigned short * result; // r3
}

// Range: 0x8027512C -> 0x802751BC
unsigned short * ewcsncpy() {
    // Local variables
    unsigned short * result; // r6
}

// Range: 0x802751BC -> 0x802751FC
int ewcsncmp() {
    // Local variables
    int diff; // r7
    int i; // r8
}

// Range: 0x802751FC -> 0x80275228
unsigned short * ewcschr() {}

// Range: 0x80275228 -> 0x802752E4
unsigned short * ewcsstr() {
    // Local variables
    unsigned int iPatternLen; // r0
    unsigned short a; // r11
    const unsigned short * ptr; // r3
}

// Range: 0x802752E4 -> 0x80275340
unsigned short * ewcscat(unsigned short * out /* r7 */) {
    // Local variables
    const unsigned short * result; // r6
}

// Range: 0x80275340 -> 0x802753BC
unsigned long IntToWString(unsigned short * outBuff /* r30 */, unsigned long outBuffSize /* r31 */) {
    // Local variables
    char szTempBuff[32]; // r1+0x8
}

// Range: 0x802753BC -> 0x80275400
unsigned long CopyCharStrToWString() {
    // Local variables
    unsigned short * pOut; // r4
    const char * pIn; // r3
    unsigned long i; // r7
}

// Range: 0x80275400 -> 0x80275440
unsigned long CopyWStringToCharStr() {
    // Local variables
    unsigned long i; // r6
}


