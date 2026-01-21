/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\hutio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EB278 -> 0x801EC704
*/
// Range: 0x801EB278 -> 0x801EB90C
unsigned char HUTIO::ReadHutRecipe(class HutRecipe * pHutRecipe /* r29 */, unsigned int hutFileResId /* r30 */) {
    // Local variables
    class ERBinary * pBinaryHutData; // r28
    int * pData; // [invalid]
    int dataSize; // r0
    int * pDataEnd; // r27
    int * pD; // r31
    class TNodeList floorList; // r1+0x74
    class TNodeList wallList; // r1+0x68
    class TNodeList objectList; // r1+0x5C
    class TNodeList objectFloorList; // r1+0x50
    int record; // r1+0x38
    int record_marker; // r26
    int record_size; // r25
    class CTilePt cTilePt; // r1+0x34
    int x; // r1+0x30
    int y; // r1+0x2C
    int rot; // r1+0x28
    int guid; // r1+0x24
    int x; // r1+0x20
    int y; // r1+0x1C
    class vector allTiles; // r1+0x40
    int allTilesCount; // r0
    class NLIteratorPtrType * fit; // r25
    class HRFloorRecord * rec; // r0
    class NLIteratorPtrType * wit; // r25
    class HRWallRecord * rec; // r0
    class NLIteratorPtrType * ofit; // r25
    class HRObjectFloorRecord * rec; // r0
    int minx; // r25
    int maxx; // r26
    int miny; // r27
    int maxy; // r28
    const class CTilePt * ait; // r30
    class CTilePt t; // r1+0x18
    int fCount; // r26
    class CTilePt t; // r1+0x14
    const class CTilePt * eit; // r0
    class NLIteratorPtrType * fit; // r26
    class HRFloorRecord * rec; // r28
    class NLIteratorPtrType * wit; // r26
    class HRWallRecord * rec; // r28
    class NLIteratorPtrType * oit; // r26
    class HRObjectRecord * rec; // r28

    // References
    // -> class EBinaryManager _binaryman;
}

// Range: 0x801EB90C -> 0x801EBA14
unsigned char HUTIO::RotatePoint(class CTilePt & in_cTilePt /* r28 */, class CTilePt & out_cTilePt /* r26 */, unsigned int direction /* r27 */) {
    // Local variables
    int cX; // r31
    int cY; // r30
    int ix; // r29
    int iy; // r0
    int x; // r4
    int y; // r28
}

// Range: 0x801EBA14 -> 0x801EBBC8
// this: r27
unsigned char HUTIO::PlaceHut(class HutRecipe * pHutRecipe /* r28 */, const class CTilePt & in_cOffsetPt /* r30 */, int direction /* r29 */) {
    // Local variables
    class CTilePt cTempPt; // r1+0x14
    class CTilePt cRotPt; // r1+0x10
    class CTilePt cOffsetPt; // r1+0xC
    class NLIteratorPtrType * oit; // r31
    class HRObjectRecord * rec; // r30

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801EBBC8 -> 0x801EBD24
unsigned char HUTIO::AddObject(const class CTilePt & cTilePt /* r28 */, int direction /* r29 */, int guid /* r30 */) {
    // Local variables
    class PlacementObject placer; // r1+0x18
    class cXObject * pObject; // r31
    class cXMTObject * pMTObject; // r31
    class FTilePt fpt; // r1+0x10
    class Behavior * beh; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x801EBD24 -> 0x801EBEFC
// this: r30
unsigned char HUTIO::MakeHutPlacementObject(class HutRecipe * pHutRecipe /* r31 */) {
    // Local variables
    unsigned char rc; // r27
    class ObjectModule * pObjectModule; // r26
    class ObjSelector * pGridSelector; // r25
    int cX; // r24
    int cY; // r23
    const class CTilePt * it; // r22

    // References
    // -> class GameData _gd;
}

// Range: 0x801EBEFC -> 0x801EC294
// this: r27
unsigned char HUTIO::IsValidFinalHutLocation(class HutRecipe * pHutRecipe /* r28 */, const class CTilePt & in_cTilePt /* r29 */, int in_direction /* r25 */) {
    // Local variables
    int direction; // r31
    unsigned char bIsMultiWall; // r30
    class NLIteratorPtrType * oit; // r25
    class HRObjectRecord * rec; // r0
    class ObjSelector * pSelector; // r0
    class cXMTObject * pMTObject; // r25
    class CTilePt cPlacePt; // r1+0x10
    class FTilePt fTilePt; // r1+0x20
    unsigned char bPlaceOk; // r25
    int wallCollisionCount; // r29
    class cFixedWorld * world; // r31
    class CTilePt offsetPt; // r1+0xC
    class CTilePt testPt; // r1+0x8
    signed short objectID; // r0
    class cXObject * pObj; // r28
}

// Range: 0x801EC294 -> 0x801EC3C8
// this: r25
unsigned char HUTIO::IsHutPlacementObjectInBounds(class HutRecipe * pHutRecipe /* r26 */, const class CTilePt & in_cTilePt /* r27 */, int in_direction /* r28 */) {
    // Local variables
    unsigned char rc; // r30
    int direction; // r29
    const class CTilePt * it; // r28
    class CTilePt cPlacePt; // r1+0x8
}

// Range: 0x801EC3C8 -> 0x801EC558
// this: r29
unsigned char HUTIO::PlaceHutPlacementObject(class HutRecipe * pHutRecipe /* r27 */, const class CTilePt & in_cTilePt /* r30 */, int in_direction /* r28 */) {
    // Local variables
    unsigned char bGoodPlace; // r31
    class CTilePt cPlacePt; // r1+0x8
    class FTilePt fTilePt; // r1+0x18

    // References
    // -> class GameData _gd;
}

// Range: 0x801EC558 -> 0x801EC5E0
// this: r29
void HUTIO::DeleteHutPlacementObject() {
    // References
    // -> class GameData _gd;
}

// Range: 0x801EC5E0 -> 0x801EC704
void HUTIO::SetColor(const class CTilePt & cPlacePt /* r26 */, class cXMTObject * pMTObjectLead /* r28 */, unsigned char bCanPlace /* r27 */) {
    // Local variables
    class cFixedWorld * world; // r31
    class cXMTObject * pMTObject; // r30
    unsigned char bIsValid; // r29
    class CTilePt curLoc; // r1+0xC
    class ISimInstance * pInstance; // r28
}


