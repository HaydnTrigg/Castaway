/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectsim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80146224 -> 0x8015D2A8
*/
// Range: 0x80146224 -> 0x80146648
unsigned char TryFindSafeLocForSim(class cXObject * newObj /* r23 */, class FTilePt & loc /* r24 */, int level /* r25 */, class cXObject * pTop /* r26 */, int slotNum /* r27 */) {
    // Local variables
    class cFixedWorld * pWorld; // r29
    class CTilePt dirs[8]; // r1+0x58
    int i; // r28
    class CTilePt testDir; // r1+0x48
    class FTilePt newLoc; // r1+0x50

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80146648 -> 0x80146700
// this: r29
unsigned char cXObject::AllowIdleOptimization() {
    // Local variables
    unsigned char bSpriteSlotActive; // r31
    class SpriteSlot * i; // r30
}

// Range: 0x80146700 -> 0x80146704
enum NodeAction cXObject::HandleBreakpoint() {}

// Range: 0x80146704 -> 0x80146928
// this: r28
enum TreeReturnCode cXObject::TryUserEvent(class StackElem * elem /* r29 */, class XPrimParam * param /* r30 */) {
    // Local variables
    class cXObject * obj; // r0
    signed short timeout; // r1+0x8
    class BString2 message; // r1+0x14
    class AUTOPTR messageStrs; // r1+0x10
    unsigned int fileID; // r31
    class ELocString mstr; // r1+0xC

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80146928 -> 0x80146AB4
// this: r28
enum TreeReturnCode cXObject::TryTestObjectType(class XPrimParam * param /* r29 */) {
    // Local variables
    int guid; // r31
    signed short id; // r1+0x8
    class cXObject * obj; // r0
    class ObjSelector * sel; // r30
    int stitchguid; // r30
    class ObjSelector * matchSel; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80146AB4 -> 0x80146FFC
enum TreeReturnCode cXObject::TryIsPersonInArea(class XPrimParam * param /* r23 */) {
    // Local variables
    class cXPerson * person; // r30
    enum TreeReturnCode result; // r29
    unsigned short searchDist; // r28
    signed short originID; // r1+0x8
    class cXObject * originObject; // r27
    class EVec2 originFacing; // r1+0x30
    class EVec2 originToTarget; // r1+0x28
    unsigned char calculatedOrientation; // r26
    unsigned short id; // r25
    int player; // r22
    class InteractorManager * interactorManager; // r0
    class DirectInteractor * dc_interactor; // r0
    class EVec2 doorCenter; // r1+0x20
    signed short room1; // r22
    signed short room2; // r24
    class cXPortal * portal; // r21
    class cXObject * pOtherSide; // r24
    float distance; // f0
    class FTilePt facingVector; // r1+0x18
    float dotProduct; // f0
    float facingDir; // f23
    class EVec2 facingVec; // r1+0x10
    float dotProduct2; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80146FFC -> 0x801485D8
// this: r28
enum TreeReturnCode cXObject::TryFindGoodLocation(class StackElem * elem /* r18 */, class XPrimParam * param /* r24 */, enum TFGL_ACTIONS * action /* r25 */, class FTilePt * pStart /* r26 */, int * pLevel /* r27 */, signed short * relID /* r17 */) {
    // Local variables
    class cXObject * obj; // r29
    class FTilePt start; // r1+0x50
    int level; // r30
    class cXObject * relObj; // r31
    int local; // r21
    int sc; // r0
    int smokeDir; // r21
    int dirDelta; // r4
    class cXMTObject * mtObj; // r21
    class cXPerson * person; // r0
    class SpriteSlot * slot; // r0
    int directionToSelect; // r21
    class FindGoodLocationParams fglp; // r1+0xC0
    signed short dir; // r21
    signed short otherObjectDirection; // r21
    signed short directionDelta; // r21
    class cXObject * pRelativeObjectLeader; // r22
    class cXObject * pStackObjectLeader; // r23
    int relativeX; // r1+0x20
    int relativeY; // r1+0x1C
    int objectX; // r1+0x18
    int objectY; // r1+0x14
    int deltaX; // r1+0x10
    int deltaY; // r1+0xC
    signed short dir; // r21
    int timesToTry; // r21
    class cFixedWorld * world; // r22
    class ObjectModule * module; // r23
    class CTilePt randTile; // r1+0x8
    signed short dir; // r21
    int directionToSelect; // r21
    class FindGoodLocationParams fglp; // r1+0xA8
    signed short dir; // r21
    class FindGoodLocationParams fglp; // r1+0x90
    class FTilePt list[4]; // r1+0x70
    class FTilePt outOfWorld; // r1+0x48
    signed short bestRotation; // r31
    unsigned char foundSomething; // r20
    class cXMTObject * lead; // [invalid]
    signed short rotation; // r23
    signed short direction; // r19
    class cXMTObject * srch; // r18
    class FTilePt anchor; // r1+0x40
    unsigned char success; // r0
    signed short rotation; // r18
    signed short direction; // r19
    class cXMTObject * srch; // r17
    class FTilePt anchor; // r1+0x38
    unsigned char success; // r0
    signed short rotation; // r17
    signed short direction; // r18
    class cXMTObject * srch; // r19
    class FTilePt anchor; // r1+0x30
    unsigned char success; // r0
    int bestDist; // r17
    signed short rotation; // r18
    int dist; // r3
    signed short direction; // r17
    class cXMTObject * srch; // r28
    class FindGoodLocationParams fglp; // r1+0x58
    unsigned char success; // r17
    signed short dir; // r17

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> unsigned char sLookingForRoof;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801485D8 -> 0x80148B64
// this: r30
enum TreeReturnCode cXObject::TrySetBalloon(class StackElem * elem /* r25 */, class XPrimParam * param /* r31 */) {
    // Local variables
    class cXObject * targ; // r27
    int priority; // r29
    int index; // [invalid]
    class cXObject * obj; // r0
    class Neighbor * n; // r29
    signed short localNum; // r0
    class cXObject * obj; // r0
    int id; // r26
    class IconGroup ig; // r1+0x14
    int tickPeriod; // r5
    class IconGroup balloonIcons; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80148B64 -> 0x80149088
// this: r30
enum TreeReturnCode cXObject::TryCallNamedTree(class StackElem * elem /* r31 */, class XPrimParam * param /* r25 */) {
    // Local variables
    unsigned int fileID; // r29
    unsigned int fileID2; // r28
    signed short treeClass; // r0
    class ConsoleAutoRefCount treeNames; // r1+0x8
    const char * name; // r29
    enum TreeReturnCode retcode; // r28
    class cXObject * target; // r28
    class cXObject * treeOwner; // r27
    class cXObject * stackObj; // r0
    unsigned char run; // r26
    class Behavior * b; // r25
    signed short treeID; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80149088 -> 0x801490E8
static void MakeMoneyString(class StringBuffer2 & outString /* r30 */, int moneyAmount /* r31 */) {
    // Local variables
    class StackString2 moneyString; // r1+0x8
}

// Range: 0x801490E8 -> 0x801492D8
static int ParseOneString(const class BString2 & rawText /* r25 */, const class BString2 & subString /* r29 */, int * outLen /* r26 */, int * outLocal1 /* r27 */, int * outLocal2 /* r28 */) {
    // Local variables
    unsigned long pos; // r30
    int i; // r29
    int rawLen; // r0
    class StackString numStr; // r1+0x8
}

// Range: 0x801492D8 -> 0x8014A1E0
// this: r26
void cXObject::ParseUIString(class BString2 & rawText /* r27 */, class StackElem * elem /* r28 */, signed short * stackVars /* r22 */, class ObjSelector * * stackObjType /* r29 */, unsigned char bUseDefaultReplace /* r30 */) {
    // Local variables
    int pos; // r23
    int local1; // r1+0x90
    int local2; // r1+0x8C
    int length; // r1+0x88
    class StackString2 numStr; // r1+0xA8
    signed short stackObjectID; // r0
    class BString2 sNeighborSub; // r1+0x84
    class BString2 sMeSub; // r1+0x80
    class BString2 sObjectSub; // r1+0x7C
    class BString2 sLocalSub; // r1+0x78
    class BString2 sMoneyLocalSub; // r1+0x74
    class BString2 sNameLocal; // r1+0x70
    class BString2 sLastNameLocal; // r1+0x6C
    class BString2 sTokenNameLocal; // r1+0x68
    class BString2 sPlayerFunds; // r1+0x64
    class BString2 sPlayerName; // r1+0x60
    class BString2 sLocationName; // r1+0x5C
    class BString2 sLocationNameLocal; // r1+0x58
    class BString2 sFoodName; // r1+0x54
    class BString2 sJobName; // r1+0x50
    class BString2 sJobDesc; // r1+0x4C
    class BString2 sTimeLocal; // r1+0x48
    class BString2 sGenderString; // r1+0x44
    class BString2 sJobTrack; // r1+0x40
    class ObjSelector * sel; // r25
    class ObjSelector * sel; // r25
    class cXObject * obj; // r25
    class ObjSelector * sel; // r22
    class cXObject * obj; // r22
    class ObjSelector * sel; // r23
    class cXObject * obj; // r0
    class ObjSelector * sel; // r22
    const struct InventoryTokens * pToken; // r0
    class ELocString name; // r1+0x3C
    const struct ERQTable * pHouseData; // r1+0x38
    class BString2 locationStr; // r1+0x34
    const struct ERQTable * pHouseData; // r1+0x30
    signed short lotNum; // r3
    class BString2 locationStr; // r1+0x2C
    class Neighbor * neighbor; // r0
    unsigned char getreplacement; // r22
    class BString2 replacement; // r1+0x28
    signed short foodid; // r0
    signed short foodstate; // r0
    class BString2 tempStr; // r1+0x24
    class BString2 tempStr; // r1+0x20
    int hour; // r22
    class StackString2 timeStr; // r1+0xF0
    char testStr[8]; // r1+0xA0
    char gStr[8]; // r1+0x98
    unsigned char male; // r22
    class BString2 genderStr; // r1+0x1C

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8014A1E0 -> 0x8014A24C
void get_food_replacement_string(signed short foodid /* r30 */, class BString2 & out /* r31 */) {
    // Local variables
    class IngredientManager * pIngredientManager; // r0
    const struct FoodResult * pFoodResult; // r0
    const unsigned short * pName; // r4
}

// Range: 0x8014A24C -> 0x8014A4C0
// this: r26
enum TreeReturnCode cXObject::TryMakeActionString(class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    unsigned char bIsMenuInProgress; // r0
    unsigned char bIsExecutingInMainSim; // r0
    signed short stringIndex; // r1+0x8
    class AUTOPTR strings; // r1+0x18
    class BString2 rawText; // r1+0x14
    class ELocString locText; // r1+0x10
    signed short stackVars[4]; // r1+0x20
    class ObjSelector * unused; // r1+0xC
    class cXPerson * p; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014A4C0 -> 0x8014A9F0
// this: r30
enum TreeReturnCode cXObject::TryPushAction(class StackElem * elem /* r31 */) {
    // Local variables
    class PushActionParam & pushAction; // r29
    int paramNum; // r28
    signed short objectID; // r4
    class cXObject * object; // r28
    int interactionID; // r27
    const class ITreeTable * treeTab; // r0
    const class ITreeTableEntry * entry; // r0
    class cXObject * targetObject; // r26
    class cXPerson * person; // r25
    int priority; // r26
    class cXPerson * me; // r0
    class Interaction interaction; // r1+0x8
    int localNum; // r26
    signed short iconObjectID; // r0
    class cXObject * obj; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014A9F0 -> 0x8014AA14
unsigned char _MotiveLessThan() {
    // Local variables
    float val1; // f0
    float val2; // f1

    // References
    // -> static float * sCurMotiveTabToSort;
}

// Range: 0x8014AA14 -> 0x8014ABD0
// this: r31
enum TreeReturnCode cXObject::TryFind5WorstMotives() {
    // Local variables
    int srchTarget; // r12
    int motivesToTest[8]; // r1+0x8
    class cXPerson * person; // r30

    // References
    // -> static float * sCurMotiveTabToSort;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014ABD0 -> 0x8014B678
// this: r25
enum TreeReturnCode cXObject::TryRelationship2(class StackElem * elem /* r26 */, class XPrimParam * _param /* r27 */) {
    // Local variables
    int key; // r24
    class RelMatrix * matrix; // r30
    class Neighborhood * ngh; // r31
    class Neighbor * pHudNeighbor; // [invalid]
    class cXObject * relObj; // r23
    class cXObject * thePet; // r30
    class Neighbor * thePetNeighbor; // r29
    class cXPerson * aPerson; // r0
    class Neighbor * neighbor; // [invalid]
    class Neighbor * relNeighbor; // r23
    class cXObject * person; // r23
    class cXObject * relObj; // r29
    class cXPerson * aPerson; // r0
    class Neighbor * aNeighbor; // r28
    const signed short * stackVar; // r1+0xC
    signed short val; // r1+0x8
    int oldVal; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014B678 -> 0x8014BBCC
// this: r27
enum TreeReturnCode cXObject::TryRelationship(class StackElem * elem /* r28 */, class XPrimParam * param /* r29 */) {
    // Local variables
    int key; // r25
    class RelMatrix * matrix; // r24
    int index; // r31
    class Neighborhood * ngh; // r30
    class cXPerson * aPerson; // r0
    class Neighbor * neighbor; // r23
    class Neighbor * relNeighbor; // r22
    class cXObject * person; // r22
    class cXObject * relObj; // r23
    class cXPerson * aPerson; // r0
    class Neighbor * aNeighbor; // r22
    int stackParam; // r22
    signed short * stackVar; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014BBCC -> 0x8014BC94
// this: r31
enum TreeReturnCode cXObject::TryTutorial() {
    // Local variables
    enum TreeReturnCode result; // r3

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014BC94 -> 0x8014BE14
enum TreeReturnCode StartFireAtObjectLoc(class cXObject * obj /* r29 */, class ObjSelector * const fireSel /* r30 */) {
    // Local variables
    class ObjectIterator oi; // r1+0x18
    signed short newFireID; // r0
    class cXObject * fireObj; // r30
    class FTilePt loc; // r1+0x10
}

// Range: 0x8014BE14 -> 0x8014C4E0
// this: r30
enum TreeReturnCode cXObject::TryBurn(class XPrimParam * param /* r31 */) {
    // Local variables
    class cXObject * obj; // r29
    class ObjSelector * const fireSel; // r28
    class FTilePt location; // r1+0x28
    int level; // r27
    class FTilePt loc; // r1+0x20
    class CTilePt cloc; // r1+0x8
    class TileWalls tw; // r1+0x3C
    enum TileWallsSegment seg; // r29
    enum WallStyle style; // r0
    class ObjectIterator oi; // r1+0x30
    int nFires; // r26
    class cXObject * srch; // r25
    signed short newFireID; // r0
    class cXObject * fireObj; // r25
    class cXMTObject * mt; // r25
    int nFiresNeeded; // r27
    class cXMTObject * mt; // r25
    unsigned char madeAFire; // r25
    class FTilePt location; // r1+0x18
    int level; // r25
    int lastCostume; // r26
    class cXPerson * pPerson; // r27

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014C4E0 -> 0x8014CEB0
// this: r22
enum TreeReturnCode cXObject::TryCreateObject(class StackElem * elem /* r23 */, class XPrimParam * param /* r24 */) {
    // Local variables
    class ObjSelector * selector; // r31
    int guid; // r21
    class ObjectFolder * const pFolder; // r0
    unsigned char bLoaded; // r0
    int level; // r30
    class FTilePt loc; // r1+0x38
    class cXObject * top; // [invalid]
    int slotNum; // r29
    unsigned char place; // r28
    unsigned short requiredRoom; // r27
    int wallCheck; // r26
    signed short dir; // r1+0x8
    int xoff; // r1+0x18
    int yoff; // r1+0x14
    class cXObject * stackObj; // r21
    class cXObject * stackObj; // r25
    class cXObject * obj; // r21
    class cXObject * obj; // r21
    class CTilePt cloc; // r1+0x10
    class ObjectIterator oi; // r1+0x4C
    class ObjectIterator oi; // r1+0x40
    int wallBlockFlags; // r0
    signed short newObjectID; // r0
    class cXObject * newObj; // r21
    class cXObject * stackObj; // r0
    int dir; // r27
    int cnt; // r31
    class cXMTObject * mtObj; // r27
    unsigned char bCanPlace; // r28
    class cXPerson * person; // r27
    class Behavior * b; // r28
    signed short initVisitorTree; // r0
    class StackElem * newElem; // r21
    class StackElem * newElem; // r0

    // References
    // -> unsigned char sInMainSim;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014CEB0 -> 0x8014CF4C
enum TreeReturnCode cXObject::TryPreloadObject(class XPrimParam * param /* r30 */) {
    // Local variables
    class ObjectFolder * const pFolder; // r31
    class ObjSelector * selector; // r4
    unsigned char bLoaded; // r0
}

// Range: 0x8014CF4C -> 0x8014D1B4
// this: r31
enum TreeReturnCode cXObject::TryDropOnto(class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    int sourceSlotNum; // r30
    int destSlotNum; // r29
    class ObjectSlot * sourceSlot; // r30
    class cXObject * destObj; // r28
    class cXObject * moveObj; // r30
    class FTilePt bogus; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014D1B4 -> 0x8014D52C
// this: r27
enum TreeReturnCode cXObject::TrySnapObject(class XPrimParam * param /* r26 */) {
    // Local variables
    signed short sourceObjectID; // r1+0x10
    signed short destObjectID; // r1+0xE
    signed short slotID; // r1+0xC
    signed short slotData; // r1+0xA
    signed short slotOwner; // r1+0x8
    class cXObject * sourceObj; // r31
    class cXObject * destObj; // r30
    class ObjectSlot * destSlot; // r29
    enum TreeReturnCode result; // r28
    class FTilePt bogus; // r1+0x20
    unsigned char bSkipPlaceTest; // r28
    class cXPerson * pDstPerson; // r0
    class cXPerson * person; // r27
    class FTilePt newloc; // r1+0x18
    int level; // r26
    int dir; // r30

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014D52C -> 0x8014D680
enum TreeReturnCode cXObject::TryBudget(class XPrimParam * param /* r30 */) {
    // Local variables
    signed short amount; // r1+0x8
    int curAmount; // r31
}

// Range: 0x8014D680 -> 0x8014E5F4
// this: r29
enum TreeReturnCode cXObject::TrySetToNext(class StackElem * elem /* r24 */, class XPrimParam * param /* r30 */) {
    // Local variables
    const signed short * dest; // r1+0x20
    signed short srchType; // r26
    unsigned char skipNonInteractionLeads; // r31
    class cXObject * obj; // r26
    class cXMTObject * mtobj; // r26
    class cXMTObject * mtobj_start; // r27
    class Neighborhood * n; // r0
    class Neighborhood * n; // r26
    class Neighbor * nb; // r0
    int guid; // r0
    int guidFromTemps; // r4
    class CTilePt pt; // r1+0x1C
    class ObjectIterator begin; // r1+0x30
    class ObjectIterator i; // r1+0x24
    unsigned char found; // r26
    int local; // r27
    class cXObject * center; // r25
    class CTilePt centerLoc; // r1+0x18
    class CTilePt relLoc; // r1+0x14
    unsigned char first; // r24
    class CTilePt adjLoc; // r1+0x10
    unsigned char ok; // r0
    int iNumPeople; // r0
    int i; // r24
    class ObjSelector * sel; // r24
    int guidFromTemps; // r24
    int iNumObjects; // r0
    int i; // r25
    class cXObject * o; // r26
    int iNumHouses; // r0
    int i; // r24
    int iHouse; // r25
    signed short category; // r24
    signed short category; // r24

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014E5F4 -> 0x8014E8DC
// this: r30
enum TreeReturnCode cXObject::TryFindFunctionalObject(class StackElem * elem /* r31 */) {
    // Local variables
    int scoreField; // r26
    enum ObjEntryPoint ep; // r25
    class cXObject * srch; // r24
    class cXObject * best; // r23
    float bestScore; // f29
    class ObjFnTable * fnTable; // r28
    signed short fnTreeID; // r0
    signed short value; // r0
    signed short fnCheckTreeID; // r0
    unsigned char avail; // r0
    float score; // f28
    float dist; // f0

    // References
    // -> float gFunctionalScoreDistanceAttenuation;
}

// Range: 0x8014E8DC -> 0x8014EA98
// this: r28
enum TreeReturnCode cXObject::TryCallFunctionalTree(class XPrimParam * param /* r29 */) {
    // Local variables
    class cXObject * obj; // r30
    enum ObjEntryPoint ep; // r4
    signed short treeID; // r0
    signed short stackParams[8]; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8014EA98 -> 0x8015076C
// this: r25
enum TreeReturnCode cXObject::TryGenericSimCall(class StackElem * elem /* r23 */) {
    // Local variables
    enum TreeReturnCode result; // r30
    class cXPerson * PersonA; // r27
    class cXObject * PersonBObj; // r26
    class cXPerson * PersonB; // r28
    class cXObject * objA; // r29
    class cXObject * objB; // r31
    signed short d1; // r0
    signed short d2; // r0
    class FTilePt bogus; // r1+0x38
    float xdisp; // f31
    float ydisp; // f30
    float dirDisp; // f29
    class ObjectSlot * slot; // r25
    float slotx; // r1+0x34
    float sloty; // r1+0x30
    float slotx; // r1+0x2C
    float sloty; // r1+0x28
    class cXObject * obj; // r0
    class cXPerson * pPerson; // r0
    class cXObject * obj; // r26
    class cXPerson * person; // r0
    class Interaction & action; // r25
    class Neighborhood * ng; // r27
    class Neighbor * n; // r28
    signed short oldFamilyNum; // r0
    class Family * f; // r29
    class Neighbor * dominantSpouse; // r26
    class cXPerson * person; // r27
    class CasSimDescription * pSimDesc; // r0
    class Neighborhood * ng; // r25
    class Family * oldFamily; // r26
    class Family * playerFam; // r27
    class Neighborhood * ng; // r26
    class Neighbor * n; // r4
    class cXObject * obj; // r4
    class cXPerson * person; // r26
    class SequenceManager * sm; // r26
    class cXObject * pObj; // r0
    class cXPerson * pPerson; // r25
    int enteringSimNeighborId; // r28
    int p1SelectedNeighborId; // r29
    int nGameTime; // r0
    class cXObject * obj; // r0
    signed short playerNum; // r0
    class cXPerson * pPerson; // r0
    unsigned char bControl; // r0
    int numModelessDialogs; // r0
    unsigned short id; // r0
    class EGlobal & pGlobals; // r0
    class Interactor * pInteractor; // r26
    class cXObject * pObj; // r4
    int totalPoints; // r25
    unsigned char bEnabled; // r0
    class cXObject * obj; // r29
    unsigned char makeNonRouteAble; // r28
    int xSize; // r27
    int ySize; // r26
    signed short direction; // r0
    class CTilePt startTile; // r1+0x24
    int minMaxX; // r24
    int minMaxY; // r23
    int i; // r23
    int j; // r24
    int x; // r30
    int y; // r3
    class CTilePt tile; // r1+0x20
    signed char flags; // r30
    class cXObject * obj; // r0
    class Neighbor * n; // r23
    signed short familyNum; // r24
    signed short nMaxFamilyNum; // r26
    class Family * fam; // r0
    class Family * fam; // r26
    class cXObject * obj; // r23
    class CatalogResource * pObjCatRes; // r24
    class ObjSelector * master; // r23
    class CatalogResource * pMasterCatRes; // r26
    int count; // r0
    int i; // r27
    class cXObject * pObj; // r28
    class CatalogResource * pCatRes; // r0
    class ObjectModule * om; // r23
    class cXObject * obj1; // r24
    class cXObject * obj2; // r23
    class CTilePt tile1; // r1+0x1C
    class CTilePt tile2; // r1+0x18
    enum TileWallsSegment seg1; // r1+0x14
    enum TileWallsSegment seg2; // r1+0x10
    class cFixedWorld * gWorld; // r23
    class TileWalls theWalls; // r1+0x110
    unsigned char alreadyHasWall; // r0
    class TileWalls adjWalls; // r1+0xE4
    class cFixedWorld * gWorld; // r23
    class TileWalls theWalls; // r1+0xB8
    unsigned char alreadyHasWall; // r0
    class cXObject * obj; // r23
    const struct Plan * plan; // r24
    class cXMTObject * mt; // r0
    class cXMTObject * srch; // r23
    const struct Plan * plan; // r0
    signed short neighborID; // r23
    class Neighbor * neighbor; // r24
    float timeCost; // r1+0xC
    signed short energyCost; // r1+0x8
    unsigned char transitions[30]; // r1+0x40
    signed char sourceLot; // r24
    signed char destLot; // r27
    int i; // r4
    class InventoryItems * pInventory; // r0
    const struct InventoryTokens * token; // r0
    signed short dialogID; // r0
    class IGoalUnlock * unlocks; // r0
    class InventoryItems * inventory; // r0
    class InventoryItems * inventory; // r0
    class InventoryItems * inventory; // r0
    class InventoryItems * inventory; // r0
    signed short mode; // r23
    signed short foodId; // r24
    signed short level; // r25
    class AutoFood autoFood; // r1+0x13C

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015076C -> 0x80150D40
// this: r25
enum TreeReturnCode cXObject::ShowAllObjectDialogs(class StackElem * elem /* r26 */) {
    // Local variables
    class cXObject * pObj; // r0
    class ObjSelector * pSel; // r31
    class vector treeIDs; // r1+0x40
    int treeIndex; // r23
    unsigned char bDone; // r22
    class ConsoleAutoRefCount tree; // r1+0x24
    signed short id; // r1+0x12
    class ConsoleAutoRefCount tree; // r1+0x20
    signed short id; // r1+0x10
    int dialogCount; // r30
    int vectorPos; // r29
    class ConsoleAutoRefCount tree; // r1+0x1C
    int iNumNodes; // r28
    int n; // r27
    const struct BehaviorNode * node; // r21
    class StackElem stackElem; // r1+0x50
    class XPrimParam primParam; // r1+0x38
    enum TreeReturnCode result; // r21
    unsigned char skipThis; // r21
    int messageHash; // r20
    unsigned int fileID; // r19
    class ConsoleAutoRefCount dialogStrings; // r1+0x18
    int index; // r19
    int usedPos; // r22

    // References
    // -> static int curDialogDisplayed;
    // -> static unsigned char doingModeless;
    // -> static int objIndex;
    // -> static class vector alreadyDisplayed;
}

// Range: 0x80150D40 -> 0x80150E1C
void cXObject::TransitionToNewHouse(signed short TargetHouse /* r29 */, signed short TransMode /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80150E1C -> 0x80150F7C
// this: r24
void cXObject::TransitionToLot(signed short target /* r25 */, signed short transitionID /* r26 */) {
    // Local variables
    class Neighborhood * neighborhood; // r29
    signed short nID; // r30
    class Neighbor * neighbor; // r0
    int i; // r28
    class Neighbor * neighbor; // r27
    int lotNum; // r0
    int selectedFamily; // r27
    class Family * pFamily; // r27

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80150F7C -> 0x80151060
// this: r30
void cXObject::RewriteDialogParamIndices(class DialogParam & dialogParam /* r31 */) {}

// Range: 0x80151060 -> 0x80151334
// this: r27
enum TreeReturnCode cXObject::TryDialog(class StackElem * elem /* r28 */, class XPrimParam * param /* r29 */, unsigned char bParseUseDefaultReplace /* r30 */) {
    // Local variables
    class EGlobal & pGlobals; // r0
    class DialogParam dlgParam; // r1+0x8
    class EdithDialogPrimitive & edithDlg; // r26
    unsigned char tempIndex; // r28
    enum TreeReturnCode code; // r0
    unsigned char bInLetterBox; // r25
    unsigned char bSimsSleeping; // r0
    unsigned char bHasChoice; // r5

    // References
    // -> class EGlobal _globals;
    // -> signed short overrideDialogReturnCode;
}

// Range: 0x80151334 -> 0x801514BC
// this: r27
enum TreeReturnCode cXObject::TryKillObject(class StackElem * elem /* r28 */, class XPrimParam * param /* r29 */, signed short * pKillID /* r30 */) {
    // Local variables
    class cXObject * obj; // r31
    class cXPerson * person; // r31

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801514BC -> 0x801515D8
// this: r29
enum TreeReturnCode cXObject::TryIdle(class XPrimParam * param /* r30 */) {
    // Local variables
    signed short * var; // r0
    int idleStatus; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801515D8 -> 0x801517D4
// this: r29
enum TreeReturnCode cXObject::TryUpdate(class XPrimParam * param /* r30 */) {
    // Local variables
    class cXObject * obj; // r31
    class ISimInstance * pIObjectInstance; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801517D4 -> 0x801519FC
// this: r29
enum TreeReturnCode cXObject::TryGrab(class XPrimParam * param /* r28 */) {
    // Local variables
    class cXObject * grab; // r31
    class IBaseSimInstance * pISim; // r30
    class cXObject * pContained; // r31
    class IBaseSimInstance * pISimContained; // r29
}

// Range: 0x801519FC -> 0x80151AC8
// this: r30
enum TreeReturnCode cXObject::TryTreeBreak(class XPrimParam * param /* r31 */) {
    // Local variables
    signed short check; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80151AC8 -> 0x80151C54
// this: r30
enum TreeReturnCode cXObject::TryRandom() {
    // Local variables
    class RandomParam rand; // r1+0x18
    const signed short * plhs; // r1+0x10
    signed short range; // r1+0x8
    float * pflhs; // r1+0xC

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80151C54 -> 0x801523B8
// this: r29
enum TreeReturnCode cXObject::TryRoomEffect(class StackElem * elem /* r30 */, class XPrimParam * param /* r26 */) {
    // Local variables
    unsigned char roomEffect; // r0
    unsigned char notRoomFlag; // r31
    unsigned char useTargetRoomFlag; // r0
    signed short data0; // r1+0xA
    signed short data1; // r1+0x8
    unsigned short roomId; // r30
    class Room * pRoom; // r0
    float fParm0; // f31
    float fParm1; // f30
    class cXObject * targetObject; // r0
    class EVec3 v3WindDirection; // r1+0xC

    // References
    // -> float MAX_WIND_SPEED;
    // -> char * ms_szWeatherStateNames[4];
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801523B8 -> 0x8015265C
// this: r29
enum TreeReturnCode cXObject::TryCheckObject(class XPrimParam * param /* r30 */) {
    // Local variables
    signed short id; // r1+0x8
    class cXObject * pObj; // r0
    class cXPerson * person; // r0
    class InteractorManager * interactorManager; // r0
    class DirectInteractor * dc_interactor; // r0
    class cXObject * pObj; // r0
    class cXObject * pObj; // r0
    int numRelationsOfType; // r31
    enum tRelationshipType relType; // r30
    class cXObject * pObj; // r0
    class cXPerson * person; // r0
    class Neighbor * neighbor; // r0
    class cXObject * pObj; // r0
    class cXPerson * person; // r0
    class InteractorManager * interactorManager; // r0
    class DirectInteractor * dc_interactor; // r0

    // References
    // -> unsigned char g_bTreeAssert;
    // -> class EGlobal _globals;
}

// Range: 0x8015265C -> 0x8015297C
// this: r27
enum TreeReturnCode cXObject::TryAnimateObject(class StackElem * elem /* r28 */) {
    // Local variables
    class AnimateObjectParam animateObject; // r1+0x10
    class cXObject * pTargetObj; // r30
    class ISimInstance * pIObjInstance; // r0
    class ISimsObjectModel * pIObjModel; // r29
    signed short graphicState; // r1+0x8
    unsigned short animIndex; // r31
    unsigned char loc; // r0
    signed short * animTagTarget; // r30

    // References
    // -> class ETypeInfo m_typeInfo;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015297C -> 0x80152DB8
// this: r26
enum TreeReturnCode cXObject::TryCompleteGoal(class CompleteGoalParam & goalParam /* r31 */) {
    // Local variables
    class IGoalUnlock * unlocks; // r29
    enum UnlockType type; // r28
    signed short unlockID; // r1+0x8
    signed short op; // r0
    signed short status; // r27
    enum TreeReturnCode retcode; // r29

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80152DB8 -> 0x80153AD0
// this: r29
enum TreeReturnCode cXObject::TryCameraControl(class StackElem * elem /* r30 */, class XPrimParam * param /* r31 */) {
    // Local variables
    class cXPerson * aPerson; // r0
    int player; // r26
    unsigned char npcCamera; // r25
    class ESimsCam * pCam; // r24
    class CameraDirector * pCameraDirector; // r23
    const struct AnimRef * skillID; // r22
    int animResId; // r21
    unsigned char animId; // r0
    signed short heightInFracTiles; // r4
    float zOffset; // f30
    unsigned char returnInfoInTemp1; // r20
    unsigned int filePriID; // r25
    unsigned int fileGlobID; // r19
    class AUTOPTR table; // r1+0x14
    class ENDummy * dummyNode; // r28
    class EMat4 * offsetMat; // r18
    class cXObject * obj; // r22
    unsigned char isObject; // r17
    class cXObject * pObject; // r3
    class ConsoleAutoRefCount dummyTable; // r1+0x10
    class ESim * pSims; // r19
    int i; // r18
    class ESim * pSims; // r19
    unsigned char initial; // r18
    class EBound3 BBox; // r1+0x40
    int i; // r25
    class ERModel * pModel; // r0
    class EVec3 target; // r1+0x34
    class EVec3 eye[8]; // r1+0x58
    class EVec3 up; // r1+0x28
    class FTilePt dest; // r1+0x20
    int theta; // r0
    float ftheta; // f31
    float _xoff; // f29
    float _yoff; // f28
    class CTilePt pt; // r1+0xC
    unsigned char isCameraMirrored; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
    // -> class EAnimManager _animman;
    // -> unsigned int sCameraAnimPending;
    // -> class EGlobal _globals;
    // -> static class EMat4 g_cameraObjectMat[2];
    // -> static class ENDummy g_cameraDefaultDummy[2];
}

// Range: 0x80153AD0 -> 0x80153C7C
// this: r31
enum TreeReturnCode cXObject::TryDistanceTo(class StackElem * elem /* r29 */) {
    // Local variables
    class DistanceToParam distanceTo; // r1+0xC
    signed short fromID; // r1+0x8
    class cXObject * from; // r30
    class cXObject * to; // r29

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80153C7C -> 0x80153E24
// this: r29
enum TreeReturnCode cXObject::TryDirectionTo(class StackElem * elem /* r30 */) {
    // Local variables
    class DirectionToParam directionTo; // r1+0x10
    const signed short * plhs; // r1+0xC
    signed short fromID; // r1+0x8
    class cXObject * from; // r0
    class cXObject * to; // r0
    signed short val; // r7

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80153E24 -> 0x80154048
// this: r31
enum TreeReturnCode cXObject::TryNotifyStackObject() {
    // Local variables
    class cXObject * stackObj; // r30
    class StackElem * objElem; // r29
    struct BehaviorNode node; // r1+0x8
    unsigned char nodeExists; // r0
    class XPrimParam * nodeParam; // r0
    class cXPerson * pPerson; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80154048 -> 0x801540FC
// this: r31
enum TreeReturnCode cXObject::TryParticleEffect() {
    // Local variables
    class ParticleEffectParam particleEffectParam; // r1+0x8
    class cXPerson * person; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x801540FC -> 0x80154B9C
// this: r24
enum TreeReturnCode cXObject::TryMemory(class StackElem * elem /* r26 */, class XPrimParam * _param /* r25 */) {
    // Local variables
    class cXObject * obj; // r26
    class cXObject * relObj; // r26
    class cXPerson * person; // r30
    class cXPerson * relPerson; // r29
    int neighborId; // r28
    int relNeighborId; // r27
    const signed short * stackVar; // r1+0xC
    signed short val; // r1+0x8
    int memID; // r26
    int memValue; // r0
    int memValue; // r0
    int memValue; // r0
    int memValue; // r0
    int memValue; // r0
    int memValue; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80154B9C -> 0x80154D0C
// this: r27
enum TreeReturnCode cXObject::TryPassiveInfluence(class StackElem * elem /* r29 */, class XPrimParam * param /* r28 */) {
    // Local variables
    signed short originID; // r1+0xE
    class cXObject * originObject; // r31
    signed short areaSize; // r1+0xC
    signed short owner; // r1+0xA
    signed short data; // r1+0x8
    signed short triggerDistance; // r30
    signed short lockoutObject; // r29
}

// Range: 0x80154D0C -> 0x80154D14
enum TreeReturnCode cXObject::TryWantsAndFearsNotify() {}

// Range: 0x80154D14 -> 0x80154D1C
enum TreeReturnCode cXObject::TryChangeWantFearTree() {}

// Range: 0x80154D1C -> 0x80154F64
// this: r28
enum TreeReturnCode cXObject::TrySetMotiveDelta(class StackElem * elem /* r30 */, class XPrimParam * param /* r29 */) {
    // Local variables
    class cXObject * pObj; // r31
    signed short incPerHour; // r1+0xA
    signed short maxValue; // r1+0x8
    float incPerTick; // f31
    class cXObject * pObj; // r31
    signed char typeFlags; // r30

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80154F64 -> 0x80155050
// this: r29
enum TreeReturnCode cXObject::TryAnimate(class StackElem * elem /* r30 */, const class AnimateNewParam * param /* r31 */) {
    // Local variables
    const struct AnimRef * skill; // r1+0xC
    int behavior; // r0
    enum TreeReturnCode result; // r31
    class cXObject * pObj; // [invalid]
    unsigned char scale; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80155050 -> 0x80155104
// this: r29
unsigned char cXObject::Simulate() {
    // Local variables
    unsigned char engaged; // r31
    class SpriteSlot * i; // r30
}

// Range: 0x80155104 -> 0x8015548C
// this: r29
enum TreeReturnCode cXObject::TryElement(class StackElem * elem /* r30 */, class XPrimParam * param /* r31 */) {
    // Local variables
    enum TreeReturnCode result; // r3
    enum TFGL_ACTIONS action; // r1+0x10
    class FTilePt start; // r1+0x18
    int level; // r1+0xC
    signed short relID; // r1+0xA
    signed short killID; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015548C -> 0x801554D8
enum TreeReturnCode cXObject::TryKillSounds() {
    // Local variables
    signed short sourceID; // r31
    class cSoundPlayer * sndPlayer; // r0
}

// Range: 0x801554D8 -> 0x80155640
// this: r29
enum TreeReturnCode cXObject::TryPlaySound(class StackElem * elem /* r28 */, class PlaySoundParam * param /* r31 */) {
    // Local variables
    signed short soundID; // r30
    signed short sourceID; // r29
    unsigned int namespaceID; // r31
    class ConsoleAutoRefCount info; // r1+0x8
    unsigned int sndEventID; // r30
}

// Range: 0x80155640 -> 0x801556E4
// this: r28
unsigned char cXObject::GosubObjectTree(class cXObject * other /* r29 */, signed short * stck /* r30 */, signed short treeID /* r31 */) {}

// Range: 0x801556E4 -> 0x80155778
// this: r28
unsigned char cXObject::RunTree(class Behavior * beh /* r29 */, signed short stackObjectID /* r30 */, signed short * locals /* r31 */) {
    // Local variables
    signed short treeID; // r0
}

// Range: 0x80155778 -> 0x8015579C
unsigned char OnEdithSetFlagField1() {
    // References
    // -> unsigned char m_bRebuildFloors;
}

// Range: 0x8015579C -> 0x80156388
// this: r29
enum TreeReturnCode cXObject::TryExpression(class ExpressionParam * expression /* r30 */) {
    // Local variables
    enum TreeReturnCode result; // r28
    const signed short * plhs; // r1+0x14
    float * pflhs; // r1+0x10
    signed short lhs; // r1+0xA
    signed short rhs; // r1+0x8
    unsigned char writingToLHS; // r31
    signed short * dataBreakRef; // r1+0xC
    int prevval; // r0
    int flag; // r28
    int prevval; // r0
    int flag; // r27
    class cXObject * obj; // r0
    signed short lhs'333; // r0

    // References
    // -> unsigned char s_bTaggedGraphicField;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80156388 -> 0x801563CC
static int fround() {}

// Range: 0x801563CC -> 0x80156484
void cXObject::GetShortComboValue() {}

// Range: 0x80156484 -> 0x801564DC
// this: r31
signed short cXObject::GetValueFromShortOwnerCombo() {
    // Local variables
    signed short owner; // r1+0xC
    signed short data; // r1+0xA
    signed short value; // r1+0x8
}

// Range: 0x801564DC -> 0x8015655C
// this: r30
void cXObject::SetValueInShortOwnerCombo(signed short value /* r31 */) {
    // Local variables
    signed short owner; // r1+0xA
    signed short data; // r1+0x8
    const signed short * dataRef; // r1+0xC
}

// Range: 0x8015655C -> 0x80159D54
// this: r25
enum TreeReturnCode cXObject::InterpValue(signed short ownerField /* r23 */, signed short dataField /* r26 */, const signed short * * dataRef /* r27 */, float * * floatRef /* r28 */, signed short * pResultValue /* r29 */) {
    // Local variables
    signed short data; // r30
    const signed short * ptemp; // r1+0x14
    class cXObject * obj; // r0
    class cXPerson * person; // r24
    class Neighbor * neighbor; // r0
    signed short dataField2; // r0
    signed short index; // r4
    signed short id; // r1+0x8
    int index; // r1+0x10
    class Behavior * pBehavior; // r24
    class ConsoleAutoRefCount bc; // r1+0xC
    unsigned short roomID; // r0
    class Room * r; // r0
    unsigned char valPData; // r0
    unsigned char valNData; // r0
    unsigned char valPData; // r0
    unsigned char valNData; // r0
    class cXObject * obj; // r30
    unsigned char valPData; // r0
    unsigned char valNData; // r0
    class Neighbor * n; // r24
    unsigned char valPData; // r0
    unsigned char valNData; // r0
    class cXObject * obj; // r24
    class cXPerson * person; // r24
    class Neighbor * pNeighbor; // r0
    class Family * pFamily; // r0
    class TTabScratchEntry * entry; // r24
    class TTabScratchEntry * entry; // r24
    class TTabScratchEntry * entry; // r24
    class ObjectSlot * slot; // r0
    class ObjectSlot * slot; // r0
    class cXObject * obj; // r24
    class cXPerson * person; // r24
    float mot; // f0
    class cXObject * obj; // r24
    class cXPerson * person; // r24
    float mot; // f0
    class cXPerson * person; // r24
    float mot; // f0
    unsigned int cheats; // r0
    unsigned int cheats; // r0
    class IGoalUnlock * unlocks; // r24
    unsigned char isUnlocked; // r0
    class Neighbor * n; // r24
    class cXObject * pObject; // r24
    class cXPerson * pPerson; // r0
    class CasSimDescription * pSimDescription; // r0
    signed short fcsTokenID; // r24
    class IngredientManager * pIngredientManager; // r0
    const struct IngredientToken * pToken; // r0
    const struct InventoryTokens * pToken; // r24
    class InventoryItems * pInventory; // r0
    class InventoryItems * pInventory; // r0
    signed short planID; // r24
    const struct Plan * pPlan; // r27
    signed short transitionID; // r24
    class cXObject * pObj; // r0
    class cXPerson * p; // r24
    class Interaction i; // r1+0x18
    class cXObject * obj; // r24
    class cXPerson * person; // r0
    class cXObject * obj; // r24
    class cXPerson * person; // r0
    class cXObject * obj; // r24
    class cXObject * obj; // r24
    class Neighbor * neighbor; // r0
    class Neighbor * neighbor; // r0

    // References
    // -> signed short tempDataPrim;
    // -> unsigned char sbAllowingCheckTreeAds;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80159D54 -> 0x80159F04
// this: r27
enum TreeReturnCode cXObject::InterpWriteValue(signed short dataField /* r28 */, const signed short * * varToSet /* r29 */, signed short valueToWrite /* r30 */) {
    // Local variables
    class cXObject * obj; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x80159F04 -> 0x80159FF8
// this: r29
enum TreeReturnCode cXObject::TryDrop() {
    // Local variables
    class cXObject * obj; // r31
    int level; // r30
    class FTilePt dropLoc; // r1+0x10
}

// Range: 0x80159FF8 -> 0x8015A8B8
// this: r30
enum TreeReturnCode cXObject::TrySnap(class StackElem * elem /* r21 */, class XPrimParam * param /* r31 */) {
    // Local variables
    class cXObject * obj; // r27
    class FTilePt dest; // r1+0x38
    int level; // r26
    class cXObject * container; // r25
    unsigned char ignoreRooms; // r24
    int slotNum; // r24
    int direction; // r29
    class RoutingSlot * routingSlot; // r23
    class ObjectSlot * objSlot; // r24
    class EMat4 rotate; // r1+0xC0
    class EVec3 vec; // r1+0x70
    class cXMTObject * mtobj; // r0
    class cXObject * tempObj; // r3
    class EMat4 rotate; // r1+0x80
    class EVec3 worldDest; // r1+0x64
    int simType; // r24
    class EVec3 slotOffset; // r1+0x58
    enum TreeReturnCode result; // r23
    int xdisp; // r27
    int ydisp; // r22
    int dirDisp; // r21
    class ObjectSlot * slot; // r23
    float slotx; // r1+0x1C
    float sloty; // r1+0x18
    unsigned char useFp; // r0
    class cXPerson * person; // r24
    class cXPerson * move; // r21

    // References
    // -> class cXObject * gPlacementConflict;
    // -> int gPlacementError;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015A8B8 -> 0x8015AD14
// this: r25
enum TreeReturnCode cXObject::TrySnap(const class FTilePt & loc /* r26 */, int level /* r27 */, class cXObject * container /* r28 */, int slotNum /* r29 */, unsigned char ignoreRooms /* r23 */, int snapDirection /* r30 */, unsigned char useFootprint /* r31 */) {
    // Local variables
    class CTilePt pt; // r1+0x20
    class CTilePt tileDelta; // r1+0x1C
    class FTilePt delta; // r1+0x28
    int direction; // r23
    int wallBlockFlags; // r0
    signed short stashDir; // r0
    class FTileRect wallTest; // r1+0x30
    unsigned char freePlacement; // r23
    class ObjectSlot * objSlot; // r0
    class cXPerson * person; // r23

    // References
    // -> unsigned char g_bTreeAssert;
    // -> int gPlacementError;
}

// Range: 0x8015AD14 -> 0x8015AF50
// this: r28
enum TreeReturnCode cXObject::TryHUDCreate(class XPrimParam * param /* r29 */) {
    // Local variables
    signed short hudRequested; // r30
    signed short hudJobLevel; // r1+0x8
    const signed short * hudPtr; // r1+0xC

    // References
    // -> unsigned char g_bTreeAssert;
    // -> class GameData _gd;
}

// Range: 0x8015AF50 -> 0x8015B224
// this: r31
enum TreeReturnCode cXObject::TryHUDAddItem(class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    signed short hudID; // r1+0xA
    signed short controlID; // r1+0x8
    const signed short * controlPtr; // r1+0xC
    class cXObject * pObject; // r0
    int namespaceID; // r30
    signed short motiveTableResID; // r0

    // References
    // -> unsigned char g_bTreeAssert;
    // -> class GameData _gd;
}

// Range: 0x8015B224 -> 0x8015B334
// this: r28
enum TreeReturnCode cXObject::TryHUDManage(class XPrimParam * param /* r29 */) {
    // Local variables
    signed short hudID; // r1+0xA
    signed short playerID; // r1+0x8
    signed short operation; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x8015B334 -> 0x8015B33C
enum TreeReturnCode cXObject::TryHUDData() {}

// Range: 0x8015B33C -> 0x8015B608
// this: r28
enum TreeReturnCode cXObject::TryCustomUI(class XPrimParam * param /* r29 */) {
    // Local variables
    enum TreeReturnCode result; // r31
    unsigned char runCustomUI; // r30
    signed short hudMode; // r4
    signed short lotNum; // r5
    signed short fridgeLevel; // r6
    class Neighbor * n; // r0
    enum eKFTType mode; // r4

    // References
    // -> class GameData _gd;
    // -> unsigned char g_bTreeAssert;
    // -> static unsigned char sbModalDialogDisplayed;
    // -> signed short overrideDialogReturnCode;
}

// Range: 0x8015B608 -> 0x8015B95C
// this: r31
enum TreeReturnCode cXObject::TryLotTransition(class XPrimParam * param /* r26 */) {
    // Local variables
    class Neighborhood * neighborhood; // r30
    signed short nID; // r28
    signed short pdValue; // r0
    signed short pdCount; // r27
    class Neighbor * neighbor; // r0
    class Neighborhood * neighborhood; // r27
    signed short nID; // r28
    signed short targetLot; // r1+0xE
    signed short transitionID; // r0
    signed short transitionMode; // r1+0xC
    signed short owner; // r1+0xA
    signed short data; // r1+0x8
    class Neighborhood * ngh; // r30
    class Neighbor * pNeighbor; // r29
    class Neighbor * neighbor; // r0
    class cSimulator * sim; // r27

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8015B95C -> 0x8015C300
// this: r28
enum TreeReturnCode cXObject::TryFamilyInventory(class StackElem * elem /* r26 */, class XPrimParam * param /* r29 */) {
    // Local variables
    enum TreeReturnCode retval; // r31
    class Neighbor * nbr; // r3
    class cXObject * obj; // r0
    class cXPerson * person; // r0
    class Family * fam; // r0
    class InventoryItems * inv; // r30
    signed short id; // r0
    class cXObject * objToAdd; // r4
    class cXObject * objToAdd; // r4
    signed short numToAdd; // r0
    signed short index; // r0
    class cXObject * obj; // r26
    class InventoryItems * pInventory; // r27
    int invIndex; // r4
    signed short ownerID; // r0
    signed short numToRemove; // r0
    signed short index; // r26
    signed short ownerId; // r0
    signed short count; // r0
    signed short index; // r0
    class InventoryItem * item; // r26
    signed short attributeValue; // r0
    int attrIndex; // r26
    signed short index; // r0
    class InventoryItem * item; // r0
    signed short attrVal; // r0
    signed short index; // r0
    class InventoryItem * item; // r0
    signed short numAttr; // r0
    signed short index; // r0
    class InventoryItem * item; // r26
    signed short ownerID; // r0
    signed short index; // r0
    class InventoryItem * item; // r0
    signed short category; // r0
    signed short index; // r0
    class InventoryItem * item; // r0
    signed short count; // r0
    signed short index; // r0
    class InventoryItem * item; // r0
    signed short count; // r0
    signed short attrIndex; // r26
    signed short itemIndex; // r0
    signed short value; // r0
    class InventoryItem * item; // r0
    signed short ID; // r5

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015C300 -> 0x8015C614
// this: r31
enum TreeReturnCode cXObject::TryListenForInput(class XPrimParam * param /* r26 */) {
    // Local variables
    enum TreeReturnCode retval; // r29
    const signed short * pObjectID; // r1+0x8
    signed short listenerID; // r28
    class cXObject * obj; // r0
    unsigned short listenFuncTreeID; // r0
    signed short simID; // r27

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015C614 -> 0x8015C720
// this: r26
enum TreeReturnCode cXObject::TrySyncAudio(class XPrimParam * param /* r27 */) {
    // Local variables
    enum TreeReturnCode retval; // r31
    signed short command; // r30
    int sampleID; // r29
    signed short objectID; // r0
    signed short channel; // r1+0x8
    class SyncAudio * syncAudio; // r28

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015C720 -> 0x8015C8F4
// this: r28
enum TreeReturnCode cXObject::TryNotifyPlans(class XPrimParam * param /* r29 */) {
    // Local variables
    class cXPerson * person; // r30
    class cXObject * object; // r30
    signed short data; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015C8F4 -> 0x8015D050
// this: r27
enum TreeReturnCode cXObject::TryManageClothing(class XPrimParam * param /* r28 */) {
    // Local variables
    enum TreeReturnCode retval; // r30
    enum eBodyPart CASParts[10]; // r1+0x18
    class cXObject * obj; // r0
    class cXPerson * person; // r24
    signed short neighborID; // r0
    class InventoryItems * inventory; // r29
    signed short location; // r1+0xA
    signed short value; // r1+0x8
    signed short operation; // r23
    const signed short * valuePtr; // r1+0xC
    class ClothingItem * piece; // r23
    signed short result; // r0
    struct DamageEvent damage; // r1+0x10
    class ClothingItem * pItem; // r23

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x8015D050 -> 0x8015D198
char * GetJobHUDControlName(signed short index /* r30 */) {
    // Local variables
    class StackString text; // r1+0x8

    // References
    // -> class vector JobControlNameList;
}

// Range: 0x8015D198 -> 0x8015D1E8
void cXObject::ChangeSelectedSimL() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8015D1E8 -> 0x8015D250
// this: r30
signed short cXObject::CreateOOWObjectByGuid(int guid /* r31 */) {
    // Local variables
    class ObjSelector * selector; // r4
}


