/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\ezodiac.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003B604 -> 0x8003BAF8
*/
// Range: 0x8003B604 -> 0x8003B7B4
unsigned char InitZodiac() {
    // References
    // -> static class ELocString sLocalized[12];
    // -> class EGlobal _globals;
    // -> static unsigned char sInited;
}

// Range: 0x8003B7C0 -> 0x8003B8FC
signed short ComputeZodiacSignAux() {
    // Local variables
    int i; // r8
    int best_sign; // r9
    float best_distance; // f6
    float distance; // f7
    float delta; // f3

    // References
    // -> static signed char zodiacPersonalityValues[12][5];
}

// Range: 0x8003B8FC -> 0x8003B9F0
signed short ComputeZodiacSign() {
    // Local variables
    float location[5]; // r1+0x8

    // References
    // -> static int sLocalToPersonDataMap[5];
}

// Range: 0x8003B9F0 -> 0x8003BA8C
unsigned int ComputeZodiacSignFromSimDesc() {
    // Local variables
    float location[5]; // r1+0x8
}

// Range: 0x8003BA8C -> 0x8003BAF8
unsigned short * GetZodiacName(signed short inZodiacSign /* r31 */) {
    // References
    // -> static class ELocString sLocalized[12];
    // -> static unsigned char sInited;
}


