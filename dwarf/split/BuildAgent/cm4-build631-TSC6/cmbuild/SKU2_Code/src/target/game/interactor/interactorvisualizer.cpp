/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactorvisualizer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800669BC -> 0x8006B638
*/
// Range: 0x800669BC -> 0x80066A04
// this: r31
InteractorVisualizer::InteractorVisualizer() {}

// Range: 0x80066A5C -> 0x80066AB8
// this: r30
InteractorVisualizer::~InteractorVisualizer() {}

// Range: 0x80066AB8 -> 0x80066B74
void InteractorVisualizer::Initialize() {
    // Local variables
    int i; // r28
}

// Range: 0x80066B74 -> 0x80066BC0
// this: r30
void InteractorVisualizer::Shutdown() {}

// Range: 0x80066BC0 -> 0x80066CFC
unsigned char InteractorVisualizer::CreateResources(class FloorPainter & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r31
    class EOrderTableData tableData; // r1+0x8

    // References
    // -> static class EVec3 previewPos;
}

// Range: 0x80066CFC -> 0x80066D00
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x80066D00 -> 0x80066D70
void InteractorVisualizer::PreDraw(class FloorPainter & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
    class EOrderTableData * pTableData; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80066D70 -> 0x80067368
// this: r30
void InteractorVisualizer::Draw(class FloorPainter & interactor /* r31 */) {
    // Local variables
    const class EVec3 & snappedPos; // r28
    const class EVec3 & anchorPos; // r27
    class EMat4 cursorMat; // r1+0xC8
    class EVec3 & playerColor; // r27
    struct FloorData floorData; // r1+0x10
    float angleToRotateTo; // f31
    class EVec3 offset; // r1+0x3C
    class EMat4 anchorMat; // r1+0x88
    class EMat4 snappedMat; // r1+0x48
    class EVec3 pointerCenter; // r1+0x30
    class EVec3 anchorCenter; // r1+0x24
    class EVec3 dir; // r1+0x18
    class EVec3 & playerColor; // r0
    struct FloorData floorData; // r1+0x8

    // References
    // -> static class EVec3 green;
    // -> static class EVec3 red;
    // -> static class EVec3 white;
    // -> class GameData _gd;
    // -> class ERC * s_pERC;
}

// Range: 0x80067368 -> 0x8006770C
void InteractorVisualizer::DrawFloorRectPreview(class ERC * rc /* r31 */, const class EVec3 & v0 /* r28 */, const class EVec3 & v3 /* r29 */) {
    // Local variables
    const class EVec2 & voff; // r30
    int x0; // r3
    int y0; // r4
    int x1; // r5
    int y1; // r6
    float l; // f30
    float r; // f29
    float t; // f28
    float b; // f27
    float w; // f26
    float h; // f0
    struct EGEVert v[4]; // r1+0x28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800677B4 -> 0x80067B70
void InteractorVisualizer::DrawFloorRoomPreview(class ERC * prc /* r23 */) {
    // Local variables
    int x; // r0
    int y; // r0
    class CTilePt ctpt; // r1+0x18
    unsigned short roomID; // r27
    class RoomManager * pRoomman; // r28
    class Room * r1; // r1+0x14
    class Room * r2; // r1+0x10
    enum Sides s1; // r1+0xC
    enum Sides s2; // r1+0x8
    const class vector & tiles; // r26
    const class CTilePt * it; // r25
    const class EVec2 & voff; // r24
    float x; // f29
    float y; // f0
    float l; // f28
    float r; // f29
    float t; // f27
    float b; // f26
    struct EGEVert v[4]; // r1+0x40

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80067B70 -> 0x80067C68
unsigned char InteractorVisualizer::CreateResources(class WallPainter & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r31
    class EOrderTableData tableData; // r1+0x8
}

// Range: 0x80067C68 -> 0x80067C6C
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x80067C6C -> 0x80067CDC
void InteractorVisualizer::PreDraw(class WallPainter & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
    class EOrderTableData * pTableData; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80067CDC -> 0x80067FA4
// this: r27
void InteractorVisualizer::Draw(class WallPainter & interactor /* r28 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r29
    const class EVec3 & playerColor; // r31
    unsigned char bIsAnchorDrawingOn; // r0
    class EMat4 orientation; // r1+0x20
    unsigned char bIsDrawableSegment; // r0
    class EVec3 color; // r1+0x14
    float theta; // f0
    class EVec3 dir; // r1+0x8
    class ERShader * pShader; // r29

    // References
    // -> static class EVec3 green;
    // -> static class EVec3 red;
    // -> class ERC * s_pERC;
    // -> class GameData _gd;
}

// Range: 0x80067FA4 -> 0x800681E0
// this: r28
void InteractorVisualizer::DrawWallpaperRoomPreview(class WallPainter & interactor /* r29 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r31
    class ERShader * pShader; // r0
    class EHouse * pEhouse; // r3
    class CTilePt endTile; // r1+0xC
    class EVec3 tilePos; // r1+0x24
    class EVec3 anchorPos; // r1+0x18
    unsigned short roomid; // r0
    class EVec2 vRoomPos; // r1+0x10

    // References
    // -> static class EVec3 white;
    // -> class ERC * s_pERC;
    // -> class EGlobal _globals;
}

// Range: 0x800681E0 -> 0x800683B8
// this: r26
int InteractorVisualizer::DrawWallpaperPreviewOnAffectedWalls(class WallPainter & interactor /* r27 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r29
    class ERShader * pShader; // r0
    class EVec3 vStart; // r1+0x20
    class EVec3 vEnd; // r1+0x14
    class EVec3 vOff; // r1+0x8
    int wallsAffected; // r28

    // References
    // -> class ERC * s_pERC;
}

// Range: 0x800683B8 -> 0x80068544
unsigned char InteractorVisualizer::CreateResources(class WallManipulator & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r31
    class EOrderTableData tableData; // r1+0x8

    // References
    // -> static class EVec3 previewPos;
}

// Range: 0x80068544 -> 0x800688F4
// this: r28
int InteractorVisualizer::DrawWallpaperRectPreview(const class EVec2 & v0 /* r22 */, const class EVec2 & v1 /* r21 */, float wallH /* f31 */) {
    // Local variables
    class CTilePt startTile; // r1+0x14
    class CTilePt endTile; // r1+0x10
    enum eCTilePtDir tileDir; // r25
    enum TileWallsSegment segment; // r24
    class cFixedWorld * gWorld; // r23
    struct EGEVert * vBuf; // r22
    class TileWalls walls; // r1+0x94
    class EVec3 curPos; // r1+0x5C
    class EVec3 nextPos; // r1+0x50
    class CTilePt curTile; // r1+0xC
    class CTilePt nextTile; // r1+0x8
    int wallsAffected; // r21

    // References
    // -> class ERC * s_pERC;
    // -> class CTilePt sDirections[8];
}

// Range: 0x800688F4 -> 0x800688F8
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x800688F8 -> 0x8006896C
// this: r29
void InteractorVisualizer::PreDraw(class WallManipulator & interactor /* r30 */) {
    // Local variables
    int pid; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006896C -> 0x80068C30
// this: r28
void InteractorVisualizer::Draw(class WallManipulator & interactor /* r29 */) {
    // Local variables
    class EMat4 orientation; // r1+0x30
    class EVec3 & playerColor; // r30
    float theta; // f31
    class EVec3 dir; // r1+0x20
    class EVec3 & playerColor; // r0

    // References
    // -> static class EVec3 red;
    // -> static class EVec3 green;
    // -> class GameData _gd;
    // -> class ERC * s_pERC;
}

// Range: 0x80068C30 -> 0x80068E50
// this: r27
void InteractorVisualizer::DrawWallRectPreview(class WallManipulator & interactor /* r28 */) {
    // Local variables
    class ERShader * pShader; // r29
    float rep; // f30
    class InteractorResourceSet * pResourceSet; // r29
    class EVec2 delta; // r1+0x10
    class EVec2 normal; // r1+0x8
}

// Range: 0x80068E50 -> 0x80069298
void InteractorVisualizer::DrawVerticalRect(const class EVec2 & v0 /* r20 */, const class EVec2 & v1 /* r21 */, float height /* f28 */, int texGenMode /* r22 */, float rep /* f29 */) {
    // Local variables
    struct ELights lights; // r1+0x50
    int num_x; // r0
    int num_y; // r24
    int numBars; // r31
    int xyzwBufferSize; // r23
    int stBufferSize; // r25
    void * vertexData; // r3
    float * xyzwBuffer; // r30
    float * stBuffer; // r29
    float * xyzw; // r28
    float * st; // r27
    signed char * avNormals; // r26
    signed char * pNormal; // r25
    float x; // f31
    float y; // f30
    class EVec2 delta; // r1+0x38
    class EVec2 stUp; // r1+0x30
    class EVec2 stRight; // r1+0x28
    float s; // f27
    float t; // f26
    int i; // r22

    // References
    // -> class ERC * s_pERC;
}

// Range: 0x80069298 -> 0x800694D4
// this: r29
void InteractorVisualizer::DrawRoomPreview(class WallManipulator & interactor /* r30 */) {
    // Local variables
    class EVec3 anchorPos; // r1+0x2C
    class EVec3 pos; // r1+0x20
    class ERShader * pShader; // r31
    class InteractorResourceSet * pResourceSet; // r27
    class EVec3 corners[4]; // r1+0x38
    unsigned char drawWithWallPreview; // r28
    int i; // r26
    float rep; // f31
    float wallheight; // f30
    int texgenmode; // r26
    int i; // r27
}

// Range: 0x800694D4 -> 0x8006995C
// this: r23
int InteractorVisualizer::DrawPreviewOnAffectedWalls(class WallManipulator & interactor /* r31 */, class EVec3 & vStart /* r22 */, class EVec3 & vEnd /* r21 */) {
    // Local variables
    class CTilePt startTile; // r1+0x14
    class CTilePt endTile; // r1+0x10
    class EVec3 vOff; // r1+0x50
    class ERShader * pShader; // r27
    class InteractorResourceSet * pResourceSet; // r0
    enum eCTilePtDir tileDir; // r25
    enum TileWallsSegment segment; // r24
    class cFixedWorld * gWorld; // r23
    class TileWalls walls; // r1+0x88
    struct EGEVert * vBuf; // r22
    class EVec3 curPos; // r1+0x44
    class EVec3 nextPos; // r1+0x38
    class CTilePt curTile; // r1+0xC
    class CTilePt nextTile; // r1+0x8
    int wallsAffected; // r21
    unsigned char pieceFound; // r3

    // References
    // -> class ERC * s_pERC;
    // -> class CTilePt sDirections[8];
}

// Range: 0x8006995C -> 0x80069A54
unsigned char InteractorVisualizer::CreateResources(class ObjectManipulator & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r31
    class EOrderTableData tableData; // r1+0x8
}

// Range: 0x80069A54 -> 0x80069A58
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x80069A58 -> 0x80069AB8
void InteractorVisualizer::PreDraw(class ObjectManipulator & interactor /* r30 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
    class EOrderTableData * pTableData; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80069AB8 -> 0x80069B0C
// this: r29
void InteractorVisualizer::DrawBPVisuals(class ERC * rc /* r30 */, class Interactor & interactor /* r31 */) {}

// Range: 0x80069B0C -> 0x80069F68
// this: r31
void InteractorVisualizer::DrawBPWallCaps(class Interactor & interactor /* r18 */) {
    // Local variables
    int directionLookup[4]; // r1+0xA8
    class EHouse * pEhouse; // r8
    class ERoom * pEroom; // r29
    class cFixedWorld * gWorld; // r28
    class InteractorResourceSet * pResourceSet; // r30
    class ERShader * pWallShader; // r27
    class ERShader * pDoorShader; // r26
    class ERShader * pWindowShader; // r25
    class ERShader * pDoorSweepShader; // r24
    int i; // r23
    class TNodeList * pRoomList; // r0
    class NLIteratorPtrType * ri; // r22
    class ERoomWall * pData; // r0
    class NLIteratorPtrType * wi; // r21
    class EIWallPart * pPart; // r20
    class CTilePt wallTile1; // r1+0xC
    class CTilePt wallTile2; // r1+0x8
    class TileWalls theWalls; // r1+0xB8
    enum eCTilePtDir tileDir; // r0
    enum TileWallsSegment wallSeg; // r19
    enum WallStyle style; // r19
    class ERShader * pShader; // r19
    unsigned char isDoor; // r18
    class EVec2 pos1; // r1+0xA0
    class EVec2 pos2; // r1+0x98
    class EVec2 normal; // r1+0x90
    class EVec2 pos1Draw; // r1+0x88
    class EVec2 pos2Draw; // r1+0x80

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80069F68 -> 0x8006A298
void InteractorVisualizer::DrawWallCapQuad(class EVec2 & v0 /* r25 */, class EVec2 & v1 /* r26 */, class EVec2 & n /* r27 */, float height /* f31 */) {
    // Local variables
    struct ELights lights; // r1+0x20
    void * vertexData; // [invalid]
    float * xyzwBuffer; // r30
    float * xyzw; // r0
    float * stBuffer; // r29
    signed char * avNormals; // r28
    signed char * pNormal; // r0
    int i; // r0

    // References
    // -> class ERC * s_pERC;
}

// Range: 0x8006A298 -> 0x8006A658
// this: r28
void InteractorVisualizer::DrawBPGrid(class ERC * rc /* r30 */, class Interactor & interactor /* r31 */) {
    // Local variables
    class cFixedWorld * world; // r29
    int x1; // r28
    int y1; // r3
    float l; // f29
    float r; // f28
    float t; // f27
    float b; // f26
    float k_z; // f0
    int lotId; // r0
    float w; // f25
    float h; // f0
    struct EGEVert v[4]; // r1+0x38
    class BluePrintGrid * pBPG; // r0

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
    // -> class ERC * s_pERC;
}

// Range: 0x8006A658 -> 0x8006A784
// this: r28
void InteractorVisualizer::Draw(class ObjectManipulator & interactor /* r29 */) {
    // Local variables
    const class EVec3 & playerColor; // r30
    const class EVec3 & pos; // r0
    class EMat4 cursorMat; // r1+0x8
    int lotId; // r0
    float elevation; // f3
    class PlacementObject & placementObject; // r30

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> class ERC * s_pERC;
}

// Range: 0x8006A784 -> 0x8006A7C4
unsigned char InteractorVisualizer::CreateResources() {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
}

// Range: 0x8006A7C4 -> 0x8006A7C8
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x8006A7C8 -> 0x8006A864
// this: r29
void InteractorVisualizer::PreDraw(class SimInteractor & interactor /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006A864 -> 0x8006A9D8
// this: r27
void InteractorVisualizer::Draw(class SimInteractor & interactor /* r28 */) {
    // Local variables
    class PlumbBob * pPlumbBob; // r31
    class cXPerson * sim; // r30
    class EVec3 & playerColor; // r30
    int i; // r31
    class FadeSquare * square; // r29
    class EVec3 & cursorPos; // r0
    float scale; // f31
    class EMat4 cursorMat; // r1+0x8

    // References
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class ERC * s_pERC;
    // -> class EGlobal _globals;
}

// Range: 0x8006A9D8 -> 0x8006AA18
unsigned char InteractorVisualizer::CreateResources() {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
}

// Range: 0x8006AA18 -> 0x8006AA1C
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x8006AA1C -> 0x8006AAB8
// this: r29
void InteractorVisualizer::PreDraw(class RayInteractor & interactor /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006AAB8 -> 0x8006AB60
void InteractorVisualizer::Draw() {
    // Local variables
    class PlumbBob * pPlumbBob; // r30
    class cXPerson * pSim; // r29

    // References
    // -> class ERC * s_pERC;
    // -> class EGlobal _globals;
}

// Range: 0x8006AB60 -> 0x8006AB68
unsigned char InteractorVisualizer::CreateResources() {}

// Range: 0x8006AB68 -> 0x8006AB70
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x8006AB70 -> 0x8006AC0C
// this: r29
void InteractorVisualizer::PreDraw(class DirectInteractor & interactor /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006AC0C -> 0x8006ACB4
void InteractorVisualizer::Draw() {
    // Local variables
    class PlumbBob * pPlumbBob; // r30
    class cXPerson * pSim; // r29

    // References
    // -> class ERC * s_pERC;
    // -> class EGlobal _globals;
}

// Range: 0x8006ACB4 -> 0x8006ACBC
unsigned char InteractorVisualizer::CreateResources() {}

// Range: 0x8006ACBC -> 0x8006ACC4
unsigned char InteractorVisualizer::DestroyResources() {}

// Range: 0x8006ACC4 -> 0x8006AD60
// this: r29
void InteractorVisualizer::PreDraw(class SocialModeInteractor & interactor /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006AD60 -> 0x8006AD64
void InteractorVisualizer::Draw() {}

// Range: 0x8006AD64 -> 0x8006AE14
void InteractorVisualizer::InteractorOrderTableCallback(struct ELevelDrawData & renderParam /* r29 */, class EOrderTableData * otd /* r30 */) {
    // Local variables
    class Interactor * pInteractor; // r31
    class InteractorVisualizer * pVisualizer; // r30

    // References
    // -> class ERC * s_pERC;
}

// Range: 0x8006AE14 -> 0x8006AE74
// this: r30
void InteractorVisualizer::SetupDrawCallback(int playerId /* r31 */) {
    // Local variables
    class Interactor * pInteractor; // r0
}

// Range: 0x8006AE74 -> 0x8006AED8
unsigned char InteractorVisualizer::SelectShader(int shaderId /* r31 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
    class ERShader * pShader; // r0

    // References
    // -> class ERC * s_pERC;
}

// Range: 0x8006AED8 -> 0x8006B2DC
// this: r26
void InteractorVisualizer::Draw(class PlacementObject & placementObject /* r23 */, class EVec3 & pos /* r27 */) {
    // Local variables
    class cXMTObject * pGridObject; // r24
    class cXObject * pObjectInHand; // r25
    class ISimInstance * pGridInstance; // r31
    class ISimInstance * pObjectInHandInstance; // r30
    class ERModel * pGridModel; // r29
    class ERModel * pObjectModel; // r28
    class EMat4 mat44; // r1+0x20
    class cXMTObject * mtobj; // r24
    class ISimInstance * pGridTileInstance; // r23
    class cXMTObject * mtobjimpl; // r0
    class EAnimController * pAnimController; // r23

    // References
    // -> class ERC * s_pERC;
    // -> static float yOffset;
    // -> static float xOffset;
    // -> class EGlobal _globals;
}

// Range: 0x8006B2DC -> 0x8006B40C
// this: r26
void InteractorVisualizer::DrawResource(int modelId /* r29 */, const class EVec3 & color /* r27 */, class EMat4 * pOrientMat /* r28 */) {
    // Local variables
    class InteractorResourceSet * pResourceSet; // r0
    class ERModel * pModel; // r30
    class ESimsCam * pCam; // r29
    float swapTmp; // f1

    // References
    // -> class ERC * s_pERC;
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class EGlobal _globals;
}

// Range: 0x8006B40C -> 0x8006B4E4
// this: r30
class InteractorResourceSet * InteractorVisualizer::CreateResourceSet(class Interactor & interactor /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class InteractorResourceSet insertSet; // r1+0x11C
    struct pair result; // r1+0x18
}

// Range: 0x8006B4F8 -> 0x8006B56C
// this: r30
unsigned char InteractorVisualizer::DestroyResourceSet(class Interactor & interactor /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r31
}

// Range: 0x8006B56C -> 0x8006B5DC
// this: r30
class InteractorResourceSet * InteractorVisualizer::GetInteractorResourceSet(class Interactor * pInteractor /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
}

// Range: 0x8006B5DC -> 0x8006B638
// this: r31
void InteractorVisualizer::SetDefaultLights() {
    // References
    // -> class ERC * s_pERC;
    // -> static class EVec3 white;
}


