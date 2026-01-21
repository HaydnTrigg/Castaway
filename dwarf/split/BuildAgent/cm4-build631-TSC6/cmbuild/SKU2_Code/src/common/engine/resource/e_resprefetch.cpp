/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_resprefetch.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DBFA0 -> 0x802DC6B4
*/
// Range: 0x802DBFA0 -> 0x802DC044
// this: r30
EResPrefetch::~EResPrefetch() {
    // References
    // -> struct [anonymous] __vt__12EResPrefetch;
}

// Range: 0x802DC044 -> 0x802DC08C
// this: r31
void EResPrefetch::TerminateThread() {
    // Local variables
    struct EPrefetchMsg * pMsg; // r0
}

// Range: 0x802DC08C -> 0x802DC158
// this: r31
unsigned char EResPrefetch::Init() {
    // References
    // -> class EApp * _pApp;
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC158 -> 0x802DC1A8
// this: r31
void EResPrefetch::Shutdown() {}

// Range: 0x802DC1A8 -> 0x802DC1BC
void EResPrefetch::AcquireBuffer() {}

// Range: 0x802DC1BC -> 0x802DC218
void EResPrefetch::ReleasedBuffer() {
    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC218 -> 0x802DC2D0
// this: r30
void EResPrefetch::DoBegin(struct EPrefetchMsg * pMsg /* r31 */) {
    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC2D0 -> 0x802DC490
// this: r31
void EResPrefetch::LoadAnotherBlock() {}

// Range: 0x802DC490 -> 0x802DC600
// this: r28
void EResPrefetch::Main() {
    // Local variables
    struct EPrefetchMsg * pMsg; // r29
    unsigned int msgAddr; // r1+0x8

    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC600 -> 0x802DC6B4
// this: r30
void EResPrefetch::Flush() {
    // Local variables
    class EEvent ev; // r1+0x20
    struct EPrefetchMsg msg; // r1+0x8
}


