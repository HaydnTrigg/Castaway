/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\piecewise.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D0110 -> 0x800D051C
*/
// Range: 0x800D0110 -> 0x800D0128
PiecewiseFn::PiecewiseFn() {}

// Range: 0x800D0128 -> 0x800D0180
// this: r30
PiecewiseFn::~PiecewiseFn() {}

// Range: 0x800D0180 -> 0x800D018C
void PiecewiseFn::Reset() {}

// Range: 0x800D018C -> 0x800D022C
// this: r30
void PiecewiseFn::SetMaxPoints(int maxPoints /* r31 */) {}

// Range: 0x800D022C -> 0x800D031C
// this: r30
void PiecewiseFn::AddPoint(const class PiecewisePt & inPt /* r31 */) {
    // Local variables
    int newIndex; // r27
    int i; // r7
    int j; // r26
}

// Range: 0x800D031C -> 0x800D051C
// this: r26
void PiecewiseFn::AddPointsFromText() {
    // Local variables
    const char * scan; // r28
    int len; // r27
    char point[256]; // r1+0x18
    int cnt; // r3
    int x; // r1+0xC
    int y; // r1+0x8
    int valsRead; // r0
    class PiecewisePt newPoint; // r1+0x10
}


