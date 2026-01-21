/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032C944 -> 0x8032EFB8
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045E278
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045E2C8
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045E2F4
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045E330
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045E364
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045E3A0
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045E3D8
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045E3F8
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045E428
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045E448
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045E478
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045E4A8
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x8045E4CC
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045E500
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x8045E530
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045E55C
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045E58C
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045E5B8
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045E5DC
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045E610
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x8045E638
// total size: 0x8
struct Objects {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct Objects wordlist[37]; // size: 0x128, address: 0x8045E710
static signed char lookup[38]; // size: 0x26, address: 0x8045E838
// total size: 0x1
class ObjectIndex {};
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045E860
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x8045E88C
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045E8CC
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045E8F0
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045E91C
struct AptMatrix gIdentityMatrix; // size: 0x18, address: 0x80545A38
struct AptCXForm gIdentityCXForm; // size: 0x20, address: 0x80545A50
class AptNativeFunction * gpCBsetInterval; // size: 0x4, address: 0x805DC430
class AptNativeFunction * gpCBclearInterval; // size: 0x4, address: 0x805DC434
class AptNativeFunction * gpCBisNaN; // size: 0x4, address: 0x805DC438
class AptNativeFunction * gpCBunescape; // size: 0x4, address: 0x805DC43C
class AptNativeFunction * gpCBescape; // size: 0x4, address: 0x805DC440
class AptNativeFunction * gpCBboolean; // size: 0x4, address: 0x805DC444
class AptNativeFunction * gpASSetPropFlags; // size: 0x4, address: 0x805DC448
class AptMathObj * gpGlobalMathObject; // size: 0x4, address: 0x805DC44C
class AptKey * gpGlobalKeyObject; // size: 0x4, address: 0x805DC450
class AptNone * gpUndefinedValue; // size: 0x4, address: 0x805DC454
class AptExtern * gpExternValue; // size: 0x4, address: 0x805DC458
class AptStage * gpGlobalStageObject; // size: 0x4, address: 0x805DC45C
class AptString * gpGlobalStringObject; // size: 0x4, address: 0x805DC460
struct AptRenderingContext * gpRenderingContext; // size: 0x4, address: 0x805DC464
class AptValue * gpGlobalObjectPrototype; // size: 0x4, address: 0x805DC468
class AptValue * gpGlobalMovieclipPrototype; // size: 0x4, address: 0x805DC46C
class AptNativeHash * gpObjRegistrationHash; // size: 0x4, address: 0x805DC470
class AptNativeFunction * gpObjRegistrationFunc; // size: 0x4, address: 0x805DC474
unsigned char sbSuspendRefcountDeletions; // size: 0x1, address: 0x805DC478
void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *); // size: 0x4, address: 0x805DC47C
unsigned int snCurrentAllocationNumber; // size: 0x4, address: 0x805DC480
// Range: 0x8032C944 -> 0x8032CA74
// this: r31
int AptValue::toInteger() const {
    // Local variables
    class AptString * pString; // r0
    class EAStringC * sBuf; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8032CA74 -> 0x8032CB84
// this: r31
float AptValue::toFloat() const {
    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8032CB84 -> 0x8032CD14
// this: r30
unsigned char AptValue::toBool() const {
    // Local variables
    class AptString * pString; // r0
    class EAStringC * sBuf; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8032CD14 -> 0x8032CD7C
// this: r30
void AptValue::toString(char * szBuf /* r31 */) const {
    // Local variables
    class EAStringC sBuf; // r1+0x8
}

// Range: 0x8032CD7C -> 0x8032D1E0
// this: r29
void AptValue::toString(class EAStringC & sBuf /* r30 */) const {
    // Local variables
    char szTemp[128]; // r1+0x48
    class AptFloat * pF; // r0
    class AptArray * pA; // r0
    class AptDate * pA; // r0
}

// Range: 0x8032D1E0 -> 0x8032D1E8
static class AptValue * _constructorObject() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8032D1E8 -> 0x8032D308
static class AptValue * _gObjRegistrationFunc() {
    // Local variables
    class AptValue * pParam1; // r30
    class AptValue * pParam2; // r31

    // References
    // -> class AptNativeHash * gpObjRegistrationHash;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptPrototype * gpObjectPrototype; // size: 0x4, address: 0x805DC484
static char __PRETTY_FUNCTION__[27]; // size: 0x1B, address: 0x8045EAD0
// Range: 0x8032D308 -> 0x8032DBC8
static void _constructBuiltInObjects() {
    // Local variables
    class AptValue * pObject; // r30
    class AptValue * pArray; // r30
    class AptValue * pConstructorPrototypeArray; // r0
    class AptValue * pSound; // r30
    class AptValue * pConstructorPrototypeSound; // r0
    class AptValue * pColor; // r30
    class AptValue * pConstructorPrototypeColor; // r0
    class AptValue * pDate; // r30
    class AptValue * pConstructorPrototypeDate; // r0
    class AptValue * pTextFormat; // r30
    class AptValue * pConstructorPrototypeTextFormat; // r0
    class AptValue * pMovieClip; // r30
    class AptValue * pConstructorPrototypeMovieClip; // r0
    class AptValue * pXml; // r30
    class AptValue * pConstructorPrototypeXML; // r0
    class AptValue * pLoadVars; // r30
    class AptValue * pConstructorPrototypeLoadVars; // r0
    class AptValue * pNativeFunction; // r30
    class AptValue * pPrototype; // r0
    class AptValue * pNativeFunction; // r30
    class AptValue * pPrototype; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[27];
    // -> class AptNativeFunction * gpObjRegistrationFunc;
    // -> class AptValue * gpGlobalMovieclipPrototype;
    // -> class AptValue * gpGlobalObjectPrototype;
    // -> class AptPrototype * gpObjectPrototype;
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> class AptValueVector * gpValuesToRelease;
}

static char __PRETTY_FUNCTION__[21]; // size: 0x15, address: 0x8045EAFC
// Range: 0x8032DBC8 -> 0x8032E044
void AptValueInitialize() {
    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNativeFunction * gpASSetPropFlags;
    // -> class AptNativeFunction * gpCBboolean;
    // -> class AptNativeFunction * gpCBescape;
    // -> class AptNativeFunction * gpCBunescape;
    // -> class AptNativeFunction * gpCBisNaN;
    // -> class AptNativeFunction * gpCBclearInterval;
    // -> class AptNativeFunction * gpCBsetInterval;
    // -> struct AptMatrix gIdentityMatrix;
    // -> struct AptCXForm gIdentityCXForm;
    // -> class AptNativeHash * gpObjRegistrationHash;
    // -> class AptString * gpGlobalStringObject;
    // -> class AptGlobalExtensionObject * gpGlobalExtensionObject;
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> class AptStage * gpGlobalStageObject;
    // -> class AptKey * gpGlobalKeyObject;
    // -> static char __PRETTY_FUNCTION__[21];
    // -> class AptMathObj * gpGlobalMathObject;
    // -> class AptExtern * gpExternValue;
    // -> struct AptRenderingContext * gpRenderingContext;
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0xC
class AptExtern : public AptValueNoGC {};
static char __PRETTY_FUNCTION__[22]; // size: 0x16, address: 0x8045EB14
// Range: 0x8032E044 -> 0x8032E3C4
void AptValueShutdown() {
    // References
    // -> class AptNativeFunction * gpObjRegistrationFunc;
    // -> class AptNativeFunction * gpASSetPropFlags;
    // -> class AptNativeFunction * gpCBboolean;
    // -> class AptNativeFunction * gpCBescape;
    // -> class AptNativeFunction * gpCBunescape;
    // -> class AptNativeFunction * gpCBisNaN;
    // -> class AptNativeFunction * gpCBclearInterval;
    // -> class AptNativeFunction * gpCBsetInterval;
    // -> struct AptRenderingContext * gpRenderingContext;
    // -> class AptString * gpGlobalStringObject;
    // -> class AptStage * gpGlobalStageObject;
    // -> class AptKey * gpGlobalKeyObject;
    // -> class AptMathObj * gpGlobalMathObject;
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> static char __PRETTY_FUNCTION__[22];
    // -> class AptGlobalExtensionObject * gpGlobalExtensionObject;
    // -> class AptNativeHash * gpObjRegistrationHash;
}

// Range: 0x8032E3C4 -> 0x8032E408
void AptValueShutdownRemaining() {
    // References
    // -> class AptExtern * gpExternValue;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8032E408 -> 0x8032E53C
// this: r29
class EAStringC AptValue::urlEncode(class AptValue * const this /* r30 */) {
    // Local variables
    class AptNativeHash * pObjHash; // r31
    class EAStringC sValueBuf; // r1+0x8
    struct AptHashItem * pInitItem; // r30
}

// Range: 0x8032E53C -> 0x8032E6C8
// this: r27
class EAStringC AptValue::urlEncodeCustomRender(class AptValue * const this /* r28 */) {
    // Local variables
    class AptNativeHash * pObjHash; // r30
    class EAStringC sValueBuf; // r1+0xC
    struct AptHashItem * pInitItem; // r29
    class EAStringC strKey; // r1+0x8
    const char * pStrBuffer; // r28
    class AptValue * pValue; // r28
}

// Range: 0x8032E6C8 -> 0x8032EC58
// this: r27
class AptValue * AptValue::findChild(const class EAStringC * pName /* r28 */) {
    // Local variables
    struct Objects * pObjects; // r0
    class AptValue * pValue; // r30
    class AptValue * pWithStkTop; // r31
    class AptNativeHash * pNativeHash; // r3
    class AptValue * pTempValue; // r0
    class AptNativeHash * pNativeHash; // r3
    class AptValue * pValue1; // r0
    class AptCIH * pParentAnim; // r30
    class AptCIH * pRootCIH; // r3
    class AptValue * pStackTop; // r30
    class AptNativeHash * pNativeHash; // r0
    class AptValue * pValue; // r29
    int nLevel; // r0
    class AptNativeHash * pNativeHash; // r29
    class AptValue * pRet; // r0
    class AptValue * pProto; // r0
    class AptValue * pRet; // r3

    // References
    // -> class AptGlobalExtensionObject * gpGlobalExtensionObject;
    // -> class AptExtern * gpExternValue;
    // -> class AptStage * gpGlobalStageObject;
    // -> class AptString * gpGlobalStringObject;
    // -> class AptMathObj * gpGlobalMathObject;
    // -> class AptNone * gpUndefinedValue;
    // -> class AptKey * gpGlobalKeyObject;
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8032EC58 -> 0x8032ED58
// this: r29
int AptValue::isMCInParentChain() const {
    // Local variables
    class AptValue * pMovieClip; // r0
    class AptValue * pPrototypeMovieClip; // r0
    class AptValue * pObject; // r0
    class AptValue * pPrototypeObject; // r0
    class AptNativeHash * pNativeHash; // r3
    class AptValue * pValue; // r0

    // References
    // -> class AptGlobal * gpGlobalGlobalObject;
}

// Range: 0x8032ED58 -> 0x8032EDA4
unsigned char AptValue::CanCreateScriptObject() {}

enum AptVirtualFunctionTable_Indices gVftTrackThisType; // size: 0x4, address: 0x805DAB90
class AptValue * gpTrackThisObject; // size: 0x4, address: 0x805DC488
// Range: 0x8032EDA4 -> 0x8032EE20
// this: r31
void AptValue::AddRef() {
    // Local variables
    enum AptVirtualFunctionTable_Indices mYtype; // r0
    class EAStringC temp; // r1+0x8

    // References
    // -> class AptValue * gpTrackThisObject;
    // -> enum AptVirtualFunctionTable_Indices gVftTrackThisType;
}

// Range: 0x8032EE20 -> 0x8032EF68
// this: r30
void AptValue::Release() {
    // Local variables
    int nRefCount; // r0
    enum AptVirtualFunctionTable_Indices mYtype; // r0
    class EAStringC temp; // r1+0x8

    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> unsigned char sbSuspendRefcountDeletions;
    // -> class AptValue * gpTrackThisObject;
    // -> enum AptVirtualFunctionTable_Indices gVftTrackThisType;
}

// Range: 0x8032EF68 -> 0x8032EF70
class AptNativeHash * AptValueWithHash::GetNativeHashVirtual() {}

// Range: 0x8032EF70 -> 0x8032EF78
unsigned char AptValueWithHash::ContainsNativeHashVirtual() {}

// Range: 0x8032EF78 -> 0x8032EF84
void AptValueWithHash::RegisterReferences() {}

// Range: 0x8032EF84 -> 0x8032EFB8
// this: r31
void AptValueWithHash::DestroyGCPointers() {}

// total size: 0x44
struct {} __vt__24AptGlobalExtensionObject; // size: 0x44, address: 0x8045EC84
// total size: 0x44
struct {} __vt__9AptExtern; // size: 0x44, address: 0x8045ECC8
// total size: 0x44
struct {} __vt__7AptNone; // size: 0x44, address: 0x8045ED0C
// total size: 0x44
struct {} __vt__16AptValueWithHash; // size: 0x44, address: 0x8045ED94
// total size: 0x44
struct {} __vt__8AptValue; // size: 0x44, address: 0x8045EE60

