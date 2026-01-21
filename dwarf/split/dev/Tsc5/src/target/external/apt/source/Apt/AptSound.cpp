/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptSound.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A010 -> 0x8032A4A4
*/
// total size: 0x8
struct SoundMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct SoundMembers wordlist[12]; // size: 0x60, address: 0x8045D370
// total size: 0x1
class SoundMembersIndex {};
// Range: 0x8032A010 -> 0x8032A088
// this: r29
AptSound::AptSound(class AptCIH * pParent /* r30 */) {
    // References
    // -> struct [anonymous] __vt__8AptSound;
}

static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045D3D0
// Range: 0x8032A088 -> 0x8032A14C
void AptSound::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_start;
    // -> class AptNativeFunction * psMethod_stop;
    // -> static char __PRETTY_FUNCTION__[33];
    // -> class AptNativeFunction * psMethod_attachSound;
}

class AptNativeFunction * psMethod_attachSound; // size: 0x4, address: 0x805DC3F0
// Range: 0x8032A14C -> 0x8032A258
class AptValue * AptSound::sMethod_attachSound(class AptValue * pThis /* r28 */) {
    // Local variables
    class AptValue * pName; // r29
    class EAStringC sBuf; // r1+0x8
    class AptSound * pSound; // r0
    struct AptCharacterAnimation * pAnim; // r0
    int i; // r28

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_start; // size: 0x4, address: 0x805DC3F4
// Range: 0x8032A258 -> 0x8032A2C4
class AptValue * AptSound::sMethod_start(class AptValue * pThis /* r31 */) {
    // Local variables
    class AptSound * pSound; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptUserFunctions gAptFuncs;
}

class AptNativeFunction * psMethod_stop; // size: 0x4, address: 0x805DC3F8
// Range: 0x8032A2C4 -> 0x8032A2E8
class AptValue * AptSound::sMethod_stop() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045D404
// Range: 0x8032A2E8 -> 0x8032A4A4
class AptValue * AptSound::objectMemberLookup(const class EAStringC * const pName /* r30 */) {
    // References
    // -> class AptNativeFunction * psMethod_stop;
    // -> class AptNativeFunction * psMethod_start;
    // -> static char __PRETTY_FUNCTION__[78];
    // -> class AptNativeFunction * psMethod_attachSound;
}

// total size: 0x44
struct {} __vt__8AptSound; // size: 0x44, address: 0x8045D454

