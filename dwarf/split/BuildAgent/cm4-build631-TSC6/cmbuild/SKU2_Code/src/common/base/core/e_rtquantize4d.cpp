/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_rtquantize4d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80250B6C -> 0x802536AC
*/
// Range: 0x80250B6C -> 0x80250B90
ERTQuantize4D::ERTQuantize4D() {
    // References
    // -> struct [anonymous] __vt__13ERTQuantize4D;
}

// Range: 0x80250B90 -> 0x80250BFC
// this: r30
ERTQuantize4D::~ERTQuantize4D() {
    // References
    // -> struct [anonymous] __vt__13ERTQuantize4D;
}

// Range: 0x80250BFC -> 0x80250C50
// this: r31
void ERTQuantize4D::Deallocate() {}

// Range: 0x80250C50 -> 0x80250F54
// this: r30
unsigned char ERTQuantize4D::Init(unsigned int maxColors /* r26 */, unsigned int maxMemUsage /* r27 */, void * (* pfnAlloc)(unsigned int) /* r28 */, void (* pfnFree)(void *) /* r29 */, unsigned char YUVColorSpace /* r31 */) {
    // Local variables
    unsigned short i; // r7
    unsigned short * pNode; // r0
    class EVec4 vTrans; // r1+0x18
    class EVec4 vScale; // r1+0x8
    int cc; // r4
}

// Range: 0x80250F54 -> 0x80250F8C
void * ERTQuantize4D::DefaultAlloc(unsigned int size /* r31 */) {}

// Range: 0x80250F8C -> 0x80250FC0
void ERTQuantize4D::DefaultFree(void * p /* r31 */) {}

// Range: 0x80250FC0 -> 0x802510B4
// this: r31
void ERTQuantize4D::InitializeCube() {
    // Local variables
    unsigned int number_pixels; // r0
    unsigned int max_shift; // r5
    unsigned int level; // r6
    struct ERTQ4Node * pRoot; // r0
}

// Range: 0x802510B4 -> 0x80251218
struct ERTQ4Node * ERTQuantize4D::InitializeNode() {
    // Local variables
    int i; // r6
}

// Range: 0x80251218 -> 0x802512CC
void ERTQuantize4D::AddPixel() {
    // Local variables
    unsigned int packedColor; // r31
    struct ERTQ4CacheNode & cn; // r30
}

// Range: 0x802512CC -> 0x80251348
// this: r30
void ERTQuantize4D::FlushAdd(struct ERTQ4CacheNode & cn /* r31 */) {
    // Local variables
    unsigned char color[4]; // r1+0x8
    class EVec4 vYuva; // r1+0x10
}

// Range: 0x80251348 -> 0x80251538
void ERTQuantize4D::TransformToYuva() {
    // Local variables
    class EVec3 vInColor; // r1+0x14
}

// Range: 0x80251538 -> 0x80251964
// this: r20
void ERTQuantize4D::Classify(const class EVec4 & vColor /* r21 */, int count /* r22 */) {
    // Local variables
    struct ERTQ4Node * node; // r6
    unsigned int level; // r23
    unsigned char id; // r0
    float bisect; // f4
    class EVec4 vChildMidColor; // r1+0x18
    class EVec4 vParentMidColor; // r1+0x8
    int m; // r4
}

// Range: 0x80251964 -> 0x80251E44
// this: r15
void ERTQuantize4D::PruneLevel(struct ERTQ4Node * node /* f1 */) {
    // Local variables
    unsigned int id; // f2
}

// Range: 0x80251E44 -> 0x80251F38
void ERTQuantize4D::PruneChild() {}

// Range: 0x80251F38 -> 0x80252210
// this: r31
void ERTQuantize4D::Compute() {
    // Local variables
    int cc; // r27
    struct ERTQ4CacheNode & cn; // r0
}

// Range: 0x80252210 -> 0x802522B4
// this: r29
void ERTQuantize4D::Reduction() {}

// Range: 0x802522B4 -> 0x80252980
// this: r15
void ERTQuantize4D::Reduce(struct ERTQ4Node * node /* r14 */) {
    // Local variables
    unsigned int id; // r16
}

// Range: 0x80252980 -> 0x80252AA8
// this: r30
void ERTQuantize4D::MColormap(struct ERTQ4Node * node /* r31 */) {
    // Local variables
    unsigned int id; // r27
    float unique; // f1
}

// Range: 0x80252AA8 -> 0x80252AB0
int ERTQuantize4D::GetPaletteSize() {}

// Range: 0x80252AB0 -> 0x80252D34
void ERTQuantize4D::GetPaletteEntry() {}

// Range: 0x80252D34 -> 0x80253258
// this: r29
int ERTQuantize4D::GetClosestColor() {
    // Local variables
    unsigned int packedColor; // r30
    unsigned int hashedColor; // r0
    struct ERTQ4CacheNode & cn; // r0
    class EVec4 vColor; // r1+0x40
    float mindistance; // f10
    unsigned int closest; // r6
    unsigned int i; // r7
    float dist; // f0
    struct ERTQ4Node * node; // r4
    unsigned int id; // r11
}

// Range: 0x80253258 -> 0x802536AC
// this: r15
void ERTQuantize4D::ClosestColor(struct ERTQ4Node * node /* r16 */) {
    // Local variables
    unsigned int id; // r17
    class EVec4 & vColor; // r0
    float distance; // f0
}


