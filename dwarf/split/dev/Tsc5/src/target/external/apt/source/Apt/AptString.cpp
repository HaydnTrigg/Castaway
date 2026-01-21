/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A8EC -> 0x8032BE20
*/
// total size: 0x8
struct StringMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct StringMembers wordlist[13]; // size: 0x68, address: 0x8045DEC8
static signed char lookup[23]; // size: 0x17, address: 0x8045DF30
// total size: 0x1
class StringMembersIndex {};
// Range: 0x8032A8EC -> 0x8032A93C
// this: r31
AptString::AptString() {
    // References
    // -> struct [anonymous] __vt__9AptString;
}

// Range: 0x8032A93C -> 0x8032A9A8
// this: r30
AptString::~AptString() {}

// Range: 0x8032A9A8 -> 0x8032AA08
// this: r30
AptString::AptString(const char * szValue /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9AptString;
}

// Range: 0x8032AA08 -> 0x8032AA0C
void AptString::DeleteThis() {}

// Range: 0x8032AA0C -> 0x8032AA10
void AptString::ForceDelete() {}

static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045DF48
// Range: 0x8032AA10 -> 0x8032ACCC
void AptString::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_toUpperCase;
    // -> class AptNativeFunction * psMethod_toLowerCase;
    // -> class AptNativeFunction * psMethod_substring;
    // -> class AptNativeFunction * psMethod_substr;
    // -> class AptNativeFunction * psMethod_split;
    // -> class AptNativeFunction * psMethod_slice;
    // -> class AptNativeFunction * psMethod_lastIndexOf;
    // -> class AptNativeFunction * psMethod_indexOf;
    // -> class AptNativeFunction * psMethod_fromCharCode;
    // -> class AptNativeFunction * psMethod_concat;
    // -> class AptNativeFunction * psMethod_charCodeAt;
    // -> static char __PRETTY_FUNCTION__[34];
    // -> class AptNativeFunction * psMethod_charAt;
}

class AptNativeFunction * psMethod_charAt; // size: 0x4, address: 0x805DC400
// Range: 0x8032ACCC -> 0x8032AD84
class AptValue * AptString::sMethod_charAt(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pIndex; // r0
    int nIndex; // r31
    class EAStringC * pLocalString; // r0
    const char * pBuffer; // r31
    class EAStringC localString; // r1+0x8
    class AptString * pReturnedString; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_charCodeAt; // size: 0x4, address: 0x805DC404
// Range: 0x8032AD84 -> 0x8032AE44
class AptValue * AptString::sMethod_charCodeAt(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pIndex; // r0
    int nIndex; // r31
    class EAStringC * pLocalString; // r0
    const char * pBuffer; // r0
    char strBuffer[8]; // r1+0x10
    int unicode; // r0
    class EAStringC localString; // r1+0x8
    class AptString * pReturnedString; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_concat; // size: 0x4, address: 0x805DC408
// Range: 0x8032AE44 -> 0x8032AF04
class AptValue * AptString::sMethod_concat(class AptValue * pThis /* r30 */, int nParams /* r29 */) {
    // Local variables
    class EAStringC sResult; // r1+0xC
    int i; // r30
    class EAStringC sAdd; // r1+0x8
    class AptValue * pVal; // r0
    class AptString * pStr; // r30

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_fromCharCode; // size: 0x4, address: 0x805DC40C
// Range: 0x8032AF04 -> 0x8032AFC8
class AptValue * AptString::sMethod_fromCharCode(int nParams /* r28 */) {
    // Local variables
    class EAStringC localString; // r1+0xC
    class AptValue * pAptCode; // r0
    int i; // r30
    int unicode; // r29
    class EAStringC strOneCode; // r1+0x8
    class AptString * pReturnedString; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_indexOf; // size: 0x4, address: 0x805DC410
// Range: 0x8032AFC8 -> 0x8032B0CC
class AptValue * AptString::sMethod_indexOf(class AptValue * pThis /* r30 */, int nParams /* r29 */) {
    // Local variables
    class EAStringC sString; // r1+0xC
    class EAStringC sLookFor; // r1+0x8
    int nStartOffsset; // r30
    class AptValue * pLookFor; // r0
    class AptValue * pStartOffset; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_lastIndexOf; // size: 0x4, address: 0x805DC414
// Range: 0x8032B0CC -> 0x8032B0D4
class AptValue * AptString::sMethod_lastIndexOf() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_slice; // size: 0x4, address: 0x805DC418
// Range: 0x8032B0D4 -> 0x8032B24C
class AptValue * AptString::sMethod_slice(class AptValue * pThis /* r28 */, int nParams /* r29 */) {
    // Local variables
    class EAStringC sString; // r1+0x10
    int nStart; // r31
    int nEnd; // r30
    class AptValue * pStart; // r0
    class AptValue * pEnd; // r0
    int nStrLen; // r3
    class EAStringC newString; // r1+0xC
    class AptString * pSubStr; // r30

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_split; // size: 0x4, address: 0x805DC41C
// Range: 0x8032B24C -> 0x8032B4CC
class AptValue * AptString::sMethod_split(class AptValue * pThis /* r25 */, int nParams /* r24 */) {
    // Local variables
    class EAStringC sSeps; // r1+0x1C
    class AptValue * pStr; // r0
    int nLimit; // r27
    class EAStringC localString; // r1+0x18
    int nSepSize; // r0
    int iChar; // r1+0x14
    int i; // r29
    const char * pBuffer; // r30
    class EAStringC subString; // r1+0x10
    class AptString * pTemp; // r31
    int index; // r0
    int lastIndex; // r26
    int i; // r25
    const char * pLocalBuffer; // r0
    class AptString * pTemp; // r27
    class EAStringC subString; // r1+0xC
    class AptString * pTemp; // r24
    class EAStringC subString; // r1+0x8

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_substr; // size: 0x4, address: 0x805DC420
// Range: 0x8032B4CC -> 0x8032B5E8
class AptValue * AptString::sMethod_substr(class AptValue * pThis /* r28 */, int nParams /* r29 */) {
    // Local variables
    class EAStringC sString; // r1+0xC
    int nStart; // r31
    int nLength; // r30
    class AptValue * pStart; // r0
    class AptValue * pLength; // r0
    int nStrLen; // r0
    class AptString * pSubStr; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_substring; // size: 0x4, address: 0x805DC424
// Range: 0x8032B5E8 -> 0x8032B730
class AptValue * AptString::sMethod_substring(class AptValue * pThis /* r28 */, int nParams /* r29 */) {
    // Local variables
    class EAStringC sString; // r1+0xC
    int nStart; // r31
    int nEnd; // r30
    class AptValue * pStart; // r0
    class AptValue * pEnd; // r0
    int nTemp; // r0
    int nTemp; // r0
    class AptString * pSubStr; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_toLowerCase; // size: 0x4, address: 0x805DC428
// Range: 0x8032B730 -> 0x8032B798
class AptValue * AptString::sMethod_toLowerCase(class AptValue * pThis /* r31 */) {
    // Local variables
    class EAStringC sNew; // r1+0x8
    class AptString * pStr; // r31
}

class AptNativeFunction * psMethod_toUpperCase; // size: 0x4, address: 0x805DC42C
// Range: 0x8032B798 -> 0x8032B800
class AptValue * AptString::sMethod_toUpperCase(class AptValue * pThis /* r31 */) {
    // Local variables
    class EAStringC sNew; // r1+0x8
    class AptString * pStr; // r31
}

static char __PRETTY_FUNCTION__[79]; // size: 0x4F, address: 0x8045DF7C
// Range: 0x8032B800 -> 0x8032BD80
class AptValue * AptString::objectMemberLookup(class AptValue * const pContext /* r29 */, const class EAStringC * const pName /* r30 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x8

    // References
    // -> class AptNativeFunction * psMethod_toUpperCase;
    // -> class AptNativeFunction * psMethod_toLowerCase;
    // -> class AptNativeFunction * psMethod_substring;
    // -> class AptNativeFunction * psMethod_substr;
    // -> class AptNativeFunction * psMethod_split;
    // -> class AptNativeFunction * psMethod_slice;
    // -> class AptNativeFunction * psMethod_lastIndexOf;
    // -> class AptNativeFunction * psMethod_indexOf;
    // -> class AptNativeFunction * psMethod_fromCharCode;
    // -> class AptNativeFunction * psMethod_concat;
    // -> class AptNativeFunction * psMethod_charCodeAt;
    // -> static char __PRETTY_FUNCTION__[79];
    // -> class AptNativeFunction * psMethod_charAt;
}

// Range: 0x8032BD80 -> 0x8032BE20
class AptString * AptString::Create(const char * szValue /* r30 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> class AptString * spFirstFree;
}

// total size: 0x44
struct {} __vt__9AptString; // size: 0x44, address: 0x8045E004

