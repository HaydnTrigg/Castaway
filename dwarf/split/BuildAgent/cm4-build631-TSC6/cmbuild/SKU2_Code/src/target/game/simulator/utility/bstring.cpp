/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\bstring.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801645FC -> 0x801650AC
*/
// Range: 0x801645FC -> 0x80164644
// this: r31
void basic_string_ref::delete_ptr() {}

// Range: 0x80164644 -> 0x80164680
void simple_allocator::deallocate(void * p /* r31 */) {}

// Range: 0x80164680 -> 0x80164684
void basic_string_ref::throwlength() {}

// Range: 0x80164684 -> 0x80164688
void basic_string_ref::throwrange() {}

// Range: 0x80164688 -> 0x801646E0
// this: r31
void BString::delete_ref() {}

// Range: 0x801646E0 -> 0x80164714
void simple_allocator::deallocate(void * p /* r31 */) {}

// Range: 0x80164714 -> 0x80164720
unsigned long BString::ref_count() {}

// Range: 0x80164720 -> 0x80164764
// this: r31
char * BString::data() const {}

// Range: 0x80164764 -> 0x80164770
char * BString::point() {}

// Range: 0x80164770 -> 0x80164774
char basic_string_ref::eos() {}

// Range: 0x80164774 -> 0x8016477C
char string_char_baggage::eos() {}

// Range: 0x8016477C -> 0x8016478C
basic_string_ref::basic_string_ref() {}

// Range: 0x8016478C -> 0x80164798
void string_char_baggage::assign() {}

// Range: 0x80164798 -> 0x801647E0
char * simple_allocator::allocate(unsigned long n /* r31 */) {}

// Range: 0x801647E0 -> 0x80164894
// this: r29
basic_string_ref::basic_string_ref(const class BString & str /* r30 */, unsigned long pos /* r31 */) {}

// Range: 0x80164894 -> 0x80164898
char * string_char_baggage::copy() {}

// Range: 0x80164898 -> 0x80164948
// this: r29
basic_string_ref::basic_string_ref(const char * s /* r30 */, unsigned long n /* r31 */) {}

// Range: 0x80164948 -> 0x80164A00
// this: r30
basic_string_ref::basic_string_ref(const char * s /* r31 */) {}

// Range: 0x80164A00 -> 0x80164A14
unsigned long string_char_baggage::length() {}

// Range: 0x80164A14 -> 0x80164A68
// this: r30
basic_string_ref::~basic_string_ref() {}

// Range: 0x80164A68 -> 0x80164A6C
char BString::eos() {}

// Range: 0x80164A6C -> 0x80164B7C
// this: r28
void BString::assign_str(const char * s /* r29 */, unsigned long slen /* r30 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80164B7C -> 0x80164BA8
class basic_string_ref * simple_allocator::allocate() {}

// Range: 0x80164BA8 -> 0x80164C74
// this: r27
int BString::compare_str(unsigned long pos /* r28 */, const char * str /* r29 */, unsigned long slen /* r30 */, unsigned long strlen /* r31 */) const {
    // Local variables
    int result; // r3
}

// Range: 0x80164C74 -> 0x80164C78
int string_char_baggage::compare() {}

// Range: 0x80164C78 -> 0x80164C94
BString::BString() {
    // References
    // -> class basic_string_ref defaultReference;
}

// Range: 0x80164C94 -> 0x80164CF0
// this: r30
BString::BString(const char * s /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80164CF0 -> 0x80164D44
// this: r30
BString::~BString() {}

// Range: 0x80164D44 -> 0x80164DFC
// this: r29
class BString & BString::operator=(const class BString & str /* r30 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80164DFC -> 0x80164E4C
// this: r30
class BString & BString::operator=(const char * s /* r31 */) {}

// Range: 0x80164E4C -> 0x80164E9C
// this: r30
class BString & BString::assign(const char * s /* r31 */) {}

// Range: 0x80164E9C -> 0x80164ECC
char * BString::c_str() {
    // Local variables
    const char * result; // r0
}

// Range: 0x80164ECC -> 0x80164F50
// this: r27
int BString::compare(const class BString & str /* r28 */, unsigned long pos /* r29 */, unsigned long n /* r30 */) const {}

// Range: 0x80164F50 -> 0x80164F80
unsigned char BString::operator==() {}

// Range: 0x80164F80 -> 0x80164F8C
unsigned long BString::length() {}

// Range: 0x80164F8C -> 0x80164F98
unsigned long BString::reserve() {}

// Range: 0x80164F98 -> 0x8016502C
// this: r28
class BString & BString::assignDebug() {
    // Local variables
    int len; // r30
    char * s; // r29
}

// Range: 0x8016502C -> 0x801650AC
static void __sinit_\game_simulator_utility_unity_cpp() {
    // References
    // -> class basic_string_ref2 defaultReference;
    // -> class BString2 s_empty;
    // -> class basic_string_ref defaultReference;
}


