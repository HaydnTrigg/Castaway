/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\tsupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E15F0 -> 0x801E1954
*/
// Range: 0x801E15F0 -> 0x801E1680
void SerializeUIGameData::Load() {
    // Local variables
    unsigned char bValid; // r5
    int character; // r7

    // References
    // -> unsigned int * m_pLoadBuffers[4];
}

// Range: 0x801E1680 -> 0x801E1718
void SerializeUIGameData::AllocateLoadBuffers() {
    // Local variables
    int i; // r28

    // References
    // -> unsigned int * m_pLoadBuffers[4];
}

// Range: 0x801E1718 -> 0x801E175C
void SerializeUIGameData::SaveComplete() {
    // References
    // -> unsigned int * m_pBuffer;
}

// Range: 0x801E175C -> 0x801E1760
void SerializeUIGameData::SerializeUIData() {}

// Range: 0x801E1760 -> 0x801E17E0
void FillNumberField(char * buffer /* r29 */, int i /* r30 */, int minFieldSize /* r31 */) {
    // Local variables
    char formatBuffer[10]; // r1+0x8
}

// Range: 0x801E17E0 -> 0x801E1894
// this: r26
UIStringGenerator::UIStringGenerator(const char * baseString /* r27 */, int minFieldSize /* r28 */) {
    // Local variables
    int stringSize; // r30
    char scratchSpace[20]; // r1+0x8
    int i; // r29
}

// Range: 0x801E1894 -> 0x801E18C0
char * UIStringGenerator::GetString() {}

// Range: 0x801E18C0 -> 0x801E1954
// this: r28
UIStringGenerator::~UIStringGenerator() {
    // Local variables
    int i; // r30
}


