/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\wallpost.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800955F4 -> 0x80095AB0
*/
// Range: 0x800955F4 -> 0x80095660
// this: r30
WallPostCollection::~WallPostCollection() {
    // References
    // -> struct [anonymous] __vt__18WallPostCollection;
}

// Range: 0x80095660 -> 0x800956C0
// this: r30
WallPostStorage::~WallPostStorage() {
    // References
    // -> struct [anonymous] __vt__15WallPostStorage;
}

// Range: 0x800956C0 -> 0x8009571C
// this: r31
void WallPostStorage::Deallocate() {}

// Range: 0x8009571C -> 0x80095764
// this: r31
WallPostCollection::WallPostCollection() {
    // References
    // -> struct [anonymous] __vt__18WallPostCollection;
}

// Range: 0x80095764 -> 0x80095790
WallPostStorage::WallPostStorage() {
    // References
    // -> struct [anonymous] __vt__15WallPostStorage;
}

// Range: 0x80095790 -> 0x80095830
// this: r31
void WallPostStorage::Allocate() {
    // Local variables
    unsigned int i; // r6
}

// Range: 0x80095830 -> 0x80095838
enum PostHeight WallPostInstance::GetHeight() {}

// Range: 0x80095838 -> 0x80095840
enum PostStyle WallPostInstance::GetStyle() {}

// Range: 0x80095840 -> 0x800958E4
// this: r28
void WallPostStorage::Set(unsigned char x /* r29 */, unsigned char y /* r30 */, class WallPostInstance * value /* r31 */) {}

// Range: 0x800958E4 -> 0x8009590C
unsigned int WallPostStorage::Index(unsigned char x /* r3 */, unsigned char y /* r5 */) {}

// Range: 0x8009590C -> 0x80095920
unsigned char WallPostStorage::GetYSize() {}

// Range: 0x80095920 -> 0x80095934
unsigned char WallPostStorage::GetXSize() {}

// Range: 0x80095934 -> 0x800959B0
// this: r28
WallPostInstance::WallPostInstance(enum PostHeight height /* r29 */, enum PostStyle style /* r30 */, class ERLevel * pLevel /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16WallPostInstance;
}

// Range: 0x800959B0 -> 0x80095A50
// this: r29
class WallPostInstance * WallPostStorage::Get(unsigned char x /* r30 */, unsigned char y /* r31 */) const {}

// Range: 0x80095A50 -> 0x80095A58
void WallPostInstance::SetStyle() {}

// Range: 0x80095A58 -> 0x80095AB0
// this: r30
WallPostInstance::~WallPostInstance() {}


