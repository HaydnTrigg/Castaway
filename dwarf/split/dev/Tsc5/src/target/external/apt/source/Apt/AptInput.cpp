/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptInput.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80320918 -> 0x80321CAC
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045BD68
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045BDB8
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045BDE4
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045BE20
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045BE54
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045BE90
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045BEC8
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045BEE8
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045BF18
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045BF38
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045BF68
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045BF98
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x8045BFBC
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045BFF0
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x8045C020
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045C04C
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045C07C
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045C0A8
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045C0CC
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045C100
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x8045C128
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045C14C
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x8045C178
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045C1B8
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045C1DC
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045C208
// total size: 0xC
struct InputFlagT {
    // Members
    int nFlag; // offset 0x0, size 0x4
    enum StringCode eName; // offset 0x4, size 0x4
    int nInputState; // offset 0x8, size 0x4
};
static struct InputFlagT _aInputFlags[7]; // size: 0x54, address: 0x8045C238
// total size: 0x8
struct ListenerEventType {
    // Members
    int nFlag; // offset 0x0, size 0x4
    enum StringCode eName; // offset 0x4, size 0x4
};
static struct ListenerEventType _aListenerEvents[6]; // size: 0x30, address: 0x8045C290
// Range: 0x80320918 -> 0x80320A44
static unsigned char _getCharacterGridPosition(const class EAStringC & strText /* r28 */, int * pX /* r29 */, int * pY /* r30 */) {
    // Local variables
    const char * pStr; // r0
    int len; // r0
    const char * szPtr; // r31
}

// Range: 0x80320A44 -> 0x80320C08
static float _getButtonScore() {
    // Local variables
    int yDiff; // r5
    int xDiff; // r6
}

// Range: 0x80320C08 -> 0x80320DDC
static class AptCIH * _getBestButton(enum AptInputType eType /* r26 */, class AptCIH * pCIH /* r27 */, class AptCIH * pInstStart /* r28 */) {
    // Local variables
    float fBestScore; // f30
    float fCurScore; // f1
    struct AptHashItem * pItem; // r31
    int nFocusX; // r1+0x14
    int nFocusY; // r1+0x10
    int nX; // r1+0xC
    int nY; // r1+0x8
    class AptCIH * pNewInst; // r30
    class AptValue * pValue; // r29
    class AptCIH * pInst; // r29

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x80320DDC -> 0x80320E3C
int _ActionConditionFlagToActionEventFlags() {
    // Local variables
    int flags; // r4
}

// Range: 0x80320E3C -> 0x80321050
// this: r29
void AptAnimationPoolData::_doButtonActions(class AptCIH * pInst /* r30 */, int nTransition /* r31 */) {
    // Local variables
    struct AptCharacter * pChar; // r25
    int i; // r26
    int nEventFlag; // r24
    class AptValue * pValue; // r5

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptAnimationPoolData * gpPool;
    // -> static struct InputFlagT _aInputFlags[7];
    // -> unsigned int gNullInput;
}

static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045C2C0
// Range: 0x80321050 -> 0x803211E4
// this: r28
void AptAnimationPoolData::setValidFocusButton() {
    // Local variables
    int nX; // r1+0xC
    int nY; // r1+0x8
    int i; // r30
    int nCount; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[44];
}

// Range: 0x803211E4 -> 0x8032140C
// this: r30
void AptAnimationPoolData::ProcessInputSet(enum AptInputType eType /* r31 */, enum AptInputState eState /* r21 */, unsigned int input /* r22 */) {
    // Local variables
    unsigned char bQueuedKeyPress; // r25
    int nCount; // r24
    int i; // r23
    int i; // r23
    int j; // r7

    // References
    // -> unsigned int gNullInput;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x8032140C -> 0x803214D0
// this: r26
void AptAnimationPoolData::ProcessListenerEvents(enum AptInputState eState /* r27 */, unsigned int input /* r28 */) {
    // Local variables
    int nCount; // r30
    int i; // r29
}

static char __PRETTY_FUNCTION__[72]; // size: 0x48, address: 0x8045C300
// Range: 0x803214D0 -> 0x803216CC
void AptAnimationPoolData::AddListenerToQueue(class AptValue * pValue /* r24 */, int nEventFlags /* r25 */, unsigned int input /* r26 */) {
    // Local variables
    class AptNativeHash * pHash; // r29
    int i; // r28
    class AptValue * pValue1; // r29
    class AptScriptFunctionBase * pFuncBase; // r27

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[72];
    // -> static struct ListenerEventType _aListenerEvents[6];
}

static char __PRETTY_FUNCTION__[80]; // size: 0x50, address: 0x8045C348
// Range: 0x803216CC -> 0x80321A18
// this: r28
unsigned char AptAnimationPoolData::HandleFocusButton(class AptCIH * * ppNewButton /* r27 */) {
    // Local variables
    const class EAStringC * pStrText; // r31
    class AptCIH * pParent; // r30
    class AptValue * pValue; // [invalid]
    class EAStringC sVar; // r1+0x10
    class AptValue * pObject; // r1+0xC
    class AptCIH * pInst; // r31
    class AptValue * pValue2; // r3
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r29
    class AptValue * pReturnedValue; // r28

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[80];
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

static char __PRETTY_FUNCTION__[75]; // size: 0x4B, address: 0x8045C398
// Range: 0x80321A18 -> 0x80321B8C
// this: r29
void AptAnimationPoolData::HandleAutoNav(class AptCIH * pNewButton /* r30 */, enum AptInputType eType /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[75];
}

// Range: 0x80321B8C -> 0x80321C34
// this: r27
void AptAnimationPoolData::ProcessAptInput(unsigned int input /* r28 */) {
    // Local variables
    enum AptInputType eType; // r31
    enum AptInputState eState; // r30
    enum AptInputController eController; // r29
    class AptCIH * pNewButton; // r1+0x8
}

// Range: 0x80321C34 -> 0x80321CAC
// this: r29
void AptAnimationPoolData::ProcessInputs() {
    // Local variables
    int i; // r30
}


