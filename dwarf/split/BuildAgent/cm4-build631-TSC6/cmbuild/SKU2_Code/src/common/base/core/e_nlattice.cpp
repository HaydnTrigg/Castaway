/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_nlattice.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80266D50 -> 0x80268770
*/
// Range: 0x80266D50 -> 0x80266E2C
// this: r27
ENLattice::~ENLattice() {
    // Local variables
    int nSize; // r30
    int i; // r29
    int i; // r29

    // References
    // -> struct [anonymous] __vt__9ENLattice;
}

// Range: 0x80266E2C -> 0x802670D4
// this: r30
void ENLattice::Write(class EStream & s /* r31 */) {
    // Local variables
    int numProcessControlPoints; // r26
    int i; // r25
    int j; // r24
    int i; // r24
    int j; // r25
}

// Range: 0x802670D4 -> 0x80267388
// this: r29
void ENLattice::Read(class EStream & s /* r30 */) {
    // Local variables
    int nVersion; // r1+0xC
    int i; // r31
    int j; // r25
    class EString strName; // r1+0x8
    class TArray tokens; // r1+0x10
    const char * id; // r25
    int idx; // r26
    int i; // r27
}

// Range: 0x80267388 -> 0x802674E8
// this: r26
void ENLattice::ProcessControlPoints() {
    // Local variables
    int nSize; // r28
    int i; // r29
    int i; // r30
    int x; // r29
    int y; // r28
    int z; // r27
    int gid; // r25
}

// Range: 0x802674E8 -> 0x80268770
// this: r23
class EVec3 ENLattice::GetProcessPoint(class ENLattice * const this /* r24 */, int i /* r25 */, int x /* r26 */, int y /* r27 */, int z /* r28 */) {
    // Local variables
    int xx; // r31
    int yy; // r30
    int zz; // r29
    class EVec3 pp; // r1+0x410
    class EVec3 pp1; // r1+0x404
    class EVec3 pp2; // r1+0x3F8
}


