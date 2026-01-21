/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\relmatrix.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D75F0 -> 0x800D8018
*/
// Range: 0x800D75F0 -> 0x800D7620
class RelMatrix * RelMatrix::CreateInstance() {}

// Range: 0x800D7620 -> 0x800D7678
// this: r31
RelMatrixImpl::RelMatrixImpl() {
    // References
    // -> struct [anonymous] __vt__13RelMatrixImpl;
}

// Range: 0x800D7678 -> 0x800D7698
void RelMatrix::DestroyInstance() {}

// Range: 0x800D7698 -> 0x800D76AC
// this: r0
void RelInt::DoStream() {}

// Range: 0x800D76AC -> 0x800D76B4
unsigned char RelMatrixImpl::Init() {}

// Range: 0x800D76B4 -> 0x800D777C
// this: r26
void RelMatrixImpl::CopyTo(class RelMatrix & dest /* r27 */) {
    // Local variables
    class RelArray * * i; // r31
    int numValues; // r30
    int index; // r29
    class RelArray * currentArray; // r28
}

// Range: 0x800D777C -> 0x800D77D4
// this: r30
int RelMatrixImpl::GetArraySize() {
    // Local variables
    class RelArray * * array; // r0
}

// Range: 0x800D77D4 -> 0x800D785C
// this: r29
void RelMatrixImpl::RemoveArray(int key /* r30 */) {
    // Local variables
    class RelArray * * i; // r31
}

// Range: 0x800D785C -> 0x800D7978
// this: r28
void RelMatrixImpl::SetArraySize(int key /* r30 */, int numValues /* r29 */) {
    // Local variables
    class RelArray * * array; // r31
    class RelArray * r; // r30
    class RelInt fillVal; // r1+0x8
    int index; // r31
    int extraCount; // r29
}

// Range: 0x800D7978 -> 0x800D7980
RelInt::RelInt() {}

// Range: 0x800D7980 -> 0x800D79DC
// this: r30
void RelMatrixImpl::CreateNewArray(int key /* r31 */) {
    // Local variables
    class RelArray * newArray; // r1+0x8
}

// Range: 0x800D79DC -> 0x800D7A34
// this: r30
RelArray::RelArray(int inKey /* r31 */) {}

// Range: 0x800D7A34 -> 0x800D7AA8
// this: r29
class RelArray * * RelMatrixImpl::FindArray(int key /* r30 */) {
    // Local variables
    class RelArray * * i; // r31
}

// Range: 0x800D7AA8 -> 0x800D7B14
// this: r29
int RelMatrixImpl::GetValue(int index /* r30 */) {
    // Local variables
    class RelArray * * array; // r0
}

// Range: 0x800D7B14 -> 0x800D7C04
// this: r27
void RelMatrixImpl::SetValue(int key /* r28 */, int index /* r29 */, int value /* r30 */) {
    // Local variables
    class RelArray * * array; // r31
}

// Range: 0x800D7C04 -> 0x800D7C18
void ResetRelMatrixStats() {
    // References
    // -> static int numEntries;
    // -> static int numKeys;
    // -> static int numMatricies;
}

// Range: 0x800D7C18 -> 0x800D7C30
void LogRelMatrixStats() {
    // References
    // -> static unsigned char firstRun;
}

// Range: 0x800D7C30 -> 0x800D7DF0
// this: r27
void RelMatrixImpl::DoStream(class ReconBuffer * rb /* r28 */, int version /* r29 */) {
    // Local variables
    int i; // r31
    int mver; // r1+0x14
    int writeHUID; // r1+0x10
    int readHUID; // r1+0xC
    int size; // r31
    int cnt; // r30
    class RelArray * newArray; // r1+0x8

    // References
    // -> static int numEntries;
    // -> static int numKeys;
    // -> static int numMatricies;
}

// Range: 0x800D7DF0 -> 0x800D7E40
// this: r31
RelArray::RelArray() {}

// Range: 0x800D7E40 -> 0x800D7EB4
// this: r29
void RelArray::DoStream(class ReconBuffer * rb /* r30 */, int version /* r31 */) {}

// Range: 0x800D7EB4 -> 0x800D7F28
// this: r30
void RelMatrixImpl::Clear() {
    // Local variables
    class RelArray * * i; // r4
    class RelArray * del; // r31
}

// Range: 0x800D7F28 -> 0x800D7FA8
// this: r30
RelMatrixImpl::~RelMatrixImpl() {
    // References
    // -> struct [anonymous] __vt__13RelMatrixImpl;
}

// Range: 0x800D7FA8 -> 0x800D7FB0
int RelMatrixImpl::CountKeys() {}

// Range: 0x800D7FB0 -> 0x800D8018
// this: r30
int RelMatrixImpl::GetNthKey(int n /* r31 */) {}


