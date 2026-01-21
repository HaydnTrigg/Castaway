/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptAnimation.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D518 -> 0x8030FEF8
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x80459AE8
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80459B38
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x80459B64
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x80459BA0
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x80459BD4
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x80459C10
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x80459C48
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80459C68
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x80459C98
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80459CB8
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80459CE8
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x80459D18
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x80459D3C
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80459D70
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x80459DA0
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x80459DCC
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x80459DFC
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x80459E28
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x80459E4C
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x80459E80
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x80459EA8
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80459ECC
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x80459EF8
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x80459F38
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x80459F5C
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80459F88
// Range: 0x8030D518 -> 0x8030D968
// this: r22
void AptCharacterAnimation::Fixup(struct AptConstFile * pConstFile /* r23 */, void * pUserData /* r24 */) {
    // Local variables
    int i; // r7
    unsigned char * pBase; // r26
    int j; // r25
    char * szLinkageName; // r5
    int iExport; // r0
    int j; // r5

    // References
    // -> struct AptLoader * gpLoader;
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8030D968 -> 0x8030D9C8
void AptCharacterAnimation::Resolve(struct AptConstFile * pConstFile /* r31 */) {
    // Local variables
    unsigned char * pBase; // r0
}

// Range: 0x8030D9C8 -> 0x8030DA0C
int AptCharacterAnimation::UnmapCharacter() {
    // Local variables
    int i; // r7
}

// Range: 0x8030DA0C -> 0x8030DA54
int AptCharacterAnimation::IsImport() {
    // Local variables
    int i; // r7
}

// Range: 0x8030DA54 -> 0x8030E074
// this: r25
void AptCharacterAnimation::Unresolve() {
    // Local variables
    int i; // r27
    unsigned char * pBase; // r26
    struct AptCharacterButtonSound * pBS; // r28
    int j; // r27
    int j; // r24
    int j; // r5

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8030E074 -> 0x8030E0EC
// this: r30
AptCharacterAnimationInst::AptCharacterAnimationInst(class AptSharedPtr & file /* r31 */) {
    // References
    // -> struct [anonymous] __vt__25AptCharacterAnimationInst;
}

// Range: 0x8030E0EC -> 0x8030E158
// this: r30
AptCharacterAnimationInst::~AptCharacterAnimationInst() {}

// Range: 0x8030E158 -> 0x8030E1A0
int AptCharacterAnimationInst::getSwfVersion() {
    // Local variables
    char * sAptTag; // r0
}

// Range: 0x8030E1A0 -> 0x8030E1AC
void AptCharacterAnimationInst::PreDestroy() {}

// Range: 0x8030E1AC -> 0x8030E3E4
// this: r27
void AptCharacterAnimation::Link(void * pUserData /* r28 */) {
    // Local variables
    int i; // r31
    int j; // r6
    struct AptCharacterButtonSound * pBS; // r4
    int j; // r6

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

static char __PRETTY_FUNCTION__[38]; // size: 0x26, address: 0x8045A018
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045A040
// Range: 0x8030E3E4 -> 0x8030E544
// this: r30
AptAnimationPoolData::AptAnimationPoolData(const struct AptInitParmsT & aptInitParms /* r31 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030E544 -> 0x8030E628
// this: r30
AptAnimationPoolData::~AptAnimationPoolData() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045A068
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045A090
// Range: 0x8030E628 -> 0x8030E7C0
// this: r31
void AptAnimationPoolData::PreDestroy() {
    // Local variables
    int i; // r26
    int nCount; // r28
    int j; // r25

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[35];
}

static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045A0CC
// Range: 0x8030E7C0 -> 0x8030EA1C
// this: r26
void AptAnimationPoolData::tickIntervalTimers(int nMilliseconds /* r27 */) {
    // Local variables
    int i; // r29
    int iCount; // r28
    class AptValue * pFuncValue; // r19
    int nParams; // r21
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r18
    int j; // r17

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[46];
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

static char __PRETTY_FUNCTION__[38]; // size: 0x26, address: 0x8045A0FC
// Range: 0x8030EA1C -> 0x8030EB20
// this: r27
void AptAnimationPoolData::_tickNewInsts() {
    // Local variables
    int i; // r28
    struct AptCharacterButtonInst * pButtonInst; // r0
    struct AptCharacterSpriteInst * pSprInst; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[38];
}

static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045A124
// Range: 0x8030EB20 -> 0x8030ED08
// this: r26
void AptAnimationPoolData::runActions() {
    // Local variables
    class AptActionQueueC * pCurrentPool; // r29
    struct AptActionPool * pCur; // r28
    struct AptActionSetup oActionSetup; // r1+0xC
    void * pSavedValue; // r27
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r27

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8030ED08 -> 0x8030EDA0
void AptAnimationPoolData::addInput() {
    // Local variables
    struct AptSavedInputRecordInput inputRecord; // r1+0x8

    // References
    // -> unsigned int gnCurTick;
    // -> struct AptUserFunctions gAptFuncs;
    // -> int gbSavedInputsEnabled;
}

// Range: 0x8030EDA0 -> 0x8030EDB4
void AptAnimationPoolData::addInput() {}

static char __PRETTY_FUNCTION__[53]; // size: 0x35, address: 0x8045A154
// Range: 0x8030EDB4 -> 0x8030EEF8
// this: r27
void AptAnimationPoolData::removeTimerFunctions(class AptCIH * pAnimCIH /* r28 */) {
    // Local variables
    int nCount; // r30
    int i; // r29

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[53];
}

static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045A18C
// Range: 0x8030EEF8 -> 0x8030EF7C
// this: r27
void AptAnimationPoolData::clearBIL() {
    // Local variables
    int i; // r28

    // References
    // -> static char __PRETTY_FUNCTION__[33];
}

static char __PRETTY_FUNCTION__[63]; // size: 0x3F, address: 0x8045A1B0
// Range: 0x8030EF7C -> 0x8030F010
// this: r30
void AptAnimationPoolData::appendButtonToBIL(struct AptMatrix * pMatrix /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[63];
}

static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045A1F0
// Range: 0x8030F044 -> 0x8030F104
// this: r26
void AptAnimationPoolData::removeFromBIL(class AptCIH * pBI /* r27 */) {
    // Local variables
    int i; // r28

    // References
    // -> static char __PRETTY_FUNCTION__[46];
}

// Range: 0x8030F104 -> 0x8030F140
unsigned char AptAnimationPoolData::isInputMasked() {
    // Local variables
    class AptCIH * pTemp; // r4
}

// Range: 0x8030F140 -> 0x8030F1E0
// this: r25
int AptCharacterAnimation::GetIDFromImportFile() {
    // Local variables
    struct AptCharacter * pImportChar; // r0
    int i; // r26
}

// Range: 0x8030F1E0 -> 0x8030F2F0
// this: r29
void AptCharacterAnimation::ExecuteInitActions(class AptCIH * pInst /* r30 */, int nID /* r31 */) {
    // Local variables
    struct AptCharacterAnimation * pTmpAnim; // [invalid]
    struct AptMovie * pMov; // r27
    int nImportIndex; // r28
    int i; // r26
}

// Range: 0x8030F2F0 -> 0x8030F3F4
// this: r31
void AptCharacterAnimation::ExecuteInitAction(class AptCIH * pInst /* r27 */) {
    // Local variables
    int i; // r30
    struct AptControl * pInitTagControl; // r29
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r28

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8030F3F4 -> 0x8030F548
// this: r27
void AptCharacterAnimation::ExportClassDefinitionAssets(class AptCIH * pInst /* r28 */) {
    // Local variables
    int j; // r29
    int nID; // r7
    int k; // r25
    struct AptControl * pInitTC; // r3
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r24

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8030F548 -> 0x8030F7DC
// this: r31
void AptAnimationPoolData::RegisterReferences() {
    // Local variables
    int i; // r30
    int nLoopCount; // r0
    int i; // r30
    int i; // r27
    int i; // r27
    int i; // r27
    int i; // r27
    int j; // r26
    class AptValue * pValue; // r0

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045A3C0
// Range: 0x8030F7DC -> 0x8030F8D0
// this: r27
void AptActionQueueC::ClearActions() {
    // Local variables
    struct AptActionPool * pCur; // r28

    // References
    // -> static char __PRETTY_FUNCTION__[32];
}

static char __PRETTY_FUNCTION__[73]; // size: 0x49, address: 0x8045A3E0
// Range: 0x8030F8D0 -> 0x8030F988
// this: r27
void AptActionQueueC::AddActionBack(struct AptActionBlock * pActionBlock /* r28 */, class AptCIH * pCIH /* r29 */, unsigned int input /* r30 */) {
    // Local variables
    struct AptActionPool * pTempItem; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[73];
}

static char __PRETTY_FUNCTION__[74]; // size: 0x4A, address: 0x8045A42C
// Range: 0x8030F988 -> 0x8030FA4C
// this: r28
void AptActionQueueC::AddActionFront(struct AptActionBlock * pActionBlock /* r29 */, class AptCIH * pCIH /* r30 */, unsigned int input /* r31 */) {
    // Local variables
    struct AptActionPool * pTempItem; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[74];
}

static char __PRETTY_FUNCTION__[74]; // size: 0x4A, address: 0x8045A478
// Range: 0x8030FA4C -> 0x8030FB24
// this: r24
void AptActionQueueC::AddFunctionBack(class AptCIH * pContext /* r25 */, class AptValue * pFuncDef /* r26 */, int nParams /* r27 */, unsigned int input /* r28 */) {
    // Local variables
    struct AptActionPool * pTempItem; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[74];
}

static char __PRETTY_FUNCTION__[75]; // size: 0x4B, address: 0x8045A4C4
// Range: 0x8030FB24 -> 0x8030FBF4
// this: r25
void AptActionQueueC::AddFunctionFront(class AptCIH * pContext /* r26 */, class AptValue * pFuncDef /* r27 */, int nParams /* r28 */, unsigned int input /* r29 */) {
    // Local variables
    struct AptActionPool * pTempItem; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[75];
}

static char __PRETTY_FUNCTION__[43]; // size: 0x2B, address: 0x8045A510
// Range: 0x8030FBF4 -> 0x8030FDA0
// this: r31
void AptActionQueueC::RemoveActionFor(class AptCIH * pCIH /* r29 */) {
    // Local variables
    struct AptActionPool * pCur; // r30

    // References
    // -> static char __PRETTY_FUNCTION__[43];
}

// Range: 0x8030FDA0 -> 0x8030FDDC
int AptActionQueueC::GetDequeSize() {
    // Local variables
    int iDelta; // r4
}

// Range: 0x8030FDDC -> 0x8030FE34
struct AptActionPool * AptActionQueueC::GetDequeLocation() {
    // Local variables
    int iOffset; // r3
}

// Range: 0x8030FE34 -> 0x8030FEF8
// this: r27
void AptActionQueueC::RegisterReferences() {
    // Local variables
    int nLoopCount; // r0
    int i; // r28
    struct AptActionPool * pActionPool; // r0

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

// total size: 0x14
struct {} __vt__25AptCharacterAnimationInst; // size: 0x14, address: 0x8045A5B0

