/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\hoodmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022E280 -> 0x8022F768
*/
// Range: 0x8022E280 -> 0x8022E524
unsigned char GuidIsOk() {}

// Range: 0x8022E524 -> 0x8022E548
static unsigned char DeleteSelectorOnEvict() {}

// Range: 0x8022E548 -> 0x8022E610
static void AddFamilyToPool(int iHouseSelection /* r30 */, int iAssets /* r31 */) {
    // Local variables
    class Family * f; // r30
}

// Range: 0x8022E610 -> 0x8022E6D8
unsigned char HoodManager::MoveInFamily(int iWhichHouse0 /* r29 */, class Family * f /* r30 */) {}

// Range: 0x8022E6D8 -> 0x8022E888
void HoodManager::UnmarkFamilyForDeletion(int iWhichHouse0 /* r31 */, class Family * f /* r25 */) {
    // Local variables
    int i; // r26
    int version; // r1+0x8

    // References
    // -> signed short kSimulatorResourceID;
}

// Range: 0x8022E888 -> 0x8022EA6C
void HoodManager::EvictFamily(int iWhichHouse0 /* r31 */, unsigned char bRefundMoney /* r25 */) {
    // Local variables
    int iAssets; // r26
    class HouseInfo HInfo; // r1+0x8
    class Neighborhood * neighborhood; // r26
    int i; // r25
}

// Range: 0x8022EA6C -> 0x8022EB18
unsigned char HoodManager::ShouldObjectBeDeletedOnEvict(class ObjSelector * sel /* r31 */) {}

// Range: 0x8022EB18 -> 0x8022F140
unsigned char HoodManager::ResetToPristine() {
    // Local variables
    int err; // r31
    int i; // r30
    int version; // r29
    class NghResFile * pFile; // r28
    class cXObject * pObj; // r3
    class ObjectModule * pOM; // r27
    unsigned char bIsFreeplayLot; // r0
    class cXObject * pNextObj; // r30
    signed short category; // r0
    signed short oldGraphicState; // r0
    signed short nNewPrice; // r0
    int famCnt; // r27
    struct HandleNode * h; // r4
    signed short famNum; // r1+0x8
    class FamilyImpl * f; // r23
    unsigned char bIsPlayerFamily; // r31
    int nextMemberCount; // r31
    class FamilyMember * member; // r3
    int houseNum; // r22
    int funds; // r21
    int petPoints; // r20
    int houseValue; // r19
    char szHouseName[16]; // r1+0x18
    int nHouseNumber; // r0
    unsigned short wideHouseName[16]; // r1+0x28
    class StackString2 sFinalHouseName; // r1+0x48
    unsigned char succeeded; // r0
    int nCharCount; // r19
    int nChar; // r20
    class UserDataSaveLoad userData; // r1+0xC
    struct HandleNode * handle; // r3

    // References
    // -> int iSaveFileVersion;
}

// Range: 0x8022F140 -> 0x8022F304
unsigned char HoodManager::ResetNeighbors() {
    // Local variables
    int err; // r31
    int i; // r4
    int version; // r30
    class NghResFile * pFile; // r29
    class NeighborList fNeighbors; // r1+0x8
    class Neighbor * * n; // r28
    class Neighbor * pNeighbor; // r3
    class Motives * pMot; // r0

    // References
    // -> int iSaveFileVersion;
}

// Range: 0x8022F304 -> 0x8022F360
unsigned char HoodManager::GetMatrix(class Neighbor * n2 /* r29 */, class RelMatrix * * matrix /* r30 */, int * key /* r31 */) {}

// Range: 0x8022F360 -> 0x8022F5CC
unsigned char RelationsCmp::operator()(class Neighbor * n1 /* r30 */, class Neighbor * n2 /* r31 */) {
    // Local variables
    unsigned char inFamily1; // r28
    unsigned char inFamily2; // r27
    unsigned char isAPlayer1; // r26
    unsigned char isAPlayer2; // r25
    unsigned char inst1; // r25
    unsigned char inst2; // r0
    class Neighborhood & hood; // r25
    int guid; // r0
    class Neighbor * nSelf; // r25
    int relValue1; // r1+0xC
    int relValue2; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8022F5CC -> 0x8022F720
void HoodManager::GetRelatedPeople(int player /* r27 */, class cXPerson * pSelf /* r28 */) {
    // Local variables
    class vector & people; // r30
    class Neighborhood & hood; // r31
    class Neighbor * theNeighbor; // r29
    signed short neighborID; // r28
    class Neighbor * n; // r1+0x18
    class RelMatrix * matrix; // r1+0x14
    int key; // r1+0x10
    class RelationsCmp cmp; // r1+0xC
}

// Range: 0x8022F720 -> 0x8022F760
// this: r31
RelationsCmp::~RelationsCmp() {}

// Range: 0x8022F760 -> 0x8022F768
RelationsCmp::RelationsCmp() {}


