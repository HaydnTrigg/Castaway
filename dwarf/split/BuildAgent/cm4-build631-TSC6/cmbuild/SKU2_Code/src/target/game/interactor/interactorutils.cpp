/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactorutils.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80063DD0 -> 0x80066980
*/
// Range: 0x80063DD0 -> 0x80063DE8
PlacementData::PlacementData() {}

// Range: 0x80063DE8 -> 0x80063EC8
void InitializeInteractorModule() {
    // Local variables
    struct InteractorParams params; // r1+0x8
    struct InteractorParams simparams; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80063EC8 -> 0x80063F04
void ShutdownInteractorModule() {}

// Range: 0x80063F04 -> 0x80064054
void GetPersonPosition(class EVec3 * pos /* r27 */, const class cXPerson * person /* r28 */, unsigned char bIn2d /* r29 */, unsigned char bUseMaxZ /* r30 */) {
    // Local variables
    class SAnimator2 * anim; // r31
    class EVec3 pelvisPos; // r1+0x24
    class EVec3 headPos; // r1+0x18
}

// Range: 0x80064054 -> 0x80064184
void SnapPositionToTile(const class EVec3 & inputPos /* r29 */, class EVec3 & outputPos /* r30 */, enum IMSnapType TileSnapType /* r31 */) {
    // Local variables
    class FTilePt testPos; // r1+0x8
}

// Range: 0x80064184 -> 0x80064304
float GetCameraRelativeStickAngle(class EVec2 & stickValueRead /* r28 */, class ESimsCam * pCamera /* r29 */, float * pfRawStickAngle /* r30 */) {
    // Local variables
    float fStickAngle; // f1
    float fCamTheta; // f0
    class EVec3 vStick; // r1+0x2C
    class EVec3 veye; // r1+0x20
    class EVec3 vtarget; // r1+0x14
    class EVec3 vEyeToTarg; // r1+0x8
}

// Range: 0x80064304 -> 0x80064648
void MoveCursorAlongCameraTargetVector(class EVec3 & posToUpdate /* r28 */, class EVec2 & stickValueRead /* r29 */, class ESimsCam * pCamera /* r30 */, float velocity /* f31 */) {
    // Local variables
    unsigned char blueprintMode; // r31
    float timePassed; // f29
    class EVec3 vStick; // r1+0x44
    float threshold; // f29
    class EMat4 mRot; // r1+0x50
    float theta; // f0
    class EVec3 veye; // r1+0x38
    class EVec3 vtarget; // r1+0x2C
    class EVec3 vEyeToTarg; // r1+0x20

    // References
    // -> float _dt;
}

// Range: 0x80064648 -> 0x80064898
void MoveCursorOneTileAlongCameraTargetVector(class EVec3 & posToUpdate /* r26 */, class EVec2 & stickValueRead /* r27 */, class ESimsCam * pCamera /* r28 */, enum IMSnapType snapType /* r29 */) {
    // Local variables
    unsigned char blueprintMode; // r30
    class EVec3 vStick; // r1+0x44
    class EMat4 mRot; // r1+0x50
    float theta; // f0
    class EVec3 veye; // r1+0x38
    class EVec3 vtarget; // r1+0x2C
    class EVec3 vEyeToTarg; // r1+0x20
}

// Range: 0x80064898 -> 0x80064A0C
void ClampPosToWorld(class EVec3 & posToUpdate /* r30 */) {
    // Local variables
    float xSize; // f30
    float ySize; // f29

    // References
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x80064A0C -> 0x80064B1C
unsigned char IsPosOutsideWorld(const class EVec3 & posToCheck /* r30 */) {
    // Local variables
    float xSize; // f31
    float ySize; // f30

    // References
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x80064B1C -> 0x80064B88
class cXObject * CreateObjectFromGUID(unsigned int GUID /* r31 */) {
    // Local variables
    class ObjSelector * pSelector; // r0
    signed short id; // r0
}

// Range: 0x80064B88 -> 0x80064C44
unsigned char DestroyObject(class cXObject * pObj /* r29 */) {
    // Local variables
    unsigned char usingPlaceInteractor; // r31
    class InteractorManager * interactorManager; // r30
    unsigned char interactorInitialized; // r0
    class PlaceManipulator * place_interactor; // r0
}

// Range: 0x80064C44 -> 0x80064D18
unsigned char CanObjectBeDestroyed(class cXObject * pObject /* r31 */) {
    // Local variables
    signed short movementFlags; // r0
    unsigned char bCanBeDeleted; // r30
    class cXObject * pContained; // r0
    class cXMTObject * mtobj; // r31
    class cXObject * pContained; // r0
}

// Range: 0x80064D18 -> 0x80064D4C
class cXObject * GetObjectFromInt16(signed short objectId /* r31 */) {}

// Range: 0x80064D4C -> 0x80064DC0
class cXObject * GetLeadObjectImpl(class cXObject * pObject /* r31 */) {
    // Local variables
    class cXMTObject * pMTObject; // r0
}

// Range: 0x80064DC0 -> 0x80064E78
unsigned char IsObjectInRange() {
    // Local variables
    class CTilePt pt; // r1+0x8
}

// Range: 0x80064E78 -> 0x80064F38
static unsigned char CoreIsLegalToPlace(class cXObject * pObj /* r29 */, class FTilePt & tileLoc /* r30 */, int & inLevel /* r31 */) {}

// Range: 0x80064F38 -> 0x80064F70
static unsigned char IsLegalToPlaceMultiTileAtLocation(class FTilePt & tileLoc /* r31 */) {
    // Local variables
    int inLevel; // r1+0x8
}

// Range: 0x80064F70 -> 0x8006521C
static unsigned char IsLegalToPlaceSingleTileAtLocation(class cXObject * pObject /* r31 */, class FTilePt & tileLoc /* r25 */, struct PlacementData * pPlaceDataResult /* r26 */) {
    // Local variables
    int inLevel; // r1+0xC
    int savePlacementError; // r28
    signed short allowedHeightFlags; // r0
    class CTilePt tile; // r1+0x8
    class ObjectIterator oi; // r1+0x20
    int slotCnt; // r0
    int slotIter; // r27
    class ObjectSlot * slot; // r0
    signed short heightMask; // r3
    int desiredDirection; // r27
    int cnt; // r28
    class FTilePt testLoc; // r1+0x18
    int turn; // r27

    // References
    // -> int gPlacementError;
}

// Range: 0x8006521C -> 0x800652B0
unsigned char IsLegalToPlaceAtLocation(class cXObject * pObject /* r29 */, class FTilePt & tileLoc /* r30 */, struct PlacementData * pPlaceDataResult /* r31 */) {
    // Local variables
    unsigned char bObjInWorld; // r0
}

// Range: 0x800652B0 -> 0x8006542C
unsigned char FinalUserPlaceObject(class cXObject * pObject /* r28 */, struct PlacementData * pPlaceDataResult /* r29 */) {
    // Local variables
    class FTilePt oldLoc; // r1+0x18
    unsigned char bIsObjectInRange; // r0
    class FTilePt newLoc; // r1+0x10
    struct PlacementData psData; // r1+0x8
    struct PlacementData & placeData; // r30
    unsigned char bIsValidLocation; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80065450 -> 0x800654F8
void UpdateAllObjectsInWorldAfterFirstPickupOrFinalPlace(class cXObject * pObject /* r30 */) {
    // Local variables
    class EHouse & house; // r31
    class cXPortal * myPortal; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800654F8 -> 0x800654FC
void RecomputeLightingGrid() {}

// Range: 0x800654FC -> 0x80065630
void SetDirection(int dir /* r29 */, class cXObject * pObject /* r30 */) {
    // Local variables
    class FTilePt loc; // r1+0x8
    int rotCount; // r31
}

// Range: 0x80065630 -> 0x8006576C
void GetObjectInstancesList(class cXObject * pXObj /* r30 */, class TNodeList & instances /* r29 */) {
    // Local variables
    class cXMTObject * mtobj; // r31
    class ISimInstance * pInstance; // r4
    class ISimInstance * pInstance; // r30
    class NLIteratorPtrType * itrFound; // r0
    class ISimInstance * pInstance; // r4
}

// Range: 0x8006576C -> 0x800659CC
void ShadeModelToShowValidState(class cXObject * pObj /* r29 */, unsigned char bIsValid /* r28 */) {
    // Local variables
    class ISimInstance * pinst; // r30
    class cXObject * pContained; // r30
    class ISimInstance * pISimContained; // r29
    class cXMTObject * mtobj; // r29
    class cXObject * pContained; // r29
    class ISimInstance * pISimContained; // r28
    class TNodeList list; // r1+0x8
    class NLIteratorPtrType * i; // r28
    class ISimInstance * pData; // r29
}

// Range: 0x800659CC -> 0x80065C64
int GetVisibleSideOfWall(class ESimsCam * cam /* r28 */, const class EVec3 & v0 /* r31 */, const class EVec3 & v1 /* r30 */, class EVec3 * vOut /* r29 */) {
    // Local variables
    class EVec2 v0P; // r1+0x38
    class EVec2 v1P; // r1+0x30
    float minY; // f0
    float maxY; // f0
    float minX; // f0
    float maxX; // f0
    float slope; // f1
    class EVec2 vt; // r1+0x28
    class EVec2 vt; // r1+0x20
    class EVec2 vdir; // r1+0x18
    class EVec2 vnorm; // r1+0x10
    class EVec2 eyedir; // r1+0x8
    int side; // r30
}

// Range: 0x80065C64 -> 0x80066110
void ConvertVertsToTiles(const class EVec3 & va /* r31 */, const class EVec3 & vb /* r30 */, class CTilePt & c0 /* r28 */, class CTilePt & c1 /* r29 */) {
    // Local variables
    class EVec2 v0; // r1+0x20
    class EVec2 v1; // r1+0x18
    class EVec2 vUL; // r1+0x10
    class EVec2 v0v1; // r1+0x8
}

// Range: 0x80066110 -> 0x800662CC
void GetAdjacentTileCoordinates() {}

// Range: 0x800662CC -> 0x800663AC
unsigned short GetRoomIdFromPoint(class CTilePt & wherePt /* r29 */) {
    // Local variables
    class cFixedWorld * gWorld; // r31
    unsigned short room; // r30
    class RoomManager * room_mgr; // r0
    class Room * r1; // r1+0x14
    class Room * r2; // r1+0x10
    enum Sides s1; // r1+0xC
    enum Sides s2; // r1+0x8
    class TileWalls walls; // r1+0x18
}

// Range: 0x800663AC -> 0x80066658
void ForcePointDir(class CTilePt & c0 /* r30 */, class CTilePt & c1 /* r31 */) {
    // Local variables
    class CTilePt c0P; // r1+0x14
    class CTilePt c1P; // r1+0x10
    float slope; // f1
    class CTilePt vt; // r1+0xC
    class CTilePt vt; // r1+0x8
}

// Range: 0x80066658 -> 0x8006678C
void EorGetAdjacentTile(enum TileWallsSegment & theSeg /* r27 */, int whichSide /* r28 */, class CTilePt & out0 /* r29 */, class CTilePt & out1 /* r30 */) {
    // Local variables
    enum eCTilePtDir tileDir; // r0
    enum eCTilePtDir perpDir; // r31

    // References
    // -> class CTilePt sDirections[8];
    // -> static enum eCTilePtDir _PerpTilePointTab[9];
}

// Range: 0x8006678C -> 0x800667D4
unsigned char IsCameraDirectorInControl() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x800667D4 -> 0x8006685C
unsigned char SetCameraFilter(int playerId /* r30 */) {
    // Local variables
    class InstanceData * pInstanceData; // r31
    class ESimsCam * pCamera; // r30
}

// Range: 0x8006685C -> 0x800668C4
unsigned char ClearCameraFilter(int playerId /* r31 */) {
    // Local variables
    class InstanceData * pInstanceData; // r0
    class ESimsCam * pCamera; // r0
}

// Range: 0x800668C4 -> 0x80066980
void IncrementSellCountForPattern(int pattern /* r28 */, class vector & sellList /* r29 */) {
    // Local variables
    enum WallPattern testPattern; // r0
    unsigned char bFoundit; // r31
    struct PatternSellCount patternSellCount; // r1+0x8
    int i; // r30
}


