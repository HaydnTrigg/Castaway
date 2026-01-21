/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptCIH.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803178FC -> 0x8031A0B8
*/
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045AEC0
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045AEEC
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045AF28
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045AF5C
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045AF98
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045AFD0
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045AFF0
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045B020
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045B040
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045B070
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x8045B0A0
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045B0CC
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045B0FC
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045B120
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045B150
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x8045B178
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045B19C
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x8045B1C0
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045B1F4
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045B224
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045B250
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045B2A0
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x8045B2CC
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x8045B30C
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045B330
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045B35C
int emptyAssetString; // size: 0x4, address: 0x805DA740
// total size: 0x8
struct ClipEventType {
    // Members
    int nFlag; // offset 0x0, size 0x4
    enum StringCode eName; // offset 0x4, size 0x4
};
struct ClipEventType _aClipEvents[6]; // size: 0x30, address: 0x8045B390
// Range: 0x803178FC -> 0x803179AC
// this: r30
AptCIH::~AptCIH() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> struct [anonymous] __vt__6AptCIH;
}

static char __PRETTY_FUNCTION__[17]; // size: 0x11, address: 0x8045B3C0
// Range: 0x803179AC -> 0x80317AC8
// this: r31
void AptCIH::Remove() {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> static char __PRETTY_FUNCTION__[17];
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptLinker * gpLinker;
}

// Range: 0x80317AC8 -> 0x80317B24
// this: r31
void AptCIH::PreDestroy() {}

static char __PRETTY_FUNCTION__[28]; // size: 0x1C, address: 0x8045B3E0
// Range: 0x80317B24 -> 0x80317BB8
// this: r31
void AptCIH::DestroyGCPointers() {
    // References
    // -> static char __PRETTY_FUNCTION__[28];
}

static char __PRETTY_FUNCTION__[29]; // size: 0x1D, address: 0x8045B3FC
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x8045B420
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045B448
// Range: 0x80317BB8 -> 0x80317E3C
// this: r29
void AptCIH::ClearCIH(unsigned char bDestroyGC /* r30 */) {
    // Local variables
    int i; // r31
    class AptValue * pOnUnloadFnc; // r26
    class AptScriptFunctionBase * pFunc; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> static char __PRETTY_FUNCTION__[29];
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x80317E3C -> 0x80317EDC
// this: r30
void AptCIH::RegisterReferences() const {
    // Local variables
    class AptNativeHash * pNativeHash; // r31
    struct AptCharacterSpriteInstBase * pChar; // r0
    struct AptDisplayListState * pDisp; // r0

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

// Range: 0x80317EDC -> 0x80317F44
// this: r31
class AptNativeHash * AptCIH::getNativeHash() const {}

// Range: 0x80317F44 -> 0x80317F48
class AptNativeHash * AptCIH::GetNativeHashVirtual() {}

// Range: 0x80317F48 -> 0x80317F74
unsigned char AptCIH::ContainsNativeHashVirtual() {}

// Range: 0x80317F74 -> 0x80317F80
class AptValue * AptCIH::objectMemberLookup() {}

// Range: 0x80317F80 -> 0x80317F90
unsigned char AptCIH::objectMemberSet() {}

// Range: 0x80317F90 -> 0x80318000
// this: r27
void AptCIH::Release(const char * szFuncName /* r28 */, const char * szFileName /* r29 */, int nLineNumber /* r30 */) {
    // Local variables
    int nRefCount; // r0
}

// Range: 0x80318000 -> 0x80318360
// this: r29
void AptCIH::ensureStringAllocated(class AptCIH * pParent /* r28 */) {
    // Local variables
    struct AptCharacterTextInst * pTextInst; // r31
    struct AptCharacter * pChar; // r30
    struct AptCharacterAnimation * pParentAnim; // r0
    struct AptAllocateStringParameters asp; // r1+0x8
    float fW; // f2
    float fW2; // f1

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> int emptyAssetString;
}

static char __PRETTY_FUNCTION__[90]; // size: 0x5A, address: 0x8045B474
// Range: 0x80318360 -> 0x80318968
// this: r26
void AptCIH::render(struct AptRenderingContext * pRenderingContext /* r24 */, enum AptMaskRenderOperation eMaskOperation /* r25 */) {
    // Local variables
    struct AptCharacterSpriteInstBase * pSpriteInst; // r27
    class AptCIH * pRectObject; // r24
    class AptValue * pTarget; // r28
    class EAStringC sCustomProp1; // r1+0xC
    struct AptMatrix matrix; // r1+0x28
    struct AptCharacterButtonInst * pButtonInst; // r0
    struct AptCharacterTextInst * pTextInst; // r0
    struct AptCharacterStaticTextInst * pStaticTextInst; // r0
    int i; // r28
    struct AptMatrix translate; // r1+0x10
    float fXOffset; // f28
    float fYOffset; // f27
    float fAdvance; // f26
    float fScale; // f0
    int j; // r27
    struct AptCharacter * pFont; // r26
    struct AptCharacterGlyphEntry * pGlyphEntry; // r22
    struct AptCharacterMorphInst * pMorphInst; // r0
    struct AptCharacterShapeInst * pShapeInst; // r0

    // References
    // -> struct AptMatrix gIdentityMatrix;
    // -> int emptyAssetString;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptUserFunctions gAptFuncs;
    // -> static char __PRETTY_FUNCTION__[90];
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80318968 -> 0x80318A98
// this: r28
void AptCIH::_getBoundingRect(struct AptRenderingContext * pRenderingContext /* r29 */, struct AptRect * pRect /* r30 */) {
    // Local variables
    struct AptCharacterInst * pInst; // r0
    struct AptCharacterSpriteInstBase * pSpriteInst; // r0
    struct AptCharacterButtonInst * pButtonInst; // r0
    struct AptCharacterTextInst * pTextInst; // r0
}

// Range: 0x80318A98 -> 0x80318B30
void AptCIH::getBoundingRect(struct AptRect * pRect /* r31 */) {
    // References
    // -> struct AptRenderingContext * gpRenderingContext;
}

// Range: 0x80318B30 -> 0x80318D90
// this: r31
float AptCIH::GetProceduralProperty() {
    // Local variables
    struct AptRect rect; // r1+0x18
    float fFloat; // f0
    struct AptRect rect; // r1+0x8
    float fFloat; // f0
    float t2; // f1
    float fTT; // f0
    float fTT; // f0
}

// Range: 0x80318D90 -> 0x8031921C
// this: r31
void AptCIH::setProceduralProperty(float fValue /* f31 */) {
    // Local variables
    struct AptRect rect; // r1+0x18
    float fWidthVal; // f30
    float newValue; // f0
    float fScaleScale; // f2
    float newValue; // f0
    float c; // f5
    float s; // f2
    struct AptRect rect; // r1+0x8
    float fHeightVal; // f30
    float newValue; // f0
    float fScaleScale; // f2
    float newValue; // f0
    float c; // f5
    float s; // f1
    float c; // f0
    float fXS; // f29
    float fYS; // f28
    float s; // f0
    float tmp; // f0
    float c; // f2
    float s; // f0
    float tmp; // f0
    float c; // f1
    float s; // f0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8031921C -> 0x803192EC
// this: r26
int AptCIH::FindAndSetEvents() {
    // Local variables
    int iFound; // r29
    class AptNativeHash * pNativeHash; // r28
    int i; // r27
    class AptValue * pRet; // r0

    // References
    // -> struct ClipEventType _aClipEvents[6];
}

static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045B530
static char __PRETTY_FUNCTION__[37]; // size: 0x25, address: 0x8045B560
// Range: 0x803192EC -> 0x8031958C
// this: r31
void AptCIH::associateInstToClass() {
    // Local variables
    struct AptCharacterInst * pCharInst; // r27
    struct AptCharacterAnimation * pAnim; // r0
    struct AptCharacter * pCharacter; // r0
    class AptValue * pMovieClip; // r0
    class AptValue * pPrototypeMovieClip; // r29
    int iFound; // r29
    int i; // r7
    class AptValue * pValue1; // r28
    class EAStringC strName; // r1+0xC
    class AptValue * pClassPrototype; // r29
    class AptScriptFunctionBase * pFuncDef; // r27
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r28

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNativeHash * gpObjRegistrationHash;
    // -> class AptGlobal * gpGlobalGlobalObject;
}

// Range: 0x8031958C -> 0x80319664
// this: r27
void AptCIH::gotoState(enum AptCharacterButtonRecordState nNewState /* r28 */) {
    // Local variables
    struct AptCharacterButtonInst * pButtonInst; // r0
    int i; // r28
}

// Range: 0x80319664 -> 0x803197C0
// this: r27
void AptCIH::jumpToFrame(int nTargetFrame /* r28 */) {
    // Local variables
    struct AptCharacterSpriteInstBase * pSprInstBase; // r31
    class AptNativeHash * pOldObject; // r30
    class AptPseudoDisplayList * pDisplayTest; // r29
}

// Range: 0x803197C0 -> 0x80319800
void AptCIH::SetEventHandler(int nEvent /* r31 */) {}

// Range: 0x80319800 -> 0x80319840
void AptCIH::RemoveEventHandler(int nEvent /* r31 */) {}

// Range: 0x80319840 -> 0x8031990C
// this: r29
int AptCIH::HasEvent(int nEvent /* r27 */) {
    // Local variables
    class AptNativeHash * pHash; // r28
}

static char __PRETTY_FUNCTION__[48]; // size: 0x30, address: 0x8045B588
// Range: 0x8031990C -> 0x80319D68
// this: r18
unsigned char AptCIH::queueClipEvents(int nEventFlags /* r19 */, unsigned int input /* r20 */, int bFromListenerSet /* r21 */) {
    // Local variables
    struct AptCharacterSpriteInstBase * pSprInstBase; // r0
    unsigned char bQueuedClipEvent; // r23
    int i; // r22
    enum AptInputType eType; // r0
    const class EAStringC * sEvent; // r17
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r17
    int nEventIndex; // r17
    int i; // r0
    class AptNativeHash * pThisNativeHash; // r17
    class AptValue * pValue; // r5
    class AptValue * pValue; // r17
    class AptScriptFunctionBase * pFuncBase; // r0

    // References
    // -> struct ClipEventType _aClipEvents[6];
    // -> static char __PRETTY_FUNCTION__[48];
    // -> unsigned int gNullInput;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80319D68 -> 0x80319F2C
// this: r30
void AptCIH::tick() {
    // Local variables
    struct AptCharacterSpriteInstBase * pSpriteInst; // r0
    struct AptCharacterButtonInst * pButtonInst; // r0

    // References
    // -> unsigned int gNullInput;
}

// Range: 0x80319F2C -> 0x80319F84
class AptCIH * AptCIH::getRootAnimation() {
    // Local variables
    class AptCIH * pSprtTmp; // r31
}

// Range: 0x80319F84 -> 0x80319FAC
void AptCIH::decZombieCount() {}

// Range: 0x80319FAC -> 0x8031A0B8
// this: r30
void AptCIH::GetMovieclipInfo(struct AptMovieclipInformation * pMCInfo /* r31 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices eType; // r0
}

// total size: 0x44
struct {} __vt__6AptCIH; // size: 0x44, address: 0x8045B5D4

