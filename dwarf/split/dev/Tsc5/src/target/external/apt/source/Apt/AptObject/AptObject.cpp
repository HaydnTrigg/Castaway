/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptObject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80330224 -> 0x80330540
*/
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045F2E0
// Range: 0x80330224 -> 0x80330290
// this: r31
void AptPrototype::DestroyGCPointers() {
    // References
    // -> static char __PRETTY_FUNCTION__[34];
}

// Range: 0x80330290 -> 0x803302E0
// this: r31
void AptPrototype::RegisterReferences() const {
    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

// Range: 0x803302E0 -> 0x80330320
class AptValue * AptObject::objectMemberLookup() {
    // References
    // -> class AptNativeFunction * gpObjRegistrationFunc;
}

// Range: 0x80330320 -> 0x80330324
void AptObject::RegisterReferences() {}

// Range: 0x80330324 -> 0x80330328
void AptObject::DestroyGCPointers() {}

// Range: 0x80330328 -> 0x803303A4
// this: r29
void AptObject::SetImplementedObjects(class AptArray * paImplementedObjects /* r30 */, int nNumObjects /* r31 */) {
    // Local variables
    class EAStringC sTmp; // r1+0x8
}

// Range: 0x803303A4 -> 0x80330418
// this: r31
class AptArray * AptObject::GetImplementedObjects() const {
    // Local variables
    class EAStringC sTmp; // r1+0x8
}

// Range: 0x80330418 -> 0x80330540
// this: r28
unsigned char AptObject::DoesImplementObject(class AptValue * pPrototype /* r29 */) const {
    // Local variables
    class AptValue * pProto; // r31
    class EAStringC sTmp; // r1+0x8
    class AptArray * pTmp; // r31
    unsigned int i; // r30
}

// total size: 0x44
struct {} __vt__9AptObject; // size: 0x44, address: 0x8045F358
// total size: 0x44
struct {} __vt__12AptPrototype; // size: 0x44, address: 0x8045F39C

