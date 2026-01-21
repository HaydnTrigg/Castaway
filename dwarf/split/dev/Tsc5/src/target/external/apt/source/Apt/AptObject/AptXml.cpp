/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptXml.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80332294 -> 0x80332B14
*/
// Range: 0x80332294 -> 0x803322F0
// this: r30
AptXml::~AptXml() {}

static char __PRETTY_FUNCTION__[31]; // size: 0x1F, address: 0x8045F930
// Range: 0x803322F0 -> 0x803323EC
void AptXml::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_parseXml;
    // -> class AptNativeFunction * psMethod_load;
    // -> class AptNativeFunction * psMethod_getBytesLoaded;
    // -> static char __PRETTY_FUNCTION__[31];
    // -> class AptNativeFunction * psMethod_getBytesTotal;
}

// Range: 0x803323EC -> 0x8033249C
// this: r30
AptXml::AptXml(class AptValue * pszSource /* r31 */) {
    // Local variables
    class IAptXml * pNewAptXml; // r0

    // References
    // -> class IAptXmlImpl * gpAptXmlImpl;
    // -> struct [anonymous] __vt__6AptXml;
}

// Range: 0x8033249C -> 0x803324F0
// this: r31
void AptXml::PreDestroy() {}

static char __PRETTY_FUNCTION__[76]; // size: 0x4C, address: 0x8045F95C
// Range: 0x803324F0 -> 0x803328AC
// this: r28
class AptValue * AptXml::objectMemberLookup(class AptValue * const pContext /* r30 */, const class EAStringC * const pName /* r29 */) const {
    // Local variables
    class AptValue * pValueFromXmlNode; // r31
    class AptXmlNode * pXml; // r0
    class IAptXml * pIXml; // r30
    class AptString * pString; // r29
    char * szNodeValue; // r4
    class AptString * pString; // r29
    char * szDocTypeDecl; // r4

    // References
    // -> class AptNativeFunction * psMethod_parseXml;
    // -> class AptNativeFunction * psMethod_load;
    // -> class AptNativeFunction * psMethod_getBytesLoaded;
    // -> static char __PRETTY_FUNCTION__[76];
    // -> class AptNativeFunction * psMethod_getBytesTotal;
}

class AptNativeFunction * psMethod_getBytesTotal; // size: 0x4, address: 0x805DC4D0
// Range: 0x803328AC -> 0x8033291C
class AptValue * AptXml::sMethod_getBytesTotal(class AptValue * pThis /* r30 */) {
    // Local variables
    int iBytesTotal; // r31
    class AptXmlNode * pXml; // r0
    class IAptXml * pIXml; // r3
}

class AptNativeFunction * psMethod_getBytesLoaded; // size: 0x4, address: 0x805DC4D4
// Range: 0x8033291C -> 0x8033298C
class AptValue * AptXml::sMethod_getBytesLoaded(class AptValue * pThis /* r30 */) {
    // Local variables
    int iBytesLoaded; // r31
    class AptXmlNode * pXml; // r0
    class IAptXml * pIXml; // r3
}

class AptNativeFunction * psMethod_load; // size: 0x4, address: 0x805DC4D8
// Range: 0x8033298C -> 0x80332A50
class AptValue * AptXml::sMethod_load(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pUrl; // r31
    class EAStringC sBuf; // r1+0x8
    class IAptXml * pIXml; // r31

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_parseXml; // size: 0x4, address: 0x805DC4DC
// Range: 0x80332A50 -> 0x80332B14
class AptValue * AptXml::sMethod_parseXml(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pSource; // r31
    class EAStringC sBuf; // r1+0x8
    class AptXmlNode * pXml; // r0
    class IAptXml * pIXml; // r31

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0x44
struct {} __vt__6AptXml; // size: 0x44, address: 0x8045F9DC

