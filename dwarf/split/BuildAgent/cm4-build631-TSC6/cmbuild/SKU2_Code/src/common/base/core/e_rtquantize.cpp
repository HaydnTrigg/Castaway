/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_rtquantize.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DDDC -> 0x80250AF0
*/
// Range: 0x8024DDDC -> 0x8024DE00
ERTQuantize::ERTQuantize() {
    // References
    // -> struct [anonymous] __vt__11ERTQuantize;
}

// Range: 0x8024DE00 -> 0x8024DE6C
// this: r30
ERTQuantize::~ERTQuantize() {
    // References
    // -> struct [anonymous] __vt__11ERTQuantize;
}

// Range: 0x8024DE6C -> 0x8024DEC0
// this: r31
void ERTQuantize::Deallocate() {}

// Range: 0x8024DEC0 -> 0x8024E1CC
// this: r30
unsigned char ERTQuantize::Init(unsigned int maxColors /* r26 */, unsigned int maxMemUsage /* r27 */, void * (* pfnAlloc)(unsigned int) /* r28 */, void (* pfnFree)(void *) /* r29 */, unsigned char YUVColorSpace /* r31 */) {
    // Local variables
    unsigned short i; // r7
    unsigned short * pNode; // r0
    class EVec3 vTrans; // r1+0x14
    class EVec3 vScale; // r1+0x8
    int cc; // r4
}

// Range: 0x8024E1CC -> 0x8024E204
void * ERTQuantize::DefaultAlloc(unsigned int size /* r31 */) {}

// Range: 0x8024E204 -> 0x8024E238
void ERTQuantize::DefaultFree(void * p /* r31 */) {}

// Range: 0x8024E238 -> 0x8024E32C
// this: r31
void ERTQuantize::InitializeCube() {
    // Local variables
    unsigned int number_pixels; // r0
    unsigned int max_shift; // r5
    unsigned int level; // r6
    struct ERTQNode * pRoot; // r0
}

// Range: 0x8024E32C -> 0x8024E43C
struct ERTQNode * ERTQuantize::InitializeNode() {}

// Range: 0x8024E43C -> 0x8024E4E8
void ERTQuantize::AddPixel() {
    // Local variables
    unsigned int packedColor; // r31
    struct ERTQCacheNode & cn; // r30
}

// Range: 0x8024E4E8 -> 0x8024E558
// this: r30
void ERTQuantize::FlushAdd(struct ERTQCacheNode & cn /* r31 */) {
    // Local variables
    unsigned char color[3]; // r1+0x8
    class EVec3 vYuv; // r1+0xC
}

// Range: 0x8024E558 -> 0x8024E710
void ERTQuantize::TransformToYuv() {
    // Local variables
    class EVec3 vInColor; // r1+0x14
}

// Range: 0x8024E710 -> 0x8024EA28
// this: r24
void ERTQuantize::Classify(const class EVec3 & vColor /* r25 */, int count /* r26 */) {
    // Local variables
    struct ERTQNode * node; // r6
    unsigned int level; // r27
    unsigned char id; // r4
    float bisect; // f2
    class EVec3 vMidColor; // r1+0x14
    int m; // r3
}

// Range: 0x8024EA28 -> 0x8024EF08
// this: r15
void ERTQuantize::PruneLevel(struct ERTQNode * node /* f1 */) {
    // Local variables
    unsigned int id; // f2
}

// Range: 0x8024EF08 -> 0x8024EFF0
void ERTQuantize::PruneChild() {}

// Range: 0x8024EFF0 -> 0x8024F27C
// this: r31
void ERTQuantize::Compute() {
    // Local variables
    int cc; // r27
    struct ERTQCacheNode & cn; // r0
}

// Range: 0x8024F27C -> 0x8024F320
// this: r29
void ERTQuantize::Reduction() {}

// Range: 0x8024F320 -> 0x8024F994
// this: r15
void ERTQuantize::Reduce(struct ERTQNode * node /* r14 */) {
    // Local variables
    unsigned int id; // r16
}

// Range: 0x8024F994 -> 0x8024FFA4
// this: r15
void ERTQuantize::MColormap(struct ERTQNode * node /* f1 */) {
    // Local variables
    unsigned int id; // f2
    float unique; // f4
}

// Range: 0x8024FFA4 -> 0x8024FFAC
int ERTQuantize::GetPaletteSize() {}

// Range: 0x8024FFAC -> 0x8024FFB4
int ERTQuantize::GetFullPaletteSize() {}

// Range: 0x8024FFB4 -> 0x80250204
void ERTQuantize::GetPaletteEntry() {}

// Range: 0x80250204 -> 0x80250660
// this: r29
int ERTQuantize::GetClosestColor() {
    // Local variables
    unsigned int packedColor; // r30
    unsigned int hashedColor; // r0
    struct ERTQCacheNode & cn; // r0
    class EVec3 vColor; // r1+0x38
    float mindistance; // f28
    unsigned int closest; // r27
    unsigned int i; // r26
    float dist; // f1
    struct ERTQNode * node; // r7
    unsigned int id; // r6
}

// Range: 0x80250660 -> 0x80250AF0
// this: r15
void ERTQuantize::ClosestColor(struct ERTQNode * node /* f1 */) {
    // Local variables
    unsigned int id; // r14
    class EVec3 & vColor; // r0
    float distance; // f0
}


