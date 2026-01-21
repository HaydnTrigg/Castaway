/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\ctilept.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010A01C -> 0x8010A80C
*/
// Range: 0x8010A01C -> 0x8010A058
CTilePt::CTilePt() {}

// Range: 0x8010A058 -> 0x8010A0D4
class EVec3 CTilePt::GetEVec3() {}

// Range: 0x8010A0D4 -> 0x8010A150
class EVec3 CTilePt::GetEVec3M() {}

// Range: 0x8010A150 -> 0x8010A180
float CTilePt::GetXf() {}

// Range: 0x8010A180 -> 0x8010A1B0
float CTilePt::GetYf() {}

// Range: 0x8010A1B0 -> 0x8010A1BC
CTilePt::CTilePt() {}

// Range: 0x8010A1BC -> 0x8010A1D8
CTilePt::CTilePt() {}

// Range: 0x8010A1D8 -> 0x8010A238
// this: r29
CTilePt::CTilePt(const class FTilePt & in /* r30 */, int inLevel /* r31 */) {}

// Range: 0x8010A238 -> 0x8010A278
CTilePt::CTilePt() {}

// Range: 0x8010A278 -> 0x8010A2EC
CTilePt::CTilePt() {}

// Range: 0x8010A2EC -> 0x8010A340
// this: r30
CTilePt::CTilePt(int inLevel /* r31 */) {
    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8010A340 -> 0x8010A380
// this: r31
CTilePt::~CTilePt() {}

// Range: 0x8010A380 -> 0x8010A39C
class CTilePt & CTilePt::operator=() {}

// Range: 0x8010A39C -> 0x8010A3DC
unsigned char CTilePt::operator==() {}

// Range: 0x8010A3DC -> 0x8010A41C
unsigned char CTilePt::operator!=() {}

// Range: 0x8010A41C -> 0x8010A470
unsigned char CTilePt::operator<() {}

// Range: 0x8010A470 -> 0x8010A494
class CTilePt & CTilePt::operator+=() {}

// Range: 0x8010A494 -> 0x8010A4B8
class CTilePt & CTilePt::operator-=() {}

// Range: 0x8010A4B8 -> 0x8010A4EC
class CTilePt CTilePt::operator+() {}

// Range: 0x8010A4EC -> 0x8010A520
class CTilePt CTilePt::operator-() {}

// Range: 0x8010A520 -> 0x8010A538
int CTilePt::GetRow() {}

// Range: 0x8010A538 -> 0x8010A550
int CTilePt::GetColumn() {}

// Range: 0x8010A550 -> 0x8010A5C0
// this: r31
class FTilePt CTilePt::ToFTilePt() const {
    // Local variables
    class FTilePt aPt; // r1+0x8
}

// Range: 0x8010A5C0 -> 0x8010A5CC
int CTilePt::GetX() {}

// Range: 0x8010A5CC -> 0x8010A5D8
int CTilePt::GetY() {}

// Range: 0x8010A5D8 -> 0x8010A5F4
void CTilePt::Get() {}

// Range: 0x8010A5F4 -> 0x8010A604
// this: r5
int CTilePt::SetX() {}

// Range: 0x8010A604 -> 0x8010A614
// this: r5
int CTilePt::SetY() {}

// Range: 0x8010A614 -> 0x8010A620
void CTilePt::Set() {}

// Range: 0x8010A620 -> 0x8010A630
void CTilePt::Set() {}

// Range: 0x8010A630 -> 0x8010A660
void CTilePt::Set() {}

// Range: 0x8010A660 -> 0x8010A66C
int CTilePt::GetLevel() {}

// Range: 0x8010A66C -> 0x8010A674
void CTilePt::SetLevel() {}

// Range: 0x8010A674 -> 0x8010A80C
enum eCTilePtDir CTilePt::GetTileDirection(const class CTilePt & origin /* r26 */, const class CTilePt & end /* r30 */) {
    // Local variables
    enum eCTilePtDir dir; // r3
    int o_x; // r0
    int o_y; // r0
    int e_x; // r0
    int e_y; // r0
    int delta_x; // r28
    int delta_y; // r27
    int end_row; // r0
    int end_column; // r0
    int orig_row; // r0
    int orig_column; // r0
    int diff_cols; // r6
    int diff_rows; // r0
}


