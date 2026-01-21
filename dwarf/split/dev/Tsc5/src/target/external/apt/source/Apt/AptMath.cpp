/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptMath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803247F0 -> 0x80324980
*/
struct ClipTransform_t * m_pStackBase; // size: 0x4, address: 0x805DC350
struct ClipTransform_t * m_pAllocatedBase; // size: 0x4, address: 0x805DC354
unsigned short m_nStackCapacity; // size: 0x2, address: 0x805DC358
unsigned short m_nStackCount; // size: 0x2, address: 0x805DC35A
// Range: 0x803247F0 -> 0x803248B4
void AptMath::ClipStackMakeUnit() {
    // Local variables
    struct ClipTransform_t * pTransform; // r0
    struct Vec4_t vUnitOne; // r1+0x18
    struct Vec4_t vUnitZero; // r1+0x8
}

// Range: 0x803248B4 -> 0x803248D8
void AptMath::ClipStackPushUnit() {}

// Range: 0x803248D8 -> 0x80324938
void AptMath::ClipStackInit(unsigned int nMaxTransforms /* r31 */) {
    // Local variables
    unsigned int temp; // r3

    // References
    // -> unsigned short m_nStackCount;
    // -> unsigned short m_nStackCapacity;
    // -> struct ClipTransform_t * m_pStackBase;
    // -> struct ClipTransform_t * m_pAllocatedBase;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80324938 -> 0x80324980
void AptMath::ClipStackShutdown() {
    // References
    // -> struct ClipTransform_t * m_pAllocatedBase;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> unsigned short m_nStackCapacity;
    // -> struct ClipTransform_t * m_pStackBase;
}


