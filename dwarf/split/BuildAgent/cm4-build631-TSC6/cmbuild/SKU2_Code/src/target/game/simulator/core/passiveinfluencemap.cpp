/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\passiveinfluencemap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A6E3C -> 0x800AA000
*/
// Range: 0x800A6E3C -> 0x800A6EAC
// this: r30
PassiveInfluenceMap::PassiveInfluenceMap() {
    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A6EAC -> 0x800A6F1C
// this: r30
PassiveInfluenceMap::~PassiveInfluenceMap() {
    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A6F1C -> 0x800A700C
// this: r28
void PassiveInfluenceMap::AddItemToMap(class PassiveInfluenceItem * pItem /* r1+0x8 */) {
    // Local variables
    class vector & tv; // r31
    unsigned int tile; // r30
    int x; // r29
    int y; // r5
}

// Range: 0x800A700C -> 0x800A7120
// this: r26
void PassiveInfluenceMap::RemoveItemFromMap(class PassiveInfluenceItem * pItem /* r27 */) {
    // Local variables
    class vector & tv; // r31
    unsigned int tile; // r30
    int x; // r29
    int y; // r4
    class vector & pVec; // r29
    class PassiveInfluenceItem * * it; // r28
    class vector temp; // r1+0x10
}

// Range: 0x800A7120 -> 0x800A7168
class vector * PassiveInfluenceMap::GetListForTile() {}

// Range: 0x800A7168 -> 0x800A7210
// this: r27
void PassiveInfluenceMap::EmptyMap() {
    // Local variables
    int x; // r30
    int y; // r29
    class vector & pVec; // r28
    class vector temp; // r1+0x10
}

// Range: 0x800A7210 -> 0x800A7228
class PassiveInfluencePerson * PassiveInfluenceMap::NotifySimulator() {
    // References
    // -> class PassiveInfluenceSystem * s_passiveInfluenceSystem;
}

// Range: 0x800A7228 -> 0x800A73EC
// this: r29
unsigned char PassiveInfluenceMap::CheckObjectInfluence(class PassiveInfluenceTarget * pTarget /* r30 */) {
    // Local variables
    class vector & tv; // r27
    unsigned int i; // r26
    int x; // r28
    int y; // r4
    class vector & itemVec; // r25
    unsigned int j; // r31
    class PassiveInfluenceObject * pObject; // r24
    struct ListIterator lockout; // r1+0x18
}

// Range: 0x800A73EC -> 0x800A74FC
unsigned char PassiveInfluenceMap::ApplyInfluence(class PassiveInfluenceObject * pObject /* r28 */, class PassiveInfluenceTarget * pTarget /* r29 */) {
    // Local variables
    signed short obj_id; // r0
    class cXObject * pTargetObject; // r30
    int lockout; // r1+0xC
}

// Range: 0x800A74FC -> 0x800A75BC
// this: r30
PassiveInfluenceSystem::PassiveInfluenceSystem() {
    // References
    // -> class PassiveInfluenceSystem * s_passiveInfluenceSystem;
}

// Range: 0x800A7614 -> 0x800A76C4
// this: r30
PassiveInfluenceSystem::~PassiveInfluenceSystem() {
    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
    // -> class PassiveInfluenceSystem * s_passiveInfluenceSystem;
}

// Range: 0x800A76C4 -> 0x800A76E4
void PassiveInfluenceSystem::FlushSystem() {
    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
    // -> class PassiveInfluenceSystem * s_passiveInfluenceSystem;
}

// Range: 0x800A76E4 -> 0x800A76F8
void PassiveInfluenceSystem::DoStream() {}

// Range: 0x800A76F8 -> 0x800A7C2C
// this: r25
unsigned char PassiveInfluenceSystem::AddObjectToMap(class cXObject * pObj /* r26 */, signed char animationType /* r27 */, signed char areaType /* r28 */, signed char areaSize /* r29 */, signed char flags /* r30 */, signed short triggerRadius /* r31 */, signed short lockoutID /* r24 */) {
    // Local variables
    int type; // r0
    struct ListIterator it; // r1+0x64
    class PassiveInfluencePerson * pItem; // r1+0x60
    struct ListIterator it; // r1+0x5C
    class PassiveInfluenceObject * pItem; // r1+0x58
    struct ListIterator it; // r1+0x54
    class PassiveInfluenceMovable * pItem; // r1+0x50
    struct ListIterator it; // r1+0x4C
    class cXObject * lockoutObject; // r1+0x48
    struct ListIterator lockout; // r1+0x44
    struct ListIterator it; // r1+0x40
    signed short lotID; // r27
    signed short outboundTransitionID; // r0
    class PassiveInfluencePortal * pItem; // r1+0x3C

    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A7C2C -> 0x800A7FC0
// this: r31
unsigned char PassiveInfluenceSystem::RemoveObjectFromMap(class cXObject * pObj /* r29 */) {
    // Local variables
    struct ListIterator personItr; // r1+0x64
    class PassiveInfluencePerson * instancePtr; // r30
    struct ListIterator objItr; // r1+0x60
    class PassiveInfluenceObject * instancePtr; // r30
    struct ListIterator movableItr; // r1+0x5C
    class PassiveInfluenceMovable * instancePtr; // r30
    struct ListIterator portalItr; // r1+0x58
    class PassiveInfluencePortal * instancePtr; // r30

    // References
    // -> signed short lotToDisplayTextFor;
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A7FC0 -> 0x800A8308
// this: r29
void PassiveInfluenceSystem::MoveObjectInWorld(class cXObject * pObj /* r30 */) {
    // Local variables
    struct ListIterator personInf; // r1+0x4C
    struct ListIterator objInf; // r1+0x48
    struct ListIterator target; // r1+0x44
    class vector temp; // r1+0x50
    struct ListIterator remove_target; // r1+0x40
    class PassiveInfluenceTarget * objectPtr; // r31
    signed short category; // r31
    class PassiveInfluenceTarget * pTarget; // r1+0x3C

    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A8308 -> 0x800A8E3C
// this: r31
class PassiveInfluencePerson * PassiveInfluenceSystem::NotifySimulator(class cXPerson * person /* r1+0x8 */, int x /* r21 */, int y /* r20 */) {
    // Local variables
    unsigned char bTextHandled; // r25
    struct ListIterator itr; // r1+0x38
    class PassiveInfluencePortal * item; // r26
    class cXObject * portalObj; // r27
    class FTilePt loc; // r1+0x50
    int dist; // r0
    int triggerRadius; // r0
    int textRadius; // r0
    struct ListIterator lockout; // r1+0x34
    int lockout; // r1+0x30
    const class vector * itemVec; // r25
    int motivesUsed[16]; // r1+0x118
    float motivesCumulative[16]; // r1+0xD8
    float motivesLimitMax[16]; // r1+0x98
    float motivesLimitMin[16]; // r1+0x58
    int i; // r0
    class PassiveInfluencePerson * pStrongest; // r24
    float maxInfluence; // f31
    unsigned int i; // r27
    class PassiveInfluencePerson * pItem; // r28
    int size; // r0
    int j; // r29
    int index; // r0
    struct ListIterator itr; // r1+0x2C
    class PassiveInfluenceMovable * item; // r23
    class cXObject * movableObj; // r22
    class FTilePt loc; // r1+0x48
    int dist; // r0
    int size; // r0
    int j; // r21
    int index; // r20
    class cXPerson * pet; // r17
    class Neighbor * MFJH; // r16
    float mood; // f28
    float relationship; // f27
    float increment; // f1
    int i; // r16
    float motive; // f29

    // References
    // -> float _dt;
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
    // -> signed short lotToDisplayTextFor;
    // -> class EGlobal _globals;
}

// Range: 0x800A8E3C -> 0x800A8F64
unsigned char PassiveInfluenceSystem::ShouldItemAffectPerson(class PassiveInfluenceItem * item /* r29 */, class cXPerson * person /* r30 */) {
    // Local variables
    class PassiveInfluencePerson * pItem; // r0
    class cXObject * pObj; // r31
    class cXObject * container; // r31
    class cXPerson * holder; // r0
}

// Range: 0x800A8F64 -> 0x800A91D4
// this: r29
unsigned char PassiveInfluenceSystem::CheckObjects(int ticksToCheck /* r30 */) {
    // Local variables
    struct ListIterator target; // r1+0x3C
    struct ListIterator lockout; // r1+0x38
    struct ListIterator remove_lockout; // r1+0x34
    class cXObject * pObj; // r31
    class FTilePt pt; // r1+0x40
    struct ListIterator remove_target; // r1+0x30
    class PassiveInfluenceTarget * instancePtr; // r31

    // References
    // -> class PassiveInfluenceMap * s_passiveInfluenceMap;
}

// Range: 0x800A91D4 -> 0x800A9368
// this: r30
unsigned char PassiveInfluenceSystem::SetInfluenceMotiveDelta(class cXObject * pObj /* r31 */) {
    // Local variables
    struct TypedMotiveInc motiveInc; // r1+0x28
    struct ListIterator personItr; // r1+0x24
    struct ListIterator movableItr; // r1+0x20
}

// Range: 0x800A9368 -> 0x800A94B8
// this: r30
void PassiveInfluenceSystem::ClearInfluenceMotiveDeltas(class cXObject * pObj /* r31 */) {
    // Local variables
    struct ListIterator personItr; // r1+0x24
    struct ListIterator movableItr; // r1+0x20
}

// Range: 0x800A94B8 -> 0x800A958C
// this: r29
unsigned char PassiveInfluenceSystem::SetSkillNameID(class cXObject * pObj /* r30 */, const struct AnimRef * skillID /* r31 */) {
    // Local variables
    struct ListIterator it; // r1+0x14
}

// Range: 0x800A958C -> 0x800A9640
void PassiveInfluenceMap::CalculateTargetArea(class PassiveInfluenceItem * pItem /* r30 */) {
    // Local variables
    class cXObject * pObj; // r31
    int x; // r31
    int y; // r0
}

// Range: 0x800A9640 -> 0x800A97A0
// this: r31
void PassiveInfluenceMap::FilledArc_Line(int xLeft /* r25 */, int xRight /* r26 */, int yLine /* r27 */, class PassiveInfluenceItem * pItem /* r28 */) {
    // Local variables
    class cFixedWorld * world; // r30
    class cXObject * originObject; // r29
    class CTilePt pt; // r1+0x8
    int x; // [invalid]
}

// Range: 0x800A97A0 -> 0x800A99B0
void PassiveInfluenceMap::FilledArc_Polygon(int angle /* r24 */, int * nVerts /* r29 */) {
    // Local variables
    int vCount; // r31
    int i; // r30
}

// Range: 0x800A99B0 -> 0x800A9C84
// this: r25
void PassiveInfluenceMap::FilledArc(int radius /* r28 */, int xPos /* r27 */, int yPos /* r24 */, class PassiveInfluenceItem * pItem /* r26 */) {
    // Local variables
    struct vert2 vertList[6]; // r1+0x10
    int numVerts; // r1+0x8
    int vLeft; // r31
    int vLeftNext; // r30
    int vRight; // r29
    int vRightNext; // r28
    float xLeft; // f31
    float dLeft; // f30
    float xRight; // f29
    float dRight; // f28
    int i; // r6
    int yLine; // r27
}

// Range: 0x800A9C84 -> 0x800AA000
// this: r26
void PassiveInfluenceMap::CalculateAffectedArea(class PassiveInfluenceItem * pItem /* r27 */) {
    // Local variables
    class cFixedWorld * world; // r31
    class CTilePt pt; // r1+0x10
    int DirToDegreeTable[8]; // r1+0x20
    class vector & tv; // r0
    class cXObject * originObject; // r30
    int obj_x; // r29
    int obj_y; // r28
    unsigned char areaType; // r23
    int searchDist; // r24
    int searchDir; // r0
    int searchAngle; // r25
    int dir; // r0
    int dir_x; // r1+0xC
    int dir_y; // r1+0x8
    int halfSearch; // r4
    int center_x; // r3
    int center_y; // r0
    int x; // r29
    int y; // r22
}


