/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\object.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134454 -> 0x8013BF4C
*/
// Range: 0x80134454 -> 0x801345A4
// this: r30
cXObject::~cXObject() {
    // References
    // -> struct [anonymous] __vt__8cXObject;
}

// Range: 0x801345A4 -> 0x801345AC
int cXObject::GetPersonWidth() {
    // References
    // -> int gPersonWidth;
}

// Range: 0x801345AC -> 0x801345B4
signed short cXObject::GetGlobalInitTreeID() {}

// Range: 0x801345B4 -> 0x801345BC
signed short cXObject::GetGlobalMainTreeID() {}

// Range: 0x801345BC -> 0x801348D8
// this: r31
cXObject::cXObject(class ObjSelector * selector /* r28 */, class ObjectModule * module /* r29 */) {
    // Local variables
    unsigned int semiNameSpace; // r30
    class NamespaceSelector * semiNameSpaceSelector; // r0
    class ConsoleAutoRefCount pStringSet; // r1+0x14
    int cnt; // r6

    // References
    // -> int _framecount;
    // -> struct [anonymous] __vt__8cXObject;
}

// Range: 0x801348D8 -> 0x80134A80
// this: r29
void cXObject::Initialize() {
    // Local variables
    unsigned int ns_id; // r31
    class ObjectSlot sibSlot; // r1+0x18
    unsigned int fileID; // r0
    signed short slotsID; // r30
    class SlotLoader sl; // r1+0x10
    class FTilePt loc; // r1+0x8
    int i; // r6

    // References
    // -> int _framecount;
}

// Range: 0x80134A80 -> 0x80134E2C
// this: r30
void cXObject::Reset(unsigned char simonce /* r31 */) {
    // Local variables
    int cnt; // r5
    class HierarchySite hs; // r1+0x20
    unsigned char bWasPlacedFromInventory; // r28
    class EdithVariableSet saveData; // r1+0x38
    signed short mainTreeID; // r0
    class PlacementSpec ps; // r1+0x8

    // References
    // -> class GameData _gd;
    // -> int _framecount;
}

// Range: 0x80134E2C -> 0x80134F00
// this: r30
void cXObject::JustBorn() {
    // Local variables
    class cSimulator * s; // r31
}

// Range: 0x80134F00 -> 0x80135010
// this: r30
void cXObject::PostLoad(enum TransitionType transitionType /* r31 */) {
    // Local variables
    signed short loadParams[4]; // r1+0x8
    unsigned char needsReset; // r0
    unsigned char isPlaceholder; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80135010 -> 0x8013527C
// this: r29
void cXObject::Cleanup() {
    // Local variables
    class cXMTObject * pMTObj; // r0
    class cXMTObject * pSearch; // r30
    signed short val; // r0
    class FTilePt loc; // r1+0x18
    int level; // r1+0x10
    class cXObject * container; // r1+0xC
    signed short slotNum; // r1+0xA
    unsigned char inWorld; // r1+0x8
    class cSoundPlayer * sndPlayer; // r0
}

// Range: 0x8013527C -> 0x8013535C
// this: r29
void cXObject::SetHilite(int newHilite /* r30 */) {
    // Local variables
    class cXMTObject * me; // r31
    class cXMTObject * srch; // r3
}

// Range: 0x8013535C -> 0x80135490
// this: r29
signed short cXObject::GetCurrentValue() {
    // Local variables
    signed short value; // r31
    unsigned char broken; // r30
    class cXMTObject * mtobj; // r31
    class cXMTObject * srch; // r29
}

// Range: 0x80135490 -> 0x801354E0
unsigned char cXObject::IsBuilt() {
    // Local variables
    signed short builtState; // r0
}

// Range: 0x801354E0 -> 0x80135520
void cXObject::SetFreeWill() {
    // References
    // -> unsigned char sFreeWill;
}

// Range: 0x80135520 -> 0x80135560
void cXObject::SetFreeWillClassic() {
    // References
    // -> unsigned char sFreeWillClassic;
}

// Range: 0x80135560 -> 0x80135594
// this: r31
void cXObject::DayPassed() {}

// Range: 0x80135594 -> 0x801356A4
// this: r30
void cXObject::ApplyDepreciation() {
    // Local variables
    const struct ObjDefinition * def; // r31
    class cXMTObject * mtobj; // r31
    class ObjSelector * master; // r0
    signed short value; // r3
}

// Range: 0x801356A4 -> 0x801357A8
// this: r28
void cXObject::UpdateAge() {
    // Local variables
    class cSimulator * sim; // r30
    signed short age; // r29
    signed short monthAge; // r30
    signed short dayAge; // r0
}

// Range: 0x801357A8 -> 0x8013584C
class cXObject * cXObject::GetObstacleAtLocation(unsigned char findPortal /* r29 */) {
    // Local variables
    class cXObject * obj; // r31
    class cXObject * door; // r30
}

// Range: 0x8013584C -> 0x801358C0
// this: r31
class cXObject * cXObject::GetRootObject() {
    // Local variables
    class CTilePt pt; // r1+0x8
    signed short objectID; // r0
}

// Range: 0x801358C0 -> 0x80135938
void cXObject::GetPlacementInfo(class FTilePt * loc /* r27 */, int * level /* r28 */, class cXObject * * container /* r29 */, signed short * slotNum /* r30 */, unsigned char * inWorld /* r31 */) {
    // Local variables
    class PlacementSpec ps; // r1+0x8
}

// Range: 0x80135938 -> 0x8013598C
// this: r31
unsigned char cXObject::IsInWorld() const {}

// Range: 0x8013598C -> 0x80135ADC
// this: r29
void cXObject::GetPlacementSpec(class PlacementSpec * ps /* r30 */) {
    // Local variables
    class cXObject * sibRoot; // r31
}

// Range: 0x80135ADC -> 0x80135AE4
class cXObject * cXObject::GetNextObjectSibling() {}

// Range: 0x80135AE4 -> 0x80135B34
// this: r31
class cXObject * cXObject::GetPrevObjectSibling() {}

// Range: 0x80135B34 -> 0x80135B74
// this: r31
class cXObject * cXObject::HierGetParent() {}

// Range: 0x80135B74 -> 0x80135CB4
// this: r28
void cXObject::HierSetSite(const class HierarchySite * newsite /* r29 */) {
    // Local variables
    class CTilePt pt; // r1+0x8
    class vector & slots; // r31
    int slotNum; // r30
}

// Range: 0x80135CB4 -> 0x80135D18
// this: r30
class cXObject * cXObject::HierGetChild(int number /* r31 */) {}

// Range: 0x80135D18 -> 0x80135DC0
// this: r30
void cXObject::HierGetSite(class HierarchySite * site /* r31 */) {
    // Local variables
    class CTilePt pt; // r1+0x8
}

// Range: 0x80135DC0 -> 0x80135E90
// this: r30
void cXObject::HierSever() {
    // Local variables
    class HierarchySite hs; // r1+0x10
    class CTilePt pt; // r1+0x8
}

// Range: 0x80135E90 -> 0x80135F3C
// this: r31
class cXObject * cXObject::HierGetObject() {
    // Local variables
    class CTilePt pt; // r1+0x8
}

// Range: 0x80135F3C -> 0x80135F74
unsigned char cXObject::IsContained() {
    // Local variables
    class PlacementSpec ps; // r1+0x8
}

// Range: 0x80135F74 -> 0x80135FB4
signed short cXObject::GetContainerID() {
    // Local variables
    class PlacementSpec ps; // r1+0x8
}

// Range: 0x80135FB4 -> 0x80135FE4
signed short cXObject::GetContainedSlotNum() {
    // Local variables
    class PlacementSpec ps; // r1+0x8
}

// Range: 0x80135FE4 -> 0x80136054
// this: r30
class cXObject * cXObject::GetContainer() {
    // Local variables
    class cXObject * sibRoot; // r31
}

// Range: 0x80136054 -> 0x801360B0
// this: r30
class ObjectSlot * cXObject::GetObjectSlot(int index /* r31 */) {}

// Range: 0x801360B0 -> 0x8013615C
// this: r29
void cXObject::ExtractContainedSims() {
    // Local variables
    int nextSlot; // r31
    class cXObject * containedItem; // r30
    class cXPerson * person; // r0
}

// Range: 0x8013615C -> 0x80136E08
// this: r27
unsigned char cXObject::TestPlace(class PlacementSpec * ps /* r28 */) {
    // Local variables
    class cFixedWorld * world; // r31
    class cXPerson * person; // r26
    class CTilePt curLoc; // r1+0x28
    int flags; // r30
    unsigned char isPerson; // r29
    class CTilePt pt; // r1+0x24
    class ObjectIterator begin; // r1+0x68
    class ObjectIterator i; // r1+0x5C
    class cXMTObject * o1; // [invalid]
    class ObjectIterator begin; // r1+0x50
    class ObjectIterator i; // r1+0x44
    class cXMTObject * o2; // r26
    unsigned char bHasObjects; // r26
    class ObjectIterator objitr; // r1+0x38
    class cXObject * pTempOb; // r25
    signed short pflags; // r25
    signed short wflags; // r26
    signed short rmplValue; // r25
    class CTilePt pt; // r1+0x20
    int isOutside; // r0
    signed short allowedHeightFlags; // r25
    enum StdHeight height; // r26
    class ObjectSlot * theSlot; // r30
    int slotCount; // r31
    class ObjectSlot * otherSlot; // r24
    class cXObject * selfCheck; // r3

    // References
    // -> unsigned char sLookingForRoof;
    // -> class EGlobal _globals;
    // -> int gPlacementError;
}

// Range: 0x80136E08 -> 0x80136EE4
// this: r30
void cXObject::Place() {
    // Local variables
    class HierarchySite hs; // r1+0x38
    class cXObject * sib; // r31
    class HierarchySite hs; // r1+0x20
    class cXObject * prior; // r31
    class HierarchySite onTopOfMe; // r1+0x8
}

// Range: 0x80136EE4 -> 0x80137044
// this: r27
void cXObject::Pickup() {
    // Local variables
    int x; // r0
    int y; // r0
    int dir; // r29
    class PlacementSpec newPs; // r1+0x10
    class cXObject * container; // r28
    class FTilePt outOfBounds; // r1+0x8

    // References
    // -> int sYDirTable[9];
    // -> int sXDirTable[9];
}

// Range: 0x80137044 -> 0x80137048
unsigned char cXObject::CanPlace() {}

// Range: 0x80137048 -> 0x80137084
// this: r31
unsigned char cXObject::CanPlaceSingleTile() {
    // Local variables
    class PlacementSpec newPs; // r1+0x8
}

// Range: 0x80137084 -> 0x801372D8
// this: r30
void cXObject::Place(const class FTilePt & loc /* r24 */, class cXObject * container /* r31 */, int slotNum /* r25 */) {
    // Local variables
    int newLevel; // r27
    int x; // r0
    int y; // r0
    int dir; // r26
    class PlacementSpec ps; // r1+0x20
    class PlacementSpec newPs; // r1+0x8

    // References
    // -> int sYDirTable[9];
    // -> int sXDirTable[9];
}

// Range: 0x801372D8 -> 0x801372E0
class SpriteSlot & cXObject::GetSpriteSlot() {
    // Local variables
    class SpriteSlot * i; // r0
}

// Range: 0x801372E0 -> 0x801372E8
class SpriteSlot & cXObject::GetSpriteSlot() {}

// Range: 0x801372E8 -> 0x80137528
// this: r21
void cXObject::UpdateChairFacing() {
    // Local variables
    class CTilePt objPos; // r1+0xC
    class CTilePt pt; // r1+0x8
    int x; // r0
    int y; // r0
    unsigned char facingChairFound; // r27
    class cFixedWorld * world; // r26
    class ObjectModule * module; // r25
    int dirCnt; // r24
    class cXObject * obj; // r23
    int opposingDir; // r22
    class ObjectIterator i; // r1+0x10
    class cXObject * aboveObj; // r22
    unsigned char wasBitSet; // r23
    signed short val; // r0

    // References
    // -> int sYDirTable[9];
    // -> int sXDirTable[9];
}

// Range: 0x80137528 -> 0x801375BC
void cXObject::UpdateChairFacing(class ObjectModule * module /* r31 */) {
    // Local variables
    class CTilePt pt; // r1+0x8
    class cXObject * baseObject; // r0
}

// Range: 0x801375BC -> 0x8013799C
// this: r20
unsigned char cXObject::TestIntersection(class FTilePt & loc /* r19 */, int inLevel /* r21 */) {
    // Local variables
    int dirCnt; // r26
    int x; // r0
    int y; // r0
    class cFixedWorld * const world; // r25
    class ObjectModule * const module; // r24
    class FTileRect newRect; // r1+0x10
    int iHaveZeroExtent; // r0
    int myExclusivePlacementFlags; // r23
    class CTilePt pt; // r1+0x8
    class cXObject * obj; // r22
    int itHasZeroExtent; // r0
    int flagsInCommon; // r3
    enum TileWallsSegment seg1; // r0
    enum TileWallsSegment seg2; // r0

    // References
    // -> class cXObject * gPlacementConflict;
    // -> int gPlacementError;
    // -> int sXDirTable[9];
    // -> int sYDirTable[9];
}

// Range: 0x8013799C -> 0x801379AC
unsigned char cXObject::IsPartOfMe() {}

// Range: 0x801379AC -> 0x801379B0
void cXObject::ForceLocation() {}

// Range: 0x801379B0 -> 0x80137BE0
// this: r30
void cXObject::ComputeRect(const class FTilePt & inCenter /* r27 */, class FTileRect * _outRect /* r31 */) {
    // Local variables
    int hwid; // r0
    signed short footprintInsets; // r29
    signed short footprintExtensions; // r28
    class cXPerson * p; // r27
    int insets[4]; // r1+0x8
    int dir; // r9
}

// Range: 0x80137BE0 -> 0x80137E88
// this: r25
void cXObject::SetLocation(const class FTilePt & loc /* r26 */, int inLevel /* r27 */) {
    // Local variables
    class FTilePt oldLoc; // r1+0x20
    unsigned char skipUpdate; // r31
    class cXObject * container; // r30
    signed short newRoom; // r30
    signed short oldRoom; // r31
    int slotCnt; // r30
    int numSlots; // r0
    class ObjectSlot * slot; // r29
    class cXObject * anObject; // r28
    class EMat4 rotate; // r1+0x40
    class FTilePt newLoc; // r1+0x18

    // References
    // -> class GameData _gd;
}

// Range: 0x80137E88 -> 0x80137FDC
// this: r31
void cXObject::Turn(int notches /* r27 */) {
    // Local variables
    int oldDir; // r26
    signed short val; // r0

    // References
    // -> int sXDirTable[9];
    // -> int sYDirTable[9];
}

// Range: 0x80137FDC -> 0x80138024
static float ApproxSqrt() {
    // Local variables
    float s1; // f3
    float s2; // f3
}

// Range: 0x80138024 -> 0x80138094
// this: r5
float cXObject::CalcShortDistance() const {
    // Local variables
    float fracIncs; // f1
    float rsfracIncs; // f31
    float sdist; // f1
}

// Range: 0x80138094 -> 0x801381E4
// this: r30
float cXObject::CalcShortDistanceIn16thsOfTiles(class cXObject * to /* r31 */) {
    // Local variables
    class FTilePt location1; // r1+0x10
    class cXObject * container1; // r0
    class FTilePt location2; // r1+0x8
    class cXObject * container2; // r0
    float sdist; // f1
}

// Range: 0x801381E4 -> 0x801384D8
// this: r27
float cXObject::CalcDistanceWithPentalties(class cXObject * to /* r28 */) const {
    // Local variables
    float shortDistance; // f0
    float penalty; // f30
    class FTilePt toPoint; // r1+0x10
    unsigned short startRoom; // r0
    float deltaX; // f29
    float deltaY; // f28
    float testX; // f27
    float testY; // f26
    class cFixedWorld * fixedWorld; // r30
    unsigned char goingUp; // r29
    unsigned char bTestingY; // r28
    unsigned char done; // r27
    class CTilePt test; // r1+0x8
    unsigned short thisRoom; // r0

    // References
    // -> static float sOtherRoomPenalty;
    // -> static float sImpassiblePenalty;
    // -> static float sTileDeltaToCheck;
    // -> static float sShortDistanceCutoff;
}

// Range: 0x801384D8 -> 0x801385D8
// this: r29
void cXObject::ReconHeader(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed short simOn; // r1+0x8
}

// Range: 0x801385D8 -> 0x80138A88
// this: r28
void cXObject::ReconStream(class ReconBuffer * r /* r29 */, int version /* r30 */, unsigned char placeHolder /* r31 */) {
    // Local variables
    signed short numAttrs; // r1+0x10
    signed short * pTempData; // r27
    int i; // r6
    signed short numSemiAttrs; // r1+0xE
    signed short * pTempData; // r27
    int i; // r6
    signed short numStaticAttrs; // r1+0xC
    signed short * pTempData; // r27
    int i; // r6
    signed short wasDirInc; // r1+0xA
    signed short numDynSprites; // r1+0x8
}

// Range: 0x80138A88 -> 0x80138B9C
// this: r28
void cXObject::ReconSlots(class ReconBuffer * r /* r29 */) {
    // Local variables
    int n; // r30
    signed short objectID; // r1+0xC
    signed short slotID; // r1+0xA
    signed short reconSlotCount; // r1+0x8
}

// Range: 0x80138B9C -> 0x80138BA8
int cXObject::ReconType() {}

// Range: 0x80138BA8 -> 0x80139100
// this: r21
unsigned char cXObject::FindGoodLocation(const class FindGoodLocationParams & fglp /* r22 */, class FTilePt * outLoc /* r23 */) {
    // Local variables
    int directionToSelect; // r1+0x1C
    class cFixedWorld * const world; // r30
    class ObjectModule * module; // r29
    int xoff; // r28
    int yoff; // r27
    int outTiles; // r26
    int perimeter; // r25
    class FTilePt startLoc; // r1+0x38
    int level; // r24
    int xMiddle; // r19
    int yMiddle; // r0
    class CTilePt temp; // r1+0x18
    class CTilePt center; // r1+0x14
    unsigned short origRoom; // r0
    class CTilePt newLoc; // r1+0x10
    unsigned char goodSpot; // r18
    signed short id; // r0
    class cXObject * tileObject; // r17
    class TileWalls tw; // r1+0x40
}

// Range: 0x80139100 -> 0x80139280
// this: r29
void cXObject::UpdateWallAdjacency() {
    // Local variables
    class cFixedWorld * world; // r31
    signed short newWallAdj; // r30
    class CTilePt myLoc; // r1+0x8
    int rot; // r31
    class TileWalls tw; // r1+0xC
}

// Range: 0x80139280 -> 0x80139308
// this: r31
int cXObject::GetTileWidth() {
    // Local variables
    class cXPerson * person; // r0
}

// Range: 0x80139308 -> 0x8013935C
// this: r31
unsigned char cXObject::IsInteractionLeader() {}

// Range: 0x8013935C -> 0x80139410
// this: r29
class cXObject * cXObject::GetInteractionLeader() {
    // Local variables
    struct ObjDefinition * def; // r0
    signed short intGrp; // r31
    class cXMTObject * mt; // r0
    class cXMTObject * srch; // r30
}

// Range: 0x80139410 -> 0x801395EC
// this: r30
unsigned char cXObject::UserCanPickup() {
    // Local variables
    class cXObject * pContainer; // r0
    int n; // r31
    class cXObject * obj; // r0
    class CTilePt loc; // r1+0x8

    // References
    // -> class cXObject * gPlacementConflict;
    // -> int gPlacementError;
}

// Range: 0x801395EC -> 0x801396A8
// this: r30
unsigned char cXObject::UserCanDelete() {
    // Local variables
    int i; // r31
}

// Range: 0x801396A8 -> 0x801396CC
unsigned char cXObject::IsDeletedByEvict() {}

// Range: 0x801396CC -> 0x80139854
// this: r25
unsigned char cXObject::UserCanPlace(const class FTilePt & newLoc /* r26 */, int inLevel /* r27 */, class cXObject * ontop /* r28 */, int slotNum /* r29 */) {
    // Local variables
    class ObjectSlot * slot; // r0

    // References
    // -> class cXObject * gPlacementConflict;
    // -> int gPlacementError;
}

// Range: 0x80139854 -> 0x80139910
// this: r29
void cXObject::UserPlace() {
    // Local variables
    int N; // r0
    int i; // r30
}

// Range: 0x80139910 -> 0x801399CC
// this: r29
void cXObject::UserPickup() {
    // Local variables
    int N; // r0
    int i; // r30
}

// Range: 0x801399CC -> 0x80139A1C
unsigned char cXObject::IsFromCatalog() {
    // Local variables
    struct ObjDefinition * def; // r0
}

// Range: 0x80139A1C -> 0x80139A4C
unsigned char cXObject::GetWasPlacedByPlayer() {}

// Range: 0x80139A4C -> 0x80139AB0
// this: r30
void cXObject::SetWasPlacedByPlayer(unsigned char value /* r31 */) {
    // Local variables
    signed short currflags; // r5
}

// Range: 0x80139AB0 -> 0x80139B14
// this: r30
void cXObject::SetBeingKilled(unsigned char value /* r31 */) {
    // Local variables
    signed short currflags; // r5
}

// Range: 0x80139B14 -> 0x80139BC8
// this: r30
enum TileWallsSegment cXObject::GetRequiredSegment() {
    // Local variables
    enum TileWallsSegment seg; // r31
}

// Range: 0x80139BC8 -> 0x80139CC8
// this: r29
unsigned char cXObject::CanChooseAutonomously() {
    // Local variables
    const class ITreeTable * treeTab; // r31
    int i; // r30
    const class ITreeTableEntry * entry; // r29
}

// Range: 0x80139CC8 -> 0x80139D44
// this: r30
void cXObject::UpdateSimFlags() {}

// Range: 0x80139D44 -> 0x80139DB0
// this: r30
int cXObject::GetWallBlockFlags() {
    // Local variables
    int flags; // r31
    int objDirection; // r0
}

// Range: 0x80139DB0 -> 0x80139EF0
int cXObject::GetWallBlockFlagsAtTile(const class CTilePt & pt /* r28 */, int direction /* r29 */) {
    // Local variables
    class cFixedWorld * const world; // r31
    class ObjectModule * const module; // r30
    const class TileWallStorage & tws; // r0
    int flags; // r31
    class ObjectIterator oi; // r1+0x8
    int blockFlags; // r0
}

// Range: 0x80139EF0 -> 0x80139F34
// this: r31
class FTilePt cXObject::GetAverageLocation() const {
    // Local variables
    class FTilePt loc; // r1+0x8
}

// Range: 0x80139F34 -> 0x80139F3C
int cXObject::GetLevel() {}

// Range: 0x80139F3C -> 0x80139F44
void cXObject::SetLevel() {}

// Range: 0x80139F44 -> 0x80139FA8
// this: r30
class CTilePt cXObject::GetCTilePt() const {}

// Range: 0x80139FA8 -> 0x8013A170
// this: r30
enum TreeReturnCode cXObject::SyncObjectIsReady(float * animPosOverrideSecs /* r31 */) {
    // Local variables
    signed short id; // r1+0xC
    signed short data; // r1+0xA
    signed short owner; // r1+0x8
    class cXObject * newSyncObject; // r0

    // References
    // -> float _dt;
    // -> int _framecount;
}

// Range: 0x8013A170 -> 0x8013A238
// this: r30
unsigned char cXObject::SetSyncObject(class cXObject * owner_object /* r31 */) {
    // Local variables
    signed short id; // r1+0xC
    signed short data; // r1+0xA
    signed short owner; // r1+0x8
    class cXObject * newSyncObject; // r0
}

// Range: 0x8013A238 -> 0x8013A358
// this: r30
unsigned char cXObject::SyncObjectIsReady(float * animPosOverrideSecs /* r31 */) {
    // References
    // -> int _framecount;
    // -> float _dt;
}

// Range: 0x8013A358 -> 0x8013A3FC
// this: r28
unsigned char cXObject::RunTree(enum ObjEntryPoint ep /* r31 */, signed short stackObjectID /* r29 */, signed short * locals /* r30 */) {
    // Local variables
    signed short treeID; // r0
}

// Range: 0x8013A3FC -> 0x8013A42C
unsigned char cXObject::IsVehicle() {}

// Range: 0x8013A42C -> 0x8013A45C
unsigned char cXObject::IsPerson() {}

// Range: 0x8013A45C -> 0x8013A484
unsigned char cXObject::GetColorIndex() {}

// Range: 0x8013A484 -> 0x8013A4E8
// this: r29
unsigned char cXObject::SetColorIndex(unsigned char index /* r30 */) {
    // Local variables
    unsigned char prev; // r0
}

// Range: 0x8013A4E8 -> 0x8013A5B4
// this: r31
unsigned char cXObject::IsInteractionTile() {}

// Range: 0x8013A5B4 -> 0x8013A5C4
void cXObject::GetNumTiles() {}

// Range: 0x8013A5C4 -> 0x8013A5CC
unsigned char cXObject::ContainsData() {}

// Range: 0x8013A5CC -> 0x8013A638
// this: r31
void cXObject::ClearAttributes() {}

// Range: 0x8013A638 -> 0x8013A6A0
// this: r31
EdithVariableSet::EdithVariableSet() {}

// Range: 0x8013A6FC -> 0x8013A780
// this: r30
EdithVariableSet::EdithVariableSet(const class EdithVariableSet & edithVarSet /* r31 */) {}

// Range: 0x8013A780 -> 0x8013A9F4
// this: r21
void EdithVariableSet::Initialize(class cXObject * pObject /* r22 */) {
    // Local variables
    class byte_key_map * pCatVariableMap; // r24
    struct pair elem; // r1+0x8
    class byte_key_map * map; // r4
    int i; // r23

    // References
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> signed short GameStartYear;
    // -> unsigned char s_IsForcedInstanceVariable[72];
    // -> unsigned char s_VariablesUsed[72];
    // -> class byte_key_map s_CategoryVariableMapSet;
    // -> unsigned char s_serializing;
}

// Range: 0x8013A9F4 -> 0x8013AA4C
// this: r30
EdithVariableSet::~EdithVariableSet() {}

// Range: 0x8013AA4C -> 0x8013AB58
// this: r31
signed short & EdithVariableSet::operator[](int index /* r30 */) const {
    // Local variables
    int remap_index; // r0
    struct _Byte_key_map_iterator searchIter; // r1+0x50
    class byte_key_map * pCatVariableMap; // r31

    // References
    // -> signed short s_InvalidReference;
    // -> signed char s_indexLookup[72];
    // -> unsigned char s_serializing;
}

// Range: 0x8013AB58 -> 0x8013AD94
// this: r29
signed short & EdithVariableSet::WriteVar(int index /* r30 */, signed short val /* r1+0x8 */) {
    // Local variables
    int remap_index; // r0
    struct _Byte_key_map_iterator searchIter; // r1+0x88
    class byte_key_map * pCatVariableMap; // r31
    struct pair newElem; // r1+0x20

    // References
    // -> signed short s_InvalidReference;
    // -> unsigned char s_VariablesUsed[72];
    // -> unsigned char s_IsForcedInstanceVariable[72];
    // -> signed char s_indexLookup[72];
    // -> unsigned char s_serializing;
}

// Range: 0x8013AD94 -> 0x8013B040
// this: r28
void EdithVariableSet::ReconStream(class ReconBuffer * r /* r29 */) {
    // Local variables
    struct _Byte_key_map_iterator itor; // r1+0x58
    class byte_key_map tmpSet; // r1+0x68
    signed char variableCount; // r31
    struct _Byte_key_map_iterator iter; // r1+0x48
    int i; // r30
    struct pair dataPair; // r1+0x10

    // References
    // -> unsigned char s_serializing;
}

// Range: 0x8013B040 -> 0x8013B2B0
// this: r30
signed short & EdithVariableSet::Insert(const struct pair & v /* r31 */) {
    // Local variables
    struct pair insertResult; // r1+0xC0
    class byte_key_map * pCatVariableMap; // r29
    struct _Byte_key_map_iterator iter; // r1+0x88

    // References
    // -> signed short s_InvalidReference;
    // -> unsigned char s_IsForcedInstanceVariable[72];
    // -> unsigned char s_VariablesUsed[72];
}

// Range: 0x8013B2DC -> 0x8013B368
// this: r31
unsigned char EdithVariableSet::RemoveInstanceVariable() {
    // Local variables
    struct _Byte_key_map_iterator iter; // r1+0x30
}

// Range: 0x8013B368 -> 0x8013B3D8
void EdithVariableSet::ShrinkToExactSize(class byte_key_map & mapToShrink /* r30 */) {
    // Local variables
    class byte_key_map temp; // r1+0x8
}

// Range: 0x8013B3D8 -> 0x8013B4D8
int EdithVariableSet::ReconKeyBitSet(class ReconBuffer * r /* r27 */) {
    // Local variables
    class bitset * pBitSet; // r30
    int curWord; // r29
    signed char * pFirstByte; // r28
}

// Range: 0x8013B4D8 -> 0x8013B550
// this: r30
void EdithVariableSet::Reset() {
    // Local variables
    struct _Byte_key_map_iterator iter; // r1+0x18
}

// Range: 0x8013B550 -> 0x8013B604
// this: r31
unsigned char EdithVariableSet::Contains(int index /* r30 */) {
    // Local variables
    struct _Byte_key_map_iterator iter; // r1+0x40
    class byte_key_map * pCatVariableMap; // r31
}

// Range: 0x8013B604 -> 0x8013B690
class byte_key_map * EdithVariableSet::GetCategoryVariableMap(unsigned short categoryIndex /* r30 */) {
    // Local variables
    struct _Byte_key_map_iterator iter; // r1+0x30

    // References
    // -> class byte_key_map s_CategoryVariableMapSet;
}

// Range: 0x8013B690 -> 0x8013B758
class byte_key_map * EdithVariableSet::CreateCategoryVariableMap(unsigned short categoryIndex /* r30 */) {
    // Local variables
    struct _Byte_key_map_iterator iter; // r1+0x30
    struct pair newEntry; // r1+0x58

    // References
    // -> class byte_key_map s_CategoryVariableMapSet;
}

// Range: 0x8013B7B4 -> 0x8013B8E0
void cXObject::SimObjectPlaced(class ISimInstance * pInstance /* r29 */) {
    // Local variables
    class cXObject * obj; // r31
    class ISimInstance * pISim; // [invalid]
    class cXObject * pContained; // r31
    class ISimInstance * pISimContained; // r30
}

// Range: 0x8013B8E0 -> 0x8013B9B8
// this: r26
unsigned char cXObject::IsOwnedBy(class Neighbor * n /* r27 */) {
    // Local variables
    int maxValue; // r31
    int maxKey; // r30
    int i; // r29
    int key; // r28
    int value; // r3
}

// Range: 0x8013B9B8 -> 0x8013BA70
// this: r28
class CatalogResource * cXObject::GetObjectCatalogResource() {
    // Local variables
    signed short catalogID; // r0
    class ObjSelector * master; // r30
    class CatalogResource * cr; // r29
}

// Range: 0x8013BA70 -> 0x8013BAA0
class ELocString cXObject::GetObjectCatalogName() {
    // Local variables
    class CatalogResource * cr; // r0
}

// Range: 0x8013BAA0 -> 0x8013BAD0
class ELocString cXObject::GetObjectCatalogShortName() {
    // Local variables
    class CatalogResource * cr; // r0
}

// Range: 0x8013BAD0 -> 0x8013BB3C
// this: r29
void cXObject::SetObjAnimFlag(enum ObjAnimFlags flag /* r30 */, unsigned char on /* r31 */) {
    // Local variables
    signed short tempFlags; // r0
}

// Range: 0x8013BB3C -> 0x8013BC60
// this: r29
void cXObject::ApplyDamage(const struct DamageEvent & damage /* r30 */, signed short nArmorMultiplier /* r31 */) {
    // Local variables
    struct Armor armor; // r1+0x8
    signed short params[8]; // r1+0x10
    int i; // r0
}

// Range: 0x8013BC60 -> 0x8013BE18
// this: r26
void cXObject::CalcArmorAgainstDamage(const struct DamageEvent & damage /* r27 */, struct Armor & armor /* r28 */) {
    // Local variables
    int roomWall; // r30
    int roomRoof; // r29
    class cXMTObject * pMTObject; // r31
    class Room * room; // r0
    class CTilePt pt; // r1+0x8
}

// Range: 0x8013BE18 -> 0x8013BF4C
// this: r31
void cXObject::CalcRoomScoreImpact() {
    // Local variables
    float impact; // f31
    signed short realImpact; // r0
}


