/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\eroom.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80218244 -> 0x8021F614
*/
// Range: 0x80218244 -> 0x802182BC
enum WallTypes EIWallPart::GetWallType() {}

// Range: 0x802182BC -> 0x80218334
// this: r31
unsigned char EIWallPart::IsOpaque() {}

// Range: 0x80218334 -> 0x802185AC
enum WallTypes _kBottomLeftWallsEndCapTest(const class CTilePt & point /* r27 */, const class TileWalls & thisTile /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt swPt; // r1+0x18
    class TileWalls swTile; // r1+0xCC
    class CTilePt sPt; // r1+0x14
    class TileWalls sTile; // r1+0xA0
    class CTilePt wPt; // r1+0x10
    class TileWalls wTile; // r1+0x74
    class CTilePt sePt; // r1+0xC
    class TileWalls seTile; // r1+0x48
    class CTilePt nwPt; // r1+0x8
    class TileWalls nwTile; // r1+0x1C

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x802185AC -> 0x80218844
enum WallTypes _kTopRightWallsEndCapTest(const class CTilePt & point /* r27 */, const class TileWalls & thisTile /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt nePt; // r1+0x18
    class TileWalls neTile; // r1+0xCC
    class CTilePt nghPt; // r1+0x14
    class TileWalls nghTile; // r1+0xA0
    class CTilePt nPt; // r1+0x10
    class TileWalls nTile; // r1+0x74
    class CTilePt ePt; // r1+0xC
    class TileWalls eTile; // r1+0x48

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80218844 -> 0x80218ADC
enum WallTypes _kBottomRightWallsEndCapTest(const class CTilePt & point /* r27 */, const class TileWalls & thisTile /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt sePt; // r1+0x18
    class TileWalls seTile; // r1+0xCC
    class CTilePt nghPt; // r1+0x14
    class TileWalls nghTile; // r1+0xA0
    class CTilePt sPt; // r1+0x10
    class TileWalls sTile; // r1+0x74
    class CTilePt ePt; // r1+0xC
    class TileWalls eTile; // r1+0x48

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80218ADC -> 0x80218D74
enum WallTypes _kTopLeftWallsEndCapTest(const class CTilePt & point /* r27 */, const class TileWalls & thisTile /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt nwPt; // r1+0x18
    class TileWalls nwTile; // r1+0xCC
    class CTilePt nPt; // r1+0x14
    class TileWalls nTile; // r1+0xA0
    class CTilePt wPt; // r1+0x10
    class TileWalls wTile; // r1+0x74
    class CTilePt nghPt; // r1+0xC
    class TileWalls nghTile; // r1+0x48

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80218D74 -> 0x80219050
enum WallTypes _kHorizDiagWallskTopEndCapTest(const class CTilePt & point /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt sePt; // r1+0x1C
    class TileWalls seTile; // r1+0xFC
    class CTilePt swPt; // r1+0x18
    class TileWalls swTile; // r1+0xD0
    class CTilePt ePt; // r1+0x14
    class TileWalls eTile; // r1+0xA4
    class CTilePt wPt; // r1+0x10
    class TileWalls wTile; // r1+0x78
    class CTilePt nghPt; // r1+0xC
    class TileWalls nghTile; // r1+0x4C

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80219050 -> 0x8021932C
enum WallTypes _kHorizDiagWallskBottomEndCapTest(const class CTilePt & point /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt nwPt; // r1+0x1C
    class TileWalls nwTile; // r1+0xFC
    class CTilePt nePt; // r1+0x18
    class TileWalls neTile; // r1+0xD0
    class CTilePt ePt; // r1+0x14
    class TileWalls eTile; // r1+0xA4
    class CTilePt wPt; // r1+0x10
    class TileWalls wTile; // r1+0x78
    class CTilePt nghPt; // r1+0xC
    class TileWalls nghTile; // r1+0x4C

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8021932C -> 0x80219608
enum WallTypes _kVertDiagWallskRightEndCapTest(const class CTilePt & point /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt sePt; // r1+0x1C
    class TileWalls seTile; // r1+0xFC
    class CTilePt nePt; // r1+0x18
    class TileWalls neTile; // r1+0xD0
    class CTilePt sPt; // r1+0x14
    class TileWalls sTile; // r1+0xA4
    class CTilePt nPt; // r1+0x10
    class TileWalls nTile; // r1+0x78
    class CTilePt nghPt; // r1+0xC
    class TileWalls nghTile; // r1+0x4C

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x80219608 -> 0x802198E4
enum WallTypes _kVertDiagWallskLeftEndCapTest(const class CTilePt & point /* r28 */) {
    // Local variables
    class cFixedWorld & world; // r30
    unsigned char capFlags; // r29
    class CTilePt nwPt; // r1+0x1C
    class TileWalls nwTile; // r1+0xFC
    class CTilePt swPt; // r1+0x18
    class TileWalls swTile; // r1+0xD0
    class CTilePt sPt; // r1+0x14
    class TileWalls sTile; // r1+0xA4
    class CTilePt nPt; // r1+0x10
    class TileWalls nTile; // r1+0x78
    class CTilePt nghPt; // r1+0xC
    class TileWalls nghTile; // r1+0x4C

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x802198E4 -> 0x80219920
unsigned char SplitWallBottomRight(class TileWalls & walls /* r31 */) {}

// Range: 0x80219920 -> 0x8021995C
unsigned char SplitWallTopLeft(class TileWalls & walls /* r31 */) {}

// Range: 0x8021995C -> 0x80219998
unsigned char SplitWallBottomLeft(class TileWalls & walls /* r31 */) {}

// Range: 0x80219998 -> 0x802199D4
unsigned char SplitWallTopRight(class TileWalls & walls /* r31 */) {}

// Range: 0x802199D4 -> 0x80219B60
unsigned char SplitWallHorizDiag(class CTilePt & point /* r29 */) {
    // Local variables
    int xSize; // r0
    int ySize; // r0
    class CTilePt lastPoint1; // r1+0xC
    class CTilePt lastPoint2; // r1+0x8
    const class TileWallStorage & walls1; // r0
    const class TileWallStorage & walls2; // r0
}

// Range: 0x80219B60 -> 0x80219CE4
unsigned char SplitWallVertDiag(class CTilePt & point /* r29 */) {
    // Local variables
    int xSize; // r0
    int ySize; // r0
    class CTilePt lastPoint1; // r1+0xC
    class CTilePt lastPoint2; // r1+0x8
    const class TileWallStorage & walls1; // r0
    const class TileWallStorage & walls2; // r0
}

// Range: 0x80219CE4 -> 0x80219D18
float EIFenceWall::GetFenceMeterValue() {
    // References
    // -> int m_nInstances;
}

// Range: 0x80219D18 -> 0x80219E98
float ERoomWall::GetWallMeterValue(int & totalRooms /* r27 */) {
    // Local variables
    int nRooms; // r31
    class RoomManager * pRoomman; // r30
    const class map & roomlist; // r29
    struct rbtree_iterator roomItr; // r1+0x14
    class Room * pRoom; // r28
    float roomratio; // f31
    float roomIdRatio; // f0
    float tileratio; // f2
    float planeratio; // f1
    float retval; // f0

    // References
    // -> unsigned int m_wallCount;
    // -> unsigned int m_tileCount;
}

// Range: 0x80219E98 -> 0x80219EDC
unsigned int EIFenceWall::VisibilityTest(class E3DWindow & win /* r31 */) {}

// Range: 0x80219EDC -> 0x80219EE8
unsigned char ERoomWall::IsWallsOpaque() {}

// Range: 0x80219EE8 -> 0x80219FA0
// this: r29
unsigned char ERoomWall::CalWallsOpaque(int player /* r31 */) {
    // Local variables
    class NLIteratorPtrType * wallInstIdx; // r30
    class EIWallPart * wallPart; // r0
}

// Range: 0x80219FA0 -> 0x8021A0B4
float ERoomWall::CalShortDistToCam(int player /* r27 */) {
    // Local variables
    class NLIteratorPtrType * wallInstIdx; // r30
    unsigned char first; // r29
    class EVec3 vEye; // r1+0x14
    class EIWallPart * wallPart; // r28
    class EMat4 wallMat; // r1+0x20
    float dist; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8021A0B4 -> 0x8021A110
void * EIWallPart::operator new(unsigned long size /* r30 */) {
    // Local variables
    void * p; // r31
}

// Range: 0x8021A110 -> 0x8021A144
void EIWallPart::operator delete(void * p /* r31 */) {}

// Range: 0x8021A144 -> 0x8021A470
// this: r29
EIFenceWall::EIFenceWall(enum TileWallsSegment & seg /* r30 */, class CTilePt & tile /* r31 */, enum WallStyle style /* r28 */) {
    // Local variables
    unsigned int modelid; // r4
    class EMat4 mRot; // r1+0x58
    class EWallSetup setup; // r1+0x48
    class EVec2 vWallOff; // r1+0x30
    class CTilePt ptThis; // r1+0xC
    class CTilePt ptOther; // r1+0x8
    class FTilePt fPtThis; // r1+0x28
    class FTilePt fPtOther; // r1+0x20

    // References
    // -> class EGlobal _globals;
    // -> class EWallSetup g_wallConfigs[6];
    // -> int m_nInstances;
    // -> struct [anonymous] __vt__11EIFenceWall;
}

// Range: 0x8021A470 -> 0x8021A518
// this: r30
EIFenceWall::~EIFenceWall() {
    // References
    // -> int m_nInstances;
    // -> struct [anonymous] __vt__11EIFenceWall;
}

// Range: 0x8021A518 -> 0x8021A598
void WallLocation(signed short & loc /* r29 */, signed short & lightLoc /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x8021A598 -> 0x8021A648
// this: r30
void EIWallPart::GetShadowModel() {
    // Local variables
    unsigned int shadowId; // r31
    signed short location; // r1+0xA
    signed short lightLoc; // r1+0x8

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8021A648 -> 0x8021A778
// this: r30
EIWallPart::EIWallPart() {
    // References
    // -> struct [anonymous] __vt__10EIWallPart;
}

// Range: 0x8021A778 -> 0x8021A864
// this: r25
void EIWallPart::OptimizeOrderTable() {
    // Local variables
    class ESubModel & sm; // r28
    int whichWallShader; // r27
    int cSubModelShader; // r26
    int nSMShaders; // r0
    class ESubModelShader & sms; // r0

    // References
    // -> static unsigned int kWallShaderOrder[5];
}

// Range: 0x8021A864 -> 0x8021AC04
// this: r31
EIWallPart::EIWallPart(class TileWalls & walls /* r25 */, enum TileWallsSegment seg /* r26 */, enum DiagonalSideSelector side /* r28 */, const class CTilePt & point /* r27 */) {
    // Local variables
    float rotAngle; // r1+0x10
    enum WallPattern pattern; // r0
    unsigned int wallpaperShaderId; // r4
    class EMat4 mat; // r1+0x38
    const class EVec2 & voff; // r28
    class CTilePt ptThis; // r1+0xC
    class CTilePt ptOther; // r1+0x8
    class FTilePt fPtThis; // r1+0x30
    class FTilePt fPtOther; // r1+0x28

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__10EIWallPart;
}

// Range: 0x8021AC04 -> 0x8021AD98
// this: r30
void EIWallPart::SetOrient(const class EMat4 & mat /* r31 */) {
    // Local variables
    class EVec2 worldPos; // r1+0x8
}

// Range: 0x8021AD98 -> 0x8021AE58
// this: r30
unsigned int EIWallPart::VisibilityTest(class E3DWindow & win /* r31 */) {
    // Local variables
    const class EVec3 & cameraPos; // r0
    float dot; // f1
    int status; // r31
}

// Range: 0x8021AE58 -> 0x8021AE5C
void EIFenceWall::Draw() {}

// Range: 0x8021AE5C -> 0x8021AE60
void EIWallPart::Draw() {}

// Range: 0x8021AE60 -> 0x8021AF30
// this: r30
void EIWallPart::DrawShadow(struct ELevelDrawData & renderParam /* r31 */) {
    // Local variables
    const class EVec3 & light; // r0
    float dot; // f1
}

// Range: 0x8021AF30 -> 0x8021B1A4
void EIWallPart::DrawOutsideShadows(const class TNodeList & list /* r28 */, const class EVec3 & light /* r24 */, struct ELevelDrawData & renderParam /* r30 */) {
    // Local variables
    class EVec3 shadowLight; // r1+0x8
    float kx; // f30
    float ky; // f29
    class EBound3 bbox; // r1+0x30
    float * start; // r4
    int fxMinZ; // r26
    int fyMinZ; // r27
    int fxMaxZ; // r25
    int fyMaxZ; // r24
    int tmp; // r0
    int tmp; // r0
    class NLIteratorPtrType * i; // r31
    class EIWallPart * wall; // r24
    float dot; // f0
    const class EBound3 & bboxModel; // r25
    const float * array; // r0
    class EBound3 rect; // r1+0x18
}

// Range: 0x8021B1A4 -> 0x8021B1AC
signed short EIWallPart::GetAdjacentRoom() {}

// Range: 0x8021B1AC -> 0x8021B358
// this: r29
void EIWallPart::GetPoint(class CTilePt & outPt /* r30 */, unsigned char offsetDiagonals /* r31 */) {}

// Range: 0x8021B358 -> 0x8021B640
// this: r29
void EIWallPart::GetPoints(class CTilePt & outPtOther /* r30 */) {}

// Range: 0x8021B640 -> 0x8021B6F0
// this: r29
void EIWallPart::GetPoints(class EVec2 & pt1 /* r30 */, class EVec2 & pt2 /* r31 */) {}

// Range: 0x8021B6F0 -> 0x8021B700
// this: r5
void EIWallPart::GetNormal() {}

// Range: 0x8021B700 -> 0x8021B7C4
// this: r30
EIWallPart::~EIWallPart() {
    // References
    // -> struct [anonymous] __vt__10EIWallPart;
}

// Range: 0x8021B7C4 -> 0x8021BC60
// this: r27
void EIWallPart::GetWallModelId(const class CTilePt & point /* r28 */, const class TileWalls & walls /* r29 */, enum TileWallsSegment seg /* r30 */, enum DiagonalSideSelector side /* r24 */, float & rotAngle /* r23 */) {
    // Local variables
    int segIndex; // r26
    enum WallTypes wallPiece; // r0
    enum WallStyle style; // r26
    class ObjectIterator objitr; // r1+0x24
    class cXObject * pObj; // r26
    class cXPortal * pPortal; // r0
    int cutoutStyle; // r3
    enum EPortalType portalType; // r26
    class ISimInstance * pInstance; // r0
    class ObjectIterator objitr; // r1+0x18
    class cXObject * pObj; // r25
    class cXPortal * pPortal; // r0
    class ObjSelector * pMasterSel; // r0
    class CTilePt neighborPoint; // r1+0x8
    unsigned char isWindowOnWall; // r24
    class ObjectIterator nitr; // r1+0xC
    class cXObject * pnObj; // r23
    class cXPortal * pNPortal; // r0
    unsigned char inNHoodMode; // r0
    int cutoutStyle; // r3
    enum EPortalType portalType; // r23

    // References
    // -> class EModelManager _modelman;
    // -> struct DiagWallTable g_diagWallTable;
    // -> class GameData _gd;
    // -> struct WallTable g_wallTable;
    // -> enum WallTypes (* _wallEndCapFnTab[8])(class CTilePt &, class TileWalls &, enum TileWallsSegment, enum DiagonalSideSelector);
}

// Range: 0x8021BC60 -> 0x8021BCF8
// this: r29
void EIWallPart::ChangeWallpaper(unsigned int id /* r30 */) {
    // Local variables
    class ERShader * pNewShader; // r0

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8021BCF8 -> 0x8021BD88
class ERShader * EIWallPart::GetWallpaperShader() {
    // Local variables
    class ERModel * model; // r0
}

// Range: 0x8021BD88 -> 0x8021BE04
// this: r29
void EIWallPart::SetVisible(unsigned char vis /* r30 */) {
    // Local variables
    unsigned int flags; // r31
}

// Range: 0x8021BE04 -> 0x8021BE34
unsigned char EIWallPart::GetVisible() {}

// Range: 0x8021BE34 -> 0x8021BF74
// this: r31
void EIWallPart::SetWallState(enum EWallUpDownStateType state /* r30 */) {}

// Range: 0x8021BF74 -> 0x8021C000
// this: r28
EFenceWall::EFenceWall(enum TileWallsSegment & theSeg /* r29 */, class CTilePt & thePt /* r30 */, enum WallStyle style /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10EFenceWall;
}

// Range: 0x8021C000 -> 0x8021C05C
void * ERoomWall::operator new(unsigned long size /* r30 */) {
    // Local variables
    void * ptr; // r31
}

// Range: 0x8021C05C -> 0x8021C090
void ERoomWall::operator delete(void * ptr /* r31 */) {}

// Range: 0x8021C090 -> 0x8021C298
// this: r26
ERoomWall::ERoomWall(enum TileWallsSegment theSeg /* r27 */, enum DiagonalSideSelector side /* r28 */, class CTilePt & thePt /* r29 */, unsigned char doAlloc /* r30 */) {
    // Local variables
    class TileWalls walls; // r1+0x18
    class Room * r1; // r1+0x14
    class Room * r2; // r1+0x10
    enum Sides s1; // r1+0xC
    enum Sides s2; // r1+0x8
    class cFixedWorld * gWorld; // r0
    unsigned short room; // r0
    class RoomManager * roommgr; // r0

    // References
    // -> struct [anonymous] __vt__9ERoomWall;
}

// Range: 0x8021C298 -> 0x8021C370
// this: r28
ERoomWall::~ERoomWall() {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class NLIteratorPtrType * next; // r30
    class EIWallPart * pData; // r0

    // References
    // -> struct [anonymous] __vt__9ERoomWall;
}

// Range: 0x8021C370 -> 0x8021C84C
void ERoomWall::GetWallDims(enum TileWallsSegment seg /* r27 */, enum DiagonalSideSelector side /* r28 */, class EVec3 & v0 /* r29 */, class EVec3 & v1 /* r30 */) {
    // Local variables
    const class EVec2 & vOff; // r31
    class EVec3 vdiagoff; // r1+0x50
    class EVec3 vline; // r1+0x44
    class EVec3 vlineNorm; // r1+0x38
    class EVec3 vline; // r1+0x2C
    class EVec3 vlineNorm; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8021C84C -> 0x8021C8C0
void ERoomWall::SetWallUpDownMode(enum EWallUpDownStateType mode /* r29 */, unsigned char bForceUpdate /* r30 */) {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class EIWallPart * pData; // r0
}

// Range: 0x8021C8C0 -> 0x8021C944
// this: r26
void ERoomWall::AddTile(const class CTilePt & tilePt /* r27 */, class TileWalls & walls /* r28 */, enum TileWallsSegment seg /* r29 */, enum DiagonalSideSelector side /* r30 */, unsigned char doAlloc /* r31 */) {}

// Range: 0x8021C944 -> 0x8021CD04
// this: r28
void ERoomWall::DrawWall(class ERC * prc /* r29 */) {
    // Local variables
    class EVec3 v0; // r1+0x20
    class EVec3 v1; // r1+0x14
    int tilerep; // r0
    struct EGEVert * v; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8021CD04 -> 0x8021CD60
void ERoomWall::getWallNormalOnSideOfCursor(class EVec2 & vNorm /* r31 */) {
    // Local variables
    class EVec3 vWallDir; // r1+0x14
}

// Range: 0x8021CD60 -> 0x8021D0F4
// this: r28
int ERoomWall::DrawWallpaperPreview(class ERC * prc /* r30 */, const class EVec2 & vCursorPos /* r27 */) {
    // Local variables
    class EVec3 v0; // r1+0x58
    class EVec3 v1; // r1+0x4C
    int wallCount; // r31
    class EVec2 vNorm; // r1+0x20
    int tilerep; // r0
    struct EGEVert * v; // r27
}

// Range: 0x8021D0F4 -> 0x8021D1FC
// this: r31
ERoom::ERoom() {}

// Range: 0x8021D254 -> 0x8021D388
// this: r30
ERoom::~ERoom() {}

// Range: 0x8021D388 -> 0x8021D4A0
// this: r25
void ERoom::InitRoomLookupTab() {
    // Local variables
    int i; // r29
    class TNodeList * plist; // r3
    class NLIteratorPtrType * i; // r28
    class ERoomWall * pData; // r27
    unsigned int roomid; // r26
    class RBIteratorPtrType * iRoomList; // r0
    class TNodeList * pOldList; // r0
    struct ERoomOcclude * pRoomOcclude; // r0
}

// Range: 0x8021D4A0 -> 0x8021D524
int ERoom::GetNumWalls() {
    // Local variables
    int numWalls; // r31
    class RBIteratorPtrType * iRoomList; // r0
    class TNodeList * plist; // r0
    class NLIteratorPtrType * i; // r30
    class ERoomWall * pData; // r0
}

// Range: 0x8021D524 -> 0x8021D5E8
// this: r31
int ERoom::DrawWallpaperPreview(class ERC * prc /* r28 */, unsigned short room /* r30 */, const class EVec2 & vCursorPos /* r29 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r0
    int wallCount; // r31
    class TNodeList * plist; // r0
    class NLIteratorPtrType * i; // r30
    class ERoomWall * pData; // r0
}

// Range: 0x8021D5E8 -> 0x8021D610
class TNodeList * ERoom::GetWallListByDirection() {}

// Range: 0x8021D610 -> 0x8021D670
unsigned char ERoom::IsRoomWallsOpaque(int player /* r31 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r0
    struct ERoomOcclude * pRoomOcclude; // r0
}

// Range: 0x8021D670 -> 0x8021D754
// this: r26
void ERoom::CalAllRoomOpaque(int player /* r25 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r28
    class RBIteratorPtrType * iRoomOcclude; // r27
    class TNodeList * roomWallList; // r26
    struct ERoomOcclude * pRoomOcclude; // r0
    class NLIteratorPtrType * roomWallListIdx; // r26
    class ERoomWall * pRoomWall; // r0
}

// Range: 0x8021D754 -> 0x8021D7B4
unsigned char ERoom::IsRoomRoofOpaque(int player /* r31 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r0
    struct ERoomOcclude * pRoomOcclude; // r0
}

// Range: 0x8021D7B4 -> 0x8021DA4C
// this: r21
void ERoom::CalRoofOpaque(int player /* r27 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r29
    class RBIteratorPtrType * iRoomOcclude; // r28
    const class EVec2 & vOff; // r0
    class EBound3 boundingBox; // r1+0x38
    class TNodeList * roomWallList; // r22
    struct ERoomOcclude * pRoomOcclude; // r0
    class NLIteratorPtrType * iRoomWallList; // r22
    unsigned char bFirst; // r21
    class ERoomWall * pRoomWall; // r0
    class EVec3 vec; // r1+0x14
    class EVec3 vec1; // r1+0x8
    class ERLevel * level; // r0
    int i; // r21
    class EBound3 roofBound; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8021DA4C -> 0x8021DBA4
// this: r25
void ERoom::CalShortDistToCam(int player /* r26 */) {
    // Local variables
    class RBIteratorPtrType * iRoomList; // r29
    class RBIteratorPtrType * iRoomOcclude; // r28
    class TNodeList * roomWallList; // r27
    struct ERoomOcclude * pRoomOcclude; // r0
    class NLIteratorPtrType * roomWallListIdx; // r27
    class ERoomWall * pRoomWall; // r0
    float dist; // f0
}

// Range: 0x8021DBA4 -> 0x8021DC18
void SetAllUpOrDownForList(unsigned char up /* r30 */) {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class ERoomWall * pData; // r0
}

// Range: 0x8021DC18 -> 0x8021DCC0
// this: r30
void ERoom::SetWallState() {}

// Range: 0x8021DCC0 -> 0x8021DDFC
unsigned char EIWallPart::DoFadeCollisonWallList() {
    // Local variables
    class NLIteratorPtrType * iter; // r29
    unsigned char oneFaded; // r28
    float fAlpha; // f0
    class EIWallPart * pData; // r27
    class EBound3 wallBounds; // r1+0x8

    // References
    // -> class HeightFade g_heightFade;
    // -> class TrapezoidFade _interestFade;
}

// Range: 0x8021DDFC -> 0x8021DE6C
void EIWallPart::DoFadeCollisonForList(class TrapezoidFade & interestFade /* r30 */) {
    // Local variables
    class NLIteratorPtrType * iter; // r31
    class ERoomWall * pData; // r0
}

// Range: 0x8021DE6C -> 0x8021DF84
// this: r29
void ERoom::UpdateWallFade(int player /* r30 */) {
    // References
    // -> class TrapezoidFade _interestFade;
    // -> class WallFadeParms * s_wallFadeParms;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8021DF84 -> 0x8021E02C
// this: r31
void ERoom::Init() {
    // Local variables
    int wallcount; // r1+0xC
    int tilecount; // r1+0x8

    // References
    // -> unsigned int m_tileCount;
    // -> unsigned int m_wallCount;
    // -> class EGlobal _globals;
}

// Range: 0x8021E02C -> 0x8021E244
// this: r25
void ERoom::ProcStandardWalls(unsigned char row /* r26 */, int & wallcount /* r27 */, int & tilecount /* r28 */, unsigned char doAlloc /* r29 */) {
    // Local variables
    class cFixedWorld * gWorld; // r30
    struct ProcStandardWallsInfo listTab[2][2]; // r1+0x28
    class ERoomWallPtr curEWall; // r1+0x24
    int k; // r24
    int size1; // r1+0x20
    int size2; // r1+0x1C
    int i; // r23
    class TNodeList & curList; // r22
    enum TileWallsSegment theSeg; // r21
    int segidx; // r20
    int j; // r19
    class CTilePt thePt; // r1+0x18
    class TileWalls walls; // r1+0x48
}

// Range: 0x8021E244 -> 0x8021E4C8
// this: r19
void ERoom::ProcDiagonalWalls(int & wallcount /* r20 */, int & tilecount /* r21 */, unsigned char doAlloc /* r22 */) {
    // Local variables
    class cFixedWorld * gWorld; // r30
    int xSize; // r29
    int ySize; // r28
    class ERoomWallPtr curEWall[2]; // r1+0x20
    int k; // r27
    int jstart; // r0
    int i; // r26
    int j; // r25
    int xstart; // [invalid]
    int ystart; // [invalid]
    int x; // r24
    int y; // r23
    class CTilePt thePoint; // r1+0x1C
    class TileWalls walls; // r1+0x54
    class CTilePt thePoint; // r1+0x18
    class TileWalls walls; // r1+0x28
}

// Range: 0x8021E4C8 -> 0x8021E7F8
// this: r20
void ERoom::ProcessCell(class TNodeList & curList /* r21 */, class ERoomWallPtr & curEWall /* r22 */, class CTilePt & thePt /* r23 */, enum TileWallsSegment theSeg /* r1+0x8 */, enum DiagonalSideSelector side /* r24 */, class TileWalls & walls /* r25 */, int segidx /* r26 */, int & wallcount /* r27 */, int & tilecount /* r28 */, unsigned char doAlloc /* r29 */) {
    // Local variables
    unsigned char hasWall; // r0
    enum WallStyle style; // r30

    // References
    // -> unsigned char (* _WallSplitTestFnTab[6])(class TileWalls &, class CTilePt &);
}

// Range: 0x8021E7F8 -> 0x8021EAB8
// this: r26
enum ERoomWallBuildReturnCode ERoom::PreviewWallBuild(unsigned char testFences /* r25 */) {
    // Local variables
    int nRooms; // r31
    class RoomManager * pRoomman; // r30
    const class map & roomlist; // r29
    struct rbtree_iterator roomItr; // r1+0x20
    int maxRoomId; // r0
    class Room * pRoom; // r28
    int nfences; // r28
    class cFixedWorld & world; // r29
    int xSize; // r30
    int ySize; // r31
    class CTilePt point; // r1+0x1C
    class TileWalls walls; // r1+0x50
    unsigned char x; // r27
    unsigned char y; // r26
    enum TileWallsSegment seg; // r25
    int wallcount; // r1+0x18
    int tilecount; // r1+0x14
}

// Range: 0x8021EAB8 -> 0x8021EB24
int ERoomWall::CountWalls() {
    // Local variables
    int count; // r31
    class NLIteratorPtrType * i; // r30
    class EIWallPart * pData; // r0
}

// Range: 0x8021EB24 -> 0x8021ED08
// this: r26
unsigned char ERoomWall::HasSegment(class CTilePt & c0 /* r27 */, class CTilePt & c1 /* r28 */) const {
    // Local variables
    enum eCTilePtDir tileDir; // r0
    unsigned char c0in; // r30
    unsigned char c1in; // r29
    class CTilePt cCur; // r1+0x10

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8021ED08 -> 0x8021EE94
// this: r28
int ERoomWall::DeleteWallAtTile(class CTilePt & tile /* r29 */) {
    // Local variables
    class cFixedWorld & world; // r31
    class CTilePt adjTile; // r1+0xC
    class TileWalls walls; // r1+0x3C
    int ObjectID; // r1+0x8
    enum WallStyle style; // r30
}

// Range: 0x8021EE94 -> 0x8021EFA0
// this: r30
void ERoomWall::RemoveWallsFromWorld() {
    // Local variables
    enum eCTilePtDir tileDir; // r0
    class CTilePt cCur; // r1+0x10

    // References
    // -> class CTilePt sDirections[8];
}

// Range: 0x8021EFA0 -> 0x8021F02C
class ERoomWall * ERoom::FindWallContainingSegment(enum TileWallsSegment seg /* r27 */, class CTilePt & c0 /* r28 */, class CTilePt & c1 /* r29 */) {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class ERoomWall * pData; // r30
}

// Range: 0x8021F02C -> 0x8021F100
class EIWallPart * ERoomWall::GetWallAtTile(class CTilePt & tile /* r29 */) {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class EIWallPart * pData; // r30
    class CTilePt pt; // r1+0x8
}

// Range: 0x8021F100 -> 0x8021F1CC
class EIWallPart * ERoom::GetWallFromTileAndSegment(enum TileWallsSegment seg /* r27 */, class CTilePt & c0 /* r28 */) {
    // Local variables
    int i; // r30
    class TNodeList * pList; // r29
    class ERoomWall * pTempWall; // r0
    class NLIteratorPtrType * nli; // r29
    class ERoomWall * pCurWall; // r0
    class EIWallPart * pRetVal; // r0
}

// Range: 0x8021F1CC -> 0x8021F2CC
void ERoom::DeleteERoomWallContainingSegment(class CTilePt & c0 /* r8 */) {
    // Local variables
    class ERoomWall * pWall; // r0
    class ERoomWall * pWall; // r0
    class ERoomWall * pWall; // r0
    class ERoomWall * pWall; // r0
    class ERoomWall * pWall; // r0
    class ERoomWall * pWall; // r0
}

// Range: 0x8021F2CC -> 0x8021F410
int ERoom::DeleteWallAtTile(const class CTilePt & inTile /* r27 */, class TileWalls & theWalls /* r28 */, enum TileWallsSegment theSeg /* r29 */) {
    // Local variables
    class cFixedWorld * gWorld; // r31
    class CTilePt adjTile; // r1+0xC
    int ObjectID; // r1+0x8
    enum WallStyle style; // r30
}

// Range: 0x8021F410 -> 0x8021F568
unsigned char ERoom::KillArchitecturalObject(enum TileWallsSegment seg /* r25 */, int & ObjectId /* r26 */, unsigned char doKill /* r27 */) {
    // Local variables
    unsigned char result; // r30
    class cXObject * obj; // r29
    class ObjectIterator i; // r1+0x8
    class cXObject * thisobj; // r28
    signed short wflags; // r0
    signed short objDir; // r0
    enum TileWallsSegment rotseg; // r0
}

// Range: 0x8021F568 -> 0x8021F5CC
WallFadeParms::WallFadeParms() {
    // References
    // -> struct [anonymous] __vt__13WallFadeParms;
}

// Range: 0x8021F5CC -> 0x8021F614
void WallFadeParms::Validate() {}


