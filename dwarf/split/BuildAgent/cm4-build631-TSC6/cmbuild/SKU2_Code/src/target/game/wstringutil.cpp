/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\wstringutil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80244238 -> 0x802449D8
*/
// Range: 0x80244238 -> 0x80244494
unsigned char SubstituteString(const unsigned short * searchString /* r23 */, const unsigned short * substring /* r24 */, class StackString2 & outBuff /* r25 */) {
    // Local variables
    class StackString2 buff; // r1+0x8
    int formatLen; // r0
    int searchLen; // r0
    unsigned short lbrack; // r28
    unsigned short rbrack; // r29
    unsigned short ncmp; // r27
    unsigned char done; // r26

    // References
    // -> class BString2 _sRbrack;
    // -> class BString2 _sLbrack;
}

// Range: 0x80244494 -> 0x802446F0
void GetTimeString(int hours /* r25 */, int mins /* r28 */, class StackString2 & outStr /* r30 */) {
    // Local variables
    class StackString2 szTimeFormat; // r1+0x218
    unsigned char b24HrTime; // r26
    unsigned char usePM; // r31

    // References
    // -> class BString2 _sColon;
    // -> class BString2 _sHours24Lookup;
    // -> class BString2 _sHoursLookup;
    // -> class BString2 _sMinLookup;
    // -> unsigned short __floatstrbuff[32];
    // -> class BString2 _sAM_PMLookup;
    // -> class EGlobal _globals;
}

// Range: 0x802446F0 -> 0x802449D8
void GetMoneyString(class StackString2 & outStr /* r30 */) {
    // Local variables
    unsigned char bNegative; // r31
    const unsigned short * pRawString; // r28
    int thou; // r27
    int hund; // r26
    class StackString2 tempStr; // r1+0x60
    unsigned short negStr[32]; // r1+0x20

    // References
    // -> class BString2 _s100s;
    // -> class BString2 _s1000s;
    // -> unsigned short __floatstrbuff[32];
    // -> class EGlobal _globals;
}


