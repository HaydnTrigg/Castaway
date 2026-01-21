/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_ranim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D6C44 -> 0x802D7F50
*/
// Range: 0x802D6C44 -> 0x802D6D70
// this: r29
ERAnim::ERAnim() {
    // References
    // -> unsigned long m_allocatedAnims;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
    // -> struct [anonymous] __vt__6ERAnim;
}

// Range: 0x802D6D70 -> 0x802D6F84
// this: r30
ERAnim::~ERAnim() {
    // References
    // -> class EAnimManager _animman;
    // -> struct [anonymous] __vt__9EBitArray;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
    // -> class ESoundEventManager g_soundeventman;
    // -> unsigned long m_allocatedAnims;
    // -> static unsigned int exceptionTable[2];
    // -> struct [anonymous] __vt__6ERAnim;
}

// Range: 0x802D6F84 -> 0x802D70C4
unsigned int CopyERAnimNodeArray(class TArray & array /* r27 */, char * buff /* r28 */) {
    // Local variables
    unsigned int size; // r1+0x8
    char * start; // r30
    int i; // r29
}

// Range: 0x802D70C4 -> 0x802D7784
// this: r30
void ERAnim::LoadFromFile(class EFile * s /* r31 */, unsigned int version /* r25 */) {}

// Range: 0x802D7784 -> 0x802D7970
// this: r26
void ERAnim::Load(class EFile * s /* r27 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8

    // References
    // -> class ESoundEventManager g_soundeventman;
    // -> static unsigned int exceptionTable[2];
}

// Range: 0x802D7970 -> 0x802D7D5C
// this: r29
void ERAnim::OldLoad(class EFile * s /* r26 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x18
    char * buffer; // r31
    char * ptr; // r30
}

// Range: 0x802D7D5C -> 0x802D7F50
// this: r26
void ERAnim::Refresh(class EFile * pFile /* r27 */) {
    // References
    // -> class ESoundEventManager g_soundeventman;
    // -> static unsigned int exceptionTable[2];
}


