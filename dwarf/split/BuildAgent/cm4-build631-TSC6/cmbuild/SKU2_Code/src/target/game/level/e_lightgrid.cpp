/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_lightgrid.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008A2E4 -> 0x8008BB80
*/
// Range: 0x8008A2E4 -> 0x8008A3E0
// this: r29
ELightGrid::ELightGrid() {
    // References
    // -> static signed short m_lightVertexDummy[4];
}

// Range: 0x8008A3E0 -> 0x8008A57C
// this: r29
void ELightGrid::Flush() {
    // Local variables
    int num; // r6
    struct VertexData * curr; // r7
    int i; // r0
    int i; // r30
}

// Range: 0x8008A57C -> 0x8008A5F4
// this: r29
void RoomData::Flush() {
    // Local variables
    int i; // r30
}

// Range: 0x8008A5F4 -> 0x8008A938
// this: r23
void ELightGrid::Update(const class TNodeList & lights /* r24 */, int numRooms /* r25 */) {
    // Local variables
    int numLights; // r0
    int roomId; // r28
    class RoomData * rd; // r0
    class NLIteratorPtrType * i; // r27
    class EILight * l; // r26
    signed short id; // r1+0xC
    signed short loc; // r1+0xA
    enum LightType type; // r0
    signed short portalToId; // r1+0x8
    struct LightData * ld; // r0
    struct LightData * ld; // r0
    int roomId; // r27
    float lumina; // f0
    float x; // f0

    // References
    // -> class LevelLightingTuning g_levelLightingTuning;
}

// Range: 0x8008A938 -> 0x8008AB38
// this: r29
float ELightGrid::ConnectPortalLights(class RoomData * rd /* r30 */) {
    // Local variables
    float lum; // f31
    int j; // r31
    class EILight * l; // r24
    class EVec3 pos; // r1+0x10
    struct LightWeight lw[8]; // r1+0x20
    signed short portalToRoomId; // r1+0xC
    signed short unused; // r1+0xA
    signed short myRoomId; // r1+0x8
    int i; // r6
    int ix; // r0
}

// Range: 0x8008AB38 -> 0x8008AC78
void RoomData::FindClosestLights(const class EVec3 & pos /* r23 */, int end /* r24 */, struct LightWeight * inOut /* r25 */, int numOut /* r26 */) {
    // Local variables
    int ix; // r29
    class EVec3 v2l; // r1+0x8
    float dot; // f1
    float w; // f30
    int i; // r28
    int j; // r27
}

// Range: 0x8008AC8C -> 0x8008AD30
// this: r28
int RoomData::GetStrongestDirectionalLightIndex() const {
    // Local variables
    float fMaxIntensity; // f31
    int nIndexOfStrongestDirectional; // r30
    int i; // r29
}

// Range: 0x8008AD30 -> 0x8008AE50
// this: r31
void ELightGrid::EvaluatePointLights(int begin /* r29 */, int end /* r30 */) {
    // Local variables
    class EVec3 crap; // r1+0x8
    int i; // [invalid]
}

// Range: 0x8008AE50 -> 0x8008B084
// this: r23
void ELightGrid::AddLightsToVertices() {
    // Local variables
    class EVec3 pos; // r1+0x8
    int i; // r26
    int j; // r25
    int k; // r24
    int roomId; // r20
    struct LightWeight points[4]; // r1+0x18
    int n; // r7
    int m; // r0
    float w; // f1
    int id; // r0
    int p; // r0
}

// Range: 0x8008B084 -> 0x8008B0C8
// this: r31
void ELightGrid::EvaluateLights() {}

// Range: 0x8008B0C8 -> 0x8008B284
// this: r31
void ELightGrid::EvaluateOuterLotLights() {
    // Local variables
    const class RoomData & rd; // r0
    int i; // r25
    class ESim * pSelectedSim; // r25
    class EVec3 vTargetPos; // r1+0x8
    const signed short * ids; // r0
    int i; // r25
    int ix; // r3
    struct EPointLight & p; // r27

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8008B284 -> 0x8008B2E4
// this: r29
void ELightGrid::EvaluateAmbientAndDirectionalLights() {
    // Local variables
    int i; // r30
}

// Range: 0x8008B2E4 -> 0x8008B3B4
// this: r25
void RoomData::EvaluateAmbientAndDirectionalLights() {
    // Local variables
    class EILight * l; // r0
    int i; // r26
    class EVec3 crap; // r1+0x8
}

// Range: 0x8008B3B4 -> 0x8008B424
// this: r27
void ELightGrid::EvaluatePortalLights(int end /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x8008B424 -> 0x8008B644
// this: r29
void ELightGrid::EvaluatePortalLight(struct LightData * ld /* r27 */, struct PortalData * pd /* r28 */) {
    // Local variables
    class EVec3 color; // r1+0x48
    class EIPortalPointLight * pl; // r31
    signed short otherRoom; // r1+0xA
    signed short objOtherRoom; // r1+0x8
    int nIndexOfStrongestDirectional; // r0
    class EVec3 pos; // r1+0x3C
    int i; // r30
    struct LightData * ld; // r29
    class EVec3 v2l; // r1+0x30
    float distSq; // f1
    float radius; // f0
    float distanceFactor; // f1
    class EVec3 lightColor; // r1+0x24
    float hi; // f1
    float scale; // f3
    class EVec3 crap; // r1+0x18

    // References
    // -> static float k_maxPortalColor;
    // -> static float sAmbientPortalScaler;
}

// Range: 0x8008B644 -> 0x8008B718
void MergeLightWeights() {
    // Local variables
    int i; // r8
    int k; // r8
    signed short ix; // r4
    int j; // r9
}

// Range: 0x8008B718 -> 0x8008B988
// this: r27
void ELightGrid::GetLightWeightsAtLocation(int roomId /* r28 */, struct LightWeight * lightWeights /* r29 */) {
    // Local variables
    int x; // r31
    int y; // r30
    float dx; // f1
    float dy; // f31
    float t; // f4
    const struct VertexData * vd; // r8
    float tx; // f0
    int numAssigned; // r1+0x8
    int i; // r7
    int j; // r0
    signed short ix; // r4
}

// Range: 0x8008B988 -> 0x8008BA4C
// this: r28
void ELightGrid::GetDirectional(struct EDirLight & DirLight /* r29 */) {
    // Local variables
    int nIndexOfStrongestDirectional; // r0
}

// Range: 0x8008BA4C -> 0x8008BB18
signed short * ELightGrid::GetLightsAtLocation() {
    // Local variables
    int x; // r4
    int y; // r6
    const struct VertexData * vd; // r4
    int i; // r6

    // References
    // -> static signed short m_lightVertexDummy[4];
}

// Range: 0x8008BB18 -> 0x8008BB80
// this: r31
void LightData::Clear() {}


