/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\Apt.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FCE5C -> 0x802FE0FC
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x80458240
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80458290
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x804582BC
// total size: 0x4
struct AptSavedInputRecord {
    // Members
    unsigned int nTick; // offset 0x0, size 0x4
};
struct AptUserFunctions gAptFuncs; // size: 0xAC, address: 0x80544EE8
unsigned int gNullInput; // size: 0x4, address: 0x805DC1C0
static int bInitialized; // size: 0x4, address: 0x805DC1C4
int gbSavedInputsEnabled; // size: 0x4, address: 0x805DC1C8
unsigned int gnCurTick; // size: 0x4, address: 0x805DC1CC
unsigned char gbGarbageCollectThisFrame; // size: 0x1, address: 0x805DC1D0
class AptValueVector * gpValuesToRelease; // size: 0x4, address: 0x805DC1D4
// total size: 0x8
class StringDataC {
    // Members
public:
    unsigned short m_uRefCount; // offset 0x0, size 0x2
    unsigned short m_uSize; // offset 0x2, size 0x2
    unsigned short m_uMaxSize; // offset 0x4, size 0x2
    unsigned short m_uHash; // offset 0x6, size 0x2
};
// total size: 0x108
class DebugDataC : public StringDataC {
    // Members
public:
    char m_strText[256]; // offset 0x8, size 0x100
};
enum CBPushZero {
    CB_NO_PUSH_ZERO = 0,
    CB_PUSH_ZERO = 1,
};
// total size: 0x4
class EAStringC {
    // Static members
    static struct AptUserFunctions * sAptCallbacks; // size: 0x4
    static char s_EmptyInternalData[9]; // size: 0x9

    // Members
    class DebugDataC * m_pData; // offset 0x0, size 0x4
};
class EAStringC gstrTempString; // size: 0x4, address: 0x805DC1D8
unsigned char gbBackgroundColorSet; // size: 0x1, address: 0x805DC1DC
struct AptInitParmsT gAptInitParms; // size: 0x3C, address: 0x80544FA0
class DOGMA_PoolManager * gpNonGCPoolManager; // size: 0x4, address: 0x805DC1E0
class AptValueGC_PoolManager * gpGCPoolManager; // size: 0x4, address: 0x805DC1E4
class AptValueVector * gpZombieVector; // size: 0x4, address: 0x805DC1E8
unsigned long gAptOptFlags; // size: 0x4, address: 0x805DC1EC
unsigned char bDefaultMouseWheel; // size: 0x1, address: 0x805DC1F0
unsigned char bPrintZombieReferences; // size: 0x1, address: 0x805DA580
// total size: 0x14
struct SavedInputPlayback {
    // Members
    unsigned char * pSavedInputs; // offset 0x0, size 0x4
    unsigned char * pCurSavedInput; // offset 0x4, size 0x4
    int nInputFileSize; // offset 0x8, size 0x4
    int nLoadedAnims; // offset 0xC, size 0x4
    unsigned int nCurTick; // offset 0x10, size 0x4
};
struct SavedInputPlayback gSIPlayback; // size: 0x14, address: 0x80544FDC
struct AptAnimationPoolData * gpPool; // size: 0x4, address: 0x805DC1F4
struct AptLoader * gpLoader; // size: 0x4, address: 0x805DC1F8
struct AptLinker * gpLinker; // size: 0x4, address: 0x805DC1FC
struct AptSavedInputCheckpoints * gpSavedInputCheckpoints; // size: 0x4, address: 0x805DC200
// Range: 0x802FCE5C -> 0x802FCE70
static void _passthruToMemFree() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x802FCE70 -> 0x802FCE74
void _profileInit() {}

// Range: 0x802FCE74 -> 0x802FCF24
AptUserFunctions::AptUserFunctions() {}

// Range: 0x802FCF24 -> 0x802FD0B0
void AptInitialize(const struct AptInitParmsT * pAptInitParms /* r31 */) {
    // Local variables
    struct AptInitParmsT defParms; // r1+0x8

    // References
    // -> static int bInitialized;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptLinker * gpLinker;
    // -> struct AptLoader * gpLoader;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptValueVector * gpZombieVector;
    // -> class AptValueVector * gpValuesToRelease;
    // -> unsigned char bPrintZombieReferences;
    // -> unsigned char bDefaultMouseWheel;
    // -> struct AptUserFunctions gAptFuncs;
    // -> class EAStringC gstrTempString;
    // -> struct AptInitParmsT gAptInitParms;
}

// total size: 0x8
class AptValueSet {
    // Members
public:
    unsigned short mnElements; // offset 0x0, size 0x2
    unsigned short mnMaxElements; // offset 0x2, size 0x2
    class AptCIH * * maElements; // offset 0x4, size 0x4
};
// total size: 0x1C
struct ButtonHitTestRecord {
    // Members
    class AptCIH * pCIH; // offset 0x0, size 0x4
    struct AptMatrix matrix; // offset 0x4, size 0x18
};
// total size: 0x8
class AptValueSet {
    // Members
public:
    unsigned short mnElements; // offset 0x0, size 0x2
    unsigned short mnMaxElements; // offset 0x2, size 0x2
    class AptValue * * maElements; // offset 0x4, size 0x4
};
// total size: 0xC
class AptValuePtrStack {
    // Members
    int m_nElements; // offset 0x0, size 0x4
    int m_nSize; // offset 0x4, size 0x4
    class AptValue * * m_aElements; // offset 0x8, size 0x4
};
// total size: 0x20
struct AptIntervalTimer {
    // Members
    int bValid; // offset 0x0, size 0x4
    class AptValue * pCBFunction; // offset 0x4, size 0x4
    float fInterval; // offset 0x8, size 0x4
    float fCurTime; // offset 0xC, size 0x4
    class AptValue * pContext; // offset 0x10, size 0x4
    class AptValuePtrStack pParams; // offset 0x14, size 0xC
};
// total size: 0x10
struct AptAnalogStickInfo {
    // Members
    float fXAxisValue; // offset 0x0, size 0x4
    float fYAxisValue; // offset 0x4, size 0x4
    unsigned char nController; // offset 0x8, size 0x1
    enum AptInputType nSide; // offset 0xC, size 0x4
};
enum APT_ACTION_TYPE {
    AAT_NONE = 0,
    AAT_ACTION = 1,
    AAT_FUNCTION = 2,
};
// total size: 0xC
struct AptAction {
    // Members
    int nFrame; // offset 0x0, size 0x4
    struct AptActionBlock * pBlock; // offset 0x4, size 0x4
    class AptCIH * pCIH; // offset 0x8, size 0x4
};
// total size: 0xC
struct AptFunction {
    // Members
    class AptCIH * pContext; // offset 0x0, size 0x4
    class AptValue * pFuncDef; // offset 0x4, size 0x4
    int nParams; // offset 0x8, size 0x4
};
union /* @class$4695Apt_cpp */ {
    struct AptAction action; // offset 0x0, size 0xC
    struct AptFunction function; // offset 0x0, size 0xC
};
// total size: 0x14
struct AptActionPool {
    // Members
    enum APT_ACTION_TYPE eActionType; // offset 0x0, size 0x4
    unsigned int input; // offset 0x4, size 0x4
    union { // inferred
        union /* @class$4695Apt_cpp */ {
            struct AptAction action; // offset 0x0, size 0xC
            struct AptFunction function; // offset 0x0, size 0xC
        } __anon$4701; // offset 0x8, size 0xC
        struct AptAction action; // offset 0x8, size 0xC
        struct AptFunction function; // offset 0x8, size 0xC
    };
};
// total size: 0x14
class AptActionQueueC {
    // Members
    struct AptActionPool * m_aActionPool; // offset 0x0, size 0x4
    struct AptActionPool * m_pStartDeque; // offset 0x4, size 0x4
    struct AptActionPool * m_pEndDeque; // offset 0x8, size 0x4
    struct AptActionPool * m_pCurDeque; // offset 0xC, size 0x4
    int m_iActionPoolSize; // offset 0x10, size 0x4
};
// total size: 0xAC
struct AptAnimationPoolData {
    // Members
    class AptCIH * * apNewInsts; // offset 0x0, size 0x4
    int nNewInsts; // offset 0x4, size 0x4
    class AptValueSet buttonSet; // offset 0x8, size 0x8
    int mBILCount; // offset 0x10, size 0x4
    struct ButtonHitTestRecord * aButtonInstanceList; // offset 0x14, size 0x4
    class AptValueSet listenerSet; // offset 0x18, size 0x8
    class AptValueSet inputSet; // offset 0x20, size 0x8
    struct AptDisplayList displayList; // offset 0x28, size 0x4
    struct AptIntervalTimer * aIntervalTimers; // offset 0x2C, size 0x4
    int nIntervalTimers; // offset 0x30, size 0x4
    int nQueuedInputs; // offset 0x34, size 0x4
    unsigned int * aQueuedInputs; // offset 0x38, size 0x4
    class AptValue * pDragMC; // offset 0x3C, size 0x4
    struct AptMatrix mDragPos; // offset 0x40, size 0x18
    class AptValue * pOnPress; // offset 0x58, size 0x4
    class AptValue * pOnRollOver; // offset 0x5C, size 0x4
    class AptValue * pTopMostSprite; // offset 0x60, size 0x4
    class AptCIH * pFocusButton; // offset 0x64, size 0x4
    unsigned char bButtonDown; // offset 0x68, size 0x1
    int nXMousePos; // offset 0x6C, size 0x4
    int nYMousePos; // offset 0x70, size 0x4
    struct AptAnalogStickInfo gAStickLeft; // offset 0x74, size 0x10
    struct AptAnalogStickInfo gAStickRight; // offset 0x84, size 0x10
private:
    class AptCIH * pInputMask; // offset 0x94, size 0x4
    class AptActionQueueC * m_pAptActionPool; // offset 0x98, size 0x4
    int m_iMaxNewMovieClips; // offset 0x9C, size 0x4
    int m_iMaxIntervalTimers; // offset 0xA0, size 0x4
    int m_iMaxQueuedInputs; // offset 0xA4, size 0x4
    int m_iButtonInstanceListSize; // offset 0xA8, size 0x4
};
// total size: 0x1C
class BasicString : public UseCapacity {
    // Members
    struct AptFileSavedInputState * mString; // offset 0x8, size 0x4
    struct AptFileSavedInputState mSmallString[2]; // offset 0xC, size 0x10
};
// total size: 0x1
struct StringAsVectorPolicy : public DefaultPolicy {};
// total size: 0x8
struct AptFileSavedInputState {
    // Members
private:
    class EAStringC mName; // offset 0x0, size 0x4
    enum State mState; // offset 0x4, size 0x4
};
// total size: 0x8
class UseCapacity {
    // Members
protected:
    int mSize; // offset 0x0, size 0x4
private:
    int mCapacity; // offset 0x4, size 0x4
};
// total size: 0x1C
struct AptSavedInputCheckpoints {
    // Members
private:
    class BasicString mPending; // offset 0x0, size 0x1C
};
// total size: 0x18
struct AptLinker {
    // Members
    class SingleList mThingys; // offset 0x0, size 0x4
    class BasicString mLoadedFilesWaitingForLink; // offset 0x4, size 0x14
};
// total size: 0x14
class BasicString : public UseCapacity {
    // Members
    class AptSharedPtr * mString; // offset 0x8, size 0x4
    class AptSharedPtr mSmallString[2]; // offset 0xC, size 0x8
};
// total size: 0x4
class Iterator {
    // Members
    struct Node * mRep; // offset 0x0, size 0x4
};
// total size: 0x4
class SingleList {
    // Members
    struct Node * mHead; // offset 0x0, size 0x4
};
// total size: 0x8
struct Node {
    // Members
    class AptSharedPtr mData; // offset 0x0, size 0x4
    struct Node * mNext; // offset 0x4, size 0x4
};
// total size: 0x1
struct Allocator {};
// total size: 0x10
struct AptLinkerThingy : public AptSharedPtrRefCount {
    // Members
    class AptSharedPtr mFile; // offset 0x4, size 0x4
    class AptCIH * pTarget; // offset 0x8, size 0x4
    unsigned char mAttachedToMovie; // offset 0xC, size 0x1
};
// total size: 0x4
class AptSharedPtr {
    // Members
public:
    struct AptLinkerThingy * pData; // offset 0x0, size 0x4
};
// total size: 0x4
class SingleList {
    // Members
    struct Node * mHead; // offset 0x0, size 0x4
};
// total size: 0x8
struct Node {
    // Members
    struct AptFile * mData; // offset 0x0, size 0x4
    struct Node * mNext; // offset 0x4, size 0x4
};
// total size: 0x4
struct AptLoader {
    // Members
private:
    class SingleList mFiles; // offset 0x0, size 0x4
};
// total size: 0xC
class AptValueVector {
    // Members
    int mCapacity; // offset 0x0, size 0x4
    int mCurrentNum; // offset 0x4, size 0x4
    class AptValue * * mpValues; // offset 0x8, size 0x4
};
// total size: 0x4
struct AptDisplayListState {
    // Members
    class AptCIH * pHead; // offset 0x0, size 0x4
};
// Range: 0x802FD0B0 -> 0x802FD1B4
void AptShutdown(int bQuiet /* r31 */) {
    // References
    // -> static int bInitialized;
    // -> class EAStringC gstrTempString;
    // -> class AptValueVector * gpZombieVector;
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptLinker * gpLinker;
    // -> struct AptLoader * gpLoader;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x802FD1B4 -> 0x802FD23C
void AptAllocatorInitialize() {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// total size: 0x20
class AptValueGC_PoolManager : public DOGMA_PoolManager {
    // Static members
    static unsigned int snMaxAllocation; // size: 0x4
    static unsigned char snMinAllocation; // size: 0x1
    static unsigned char snOffsetToStorePrev; // size: 0x1
    static unsigned char snOffsetToStoreSize; // size: 0x1
    static unsigned char snOffsetToStoreNext; // size: 0x1
};
// Range: 0x802FD23C -> 0x802FD2B0
void AptAllocatorShutdown() {
    // Local variables
    class AptValue * pCurrent; // r4

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}

// Range: 0x802FD30C -> 0x802FD310
void AptInitializeGC() {}

// Range: 0x802FD310 -> 0x802FD35C
void CleanAllNativeFunctions() {}

// Range: 0x802FD35C -> 0x802FD3CC
void AptCompleteAnimationAsyncLoad(void * pData /* r29 */, void * pConstTable /* r30 */, void * pUserData /* r31 */) {
    // References
    // -> struct AptLoader * gpLoader;
}

// Range: 0x802FD3CC -> 0x802FD494
class AptCIH * _AptGetAnimationAtLevel(int nLevel /* r30 */) {
    // Local variables
    class AptCIH * pCur; // r4

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// total size: 0x4
struct /* @class$1452Apt_cpp */ {
    // Members
    unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
    unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
    unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
    unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
    unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
    unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
    unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
    unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
    unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
    enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
};
union /* @class$1451Apt_cpp */ {
    // total size: 0x4
    struct /* @class$1452Apt_cpp */ {
        // Members
        unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
        unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
        unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
        unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
        unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
        unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
        unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
        unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
        unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
        enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
    } mValueBitfield; // offset 0x0, size 0x4
    unsigned int mnValueData; // offset 0x0, size 0x4
};
// total size: 0x20
class AptValueWithHash : public AptValueGC {
    // Members
protected:
    class AptNativeHash mNativeHash; // offset 0xC, size 0x14
};
// total size: 0x28
class AptNativeFunction : public AptObject {
    // Members
public:
    class AptValue * (* pFunc)(class AptValue *, int); // offset 0x24, size 0x4
};
// total size: 0x30
class AptArray : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_sortOn; // size: 0x4
    static class AptNativeFunction * psMethod_slice; // size: 0x4
    static class AptNativeFunction * psMethod_splice; // size: 0x4
    static class AptNativeFunction * psMethod_sort; // size: 0x4
    static class AptNativeFunction * psMethod_reverse; // size: 0x4
    static class AptNativeFunction * psMethod_unshift; // size: 0x4
    static class AptNativeFunction * psMethod_shift; // size: 0x4
    static class AptNativeFunction * psMethod_push; // size: 0x4
    static class AptNativeFunction * psMethod_pop; // size: 0x4
    static class AptNativeFunction * psMethod_join; // size: 0x4
    static class AptNativeFunction * psMethod_concat; // size: 0x4

    // Members
    class AptValue * * mpValues; // offset 0x24, size 0x4
    int mnCapacity; // offset 0x28, size 0x4
    int mnLength; // offset 0x2C, size 0x4
};
// total size: 0x24
class AptObject : public AptValueWithHash {
    // Members
protected:
    unsigned int mnImplementedObjects : 8; // offset 0x20, size 0x4
    unsigned int mbHasClass : 1; // offset 0x20, size 0x4
    unsigned int mbIsInMainInst : 1; // offset 0x20, size 0x4
};
// total size: 0x24
class AptStage : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_removeListener; // size: 0x4
    static class AptNativeFunction * psMethod_addListener; // size: 0x4
};
// total size: 0x28
class AptLoadVars : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_toString; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesLoaded; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesTotal; // size: 0x4
    static class AptNativeFunction * psMethod_sendAndLoad; // size: 0x4
    static class AptNativeFunction * psMethod_send; // size: 0x4
    static class AptNativeFunction * psMethod_load; // size: 0x4

    // Members
public:
    int iIsLoaded; // offset 0x24, size 0x4
};
// total size: 0x28
class AptXmlAttributes : public AptObject {
    // Members
public:
    class IAptXmlNode * pIXmlNode; // offset 0x24, size 0x4
};
// total size: 0x2C
class AptXmlNode : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_toString; // size: 0x4
    static class AptNativeFunction * psMethod_removeNode; // size: 0x4
    static class AptNativeFunction * psMethod_insertBefore; // size: 0x4
    static class AptNativeFunction * psMethod_hasChildNodes; // size: 0x4
    static class AptNativeFunction * psMethod_cloneNode; // size: 0x4
    static class AptNativeFunction * psMethod_appendChild; // size: 0x4

    // Members
public:
    class IAptXmlNode * pIXmlNode; // offset 0x24, size 0x4
    class AptArray * paChildNodes; // offset 0x28, size 0x4
};
// total size: 0x2C
class AptXml : public AptXmlNode {
    // Static members
    static class AptNativeFunction * psMethod_parseXml; // size: 0x4
    static class AptNativeFunction * psMethod_load; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesLoaded; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesTotal; // size: 0x4
};
// total size: 0x24
class AptMovieClip : public AptObject {};
// total size: 0x20
struct TextFormat {
    // Members
    class EAStringC pFontName; // offset 0x0, size 0x4
    float fSize; // offset 0x4, size 0x4
    int nColor; // offset 0x8, size 0x4
    enum AptStringAlignment eAlignment; // offset 0xC, size 0x4
    unsigned int nFontStyle; // offset 0x10, size 0x4
    int nIndent; // offset 0x14, size 0x4
    int nLeftMargin; // offset 0x18, size 0x4
    int nRightMargin; // offset 0x1C, size 0x4
};
// total size: 0x44
class AptTextFormat : public AptObject, public TextFormat {};
// total size: 0x68
class AptDate : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_UTC; // size: 0x4
    static class AptNativeFunction * psMethod_toString; // size: 0x4
    static class AptNativeFunction * psMethod_setYear; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCSeconds; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCMonth; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCMinutes; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCMilliseconds; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCHours; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCFullYear; // size: 0x4
    static class AptNativeFunction * psMethod_setUTCDate; // size: 0x4
    static class AptNativeFunction * psMethod_setTime; // size: 0x4
    static class AptNativeFunction * psMethod_setSeconds; // size: 0x4
    static class AptNativeFunction * psMethod_setMonth; // size: 0x4
    static class AptNativeFunction * psMethod_setMinutes; // size: 0x4
    static class AptNativeFunction * psMethod_setMilliseconds; // size: 0x4
    static class AptNativeFunction * psMethod_setHours; // size: 0x4
    static class AptNativeFunction * psMethod_setFullYear; // size: 0x4
    static class AptNativeFunction * psMethod_setDate; // size: 0x4
    static class AptNativeFunction * psMethod_getYear; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCSeconds; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCMonth; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCMinutes; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCMilliseconds; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCHours; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCFullYear; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCDay; // size: 0x4
    static class AptNativeFunction * psMethod_getUTCDate; // size: 0x4
    static class AptNativeFunction * psMethod_getTimezoneOffset; // size: 0x4
    static class AptNativeFunction * psMethod_getTime; // size: 0x4
    static class AptNativeFunction * psMethod_getSeconds; // size: 0x4
    static class AptNativeFunction * psMethod_getMonth; // size: 0x4
    static class AptNativeFunction * psMethod_getMinutes; // size: 0x4
    static class AptNativeFunction * psMethod_getMilliseconds; // size: 0x4
    static class AptNativeFunction * psMethod_getHours; // size: 0x4
    static class AptNativeFunction * psMethod_getFullYear; // size: 0x4
    static class AptNativeFunction * psMethod_getDay; // size: 0x4
    static class AptNativeFunction * psMethod_getDate; // size: 0x4

    // Members
public:
    struct AptSysClock mTM; // offset 0x24, size 0x20
    struct AptSysClock mTMU; // offset 0x44, size 0x20
    int hourDiff; // offset 0x64, size 0x4
};
// total size: 0x24
class AptPrototype : public AptValueWithHash {
    // Members
    class AptValue * mp__constructor__; // offset 0x20, size 0x4
};
// total size: 0x28
class AptScriptColour : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_setTransform; // size: 0x4
    static class AptNativeFunction * psMethod_getTransform; // size: 0x4
    static class AptNativeFunction * psMethod_getRGB; // size: 0x4
    static class AptNativeFunction * psMethod_setRGB; // size: 0x4

    // Members
public:
    class AptCIH * pSprite; // offset 0x24, size 0x4
};
// total size: 0x24
class AptMathObj : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_tan; // size: 0x4
    static class AptNativeFunction * psMethod_sqrt; // size: 0x4
    static class AptNativeFunction * psMethod_random; // size: 0x4
    static class AptNativeFunction * psMethod_pow; // size: 0x4
    static class AptNativeFunction * psMethod_log; // size: 0x4
    static class AptNativeFunction * psMethod_floor; // size: 0x4
    static class AptNativeFunction * psMethod_exp; // size: 0x4
    static class AptNativeFunction * psMethod_ceil; // size: 0x4
    static class AptNativeFunction * psMethod_atan; // size: 0x4
    static class AptNativeFunction * psMethod_asin; // size: 0x4
    static class AptNativeFunction * psMethod_acos; // size: 0x4
    static class AptNativeFunction * psMethod_abs; // size: 0x4
    static class AptNativeFunction * psMethod_max; // size: 0x4
    static class AptNativeFunction * psMethod_min; // size: 0x4
    static class AptNativeFunction * psMethod_round; // size: 0x4
    static class AptNativeFunction * psMethod_atan2; // size: 0x4
    static class AptNativeFunction * psMethod_cos; // size: 0x4
    static class AptNativeFunction * psMethod_sin; // size: 0x4
};
// total size: 0x24
class AptGlobal : public AptObject {};
// total size: 0x24
class AptKey : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_getAscii; // size: 0x4
    static class AptNativeFunction * psMethod_getAnalogStickInfo; // size: 0x4
    static class AptNativeFunction * psMethod_removeListener; // size: 0x4
    static class AptNativeFunction * psMethod_addListener; // size: 0x4
    static class AptNativeFunction * psMethod_getController; // size: 0x4
    static class AptNativeFunction * psMethod_getCode; // size: 0x4
    static class AptNativeFunction * psMethod_isToggled; // size: 0x4
    static class AptNativeFunction * psMethod_isDown; // size: 0x4
};
// total size: 0x30
class AptSound : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_start; // size: 0x4
    static class AptNativeFunction * psMethod_stop; // size: 0x4
    static class AptNativeFunction * psMethod_attachSound; // size: 0x4

    // Members
public:
    struct AptCharacter * pParentAnim; // offset 0x24, size 0x4
    void * zID; // offset 0x28, size 0x4
    const char * szName; // offset 0x2C, size 0x4
};
// total size: 0x24
class AptFrameStack : public AptValueWithHash {
    // Members
protected:
    class AptFrameStack * mpParentScope; // offset 0x20, size 0x4
};
// total size: 0x8
struct _AptScriptFunctionState {
    // Members
protected:
    class AptFrameStack * mpFrameStack; // offset 0x0, size 0x4
    class AptValue * * mpRegBlockPreviousFrameBase; // offset 0x4, size 0x4
};
// total size: 0x8
struct AptConstantPool {
    // Members
    int nItems; // offset 0x0, size 0x4
    class AptValue * * apItems; // offset 0x4, size 0x4
};
// total size: 0x34
class AptScriptFunctionBase : public AptObject {
    // Static members
    static int MAX_REGISTERS_IN_FUNCTION; // size: 0x4
    static class AptFrameStack * spFrameStack; // size: 0x4
    static int snRegBlockCurrentFrameCount; // size: 0x4
    static class AptValue * * spRegBlockCurrentFrameBase; // size: 0x4
    static int snRegisterBlockSize; // size: 0x4
    static class AptValue * * spRegBlockBase; // size: 0x4

    // Members
public:
    class AptCIH * mpCIH; // offset 0x24, size 0x4
    class AptCIH * mpParentAnim; // offset 0x28, size 0x4
protected:
    class AptFrameStack * mpCreatorScope; // offset 0x2C, size 0x4
    unsigned short mnFrameStackReserve; // offset 0x30, size 0x2
};
// total size: 0xC
class AptValueNoGC : public AptValue {};
union /* @class$2051Apt_cpp */ {
    unsigned char mbValue; // offset 0x0, size 0x1
    class AptBoolean * mpNextFree; // offset 0x0, size 0x4
};
// total size: 0x10
class AptBoolean : public AptValueNoGC {
    // Static members
    static class AptBoolean * spFirstFree; // size: 0x4

    // Members
    union { // inferred
        union /* @class$2051Apt_cpp */ {
            unsigned char mbValue; // offset 0x0, size 0x1
            class AptBoolean * mpNextFree; // offset 0x0, size 0x4
        } __anon$2058; // offset 0xC, size 0x4
        unsigned char mbValue; // offset 0xC, size 0x1
        class AptBoolean * mpNextFree; // offset 0xC, size 0x4
    };
};
union /* @class$2084Apt_cpp */ {
    float mfValue; // offset 0x0, size 0x4
    class AptFloat * mpNextFree; // offset 0x0, size 0x4
};
// total size: 0x10
class AptFloat : public AptValueNoGC {
    // Static members
    static class AptFloat * spFirstFree; // size: 0x4

    // Members
    union { // inferred
        union /* @class$2084Apt_cpp */ {
            float mfValue; // offset 0x0, size 0x4
            class AptFloat * mpNextFree; // offset 0x0, size 0x4
        } __anon$2091; // offset 0xC, size 0x4
        float mfValue; // offset 0xC, size 0x4
        class AptFloat * mpNextFree; // offset 0xC, size 0x4
    };
};
// total size: 0x10
class AptRegister : public AptValueNoGC {
    // Members
public:
    int nVal; // offset 0xC, size 0x4
};
union /* @class$2001Apt_cpp */ {
    int mnValue; // offset 0x0, size 0x4
    class AptInteger * mpNextFree; // offset 0x0, size 0x4
};
// total size: 0x10
class AptInteger : public AptValueNoGC {
    // Static members
    static class AptInteger * spFirstFree; // size: 0x4

    // Members
    union { // inferred
        union /* @class$2001Apt_cpp */ {
            int mnValue; // offset 0x0, size 0x4
            class AptInteger * mpNextFree; // offset 0x0, size 0x4
        } __anon$2008; // offset 0xC, size 0x4
        int mnValue; // offset 0xC, size 0x4
        class AptInteger * mpNextFree; // offset 0xC, size 0x4
    };
};
// total size: 0x10
class AptLookup : public AptValueNoGC {
    // Members
public:
    int nLookup; // offset 0xC, size 0x4
};
// total size: 0xC
class AptValue {
    // Static members
    static unsigned char sbSuspendRefcountDeletions; // size: 0x1
    static unsigned int snCurrentAllocationNumber; // size: 0x4
    static unsigned int MAX_GCROOT; // size: 0x4
    static unsigned int MAX_REFCOUNT; // size: 0x4
    static void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *); // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$1451Apt_cpp */ {
            // total size: 0x4
            struct /* @class$1452Apt_cpp */ {
                // Members
                unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
                unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
                unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
                unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
                unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
                unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
                unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
                unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
                unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
                enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
            } mValueBitfield; // offset 0x0, size 0x4
            unsigned int mnValueData; // offset 0x0, size 0x4
        } __anon$1456; // offset 0x4, size 0x4
        // total size: 0x4
        struct /* @class$1452Apt_cpp */ {
            // Members
            unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
            unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
            unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
            unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
            unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
            unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
            unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
            unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
            unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
            enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
        } mValueBitfield; // offset 0x4, size 0x4
        unsigned int mnValueData; // offset 0x4, size 0x4
protected:
    };
    unsigned int mnID; // offset 0x8, size 0x4
};
// total size: 0x1C
struct AptMovieclipInformation {
    // Members
    int nAnimations; // offset 0x0, size 0x4
    int nMovieClips; // offset 0x4, size 0x4
    int nButtons; // offset 0x8, size 0x4
    int nStaticText; // offset 0xC, size 0x4
    int nDynamicText; // offset 0x10, size 0x4
    int nMorph; // offset 0x14, size 0x4
    int nShapes; // offset 0x18, size 0x4
};
// total size: 0x40
struct Mat44_t {
    // Members
    float m[16]; // offset 0x0, size 0x40
};
// total size: 0x10
struct Vec4_t {
    // Members
    float vx; // offset 0x0, size 0x4
    float vy; // offset 0x4, size 0x4
    float vz; // offset 0x8, size 0x4
    float vw; // offset 0xC, size 0x4
};
// total size: 0x60
struct ClipTransform_t {
    // Members
    struct Mat44_t Pos44; // offset 0x0, size 0x40
    struct Vec4_t vColorMul4; // offset 0x40, size 0x10
    struct Vec4_t vColorAdd4; // offset 0x50, size 0x10
};
// total size: 0x18
struct AptCharacterShapeInst : public AptCharacterInst {};
// total size: 0x20
struct AptCharacterButtonInst : public AptCharacterInst {
    // Members
    enum AptCharacterButtonRecordState nState; // offset 0x18, size 0x4
    struct AptDisplayList displayList; // offset 0x1C, size 0x4
};
// total size: 0x1C
struct AptCharacterMorphInst : public AptCharacterInst {
    // Members
    float fRatio; // offset 0x18, size 0x4
};
// total size: 0x18
struct AptCharacterStaticTextInst : public AptCharacterInst {};
// total size: 0x78
struct AptCharacterTextInst : public AptCharacterInst {
    // Members
    class EAStringC mTextValue; // offset 0x18, size 0x4
    class EAStringC mVarValue; // offset 0x1C, size 0x4
    void * zID; // offset 0x20, size 0x4
    unsigned int nColour; // offset 0x24, size 0x4
    int nMaxScroll; // offset 0x28, size 0x4
    int nScroll; // offset 0x2C, size 0x4
    unsigned int nBackColor; // offset 0x30, size 0x4
    unsigned int nBorderColor; // offset 0x34, size 0x4
    enum AptStringAlignment eBoxAlignment; // offset 0x38, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x3C, size 0x4
    int nMaxChars; // offset 0x40, size 0x4
    float fTextWidth; // offset 0x44, size 0x4
    float fTextHeight; // offset 0x48, size 0x4
    float fLength; // offset 0x4C, size 0x4
    struct AptRect rBounds; // offset 0x50, size 0x10
    float fFontSize; // offset 0x60, size 0x4
    int nFontID; // offset 0x64, size 0x4
    struct TextFormat * pMyTextFormat; // offset 0x68, size 0x4
    unsigned int eFlags; // offset 0x6C, size 0x4
    unsigned int nFontStyle; // offset 0x70, size 0x4
    unsigned int bCreatedDynamic : 1; // offset 0x74, size 0x4
    unsigned int bBorder : 1; // offset 0x74, size 0x4
    unsigned int bBackground : 1; // offset 0x74, size 0x4
    unsigned int bMouseWheelEnabled : 1; // offset 0x74, size 0x4
};
// total size: 0x30
struct AptCharacterSpriteInst : public AptCharacterSpriteInstBase {};
// total size: 0x64
class AptCIH : public AptValueGC {
    // Static members
    static int emptyAssetString; // size: 0x4

    // Members
public:
    class EAStringC mMyName; // offset 0xC, size 0x4
    struct AptMatrix matrix; // offset 0x10, size 0x18
    struct AptCXForm cxform; // offset 0x28, size 0x20
    class AptCIH * pParent; // offset 0x48, size 0x4
    struct AptCharacterInst * pData; // offset 0x4C, size 0x4
    class AptCIH * pPrev; // offset 0x50, size 0x4
    class AptCIH * pNext; // offset 0x54, size 0x4
    int nDepth : 17; // offset 0x58, size 0x4
    int nCreatedOnFrame : 14; // offset 0x58, size 0x4
protected:
    unsigned int nZombieCounter : 16; // offset 0x5C, size 0x4
    unsigned int mbASChange : 1; // offset 0x5C, size 0x4
    unsigned int mbHasClass : 1; // offset 0x5C, size 0x4
    unsigned int mbIsZombie : 2; // offset 0x5C, size 0x4
    unsigned int mbIsVisible : 1; // offset 0x5C, size 0x4
    unsigned int mbInCtor : 1; // offset 0x5C, size 0x4
    float * fRot; // offset 0x60, size 0x4
};
// total size: 0xC
class AptValueGC : public AptValue {};
// Range: 0x802FD494 -> 0x802FD560
void AptGetAnimationSize(int * pnWidth /* r30 */, int * pnHeight /* r31 */) {
    // Local variables
    struct AptCharacterAnimationInst * pSprInst; // r0

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// total size: 0x1C
struct AptPseudoData_t {
    // Members
    struct AptCharacter * pCharacter; // offset 0x0, size 0x4
    struct AptMatrix * matrix; // offset 0x4, size 0x4
    struct AptnCXForm * ncxform; // offset 0x8, size 0x4
    struct AptEventActionSet * pActions; // offset 0xC, size 0x4
    float fRatio; // offset 0x10, size 0x4
    int eFlags; // offset 0x14, size 0x4
    int nFrameCreated : 16; // offset 0x18, size 0x4
    int nClipDepth : 16; // offset 0x18, size 0x4
};
// total size: 0x14
struct AptPseudoCIH_t {
    // Members
    struct AptControl * pControl; // offset 0x0, size 0x4
    struct AptPseudoData_t * pControlInfo; // offset 0x4, size 0x4
    struct AptPseudoCIH_t * pNext; // offset 0x8, size 0x4
    struct AptPseudoCIH_t * pPrev; // offset 0xC, size 0x4
    int nDepth; // offset 0x10, size 0x4
};
// total size: 0x8
class AptPseudoDisplayList {
    // Members
    struct AptPseudoCIH_t * pHead; // offset 0x0, size 0x4
    class AptCIH * pParentCIH; // offset 0x4, size 0x4
};
// total size: 0x4
struct AptDisplayList {
    // Static members
    static int BASE_MOVIE_DEPTH; // size: 0x4

    // Members
    struct AptDisplayListState * pState; // offset 0x0, size 0x4
};
// total size: 0x30
struct AptCharacterSpriteInstBase : public AptCharacterInst {
    // Members
    int nFrame; // offset 0x18, size 0x4
    int nObjectClipActions : 24; // offset 0x1C, size 0x4
    unsigned int bJustLoaded : 1; // offset 0x1C, size 0x4
    unsigned int bIsPlaying : 1; // offset 0x1C, size 0x4
    unsigned int nIsCustomControl : 2; // offset 0x1C, size 0x4
    struct AptEventActionSet * pClipActions; // offset 0x20, size 0x4
    struct AptDisplayList displayList; // offset 0x24, size 0x4
    int nGotoAnded; // offset 0x28, size 0x4
    int bCreatedDynamic; // offset 0x2C, size 0x4
};
// total size: 0x38
struct AptCharacterAnimationInst : public AptCharacterSpriteInstBase {
    // Members
    unsigned int nLeftoverTime; // offset 0x30, size 0x4
    class AptSharedPtr pFile; // offset 0x34, size 0x4
};
enum AptVirtualFunctionTable_Indices {
    AptVFT_xxx = 0,
    AptVFT_StringValue = 1,
    AptVFT_Property = 2,
    AptVFT_None = 3,
    AptVFT_Register = 4,
    AptVFT_Boolean = 5,
    AptVFT_Float = 6,
    AptVFT_Integer = 7,
    AptVFT_Lookup = 8,
    AptVFT_NativeFunction = 9,
    AptVFT_UNUSED = 10,
    AptVFT_Extern = 11,
    AptVFT_CharacterShapeInst = 12,
    AptVFT_CharacterSpriteInst = 13,
    AptVFT_CharacterButtonInst = 14,
    AptVFT_CharacterTextInst = 15,
    AptVFT_CharacterStaticTextInst = 16,
    AptVFT_CharacterMorphInst = 17,
    AptVFT_CharacterAnimationInst = 18,
    AptVFT_CharacterLevelInst = 19,
    AptVFT_FrameStack = 20,
    AptVFT_Sound = 21,
    AptVFT_Array = 22,
    AptVFT_Math = 23,
    AptVFT_Key = 24,
    AptVFT_Global = 25,
    AptVFT_ScriptColour = 26,
    AptVFT_Object = 27,
    AptVFT_Prototype = 28,
    AptVFT_Date = 29,
    AptVFT_MovieClip = 30,
    AptVFT_Mouse = 31,
    AptVFT_XmlNode = 32,
    AptVFT_Xml = 33,
    AptVFT_XmlAttributes = 34,
    AptVFT_LoadVars = 35,
    AptVFT_TextFormat = 36,
    AptVFT_Extension = 37,
    AptVFT_GlobalExtension = 38,
    AptVFT_Stage = 39,
    AptVFT_RESERVED = 40,
    AptVFT_Error = 41,
    AptVFT_StringObject = 42,
    AptVFT_ScriptFunction1 = 43,
    AptVFT_ScriptFunction2 = 44,
    AptVFT_ScriptFunctionByteCodeBlock = 45,
    AptVFT_DisplayListHead = 46,
    AptVFT_NumVFTs = 47,
};
// Range: 0x802FD560 -> 0x802FD568
void AptSetValidFocusButton() {
    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x802FD568 -> 0x802FD5EC
void AptLoadAnimation(const char * szBaseName /* r31 */) {
    // Local variables
    class EAStringC sTarget; // r1+0x10

    // References
    // -> struct AptLinker * gpLinker;
    // -> unsigned char gbBackgroundColorSet;
}

// total size: 0x4
struct AptSharedPtrRefCount {
    // Members
    int mRefCount; // offset 0x0, size 0x4
};
enum AptCharacterType {
    AptCharacterType_Shape = 1,
    AptCharacterType_Text = 2,
    AptCharacterType_Font = 3,
    AptCharacterType_Button = 4,
    AptCharacterType_Sprite = 5,
    AptCharacterType_Sound = 6,
    AptCharacterType_Bitmap = 7,
    AptCharacterType_Morph = 8,
    AptCharacterType_Animation = 9,
    AptCharacterType_StaticText = 10,
    AptCharacterType_None = 11,
    AptCharacterType_Video = 12,
};
// total size: 0x10
struct AptRect {
    // Members
    float fLeft; // offset 0x0, size 0x4
    float fTop; // offset 0x4, size 0x4
    float fRight; // offset 0x8, size 0x4
    float fBottom; // offset 0xC, size 0x4
};
// total size: 0x14
struct AptCharacterShape {
    // Members
    struct AptRect rBounds; // offset 0x0, size 0x10
    void * zID; // offset 0x10, size 0x4
};
// total size: 0x8
struct AptCharacterMorph {
    // Members
    struct AptCharacter * pStartCharacter; // offset 0x0, size 0x4
    struct AptCharacter * pEndCharacter; // offset 0x4, size 0x4
};
// total size: 0x34
struct AptCharacterText {
    // Members
    struct AptRect rBounds; // offset 0x0, size 0x10
    int nFontID; // offset 0x10, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x14, size 0x4
    unsigned int nColour; // offset 0x18, size 0x4
    float fFontHeight; // offset 0x1C, size 0x4
    int bReadOnly; // offset 0x20, size 0x4
    int bMultiLine; // offset 0x24, size 0x4
    int bWordWrap; // offset 0x28, size 0x4
    char * szInitialText; // offset 0x2C, size 0x4
    char * szVariable; // offset 0x30, size 0x4
};
// total size: 0xC
struct AptCharacterFont {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nGlyphs; // offset 0x4, size 0x4
    struct AptCharacter * * apGlyphs; // offset 0x8, size 0x4
};
enum AptCharacterButtonRecordState {
    AptCharacterButtonRecordState_None = 0,
    AptCharacterButtonRecordState_Up = 1,
    AptCharacterButtonRecordState_Over = 2,
    AptCharacterButtonRecordState_Down = 4,
    AptCharacterButtonRecordState_HitTest = 8,
};
// total size: 0x44
struct AptCharacterButtonRecord {
    // Members
    enum AptCharacterButtonRecordState eStates; // offset 0x0, size 0x4
    struct AptCharacter * pCharacter; // offset 0x4, size 0x4
    int nLayer; // offset 0x8, size 0x4
    struct AptMatrix matrix; // offset 0xC, size 0x18
    struct AptCXForm cxform; // offset 0x24, size 0x20
};
// total size: 0x4
struct AptActionBlock {
    // Members
    unsigned char * aActionStream; // offset 0x0, size 0x4
};
// total size: 0x8
struct AptActionConditionBlock {
    // Members
    int nConditions; // offset 0x0, size 0x4
    struct AptActionBlock actions; // offset 0x4, size 0x4
};
// total size: 0x10
struct AptCharacterButtonSound {
    // Members
    struct AptCharacter * pOverUpToIdle; // offset 0x0, size 0x4
    struct AptCharacter * pIdleToOverUp; // offset 0x4, size 0x4
    struct AptCharacter * pOverUpToOverDown; // offset 0x8, size 0x4
    struct AptCharacter * pOverDownToOverUp; // offset 0xC, size 0x4
};
// total size: 0x38
struct AptCharacterButton {
    // Members
    int bIsMenu; // offset 0x0, size 0x4
    struct AptRect mHitTestBoundingRect; // offset 0x4, size 0x10
    int mHitTestTriangles; // offset 0x14, size 0x4
    int mHitTestVertexCount; // offset 0x18, size 0x4
    float * mHitTestVertexTable; // offset 0x1C, size 0x4
    signed short * mHitTestIndexTable; // offset 0x20, size 0x4
    int nButtonRecords; // offset 0x24, size 0x4
    struct AptCharacterButtonRecord * aButtonRecords; // offset 0x28, size 0x4
    int nActionConditions; // offset 0x2C, size 0x4
    struct AptActionConditionBlock * aActionConditions; // offset 0x30, size 0x4
    struct AptCharacterButtonSound * pButtonSound; // offset 0x34, size 0x4
};
enum AptControlType {
    AptControlType_DoAction = 1,
    AptControlType_FrameLabel = 2,
    AptControlType_PlaceObject2 = 3,
    AptControlType_RemoveObject2 = 4,
    AptControlType_BackgroundColour = 5,
    AptControlType_StartSound = 6,
    AptControlType_StartSoundStream = 7,
    AptControlType_DoInitAction = 8,
};
// total size: 0x4
struct AptControlDoAction {
    // Members
    struct AptActionBlock actions; // offset 0x0, size 0x4
};
// total size: 0x8
struct AptControlDoInitAction {
    // Members
    int nSpriteID; // offset 0x0, size 0x4
    struct AptActionBlock actions; // offset 0x4, size 0x4
};
// total size: 0x4
struct AptControlFrameLabel {
    // Members
    char * szLabel; // offset 0x0, size 0x4
};
enum AptPlaceObjectFlags {
    AptPlaceObjectFlag_None = 0,
    AptPlaceObjectFlag_Move = 1,
    AptPlaceObjectFlag_Character = 2,
    AptPlaceObjectFlag_Matrix = 4,
    AptPlaceObjectFlag_CXForm = 8,
    AptPlaceObjectFlag_Ratio = 16,
    AptPlaceObjectFlag_Name = 32,
    AptPlaceObjectFlag_DefineClip = 64,
    AptPlaceObjectFlag_Actions = 128,
};
// total size: 0x8
struct AptnCXForm {
    // Members
    unsigned int nScale; // offset 0x0, size 0x4
    unsigned int nBias; // offset 0x4, size 0x4
};
// total size: 0xC
struct AptEventActionBlock {
    // Members
    int nTriggers; // offset 0x0, size 0x4
    int nKeyCode; // offset 0x4, size 0x4
    struct AptActionBlock actions; // offset 0x8, size 0x4
};
// total size: 0x8
struct AptEventActionSet {
    // Members
    int nEventActions; // offset 0x0, size 0x4
    struct AptEventActionBlock * aEventActions; // offset 0x4, size 0x4
};
// total size: 0x3C
struct AptControlPlaceObject2 {
    // Members
    enum AptPlaceObjectFlags eFlags; // offset 0x0, size 0x4
    int nDepth; // offset 0x4, size 0x4
    int nCharacterID; // offset 0x8, size 0x4
    struct AptMatrix matrix; // offset 0xC, size 0x18
    struct AptnCXForm ncxform; // offset 0x24, size 0x8
    float fRatio; // offset 0x2C, size 0x4
    char * szName; // offset 0x30, size 0x4
    int nClipDepth; // offset 0x34, size 0x4
    struct AptEventActionSet * pActions; // offset 0x38, size 0x4
};
// total size: 0x4
struct AptControlRemoveObject2 {
    // Members
    int nDepth; // offset 0x0, size 0x4
};
// total size: 0x4
struct AptControlBackgroundColour {
    // Members
    unsigned int nColour; // offset 0x0, size 0x4
};
// total size: 0x4
struct AptControlSound {
    // Members
    int nID; // offset 0x0, size 0x4
};
union /* @class$3419Apt_cpp */ {
    struct AptControlDoAction action; // offset 0x0, size 0x4
    struct AptControlDoInitAction initAction; // offset 0x0, size 0x8
    struct AptControlFrameLabel frameLabel; // offset 0x0, size 0x4
    struct AptControlPlaceObject2 placeObject2; // offset 0x0, size 0x3C
    struct AptControlRemoveObject2 removeObject2; // offset 0x0, size 0x4
    struct AptControlBackgroundColour backgroundColour; // offset 0x0, size 0x4
    struct AptControlSound startSound; // offset 0x0, size 0x4
    struct AptControlSound startSoundStream; // offset 0x0, size 0x4
};
// total size: 0x40
struct AptControl {
    // Members
    enum AptControlType eType; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$3419Apt_cpp */ {
            struct AptControlDoAction action; // offset 0x0, size 0x4
            struct AptControlDoInitAction initAction; // offset 0x0, size 0x8
            struct AptControlFrameLabel frameLabel; // offset 0x0, size 0x4
            struct AptControlPlaceObject2 placeObject2; // offset 0x0, size 0x3C
            struct AptControlRemoveObject2 removeObject2; // offset 0x0, size 0x4
            struct AptControlBackgroundColour backgroundColour; // offset 0x0, size 0x4
            struct AptControlSound startSound; // offset 0x0, size 0x4
            struct AptControlSound startSoundStream; // offset 0x0, size 0x4
        } __anon$3420; // offset 0x4, size 0x3C
        struct AptControlDoAction action; // offset 0x4, size 0x4
        struct AptControlDoInitAction initAction; // offset 0x4, size 0x8
        struct AptControlFrameLabel frameLabel; // offset 0x4, size 0x4
        struct AptControlPlaceObject2 placeObject2; // offset 0x4, size 0x3C
        struct AptControlRemoveObject2 removeObject2; // offset 0x4, size 0x4
        struct AptControlBackgroundColour backgroundColour; // offset 0x4, size 0x4
        struct AptControlSound startSound; // offset 0x4, size 0x4
        struct AptControlSound startSoundStream; // offset 0x4, size 0x4
    };
};
// total size: 0x8
struct AptFrame {
    // Members
    int nControls; // offset 0x0, size 0x4
    struct AptControl * * apControls; // offset 0x4, size 0x4
};
// total size: 0x8
struct AptHashItem {
    // Members
    class EAStringC Key; // offset 0x0, size 0x4
    class AptValue * mValue; // offset 0x4, size 0x4
};
// total size: 0x14
class AptNativeHash {
    // Static members
    static int NUM_PROBES; // size: 0x4

    // Members
public:
    int mnTotalSize; // offset 0x0, size 0x4
    struct AptHashItem * mpData; // offset 0x4, size 0x4
    class AptValue * mp__proto__; // offset 0x8, size 0x4
    class AptValue * mpPrototype; // offset 0xC, size 0x4
    unsigned int nEventHandlers; // offset 0x10, size 0x4
};
union /* @class$4671Apt_cpp */ {
    char * szString; // offset 0x0, size 0x4
    float fFloat; // offset 0x0, size 0x4
    int nInteger; // offset 0x0, size 0x4
    int nRegister; // offset 0x0, size 0x4
    int bBoolean; // offset 0x0, size 0x4
    unsigned int nLookup; // offset 0x0, size 0x4
};
// total size: 0x8
struct AptConstantTable {
    // Members
    enum AptVirtualFunctionTable_Indices eType; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$4671Apt_cpp */ {
            char * szString; // offset 0x0, size 0x4
            float fFloat; // offset 0x0, size 0x4
            int nInteger; // offset 0x0, size 0x4
            int nRegister; // offset 0x0, size 0x4
            int bBoolean; // offset 0x0, size 0x4
            unsigned int nLookup; // offset 0x0, size 0x4
        } __anon$4672; // offset 0x4, size 0x4
        char * szString; // offset 0x4, size 0x4
        float fFloat; // offset 0x4, size 0x4
        int nInteger; // offset 0x4, size 0x4
        int nRegister; // offset 0x4, size 0x4
        int bBoolean; // offset 0x4, size 0x4
        unsigned int nLookup; // offset 0x4, size 0x4
    };
};
// total size: 0x20
struct AptConstFile {
    // Members
    char aMagic[20]; // offset 0x0, size 0x14
    struct AptCharacter * pMainCharacter; // offset 0x14, size 0x4
    int nConstants; // offset 0x18, size 0x4
    struct AptConstantTable * aConstants; // offset 0x1C, size 0x4
};
// total size: 0xC
struct AptMovie {
    // Members
    int nFrames; // offset 0x0, size 0x4
    struct AptFrame * aFrames; // offset 0x4, size 0x4
    class AptNativeHash * phLabels; // offset 0x8, size 0x4
};
// total size: 0xC
struct AptCharacterSprite {
    // Members
    struct AptMovie movie; // offset 0x0, size 0xC
};
// total size: 0x4
struct AptCharacterSound {
    // Members
    void * zID; // offset 0x0, size 0x4
};
// total size: 0x4
struct AptCharacterBitmap {
    // Members
    void * zID; // offset 0x0, size 0x4
};
// total size: 0x10
struct AptImport {
    // Members
    char * szFile; // offset 0x0, size 0x4
    char * szName; // offset 0x4, size 0x4
    int nID; // offset 0x8, size 0x4
    class AptSharedPtr file; // offset 0xC, size 0x4
};
// total size: 0x8
struct AptExport {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nID; // offset 0x4, size 0x4
};
// total size: 0x34
struct AptCharacterAnimation : public AptCharacterSprite {
    // Members
    int nCharacters; // offset 0xC, size 0x4
    struct AptCharacter * * apCharacters; // offset 0x10, size 0x4
    unsigned int nWidth; // offset 0x14, size 0x4
    unsigned int nHeight; // offset 0x18, size 0x4
    unsigned int nMillisecondsPerFrame; // offset 0x1C, size 0x4
    int nImports; // offset 0x20, size 0x4
    struct AptImport * aImports; // offset 0x24, size 0x4
    int nExports; // offset 0x28, size 0x4
    struct AptExport * aExports; // offset 0x2C, size 0x4
    int nCurrentConstantIndex; // offset 0x30, size 0x4
};
// total size: 0x4
struct AptCharacterGlyphEntry {
    // Members
    signed short nIndex; // offset 0x0, size 0x2
    signed short nAdvance; // offset 0x2, size 0x2
};
// total size: 0x38
struct AptCharacterStaticTextRecords {
    // Members
    int nFontID; // offset 0x0, size 0x4
    struct AptCXForm cxform; // offset 0x4, size 0x20
    float fXOffset; // offset 0x24, size 0x4
    float fYOffset; // offset 0x28, size 0x4
    float fScale; // offset 0x2C, size 0x4
    int nGlyphs; // offset 0x30, size 0x4
    struct AptCharacterGlyphEntry * aGlyphs; // offset 0x34, size 0x4
};
// total size: 0x30
struct AptCharacterStaticText {
    // Members
    struct AptRect rBounds; // offset 0x0, size 0x10
    struct AptMatrix matrix; // offset 0x10, size 0x18
    int nFontRecords; // offset 0x28, size 0x4
    struct AptCharacterStaticTextRecords * aRecords; // offset 0x2C, size 0x4
};
union /* @class$4327Apt_cpp */ {
    struct AptCharacterShape shape; // offset 0x0, size 0x14
    struct AptCharacterMorph morph; // offset 0x0, size 0x8
    struct AptCharacterText text; // offset 0x0, size 0x34
    struct AptCharacterFont font; // offset 0x0, size 0xC
    struct AptCharacterButton button; // offset 0x0, size 0x38
    struct AptCharacterSprite sprite; // offset 0x0, size 0xC
    struct AptCharacterSound sound; // offset 0x0, size 0x4
    struct AptCharacterBitmap bitmap; // offset 0x0, size 0x4
    struct AptCharacterAnimation animation; // offset 0x0, size 0x34
    struct AptCharacterStaticText statictext; // offset 0x0, size 0x30
};
// total size: 0x40
struct AptCharacter {
    // Members
    enum AptCharacterType eType; // offset 0x0, size 0x4
    struct AptCharacter * pParentAnim; // offset 0x4, size 0x4
    union { // inferred
        union /* @class$4327Apt_cpp */ {
            struct AptCharacterShape shape; // offset 0x0, size 0x14
            struct AptCharacterMorph morph; // offset 0x0, size 0x8
            struct AptCharacterText text; // offset 0x0, size 0x34
            struct AptCharacterFont font; // offset 0x0, size 0xC
            struct AptCharacterButton button; // offset 0x0, size 0x38
            struct AptCharacterSprite sprite; // offset 0x0, size 0xC
            struct AptCharacterSound sound; // offset 0x0, size 0x4
            struct AptCharacterBitmap bitmap; // offset 0x0, size 0x4
            struct AptCharacterAnimation animation; // offset 0x0, size 0x34
            struct AptCharacterStaticText statictext; // offset 0x0, size 0x30
        } __anon$4334; // offset 0x8, size 0x38
        struct AptCharacterShape shape; // offset 0x8, size 0x14
        struct AptCharacterMorph morph; // offset 0x8, size 0x8
        struct AptCharacterText text; // offset 0x8, size 0x34
        struct AptCharacterFont font; // offset 0x8, size 0xC
        struct AptCharacterButton button; // offset 0x8, size 0x38
        struct AptCharacterSprite sprite; // offset 0x8, size 0xC
        struct AptCharacterSound sound; // offset 0x8, size 0x4
        struct AptCharacterBitmap bitmap; // offset 0x8, size 0x4
        struct AptCharacterAnimation animation; // offset 0x8, size 0x34
        struct AptCharacterStaticText statictext; // offset 0x8, size 0x30
    };
};
// total size: 0x18
struct AptFile : public AptSharedPtrRefCount {
    // Members
private:
    class EAStringC mName; // offset 0x4, size 0x4
    enum State mState; // offset 0x8, size 0x4
    void * mAptData; // offset 0xC, size 0x4
    struct AptCharacter * mCharacter; // offset 0x10, size 0x4
    void * mUserData; // offset 0x14, size 0x4
};
enum State {
    Invalid = 0,
    Queued = 1,
    WaitingForData = 2,
    WaitingForImports = 3,
    Resolved = 4,
    Zombie = 5,
};
// total size: 0x8
struct AptSavedInputRecordInput : public AptSavedInputRecord {
    // Members
    unsigned int nInput; // offset 0x4, size 0x4
};
// Range: 0x802FD5EC -> 0x802FD66C
static void _addScreenGrabToSavedInputs() {
    // Local variables
    char szBuf[16]; // r1+0x10
    struct AptSavedInputRecordInput inputRecord; // r1+0x8

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> unsigned int gnCurTick;
    // -> int gbSavedInputsEnabled;
}

// Range: 0x802FD66C -> 0x802FD7B4
static int _tick(unsigned int nDeltaTime /* r30 */) {
    // Local variables
    int bAdvancedFrame; // r31
    struct AptCharacterAnimationInst * pAnimInst; // r0
    unsigned int nMillisecondsPerFrame; // r29
    struct AptCharacterAnimationInst * pAnimInst; // r0

    // References
    // -> int gbSavedInputsEnabled;
    // -> unsigned int gnCurTick;
    // -> struct AptLinker * gpLinker;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x802FD7B4 -> 0x802FDA00
static void _playbackSavedInputs() {
    // Local variables
    unsigned int nTargetTime; // r28
    unsigned int nInput; // r0
    char * szName; // r27
    char szBuf[16]; // r1+0x10
    unsigned int nCustomMessageBytes; // r27
    int bCorrectAnimsLoaded; // r0

    // References
    // -> struct AptLinker * gpLinker;
    // -> int gbSavedInputsEnabled;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct SavedInputPlayback gSIPlayback;
}

// total size: 0xC
struct DbgIterator : public DbgIteratorBase {};
// total size: 0xC
class DbgIteratorBase {
    // Members
protected:
    struct AptFileSavedInputState * mPtr; // offset 0x0, size 0x4
    struct AptFileSavedInputState * mBegin; // offset 0x4, size 0x4
    struct AptFileSavedInputState * mEnd; // offset 0x8, size 0x4
};
// total size: 0x1
struct DefaultPolicy {};
enum State {
    Invalid = 0,
    ExpectedBySavedInputButUnavailable = 1,
    LoadedButNotAtCheckpoint = 2,
    ReadyToBeLinked = 3,
    Linked = 4,
};
// total size: 0x8
struct DbgIteratorFactory {
    // Members
private:
    struct AptFileSavedInputState * mBegin; // offset 0x0, size 0x4
    struct AptFileSavedInputState * mEnd; // offset 0x4, size 0x4
};
// Range: 0x802FDA00 -> 0x802FDB00
static void _AptInternalUpdate(unsigned int nDeltaTime /* r31 */) {
    // Local variables
    class AptSharedPtr aLoadedFiles[96]; // r1+0x8

    // References
    // -> unsigned char gbGarbageCollectThisFrame;
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptLinker * gpLinker;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> struct AptLoader * gpLoader;
}

// total size: 0x4
class Iterator {
    // Members
    struct Node * mRep; // offset 0x0, size 0x4
};
// Range: 0x802FDB00 -> 0x802FDB48
static void _AptInternalRender() {
    // References
    // -> struct AptRenderingContext * gpRenderingContext;
    // -> struct AptAnimationPoolData * gpPool;
}

// total size: 0x1
class AptMath {
    // Static members
    static unsigned short m_nStackCount; // size: 0x2
    static unsigned short m_nStackCapacity; // size: 0x2
    static unsigned char m_nMinimumAlignment; // size: 0x1
    static struct ClipTransform_t * m_pAllocatedBase; // size: 0x4
    static struct ClipTransform_t * m_pStackBase; // size: 0x4
};
// Range: 0x802FDB48 -> 0x802FDBA0
void AptUpdate(unsigned int nDeltaTime /* r31 */) {
    // References
    // -> unsigned long gAptOptFlags;
}

// total size: 0x1
class AptFastStack {};
// Range: 0x802FDBA0 -> 0x802FDBA4
void AptRender() {}

enum AptInputType {
    AptInputType_MouseButton0 = 0,
    AptInputType_Left = 1,
    AptInputType_Right = 2,
    AptInputType_Home = 3,
    AptInputType_End = 4,
    AptInputType_Insert = 5,
    AptInputType_Delete = 6,
    AptInputType_Backspace = 8,
    AptInputType_Enter = 13,
    AptInputType_Up = 14,
    AptInputType_Down = 15,
    AptInputType_PgUp = 16,
    AptInputType_PgDn = 17,
    AptInputType_Tab = 18,
    AptInputType_Escape = 19,
    AptInputType_ASCII32 = 32,
    AptInputType_ASCII126 = 126,
    AptInputType_MouseMovement = 200,
    AptInputType_PadSelect = 300,
    AptInputType_PadBack = 300,
    AptInputType_PadStart = 301,
    AptInputType_PadCross = 302,
    AptInputType_PadA = 302,
    AptInputType_PadCircle = 303,
    AptInputType_PadB = 303,
    AptInputType_PadTriangle = 304,
    AptInputType_PadX = 304,
    AptInputType_PadSquare = 305,
    AptInputType_PadY = 305,
    AptInputType_PadL1 = 306,
    AptInputType_PadBlack = 306,
    AptInputType_PadR1 = 307,
    AptInputType_PadWhite = 307,
    AptInputType_PadZTrigger = 307,
    AptInputType_PadL2 = 308,
    AptInputType_PadL = 308,
    AptInputType_PadR2 = 309,
    AptInputType_PadR = 309,
    AptInputType_PadL3 = 310,
    AptInputType_PadR3 = 311,
    AptInputType_Connected = 400,
    AptInputType_Disconnected = 401,
    AptInputType_LeftAnalogStick = 501,
    AptInputType_RightAnalogStick = 502,
    AptInputType_NumInputs = 503,
};
enum AptInputState {
    AptInputState_Pressed = 0,
    AptInputState_Released = 1,
    AptInputState_NumStates = 2,
    AptInputState_WheelUp = 3,
    AptInputState_WheelDown = 4,
    AptInputState_MouseMove = 5,
};
// Range: 0x802FDBA4 -> 0x802FDBE8
void AptAddToInputQueue(enum AptInputType eInput /* r8 */, enum AptInputState eState /* r7 */) {
    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> static int bInitialized;
}

// total size: 0x14
class AptString : public AptValueNoGC {
    // Static members
    static class AptNativeFunction * psMethod_toUpperCase; // size: 0x4
    static class AptNativeFunction * psMethod_toLowerCase; // size: 0x4
    static class AptNativeFunction * psMethod_substring; // size: 0x4
    static class AptNativeFunction * psMethod_substr; // size: 0x4
    static class AptNativeFunction * psMethod_split; // size: 0x4
    static class AptNativeFunction * psMethod_slice; // size: 0x4
    static class AptNativeFunction * psMethod_lastIndexOf; // size: 0x4
    static class AptNativeFunction * psMethod_indexOf; // size: 0x4
    static class AptNativeFunction * psMethod_fromCharCode; // size: 0x4
    static class AptNativeFunction * psMethod_concat; // size: 0x4
    static class AptNativeFunction * psMethod_charCodeAt; // size: 0x4
    static class AptNativeFunction * psMethod_charAt; // size: 0x4

    // Members
public:
    class EAStringC str; // offset 0xC, size 0x4
    class AptString * mpNext; // offset 0x10, size 0x4
};
// Range: 0x802FDBE8 -> 0x802FDDDC
void AptCallFunction(const char * szName /* r25 */, char * szReturnValue /* r26 */, int nNumParams /* r27 */) {
    // Local variables
    class AptString * apStrings[32]; // r1+0x80
    class AptValue * pContext; // r28
    int i; // r29
    class EAStringC strObject; // r1+0x6C
    struct __va_list_struct varargs[1]; // r1+0x70
    class EAStringC strName; // r1+0x68
    class AptValue * pFuncValue; // r29
    void * pFuncState; // r30
    class AptValue * pVal; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// total size: 0x1C
struct LocalContextT {
    // Members
    const unsigned char * pInstruction; // offset 0x0, size 0x4
    class AptCIH * pCurrentContext; // offset 0x4, size 0x4
    class AptValue * pCurWith; // offset 0x8, size 0x4
    unsigned char * pRemoveWithAt; // offset 0xC, size 0x4
    class AptValue * pSuper; // offset 0x10, size 0x4
    unsigned char bEncounteredReturn; // offset 0x14, size 0x1
    struct AptCharacterInst * pParentCharacter; // offset 0x18, size 0x4
};
// total size: 0x4
struct FunctionTable {
    // Members
    void (* mFunctionPointer)(struct AptActionInterpreter * const, struct LocalContextT * const); // offset 0x0, size 0x4
};
// total size: 0x1
struct AptActionSetup {};
// total size: 0x60
struct AptActionInterpreter {
    // Static members
    static struct FunctionTable sGlobalTable[185]; // size: 0x2E4

    // Members
    class AptBasePtrStack stack; // offset 0x0, size 0xC
    class AptValuePtrStack withStack; // offset 0xC, size 0xC
    class AptValuePtrStack setTargetStack; // offset 0x18, size 0xC
    class AptValuePtrStack thisStack; // offset 0x24, size 0xC
    class AptScriptFunctionBase * mpCurrentFunction; // offset 0x30, size 0x4
    struct AptConstantPool constantPool; // offset 0x34, size 0x8
    unsigned int input; // offset 0x3C, size 0x4
    class AptValue * apRegisters[4]; // offset 0x40, size 0x10
    int nThisCount; // offset 0x50, size 0x4
private:
    class AptValue * mpThrownValue; // offset 0x54, size 0x4
    int mnStackFrameBase; // offset 0x58, size 0x4
public:
    unsigned char bShutDown; // offset 0x5C, size 0x1
};
// total size: 0xC
class AptBasePtrStack {
    // Members
    int m_nElements; // offset 0x0, size 0x4
    int m_nCapacity; // offset 0x4, size 0x4
    class AptValue * * m_aElements; // offset 0x8, size 0x4
};
// Range: 0x802FDDDC -> 0x802FDDFC
void AptDebugPlaySavedInputs() {
    // References
    // -> struct SavedInputPlayback gSIPlayback;
}

// Range: 0x802FDDFC -> 0x802FDE20
float Apt_atoff() {}

class IAptXmlImpl * gpAptXmlImpl; // size: 0x4, address: 0x805DC204
// Range: 0x802FDE20 -> 0x802FDE30
void AptSetXMLImplementor() {
    // References
    // -> class IAptXmlImpl * gpAptXmlImpl;
}

// Range: 0x802FDE30 -> 0x802FDE58
void AptFlushInputQueue() {
    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
}

// total size: 0x24
class AptGlobalExtensionObject : public AptObject {};
// Range: 0x802FDE58 -> 0x802FDE64
void AptPartialGarbageCollection() {
    // References
    // -> unsigned char gbGarbageCollectThisFrame;
}

static int nSwfVersion; // size: 0x4, address: 0x805DC208
// Range: 0x802FDE64 -> 0x802FDE6C
void AptSetSwfVersion() {
    // References
    // -> static int nSwfVersion;
}

// Range: 0x802FDE6C -> 0x802FDE74
int AptGetSwfVersion() {
    // References
    // -> static int nSwfVersion;
}

// Range: 0x802FDE74 -> 0x802FDFD0
void AptUpdateZombieVector(unsigned char bClean /* r27 */) {
    // Local variables
    class AptCIH * pCIH; // r29
    int nNumVals; // r0
    int i; // r28
    struct AptCharacterAnimationInst * pAnimation; // r0

    // References
    // -> class AptValueVector * gpZombieVector;
}

// total size: 0x18
struct AptCharacterInst {
    // Static members
    static class AptNativeFunction * psMethod_localToGlobal; // size: 0x4
    static class AptNativeFunction * psMethod_startDrag; // size: 0x4
    static class AptNativeFunction * psMethod_setMask; // size: 0x4
    static class AptNativeFunction * psMethod_swapDepths; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesLoaded; // size: 0x4
    static class AptNativeFunction * psMethod_getBytesTotal; // size: 0x4
    static class AptNativeFunction * psMethod_setTextFormat; // size: 0x4
    static class AptNativeFunction * psMethod_getTextFormat; // size: 0x4
    static class AptNativeFunction * psMethod_getNewTextFormat; // size: 0x4
    static class AptNativeFunction * psMethod_createEmptyMovieClip; // size: 0x4
    static class AptNativeFunction * psMethod_hitTest; // size: 0x4
    static class AptNativeFunction * psMethod_getBounds; // size: 0x4
    static class AptNativeFunction * psMethod_getDepth; // size: 0x4
    static class AptNativeFunction * psMethod_removeTextField; // size: 0x4
    static class AptNativeFunction * psMethod_createTextField; // size: 0x4
    static class AptNativeFunction * psMethod_removeMovieClip; // size: 0x4
    static class AptNativeFunction * psMethod_duplicateMovieClip; // size: 0x4
    static class AptNativeFunction * psMethod_unloadMovie; // size: 0x4
    static class AptNativeFunction * psMethod_loadMovie; // size: 0x4
    static class AptNativeFunction * psMethod_attachMovie; // size: 0x4
    static class AptNativeFunction * psMethod_loadVariables; // size: 0x4
    static class AptNativeFunction * psMethod_play; // size: 0x4
    static class AptNativeFunction * psMethod_stop; // size: 0x4
    static class AptNativeFunction * psMethod_nextFrame; // size: 0x4
    static class AptNativeFunction * psMethod_prevFrame; // size: 0x4
    static class AptNativeFunction * psMethod_gotoAndPlay; // size: 0x4
    static class AptNativeFunction * psMethod_gotoAndStop; // size: 0x4

    // Members
    int nClipDepth; // offset 0x0, size 0x4
    int nCreatedOnFrame; // offset 0x4, size 0x4
    struct AptCharacter * pCharacter; // offset 0x8, size 0x4
    void * __vptr$; // offset 0xC, size 0x4
private:
    class AptNativeHash * mpNativeHash; // offset 0x10, size 0x4
    unsigned char mbGCPointersDestroyed; // offset 0x14, size 0x1
};
// Range: 0x802FDFD0 -> 0x802FE008
void AptRegisterGlobalReferences() {
    // References
    // -> class AptNativeHash * gpObjRegistrationHash;
    // -> struct AptAnimationPoolData * gpPool;
}

unsigned char AptValueSizesByVType[47]; // size: 0x2F, address: 0x8041F380
// Range: 0x802FE008 -> 0x802FE054
unsigned int AptGetSizeOfAptValue(const class AptValue * pValue /* r31 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices eType; // r0

    // References
    // -> unsigned char AptValueSizesByVType[47];
}

// total size: 0x14
class AptExtObject : public AptValueGC {
    // Static members
    static unsigned int gnLastEXTObjectAllocSize; // size: 0x4

    // Members
    class AptNativeHash * mpNativeHash; // offset 0xC, size 0x4
    unsigned int mnObjectSize; // offset 0x10, size 0x4
};
// Range: 0x802FE054 -> 0x802FE090
void * AptNonGCAllocSaveSize(unsigned long size /* r31 */) {
    // Local variables
    unsigned int * x; // r0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FE090 -> 0x802FE0A4
void AptNonGCFreeSavedSize(void * p /* r4 */) {
    // Local variables
    unsigned int * x; // r0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// total size: 0x14
struct {} __vt__16AptCharacterInst; // size: 0x14, address: 0x804582E0
// total size: 0x44
struct {} __vt__10AptValueGC; // size: 0x44, address: 0x804582F4
// Range: 0x802FE0A4 -> 0x802FE0FC
static void __sinit_\Apt_cpp() {
    // References
    // -> struct AptInitParmsT gAptInitParms;
    // -> class EAStringC gstrTempString;
    // -> struct AptUserFunctions gAptFuncs;
}


