/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\fileutils.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801682F4 -> 0x80168510
*/
// Range: 0x801682F4 -> 0x80168428
void SplitPath(const class StringBuffer & fullPath /* r25 */, class StringBuffer & directory /* r26 */, class StringBuffer & fileName /* r27 */, class StringBuffer & extension /* r28 */) {
    // Local variables
    int count; // r31
    int lastSepIndex; // r30
    int lastDot; // r29
}

// Range: 0x80168428 -> 0x80168490
void ExtractFileName(const class StringBuffer & path /* r30 */, class StringBuffer & name /* r31 */) {
    // Local variables
    class StackString ext; // r1+0x410
    class StackString directory; // r1+0x8
}

// Range: 0x80168490 -> 0x80168510
void ExtractExtension(const class StringBuffer & path /* r29 */, class StringBuffer & nameOnly /* r30 */, class StringBuffer & ext /* r31 */) {
    // Local variables
    class StackString directory; // r1+0x410
    class StackString name; // r1+0x8
}


