/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_floattree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026199C -> 0x802622A0
*/
// Range: 0x8026199C -> 0x802619B8
EFloatTree::EFloatTree() {
    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x802619B8 -> 0x80261A3C
void EFloatTree::RotateLeft() {
    // Local variables
    struct EFloatTreeNode * y; // r7

    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x80261A3C -> 0x80261AC0
void EFloatTree::RotateRight() {
    // Local variables
    struct EFloatTreeNode * y; // r7

    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x80261AC0 -> 0x80261C1C
// this: r29
void EFloatTree::InsertFixup(struct EFloatTreeNode * x /* r30 */) {
    // Local variables
    struct EFloatTreeNode * y; // r3
}

// Range: 0x80261C1C -> 0x80261CD0
class FTIteratorPtrType * EFloatTree::Insert() {
    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x80261CD0 -> 0x80261E70
// this: r31
class FTIteratorPtrType * EFloatTree::InsertAt(struct EFloatTreeNode * pParent /* r28 */, float key /* f31 */, unsigned int value /* r29 */) {
    // Local variables
    struct EFloatTreeNode * x; // r30

    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x80261E70 -> 0x80262048
// this: r28
void EFloatTree::RemoveFixup(struct EFloatTreeNode * x /* r29 */) {
    // Local variables
    struct EFloatTreeNode * w; // r4
    struct EFloatTreeNode * w; // r4
}

// Range: 0x80262048 -> 0x80262238
// this: r29
void EFloatTree::Remove(class FTIteratorPtrType * i /* r30 */) {
    // Local variables
    struct EFloatTreeNode * z; // [invalid]
    struct EFloatTreeNode * y; // r31
    struct EFloatTreeNode * x; // r6
    unsigned char swapY; // r28

    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}

// Range: 0x80262238 -> 0x802622A0
// this: r30
void EFloatTree::RemoveAll() {
    // References
    // -> struct EFloatTreeSentinel m_sentinel;
}


