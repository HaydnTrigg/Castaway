/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\EASTL\1.03.00\include\EASTL\string.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80160330 -> 0x80160748
*/
// Range: 0x80160330 -> 0x80160384
// this: r30
basic_string::~basic_string() {}

// Range: 0x80160384 -> 0x801603A0
void basic_string::DeallocateSelf() {}

// Range: 0x801603A0 -> 0x801603B4
void basic_string::DoFree() {}

// Range: 0x801603B4 -> 0x80160404
// this: r30
class basic_string & basic_string::operator=(const char * p /* r31 */) {}

// Range: 0x80160404 -> 0x80160424
unsigned long CharStrlen() {
    // Local variables
    const char * pCurrent; // r4
}

// Range: 0x80160424 -> 0x80160470
// this: r31
basic_string::basic_string() {}

// Range: 0x80160470 -> 0x80160488
void basic_string::AllocateSelf() {
    // References
    // -> unsigned int gEmptyString;
}

// Range: 0x80160488 -> 0x80160490
char * basic_string::c_str() {}

// Range: 0x80160490 -> 0x801604A0
unsigned long basic_string::length() {}

// Range: 0x801604A0 -> 0x8016054C
// this: r28
class basic_string & basic_string::assign(const char * pBegin /* r29 */, const char * pEnd /* r30 */) {
    // Local variables
    long n; // r31
}

// Range: 0x8016054C -> 0x801605C0
// this: r29
char * basic_string::erase(char * pBegin /* r30 */, char * pEnd /* r31 */) {}

// Range: 0x801605C0 -> 0x801606DC
// this: r31
class basic_string & basic_string::append(const char * pBegin /* r26 */, const char * pEnd /* r27 */) {
    // Local variables
    unsigned long n; // r30
    unsigned long nCapacity; // r5
    unsigned long nLength; // r29
    char * pNewBegin; // r28
    char * pNewEnd; // r0
}

// Range: 0x801606DC -> 0x80160728
char * CharStringUninitializedCopy(const char * pSource /* r0 */, char * pDestination /* r30 */) {}

// Range: 0x80160728 -> 0x80160734
char * basic_string::DoAllocate() {}

// Range: 0x80160734 -> 0x80160748
unsigned long basic_string::GetNewCapacity() {}


