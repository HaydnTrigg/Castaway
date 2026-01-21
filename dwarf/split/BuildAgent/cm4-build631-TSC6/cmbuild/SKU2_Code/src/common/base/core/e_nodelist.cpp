/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_nodelist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80268770 -> 0x80268B14
*/
// Range: 0x80268770 -> 0x802687C8
void ENodeList::Remove() {}

// Range: 0x802687C8 -> 0x8026883C
// this: r30
class NLIteratorPtrType * ENodeList::AddHead(unsigned int data /* r31 */) {
    // Local variables
    struct ENodeListNode * i; // r3
}

// Range: 0x8026883C -> 0x802688B0
// this: r30
class NLIteratorPtrType * ENodeList::AddTail(unsigned int data /* r31 */) {
    // Local variables
    struct ENodeListNode * i; // r3
}

// Range: 0x802688B0 -> 0x8026894C
// this: r28
void ENodeList::AddTail() {
    // Local variables
    class NLIteratorPtrType * i; // r4
}

// Range: 0x8026894C -> 0x802689F0
// this: r29
class NLIteratorPtrType * ENodeList::InsertAfter(class NLIteratorPtrType * target /* r30 */, unsigned int data /* r31 */) {
    // Local variables
    struct ENodeListNode * i; // r3
}

// Range: 0x802689F0 -> 0x80268A4C
// this: r30
void ENodeList::RemoveAll() {
    // Local variables
    class NLIteratorPtrType * i; // r4
}

// Range: 0x80268A4C -> 0x80268A6C
int ENodeList::GetSize() {
    // Local variables
    int count; // r3
    class NLIteratorPtrType * i; // r4
}

// Range: 0x80268A6C -> 0x80268A94
class NLIteratorPtrType * ENodeList::Search() {
    // Local variables
    class NLIteratorPtrType * i; // r3
}

// Range: 0x80268A94 -> 0x80268B14
// this: r29
void ENodeList::MoveContents(class ENodeList & source /* r30 */) {}


