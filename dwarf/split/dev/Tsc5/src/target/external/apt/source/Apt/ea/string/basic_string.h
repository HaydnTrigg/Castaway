/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\ea\string\basic_string.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FE1F4 -> 0x802FEB84
*/
// Range: 0x802FE1F4 -> 0x802FE278
// this: r30
BasicString::~BasicString() {}

// Range: 0x802FE278 -> 0x802FE284
void BasicString::operator delete() {}

// Range: 0x802FE284 -> 0x802FE288
char * BasicString::ReAllocRaw() {}

// Range: 0x802FE288 -> 0x802FE28C
struct AptFileSavedInputState * BasicString::ReAlloc() {}

// Range: 0x802FE28C -> 0x802FE2A4
unsigned char BasicString::DoingSmallStringOptimization() {}

// Range: 0x802FE2A4 -> 0x802FE2FC
// this: r31
BasicString::BasicString() {}

// Range: 0x802FE2FC -> 0x802FE308
UseCapacity::UseCapacity() {}

// Range: 0x802FE308 -> 0x802FE38C
// this: r30
BasicString::~BasicString() {}

// Range: 0x802FE38C -> 0x802FE398
void BasicString::operator delete() {}

// Range: 0x802FE398 -> 0x802FE39C
char * BasicString::ReAllocRaw() {}

// Range: 0x802FE39C -> 0x802FE3A0
class AptSharedPtr * BasicString::ReAlloc() {}

// Range: 0x802FE3A0 -> 0x802FE3B8
unsigned char BasicString::DoingSmallStringOptimization() {}

// Range: 0x802FE3B8 -> 0x802FE410
// this: r31
BasicString::BasicString() {}

// Range: 0x802FE410 -> 0x802FE464
// this: r31
void BasicString::PushBack(const struct AptFileSavedInputState & c /* r1+0x8 */) {}

// Range: 0x802FE464 -> 0x802FE6D0
// this: r27
void BasicString::Insert(const struct AptFileSavedInputState * const & begin /* r28 */, const struct AptFileSavedInputState * const & end /* r29 */, const struct DbgIterator & at /* r30 */) {
    // Local variables
    int distance; // r26
    int newSize; // r31
    int newCapacity; // r26
    int insertPos; // r30
}

// Range: 0x802FE6D0 -> 0x802FE6E8
struct DbgIterator DbgIteratorBase::operator+() {}

// Range: 0x802FE6E8 -> 0x802FE718
// this: r31
DbgIterator::DbgIterator() {}

// Range: 0x802FE718 -> 0x802FE728
DbgIteratorBase::DbgIteratorBase() {}

// Range: 0x802FE728 -> 0x802FE850
// this: r29
void BasicString::Reserve(int capacity /* r30 */) {
    // Local variables
    struct AptFileSavedInputState * string; // r31
}

// Range: 0x802FE850 -> 0x802FE880
// this: r31
struct AptFileSavedInputState & DbgIterator::operator*() const {}

// Range: 0x802FE880 -> 0x802FE8B4
void DbgIteratorBase::Validate() {}

// Range: 0x802FE8B4 -> 0x802FE8EC
// this: r31
struct DbgIterator DbgIteratorBase::operator++() {}

// Range: 0x802FE938 -> 0x802FE940
void UseCapacity::Capacity() {}

// Range: 0x802FE940 -> 0x802FE950
struct DbgIterator & DbgIteratorBase::operator--() {}

// Range: 0x802FE950 -> 0x802FE99C
// this: r30
int DbgIteratorBase::operator-(const class DbgIteratorBase & other /* r31 */) const {}

// Range: 0x802FE99C -> 0x802FE9D4
void DbgIteratorBase::AssertSameRange() {}

// Range: 0x802FE9D4 -> 0x802FEA20
// this: r30
unsigned char DbgIteratorBase::operator==(const struct DbgIterator & other /* r31 */) const {}

// Range: 0x802FEA20 -> 0x802FEA28
int UseCapacity::Capacity() {}

// Range: 0x802FEA28 -> 0x802FEA78
// this: r30
unsigned char DbgIteratorBase::operator!=(const struct DbgIterator & other /* r31 */) const {}

// Range: 0x802FEA78 -> 0x802FEAC8
struct DbgIterator BasicString::End() {}

// Range: 0x802FEAC8 -> 0x802FEAD8
struct DbgIterator DbgIteratorFactory::End() {}

// Range: 0x802FEAD8 -> 0x802FEAE4
DbgIteratorFactory::DbgIteratorFactory() {}

// Range: 0x802FEAE4 -> 0x802FEAF4
struct DbgIterator & DbgIteratorBase::operator++() {}

// Range: 0x802FEAF4 -> 0x802FEB24
// this: r31
struct AptFileSavedInputState * DbgIterator::operator->() const {}

// Range: 0x802FEB24 -> 0x802FEB74
struct DbgIterator BasicString::Begin() {}

// Range: 0x802FEB74 -> 0x802FEB84
struct DbgIterator DbgIteratorFactory::Begin() {}


// Range: 0x80323B28 -> 0x80323C80
// this: r29
void BasicString::Swap(class BasicString & other /* r30 */) {
    // Local variables
    int size; // r5
    int capa; // r31
    unsigned char doingSmallString; // r0
    unsigned char otherDoingSmallString; // r0
    class AptSharedPtr * otherString; // r0
    class AptSharedPtr * string; // r4
    class AptSharedPtr s[2]; // r1+0x10
}

// Range: 0x80323C80 -> 0x80323DCC
// this: r29
void BasicString::Swap(class BasicString & other /* r30 */) {
    // Local variables
    int size; // r5
    int capa; // r31
    unsigned char doingSmallString; // r0
    unsigned char otherDoingSmallString; // r0
    struct AptFileSavedInputState * otherString; // r0
    struct AptFileSavedInputState * string; // r4
    struct AptFileSavedInputState s[2]; // r1+0x10
}

// Range: 0x80323DCC -> 0x80323E1C
// this: r30
unsigned char DbgIteratorBase::operator!=(const struct DbgIterator & other /* r31 */) const {}

// Range: 0x80323E1C -> 0x80323E54
void DbgIteratorBase::AssertSameRange() {}

// Range: 0x80323E54 -> 0x80323EA4
struct DbgIterator BasicString::End() {}

// Range: 0x80323EA4 -> 0x80323EB4
struct DbgIterator DbgIteratorFactory::End() {}

// Range: 0x80323EB4 -> 0x80323EE4
// this: r31
DbgIterator::DbgIterator() {}

// Range: 0x80323EE4 -> 0x80323EF4
DbgIteratorBase::DbgIteratorBase() {}

// Range: 0x80323EF4 -> 0x80323F00
DbgIteratorFactory::DbgIteratorFactory() {}

// Range: 0x80323F00 -> 0x80323F10
struct DbgIterator & DbgIteratorBase::operator++() {}

// Range: 0x80323F10 -> 0x80323F40
// this: r31
class AptSharedPtr & DbgIterator::operator*() const {}

// Range: 0x80323F40 -> 0x80323F74
void DbgIteratorBase::Validate() {}

// Range: 0x80323F74 -> 0x80323FC4
struct DbgIterator BasicString::Begin() {}

// Range: 0x80323FC4 -> 0x80323FD4
struct DbgIterator DbgIteratorFactory::Begin() {}

// Range: 0x80323FD4 -> 0x80323FDC
int BasicString::Size() {}

// Range: 0x80323FDC -> 0x80324030
// this: r31
void BasicString::PushBack(const class AptSharedPtr & c /* r1+0x8 */) {}

// Range: 0x80324030 -> 0x803242A4
// this: r27
void BasicString::Insert(const class AptSharedPtr * const & begin /* r28 */, const class AptSharedPtr * const & end /* r29 */, const struct DbgIterator & at /* r30 */) {
    // Local variables
    int distance; // r26
    int newSize; // r31
    int newCapacity; // r26
    int insertPos; // r30
}

// Range: 0x803242A4 -> 0x803242BC
struct DbgIterator DbgIteratorBase::operator+() {}

// Range: 0x803242BC -> 0x803243E8
// this: r29
void BasicString::Reserve(int capacity /* r30 */) {
    // Local variables
    class AptSharedPtr * string; // r31
}

// Range: 0x803243E8 -> 0x80324420
// this: r31
struct DbgIterator DbgIteratorBase::operator++() {}

// Range: 0x8032446C -> 0x8032447C
struct DbgIterator & DbgIteratorBase::operator--() {}

// Range: 0x8032447C -> 0x803244C8
// this: r30
int DbgIteratorBase::operator-(const class DbgIteratorBase & other /* r31 */) const {}

// Range: 0x803244C8 -> 0x80324514
// this: r30
unsigned char DbgIteratorBase::operator==(const struct DbgIterator & other /* r31 */) const {}


