/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\neighborhood.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80127AA8 -> 0x8012B188
*/
// Range: 0x80127AA8 -> 0x80127C64
// this: r31
void NeighborhoodConstants::UpdateConstants() {
    // Local variables
    unsigned int fileID; // r29
    signed short id; // r0
    class ConsoleAutoRefCount mc; // r1+0x8

    // References
    // -> float gYardScoreMultiplier;
    // -> int gMoneyForNewFamily;
    // -> float gHouseSizeWeight;
    // -> float gPerfectFriendCount;
    // -> int gNewFamilyStartHour;
    // -> float gArchValueMultiplier;
}

// Range: 0x80127C64 -> 0x80127CF4
// this: r30
void NeighborList::DeleteAll() {
    // Local variables
    class Neighbor * * i; // r31
    class vector temp; // r1+0x10
}

// Range: 0x80127CF4 -> 0x80127E70
// this: r30
Neighborhood::Neighborhood() {
    // Local variables
    int i; // r0

    // References
    // -> struct [anonymous] __vt__12Neighborhood;
}

// Range: 0x80127E70 -> 0x80127F68
// this: r29
Neighborhood::~Neighborhood() {
    // Local variables
    class FamilyImpl * * j; // r31

    // References
    // -> struct [anonymous] __vt__12Neighborhood;
}

// Range: 0x80127F68 -> 0x80127FC4
// this: r30
void Neighborhood::RelationshipsChanged() {
    // Local variables
    class FamilyImpl * f; // r0
}

// Range: 0x80127FC4 -> 0x80127FC8
void Neighborhood::PostSim() {}

// Range: 0x80127FC8 -> 0x80128090
static unsigned char SortFamilyByCreation(class Family * const & a /* r29 */, class Family * const & b /* r30 */) {
    // Local variables
    int ca; // r0
    int cb; // r0
}

// Range: 0x80128090 -> 0x80128144
// this: r30
void Neighborhood::Unload() {
    // Local variables
    class FamilyImpl * * i; // r31
    class vector temp; // r1+0x10

    // References
    // -> class GameData _gd;
}

// Range: 0x80128144 -> 0x801287BC
// this: r28
int Neighborhood::Load(class NghResFile * pFile /* r29 */) {
    // Local variables
    class ObjectFolder * f; // r31
    int err; // r30
    int currentVersion; // r1+0x18
    class Neighbor * * n; // r24
    class CasSimDescription * pSimDesc; // r0
    class CasSimDescription * pSimDesc; // r25
    int famCnt; // r23
    int i; // r22
    struct HandleNode * h; // r4
    signed short famNum; // r1+0x8
    class FamilyImpl * f; // r1+0x14
    unsigned char bIsPlayerFamily; // r21
    class FamilyImpl * replacementFamily; // r1+0x10
    int numMembers; // r0
    int m; // r21
    const class FamilyMember * fm; // r20
    class FamilyImpl * f; // r1+0xC
    class StackString2 name; // r1+0x20
    class ObjSelector * sel; // r20
    class Neighbor * pNeighbor; // r0
    int p1NeighborID; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> static class NeighborhoodConstants NeighborhoodConstants_sTheClient;
    // -> static unsigned char sConstantsLoaded;
}

// Range: 0x801287BC -> 0x801288DC
// this: r28
void Neighborhood::UpdateFamilyNumbers() {
    // Local variables
    class Neighbor * * n; // r31
    class FamilyImpl * * i; // r31
    int n; // r30
    const class FamilyMember * fm; // r0
    class Neighbor * neighbor; // r29
}

// Range: 0x801288DC -> 0x80128AF8
// this: r24
int Neighborhood::Save(class NghResFile * pFile /* r25 */, int version /* r26 */) {
    // Local variables
    class cSimulator * sim; // r29
    signed short nCurrentTransitionType; // r0
    int err; // r28
    class FamilyImpl * * i; // r27
    int objectsValue; // r0
    float archValue; // f30

    // References
    // -> float gArchValueMultiplier;
}

// Range: 0x80128AF8 -> 0x80128C7C
// this: r28
void Neighborhood::DoStream(class ReconBuffer * r /* r29 */, int version /* r30 */) {
    // Local variables
    signed short tutorialState; // r31
    class EGlobal * pGlobal; // r0
    class WeatherManager * pWeatherManager; // r0
}

// Range: 0x80128C7C -> 0x80128CF4
// this: r30
class Neighbor * Neighborhood::FindNeighborByID(int id /* r31 */) {
    // Local variables
    class Neighbor * n; // r31
}

// Range: 0x80128CF4 -> 0x80128D98
// this: r28
class Neighbor * Neighborhood::FindNeighborByGUID(int guid /* r29 */) {
    // Local variables
    class Neighbor * * i; // r31
    class Neighbor * n; // r30
}

// Range: 0x80128D98 -> 0x80128E2C
// this: r28
class Neighbor * Neighborhood::FindNeighborByType(const class ObjSelector * sel /* r29 */) {
    // Local variables
    class Neighbor * * i; // r31
    class Neighbor * n; // r30
}

// Range: 0x80128E2C -> 0x80128F2C
// this: r28
class Neighbor * Neighborhood::AddNewNeighbor(class ObjSelector * sel /* r29 */) {
    // Local variables
    class Neighbor * * i; // r31
    int newID; // r30
}

// Range: 0x80128F2C -> 0x801290D8
// this: r29
void Neighborhood::LoadPersistentData(class cXPerson * person /* r30 */) {
    // Local variables
    int i; // r4
    class Neighbor * n; // r31
    class Family * neighborFamily; // r0
    class Motives * pSrcMotives; // r31
    class Motives * pDestMotives; // r0
}

// Range: 0x801290D8 -> 0x80129178
// this: r28
void Neighborhood::RemoveNeighborRelationships(class Neighbor * n /* r29 */) {
    // Local variables
    int id; // r31
    class Neighbor * * i; // r30
    class Neighbor * otherNeighbor; // r3
}

// Range: 0x80129178 -> 0x80129214
// this: r29
void Neighborhood::RemoveNeighbor(class Neighbor * n /* r30 */) {
    // Local variables
    int id; // r31
}

// Range: 0x80129214 -> 0x801293AC
// this: r31
void Neighborhood::SavePersistentData(class cXPerson * person /* r30 */) {
    // Local variables
    class Neighbor * n; // r31
    class Family * neighborFamily; // r0
    class Motives * pSrcMotives; // r30
    class Motives * pDestMotives; // r0
    int i; // r0
}

// Range: 0x801293AC -> 0x801293E0
class ObjSelector * Neighborhood::GetNeighborSelector() {
    // Local variables
    class Neighbor * n; // r0
}

// Range: 0x801293E0 -> 0x80129458
// this: r30
signed short Neighborhood::GetNextNeighborID(signed short startID /* r31 */) {}

// Range: 0x80129458 -> 0x80129738
// this: r28
signed short Neighborhood::GetNeighborData(signed short dataIndex /* r27 */, const signed short * * ref /* r26 */) {
    // Local variables
    class Neighbor * n; // r29
    class cXPerson * p; // r28
    int iNumPeople; // r0
    int i; // r27
    class cXPerson * t; // r26
    class Family * f; // r26
    class FamilyImpl * * i; // r26
    int fnum; // r4
    class Family * f; // r26
    int fnum; // r4
    class Family * f; // r26
}

// Range: 0x80129738 -> 0x801297C0
// this: r29
class Family * Neighborhood::GetFamily(int number /* r30 */) {
    // Local variables
    class FamilyImpl * * i; // r31
}

// Range: 0x801297C0 -> 0x80129848
// this: r29
class Family * Neighborhood::GetFamilyInHouse(int houseNumber /* r30 */) {
    // Local variables
    class FamilyImpl * * i; // r31
}

// Range: 0x80129848 -> 0x80129850
int Neighborhood::GetNumFamilies() {}

// Range: 0x80129850 -> 0x80129984
// this: r28
int Neighborhood::GetNextUnusedFamilyNum() {
    // Local variables
    int maxFamilies; // r30
    class vector familyUsed; // r1+0x10
    class FamilyImpl * * iter; // r29
    int nFamilyNum; // r3
    int i; // r29
}

// Range: 0x80129984 -> 0x801299AC
class Family * Neighborhood::GetFamilyByIndex() {}

// Range: 0x801299AC -> 0x80129A04
// this: r30
class Family * Neighborhood::MakeNewFreePlayFamily(int nFamilyNum /* r31 */) {}

// Range: 0x80129A04 -> 0x80129BA8
// this: r27
class Family * Neighborhood::BaseMakeNewFamily(unsigned char bFreePlay /* r28 */) {
    // Local variables
    int newNumber; // [invalid]
    int unusedNumber; // r31
    int highestOrder; // r30
    class FamilyImpl * * fi; // r29
    class FamilyImpl * pFamily; // r1+0x8

    // References
    // -> int gMoneyForNewFamily;
}

// Range: 0x80129BA8 -> 0x80129C7C
// this: r29
int Neighborhood::RemoveFamily(class Family * f /* r30 */) {
    // Local variables
    class FamilyImpl * * i; // r31
}

// Range: 0x80129C7C -> 0x80129DA0
// this: r29
int Neighborhood::AddToFamily(class Neighbor * n /* r30 */, class Family * f /* r31 */) {
    // Local variables
    const class FamilyMember * fm; // r0
}

// Range: 0x80129DA0 -> 0x80129EC4
// this: r28
int Neighborhood::RemoveFromFamily(class Neighbor * n /* r29 */, unsigned char bSilent /* r30 */) {
    // Local variables
    int familyNumber; // r4
    class FamilyImpl * f; // r31
    const class FamilyMember * fm; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80129EC4 -> 0x80129F3C
// this: r29
int Neighborhood::AddNewCharacter(class Neighbor * * outNewNeighbor /* r30 */, unsigned char bIsPet /* r31 */) {
    // Local variables
    class ObjSelector * newSel; // r0
    class Neighbor * newNeighbor; // r31
}

// Range: 0x80129F3C -> 0x8012A060
// this: r25
int Neighborhood::DeleteCharacter(class Neighbor * n /* r26 */) {
    // Local variables
    class ObjSelector * sel; // r31
    int guid; // r30
    class ObjectModule * om; // r29
    class cXObject * obj; // r28
    class FamilyImpl * * f; // r28
    int id; // r27
    class ObjectFolder * of; // r27
}

// Range: 0x8012A060 -> 0x8012A09C
int Neighborhood::GetFamilyFriendsCount() {
    // Local variables
    class FamilyImpl * f; // r31
}

// Range: 0x8012A09C -> 0x8012A1A0
// this: r28
int Neighborhood::GetFamilyNetWorth() {
    // Local variables
    class FamilyImpl * f; // r31
    int funds; // r30
    int houseValue; // r29
    class cSimulator * sim; // r29
    int objectsValue; // r0
    float archValue; // f31

    // References
    // -> float gArchValueMultiplier;
}

// Range: 0x8012A1A0 -> 0x8012A1A8
class SimCache & Neighborhood::GetSimCache() {}

// Range: 0x8012A1A8 -> 0x8012A1FC
// this: r30
int Neighborhood::GetTotalAspirationPoints() const {
    // Local variables
    int points; // r31
}

// Range: 0x8012A1FC -> 0x8012A2A0
// this: r29
void Neighborhood::SetTotalAspirationPoints(int points /* r30 */) {}

// Range: 0x8012A2A0 -> 0x8012A348
int Neighborhood::MoveIn(class Family * f /* r29 */, int houseNum /* r30 */, unsigned char bIsTransition /* r31 */) {}

// Range: 0x8012A348 -> 0x8012A47C
// this: r26
void Neighborhood::UpdateFamilyFriendsCount(class Family * f /* r27 */) {
    // Local variables
    int friendCnt; // r31
    class Neighbor * * i; // r30
    class Neighbor * n; // r29
    int famCnt; // r28
    const class FamilyMember * fm; // r0
    class Neighbor * fn; // r0
    enum tRelationshipType relType; // r0
}

// Range: 0x8012A47C -> 0x8012A530
// this: r28
int Neighborhood::GetNumberOfPeopleOnIslands() {
    // Local variables
    int humanCnt; // r31
    class Neighbor * * i; // r30
    class Neighbor * n; // r29
    class Family * pFamily; // r0
    int famNum; // r0
}

// Range: 0x8012A530 -> 0x8012A5C0
int Neighborhood::GetHousePrice(class cSimulator * sim /* r29 */) {
    // References
    // -> float gArchValueMultiplier;
}

// Range: 0x8012A5C0 -> 0x8012A69C
unsigned char Neighborhood::GetFamilyInfo(class Family * f /* r29 */, class FamilyInfo * info /* r30 */, unsigned char inNgh /* r31 */) {
    // Local variables
    class StackString2 str; // r1+0x110
}

// Range: 0x8012A69C -> 0x8012A6F8
// this: r30
unsigned char Neighborhood::GetFamilyInfo(class FamilyInfo * info /* r31 */) {
    // Local variables
    class Family * f; // r4
}

// Range: 0x8012A6F8 -> 0x8012A7D8
// this: r28
unsigned char Neighborhood::GetHouseInfo(class NghResFile * pFile /* r29 */, int houseNumber /* r30 */, class HouseInfo * info /* r31 */) {
    // Local variables
    class Family * f; // r0
}

// Range: 0x8012A7D8 -> 0x8012A7EC
unsigned char Neighborhood::GetHouseInfo() {}

// Range: 0x8012A7EC -> 0x8012A8D8
// this: r31
unsigned char Neighborhood::GetHouseFileInfo(class NghResFile * inFile /* r25 */, int * price /* r26 */, unsigned char * isTutorial /* r27 */, unsigned char * hasHouse /* r30 */, unsigned char * moveInAllowed /* r28 */) {
    // Local variables
    int version; // r1+0x8
    class cSimulator * sim; // r29
    int err; // r0

    // References
    // -> signed short kSimulatorResourceID;
}

// Range: 0x8012A8D8 -> 0x8012A9A8
unsigned char Neighborhood::compareHouses(const int & h1 /* r29 */, const int & h2 /* r30 */) {
    // Local variables
    int originx; // r1+0x1C
    int originy; // r1+0x18
    int p1x; // r1+0x14
    int p1y; // r1+0x10
    int p2x; // r1+0xC
    int p2y; // r1+0x8
    class Neighborhood * n; // r31
}

// Range: 0x8012A9A8 -> 0x8012AE74
// this: r26
int Neighborhood::LoadHouse(class NghResFile * pFile /* r27 */, int houseNum /* r28 */, enum TransitionType transitionType /* r29 */) {
    // Local variables
    class cSimulator * simulator; // r31
    int err; // r24
    class vector temp; // r1+0x28
    class House * houseToLoad; // r23
    class ObjectModule * objmodule; // r30
    int houseVersion; // r1+0x20
    signed short year; // r1+0x16
    signed short month; // r1+0x14
    signed short day; // r1+0x12
    signed short hour; // r1+0x10
    signed short minute; // r1+0xE
    signed short second; // r1+0xC
    enum TransitionType transitionType; // r0
    class GameTime t; // r1+0x1C
    class Family * f; // r3
    unsigned int i; // r23
    int iNumPeople; // r0
    int iter; // r23
    class cXPerson * p; // r25
    class Family * playerFamily; // r23
    int funds; // r25

    // References
    // -> class GameData _gd;
    // -> signed short GameStartSecond;
    // -> signed short GameStartMinute;
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> class EGlobal _globals;
    // -> signed short GameStartYear;
}

// Range: 0x8012AE74 -> 0x8012AFFC
// this: r27
int Neighborhood::SaveHouse(class NghResFile * pFile /* r28 */) {
    // Local variables
    class ObjectModule * pObjMod; // r30
    unsigned int numPpl; // r0
    unsigned int i; // r29
    class cXPerson * pPerson; // r0
    class House * h; // r29
    class cSimulator * s; // r0
    int playerFunds; // r30
    class Family * playerFamily; // r0
    int err; // r29
    class Neighbor * * n; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x8012AFFC -> 0x8012B004
int Neighborhood::GetHouseNumber() {}

// Range: 0x8012B004 -> 0x8012B048
void Neighborhood::GetLotPosition() {
    // References
    // -> static class IPoint fLotPos[10];
}

// Range: 0x8012B048 -> 0x8012B0F4
void Neighborhood::UpdateInstanceVisitorTypes() {
    // Local variables
    int iNumPeople; // r0
    class House * house; // r30
    int j; // r29
    class cXPerson * p; // r28
    int visType; // r27
}

// Range: 0x8012B0F4 -> 0x8012B120
unsigned char Neighborhood::GetEventFlag() {}

// Range: 0x8012B120 -> 0x8012B148
void Neighborhood::SetEventFlag() {}

// Range: 0x8012B148 -> 0x8012B188
// this: r31
NeighborhoodConstants::NeighborhoodConstants() {
    // References
    // -> struct [anonymous] __vt__21NeighborhoodConstants;
}


