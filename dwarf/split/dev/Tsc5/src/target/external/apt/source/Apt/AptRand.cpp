/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptRand.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80329914 -> 0x80329B40
*/
static unsigned int * s_RandNext; // size: 0x4, address: 0x805DC3E8
static int s_RandLeft; // size: 0x4, address: 0x805DA8E0
static unsigned int s_RandState[625]; // size: 0x9C4, address: 0x80545070
// Range: 0x80329914 -> 0x80329AA4
static unsigned int _randReloadMersenneTwister() {
    // Local variables
    unsigned int * p0; // r31
    unsigned int * p2; // r30
    unsigned int * pM; // r29
    unsigned int s0; // r0
    unsigned int s1; // r9
    int j; // r7

    // References
    // -> static unsigned int * s_RandNext;
    // -> static int s_RandLeft;
    // -> static unsigned int s_RandState[625];
}

// Range: 0x80329AA4 -> 0x80329AFC
unsigned int AptRand() {
    // Local variables
    unsigned int y; // r4

    // References
    // -> static unsigned int * s_RandNext;
    // -> static int s_RandLeft;
}

// Range: 0x80329AFC -> 0x80329B40
void AptSeedRand() {
    // Local variables
    unsigned int x; // r4
    unsigned int * s; // r5
    int j; // r3

    // References
    // -> static int s_RandLeft;
    // -> static unsigned int s_RandState[625];
}


