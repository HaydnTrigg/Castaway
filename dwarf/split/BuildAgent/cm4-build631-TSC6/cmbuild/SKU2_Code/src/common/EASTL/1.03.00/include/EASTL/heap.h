/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\EASTL\1.03.00\include\EASTL\heap.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012C3A8 -> 0x8012CDC0
*/
// Range: 0x8012C3A8 -> 0x8012C42C
void make_heap(class FamilyImpl * * first /* r27 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x8012C42C -> 0x8012C500
void adjust_heap(class FamilyImpl * * first /* r27 */, long topPosition /* r28 */, long heapSize /* r25 */, long position /* r29 */, class FamilyImpl * value /* r30 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r31 */) {
    // Local variables
    long childPosition; // r26
}

// Range: 0x8012C500 -> 0x8012C59C
void promote_heap(class FamilyImpl * * first /* r26 */, long topPosition /* r27 */, long position /* r28 */, class FamilyImpl * value /* r1+0x8 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x8012C59C -> 0x8012C608
void sort_heap(class FamilyImpl * * first /* r29 */, class FamilyImpl * * last /* r30 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r31 */) {}

// Range: 0x8012C608 -> 0x8012C634
void pop_heap() {
    // Local variables
    class FamilyImpl * tempBottom; // r0
}

// Range: 0x8012C634 -> 0x8012C6B8
void make_heap(int * first /* r27 */, unsigned char (* compare)(int &) /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x8012C6B8 -> 0x8012C78C
void adjust_heap(int * first /* r27 */, long topPosition /* r28 */, long heapSize /* r25 */, long position /* r29 */, int value /* r30 */, unsigned char (* compare)(int &) /* r31 */) {
    // Local variables
    long childPosition; // r26
}

// Range: 0x8012C78C -> 0x8012C828
void promote_heap(int * first /* r26 */, long topPosition /* r27 */, long position /* r28 */, int value /* r1+0x8 */, unsigned char (* compare)(int &) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x8012C828 -> 0x8012C894
void sort_heap(int * first /* r29 */, int * last /* r30 */, unsigned char (* compare)(int &) /* r31 */) {}

// Range: 0x8012C894 -> 0x8012C8C0
void pop_heap() {
    // Local variables
    int tempBottom; // r0
}

// Range: 0x8012C8C0 -> 0x8012C944
void make_heap(class ObjSelector * * first /* r27 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x8012C944 -> 0x8012CA14
void adjust_heap(class ObjSelector * * first /* r30 */, long topPosition /* r31 */, long heapSize /* r25 */, long position /* r26 */, class ObjSelector * value /* r27 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r28 */) {
    // Local variables
    long childPosition; // r29
}

// Range: 0x8012CA14 -> 0x8012CAA8
void promote_heap(class ObjSelector * * first /* r25 */, long topPosition /* r26 */, long position /* r27 */, class ObjSelector * value /* r28 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x8012CAA8 -> 0x8012CB14
void sort_heap(class ObjSelector * * first /* r29 */, class ObjSelector * * last /* r30 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r31 */) {}

// Range: 0x8012CB14 -> 0x8012CB40
void pop_heap() {
    // Local variables
    class ObjSelector * tempBottom; // r0
}

// Range: 0x8012CB40 -> 0x8012CBC4
void make_heap(int * first /* r27 */, unsigned char (* compare)(int, int) /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x8012CBC4 -> 0x8012CC94
void adjust_heap(int * first /* r30 */, long topPosition /* r31 */, long heapSize /* r25 */, long position /* r26 */, int value /* r27 */, unsigned char (* compare)(int, int) /* r28 */) {
    // Local variables
    long childPosition; // r29
}

// Range: 0x8012CC94 -> 0x8012CD28
void promote_heap(int * first /* r25 */, long topPosition /* r26 */, long position /* r27 */, int value /* r28 */, unsigned char (* compare)(int, int) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x8012CD28 -> 0x8012CD94
void sort_heap(int * first /* r29 */, int * last /* r30 */, unsigned char (* compare)(int, int) /* r31 */) {}

// Range: 0x8012CD94 -> 0x8012CDC0
void pop_heap() {
    // Local variables
    int tempBottom; // r0
}


// Range: 0x802159F0 -> 0x80215A74
void make_heap(unsigned int * first /* r27 */, unsigned char (* compare)(unsigned int &) /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x80215A74 -> 0x80215B48
void adjust_heap(unsigned int * first /* r27 */, long topPosition /* r28 */, long heapSize /* r25 */, long position /* r29 */, unsigned int value /* r30 */, unsigned char (* compare)(unsigned int &) /* r31 */) {
    // Local variables
    long childPosition; // r26
}

// Range: 0x80215B48 -> 0x80215BE4
void promote_heap(unsigned int * first /* r26 */, long topPosition /* r27 */, long position /* r28 */, unsigned int value /* r1+0x8 */, unsigned char (* compare)(unsigned int &) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x80215BE4 -> 0x80215C50
void sort_heap(unsigned int * first /* r29 */, unsigned int * last /* r30 */, unsigned char (* compare)(unsigned int &) /* r31 */) {}

// Range: 0x80215C50 -> 0x80215C7C
void pop_heap() {
    // Local variables
    unsigned int tempBottom; // r0
}

// Range: 0x80215C7C -> 0x80215D1C
void make_heap(class Neighbor * * first /* r27 */, class RelationsCmp & compare /* r28 */) {
    // Local variables
    long heapSize; // r30
    long parentPosition; // r29
}

// Range: 0x80215D1C -> 0x80215E00
void adjust_heap(class Neighbor * * first /* r30 */, long topPosition /* r31 */, long heapSize /* r25 */, long position /* r26 */, class Neighbor * value /* r27 */, class RelationsCmp & compare /* r28 */) {
    // Local variables
    long childPosition; // r29
}

// Range: 0x80215E00 -> 0x80215E90
void promote_heap(class Neighbor * * first /* r25 */, long topPosition /* r26 */, long position /* r27 */, class Neighbor * value /* r28 */, class RelationsCmp & compare /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x80215E90 -> 0x80215F14
void sort_heap(class Neighbor * * first /* r29 */, class Neighbor * * last /* r30 */, class RelationsCmp & compare /* r31 */) {}

// Range: 0x80215F14 -> 0x80215F9C
void pop_heap(class Neighbor * * first /* r29 */, class Neighbor * * last /* r30 */) {
    // Local variables
    class Neighbor * tempBottom; // r31
}


// Range: 0x802AD2DC -> 0x802AD4B0
void make_heap(struct ResourceIndexRecord * first /* r24 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r25 */) {
    // Local variables
    long heapSize; // r27
    long parentPosition; // r26
}

// Range: 0x802AD4B0 -> 0x802AD630
void adjust_heap(struct ResourceIndexRecord * first /* r25 */, long topPosition /* r26 */, long heapSize /* r27 */, long position /* r28 */, struct ResourceIndexRecord & value /* r29 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r30 */) {
    // Local variables
    long childPosition; // r31
}

// Range: 0x802AD630 -> 0x802AD7F0
void pop_heap(struct ResourceIndexRecord * first /* r28 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r29 */) {
    // Local variables
    struct ResourceIndexRecord tempBottom; // r1+0x14
}

// Range: 0x802AD7F0 -> 0x802AD8B0
void promote_heap(struct ResourceIndexRecord * first /* r25 */, long topPosition /* r26 */, long position /* r27 */, struct ResourceIndexRecord & value /* r28 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r29 */) {
    // Local variables
    long parentPosition; // r30
}

// Range: 0x802AD8B0 -> 0x802ADA84
void sort_heap(struct ResourceIndexRecord * first /* r25 */, struct ResourceIndexRecord * last /* r26 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r27 */) {}


