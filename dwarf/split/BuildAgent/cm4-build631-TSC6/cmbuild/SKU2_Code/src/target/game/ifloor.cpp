/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ifloor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022FE98 -> 0x802311D4
*/
// Range: 0x8022FE98 -> 0x8022FED8
// this: r31
EFloorShdTblNode::EFloorShdTblNode() {}

// Range: 0x8022FF30 -> 0x8022FF8C
// this: r30
EFloorShdTblNode::~EFloorShdTblNode() {}

// Range: 0x8022FF8C -> 0x8022FFD4
// this: r31
void EFloorShdTblNode::CleanUp() {}

// Range: 0x8022FFD4 -> 0x80230014
// this: r31
EFloorStripInfo::~EFloorStripInfo() {}

// Range: 0x80230014 -> 0x8023001C
unsigned char EFloorStripInfo::GetCol1() {}

// Range: 0x8023001C -> 0x80230024
unsigned char EFloorStripInfo::GetCol0() {}

// Range: 0x80230024 -> 0x8023002C
unsigned char EFloorStripInfo::GetRow() {}

// Range: 0x8023002C -> 0x80230040
EFloorStripInfo::EFloorStripInfo() {}

// Range: 0x80230040 -> 0x80230048
void EFloorStripInfo::SetCol1() {}

// Range: 0x80230048 -> 0x80230050
void EFloorStripInfo::SetCol0() {}

// Range: 0x80230050 -> 0x80230058
void EFloorStripInfo::SetRow() {}

// Range: 0x80230058 -> 0x802300E8
unsigned char EFloorShdTblNode::CheckForObjectsInFloor() {
    // Local variables
    class ObjectIterator i; // r1+0x8
    class cXObject * pTempOb; // r31
}

// Range: 0x802300E8 -> 0x802301CC
void EvaluateFloorLights(class EVec3 & ambLight /* r29 */, class EVec3 & dirLight /* r30 */) {
    // Local variables
    const class RoomData * rd; // r31
    int nIndexOfStrongestDirectional; // r0
    float vecZ; // f0
    float angleFactor; // f0
}

// Range: 0x802301CC -> 0x802302B0
void EvaluateFloorColors(const class EVec3 & ambLight /* r27 */, const class EVec3 & dirLight /* r28 */, class EVec3 & ambDirColor /* r29 */, class EVec3 & pointMaterial /* r30 */) {
    // Local variables
    const struct EMaterial * mat; // r0
    const class EVec4 * matAmb; // r0
}

// Range: 0x802302B0 -> 0x802303A0
void EvaluateLightAtVertices(int roomId /* r20 */, const class ELightGrid & lightGrid /* r21 */, const struct LightData * lights /* r22 */, int numSpans /* r23 */, class EVec3 * outBuffer /* r24 */) {
    // Local variables
    int i; // r29
    int row; // r28
    int begin; // [invalid]
    int end; // r27
    int base; // r26
    class EVec3 pos; // r1+0x8
    int x; // r25
}

// Range: 0x802303A0 -> 0x80230524
void LightVertex(const class EVec3 & xyz /* r26 */, int roomId /* r30 */, const class ELightGrid & lightGrid /* r29 */, const struct LightData * pLights /* r27 */, class EVec3 * outColor /* r28 */) {
    // Local variables
    class EVec3 totalColor; // r1+0x38
    const signed short * lightIds; // r0
    int l; // r30
    int ix; // r0
    const struct LightData * pLight; // r29
    class EVec3 pos; // r1+0x2C
    float radius; // f29
    class EVec3 color; // r1+0x20
    class EVec3 v2l; // r1+0x14
    float dot; // f0
    float inv_len; // f0
    float angleFactor; // f2
    float distanceFactor; // f0
    float factor; // f1
}

// Range: 0x80230524 -> 0x8023052C
float NGCFastInvSqrt() {}

// Range: 0x8023052C -> 0x80230664
// this: r27
void EIFloor::DoLightingCalculation() {
    // Local variables
    class EVec3 ambLight; // r1+0x2C
    class EVec3 dirLight; // r1+0x20
    const class ELightGrid & lightGrid; // r30
    int lightRoomID; // r29
    const struct LightData * pointLights; // r0
    class EFloorTileGroup * curr; // r29
    class EVec3 ambDirColor; // r1+0x14
    class EVec3 pointColor; // r1+0x8
    int i; // r28
    const struct EFloorTileStrip * strip; // r27

    // References
    // -> static class EVec3 _lightingBuffer[3969];
}

// Range: 0x80230664 -> 0x802307C4
void LightStripVertices(const class EFloorStripInfo & strip /* r21 */, const class EVec3 * lightBuffer /* r28 */, const class EVec3 & ambDirColor /* r29 */, const class EVec3 & inColor /* r30 */, unsigned int * outColor /* r31 */) {
    // Local variables
    int row; // r26
    int dt0; // r27
    int dt1; // r0
    int col0; // r5
    int diag0; // r6
    int diag1; // r25
    int lower; // r24
    int upper; // r23
    int nBlocks; // r22
    int k; // r21
}

// Range: 0x802307C4 -> 0x80230874
void LightStripVertex() {
    // Local variables
    unsigned char * comp; // r0
}

// Range: 0x80230874 -> 0x80230910
void EFloorShdTblNode::EmptyTable() {
    // Local variables
    int iSize; // r0
    int i; // r29

    // References
    // -> class TNodeList m_stripsForLighting[40];
    // -> class EFloorShdTblNode _eFloorOrderTable[72];
    // -> unsigned char m_bTableInited;
    // -> class EGlobal _globals;
}

// Range: 0x80230910 -> 0x802309AC
// this: r31
EIFloor::EIFloor() {
    // References
    // -> struct [anonymous] __vt__7EIFloor;
}

// Range: 0x802309AC -> 0x80230BE4
// this: r30
void EIFloor::Draw(struct ELevelDrawData & renderParam /* r31 */) {
    // Local variables
    class ERC * prc; // r28
    class EFloorTileGroup * curr; // r27
    class EShader * shader; // r26
    float alpha; // f30
    class EMat4 offsetMatrix; // r1+0x8
    class EDL * dl; // r26

    // References
    // -> class ERShader * m_sCeilingShader;
    // -> class EGlobal _globals;
}

// Range: 0x80230BE4 -> 0x80230CDC
// this: r28
void EIFloor::DrawStencil(struct ELevelDrawData & renderParam /* r29 */, int stencilValue /* r30 */) {
    // Local variables
    class ERC * prc; // r31
    class EFloorTileGroup * curr; // r30
}

// Range: 0x80230CDC -> 0x80230D38
void EIFloor::DrawShadow() {
    // Local variables
    class EFloorTileGroup * curr; // r31
    class ERC * prc; // r30
}

// Range: 0x80230D38 -> 0x80230D48
// this: r5
unsigned int EIFloor::VisibilityTest() {}

// Range: 0x80230D48 -> 0x80230D90
void * EIFloor::operator new() {
    // Local variables
    class EIFloor * p; // r3

    // References
    // -> unsigned int m_nAlloced;
    // -> class FastAllocPool * g_eIFloorAllocPool;
}

// Range: 0x80230D90 -> 0x80230DC0
void EIFloor::operator delete() {
    // References
    // -> unsigned int m_nAlloced;
    // -> class FastAllocPool * g_eIFloorAllocPool;
}

// Range: 0x80230DC0 -> 0x80230E28
void EIFloor::DestroyFloors() {
    // References
    // -> void * g_pFloorAllocPoolBuffer;
    // -> class FastAllocPool * g_eIFloorAllocPool;
    // -> class TRedBlackTree m_floors;
}

// Range: 0x80230E28 -> 0x80230E2C
void EIFloor::CreateFloors() {}

// Range: 0x80230E2C -> 0x80230E74
void EIFloor::LoadCeilingShader() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class ERShader * m_sCeilingShader;
}

// Range: 0x80230E74 -> 0x80230EA8
void EIFloor::UnloadCeilingShader() {
    // References
    // -> class ERShader * m_sCeilingShader;
}

// Range: 0x80230EA8 -> 0x80230F3C
// this: r30
void EIFloor::Cleanup() {
    // Local variables
    class EFloorTileGroup * curr; // r3
    class EFloorTileGroup * temp; // r31
}

// Range: 0x80230F3C -> 0x80230F40
unsigned char EIFloor::TestCreateFloors() {}

// Range: 0x80230F40 -> 0x80230F54
char * EIFloor::GetInstName() {}

// Range: 0x80230F54 -> 0x80231114
unsigned char EFloorShdTblNode::PreviewTable() {
    // Local variables
    int nstrips; // r30
    class EFloorStripInfo curstrip; // r1+0x10
    int xSize; // r29
    int ySize; // r28
    int x; // r27
    unsigned char lastStyle; // r26
    unsigned char curStyle; // r25
    class CTilePt lastCol; // r1+0xC
    unsigned short lastRoomId; // r24
    unsigned char y; // r23
    class CTilePt pt; // r1+0x8
    enum FloorPattern floorpat; // r0
    unsigned short curRoomId; // r3

    // References
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x80231114 -> 0x802311D4
// this: r28
EFloorTileGroup::~EFloorTileGroup() {
    // Local variables
    int i; // r30

    // References
    // -> class EGraphics * _pGfx;
}


