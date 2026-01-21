/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptDisplayList.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031D9C8 -> 0x8031FF0C
*/
// Range: 0x8031D9C8 -> 0x8031DA64
AptPseudoData_t::AptPseudoData_t() {
    // Local variables
    struct AptControlPlaceObject2 * pPlaceObject2; // r0
}

// Range: 0x8031DA64 -> 0x8031DB0C
// this: r28
AptPseudoCIH_t::AptPseudoCIH_t(struct AptControl * pNewControl /* r29 */, int nFrame /* r30 */, struct AptCharacter * pNewCharacter /* r31 */) {}

// Range: 0x8031DB0C -> 0x8031DB54
void AptPseudoDisplayList::ClearList() {
    // Local variables
    struct AptPseudoCIH_t * pTmpNext; // r3
    struct AptPseudoCIH_t * pTmp; // r31
}

// Range: 0x8031DB54 -> 0x8031DBA8
void AptPseudoDisplayList::FindInst() {
    // Local variables
    struct AptPseudoCIH_t * pCur; // r3
    struct AptPseudoCIH_t * pLast; // r7
}

// Range: 0x8031DBA8 -> 0x8031DC38
// this: r30
void AptPseudoDisplayList::Insert(struct AptPseudoCIH_t * pItem /* r31 */) {
    // Local variables
    struct AptPseudoCIH_t * pPrev; // r1+0xC
    struct AptPseudoCIH_t * pOldItem; // r1+0x8
}

// Range: 0x8031DC38 -> 0x8031DC5C
void AptPseudoDisplayList::Insert() {}

// Range: 0x8031DC5C -> 0x8031DC90
void AptPseudoDisplayList::Remove() {}

// Range: 0x8031DC90 -> 0x8031DD7C
// this: r25
void AptDisplayListState::findInst(int nDepth /* r26 */, const class EAStringC * pName /* r27 */, class AptCIH * * ppPrev /* r28 */, class AptCIH * * ppItem /* r29 */) {
    // Local variables
    class AptCIH * pCur; // r31
    class AptCIH * pLast; // r30
}

// Range: 0x8031DD7C -> 0x8031DDE4
void AptDisplayListState::RegisterReferences(const class AptValue * pFrom /* r29 */) {
    // Local variables
    class AptCIH * pTemp; // r30

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

static char __PRETTY_FUNCTION__[48]; // size: 0x30, address: 0x8045BBC0
// Range: 0x8031DDE4 -> 0x8031DE88
class AptCIH * AptDisplayListState::insert(class AptCIH * pPrev /* r30 */, class AptCIH * pNewItem /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[48];
}

// Range: 0x8031DE88 -> 0x8031DF24
// this: r27
class AptCIH * AptDisplayListState::insert(int nDepth /* r28 */, enum AptVirtualFunctionTable_Indices eType /* r29 */, struct AptCharacterInst * pInst /* r30 */) {
    // Local variables
    class AptCIH * pPrev; // r1+0xC
    class AptCIH * pItem; // r1+0x8
}

// Range: 0x8031DF24 -> 0x8031DF90
// this: r29
class AptCIH * AptDisplayListState::insert(int nDepth /* r30 */, class AptCIH * pItem /* r31 */) {
    // Local variables
    class AptCIH * pPrev; // r1+0xC
    class AptCIH * pOldItem; // r1+0x8
    class AptCIH * pNewItem; // r0
}

// Range: 0x8031DF90 -> 0x8031DFC8
class AptCIH * AptDisplayListState::remove() {}

static char __PRETTY_FUNCTION__[121]; // size: 0x79, address: 0x8045BC04
// Range: 0x8031DFC8 -> 0x8031E510
// this: r20
void AptDisplayList::instantiateCharacter(int nTargetDepth /* r21 */, struct AptCharacter * pCharacter /* r22 */, const class EAStringC * const pName /* r23 */, class AptCIH * pParent /* r24 */, int bForceNewInstance /* r28 */, int nClipDepth /* r25 */, class AptCIH * * ppCIH /* r26 */, int * pbNeedNewInst /* r27 */) {
    // Local variables
    unsigned char bNeedNewInst; // r31
    class AptCIH * pItemPrev; // r1+0x1C
    class AptCIH * pItemAtDepth; // r1+0x18
    class AptCIH * pCurCIH; // r30
    struct AptCharacterInst * pInst; // r29
    enum AptVirtualFunctionTable_Indices eNewType; // r28
    class AptValue * pTmper; // r0
    struct AptCharacterTextInst * pTextInst; // r20

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[121];
}

// Range: 0x8031E510 -> 0x8031E610
void _convertToCXForm() {}

// Range: 0x8031E610 -> 0x8031E6E4
// this: r22
class AptCIH * AptDisplayList::placeObjectNCXForm(class AptCIH * pItem /* r23 */, int nTargetDepth /* r24 */, struct AptCharacter * pCharacter /* r25 */, const class EAStringC * pName /* r26 */, class AptCIH * pParent /* r27 */, int bForceNewInstance /* r28 */, int nClipDepth /* r29 */, struct AptnCXForm * pnCXForm /* r0 */, struct AptMatrix * pMatrix /* r30 */, struct AptEventActionSet * pActions /* r31 */, float fRatio /* f31 */) {
    // Local variables
    struct AptCXForm cxform; // r1+0x18
}

// Range: 0x8031E6E4 -> 0x8031E854
void AptDisplayList::_addToSetCaches(class AptCIH * pItem /* r30 */, int bQueueClipEvents /* r31 */) {
    // Local variables
    struct AptCharacter * pCharacter; // r3
    struct AptCharacterSpriteInstBase * pSprInst; // r27
    struct AptEventActionSet * pClipActions; // r26
    unsigned char bInputEventFound; // r25
    int i; // r24

    // References
    // -> unsigned int gNullInput;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x8031E854 -> 0x8031EA34
// this: r27
class AptCIH * AptDisplayList::placeObject(class AptCIH * pItem /* r1+0x10 */, struct AptCXForm * pCXForm /* r28 */, struct AptMatrix * pMatrix /* r31 */, struct AptEventActionSet * pActions /* r30 */, float fRatio /* f31 */, class AptValue * pInitObject /* r29 */) {
    // Local variables
    int bNeedNewInst; // r1+0x14
    class AptNativeHash * pObjHash; // r30
    struct AptHashItem * pInitItem; // r29

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8031EA34 -> 0x8031ED04
// this: r29
class AptCIH * AptDisplayList::placeObject(struct AptControlPlaceObject2 * pPlaceObject2 /* r30 */, class AptCIH * pParent /* r31 */) {
    // Local variables
    struct AptCharacter * pCharacter; // r28
    class EAStringC strName; // r1+0x2C
    class EAStringC * pName; // r7
    class AptCIH * pPrev; // r1+0x28
    class AptCIH * pCur; // r1+0x24
    struct AptCharacter * pCharacter; // r28
    class EAStringC strName; // r1+0x20
    class EAStringC * pName; // r7
}

// Range: 0x8031ED04 -> 0x8031EDFC
// this: r29
class AptCIH * AptDisplayList::placeObject(struct AptPseudoCIH_t * pNewItem /* r30 */, class AptCIH * pParentSprite /* r31 */) {
    // Local variables
    class EAStringC strName; // r1+0x1C
    class EAStringC * pName; // r7
    class AptCIH * pCIH; // r31
}

// Range: 0x8031EDFC -> 0x8031EEAC
void AptDisplayList::removeObject(class AptCIH * pItem /* r30 */) {
    // Local variables
    class AptValue * pParent; // r3
    class AptNativeHash * pHash; // r31
}

// Range: 0x8031EEAC -> 0x8031EEF4
// this: r31
void AptDisplayList::removeObject() {
    // Local variables
    class AptCIH * pPrev; // r1+0xC
    class AptCIH * pCur; // r1+0x8
}

// Range: 0x8031EEF4 -> 0x8031EEFC
void AptDisplayList::removeObject() {}

// Range: 0x8031EEFC -> 0x8031EF58
// this: r31
void AptDisplayList::removeClonedObject() {
    // Local variables
    class AptCIH * pLast; // r1+0xC
    class AptCIH * pCur; // r1+0x8
}

// Range: 0x8031EF58 -> 0x8031EF9C
// this: r31
AptDisplayList::AptDisplayList() {}

// Range: 0x8031EF9C -> 0x8031F008
// this: r30
AptDisplayList::~AptDisplayList() {}

// Range: 0x8031F008 -> 0x8031F0AC
static void _drawCharacterInst(struct AptRenderingContext * pRenderingContext /* r29 */, class AptCIH * pCIH /* r30 */, enum AptMaskRenderOperation eMaskOperation /* r31 */) {}

// Range: 0x8031F0AC -> 0x8031F1D8
static void _drawCharacterInstOpti(struct AptRenderingContext * pRenderingContext /* r27 */, class AptCIH * pCIH /* r28 */, enum AptMaskRenderOperation eMaskOperation /* r29 */) {
    // Local variables
    struct ClipTransform_t * pOutTransform; // r31
    struct ClipTransform_t * pCurTransform; // r30
}

// total size: 0x84
class SortedArrayMask {
    // Functions
    ~SortedArrayMask();

    // Members
    class AptCIH * aMasks[32]; // offset 0x0, size 0x80
    int nElements; // offset 0x80, size 0x4
};
// Range: 0x8031F1D8 -> 0x8031F218
// this: r31
SortedArrayMask::~SortedArrayMask() {}

// Range: 0x8031F218 -> 0x8031F224
SortedArrayMask::SortedArrayMask() {}

// Range: 0x8031F224 -> 0x8031F3F8
void AptDisplayList::render(struct AptRenderingContext * pRenderingContext /* r28 */, enum AptMaskRenderOperation eMaskOperation /* r29 */) {
    // Local variables
    class AptCIH * pCur; // r31
    class SortedArrayMask masks; // r1+0x8
    void (* pTreeFunc)(struct AptRenderingContext *, class AptCIH *, enum AptMaskRenderOperation); // r30

    // References
    // -> unsigned long gAptOptFlags;
}

// Range: 0x8031F3F8 -> 0x8031F42C
void SortedArrayMask::remove() {}

// Range: 0x8031F42C -> 0x8031F438
class AptCIH * SortedArrayMask::getElement() {}

// Range: 0x8031F438 -> 0x8031F440
int SortedArrayMask::getNumElements() {}

// Range: 0x8031F440 -> 0x8031F5F4
void SortedArrayMask::insert() {
    // Local variables
    int i; // r5
    int j; // r6
}

// Range: 0x8031F5F4 -> 0x8031F68C
void AptDisplayList::_getBoundingRect(struct AptRenderingContext * pRenderingContext /* r29 */, struct AptRect * pRect /* r30 */) {
    // Local variables
    class AptCIH * pCur; // r31
}

// Range: 0x8031F68C -> 0x8031F6FC
void AptDisplayList::tick() {
    // Local variables
    class AptCIH * pCur; // r31
}

static char __PRETTY_FUNCTION__[28]; // size: 0x1C, address: 0x8045BC80
// Range: 0x8031F6FC -> 0x8031F7F8
// this: r25
void AptDisplayList::clear(unsigned char bClean /* r26 */) {
    // Local variables
    class AptCIH * pCur; // r28
    class AptCIH * pNext; // r27

    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> static char __PRETTY_FUNCTION__[28];
}

// Range: 0x8031F7F8 -> 0x8031F83C
// this: r31
void AptDisplayList::PreDestroy() {}

// Range: 0x8031F83C -> 0x8031F844
struct AptDisplayListState * AptDisplayList::getState() {}

// Range: 0x8031F844 -> 0x8031F84C
void AptDisplayList::RemoveFromDisplayList() {}

static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045BC9C
// Range: 0x8031F84C -> 0x8031F94C
// this: r28
class AptCIH * AptDisplayList::AddToDisplayList(class AptNativeHash * pHash /* r29 */, struct AptPseudoCIH_t * pNewControl /* r30 */, class AptCIH * pParentCIH /* r31 */) {
    // Local variables
    class AptCIH * pTmp; // r31

    // References
    // -> static char __PRETTY_FUNCTION__[78];
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x8031F94C -> 0x8031FA00
// this: r27
void AptDisplayList::ReplaceDisplyListItem(class AptNativeHash * pHash /* r28 */, class AptCIH * pOriginalItem /* r29 */, struct AptPseudoCIH_t * pNewItem /* r30 */, class AptCIH * pParent /* r31 */) {}

// Range: 0x8031FA00 -> 0x8031FD90
// this: r25
void AptDisplayList::mergeState(class AptPseudoDisplayList * pNewState /* r26 */, class AptNativeHash * pOrigObject /* r27 */, unsigned char bJumpAhead /* r28 */) {
    // Local variables
    struct AptPseudoCIH_t * pNewControl; // r31
    class AptCIH * pCurrentCIH; // r30
    class AptCIH * pTmpNext; // r29
    enum AptVirtualFunctionTable_Indices eVFT; // r0
    class AptCIH * pCurrentCIHNext; // r24
}

// Range: 0x8031FD90 -> 0x8031FDE0
void AptDisplayListState::GetMovieclipInfo(struct AptMovieclipInformation * pMCInfo /* r30 */) {
    // Local variables
    class AptCIH * pTemp; // r31
}

static char __PRETTY_FUNCTION__[43]; // size: 0x2B, address: 0x8045BCEC
// Range: 0x8031FDE0 -> 0x8031FE98
// this: r31
AptDisplayListState::AptDisplayListState() {
    // References
    // -> static char __PRETTY_FUNCTION__[43];
}

// Range: 0x8031FE98 -> 0x8031FF0C
// this: r30
AptDisplayListState::~AptDisplayListState() {}

// total size: 0x14
struct {} __vt__22AptCharacterSpriteInst; // size: 0x14, address: 0x8045BD18
// total size: 0x14
struct {} __vt__21AptCharacterMorphInst; // size: 0x14, address: 0x8045BD2C
// total size: 0x14
struct {} __vt__26AptCharacterStaticTextInst; // size: 0x14, address: 0x8045BD40
// total size: 0x14
struct {} __vt__21AptCharacterShapeInst; // size: 0x14, address: 0x8045BD54

