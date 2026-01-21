/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptRenderingContext.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80329B40 -> 0x8032A010
*/
// Range: 0x80329B40 -> 0x80329B90
AptRenderingContext::AptRenderingContext() {}

// Range: 0x80329B90 -> 0x80329BB0
void AptRenderingContext::pushColourTransform() {}

// Range: 0x80329BB0 -> 0x80329BCC
void AptRenderingContext::popColourTransform() {}

// Range: 0x80329BCC -> 0x80329C60
void AptRenderingContext::appendColourTransform() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80329C60 -> 0x80329C88
// this: r5
void AptRenderingContext::getVertexMatrix() {
    // References
    // -> struct AptMatrix gIdentityMatrix;
}

// Range: 0x80329C88 -> 0x80329CA8
void AptRenderingContext::pushVertexMatrix() {}

// Range: 0x80329CA8 -> 0x80329D08
// this: r31
void AptRenderingContext::popVertexMatrix() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80329D08 -> 0x80329E0C
void AptRenderingContext::multMatrix() {
    // Local variables
    struct AptMatrix temp; // r1+0x20
    struct AptMatrix temp2; // r1+0x8
}

// Range: 0x80329E0C -> 0x80329E58
// this: r31
void AptRenderingContext::appendVertexMatrix() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80329E58 -> 0x8032A010
void AptRenderingContext::expandBoundingRect() {
    // Local variables
    float x[4]; // r1+0x38
    float y[4]; // r1+0x28
    float xfX[4]; // r1+0x18
    float xfY[4]; // r1+0x8
    int i; // r5
}


