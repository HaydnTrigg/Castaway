/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\mtobject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80124064 -> 0x801257A4
*/
// Range: 0x80124064 -> 0x801240E4
// this: r30
cXMTObject::cXMTObject(class cXMTObject * leader /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10cXMTObject;
}

// Range: 0x801240E4 -> 0x80124150
// this: r30
cXMTObject::~cXMTObject() {
    // References
    // -> struct [anonymous] __vt__10cXMTObject;
}

// Range: 0x80124150 -> 0x801241A0
// this: r31
void cXMTObject::Initialize() {}

// Range: 0x801241A0 -> 0x801241D4
void cXMTObject::SetLeader() {
    // Local variables
    class cXMTObject * * srch; // r5
}

// Range: 0x801241D4 -> 0x80124378
// this: r27
class ISimInstance * cXMTObject::GetISimInstance() {
    // Local variables
    class cXMTObject * mtobj; // r30
    struct ObjDefinition * pDef; // r0
    int groupId; // r29
    unsigned char isInteractionGroupLead; // r28
    class ISimInstance * p; // r0
    class ISimInstance * pRet; // r0
    class ISimInstance * pRet; // r28
    unsigned char gorupidmatch; // r0
}

// Range: 0x80124378 -> 0x8012441C
// this: r30
void cXMTObject::RemoveFromChain() {
    // Local variables
    class cXMTObject * newLeader; // r31
    class cXMTObject * scan; // r3
    class cXMTObject * * srch; // r5
}

// Range: 0x8012441C -> 0x80124614
// this: r27
void cXMTObject::Turn(int notches /* r28 */) {
    // Local variables
    class FTilePt oldLoc; // r1+0x10
    int level; // r29
    int dirinc; // r28
    class cXMTObject * srch; // r30
    signed short newDir; // r0
    signed short newDir; // r0
}

// Range: 0x80124614 -> 0x801246BC
void cXMTObject::AssignOffsets() {
    // Local variables
    class cXMTObject * lead; // [invalid]
    int x0; // r31
    int y0; // r30
    int l0; // r29
    int direction; // r28
    class cXMTObject * srch; // r27
}

// Range: 0x801246BC -> 0x801248D0
// this: r24
unsigned char cXMTObject::CanPlace(const class FTilePt & newLoc0 /* r28 */, int inLevel /* r25 */, class cXObject * ontop /* r26 */, int slotNum /* r27 */) {
    // Local variables
    class FTilePt curLoc; // r1+0x28
    class FTilePt newLoc; // r1+0x20
    class cXMTObject * curObj; // r30
    int error; // r29
    class PlacementSpec newPs; // r1+0x30
    int flags; // r28
    signed short pflags; // r0

    // References
    // -> class GameData _gd;
    // -> int gPlacementError;
}

// Range: 0x801248D0 -> 0x80124A4C
// this: r24
void cXMTObject::Place(const class FTilePt & loc /* r28 */, int inLevel /* r25 */, class cXObject * ontop /* r26 */, int slotNum /* r27 */) {
    // Local variables
    class FTilePt curLoc; // r1+0x28
    class FTilePt newLoc; // r1+0x20
    class cXMTObject * curObj; // r29
    int level; // r28
}

// Range: 0x80124A4C -> 0x80124AE8
// this: r30
void cXMTObject::Pickup() {
    // Local variables
    class cXMTObject * curObj; // r30
}

// Range: 0x80124AE8 -> 0x80124BD4
// this: r31
unsigned char cXMTObject::UserCanPlace(int inLevel /* r30 */) {
    // Local variables
    class FTilePt firstLoc; // r1+0x20
    int firstLevel; // [invalid]
    class cXMTObject * first; // r0
    class cXMTObject * mtObj; // r31
    class FTilePt loc; // r1+0x18
    int level; // r0
}

// Range: 0x80124BD4 -> 0x80124CB8
// this: r28
void cXMTObject::UserPlace() {
    // Local variables
    class cXMTObject * mtObj; // r30
    int N; // r0
    int i; // r29
}

// Range: 0x80124CB8 -> 0x80124D18
unsigned char cXMTObject::UserCanPickup() {
    // Local variables
    class cXMTObject * mtObj; // r31
}

// Range: 0x80124D18 -> 0x80124E08
// this: r28
void cXMTObject::UserPickup() {
    // Local variables
    class cXMTObject * mtObj; // r30
    int N; // r0
    int i; // r29
}

// Range: 0x80124E08 -> 0x80124E68
unsigned char cXMTObject::UserCanDelete() {
    // Local variables
    class cXMTObject * mtObj; // r31
}

// Range: 0x80124E68 -> 0x80124EA4
unsigned char cXMTObject::IsPartOfMe() {
    // Local variables
    class cXMTObject * srch; // r5
}

// Range: 0x80124EA4 -> 0x80124F98
// this: r29
void cXMTObject::Reset(unsigned char simonce /* r30 */) {
    // Local variables
    class cXMTObject * curObj; // r31

    // References
    // -> class GameData _gd;
}

// Range: 0x80124F98 -> 0x80124FA4
int cXMTObject::ReconType() {}

// Range: 0x80124FA4 -> 0x801250C8
// this: r29
void cXMTObject::ReconStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed short leadid; // r1+0x8
    class cXMTObject * leader; // r0
}

// Range: 0x801250C8 -> 0x80125134
// this: r30
void cXMTObject::PostLoad(int version /* r31 */) {}

// Range: 0x80125134 -> 0x80125180
static class ObjectIterator ObjectsAtTile(class ObjectIterator * oi /* r31 */) {
    // Local variables
    class CTilePt cpt; // r1+0x8
}

// Range: 0x80125180 -> 0x801252C0
// this: r28
void cXMTObject::MergeDynamic(class cXMTObject * mtObject /* r27 */) {
    // Local variables
    class cXMTObject * myFirst; // r0
    class cXMTObject * otherFirst; // r29
    class cXMTObject * * srch; // r5
    class FTilePt origin; // r1+0x18
    class FTilePt offsetOrigin; // r1+0x10
    int direction; // r28
    class cXMTObject * srch; // r27
    class FTilePt delta; // r1+0x8
}

// Range: 0x801252C0 -> 0x801252F4
unsigned char cXMTObject::IsDynamic() {}

// Range: 0x801252F4 -> 0x80125374
// this: r30
void cXMTObject::RemoveFromDynamic() {
    // Local variables
    class cXMTObject * oldLead; // r31
}

// Range: 0x80125374 -> 0x801253D4
// this: r31
void cXMTObject::UpdateAllAdjacecy() {
    // Local variables
    class cXMTObject * part; // r31
}

// Range: 0x801253D4 -> 0x801254F8
// this: r27
void cXMTObject::UpdateDynAdjacency() {
    // Local variables
    signed short adjFlags; // r29
    int dir; // r28
    int effDir; // r30
    class FTilePt testLoc; // r1+0x18
    class ObjectIterator oi; // r1+0x20
    signed short locals[4]; // r1+0x10
}

// Range: 0x801254F8 -> 0x801255F4
// this: r28
void cXMTObject::MergeInPlace() {
    // Local variables
    class FTilePt location; // r1+0x18
    int level; // r31
    class ObjSelector * sel; // r30
    int dir; // r29
    class FTilePt testLoc; // r1+0x10
    class ObjectIterator oi; // r1+0x20
    class cXMTObject * mtObj; // r0
}

// Range: 0x801255F4 -> 0x801256A0
// this: r30
class FTilePt cXMTObject::GetAverageLocation() const {
    // Local variables
    class FTilePt loc; // r1+0x10
    class cXMTObject * mtobj; // r31
    int numPieces; // r30
    class FTilePt tloc; // r1+0x8
}

// Range: 0x801256A0 -> 0x80125744
void cXMTObject::GetNumTiles(int & xSize /* r29 */, int & ySize /* r30 */) {
    // Local variables
    class cXMTObject * mtObj; // r31
    signed short subIndex; // r3
    int newX; // r4
    int newY; // r3
}

// Range: 0x80125744 -> 0x801257A4
class cXMTObject * cXMTObject::GetAnchorTile() {
    // Local variables
    class cXMTObject * pCurrent; // r31
    struct ObjDefinition * pObjDefinition; // r0
}


