/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_ranim.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246630 -> 0x80246654
*/
// Range: 0x80246630 -> 0x80246644
void * TArrayERAnimAllocator::Alloc() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80246644 -> 0x80246654
void TArrayERAnimAllocator::Free() {
    // References
    // -> class EAnimManager _animman;
}


// Range: 0x802D7F50 -> 0x802D7FCC
// this: r30
ERAnimBitArray::~ERAnimBitArray() {
    // References
    // -> struct [anonymous] __vt__9EBitArray;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
}

// Range: 0x802D7FCC -> 0x802D7FDC
void * ERAnimBitArray::AllocateMemory() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802D7FDC -> 0x802D7FF4
void ERAnimBitArray::FreeMemory() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802D7FF4 -> 0x802D8014
void ERAnim::SafeDelete() {}

// Range: 0x802D8014 -> 0x802D8020
class ETypeInfo * ERAnim::GetTypeInfo() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802D8020 -> 0x802D8030
char * ERAnim::GetTypeName() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802D8030 -> 0x802D8040
unsigned int ERAnim::GetTypeKey() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802D8040 -> 0x802D8050
unsigned short ERAnim::GetTypeVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802D8050 -> 0x802D83B8
void ERAnim::Destruct(class ERAnim * p /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__9EBitArray;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
    // -> class EAnimManager _animman;
    // -> class ESoundEventManager g_soundeventman;
    // -> unsigned long m_allocatedAnims;
    // -> static unsigned int exceptionTable[2];
    // -> struct [anonymous] __vt__6ERAnim;
}

// Range: 0x802D83B8 -> 0x802D8520
void ERAnim::Construct() {
    // References
    // -> unsigned long m_allocatedAnims;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
    // -> struct [anonymous] __vt__6ERAnim;
}

// Range: 0x802D8520 -> 0x802D86A0
class ERAnim * ERAnim::New() {
    // References
    // -> unsigned long m_allocatedAnims;
    // -> struct [anonymous] __vt__14ERAnimBitArray;
    // -> struct [anonymous] __vt__6ERAnim;
    // -> class EAnimManager _animman;
}


