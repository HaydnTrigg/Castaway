/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptArray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803105B4 -> 0x80312194
*/
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045A650
// total size: 0x8
struct ArrayMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct ArrayMembers wordlist[28]; // size: 0xE0, address: 0x8045A690
// total size: 0x1
class ArrayMembersIndex {};
// Range: 0x803105B4 -> 0x80310608
// this: r31
AptArray::AptArray() {
    // References
    // -> struct [anonymous] __vt__8AptArray;
}

// Range: 0x80310608 -> 0x80310664
// this: r30
AptArray::~AptArray() {}

static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045A770
// Range: 0x80310664 -> 0x803108E8
void AptArray::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_sortOn;
    // -> class AptNativeFunction * psMethod_slice;
    // -> class AptNativeFunction * psMethod_splice;
    // -> class AptNativeFunction * psMethod_sort;
    // -> class AptNativeFunction * psMethod_reverse;
    // -> class AptNativeFunction * psMethod_unshift;
    // -> class AptNativeFunction * psMethod_shift;
    // -> class AptNativeFunction * psMethod_push;
    // -> class AptNativeFunction * psMethod_pop;
    // -> class AptNativeFunction * psMethod_join;
    // -> static char __PRETTY_FUNCTION__[33];
    // -> class AptNativeFunction * psMethod_concat;
}

static char __PRETTY_FUNCTION__[30]; // size: 0x1E, address: 0x8045A7A4
// Range: 0x803108E8 -> 0x803109A8
// this: r26
void AptArray::DestroyGCPointers() {
    // Local variables
    int i; // r27
    class AptValue * pValue; // r3

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> static char __PRETTY_FUNCTION__[30];
}

// Range: 0x803109A8 -> 0x80310A2C
// this: r30
void AptArray::RegisterReferences() const {
    // Local variables
    int i; // r31

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

// Range: 0x80310A2C -> 0x80310B04
// this: r28
void AptArray::_reserve(int nSize /* r0 */) {
    // Local variables
    int nCapSize; // r3
    class AptValue * * _aArray; // r29

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80310B04 -> 0x80310B7C
// this: r29
void AptArray::set(int nIndex /* r30 */, class AptValue * pValue /* r31 */) {}

// Range: 0x80310B7C -> 0x80310BC4
class AptValue * AptArray::get() {
    // Local variables
    class AptValue * pValue; // r3

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80310BC4 -> 0x80310C98
// this: r27
void AptArray::toString(class EAStringC & sBuf /* r28 */, const char * szSeparator /* r29 */) {
    // Local variables
    int i; // r31
    class AptValue * pValue; // r30
    class EAStringC sVal; // r1+0xC
}

static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045A7C4
// Range: 0x80310C98 -> 0x80311250
// this: r27
class AptValue * AptArray::objectMemberLookup(class AptValue * const pContext /* r28 */, const class EAStringC * const pName /* r29 */) const {
    // Local variables
    char * pEnd; // r1+0x8
    int nRet; // r30
    int nLen; // r0

    // References
    // -> class AptNativeFunction * psMethod_sortOn;
    // -> class AptNativeFunction * psMethod_slice;
    // -> class AptNativeFunction * psMethod_splice;
    // -> class AptNativeFunction * psMethod_sort;
    // -> class AptNativeFunction * psMethod_reverse;
    // -> class AptNativeFunction * psMethod_unshift;
    // -> class AptNativeFunction * psMethod_shift;
    // -> class AptNativeFunction * psMethod_push;
    // -> class AptNativeFunction * psMethod_pop;
    // -> class AptNativeFunction * psMethod_join;
    // -> static char __PRETTY_FUNCTION__[78];
    // -> class AptNativeFunction * psMethod_concat;
}

// Range: 0x80311250 -> 0x803112A0
static int _isIndex(const char * szName /* r31 */) {
    // Local variables
    int nNum; // r0
}

// Range: 0x803112A0 -> 0x80311330
unsigned char AptArray::objectMemberSet(class AptValue * const pContext /* r29 */, const class EAStringC * const pName /* r31 */, class AptValue * const pValue /* r30 */) {
    // Local variables
    int nNum; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_concat; // size: 0x4, address: 0x805DC210
// Range: 0x80311330 -> 0x80311460
class AptValue * AptArray::sMethod_concat(class AptValue * pThis /* r27 */, int nParams /* r26 */) {
    // Local variables
    class AptArray * pArray; // r30
    class AptArray * pNewArray; // r29
    int i; // r31
    class AptValue * pValue; // r28
    class AptArray * pArray2; // r28
    int j; // r27

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_join; // size: 0x4, address: 0x805DC214
// Range: 0x80311460 -> 0x80311540
class AptValue * AptArray::sMethod_join(class AptValue * pThis /* r31 */, int nParams /* r30 */) {
    // Local variables
    class AptArray * pArray; // r31
    class EAStringC sBuf; // r1+0xC
    class EAStringC sSeparator; // r1+0x8
    class AptString * pString; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_pop; // size: 0x4, address: 0x805DC218
// Range: 0x80311540 -> 0x803115C4
class AptValue * AptArray::sMethod_pop(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pRet; // r31
    class AptArray * pArray; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_push; // size: 0x4, address: 0x805DC21C
// Range: 0x803115C4 -> 0x80311664
class AptValue * AptArray::sMethod_push(class AptValue * pThis /* r29 */, int nParams /* r28 */) {
    // Local variables
    class AptArray * pArray; // r30
    int i; // r29

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_shift; // size: 0x4, address: 0x805DC220
// Range: 0x80311664 -> 0x80311700
class AptValue * AptArray::sMethod_shift(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pRet; // r31
    class AptArray * pArray; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_unshift; // size: 0x4, address: 0x805DC224
// Range: 0x80311700 -> 0x803117DC
class AptValue * AptArray::sMethod_unshift(class AptValue * pThis /* r27 */, int nParams /* r26 */) {
    // Local variables
    class AptArray * pArray; // r28
    int i; // r27

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x803117DC -> 0x80311888
int AptArray::defaultSortCompareFunc(void * b /* r30 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class EAStringC sA; // r1+0xC
    class EAStringC sB; // r1+0x8
}

class EAStringC strFieldName; // size: 0x4, address: 0x805DC228
static class AptValue * gpfnScriptSortFunctionFunction; // size: 0x4, address: 0x805DC22C
static class AptCIH * gpfnScriptSortFunctionContext; // size: 0x4, address: 0x805DC230
// Range: 0x80311888 -> 0x80311964
int AptArray::scriptFunctionSortFunc(void * b /* r28 */) {
    // Local variables
    class AptValue * pA; // r30
    class AptValue * pB; // r29
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r28
    int nResult; // r29

    // References
    // -> static class AptCIH * gpfnScriptSortFunctionContext;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> static class AptValue * gpfnScriptSortFunctionFunction;
}

class AptNativeFunction * psMethod_sort; // size: 0x4, address: 0x805DC234
// Range: 0x80311964 -> 0x80311A10
class AptValue * AptArray::sMethod_sort(class AptValue * pThis /* r30 */, int nParams /* r31 */) {
    // Local variables
    class AptArray * pArray; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static class AptCIH * gpfnScriptSortFunctionContext;
    // -> static class AptValue * gpfnScriptSortFunctionFunction;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80311A10 -> 0x80311B74
int AptArray::defaultSortOnCompareFunc(void * b /* r29 */) {
    // Local variables
    class AptValue * pA; // r30
    class AptValue * pB; // r29
    class AptObject * pAObject; // r30
    class AptObject * pBObject; // r29
    class AptValue * pAValue; // r1+0x14
    class AptValue * pBValue; // r1+0x10
    class AptValue * pAValue; // r1+0xC
    class AptValue * pBValue; // r1+0x8

    // References
    // -> class EAStringC strFieldName;
}

class AptNativeFunction * psMethod_sortOn; // size: 0x4, address: 0x805DC238
// Range: 0x80311B74 -> 0x80311C04
class AptValue * AptArray::sMethod_sortOn(class AptValue * pThis /* r30 */, int nParams /* r31 */) {
    // Local variables
    class AptArray * pArray; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> class EAStringC strFieldName;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_reverse; // size: 0x4, address: 0x805DC23C
// Range: 0x80311C04 -> 0x80311CAC
class AptValue * AptArray::sMethod_reverse(class AptValue * pThis /* r31 */) {
    // Local variables
    class AptArray * pArray; // r0
    class AptValue * pTemp; // r7
    int i; // r8

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_splice; // size: 0x4, address: 0x805DC240
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045A84C
// Range: 0x80311CAC -> 0x8031200C
class AptValue * AptArray::sMethod_splice(class AptValue * pThis /* r26 */, int nParams /* r27 */) {
    // Local variables
    class AptArray * pArray; // r30
    int i; // r23
    int nStart; // r29
    int nNumToDelete; // r28
    class AptValue * pValue; // r0
    int nNumToAdd; // r28

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[42];
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_slice; // size: 0x4, address: 0x805DC244
// Range: 0x8031200C -> 0x80312158
class AptValue * AptArray::sMethod_slice(class AptValue * pThis /* r28 */, int nParams /* r30 */) {
    // Local variables
    class AptArray * pArray; // r31
    class AptArray * pNewArray; // r30
    int i; // [invalid]
    int nStart; // r29
    int nEnd; // r28

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// total size: 0x44
struct {} __vt__8AptArray; // size: 0x44, address: 0x8045A878
// total size: 0x44
struct {} __vt__17AptNativeFunction; // size: 0x44, address: 0x8045A8BC
// Range: 0x80312158 -> 0x80312194
static void __sinit_\AptArray_cpp() {
    // References
    // -> class EAStringC strFieldName;
}


