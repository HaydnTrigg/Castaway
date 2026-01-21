/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptBasePtrStack.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803005A4 -> 0x80300678
*/
// Range: 0x803005A4 -> 0x80300618
// this: r31
void AptBasePtrStack::Pop() {
    // References
    // -> static char __PRETTY_FUNCTION__[33];
}

// Range: 0x80300618 -> 0x80300634
class AptValue * AptBasePtrStack::At() {}

// Range: 0x80300634 -> 0x80300678
void AptBasePtrStack::Push(class AptValue * element /* r8 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[44];
}


// Range: 0x8030AFC4 -> 0x8030B000
// this: r31
void AptBasePtrStack::Init() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030B000 -> 0x8030B054
// this: r31
void AptBasePtrStack::Shutdown() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030B054 -> 0x8030B070
void AptBasePtrStack::PushNoInc() {}

// Range: 0x8030B070 -> 0x8030B108
// this: r27
void AptBasePtrStack::Pop(int nItems /* r28 */) {
    // Local variables
    int iLoop; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[42];
}

// Range: 0x8030B108 -> 0x8030B1E0
// this: r31
void AptBasePtrStack::PopAndPush(int nItems /* r26 */, class AptValue * element /* r27 */) {
    // Local variables
    int iLoop; // r28

    // References
    // -> static char __PRETTY_FUNCTION__[61];
}

// Range: 0x8030B1E0 -> 0x8030B1E8
int AptBasePtrStack::GetSize() {}

// Range: 0x8030B1E8 -> 0x8030B288
// this: r27
void AptBasePtrStack::SafePop(int nItems /* r28 */) {
    // Local variables
    int iLoop; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[46];
}

// Range: 0x8030B288 -> 0x8030B2A0
void AptBasePtrStack::PopNoDec() {}

// Range: 0x8030B2A0 -> 0x8030B2A8
class AptValue * AptBasePtrStack::Top() {}

// Range: 0x8030B2A8 -> 0x8030B314
// this: r30
AptBasePtrStack::~AptBasePtrStack() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030B314 -> 0x8030B328
AptBasePtrStack::AptBasePtrStack() {}


