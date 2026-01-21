/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\memorymeterwin.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023D2A4 -> 0x8023D7B8
*/
// Range: 0x8023D2A4 -> 0x8023D314
// this: r31
EMemoryMeterWin::EMemoryMeterWin() {
    // References
    // -> struct [anonymous] __vt__15EMemoryMeterWin;
}

// Range: 0x8023D314 -> 0x8023D380
// this: r30
EMemoryMeterWin::~EMemoryMeterWin() {
    // References
    // -> struct [anonymous] __vt__15EMemoryMeterWin;
}

// Range: 0x8023D380 -> 0x8023D384
void EMemoryMeterWin::Init() {}

// Range: 0x8023D384 -> 0x8023D388
void EMemoryMeterWin::Reset() {}

// Range: 0x8023D388 -> 0x8023D38C
void EMemoryMeterWin::SetState() {}

// Range: 0x8023D38C -> 0x8023D630
// this: r30
void EMemoryMeterWin::PollMemoryLevels() {
    // Local variables
    float uniqueObjects; // r1+0x18
    float totalObjects; // r1+0x14
    float totalStructureObjects; // r1+0x10
    float totalNodes; // r1+0xC
    float totalRam; // r1+0x8
    int totalStructureOverhead; // r4
    float largest; // f3
    float nextLargest; // f4
    float smallest; // f5
    float t; // f0
    float t; // f0
    float t; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8023D630 -> 0x8023D7B8
unsigned char EMemoryMeterWin::TestPlacementCostOK() {
    // Local variables
    float totalRam; // f4
    float totalObjects; // f2
    float totalNodes; // f5
    int totalStructures; // r3
    int totalStructureOverhead; // r7
    int overlimit; // r0
    float totalRamWeight; // r31
    float totalWeight; // r31
    float totalNodesWeight; // f5
    float largest; // f3
    float nextLargest; // f6
    float smallest; // f7
    float t; // f0
    float t; // f0
    float t; // f0
    float curPercent; // f1

    // References
    // -> class EGlobal _globals;
}


