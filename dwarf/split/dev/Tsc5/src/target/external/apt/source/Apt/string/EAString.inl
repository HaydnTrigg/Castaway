/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\string\EAString.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80331270 -> 0x803312D4
*/
// Range: 0x80331270 -> 0x803312D4
// this: r30
int EAStringC::CompareNoCase() const {}


// Range: 0x80335268 -> 0x80335278
void EAStringC::InvalidateHashValue() {}

// Range: 0x80335278 -> 0x80335284
void EAStringC::SetInternalSize() {}

// Range: 0x80335284 -> 0x803352E4
// this: r30
void EAStringC::AllocateBuffer() {
    // Local variables
    unsigned int uAllocateSize; // r31

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803352E4 -> 0x803352F0
void EAStringC::SetInternalMaxSize() {}

// Range: 0x803352F0 -> 0x803352FC
void EAStringC::SetInternalRefCount() {}

// Range: 0x803352FC -> 0x80335308
unsigned int EAStringC::GetInternalMaxSize() {}

// Range: 0x80335308 -> 0x80335344
// this: r31
EAStringC::EAStringC() {
    // References
    // -> char s_EmptyInternalData[9];
}

// Range: 0x80335344 -> 0x803353A4
char * EAStringC::UTF8_GetBuffer(int iIndex /* r30 */) {
    // Local variables
    int i; // r31
    int iCharacter; // r1+0x8
    const char * pBufferToParse; // r3
}

// Range: 0x803353A4 -> 0x803353EC
int EAStringC::UTF8_GetSize() {
    // Local variables
    int nSize; // r31
    int iCharacter; // r1+0x8
    const char * pBufferToParse; // r3
}

// Range: 0x803353EC -> 0x80335430
int EAStringC::UTF8_GetCharacterSize() {
    // Local variables
    unsigned char cChar0; // r0
}

// Range: 0x80335430 -> 0x803354CC
void EAStringC::UTF8_SetCharacter() {}

// Range: 0x803354CC -> 0x803355F4
// this: r31
void EAStringC::UTF8_SetOneCharacter(int iCharacter /* r30 */) {
    // Local variables
    char * pBuffer; // r0
}

// Range: 0x803355F4 -> 0x80335630
int EAStringC::UTF8_GetCharacterSize() {}

// Range: 0x80335630 -> 0x8033563C
unsigned int EAStringC::GetInternalRefCount() {}

// Range: 0x8033563C -> 0x80335690
unsigned short EAStringC::CalculateHashValue() {
    // Local variables
    unsigned int uHash; // r5
    int c; // r6
    const char * pStr; // r3
}


