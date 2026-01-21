/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptScriptColour.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033069C -> 0x8033126C
*/
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x8045F400
// Range: 0x8033069C -> 0x80330768
// this: r30
AptScriptColour::AptScriptColour(class AptValue * const pMovie /* r31 */) {
    // Local variables
    class AptCIH * pCih; // r31

    // References
    // -> static char __PRETTY_FUNCTION__[51];
    // -> struct [anonymous] __vt__15AptScriptColour;
}

// Range: 0x80330768 -> 0x803307C4
// this: r30
AptScriptColour::~AptScriptColour() {}

static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045F448
// Range: 0x803307C4 -> 0x803308C0
void AptScriptColour::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_setTransform;
    // -> class AptNativeFunction * psMethod_getTransform;
    // -> class AptNativeFunction * psMethod_getRGB;
    // -> static char __PRETTY_FUNCTION__[40];
    // -> class AptNativeFunction * psMethod_setRGB;
}

static char __PRETTY_FUNCTION__[85]; // size: 0x55, address: 0x8045F470
// Range: 0x803308C0 -> 0x80330AEC
class AptValue * AptScriptColour::objectMemberLookup(const class EAStringC * const pName /* r31 */) {
    // References
    // -> class AptNativeFunction * psMethod_setTransform;
    // -> class AptNativeFunction * psMethod_getTransform;
    // -> class AptNativeFunction * psMethod_getRGB;
    // -> static char __PRETTY_FUNCTION__[85];
    // -> class AptNativeFunction * psMethod_setRGB;
}

class AptNativeFunction * psMethod_setRGB; // size: 0x4, address: 0x805DC4A8
// Range: 0x80330AEC -> 0x80330C14
class AptValue * AptScriptColour::sMethod_setRGB(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pParam; // r31
    class AptCIH * pSpr; // r30
    int nInt; // r0
    float r; // f1
    float g; // f31
    float b; // f30

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_getRGB; // size: 0x4, address: 0x805DC4AC
// Range: 0x80330C14 -> 0x80330CB4
class AptValue * AptScriptColour::sMethod_getRGB() {
    // Local variables
    class AptCIH * pSpr; // r30
    int iTemp; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getTransform; // size: 0x4, address: 0x805DC4B0
// Range: 0x80330CB4 -> 0x80330F00
class AptValue * AptScriptColour::sMethod_getTransform() {
    // Local variables
    class AptScriptColour * pTemp; // r0
    class AptCIH * pSpr; // r30
    class AptInteger * pRA; // r29
    class AptInteger * pGA; // r29
    class AptInteger * pBA; // r29
    class AptInteger * pAA; // r29
    class AptInteger * pRB; // r29
    class AptInteger * pGB; // r29
    class AptInteger * pBB; // r29
    class AptInteger * pAB; // r29

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setTransform; // size: 0x4, address: 0x805DC4B4
// Range: 0x80330F00 -> 0x803311B4
class AptValue * AptScriptColour::sMethod_setTransform(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pParam; // r31
    class AptScriptColour * pTemp; // r0
    class AptCIH * pSpr; // r30
    class AptObject * pObject; // r31
    class AptValue * pRA; // r0
    class AptValue * pRB; // r0
    class AptValue * pGA; // r0
    class AptValue * pGB; // r0
    class AptValue * pBA; // r0
    class AptValue * pBB; // r0
    class AptValue * pAA; // r0
    class AptValue * pAB; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803311B4 -> 0x80331200
// this: r31
void AptScriptColour::RegisterReferences() const {
    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

static char __PRETTY_FUNCTION__[37]; // size: 0x25, address: 0x8045F4C8
// Range: 0x80331200 -> 0x8033126C
// this: r31
void AptScriptColour::DestroyGCPointers() {
    // References
    // -> static char __PRETTY_FUNCTION__[37];
}

// total size: 0x44
struct {} __vt__15AptScriptColour; // size: 0x44, address: 0x8045F4F0

