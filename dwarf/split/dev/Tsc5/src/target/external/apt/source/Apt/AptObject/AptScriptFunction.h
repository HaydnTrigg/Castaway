/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptScriptFunction.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030C064 -> 0x8030C1E0
*/
// Range: 0x8030C064 -> 0x8030C0B8
void AptScriptFunctionBase::SetInLocalScope(class EAStringC * pVarName /* r30 */, class AptValue * pValue /* r31 */) {
    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x8030C0B8 -> 0x8030C150
// this: r31
void AptScriptFunctionBase::CreateFrameStack() {
    // References
    // -> static char __PRETTY_FUNCTION__[42];
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x8030C150 -> 0x8030C180
unsigned char AptScriptFunctionBase::SetWhereExistsInScopeChain() {
    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x8030C180 -> 0x8030C1B0
class AptValue * AptScriptFunctionBase::GetInScopeChain() {
    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x8030C1B0 -> 0x8030C1E0
unsigned char AptScriptFunctionBase::ExistsInLocalScope() {
    // References
    // -> class AptFrameStack * spFrameStack;
}


// Range: 0x80331F8C -> 0x80331FA0
void AptScriptFunctionBase::CreatingNestedFunction() {
    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x80331FA0 -> 0x80331FAC
char * AptScriptFunction1::GetName() {}

// Range: 0x80331FAC -> 0x80331FB8
unsigned int AptScriptFunction1::GetNumArguments() {}

// Range: 0x80331FB8 -> 0x80331FC4
unsigned char * AptScriptFunction1::GetByteCodeBase() {}

// Range: 0x80331FC4 -> 0x80331FD0
unsigned int AptScriptFunction1::GetByteCodeSize() {}

// Range: 0x80331FD0 -> 0x80331FE0
struct AptConstantPool AptScriptFunction1::GetConstantPool() {}

// Range: 0x80331FE0 -> 0x80332064
// this: r29
void AptScriptFunction1::SetArgument(class AptValue * pValue /* r30 */, int nIndex /* r31 */) {
    // Local variables
    class EAStringC strParam; // r1+0x8

    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x80332064 -> 0x803320B4
// this: r30
class AptScriptFunctionBase * AptScriptFunction1::Duplicate(class AptCIH * pCurCIH /* r31 */) {}

// Range: 0x803320B4 -> 0x803320C0
char * AptScriptFunction2::GetName() {}

// Range: 0x803320C0 -> 0x803320CC
unsigned int AptScriptFunction2::GetNumArguments() {}

// Range: 0x803320CC -> 0x803320D8
unsigned char * AptScriptFunction2::GetByteCodeBase() {}

// Range: 0x803320D8 -> 0x803320E4
unsigned int AptScriptFunction2::GetByteCodeSize() {}

// Range: 0x803320E4 -> 0x803320F4
struct AptConstantPool AptScriptFunction2::GetConstantPool() {}

// Range: 0x803320F4 -> 0x80332198
// this: r29
void AptScriptFunction2::SetArgument(class AptValue * pValue /* r30 */) {
    // Local variables
    class EAStringC sName; // r1+0x8

    // References
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x80332198 -> 0x803321E8
// this: r30
class AptScriptFunctionBase * AptScriptFunction2::Duplicate(class AptCIH * pCurCIH /* r31 */) {}

// Range: 0x803321E8 -> 0x803321F0
char * AptScriptFunctionByteCodeBlock::GetName() {}

// Range: 0x803321F0 -> 0x803321F8
unsigned int AptScriptFunctionByteCodeBlock::GetNumArguments() {}

// Range: 0x803321F8 -> 0x80332200
unsigned char * AptScriptFunctionByteCodeBlock::GetByteCodeBase() {}

// Range: 0x80332200 -> 0x80332208
unsigned int AptScriptFunctionByteCodeBlock::GetByteCodeSize() {}

// Range: 0x80332208 -> 0x80332218
// this: r4
struct AptConstantPool AptScriptFunctionByteCodeBlock::GetConstantPool() {}

// Range: 0x80332218 -> 0x8033221C
void AptScriptFunctionByteCodeBlock::SetArgument() {}

// Range: 0x8033221C -> 0x80332224
class AptScriptFunctionBase * AptScriptFunctionByteCodeBlock::Duplicate() {}

// Range: 0x80332224 -> 0x80332280
// this: r30
AptScriptFunctionByteCodeBlock::~AptScriptFunctionByteCodeBlock() {}


