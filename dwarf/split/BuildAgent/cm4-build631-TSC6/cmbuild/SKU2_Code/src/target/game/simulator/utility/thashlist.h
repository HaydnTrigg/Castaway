/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\thashlist.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80140EC0 -> 0x801414F0
*/
// Range: 0x80140EC0 -> 0x80140EE8
unsigned char HashIterator::operator!=() {}

// Range: 0x80140EE8 -> 0x80140F28
unsigned char HashIterator::operator==() {}

// Range: 0x80140F28 -> 0x80140F9C
class ObjSelector * * HashIterator::operator++() {}

// Range: 0x80140F9C -> 0x80140FA4
class ObjSelector * * HashIterator::operator ObjSelector**() {}

// Range: 0x80140FC0 -> 0x8014103C
// this: r30
struct HashIterator HashList::begin(struct HashList * const this /* r31 */) {}

// Range: 0x8014103C -> 0x80141080
// this: r30
struct HashIterator HashList::end(struct HashList * const this /* r31 */) {}

// Range: 0x80141080 -> 0x80141090
HashIterator::HashIterator() {}

// Range: 0x80141090 -> 0x801410E4
// this: r30
HashList::~HashList() {}

// Range: 0x801410E4 -> 0x80141130
// this: r30
void HashList::clear() {
    // Local variables
    int i; // r31
}

// Range: 0x80141130 -> 0x80141184
void HashList::resetHash() {
    // Local variables
    class ObjSelector * node; // r31
    class ObjSelector * tmp; // r0
}

// Range: 0x80141184 -> 0x801411BC
// this: r31
HashList::HashList() {}

// Range: 0x801411BC -> 0x8014121C
// this: r29
int HashList::size() const {
    // Local variables
    int i; // r31
    int result; // r30
}

// Range: 0x8014121C -> 0x80141244
int HashList::getSize() {
    // Local variables
    class ObjSelector * node; // r3
    int result; // r4
}

// Range: 0x80141244 -> 0x80141290
// this: r30
class ObjSelector * HashList::findItem(const int & cmp /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x80141290 -> 0x8014131C
// this: r27
class ObjSelector * HashList::findItem(const int & cmp /* r28 */) {
    // Local variables
    class ObjSelector * node; // r30
    class ObjSelector * prev; // r29
}

// Range: 0x8014131C -> 0x80141378
// this: r30
struct HashIterator HashList::find(const int & cmp /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x80141378 -> 0x80141404
// this: r27
struct HashIterator HashList::find(struct HashList * const this /* r28 */, const int & cmp /* r29 */, unsigned int key /* r30 */) {
    // Local variables
    class ObjSelector * node; // r31
}

// Range: 0x80141404 -> 0x80141490
// this: r30
void HashList::removeNode(class ObjSelector * node /* r31 */) {
    // Local variables
    unsigned int key; // r0
    class ObjSelector * prev; // r4
}

// Range: 0x80141490 -> 0x801414DC
// this: r30
void HashList::addNode(class ObjSelector * node /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x801414DC -> 0x801414F0
void HashList::addNode() {}


// Range: 0x80212A1C -> 0x80212A70
// this: r30
HashList::~HashList() {}

// Range: 0x80212A70 -> 0x80212ABC
// this: r30
void HashList::clear() {
    // Local variables
    int i; // r31
}

// Range: 0x80212ABC -> 0x80212B10
void HashList::resetHash() {
    // Local variables
    class ECheatLookup * node; // r31
    class ECheatLookup * tmp; // r0
}

// Range: 0x80212B10 -> 0x80212B48
// this: r31
HashList::HashList() {}

// Range: 0x80212B48 -> 0x80212B5C
void HashList::addNode() {}

// Range: 0x80212B5C -> 0x80212B64
class ECheatLookup * * HashIterator::operator ECheatLookup**() {}

// Range: 0x80212B64 -> 0x80212B8C
unsigned char HashIterator::operator!=() {}

// Range: 0x80212B8C -> 0x80212BCC
unsigned char HashIterator::operator==() {}

// Range: 0x80212BCC -> 0x80212C10
// this: r30
struct HashIterator HashList::end(struct HashList * const this /* r31 */) {}

// Range: 0x80212C10 -> 0x80212C20
HashIterator::HashIterator() {}

// Range: 0x80212C3C -> 0x80212CB0
class ECheatLookup * * HashIterator::operator++() {}

// Range: 0x80212CB0 -> 0x80212D2C
// this: r30
struct HashIterator HashList::begin(struct HashList * const this /* r31 */) {}


