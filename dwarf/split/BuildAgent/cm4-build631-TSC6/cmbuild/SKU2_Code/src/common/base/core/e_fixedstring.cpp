/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_fixedstring.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80261528 -> 0x8026199C
*/
// Range: 0x80261528 -> 0x8026153C
void EFixedString::Init() {}

// Range: 0x8026153C -> 0x8026157C
// this: r31
EFixedString::~EFixedString() {}

// Range: 0x8026157C -> 0x8026160C
// this: r30
class EFixedString & EFixedString::MakeCopy(const char * szSource /* r31 */) {
    // Local variables
    int len; // r0

    // References
    // -> char * _fixedStringNull;
}

// Range: 0x8026160C -> 0x802616CC
// this: r24
int EFixedString::FindNoCase(const char * szString /* r25 */) const {
    // Local variables
    int searchLen; // r0
    int last; // r29
    int i; // r28
    unsigned char match; // r27
    int j; // r26
}

// Range: 0x802616CC -> 0x802617D4
// this: r31
void EFixedString::Remove() {
    // Local variables
    char * szTemp; // r6
    char * szThis; // r9

    // References
    // -> char * _fixedStringNull;
}

// Range: 0x802617D4 -> 0x8026190C
void EFixedString::ExtractExtension(class EFixedString & ret /* r31 */) {
    // References
    // -> char * _fixedStringNull;
}

// Range: 0x8026190C -> 0x8026199C
unsigned char EFixedString::CharsEqualNoCase() {}


