/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptFrameStack.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030C1E0 -> 0x8030C578
*/
// Range: 0x8030C1E0 -> 0x8030C1E8
void AptFrameStack::SetInLocalScope() {}

// Range: 0x8030C1E8 -> 0x8030C26C
// this: r30
AptFrameStack::AptFrameStack(class AptFrameStack * pParentScope /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[46];
    // -> struct [anonymous] __vt__13AptFrameStack;
}

// Range: 0x8030C2D8 -> 0x8030C358
// this: r30
AptFrameStack::AptFrameStack(class AptFrameStack * pParentScope /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[51];
    // -> struct [anonymous] __vt__13AptFrameStack;
}

// Range: 0x8030C358 -> 0x8030C3D8
unsigned char AptFrameStack::SetWhereExistsInScopeChain(class EAStringC * pVarName /* r29 */, class AptValue * pValue /* r30 */) {
    // Local variables
    class AptFrameStack * pF; // r31
}

// Range: 0x8030C3D8 -> 0x8030C438
class AptValue * AptFrameStack::GetInScopeChain(class EAStringC * pVarName /* r30 */) {
    // Local variables
    class AptFrameStack * pF; // r31
    class AptValue * pValue; // r0
}

// Range: 0x8030C438 -> 0x8030C468
unsigned char AptFrameStack::ExistsInLocalScope() {}

// Range: 0x8030C468 -> 0x8030C4CC
// this: r31
void AptFrameStack::DestroyGCPointers() {
    // References
    // -> static char __PRETTY_FUNCTION__[35];
}

// Range: 0x8030C4CC -> 0x8030C51C
// this: r31
void AptFrameStack::RegisterReferences() const {
    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

// Range: 0x8030C51C -> 0x8030C578
// this: r30
AptFrameStack::~AptFrameStack() {}


