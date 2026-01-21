/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_bound3.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001A79C -> 0x8001A8B0
*/
// Range: 0x8001A79C -> 0x8001A7EC
// this: r30
EBound3::EBound3(const class EBoundSphere & sphere /* r31 */) {}

// Range: 0x8001A7EC -> 0x8001A854
// this: r29
EBound3::EBound3(const class EVec3 & vMinBound /* r30 */, const class EVec3 & vMaxBound /* r31 */) {}

// Range: 0x8001A854 -> 0x8001A8B0
// this: r30
EBound3::EBound3(const class EBound3 & bInit /* r31 */) {}


// Range: 0x80052270 -> 0x800523B0
// this: r29
unsigned char EBound3::Overlap(const class EBound3 & b /* r30 */) const {}

// Range: 0x800523B0 -> 0x8005240C
// this: r31
EBound3::EBound3() {}

// Range: 0x8005240C -> 0x80052450
class EVec3 EBound3::Center() {}

// Range: 0x80052450 -> 0x80052498
// this: r30
class EBound3 & EBound3::operator=(const class EBound3 & b /* r31 */) {}


// Range: 0x80083948 -> 0x8008399C
// this: r31
float EBound3::Depth() const {}

// Range: 0x8008399C -> 0x800839F0
// this: r31
float EBound3::Height() const {}

// Range: 0x800839F0 -> 0x80083A44
// this: r31
float EBound3::Width() const {}

// Range: 0x80083A44 -> 0x80083B84
// this: r29
unsigned char EBound3::IsWithin(const class EBound3 & b /* r30 */) const {}

// Range: 0x80083B84 -> 0x80083BEC
// this: r29
unsigned char EBound3::operator!=(const class EBound3 & b /* r30 */) const {}

// Range: 0x80083BEC -> 0x80083D04
// this: r29
class EBound3 & EBound3::operator+=(const class EBound3 & b /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x80083D04 -> 0x80083D60
// this: r30
EBound3::EBound3(const class EVec3 & vPoint /* r31 */) {}


// Range: 0x8015D758 -> 0x8015D7A0
// this: r31
class EBound3 & EBound3::operator*=(float scaler /* f31 */) {}


// Range: 0x8021FEF8 -> 0x8021FFE4
// this: r29
class EBound3 & EBound3::operator+=(const class EVec3 & v /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x8021FFE4 -> 0x80220024
// this: r31
class EBound3 & EBound3::operator=() {}


// Range: 0x802A6C84 -> 0x802A6D00
unsigned char EBound3::Overlap2D() {}


