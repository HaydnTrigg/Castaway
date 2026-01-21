/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_storage.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026F2E0 -> 0x802707B4
*/
// Range: 0x8026F2E0 -> 0x8026FDBC
// this: r17
int EStream::WriteStructure(class EStorable & Root /* r18 */) {
    // Local variables
    int startPos; // r0
    class TNodeList objectsToStore; // r1+0x6C
    class TRedBlackTree storedObjectsToIndices; // r1+0x60
    int nStored; // r21
    class TRedBlackTree typesToListsOfIndices; // r1+0x54
    class TNodeList pointerOffsets; // r1+0x48
    class EMemoryWriteStream tempStream; // r1+0x78
    class TArray offsetsToObjects; // r1+0x3C
    class TArray sizesOfObjects; // r1+0x30
    class ETypeInfo * pType; // r23
    class TNodeList * pIndices; // r1+0x2C
    unsigned char newType; // r24
    int oldPos; // r1+0x28
    unsigned int * oldIndices; // r20
    unsigned int * newIndices; // r19
    int cStore; // r0
    int pass; // r18
    class RBIteratorPtrType * rbi; // r22
    int count; // r7
    class NLIteratorPtrType * nli; // r3
    class NLIteratorPtrType * poi; // r18
    int pointerOffset; // r11
    unsigned int pointerValue1; // r1+0x24
    unsigned int pointerValue2; // r5
    unsigned int pointerValue3; // r1+0x20

    // References
    // -> struct [anonymous] __vt__18EMemoryWriteStream;
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x8026FDBC -> 0x8026FF44
// this: r27
class EStorable * EStream::ReadStructure(unsigned int FirstWord /* r28 */) {
    // Local variables
    int nObjects; // r0
    int pos; // r29
    unsigned int key; // r1+0x14
    class ETypeInfo * pType; // r0
    unsigned short typeVersion; // r1+0xA
    int nCount; // r1+0x10
    int cObject; // r29
    unsigned char validate; // r1+0x8
    int root; // r1+0xC
    class EStorable * pRoot; // r29
}

// Range: 0x8026FF44 -> 0x80270178
class EStream & operator<<(class EStream & s /* r31 */, class EStorable * pD /* r28 */) {
    // References
    // -> struct ERedBlackTreeNode m_sentinel;
}

// Range: 0x80270178 -> 0x80270210
class EStream & operator>>(class EStream & s /* r30 */, class EStorable * & pD /* r31 */) {
    // Local variables
    unsigned int index; // r1+0x8
}

// Range: 0x80270210 -> 0x802702B8
// this: r27
int EStream::ReadString(char * szBuffer /* r28 */, int bufferSize /* r29 */) {
    // Local variables
    char c; // r1+0x8
    int pos; // r30
}

// Range: 0x802702B8 -> 0x80270358
// this: r29
int EStream::WriteString() {
    // Local variables
    int pos; // r30
}

// Range: 0x80270358 -> 0x80270360
class EFile * EStream::GetFile() {}

// Range: 0x80270360 -> 0x802703F4
class EStream & operator<<(class EStream & s /* r31 */) {}

// Range: 0x802703F4 -> 0x80270500
class EStream & operator<<(class EStream & s /* r30 */, const class EBound3 & b /* r31 */) {}

// Range: 0x80270500 -> 0x802705B8
class EStream & operator<<(class EStream & s /* r31 */) {}

// Range: 0x802705B8 -> 0x8027063C
class EStream & operator>>(class EStream & s /* r30 */, class EVec3 & v /* r31 */) {}

// Range: 0x8027063C -> 0x80270714
class EStream & operator>>(class EStream & s /* r30 */, class EBound3 & b /* r31 */) {}

// Range: 0x80270714 -> 0x802707B4
class EStream & operator>>(class EStream & s /* r30 */, class EBoundSphere & b /* r31 */) {}


