/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptStageMembers.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A794 -> 0x8032A8EC
*/
static unsigned char lengthtable[6]; // size: 0x6, address: 0x805DA9D0
// total size: 0x8
struct StageMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct StageMembers wordlist[6]; // size: 0x30, address: 0x8045DE38
static signed char lookup[15]; // size: 0xF, address: 0x8045DE68
// total size: 0x1
class StageMembersIndex {};
// Range: 0x8032A794 -> 0x8032A868
struct StageMembers * StageMembersIndex::in_word_set(const char * str /* r29 */, unsigned int len /* r30 */) {
    // Local variables
    int key; // r0
    int index; // r5
    const char * s; // r4

    // References
    // -> static struct StageMembers wordlist[6];
    // -> static unsigned char lengthtable[6];
    // -> static signed char lookup[15];
}

// Range: 0x8032A868 -> 0x8032A8EC
unsigned int StageMembersIndex::hash() {
    // Local variables
    unsigned char asso_values[256]; // r1+0x8
    int hval; // r4
}


