/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\EASTL\1.03.00\include\EASTL\sort.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012B318 -> 0x8012C3A8
*/
// Range: 0x8012B318 -> 0x8012B31C
void sort() {}

// Range: 0x8012B31C -> 0x8012B3D0
void quick_sort(class FamilyImpl * * first /* r28 */, class FamilyImpl * * last /* r29 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r30 */) {}

// Range: 0x8012B3D0 -> 0x8012B474
void insertion_sort(class FamilyImpl * * first /* r26 */, class FamilyImpl * * last /* r27 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r28 */) {
    // Local variables
    class FamilyImpl * * iCurrent; // r31
    class FamilyImpl * * iNext; // r30
    class FamilyImpl * * iSorted; // r29
    class FamilyImpl * const temp; // r1+0x8
}

// Range: 0x8012B474 -> 0x8012B504
void insertion_sort_simple(class FamilyImpl * * last /* r27 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r28 */) {
    // Local variables
    class FamilyImpl * * current; // r31
    class FamilyImpl * * end; // r30
    class FamilyImpl * * prev; // r29
    class FamilyImpl * const value; // r1+0x8
}

// Range: 0x8012B504 -> 0x8012B5D0
void quick_sort_impl(class FamilyImpl * * first /* r27 */, class FamilyImpl * * last /* r28 */, long kRecursionCount /* r29 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r30 */) {
    // Local variables
    class FamilyImpl * * const position; // r31
}

// Range: 0x8012B5D0 -> 0x8012B684
void partial_sort(class FamilyImpl * * first /* r26 */, class FamilyImpl * * middle /* r27 */, class FamilyImpl * * last /* r28 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r29 */) {
    // Local variables
    class FamilyImpl * * i; // r30
    class FamilyImpl * const temp; // r0
}

// Range: 0x8012B684 -> 0x8012B738
class FamilyImpl * * get_partition(class FamilyImpl * * first /* r29 */, class FamilyImpl * * last /* r30 */, class FamilyImpl * pivotValue /* r1+0x8 */, unsigned char (* compare)(class Family * const &, class Family * const &) /* r31 */) {}

// Range: 0x8012B738 -> 0x8012B758
long Log2() {
    // Local variables
    int i; // r4
}

// Range: 0x8012B758 -> 0x8012B75C
void sort() {}

// Range: 0x8012B75C -> 0x8012B810
void quick_sort(int * first /* r28 */, int * last /* r29 */, unsigned char (* compare)(int &) /* r30 */) {}

// Range: 0x8012B810 -> 0x8012B8B4
void insertion_sort(int * first /* r26 */, int * last /* r27 */, unsigned char (* compare)(int &) /* r28 */) {
    // Local variables
    int * iCurrent; // r31
    int * iNext; // r30
    int * iSorted; // r29
    int temp; // r1+0x8
}

// Range: 0x8012B8B4 -> 0x8012B944
void insertion_sort_simple(int * last /* r27 */, unsigned char (* compare)(int &) /* r28 */) {
    // Local variables
    int * current; // r31
    int * end; // r30
    int * prev; // r29
    int value; // r1+0x8
}

// Range: 0x8012B944 -> 0x8012BA10
void quick_sort_impl(int * first /* r27 */, int * last /* r28 */, long kRecursionCount /* r29 */, unsigned char (* compare)(int &) /* r30 */) {
    // Local variables
    int * const position; // r31
}

// Range: 0x8012BA10 -> 0x8012BAC4
void partial_sort(int * first /* r26 */, int * middle /* r27 */, int * last /* r28 */, unsigned char (* compare)(int &) /* r29 */) {
    // Local variables
    int * i; // r30
    int temp; // r0
}

// Range: 0x8012BAC4 -> 0x8012BB78
int * get_partition(int * first /* r29 */, int * last /* r30 */, int pivotValue /* r1+0x8 */, unsigned char (* compare)(int &) /* r31 */) {}

// Range: 0x8012BB78 -> 0x8012BB7C
void sort() {}

// Range: 0x8012BB7C -> 0x8012BC30
void quick_sort(class ObjSelector * * first /* r28 */, class ObjSelector * * last /* r29 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r30 */) {}

// Range: 0x8012BC30 -> 0x8012BCCC
void insertion_sort(class ObjSelector * * first /* r25 */, class ObjSelector * * last /* r26 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r27 */) {
    // Local variables
    class ObjSelector * * iCurrent; // r31
    class ObjSelector * * iNext; // r30
    class ObjSelector * * iSorted; // r29
    class ObjSelector * const temp; // r28
}

// Range: 0x8012BCCC -> 0x8012BD54
void insertion_sort_simple(class ObjSelector * * last /* r26 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r27 */) {
    // Local variables
    class ObjSelector * * current; // r31
    class ObjSelector * * end; // r30
    class ObjSelector * * prev; // r29
    class ObjSelector * const value; // r28
}

// Range: 0x8012BD54 -> 0x8012BE20
void quick_sort_impl(class ObjSelector * * first /* r27 */, class ObjSelector * * last /* r28 */, long kRecursionCount /* r29 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r30 */) {
    // Local variables
    class ObjSelector * * const position; // r31
}

// Range: 0x8012BE20 -> 0x8012BED4
void partial_sort(class ObjSelector * * first /* r26 */, class ObjSelector * * middle /* r27 */, class ObjSelector * * last /* r28 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r29 */) {
    // Local variables
    class ObjSelector * * i; // r30
    class ObjSelector * const temp; // r0
}

// Range: 0x8012BED4 -> 0x8012BF90
class ObjSelector * * get_partition(class ObjSelector * * first /* r28 */, class ObjSelector * * last /* r29 */, class ObjSelector * pivotValue /* r30 */, unsigned char (* compare)(class ObjSelector *, class ObjSelector *) /* r31 */) {}

// Range: 0x8012BF90 -> 0x8012BF94
void sort() {}

// Range: 0x8012BF94 -> 0x8012C048
void quick_sort(int * first /* r28 */, int * last /* r29 */, unsigned char (* compare)(int, int) /* r30 */) {}

// Range: 0x8012C048 -> 0x8012C0E4
void insertion_sort(int * first /* r25 */, int * last /* r26 */, unsigned char (* compare)(int, int) /* r27 */) {
    // Local variables
    int * iCurrent; // r31
    int * iNext; // r30
    int * iSorted; // r29
    int temp; // r28
}

// Range: 0x8012C0E4 -> 0x8012C16C
void insertion_sort_simple(int * last /* r26 */, unsigned char (* compare)(int, int) /* r27 */) {
    // Local variables
    int * current; // r31
    int * end; // r30
    int * prev; // r29
    int value; // r28
}

// Range: 0x8012C16C -> 0x8012C238
void quick_sort_impl(int * first /* r27 */, int * last /* r28 */, long kRecursionCount /* r29 */, unsigned char (* compare)(int, int) /* r30 */) {
    // Local variables
    int * const position; // r31
}

// Range: 0x8012C238 -> 0x8012C2EC
void partial_sort(int * first /* r26 */, int * middle /* r27 */, int * last /* r28 */, unsigned char (* compare)(int, int) /* r29 */) {
    // Local variables
    int * i; // r30
    int temp; // r0
}

// Range: 0x8012C2EC -> 0x8012C3A8
int * get_partition(int * first /* r28 */, int * last /* r29 */, int pivotValue /* r30 */, unsigned char (* compare)(int, int) /* r31 */) {}


// Range: 0x8021505C -> 0x80215060
void sort() {}

// Range: 0x80215060 -> 0x80215114
void quick_sort(unsigned int * first /* r28 */, unsigned int * last /* r29 */, unsigned char (* compare)(unsigned int &) /* r30 */) {}

// Range: 0x80215114 -> 0x802151B8
void insertion_sort(unsigned int * first /* r26 */, unsigned int * last /* r27 */, unsigned char (* compare)(unsigned int &) /* r28 */) {
    // Local variables
    unsigned int * iCurrent; // r31
    unsigned int * iNext; // r30
    unsigned int * iSorted; // r29
    unsigned int temp; // r1+0x8
}

// Range: 0x802151B8 -> 0x80215248
void insertion_sort_simple(unsigned int * last /* r27 */, unsigned char (* compare)(unsigned int &) /* r28 */) {
    // Local variables
    unsigned int * current; // r31
    unsigned int * end; // r30
    unsigned int * prev; // r29
    unsigned int value; // r1+0x8
}

// Range: 0x80215248 -> 0x80215314
void quick_sort_impl(unsigned int * first /* r27 */, unsigned int * last /* r28 */, long kRecursionCount /* r29 */, unsigned char (* compare)(unsigned int &) /* r30 */) {
    // Local variables
    unsigned int * const position; // r31
}

// Range: 0x80215314 -> 0x802153C8
void partial_sort(unsigned int * first /* r26 */, unsigned int * middle /* r27 */, unsigned int * last /* r28 */, unsigned char (* compare)(unsigned int &) /* r29 */) {
    // Local variables
    unsigned int * i; // r30
    unsigned int temp; // r0
}

// Range: 0x802153C8 -> 0x8021547C
unsigned int * get_partition(unsigned int * first /* r29 */, unsigned int * last /* r30 */, unsigned int pivotValue /* r1+0x8 */, unsigned char (* compare)(unsigned int &) /* r31 */) {}

// Range: 0x8021547C -> 0x802154D8
void sort(class Neighbor * * first /* r30 */, class Neighbor * * last /* r31 */) {}

// Range: 0x802154D8 -> 0x802155EC
void quick_sort(class Neighbor * * first /* r28 */, class Neighbor * * last /* r29 */, class RelationsCmp & compare /* r30 */) {}

// Range: 0x802155EC -> 0x80215684
void insertion_sort(class Neighbor * * first /* r25 */, class Neighbor * * last /* r26 */, class RelationsCmp & compare /* r27 */) {
    // Local variables
    class Neighbor * * iCurrent; // r31
    class Neighbor * * iNext; // r30
    class Neighbor * * iSorted; // r29
    class Neighbor * const temp; // r28
}

// Range: 0x80215684 -> 0x80215708
void insertion_sort_simple(class Neighbor * * last /* r26 */, class RelationsCmp & compare /* r27 */) {
    // Local variables
    class Neighbor * * current; // r31
    class Neighbor * * end; // r30
    class Neighbor * * prev; // r29
    class Neighbor * const value; // r28
}

// Range: 0x80215708 -> 0x80215838
void quick_sort_impl(class Neighbor * * first /* r27 */, class Neighbor * * last /* r28 */, long kRecursionCount /* r29 */, class RelationsCmp & compare /* r30 */) {
    // Local variables
    class Neighbor * * const position; // r31
}

// Range: 0x80215838 -> 0x8021593C
void partial_sort(class Neighbor * * first /* r25 */, class Neighbor * * middle /* r26 */, class Neighbor * * last /* r27 */, class RelationsCmp & compare /* r28 */) {
    // Local variables
    class Neighbor * * i; // r30
    class Neighbor * const temp; // r29
}

// Range: 0x8021593C -> 0x802159F0
class Neighbor * * get_partition(class Neighbor * * first /* r28 */, class Neighbor * * last /* r29 */, class Neighbor * pivotValue /* r30 */, class RelationsCmp & compare /* r31 */) {}


// Range: 0x802AC0F4 -> 0x802AC2E8
void quick_sort(struct ResourceIndexRecord * first /* r26 */, struct ResourceIndexRecord * last /* r27 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r28 */) {}

// Range: 0x802AC2E8 -> 0x802AC3BC
void insertion_sort(struct ResourceIndexRecord * first /* r26 */, struct ResourceIndexRecord * last /* r27 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r28 */) {
    // Local variables
    struct ResourceIndexRecord * iCurrent; // r31
    struct ResourceIndexRecord * iNext; // r30
    struct ResourceIndexRecord * iSorted; // r29
    struct ResourceIndexRecord temp; // r1+0x8
}

// Range: 0x802AC3BC -> 0x802AC528
void partial_sort(struct ResourceIndexRecord * first /* r28 */, struct ResourceIndexRecord * middle /* r29 */, struct ResourceIndexRecord * last /* r30 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r31 */) {
    // Local variables
    struct ResourceIndexRecord * i; // r26
    struct ResourceIndexRecord temp; // r1+0x2C
}

// Range: 0x802AC528 -> 0x802AD1F0
void quick_sort_impl(struct ResourceIndexRecord * first /* r28 */, struct ResourceIndexRecord * last /* r29 */, long kRecursionCount /* r30 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r31 */) {
    // Local variables
    struct ResourceIndexRecord * const position; // r20
}

// Range: 0x802AD1F0 -> 0x802AD2DC
struct ResourceIndexRecord * get_partition(struct ResourceIndexRecord * first /* r28 */, struct ResourceIndexRecord * last /* r29 */, struct ResourceIndexRecord & pivotValue /* r30 */, unsigned char (* compare)(struct ResourceIndexRecord &) /* r31 */) {}


