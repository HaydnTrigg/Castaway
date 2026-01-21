/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\portal.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D4148 -> 0x800D5430
*/
// Range: 0x800D4148 -> 0x800D41AC
// this: r31
cXPortal::cXPortal() {
    // References
    // -> struct [anonymous] __vt__8cXPortal;
}

// Range: 0x800D41AC -> 0x800D4214
// this: r30
cXPortal::~cXPortal() {}

// Range: 0x800D4214 -> 0x800D4218
void cXPortal::Initialize() {}

// Range: 0x800D4218 -> 0x800D4288
// this: r30
void cXPortal::SetRouteScore(signed short routeID /* r31 */, float score /* f31 */) {
    // References
    // -> static float UNDEFINED;
}

// Range: 0x800D4288 -> 0x800D42C8
// this: r31
void cXPortal::Place() {}

// Range: 0x800D42C8 -> 0x800D446C
// this: r26
void cXPortal::ApplyWallStyle() {
    // Local variables
    class cFixedWorld * world; // r30
    class cXMTObject * obj; // r29
    class cXPortal * portal; // r28
    enum WallStyle portalWallStyle; // r27
    enum TileWallsSegment seg; // r26
    class CTilePt loc; // r1+0x8
    class TileWalls walls; // r1+0x38
}

// Range: 0x800D446C -> 0x800D4668
// this: r30
unsigned char cXPortal::CanPlace(const class FTilePt & newLoc /* r26 */, int inLevel /* r27 */, class cXObject * ontop /* r29 */, int slotNum /* r28 */) {
    // Local variables
    class FTilePt leadLoc; // r1+0x20
    class cFixedWorld * world; // r31
    class cXMTObject * obj; // r30
    class cXPortal * portal; // r29
    enum WallStyle portalwallstyle; // r0
    enum TileWallsSegment seg; // r28
    class CTilePt loc; // r1+0x8
    class TileWalls walls; // r1+0x28
    enum WallStyle style; // r0
    class FTilePt center; // r1+0x18

    // References
    // -> int gPlacementError;
}

// Range: 0x800D4668 -> 0x800D47A8
// this: r27
void cXPortal::Pickup() {
    // Local variables
    class cFixedWorld * world; // r31
    class cXMTObject * obj; // r30
    class cXPortal * portal; // r29
    enum TileWallsSegment seg; // r28
    class CTilePt loc; // r1+0x8
    class TileWalls walls; // r1+0x38
}

// Range: 0x800D47A8 -> 0x800D4830
// this: r30
class cXPortal * cXPortal::GetOtherSide() {
    // Local variables
    class cXPortal * opposite; // r31
}

// Range: 0x800D4830 -> 0x800D483C
int cXPortal::ReconType() {}

// Range: 0x800D483C -> 0x800D4954
// this: r28
void cXPortal::ReconStream(class ReconBuffer * r /* r29 */, int version /* r30 */) {
    // Local variables
    int size; // r1+0xC
    int i; // r30
    int t; // r1+0x8
}

// Range: 0x800D4954 -> 0x800D4A24
signed short cXPortal::FindAvailRouteID(class ObjectModule * module /* r26 */) {
    // Local variables
    int iNumPeople; // r0
    int iNumPortals; // r0
    signed short routeID; // r28
    int i; // r27
    class cXPerson * person; // r0
    int i; // r27
    class cXPortal * portal; // r0
}

// Range: 0x800D4A24 -> 0x800D4ABC
void cXPortal::DirtyAllRoutes(class ObjectModule * module /* r27 */) {
    // Local variables
    int iNumPortals; // r0
    int i; // r30
    class cXPortal * portal; // r0
    class vector & rt; // r29
    float * j; // r28
}

// Range: 0x800D4ABC -> 0x800D4B40
unsigned char cXPortal::InitPortalRoute(class ObjectModule * module /* r29 */, class cXObject * from /* r30 */) {
    // Local variables
    signed short routeID; // r31
}

// Range: 0x800D4B40 -> 0x800D4DEC
// this: r1+0x8
float cXPortal::GetDistToPortal(class cXPortal * other /* r24 */) {
    // Local variables
    signed short routeID; // r27
    class vector open; // r1+0x18
    class cXPortal * p; // r26
    int i; // r26
    int s; // r29
    class cXPortal * opp; // r0
    int iNumPortals; // r0
    int i; // r25
    class cXPortal * portal; // r1+0x10
    float dist; // f0
}

// Range: 0x800D4DEC -> 0x800D4E70
void cXPortal::ClearRoute(class ObjectModule * module /* r28 */, signed short routeID /* r29 */, float score /* f31 */) {
    // Local variables
    int iNumPortals; // r0
    int i; // r30
    class cXPortal * portal; // r0
}

// Range: 0x800D4E70 -> 0x800D4F28
void cXPortal::ClearRouteScores(class ObjectModule * module /* r27 */, signed short routeID /* r28 */) {
    // Local variables
    int iNumPortals; // r0
    int i; // r30
    class cXPortal * portal; // r29
    float oldScore; // f0
}

// Range: 0x800D4F28 -> 0x800D51C8
class cXPortal * cXPortal::FindBestPortal(class ObjectModule * module /* r29 */, class cXObject * start /* r30 */, class cXObject * goal /* r31 */) {
    // Local variables
    signed short routeID; // r0
    class cXPortal * bestPortal; // r22
    int iNumPortals; // r0
    int i; // r21
    int j; // r20
    unsigned short startRoom; // r0
    unsigned short goalRoom; // r0
    class cXPortal * p1; // r19
    float dist; // f28
    float distStartToI; // f0
    class cXPortal * p2; // r18
    float p2RouteScore; // f0
    float distItoJ; // f0
    float distOtherSideToJ; // f0
    float distJToGoal; // f0
}

// Range: 0x800D51C8 -> 0x800D5244
void cXPortal::FailedPortalTree(class ObjectModule * module /* r29 */, class cXPortal * to /* r30 */) {
    // Local variables
    signed short routeID; // r0
}

// Range: 0x800D5244 -> 0x800D53E4
void cXPortal::BeginningPortalTree(class ObjectModule * module /* r25 */, class cXObject * from /* r27 */, class cXPortal * to /* r26 */) {
    // Local variables
    signed short routeID; // r0
    float score; // f0
    unsigned short room; // r0
    int iNumPortals; // r0
    int i; // r28
    float newDist; // f28
    class cXPortal * portal; // r27
    float dist; // f0
}

// Range: 0x800D53E4 -> 0x800D5430
// this: r30
void cXPortal::PostLoad(int version /* r31 */) {}


