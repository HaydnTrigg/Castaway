/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_redblacktree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802699A4 -> 0x8026A618
*/
// Range: 0x802699A4 -> 0x802699C0
ERedBlackTree::ERedBlackTree() {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x802699C0 -> 0x80269A44
void ERedBlackTree::RotateLeft() {
    // Local variables
    struct ERedBlackTreeNode * y; // r7

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269A44 -> 0x80269AC8
void ERedBlackTree::RotateRight() {
    // Local variables
    struct ERedBlackTreeNode * y; // r7

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269AC8 -> 0x80269C24
// this: r29
void ERedBlackTree::InsertFixup(struct ERedBlackTreeNode * x /* r30 */) {
    // Local variables
    struct ERedBlackTreeNode * y; // r3
}

// Range: 0x80269C24 -> 0x80269C90
// this: r30
unsigned int & ERedBlackTree::operator[](unsigned int key /* r31 */) {
    // Local variables
    struct ERedBlackTreeNode * pParent; // r4
    class RBIteratorPtrType * i; // r0
}

// Range: 0x80269C90 -> 0x80269CD4
struct ERedBlackTreeNode * ERedBlackTree::FindKeyOrParent() {
    // Local variables
    struct ERedBlackTreeNode * pCurrent; // r3
    struct ERedBlackTreeNode * pParent; // r0

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269CD4 -> 0x80269D50
class RBIteratorPtrType * ERedBlackTree::SetValue(unsigned int key /* r9 */) {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269D50 -> 0x80269E14
class RBIteratorPtrType * ERedBlackTree::Insert(unsigned int key /* r9 */) {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269E14 -> 0x80269F94
// this: r30
class RBIteratorPtrType * ERedBlackTree::InsertAt(struct ERedBlackTreeNode * pParent /* r27 */, unsigned int key /* r28 */, unsigned int value /* r29 */) {
    // Local variables
    struct ERedBlackTreeNode * x; // r31

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80269F94 -> 0x8026A16C
// this: r28
void ERedBlackTree::RemoveFixup(struct ERedBlackTreeNode * x /* r29 */) {
    // Local variables
    struct ERedBlackTreeNode * w; // r4
    struct ERedBlackTreeNode * w; // r4
}

// Range: 0x8026A16C -> 0x8026A1BC
// this: r31
unsigned char ERedBlackTree::Remove() {
    // Local variables
    class RBIteratorPtrType * i; // r4
}

// Range: 0x8026A1BC -> 0x8026A3AC
// this: r29
void ERedBlackTree::Remove(class RBIteratorPtrType * i /* r30 */) {
    // Local variables
    struct ERedBlackTreeNode * z; // [invalid]
    struct ERedBlackTreeNode * y; // r31
    struct ERedBlackTreeNode * x; // r6
    unsigned char swapY; // r28

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x8026A3AC -> 0x8026A3FC
class RBIteratorPtrType * ERedBlackTree::Find() {
    // Local variables
    struct ERedBlackTreeNode * pCurrent; // r3

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x8026A3FC -> 0x8026A464
// this: r30
void ERedBlackTree::RemoveAll() {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x8026A464 -> 0x8026A484
int ERedBlackTree::GetSize() {}

// Range: 0x8026A484 -> 0x8026A50C
// this: r29
class ERedBlackTree & ERedBlackTree::operator=(const class ERedBlackTree & s /* r30 */) {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x8026A50C -> 0x8026A618
// this: r28
void ERedBlackTree::SetValues(unsigned char allowDuplicates /* r29 */) {
    // Local variables
    class RBIteratorPtrType * i; // r30
    unsigned int key; // r0

    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}


