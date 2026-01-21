/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptCharacter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803123DC -> 0x8031738C
*/
// total size: 0x8
struct TextMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct TextMembers wordlist[30]; // size: 0xF0, address: 0x8045A9A8
// total size: 0x1
class TextMembersIndex {};
static int aSpriteGperfToActionFlag[19]; // size: 0x4C, address: 0x8041F5B0
// Range: 0x803123DC -> 0x8031248C
// this: r28
void AptCharacter::render(struct AptRenderingContext * pRenderingContext /* r29 */, enum AptMaskRenderOperation eMaskOperation /* r30 */, struct AptMatrix * pMatrix /* r31 */) {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8031248C -> 0x80312548
// this: r28
void AptCharacter::_getBoundingRect(struct AptRenderingContext * pRenderingContext /* r29 */, struct AptRect * pRect /* r30 */, struct AptMatrix * pMatrix /* r31 */) {}

// Range: 0x80312548 -> 0x8031262C
// this: r30
AptCharacterSpriteInstBase::AptCharacterSpriteInstBase() {
    // Local variables
    class AptValue * pMovieClip; // r0
    class AptValue * pPrototypeMovieClip; // r31

    // References
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> struct [anonymous] __vt__26AptCharacterSpriteInstBase;
}

// Range: 0x8031262C -> 0x803126BC
// this: r30
AptCharacterSpriteInstBase::~AptCharacterSpriteInstBase() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> struct [anonymous] __vt__26AptCharacterSpriteInstBase;
}

// Range: 0x803126BC -> 0x803126C4
void AptCharacterSpriteInstBase::PreDestroy() {}

// Range: 0x803126C4 -> 0x8031283C
// this: r29
void AptCharacterTextInst::SetText(class AptCIH * const pParent /* r30 */) {
    // Local variables
    class AptCIH * pLocalParent; // [invalid]
    class AptValue * pValue; // r31
    class AptString * pString; // r31

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8031283C -> 0x803129A4
// this: r30
void AptCharacterTextInst::UpdateText(class AptCIH * const pParent /* r31 */) {
    // Local variables
    class EAStringC strNewText; // r1+0x10
    class AptCIH * pLocalParent; // [invalid]
    class AptValue * pValue; // r31

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x803129A4 -> 0x80312A4C
// this: r31
AptCharacterTextInst::AptCharacterTextInst() {
    // References
    // -> unsigned char bDefaultMouseWheel;
    // -> struct [anonymous] __vt__20AptCharacterTextInst;
}

// Range: 0x80312A4C -> 0x80312B64
// this: r29
AptCharacterTextInst::~AptCharacterTextInst() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> struct AptUserFunctions gAptFuncs;
    // -> int emptyAssetString;
    // -> struct [anonymous] __vt__20AptCharacterTextInst;
}

// Range: 0x80312B64 -> 0x80312C88
class AptValue * AptCharacterInst::_gotoAndX(class AptValue * pThis /* r28 */, int bPlay /* r29 */) {
    // Local variables
    class AptValue * pFrame; // r31
    int nFrame; // r31
    class AptCIH * pCIH; // r30
    struct AptCharacterSpriteInstBase * pInstBase; // r0
    struct AptCharacter * pCharacter; // r30
    class AptString * pAptString; // r0
    class EAStringC * pInternalString; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x8045AA98
// Range: 0x80312C88 -> 0x8031328C
void AptCharacterInst::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_localToGlobal;
    // -> class AptNativeFunction * psMethod_setMask;
    // -> class AptNativeFunction * psMethod_swapDepths;
    // -> class AptNativeFunction * psMethod_getBytesLoaded;
    // -> class AptNativeFunction * psMethod_getBytesTotal;
    // -> class AptNativeFunction * psMethod_setTextFormat;
    // -> class AptNativeFunction * psMethod_getTextFormat;
    // -> class AptNativeFunction * psMethod_getNewTextFormat;
    // -> class AptNativeFunction * psMethod_createEmptyMovieClip;
    // -> class AptNativeFunction * psMethod_startDrag;
    // -> class AptNativeFunction * psMethod_hitTest;
    // -> class AptNativeFunction * psMethod_getBounds;
    // -> class AptNativeFunction * psMethod_getDepth;
    // -> class AptNativeFunction * psMethod_removeTextField;
    // -> class AptNativeFunction * psMethod_createTextField;
    // -> class AptNativeFunction * psMethod_removeMovieClip;
    // -> class AptNativeFunction * psMethod_duplicateMovieClip;
    // -> class AptNativeFunction * psMethod_unloadMovie;
    // -> class AptNativeFunction * psMethod_loadMovie;
    // -> class AptNativeFunction * psMethod_attachMovie;
    // -> class AptNativeFunction * psMethod_loadVariables;
    // -> class AptNativeFunction * psMethod_play;
    // -> class AptNativeFunction * psMethod_stop;
    // -> class AptNativeFunction * psMethod_nextFrame;
    // -> class AptNativeFunction * psMethod_prevFrame;
    // -> class AptNativeFunction * psMethod_gotoAndStop;
    // -> static char __PRETTY_FUNCTION__[41];
    // -> class AptNativeFunction * psMethod_gotoAndPlay;
}

class AptNativeFunction * psMethod_gotoAndStop; // size: 0x4, address: 0x805DC248
// Range: 0x8031328C -> 0x80313294
class AptValue * AptCharacterInst::sMethod_gotoAndStop() {}

class AptNativeFunction * psMethod_gotoAndPlay; // size: 0x4, address: 0x805DC24C
// Range: 0x80313294 -> 0x8031329C
class AptValue * AptCharacterInst::sMethod_gotoAndPlay() {}

class AptNativeFunction * psMethod_attachMovie; // size: 0x4, address: 0x805DC250
// Range: 0x8031329C -> 0x80313424
class AptValue * AptCharacterInst::sMethod_attachMovie(class AptValue * pThis /* r26 */, int nParams /* r27 */) {
    // Local variables
    class AptValue * pIDName; // r31
    class AptValue * pTargetName; // r29
    class AptValue * pDepth; // r28
    class EAStringC sIDName; // r1+0x1C
    struct AptCharacter * pNewCharacter; // r27
    class EAStringC sBuf; // r1+0x18
    class AptCIH * pSourceCIH; // r29
    class AptValue * pRef; // r27

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80313424 -> 0x80313550
struct AptCharacter * findCharacterInLibrary(class AptCIH * pThis /* r26 */, class EAStringC * sIDName /* r27 */, unsigned char bSearchImports /* r28 */) {
    // Local variables
    int i; // r29
    struct AptCharacterAnimation * pAnim; // r0
    class AptCIH * pThispParent; // r3
}

class AptNativeFunction * psMethod_loadMovie; // size: 0x4, address: 0x805DC254
// Range: 0x80313550 -> 0x803136D0
class AptValue * AptCharacterInst::sMethod_loadMovie(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pNewMovie; // r31
    class EAStringC sMovieName; // r1+0x10
    int nLength; // r0
    class EAStringC sBuf; // r1+0xC

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptLinker * gpLinker;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_unloadMovie; // size: 0x4, address: 0x805DC258
// Range: 0x803136D0 -> 0x80313768
class AptValue * AptCharacterInst::sMethod_unloadMovie() {
    // Local variables
    class AptCIH * pCIH; // r31
    class EAStringC sBuf; // r1+0x10

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptLinker * gpLinker;
}

class AptNativeFunction * psMethod_duplicateMovieClip; // size: 0x4, address: 0x805DC25C
// Range: 0x80313768 -> 0x8031382C
class AptValue * AptCharacterInst::sMethod_duplicateMovieClip(class AptValue * pThis /* r27 */, int nParams /* r30 */) {
    // Local variables
    class AptValue * pTarget; // r28
    class AptValue * pDepth; // r30
    int nDepthInt; // r0
    class AptValue * pRef; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_removeMovieClip; // size: 0x4, address: 0x805DC260
// Range: 0x8031382C -> 0x803138D0
class AptValue * AptCharacterInst::sMethod_removeMovieClip(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pObject; // r1+0x8
    class AptCIH * pCIH; // r31
    struct AptCharacterSpriteInstBase * pParentInst; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_removeTextField; // size: 0x4, address: 0x805DC264
// Range: 0x803138D0 -> 0x80313974
class AptValue * AptCharacterInst::sMethod_removeTextField(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptValue * pObject; // r1+0x8
    class AptCIH * pCIH; // r31
    struct AptCharacterSpriteInstBase * pParentInst; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_createTextField; // size: 0x4, address: 0x805DC268
// Range: 0x80313974 -> 0x80313C90
class AptValue * AptCharacterInst::sMethod_createTextField(class AptValue * pThis /* r24 */) {
    // Local variables
    class AptValue * pInstName; // r30
    class AptValue * pDepth; // r31
    class AptValue * pX; // r28
    class AptValue * pY; // r27
    class AptValue * pWidth; // r26
    class AptValue * pHeight; // r25
    int nDepth; // r0
    float fX; // f29
    float fY; // f28
    float fWidth; // f0
    float fHeight; // f0
    class EAStringC sInstName; // r1+0x18
    class AptCIH * pSourceCIH; // r25
    struct AptCharacter * pCharacter; // r31
    struct AptCharacterAnimation * pAnim; // r0
    int i; // r6
    class AptCIH * pNewText; // r25
    struct AptCharacterTextInst * pTextInst; // r0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getDepth; // size: 0x4, address: 0x805DC26C
// Range: 0x80313C90 -> 0x80313CEC
class AptValue * AptCharacterInst::sMethod_getDepth(class AptValue * pThis /* r31 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_swapDepths; // size: 0x4, address: 0x805DC270
static char __PRETTY_FUNCTION__[54]; // size: 0x36, address: 0x8045AAD8
// Range: 0x80313CEC -> 0x80313FC0
class AptValue * AptCharacterInst::sMethod_swapDepths(class AptValue * pThis /* r29 */) {
    // Local variables
    class AptCIH * pThisInst; // r29
    class AptValue * pTarget; // r30
    class AptCIH * pTargetCIH; // r1+0x10
    class AptCIH * pPrevCIH; // r1+0xC
    class EAStringC sInstName; // r1+0x8
    int targetDepth; // r31
    int nTargetDepth; // r31

    // References
    // -> static char __PRETTY_FUNCTION__[54];
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setMask; // size: 0x4, address: 0x805DC274
// Range: 0x80313FC0 -> 0x803140E4
class AptValue * AptCharacterInst::sMethod_setMask(class AptValue * pThis /* r29 */) {
    // Local variables
    class AptCIH * pThisInst; // r30
    class AptValue * pTarget; // r31
    class AptCIH * pTargetCIH; // r31
    int nTargetDepth; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getBounds; // size: 0x4, address: 0x805DC278
// Range: 0x803140E4 -> 0x80314284
class AptValue * AptCharacterInst::sMethod_getBounds(class AptValue * pThis /* r29 */, int nParams /* r30 */) {
    // Local variables
    class AptCIH * pTargetSpace; // r30
    struct AptRect rect; // r1+0x8
    class AptValue * pNewSpace; // r30
    class AptFloat * pXMin; // r30
    class AptFloat * pXMax; // r30
    class AptFloat * pYMin; // r30
    class AptFloat * pYMax; // r30

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_startDrag; // size: 0x4, address: 0x805DC27C
static char __PRETTY_FUNCTION__[53]; // size: 0x35, address: 0x8045AB10
// Range: 0x80314284 -> 0x80314478
class AptValue * AptCharacterInst::sMethod_startDrag(class AptValue * pThis /* r28 */, int nParams /* r31 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[53];
}

class AptNativeFunction * psMethod_hitTest; // size: 0x4, address: 0x805DC280
// Range: 0x80314478 -> 0x8031467C
class AptValue * AptCharacterInst::sMethod_hitTest(class AptValue * pThis /* r28 */, int nParams /* r29 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptCIH * pTarget; // r31
    struct AptRect thisRect; // r1+0x28
    struct AptRect targetRect; // r1+0x18
    float fX; // f31
    float fY; // f30
    int bShapeHitTest; // r30
    struct AptRect rect; // r1+0x8

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_createEmptyMovieClip; // size: 0x4, address: 0x805DC284
// Range: 0x8031467C -> 0x803147E4
class AptValue * AptCharacterInst::sMethod_createEmptyMovieClip(class AptValue * pThis /* r27 */) {
    // Local variables
    class AptValue * pInstName; // r29
    class AptValue * pDepth; // r0
    int nDepth; // r0
    struct AptCharacter * pCharacter; // r28
    struct AptCharacterAnimation * pAnim; // r0
    class EAStringC sInstName; // r1+0x18
    class AptCIH * pSourceCIH; // r29
    class AptCIH * pNewInst; // r28

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_loadVariables; // size: 0x4, address: 0x805DC288
// Range: 0x803147E4 -> 0x80314870
class AptValue * AptCharacterInst::sMethod_loadVariables(class AptValue * pThis /* r29 */) {
    // Local variables
    class AptValue * pFrame; // r30
    class EAStringC sBuf; // r1+0x8

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

class AptNativeFunction * psMethod_stop; // size: 0x4, address: 0x805DC28C
// Range: 0x80314870 -> 0x803148D4
class AptValue * AptCharacterInst::sMethod_stop(class AptValue * pThis /* r31 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_play; // size: 0x4, address: 0x805DC290
// Range: 0x803148D4 -> 0x80314938
class AptValue * AptCharacterInst::sMethod_play(class AptValue * pThis /* r31 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_nextFrame; // size: 0x4, address: 0x805DC294
// Range: 0x80314938 -> 0x803149B0
class AptValue * AptCharacterInst::sMethod_nextFrame(class AptValue * pThis /* r30 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_prevFrame; // size: 0x4, address: 0x805DC298
// Range: 0x803149B0 -> 0x80314A28
class AptValue * AptCharacterInst::sMethod_prevFrame(class AptValue * pThis /* r30 */) {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getBytesTotal; // size: 0x4, address: 0x805DC29C
// Range: 0x80314A28 -> 0x80314B70
class AptValue * AptCharacterInst::sMethod_getBytesTotal(class AptValue * pThis /* r31 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x8
    float fFloat; // f31

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

class AptNativeFunction * psMethod_getBytesLoaded; // size: 0x4, address: 0x805DC2A0
// Range: 0x80314B70 -> 0x80314C80
class AptValue * AptCharacterInst::sMethod_getBytesLoaded(class AptValue * pThis /* r31 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x8
    float fFloat; // f31

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

static char __PRETTY_FUNCTION__[37]; // size: 0x25, address: 0x8045AB48
// total size: 0x8
struct SpriteMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
// Range: 0x80314C80 -> 0x803157E8
unsigned char AptCharacterInst::objectMemberSet(class AptValue * const pContext /* r28 */, const class EAStringC * const pName /* r29 */, class AptValue * const pValue /* r30 */) {
    // Local variables
    struct TextMembers * pProp; // r0
    struct AptCharacterTextInst * pTextInst; // r31
    class EAStringC szBuf; // r1+0x10
    int nVal; // r0
    int nVal; // r0
    int nVal; // r0
    int nNewScroll; // r26
    int nOldScroll; // r25
    class EAStringC sBuf; // r1+0xC
    class AptString * pString; // r25
    class AptCIH * pParent; // r26
    class EAStringC strBuf; // r1+0x8
    int nVal; // r0
    float fFloat; // f0
    float fFloat; // f0
    struct SpriteMembers * pProp; // r0
    class AptCIH * pCIH; // r31
    float fFloat; // f0
    int nFlag; // r25
    class AptNativeHash * pNativeHash; // r0
    int nFlag; // r25
    class AptNativeHash * pNativeHash; // r0

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static int aSpriteGperfToActionFlag[19];
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

static char __PRETTY_FUNCTION__[80]; // size: 0x50, address: 0x8045ABC8
// Range: 0x803157E8 -> 0x80316B28
class AptValue * AptCharacterInst::objectMemberLookup(class AptValue * const pContext /* r30 */, const class EAStringC * const pName /* r28 */) {
    // Local variables
    struct TextMembers * pProp; // r0
    struct AptCharacterTextInst * pTextInst; // r31
    class AptString * pTemp; // r29
    class AptCIH * pParent; // r0
    class AptCIH * pParent; // r0
    class AptString * pString; // r29
    class AptString * pTemp; // r29
    class AptString * pString; // r29
    struct AptRect rect; // r1+0x20
    float fFloat; // f0
    struct AptRect rect; // r1+0x10
    float fFloat; // f0
    class AptCIH * pCIH; // [invalid]
    struct AptCharacterInst * pCharInst; // r0
    float fFloat; // f0
    struct AptCharacterTextInst * pTextInst; // r0
    struct AptCharacterSpriteInstBase * pSprInst; // r0
    class EAStringC sBuf; // r1+0xC
    class AptString * pRet; // r29
    class AptCIH * pCur; // [invalid]
    struct AptMatrix cur; // r1+0x48
    float nx; // f4
    float ny; // f2
    class AptCIH * pCur; // r31
    struct AptMatrix cur; // r1+0x30
    float nx; // f4
    float ny; // f2
    class AptString * pString; // r29
    class AptString * pTemp; // r29
    class EAStringC sBuf; // r1+0x8

    // References
    // -> class AptNativeFunction * psMethod_setTextFormat;
    // -> class AptNativeFunction * psMethod_getNewTextFormat;
    // -> class AptNativeFunction * psMethod_getTextFormat;
    // -> class AptNativeFunction * psMethod_localToGlobal;
    // -> class AptNativeFunction * psMethod_setMask;
    // -> class AptNativeFunction * psMethod_swapDepths;
    // -> class AptNativeFunction * psMethod_createEmptyMovieClip;
    // -> class AptNativeFunction * psMethod_getBounds;
    // -> class AptNativeFunction * psMethod_getDepth;
    // -> class AptNativeFunction * psMethod_removeTextField;
    // -> class AptNativeFunction * psMethod_createTextField;
    // -> class AptNativeFunction * psMethod_unloadMovie;
    // -> class AptNativeFunction * psMethod_loadMovie;
    // -> class AptNativeFunction * psMethod_removeMovieClip;
    // -> class AptNativeFunction * psMethod_duplicateMovieClip;
    // -> class AptNativeFunction * psMethod_getBytesLoaded;
    // -> class AptNativeFunction * psMethod_getBytesTotal;
    // -> class AptNativeFunction * psMethod_nextFrame;
    // -> class AptNativeFunction * psMethod_prevFrame;
    // -> class AptNativeFunction * psMethod_stop;
    // -> class AptNativeFunction * psMethod_play;
    // -> class AptNativeFunction * psMethod_attachMovie;
    // -> class AptNativeFunction * psMethod_gotoAndStop;
    // -> class AptNativeFunction * psMethod_gotoAndPlay;
    // -> class AptNativeFunction * psMethod_loadVariables;
    // -> class AptNativeFunction * psMethod_startDrag;
    // -> static char __PRETTY_FUNCTION__[80];
    // -> class AptNativeFunction * psMethod_hitTest;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptMatrix gIdentityMatrix;
    // -> class AptNativeFunction * gpCBboolean;
    // -> class AptNativeFunction * gpCBescape;
    // -> class AptNativeFunction * gpCBunescape;
    // -> class AptNativeFunction * gpCBisNaN;
    // -> class AptNativeFunction * gpCBclearInterval;
    // -> class AptNativeFunction * gpCBsetInterval;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setTextFormat; // size: 0x4, address: 0x805DC2A4
// Range: 0x80316B28 -> 0x80316CF0
class AptValue * AptCharacterInst::sMethod_setTextFormat(class AptValue * pThis /* r29 */) {
    // Local variables
    class AptValue * pParam; // r30
    struct AptCharacterTextInst * pTextInst; // r0
    class AptTextFormat * pTextFormat; // r30
    unsigned int nTempFontStyle; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getNewTextFormat; // size: 0x4, address: 0x805DC2A8
// Range: 0x80316CF0 -> 0x80316F44
class AptValue * AptCharacterInst::sMethod_getNewTextFormat(class AptValue * pThis /* r30 */) {
    // Local variables
    struct AptCharacterAnimation * pAnim; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_getTextFormat; // size: 0x4, address: 0x805DC2AC
// Range: 0x80316F44 -> 0x8031723C
class AptValue * AptCharacterInst::sMethod_getTextFormat(class AptValue * pThis /* r30 */) {
    // Local variables
    struct AptCharacterAnimation * pAnim; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_localToGlobal; // size: 0x4, address: 0x805DC2B0
// Range: 0x8031723C -> 0x8031738C
class AptValue * AptCharacterInst::sMethod_localToGlobal(class AptValue * pThis /* r28 */) {
    // Local variables
    class AptValue * pParam; // r0
    class AptObject * pObject; // r31
    class EAStringC xCoordinate; // r1+0xC
    class EAStringC yCoordinate; // r1+0x8
    class AptValue * pX; // r30
    class AptValue * pY; // r29
    class AptFloat * xLocal; // r30
    class AptFloat * yLocal; // r29
    struct AptMatrix local; // r1+0x10
    class AptCIH * pCur; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0x14
struct {} __vt__20AptCharacterTextInst; // size: 0x14, address: 0x8045AE70
// total size: 0x14
struct {} __vt__26AptCharacterSpriteInstBase; // size: 0x14, address: 0x8045AE84

