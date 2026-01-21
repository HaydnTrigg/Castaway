/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\EASTL\1.03.00\include\EASTL\internal\hashtable.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801414F0 -> 0x80141D90
*/
// Range: 0x801414F0 -> 0x80141554
// this: r30
hashtable::~hashtable() {}

// Range: 0x80141554 -> 0x80141570
void hashtable::DoFreeBuckets() {}

// Range: 0x80141570 -> 0x801415AC
// this: r31
void hashtable::clear() {}

// Range: 0x801415AC -> 0x801415B4
struct pair & hashtable_iterator::operator*() {}

// Range: 0x801415B4 -> 0x801415D0
unsigned char operator!=() {}

// Range: 0x801415D0 -> 0x801415E4
struct hashtable_iterator hashtable::end() {}

// Range: 0x801415E4 -> 0x8014161C
// this: r31
hashtable_iterator::hashtable_iterator() {}

// Range: 0x8014161C -> 0x80141628
hashtable_iterator_base::hashtable_iterator_base() {}

// Range: 0x80141628 -> 0x801416E4
// this: r28
struct hashtable_iterator hashtable::find(const signed short & k /* r29 */) {
    // Local variables
    unsigned int c; // r30
    unsigned long n; // r0
    struct hash_node * const pNode; // r3
}

// Range: 0x801416E4 -> 0x80141720
// this: r31
hashtable_iterator::hashtable_iterator(const struct hashtable_iterator & x /* r5 */) {}

// Range: 0x80141720 -> 0x80141750
// this: r31
hashtable_iterator::hashtable_iterator() {}

// Range: 0x80141750 -> 0x801417D4
// this: r28
struct hash_node * hashtable::DoFindNode(struct hash_node * pNode /* r29 */, const signed short & k /* r30 */, unsigned int c /* r31 */) const {}

// Range: 0x801417D4 -> 0x80141820
// this: r30
unsigned char hash_code_base::compare(const signed short & key /* r31 */) const {}

// Range: 0x80141820 -> 0x80141830
unsigned int hash_code_base::bucket_index() {}

// Range: 0x80141830 -> 0x80141840
unsigned int mod_range_hashing::operator()() {}

// Range: 0x80141840 -> 0x8014184C
unsigned int hash_code_base::get_hash_code() {}

// Range: 0x8014184C -> 0x80141864
unsigned char operator==() {}

// Range: 0x80141864 -> 0x801418DC
// this: r26
void hashtable::DoFreeNodes(unsigned long n /* r27 */) {
    // Local variables
    unsigned long i; // r29
    struct hash_node * pNode; // r28
    struct hash_node * const pTempNode; // r0
}

// Range: 0x801418DC -> 0x801418E8
void hashtable::DoFreeNode() {}

// Range: 0x801418E8 -> 0x80141914
struct pair hashtable::insert() {}

// Range: 0x80141914 -> 0x801419D4
// this: r29
hashtable::hashtable(unsigned long nBucketCount /* r30 */, const struct hash & h1 /* r12 */, const struct mod_range_hashing & h2 /* r11 */, const struct default_ranged_hash & h /* r0 */, const class allocator & allocator /* r31 */) {}

// Range: 0x801419D4 -> 0x801419F4
void hashtable::reset() {
    // References
    // -> void * gpEmptyBucketArray[2];
}

// Range: 0x801419F4 -> 0x80141A0C
prime_rehash_policy::prime_rehash_policy() {}

// Range: 0x80141A0C -> 0x80141A10
hash_code_base::hash_code_base() {}

// Range: 0x80141A10 -> 0x80141A74
struct hash_node * * hashtable::DoAllocateBuckets(unsigned long n /* r30 */) {
    // Local variables
    struct hash_node * * const pBucketArray; // r30
}

// Range: 0x80141A74 -> 0x80141BF0
// this: r25
struct pair hashtable::DoInsertValue(const struct pair & value /* r26 */) {
    // Local variables
    const signed short & k; // r29
    unsigned int c; // r28
    unsigned long n; // r27
    struct hash_node * const pNode; // r3
    struct pair bRehash; // r1+0x20
    struct hash_node * const pNodeNew; // r30
}

// Range: 0x80141BF0 -> 0x80141BF4
void hash_code_base::set_code() {}

// Range: 0x80141C08 -> 0x80141CB8
// this: r26
void hashtable::DoRehash(unsigned long nNewBucketCount /* r27 */) {
    // Local variables
    struct hash_node * * const pBucketArray; // r0
    struct hash_node * pNode; // r29
    unsigned long i; // r28
    unsigned long nNewBucketIndex; // r0
}

// Range: 0x80141CB8 -> 0x80141D0C
// this: r30
unsigned int hash_code_base::bucket_index(unsigned int nBucketCount /* r31 */) const {}

// Range: 0x80141D0C -> 0x80141D7C
struct hash_node * hashtable::DoAllocateNode(const struct pair & value /* r30 */) {
    // Local variables
    struct hash_node * const pNode; // r31
}


// Range: 0x802E3D2C -> 0x802E3D58
struct pair hashtable::insert() {}

// Range: 0x802E3D58 -> 0x802E3DE4
// this: r31
hashtable::hashtable() {
    // References
    // -> void * gpEmptyBucketArray[2];
}

// Range: 0x802E3DE4 -> 0x802E3E58
struct hash_node * * hashtable::DoAllocateBuckets(unsigned long n /* r30 */) {
    // Local variables
    struct hash_node * * const pBucketArray; // r30
}

// Range: 0x802E3E58 -> 0x802E3F88
// this: r31
struct pair hashtable::DoInsertValue(const struct pair & value /* r29 */) {
    // Local variables
    const unsigned int & k; // r0
    unsigned long n; // r26
    struct hash_node * const pNode; // r0
    struct hash_node * const pNodeNew; // r0
}

// Range: 0x802E3F88 -> 0x802E4080
// this: r30
void hashtable::DoRehash(unsigned long nNewBucketCount /* r31 */) {
    // Local variables
    struct hash_node * * const pBucketArray; // r0
    struct hash_node * pNode; // r7
    unsigned long i; // r8
    unsigned long nNewBucketIndex; // r0
}

// Range: 0x802E4080 -> 0x802E40E8
struct hash_node * hashtable::DoAllocateNode(const struct pair & value /* r31 */) {
    // Local variables
    struct hash_node * const pNode; // r3
}


