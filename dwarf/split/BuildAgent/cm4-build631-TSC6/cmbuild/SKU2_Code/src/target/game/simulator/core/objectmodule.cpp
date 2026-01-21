/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectmodule.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014244C -> 0x80145F94
*/
// Range: 0x8014244C -> 0x80142574
// this: r29
ObjectModule::ObjectModule() {
    // References
    // -> struct [anonymous] __vt__12ObjectModule;
}

// Range: 0x80142574 -> 0x801426EC
// this: r25
int ObjectModule::Save(class iResFile * pFile /* r26 */) {
    // Local variables
    int version; // r30
    int currentLot; // r29
    class cXObject * obj; // r28
    class ObjSelector * pSel; // r27
    struct ObjDefinition * pDef; // r0
    class vector resList; // r1+0x10
    unsigned int datasetID; // r27
    int err; // r27
    class StackString dummy; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801426EC -> 0x80142834
// this: r28
int ObjectModule::Load(class iResFile * pFile /* r29 */) {
    // Local variables
    class ObjectFolder * const pFolder; // r31
    int version; // r1+0xC
    int err; // r30
    class cXObject * srch; // r29
    class CTilePt objLoc; // r1+0x8
    unsigned int x; // r0
    unsigned int y; // r0
    signed short parentID; // r0
}

// Range: 0x80142834 -> 0x801429A8
// this: r24
void ObjectModule::killDemolishedObjects() {
    // Local variables
    struct HandleNode * handle; // r30
    class vector killList; // r1+0x10
    int * const pGuid; // r29
    int iSize; // r28
    int i; // r27
    class cXObject * obj; // r26
    int guid; // r25
    int i; // r25
    int iNumObjects; // r0
}

// Range: 0x801429A8 -> 0x80142A30
// this: r27
void ObjectModule::PostLoad(class iResFile * pFile /* r28 */, int version /* r29 */, enum TransitionType transitionType /* r30 */) {
    // Local variables
    class cXObject * srch; // r31
}

// Range: 0x80142A30 -> 0x80142AB4
void ObjectModule::SelectPlayerSims() {
    // Local variables
    class cXPerson * sim; // r31
    int neighborId; // r30
    class Neighbor * neighbor; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80142AB4 -> 0x80142B54
// this: r29
void ObjectModule::DoReconObject(class ReconBuffer * r /* r30 */, class cXObject * * obj /* r31 */) {
    // Local variables
    signed short objID; // r1+0x8
}

// Range: 0x80142B54 -> 0x80142BD4
void ObjectModule::DoReconPerson(class ReconBuffer * r /* r30 */, class cXPerson * * p /* r31 */) {
    // Local variables
    class cXObject * obj; // r1+0x8
}

// Range: 0x80142BD4 -> 0x8014305C
// this: r29
void ObjectModule::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    unsigned char compress; // r1+0x8
    class ObjSelector * placeHolder; // r0
    class cXObject * obj; // r28
    signed short id; // r1+0xE
    class ObjSelector * sel; // r1+0x1C
    signed short zero; // r1+0xC
    signed short id; // r1+0xA
    class ObjSelector * sel; // r1+0x18
    class cXObject * newObj; // r0
    class cXObject * obj; // r26
    class ObjSelector * sel; // r0
    class cXObject * obj; // r26
    int disablerCount; // r1+0x14
    unsigned int i; // r26
    class BString tmp; // r1+0x10
    class cXObject * obj; // r26
    class ObjSelector * sel; // r0
    unsigned char bIsPlaceHolder; // r0
    class PassiveInfluenceSystem * piSystem; // r26
    class cXObject * obj; // r27

    // References
    // -> class BString2 sLastUserTypedName;
}

// Range: 0x8014305C -> 0x801430C0
// this: r31
void ObjectModule::Init() {}

// Range: 0x801430C0 -> 0x80143128
// this: r31
void ObjectModule::LoadGlobalRoutingSlots() {
    // Local variables
    class SlotLoader sl; // r1+0x8
}

// Range: 0x80143128 -> 0x8014329C
// this: r28
void ObjectModule::Destroy() {
    // Local variables
    class cXObject * * i; // r30
    int i; // r29
    class vector temp; // r1+0x20
    class vector temp; // r1+0x10
}

// Range: 0x8014329C -> 0x80143384
// this: r28
class cXObject * ObjectModule::GetObjectByGUID(int inGUID /* r29 */) {
    // Local variables
    class ObjSelector * sel; // r0
    class cXObject * * i; // r29
    class cXObject * * end; // r0
    int j; // r29
}

// Range: 0x80143384 -> 0x80143404
// this: r29
class cXPerson * ObjectModule::GetPersonByGUID(int guid /* r30 */) {
    // Local variables
    class cXPerson * * i; // r31
}

// Range: 0x80143404 -> 0x80143554
// this: r29
class cXObject * ObjectModule::ConstructObject(class ObjSelector * sel /* r30 */, class cXMTObject * mtLead /* r31 */) {
    // Local variables
    const struct ObjDefinition * def; // r0
}

// Range: 0x80143554 -> 0x801438CC
// this: r20
signed short ObjectModule::MakeNewOutOfWorldObject(class ObjSelector * objSel /* r21 */, signed short * pIDToUse /* r22 */) {
    // Local variables
    signed short idToUse; // r30
    signed short newID; // r29
    const struct ObjDefinition * header; // r28
    unsigned char failed; // r27
    class cXMTObject * leadObj; // r26
    class cXMTObject * newObj; // r25
    class ObjSelector * subSel; // r24
    int n; // r23
    class cXObject * newObj; // r23

    // References
    // -> static unsigned char bAsserted;
}

// Range: 0x801438CC -> 0x80143BE4
// this: r30
void ObjectModule::KillOutOfWorldObject(signed short id /* r31 */, unsigned char multiPart /* r27 */) {
    // Local variables
    class cXObject * obj; // r28
    class ISimInstance * pInstance; // r29
    struct ObjDefinition * def; // r29
    class cXMTObject * mobj; // r27
    class cXMTObject * nextObj; // r28
    int n; // r0
    int i; // r27
    signed short contID; // r0
    class cXObject * srch; // r27

    // References
    // -> class GameData _gd;
}

// Range: 0x80143BE4 -> 0x80143D9C
// this: r26
void ObjectModule::KillObject(signed short id /* r27 */) {
    // Local variables
    class cXObject * obj; // r30
    unsigned char hasRoomImpact; // r29
    signed short room; // r28
    class cXMTObject * nextTile; // r0
    int nObjectType; // r0
    class ERLevel * pLevel; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80143D9C -> 0x80143E70
// this: r29
void ObjectModule::KillQueueFlush() {
    // Local variables
    signed short killID; // r31
    class cXObject * obj; // r30
    class cXMTObject * mtObj; // r30
}

// Range: 0x80143E70 -> 0x80143F08
// this: r31
unsigned char ObjectModule::PostSim() {
    // Local variables
    class cXPerson * selected; // r0
}

// Range: 0x80143F08 -> 0x80143F54
void ObjectModule::DayChanged() {
    // Local variables
    class cXObject * srch; // r31
}

// Range: 0x80143F54 -> 0x80144098
// this: r27
void ObjectModule::UpdateRooms(int inLevel /* r28 */) {
    // Local variables
    class cXObject * obj; // r29
    class cXPerson * p; // r0
    class cXObject * obj; // r29
}

// Range: 0x80144098 -> 0x80144118
// this: r30
void ObjectModule::UpdateInteractionInfluences() {
    // Local variables
    class InfluenceMap * influenceMap; // r31
    class cXObject * obj; // r30
}

// Range: 0x80144118 -> 0x80144298
// this: r30
int ObjectModule::KillAllObjects() {
    // Local variables
    class cXObject * pObj; // r31
    class vector temp; // r1+0x20
    class vector temp; // r1+0x10
    class PassiveInfluenceSystem * piSys; // r0

    // References
    // -> class EGlobal _globals;
    // -> class EAnimManager _animman;
    // -> unsigned int sCameraAnimPending;
}

// Range: 0x80144298 -> 0x80144410
// this: r25
int ObjectModule::KillObjectsOutsideBounds(int minX /* r26 */, int minY /* r27 */, int maxX /* r28 */, int maxY /* r29 */) {
    // Local variables
    class cXObject * cur_obj; // r31
    class CTilePt where; // r1+0x8
    class cXObject * next_obj; // r30
    class cXObject * leader; // r24
}

// Range: 0x80144410 -> 0x8014457C
// this: r27
void ObjectModule::UpdateSimObjects() {
    // Local variables
    class vector simObjects; // r1+0x10
    class cXObject * srch; // r1+0xC
    struct ObjDefinition * def; // r0
    class ObjSelector * sel; // r30
    const struct ObjDefinition * def; // r0
    signed short foundID; // r29
    class cXObject * * i; // r28
}

// Range: 0x8014457C -> 0x801446E4
// this: r26
void ObjectModule::AddToKillQueue(signed short id /* r1+0x8 */, unsigned char cleanup /* r27 */) {
    // Local variables
    class cXObject * obj; // r30
    class cXMTObject * mtObj; // r31
    class cXMTObject * lead; // r0
    class cXObject * rootSrch; // r29
    int i; // r28
    int i; // r28
}

// Range: 0x801446E4 -> 0x80144784
// this: r30
unsigned char ObjectModule::IsFamilyMemberAwakeAndVisible() {
    // Local variables
    class cXPerson * * i; // r31
}

// Range: 0x80144784 -> 0x80144870
// this: r31
unsigned char ObjectModule::DoCommand() {
    // Local variables
    class SlotLoader sl; // r1+0x8
    class cXObject * obj; // r31
}

// Range: 0x80144870 -> 0x80144B9C
// this: r28
signed short ObjectModule::AddObject(class cXObject * obj /* r29 */, signed short newID /* r30 */, unsigned char eol /* r31 */) {
    // Local variables
    signed short iStart; // [invalid]
    char errorBuffer[256]; // r1+0x18
    class cXPerson * person; // r1+0x10
    class cXPortal * portal; // r1+0xC

    // References
    // -> class GameData _gd;
    // -> class EApp * _pApp;
}

// Range: 0x80144B9C -> 0x80144DD0
// this: r30
void ObjectModule::RemoveObject(class cXObject * obj /* r31 */) {
    // Local variables
    signed short id; // r0
    class cXObject * last; // r29
    class cXObject * i; // r3
    signed short * it; // r27
    class cXPerson * person; // r0
    class cXPerson * * i; // r27
    class cXPortal * portal; // r0
    class cXPortal * * i; // r27
    unsigned char found; // r27
    class cXObject * * i; // r28
}

// Range: 0x80144DD0 -> 0x80144DFC
void ObjectModule::DisableBuyAndBuild(class cXObject * disabler /* r1+0x8 */) {}

// Range: 0x80144DFC -> 0x80144E78
// this: r29
void ObjectModule::EnableBuyAndBuild(class cXObject * enabler /* r30 */) {
    // Local variables
    class cXObject * * i; // r31
}

// Range: 0x80144E78 -> 0x80144F80
// this: r28
unsigned char ObjectModule::CheckIntegrity() {
    // Local variables
    class cFixedWorld * world; // r31
    class cXObject * obj; // r30
    class CTilePt objLoc; // r1+0xC
    class cXObject * root; // r29
    class CTilePt rootLoc; // r1+0x8
}

// Range: 0x80144F80 -> 0x80145004
// this: r29
void ObjectModule::ClearAwarenessOfObject(class cXObject * objToBeCleared /* r30 */) {
    // Local variables
    class cXPerson * * i; // r31
    class cXPerson * pPerson; // r0
}

// Range: 0x80145004 -> 0x80145084
// this: r29
void ObjectModule::CleanupPeople(class cXObject * respect /* r30 */) {
    // Local variables
    class cXPerson * * i; // r31
}

// Range: 0x80145084 -> 0x80145128
void ObjectModule::BroadcastMessage(const char * message /* r29 */) {
    // Local variables
    signed short stackVars[4]; // r1+0x8
    class cXObject * srch; // r31
    class Behavior * b; // r30
    signed short treeID; // r0
}

// Range: 0x80145128 -> 0x80145180
void ObjectModule::UpdateWallAdjacencies() {
    // Local variables
    class cXObject * srch; // r31
}

// Range: 0x80145180 -> 0x801451E4
// this: r30
void ObjectModule::InvalidateAllRoutes() {
    // Local variables
    class cXPerson * * i; // r31
}

// Range: 0x801451E4 -> 0x8014524C
// this: r29
void ObjectModule::RelationshipAccessed(class Neighbor * from /* r30 */, class Neighbor * to /* r31 */) {}

// Range: 0x8014524C -> 0x80145328
// this: r25
void ObjectModule::OffsetObjectMap(const class CTilePt & inOffset /* r26 */) {
    // Local variables
    signed short tempObjectMap[64][64]; // r1+0x8
    int x; // r29
    int y; // r28
    int copyX; // r27
    int copyY; // r3
}

// Range: 0x80145328 -> 0x8014565C
// this: r30
void ObjectModule::OffsetWorld(const class CTilePt & inOffset /* r31 */) {
    // Local variables
    int minX; // r27
    int minY; // r29
    int maxX; // r26
    int maxY; // r25
    class cXObject * anObject; // r25
    unsigned char bInWorld; // r0
    class cXMTObject * mt_obj; // r0
    class cXObject * leader; // r26
    class cXObject * next_obj; // r27
    class FTilePt loc; // r1+0x28
    class FTilePt loc; // r1+0x20
    class cXObject * next; // r26
}

// Range: 0x8014565C -> 0x80145694
unsigned char ObjectModule::SetTutorialObject() {}

// Range: 0x80145694 -> 0x80145884
void ObjectModule::ComputeStats(int * familyObjectsValue /* r26 */, int * lotObjectsValue /* r27 */, unsigned char * outHasPhone /* r28 */, unsigned char * outHasBaby /* r29 */, unsigned char * hasUserPlacedObjects /* r30 */) {
    // Local variables
    class cXObject * next; // r31
    class cXObject * srch; // r21
    class cXMTObject * mtSrch; // r22
}

// Range: 0x80145884 -> 0x801458F8
unsigned char ObjectModule::IsSelectionSwitchingAllowed() {
    // References
    // -> class GameData _gd;
}

// Range: 0x801458F8 -> 0x80145948
unsigned char ObjectModule::IsValidObject(const class cXObject * object /* r31 */) {
    // Local variables
    class cXObject * srch; // r3
}

// Range: 0x80145948 -> 0x8014596C
void ObjectModule::AdvanceSelectedPerson() {}

// Range: 0x8014596C -> 0x80145990
class cXPerson * ObjectModule::GetSelectedPerson() {}

// Range: 0x80145990 -> 0x80145A60
// this: r28
void ObjectModule::ClearIdleStatus(int id /* r29 */) {
    // Local variables
    class cXObject * obj; // r0
    class StackElem * objElem; // r31
    struct BehaviorNode node; // r1+0x8
    unsigned char nodeExists; // r0
    signed short idleStatus; // r30
}

// Range: 0x80145A60 -> 0x80145AE4
// this: r28
void ObjectModule::SetSimFlag(int id /* r29 */, unsigned char on /* r30 */) {
    // Local variables
    int flag; // r31
}

// Range: 0x80145AE4 -> 0x80145B30
unsigned char ObjectModule::GetSimFlag(enum SimFlag flag /* r31 */) {}

// Range: 0x80145B30 -> 0x80145B64
int ObjectModule::GetIdleStatus() {}

// Range: 0x80145B64 -> 0x80145BD8
// this: r29
void ObjectModule::SetIdleStatus(int id /* r30 */, int ticks /* r31 */) {}

// Range: 0x80145BD8 -> 0x80145C3C
// this: r30
class cXObject * ObjectModule::GetObjectFromID(int id /* r31 */) {}

// Range: 0x80145C3C -> 0x80145CC8
// this: r29
signed short ObjectModule::GetTileObjectID(const class CTilePt & in /* r30 */) {
    // Local variables
    int x; // r0
    int y; // r0
}

// Range: 0x80145CC8 -> 0x80145D48
// this: r28
void ObjectModule::SetTileObjectID(const class CTilePt & in /* r29 */, signed short objID /* r30 */) {
    // Local variables
    unsigned int x; // r0
    unsigned int y; // r0
}

// Range: 0x80145D48 -> 0x80145DA8
// this: r31
class cXPerson * ObjectModule::CreateNeighbor() {
    // Local variables
    class ObjSelector * objSel; // r0
    signed short newObjectID; // r0
    class cXObject * newObj; // r0
    class cXPerson * newPerson; // r0
}

// Range: 0x80145DA8 -> 0x80145DF4
class cXObject * ObjectModule::GetObject() {}

// Range: 0x80145DF4 -> 0x80145EC4
int ObjectModule::GetNumObjects() {
    // Local variables
    int iCount; // r31
    int i; // r5
}

// Range: 0x80145EC4 -> 0x80145F94
// this: r29
class cXPerson * ObjectModule::GetNextPerson(unsigned short personID /* r30 */) {
    // Local variables
    int size; // r0
    class cXPerson * * i; // r31
}


