/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_rlevel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008D4A8 -> 0x80094C68
*/
// Range: 0x8008D4A8 -> 0x8008D4E8
static class EOrderTableData * AllocOTD() {
    // Local variables
    class EOrderTableData * pData; // r3

    // References
    // -> static class FastAllocPool g_poolOrderTableDataObjects;
}

// Range: 0x8008D4E8 -> 0x8008D540
static void FreeOTDList(class EOrderTableData * & head /* r30 */) {
    // Local variables
    class EOrderTableData * pOTD; // r4
    class EOrderTableData * pNextOTD; // r31
}

// Range: 0x8008D540 -> 0x8008D5A4
static void FreeOTD(class EOrderTableData * pOTD /* r30 */) {
    // References
    // -> static class FastAllocPool g_poolOrderTableDataObjects;
}

// Range: 0x8008D5A4 -> 0x8008D628
static void Outside(signed short & roomId /* r29 */, signed short & lightRoomId /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x8008D628 -> 0x8008D62C
class EStream & operator<<() {}

// Range: 0x8008D62C -> 0x8008D674
class EStream & operator>>(class EStream & s /* r30 */, class ERLevel * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x8008D674 -> 0x8008D6BC
class EFile & operator>>(class EFile & s /* r30 */, class ERLevel * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x8008D6BC -> 0x8008D9C0
// this: r30
ERLevel::ERLevel() {
    // References
    // -> struct [anonymous] __vt__7ERLevel;
}

// Range: 0x8008D9C0 -> 0x8008DB98
// this: r29
ERLevel::~ERLevel() {
    // References
    // -> class EEngine * _pEngine;
    // -> struct [anonymous] __vt__7ERLevel;
}

// Range: 0x8008DB98 -> 0x8008DBE8
// this: r30
void ERLevel::GetSunLight(struct EDirLight & SunDir /* r31 */) {}

// Range: 0x8008DBE8 -> 0x8008DE7C
// this: r30
void ERLevel::Write(class EStream & s /* r31 */) {
    // Local variables
    int i; // r27
    int i; // r27
    int size; // r27
    int i; // r28
    struct MidLotObject midObj; // r1+0x8
}

// Range: 0x8008DE7C -> 0x8008DF00
// this: r29
void ERLevel::AddInstancesFromList() {
    // Local variables
    class NLIteratorPtrType * i; // r30
    class EInstance * pInstance; // r0
}

// Range: 0x8008DF00 -> 0x8008DFAC
// this: r30
void ERLevel::AddInstancesFromBoundTree(class EStorable * pNode /* r31 */) {
    // Local variables
    class EBoundTreeNode * pBTNode; // r0
    class EInstance * pInstance; // r0
}

// Range: 0x8008DFAC -> 0x8008E6F8
// this: r30
void ERLevel::Read(class EStream & s /* r31 */) {
    // Local variables
    int version; // r1+0x14
    int empty[3]; // r1+0x30
    int i; // r27
    int readVersion; // r26
    class EStorable * havokPtr; // r1+0x10
    class EStorable * staticBoundTreeRoot; // r1+0xC
    class TNodeList dynamicList; // r1+0x24
    class TNodeList dynamicOptimizeList; // r1+0x18
    int size; // r1+0x8
    int i; // r26
    struct MidLotObject midObj; // r1+0x3C
}

// Range: 0x8008E6F8 -> 0x8008EDC0
// this: r30
void ERLevel::Load(class EFile & s /* r31 */) {
    // Local variables
    int version; // r1+0xC
    int empty[3]; // r1+0x10
    int i; // r27
    int size; // r1+0x8
    int i; // r27
    struct MidLotObject midObj; // r1+0x1C
}

// Range: 0x8008EDC0 -> 0x8008EF9C
// this: r30
void ERLevel::Refresh(class EFile * pFile /* r27 */) {
    // Local variables
    class ERLevel * level; // r31
    int i; // r27
}

// Range: 0x8008EF9C -> 0x8008EFE8
class ERLevel * ERLevel::AllocAndLoadLevel(class EFile & s /* r31 */) {
    // Local variables
    unsigned int levelDataLen; // r1+0x10
    class ERLevel * pRLevel; // r1+0xC
    unsigned int u32Temp; // r1+0x8
}

// Range: 0x8008EFE8 -> 0x8008F07C
void ERLevel::DestroyInstancesOriginallyReadByLevel() {
    // Local variables
    int i; // r29
    unsigned int flags; // r4
}

// Range: 0x8008F07C -> 0x8008F13C
// this: r28
void ERLevel::Deallocate() {
    // Local variables
    int i; // r29
}

// Range: 0x8008F13C -> 0x8008F2DC
// this: r31
void ERLevel::DeallocateSub() {
    // Local variables
    int i; // r28
}

// Range: 0x8008F2DC -> 0x8008F384
// this: r28
void ERLevel::DeallocateMidlotInstances() {
    // Local variables
    int i; // r29
}

// Range: 0x8008F384 -> 0x8008F3C8
// this: r30
void ERLevel::InsertInstance(class EInstance * pInstance /* r31 */) {}

// Range: 0x8008F3C8 -> 0x8008F438
// this: r29
void ERLevel::InsertWall(class EInstance * pWall /* r30 */, unsigned char drawShadow /* r31 */) {}

// Range: 0x8008F438 -> 0x8008F49C
// this: r30
void ERLevel::RemoveWall(class EInstance * pWall /* r31 */) {
    // Local variables
    class NLIteratorPtrType * i; // r0
}

// Range: 0x8008F49C -> 0x8008F50C
// this: r30
void ERLevel::InsertLight(class EILight * pLight /* r31 */) {}

// Range: 0x8008F50C -> 0x8008F578
// this: r30
void ERLevel::RemoveLight(class EILight * pLight /* r31 */) {
    // Local variables
    class NLIteratorPtrType * i; // r4
}

// Range: 0x8008F578 -> 0x8008F57C
void ERLevel::ValidateInstanceInLevel() {}

// Range: 0x8008F57C -> 0x8008F658
// this: r30
void ERLevel::InsertSkydomeInstance(class EInstance * pInstance /* r31 */) {
    // Local variables
    int i; // r5
}

// Range: 0x8008F658 -> 0x8008F73C
// this: r30
void ERLevel::AddInstanceToLevel(class EInstance * pInstance /* r31 */) {}

// Range: 0x8008F73C -> 0x8008F950
// this: r30
void ERLevel::AddInstanceToLevelHead(class EInstance * pInstance /* r31 */) {
    // Local variables
    int i; // r3
}

// Range: 0x8008F950 -> 0x8008FAF8
// this: r29
void ERLevel::AddWallInstanceToLevel(class EInstance * pInstance /* r30 */) {
    // Local variables
    int i; // [invalid]
    int j; // r31
    unsigned int res_id; // r0
    unsigned int model_id; // r0
}

// Range: 0x8008FAF8 -> 0x8008FB4C
// this: r30
void ERLevel::PrepareInstance(class EInstance * pInstance /* r31 */) {}

// Range: 0x8008FB4C -> 0x8008FB58
void ERLevel::AddShadowCaster() {}

// Range: 0x8008FB58 -> 0x8008FBA4
// this: r31
void ERLevel::RemoveShadowCaster() {
    // Local variables
    class NLIteratorPtrType * iLevelList; // r4
}

// Range: 0x8008FBA4 -> 0x8008FBB0
void ERLevel::AddShadowReceiver() {}

// Range: 0x8008FBB0 -> 0x8008FBFC
// this: r31
void ERLevel::RemoveShadowReceiver() {
    // Local variables
    class NLIteratorPtrType * iLevelList; // r4
}

// Range: 0x8008FBFC -> 0x8008FCB8
// this: r30
void ERLevel::AddInstanceToRoom(class EInstance * pInstance /* r31 */) {
    // Local variables
    int roomIx; // r0
}

// Range: 0x8008FCB8 -> 0x8008FD6C
// this: r29
void ERLevel::RemoveInstanceFromRoom(class EInstance * pInstance /* r30 */) {
    // Local variables
    int roomIx; // r5
    int flags; // r31
}

// Range: 0x8008FD6C -> 0x8008FDC8
// this: r31
int ERLevel::GetRoomIndex() const {
    // Local variables
    signed short unused; // r1+0xA
    signed short roomId; // r1+0x8
}

// Range: 0x8008FDC8 -> 0x8008FE20
// this: r30
void ERLevel::NotifyInstanceMoved(class EInstance * pInstance /* r31 */) {
    // Local variables
    int roomId; // r0
    int oldRoomId; // r0
}

// Range: 0x8008FE20 -> 0x8008FE48
void ERLevel::AddInstanceToIdMap() {}

// Range: 0x8008FE48 -> 0x8008FEDC
// this: r30
void ERLevel::RemoveInstanceFromIdMap(class EInstance * pInstance /* r31 */) {
    // Local variables
    class EInstance * pMapInstance; // r1+0x8
    class HTIteratorPtrType * i; // r4
}

// Range: 0x8008FEDC -> 0x8008FF60
// this: r27
class EMidLotInstance * ERLevel::FindMidLotInstance(enum eMidLotObjectType objectType /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x8008FF60 -> 0x8008FFF4
// this: r26
void ERLevel::GetAllMidLotInstances(enum eMidLotObjectType objectType /* r27 */, class vector & l /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x8008FFF4 -> 0x800900B8
// this: r28
void ERLevel::Init() {
    // Local variables
    int i; // r29
}

// Range: 0x800900B8 -> 0x80090128
static void UnregisterFloorOTDsFromList(class EInstance * pInstance /* r29 */) {
    // Local variables
    class EOrderTableData * * ppLastOTD; // r31
    class EOrderTableData * pOTD; // r3
    class EOrderTableData * pNextOTD; // r30
}

// Range: 0x80090128 -> 0x800901A0
void ERLevel::UnregisterFloorOTDs(class EInstance * pInstance /* r28 */) {
    // Local variables
    int c; // r29
}

// Range: 0x800901A0 -> 0x800902B4
// this: r31
void ERLevel::RemoveInstance(class EInstance * pInstance /* r1+0x8 */) {
    // Local variables
    class EInstance * * pLast; // r0
}

// Range: 0x800902B4 -> 0x80090338
void ERLevel::SetBounds(class EInstance * pInstance /* r30 */, const class EBound3 & b /* r31 */) {}

// Range: 0x80090338 -> 0x80090364
void ERLevel::AddBounds() {}

// Range: 0x80090364 -> 0x80090408
// this: r27
class EBound3 ERLevel::CalcBounds(class ERLevel * const this /* r28 */) {
    // Local variables
    unsigned char first; // r1+0x8
    int i; // r29
}

// Range: 0x80090408 -> 0x800905B4
// this: r31
void ERLevel::Update() {
    // Local variables
    unsigned int currentPri; // r29
    class RBIteratorPtrType * iAlways; // [invalid]
    class EInstance * pInst; // r30
    class RBIteratorPtrType * iNext; // r28
    int i; // r28
    int i; // r28
    int i; // r28
}

// Range: 0x800905B4 -> 0x80090604
// this: r31
void ERLevel::UpdateLightingEtc() {}

// Range: 0x80090604 -> 0x800916E4
// this: r23
void ERLevel::Draw(class ERC * prc /* r24 */) {
    // Local variables
    class Room * room; // r0
    class E3DWindow * pWin; // r25
    int nIndexOfStrongestDirectional; // r0
    const struct LightData & ld; // r0
    class EVec3 lightDir; // r1+0x50
    float bucketRange; // f2
    int i; // r27
    const class EVec3 & pos; // r30
    class EVec3 dir; // r1+0x44
    int c; // r29
    class EIFloor * pfloor; // r31
    class EBound3 bounds; // r1+0x78
    class EVec3 delta1; // r1+0x38
    class EVec3 delta2; // r1+0x2C
    float dx; // f29
    float dy; // f1
    float dist; // f1
    float len1; // f0
    float len2; // f1
    float height; // f2
    class EInstance * pInstance; // r31
    class ISimInstance * psimInstance; // r26
    class cXObject * pObj; // r21
    class EBound3 bbox; // r1+0x60
    float zHeight; // f2
    float rampTime; // f30
    float alphaMin; // f31
    float a; // f1
    int maxReflectionSubModels; // r26
    class EInstance * pInstance; // r21
    class EInstance * pInstance; // r3
    class EIStaticSubModel * roof; // r21
    const class EBound3 & bbox; // r31
    unsigned int visFlags; // r0
    class EInstance * pInstance; // r0
    float instAlpha; // f0
    class EBoundSphere & bsphere; // r25
    int k; // r20
    class EMidLotInstance * pMidInst; // r25
    float rampTime; // f25
    float alphaMin; // f24
    const class EBound3 & bbox; // r20
    unsigned char bDoInterestFade; // r21
    float instAlpha; // f0
    float a; // f1
    float a; // f1
    class WallPostInstance * pWpi; // r20
    unsigned int visFlags; // r21
    float rampTime; // f24
    float alphaMin; // f25
    const class EBound3 & bbox; // r29
    float instAlpha; // f0
    float a; // f1
    class EOrderTableData * next; // r20
    int c; // r0
    class EIFloor * pfloor; // r3
    class EVec3 color; // r1+0x20
    float max; // f1

    // References
    // -> float _gamedt;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class LineFade g_lineFade;
    // -> float _dt;
    // -> class PyramidFade g_pyramidFade;
    // -> float indoorObjectCullDistanceSq;
    // -> class EGlobal _globals;
    // -> int m_raycastDelayed;
    // -> int m_raycastThisFrame;
    // -> unsigned char m_fillingOrderTable;
    // -> int m_raycastThrottled;
    // -> class ERC * g_pRC;
    // -> class EVec3 s_outsideDiffuse;
    // -> class EVec3 s_outsideAmbient;
    // -> float s_outsidePointLightDimmer;
}

// Range: 0x800916E4 -> 0x80091824
// this: r28
unsigned char ERLevel::ObjectShouldBeOccluded(class EInstance * inst /* r27 */) {
    // Local variables
    unsigned char ret; // r30
    signed short locID; // r1+0xC
    signed short lightLocID1; // r1+0xA
    signed short lightLocID2; // r1+0x8
    class EIFloor * pfloor; // r29
    int i; // r28
    class EBound3 bound; // r1+0x10
    signed short locID'51; // r0
}

// Range: 0x80091824 -> 0x80091AEC
// this: r30
void ERLevel::DrawToShadowMap(class ERC * prc /* r31 */) {
    // Local variables
    class ESimsCam * pCam; // r27
    class ESim * pSelectedSim; // r26
    class EBoundSphere bndSphere; // r1+0x20
    unsigned char bCalcedSphere; // r29
    class NLIteratorPtrType * simIterator; // r25
    class EInstance * firstSimInstance; // r24
    float rot; // r1+0x10
    float tilt; // r1+0xC
    float zoom; // r1+0x8
    int nIndexOfStrongestDirectional; // r0
    const struct LightData & ld; // r0
    class EVec3 lightDir; // r1+0x14
    class NLIteratorPtrType * iSimShadows; // r24
    class EInstance * pInstance; // r0

    // References
    // -> static class EVec3 vPosition;
    // -> static class EVec3 vLookAt;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80091AEC -> 0x80091B84
static float ShadowFindProjPlane(const class EBoundSphere & bSphere /* r31 */, float maxSize /* f30 */) {
    // Local variables
    class EVec3 toSphere; // r1+0x8
    float separation; // f0
    float sinTheta; // f1
    float cosTheta; // f0
}

// Range: 0x80091B84 -> 0x80092104
void ShadowCalculatePlane(struct ShadowPlane * plane /* r28 */, float width /* f24 */, float height /* f25 */, class EVec3 & lightPos /* r29 */, class EVec3 & lightDir /* r30 */, class EVec3 & lightUp /* r31 */) {
    // Local variables
    float ip; // f0
    float planescale; // f1
    class EMat4 m; // r1+0x228
    float a; // f31
    float b; // f30
    float c; // f29
    float x; // f21
    float y; // f28
    float z; // f27
    float d; // f26
    class EMat4 trans; // r1+0x1E8
    class EVec4 unit; // r1+0x58
    class EMat4 planeCoords; // r1+0x1A8
    class EMat4 scale; // r1+0x168
    class EVec4 offset; // r1+0x48
}

// Range: 0x80092104 -> 0x8009234C
// this: r29
void ERLevel::ShadowSetup(class EVec3 & lightPos /* r30 */, class EBoundSphere & bSphere /* r31 */) {
    // Local variables
    class EVec3 lightDir; // r1+0x44
    float lightScreenZ; // f30
    class EMat4 lightProj; // r1+0x90
    class EVec3 lightUp; // r1+0x38
    class EVec3 arbitrary; // r1+0x2C
    class EVec3 lightX; // r1+0x20
    class EMat4 shadowLightWorldView; // r1+0x50
    struct ShadowPlane plane; // r1+0xD0
}

// Range: 0x8009239C -> 0x80092584
// this: r29
void ERLevel::PreDrawShadows(const class EBoundSphere & bndSphere /* r30 */) {
    // Local variables
    float elongation_correction; // f31
    class EVec3 lightDir; // r1+0x3C
    int nIndexOfStrongestDirectional; // r0

    // References
    // -> class ENgcGraphics _ngcGfx;
}

// Range: 0x80092584 -> 0x800925F8
// this: r31
void ERLevel::PostDrawShadows() {
    // References
    // -> class ENgcGraphics _ngcGfx;
}

// Range: 0x800925F8 -> 0x80092758
// this: r27
void ERLevel::DrawOuterLotInstancesWithShadow(int maxReflectionSubModels /* r28 */, unsigned char skipOuterLotFrustumCulling /* r29 */) {
    // Local variables
    float shadowAlpha; // f31
    int i; // [invalid]
    class EInstance * pInstance; // r3
    class EIStaticSubModel * pStaticSubModel; // r0
}

// Range: 0x80092758 -> 0x80092924
// this: r28
void ERLevel::DrawInstancesWithShadow(const class TNodeList & list /* r29 */) {
    // Local variables
    float shadowAlpha; // f31
    class NLIteratorPtrType * iShadow; // r30
    class EBaseInstance * pInstance; // r29
    class EBoundSphere bndSphere; // r1+0x18
    class EVec3 vLightReceiver; // r1+0x8
    float dist; // f0
    unsigned int shadowVisFlags; // r0
}

// Range: 0x80092924 -> 0x80092A3C
// this: r29
unsigned char ERLevel::DrawInstanceToShadowTexture(class EBaseInstance * pInstance /* r30 */, unsigned char bSim /* r31 */) {
    // Local variables
    class EBoundSphere bndSphere; // r1+0x8
    class EBound3 mBounds; // r1+0x18
    unsigned int visFlags; // r0
}

// Range: 0x80092A3C -> 0x80092A40
void ERLevel::UpdatePerRoomData() {}

// Range: 0x80092A40 -> 0x80092A4C
void ERLevel::UpdateWallPosts() {}

// Range: 0x80092A4C -> 0x80092AA0
class EOrderTableData * ERLevel::AllocAndCopyOTD(class EOrderTableData & otd /* r30 */) {
    // Local variables
    class EOrderTableData * pOTD; // r31
}

// Range: 0x80092AA0 -> 0x80092B10
// this: r30
void ERLevel::RegisterFloor() {
    // Local variables
    class EOrderTableData * pOTD; // r0
    int roomIx; // r0
}

// Range: 0x80092B10 -> 0x80092BD4
// this: r29
void ERLevel::InsertInOrderTable(class EOrderTableData & otd /* r30 */) {
    // Local variables
    class EOrderTableData * pOTD; // r0
    float distance; // f0
    float dx; // f2
    float dy; // f0
}

// Range: 0x80092BD4 -> 0x80092C64
// this: r30
void ERLevel::InsertInDOFForegroundObjectList(class EOrderTableData & otd /* r31 */) {
    // Local variables
    class EOrderTableData * pOTD; // r0
    class EOrderTableData * pTail; // r6
}

// Range: 0x80092C64 -> 0x80092DA8
// this: r29
void ERLevel::DrawOrderTableEntry(class EOrderTableData * pDrawNode /* r30 */, class ERC * prc /* r31 */) {
    // References
    // -> unsigned char m_drawingOrderTable;
}

// Range: 0x80092DA8 -> 0x80092E20
// this: r29
void ERLevel::DrawOrderTableSlot() {
    // Local variables
    class EOrderTableData * pDrawNode; // r4
    class EOrderTableData * pNext; // r30
}

// Range: 0x80092E20 -> 0x80092EA4
static int OrderTableSortReferenceCompare() {
    // Local variables
    const struct OrderTableSortReference * ref1; // r0
    const struct OrderTableSortReference * ref2; // r0
}

// Range: 0x80092EA4 -> 0x80092FF0
// this: r28
void ERLevel::DrawOrderTable() {
    // Local variables
    struct OrderTableSortReference * pSortList; // r29
    class EOrderTableData * otd; // r3
    struct OrderTableSortReference * curRef; // r4
}

// Range: 0x80092FF0 -> 0x80093248
// this: r30
void ERLevel::SetRoomCount(int roomCount /* r27 */) {
    // Local variables
    int c; // r28
    int size; // r31
    int c; // r5
    int i; // r28
}

// Range: 0x80093248 -> 0x800932E8
// this: r28
void ERLevel::UpdateLightsIntensityScale(class EVec3 & scale /* r27 */) {
    // Local variables
    const class RoomData * rd; // r0
    const struct LightData * ld; // r0
    int i; // r29
    class EILight * light; // r28
}

// Range: 0x800932E8 -> 0x800932F0
void ERLevel::InitializeLightingGrid() {}

// Range: 0x800932F0 -> 0x80093348
void ERLevel::ResetLightLocations() {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class EILight * pLight; // r0
}

// Range: 0x80093348 -> 0x800933DC
static void CalcSkyLights(const struct LightingSkyLight & skyLight /* r29 */, const class EVec3 & sunDirection /* r30 */, struct ELights & lights /* r31 */) {}

// Range: 0x800933DC -> 0x800934E4
static void InterpolateToGraySky(float factor /* f31 */, struct LightingEntry & inOut /* r30 */) {
    // Local variables
    float fMaxOutsideGloomIntensity; // r1+0xC
    float fMaxSkylightGloomIntensity; // r1+0x8
    float inv_factor; // f2
    float target; // f1

    // References
    // -> class LevelLightingTuning g_levelLightingTuning;
}

// Range: 0x800934E4 -> 0x800935AC
void InterpolateToGray(float factor /* f29 */, float intensityMax /* f30 */, class EVec3 & color /* r30 */, float & intensity /* r31 */) {
    // Local variables
    float inv_factor; // f31
    float gray; // f4
    float target; // f0
}

// Range: 0x800935AC -> 0x80093984
static void ApplyWeatherEffects(struct LightingEntry & inOut /* r31 */) {
    // Local variables
    float gloomLevel; // f0
    float fLightningLevel; // f0
    class EVec2 v2LightningPitchYaw; // r1+0x8
}

// Range: 0x80093984 -> 0x80093A98
static void InterpolateSkyLights(float x /* f30 */, const struct LightingSkyLight & from /* r29 */, const struct LightingSkyLight & to /* r30 */, struct LightingSkyLight & output /* r31 */) {
    // Local variables
    float inv_x; // f31
}

// Range: 0x80093A98 -> 0x80093D88
// this: r28
void ERLevel::InterpolateLevelLighting(float timeInHours /* f30 */, struct LightingEntry & output /* r29 */) {
    // Local variables
    int fromIx; // r1+0xC
    int toIx; // r1+0x8
    const struct LightingEntry & from; // r0
    const struct LightingEntry & to; // r0
    float toTime; // f3
    float x; // f31
    float inv_x; // f30
}

// Range: 0x80093D88 -> 0x80093D8C
void ERLevel::OutsideLightsInit() {}

// Range: 0x80093D8C -> 0x80093FBC
// this: r29
void ERLevel::OutsideLightsUpdate(struct LightingEntry & lighting /* r30 */, unsigned char bGetSunDirFromWeatherSystem /* r31 */) {
    // Local variables
    class EVec3 sunDir; // r1+0x40
    class EVec3 moonDir; // r1+0x34
    float fLightningLevel; // f0
    float yaw; // r1+0x18
    float sin_p; // r1+0x14
    float cos_p; // r1+0x10
    float sin_y; // r1+0xC
    float cos_y; // r1+0x8

    // References
    // -> class LevelLightingTuning g_levelLightingTuning;
}

// Range: 0x80093FBC -> 0x80094040
void ERLevel::UpdateFloorLighting() {
    // Local variables
    int i; // r29
}

// Range: 0x80094040 -> 0x80094054
void ERLevel::InsertHouseObject() {}

// Range: 0x80094054 -> 0x80094424
// this: r15
void ERLevel::CreateMidLotObjects() {
    // Local variables
    int i; // r19
    enum eMidLotObjectType midlottype; // r18
    unsigned int modelID; // r17
    unsigned int animID; // r16
    unsigned char bVisible; // r0

    // References
    // -> unsigned int kMidLotObjectResIDs[20];
}

// Range: 0x80094424 -> 0x80094430
unsigned char ERLevel::MidLotInitDone() {}

// Range: 0x80094430 -> 0x800944F0
// this: r27
void ERLevel::GetLightsAtLocation(struct ELights & lights /* r26 */) {
    // Local variables
    const signed short * ids; // r30
    const struct LightData * ld; // r0
    int i; // r29
    int ix; // r3
    const struct LightData & l; // r28
    struct EPointLight & p; // r27
}

// Range: 0x800944F0 -> 0x80094728
unsigned char ERLevel::RaycastIntersectionStaticSubModel(class EIStaticSubModel * pStaticSubModel /* r24 */, class EVec3 & _ray_pos /* r30 */, class EVec3 & ray_dir /* r25 */, class EVec3 & hit_pos /* r26 */, float & hit_dist /* r27 */, unsigned char bIgnoreLast /* r28 */, class RaycastLastHit * lastHit /* r29 */) {
    // Local variables
    class EBound3 mBound; // r1+0x48
    class EVec3 ray_pos; // r1+0x38
    class EVec3 aabbHitPos; // r1+0x2C
    float aabbHitDist; // r1+0x10
    class InstanceData * pInstanceData; // r0
    class EMat4 pmOrient; // r1+0xA0
    class EVec3 unmodifiedRayPos; // r1+0x20
    unsigned int iSubModel; // r30
    class ESubModel * pSubModel; // r0
    class EMat4 pmOrient; // r1+0x60
}

// Range: 0x80094728 -> 0x800949C0
// this: r25
unsigned char ERLevel::FindOuterLotInteresection(class EVec3 & ray_pos /* r26 */, class EVec3 & ray_dir /* r27 */, class EVec3 & hit_pos /* r28 */, float & hit_dist /* r29 */, class RaycastLastHit * lastHit /* r30 */) {
    // Local variables
    int iFirstCollisionInstance; // [invalid]
    class EIStaticSubModel * pStaticSubModel; // r23
    class EInstance * pInstance; // r0
    class EIStaticSubModel * pStaticSubModel; // r23
    class EInstance * pInstance; // r0
    unsigned char bHit; // r22
    int start; // [invalid]
    int end; // r21
    int i; // r31
    class EIStaticSubModel * pStaticSubModel; // r20
    class EInstance * pInstance; // r0
}

// Range: 0x800949C0 -> 0x80094C68
unsigned char ERLevel::FindOuterLotIntersectionDown(const class EVec3 & pos /* r29 */, float vertOffset /* f31 */, float & elevation /* r30 */, class RaycastLastHit * lastHit /* r31 */) {
    // Local variables
    unsigned char bUseCached; // r6
    class EVec3 adjPos; // r1+0x24
    class EVec3 vDown; // r1+0x18
    class EVec3 hit_pos; // r1+0xC
    float hit_dist; // r1+0x8

    // References
    // -> int m_raycastDelayed;
    // -> int m_raycastThrottled;
    // -> int m_raycastThisFrame;
    // -> int m_raycastThreshold;
    // -> class EGlobal _globals;
}


