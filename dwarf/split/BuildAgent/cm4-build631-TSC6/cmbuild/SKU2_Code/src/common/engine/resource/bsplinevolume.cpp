/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\bsplinevolume.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D2590 -> 0x802D4294
*/
// Range: 0x802D2590 -> 0x802D25F0
// this: r30
BSplineVolume::~BSplineVolume() {
    // References
    // -> struct [anonymous] __vt__13BSplineVolume;
}

// Range: 0x802D25F0 -> 0x802D27E4
// this: r25
void BSplineVolume::Free() {
    // Local variables
    int i; // r27
    int i0; // r26
    int i1; // r23
    int i0; // r23
    int i1; // r24

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802D27E4 -> 0x802D2ADC
// this: r22
void BSplineVolume::Read(class EStream & s /* r23 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r25
    int i; // r27
    int j; // r26
    int k; // r25
    int l; // r24
    class EVec3 temp; // r1+0xC

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802D2ADC -> 0x802D2DE4
// this: r22
void BSplineVolume::Read(class EFile * s /* r23 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r25
    int i; // r27
    int j; // r26
    int k; // r25
    int l; // r24
    class EVec3 temp; // r1+0xC

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802D2DE4 -> 0x802D30A4
// this: r21
unsigned int BSplineVolume::Read(unsigned char * buff /* r22 */) {
    // Local variables
    unsigned char * start; // r27
    int nVersion; // r1+0x8
    int i; // r24
    int i; // r26
    int j; // r25
    int k; // r24
    int l; // r23
    class EVec3 temp; // r1+0xC

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802D30A4 -> 0x802D30A8
void BSplineVolume::Write() {}

// Range: 0x802D30A8 -> 0x802D31CC
void * BSplineVolume::AllocateControlPoints(int iNumUCtrlPoints /* r22 */, int iNumVCtrlPoints /* r23 */, int iNumWCtrlPoints /* r25 */, int size /* r24 */) {
    // Local variables
    void * CtrlPoint; // r26
    int i0; // r25
    void * temp_outer; // r3
    int i1; // r24
    void * temp_inner; // r3

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802D31CC -> 0x802D3570
void BSplineVolume::ParameterizeControlPoints() {
    // Local variables
    unsigned char init; // r0
    int x; // r8
    int y; // r9
    int z; // r10
}

// Range: 0x802D3570 -> 0x802D3798
class EVec3 BSplineVolume::ParameterizeVert() {
    // Local variables
    int numRealUCtrlPoints; // r0
    int numRealVCtrlPoints; // r0
    int numRealWCtrlPoints; // r0
    int i; // r4
    int j; // r9
    int k; // r10
}

// Range: 0x802D3798 -> 0x802D38D4
void BSplineVolume::GenerateControlPointDeltas() {
    // Local variables
    int x; // r8
    int y; // r9
    int z; // r10
    int i; // r11
}

// Range: 0x802D38D4 -> 0x802D3B74
void BSplineVolume::BlendVolumes() {
    // Local variables
    int x; // r8
    int y; // r9
    int z; // r10
    int i; // r11
    class EVec3 ctrlDelta; // r1+0x20
    class EVec3 ctrlPoint; // r1+0x14
}

// Range: 0x802D3B74 -> 0x802D4294
class EVec3 BSplineVolume::GetPosition() {
    // Local variables
    class EVec3 tempPoint; // r1+0x178
    class EVec3 pt[4][4]; // r1+0x1B8
    int ioffset; // r11
    int joffset; // r12
    class EVec3 knots[4]; // r1+0x188
    int ix; // r31
    int jx; // r30
    int i; // r0
    int ix; // r0
}


