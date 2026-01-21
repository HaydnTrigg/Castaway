/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\iobject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802328D0 -> 0x802397C8
*/
// Range: 0x802328D0 -> 0x80232970
static void ExpandBoundingBox(class EBound3 & bound /* r31 */) {
    // Local variables
    class EVec3 extraPts[2]; // r1+0x20
}

// Range: 0x80232970 -> 0x80232B24
// this: r30
ISimsObjectModel::ISimsObjectModel() {
    // References
    // -> class EModelManager _modelman;
    // -> struct [anonymous] __vt__16ISimsObjectModel;
}

// Range: 0x80232B24 -> 0x80232C8C
// this: r30
ISimsObjectModel::~ISimsObjectModel() {
    // References
    // -> class EModelManager _modelman;
    // -> class EAnimManager _animman;
    // -> struct [anonymous] __vt__16ISimsObjectModel;
}

// Range: 0x80232C8C -> 0x80232D60
float ISimsObjectModel::GetHeightOffset() {
    // Local variables
    float height; // f0
    class cXObject * pContainerOb; // r0
    class ESim * pESim; // r31
    class EVec3 vHandPos; // r1+0x8
}

// Range: 0x80232D60 -> 0x80232DCC
void ISimsObjectModel::InsertSubModelsInHouse(class ERLevel * pLevel /* r30 */) {
    // Local variables
    class NLIteratorPtrType * it; // r31
    class ISimInstance * pData; // r0
}

// Range: 0x80232DCC -> 0x80232E3C
// this: r30
void ISimsObjectModel::PropigateFlagsToSubModels() {
    // Local variables
    class NLIteratorPtrType * it; // r31
    class ISimInstance * pData; // r0
}

// Range: 0x80232E3C -> 0x80232FFC
// this: r28
void ISimsObjectModel::CleanupStuff(class ERLevel * pLevel /* r29 */) {
    // Local variables
    int i; // r30
    int n; // r0
    class EILight * l; // r0

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80232FFC -> 0x802331B0
// this: r29
void ISimsObjectModel::CheckPendingAnimation(const struct ObjAnimDef & animDef /* r30 */) {
    // Local variables
    unsigned int animToCheck; // r30

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802331B0 -> 0x80233324
// this: r29
void ISimsObjectModel::CheckPendingModel(const struct ObjAnimDef & animDef /* r30 */) {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80233324 -> 0x80233D08
// this: r28
void ISimsObjectModel::Update() {
    // Local variables
    int dir; // r0
    class EMat4 old_Orient; // r1+0x1B0
    class cXObject * pPlateContainer; // r27
    class cXObject * pSimContainer; // r0
    class ISimInstance * pInstance; // r29
    class EVec3 pos; // r1+0x48
    class EMat4 orient; // r1+0x170
    unsigned int graphic; // r31
    unsigned char bHasAnimRef; // r30
    const struct ObjAnimDef & animDef; // r29
    unsigned char shouldDelModel; // r27
    int animID; // r26
    int frame; // r25
    int frameCount; // r0
    const struct ObjAnimDef & animDef; // r25
    class EMat4 mOrient; // r1+0x130
    class cXObject * pContainerOb; // r25
    unsigned char isCarryFlagSet; // r26
    signed short slotNum; // r0
    class EVec3 vRot; // r1+0x3C
    class EMat4 personHandOrient; // r1+0xF0
    int theta; // r3
    float ftheta; // f31
    signed short slotNum; // r0
    class ObjectSlot * pSlot; // r27
    class EVec3 vOff; // r1+0x30
    float xoff; // f31
    float yoff; // f30
    class EMat4 mParentOr; // r1+0xB0
    unsigned int nodeCount; // r0
    class ISimInstance * pContainerInst; // r25
    class EBoundSphere shpere; // r1+0x20
    const class EBound3 & bound; // r0
    int theta; // r3
    float ftheta; // f30
    class EBound3 box; // r1+0x58
    class EMat4 mOrient; // r1+0x70
    class EVec3 sun; // r1+0x14

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> unsigned char _ISOM_bUpdateWarn;
}

// Range: 0x80233D08 -> 0x80233DF8
// this: r29
void ISimsObjectModel::UpdateParticle(const struct ObjAnimDef * animdef /* r30 */) {
    // Local variables
    class EMat4 mOrient; // r1+0x8
}

// Range: 0x80233DF8 -> 0x80233EAC
// this: r28
void ISimsObjectModel::DeleteNonContinualParticleEffects() {
    // Local variables
    unsigned char listCleared; // r31
    class NLIteratorPtrType * it; // r30
    class NLIteratorPtrType * itToDelete; // r29
    class EParticleObj * pParticleObj; // r0
}

// Range: 0x80233EAC -> 0x802340F4
// this: r31
void ISimsObjectModel::SetupCharacter() {
    // Local variables
    const struct ResData * const pResData; // r25
    int i; // r24
    int n; // r0
    class EILight * l; // r1+0x8
    class SimsLightInfo & li; // r0
}

// Range: 0x802340F4 -> 0x802343AC
// this: r28
void ISimsObjectModel::InitBulb() {
    // Local variables
    const struct ResData * const pResData; // r30
    const struct ObjLightDef * pLightDef; // r29
    class EMat4 mOrient; // r1+0x48
    class EIPointLight * pPoint; // r0
    class EVec3 vPos; // r1+0x38
    class EISpotLight * pSpot; // r0
    float red; // f1
    float green; // f2
    float blue; // f3

    // References
    // -> float _newlightint;
}

// Range: 0x802343AC -> 0x8023443C
// this: r29
void ISimsObjectModel::UpdateBulb(const struct ObjAnimDef * animdef /* r30 */) {}

// Range: 0x8023443C -> 0x80234550
// this: r29
void ISimsObjectModel::SetSOMModel(unsigned int modelId /* r30 */) {
    // Local variables
    unsigned int oldModelId; // r31
    class EMat4 mOrient; // r1+0x8
}

// Range: 0x80234550 -> 0x802345E0
// this: r29
void ISimsObjectModel::UpdateModel(const struct ObjAnimDef * animdef /* r30 */) {}

// Range: 0x802345E0 -> 0x80234694
// this: r29
void ISimsObjectModel::UpdateShader(const struct ObjAnimDef * animdef /* r30 */) {}

// Range: 0x80234694 -> 0x8023479C
// this: r30
void ISimsObjectModel::AnimStartImmediate(float animPosOverrideSecs /* f30 */) {
    // Local variables
    class EACTrack * pTrack; // r31
    float durationInSeconds; // f31
    float animPos; // f0
}

// Range: 0x8023479C -> 0x802348A4
// this: r30
void ISimsObjectModel::AnimStartBlendIn(float animPosOverrideSecs /* f30 */) {
    // Local variables
    class EACTrack * pTrack; // r31
    float durationInSeconds; // f31
    float animPos; // f0
}

// Range: 0x802348A4 -> 0x80234904
// this: r30
void ISimsObjectModel::KillAllAnimTracks() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80234904 -> 0x802349D8
// this: r31
void ISimsObjectModel::UpdateTracks() {
    // Local variables
    struct EAnimDef * pAnimDef; // r0
}

// Range: 0x802349D8 -> 0x80234AA4
// this: r29
void ISimsObjectModel::UpdateAnimTrack(const struct ObjAnimDef * animdef /* r30 */, unsigned char restart /* r31 */) {
    // Local variables
    float timeMultiplier; // f0

    // References
    // -> float _dt;
}

// Range: 0x80234AA4 -> 0x80234CCC
// this: r31
void ISimsObjectModel::ProcessPropertyEventTags(const struct ObjAnimDef * animdef /* r28 */, float timeMultiplier /* f31 */) {
    // Local variables
    class ERAnim * pAnim; // r29
    int animId; // r4
    int interval; // r28
    int iEvtTime; // r0
    int duration; // r28

    // References
    // -> float _dt;
    // -> class EAnimManager _animman;
    // -> unsigned char _ISOM_bUpdateWarn;
}

// Range: 0x80234CCC -> 0x80234F04
// this: r28
void ISimsObjectModel::StartNewAnimTrack(const struct ObjAnimDef * animdef /* r30 */, unsigned char restart /* r29 */) {
    // Local variables
    unsigned int animId; // r30
    float animPosOverrideSecs; // r1+0x8

    // References
    // -> unsigned char _ISOM_bUpdateWarn;
}

// Range: 0x80234F04 -> 0x80234F0C
void ISimsObjectModel::UpdateAnim() {}

// Range: 0x80234F0C -> 0x80234FE4
void ISimsObjectModel::RemoveSubModelsFromHouse(class ERLevel * pLevel /* r29 */) {
    // Local variables
    class NLIteratorPtrType * it; // r31
    class ISimInstance * pData; // r30
}

// Range: 0x80234FE4 -> 0x80235084
// this: r29
void ISimsObjectModel::ChageShader(unsigned int oldShdId /* r30 */, unsigned int newShdId /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80235084 -> 0x80235108
void OtherSide(signed short & roomId /* r29 */, signed short & lightRoomId /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x80235108 -> 0x8023518C
void ThisSide(signed short & roomId /* r29 */, signed short & lightRoomId /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x8023518C -> 0x802351C0
unsigned char Hidden() {}

// Range: 0x802351C0 -> 0x80235234
// this: r31
signed short ISimsObjectModel::GetAdjacentRoom() {}

// Range: 0x80235234 -> 0x80235394
// this: r25
void ISimsObjectModel::SetWallForPortal() {
    // Local variables
    class cXPortal * pPortal; // r29
    class ERoom * pERoom; // r28
    enum TileWallsSegment segment; // r27
    class CTilePt point; // r1+0x8
    unsigned char pointInBounds; // r0
    class TileWalls walls; // r1+0xC
    enum TileWallsSegment segpos; // r26
}

// Range: 0x80235394 -> 0x802353D0
void ISimsObjectModel::CreateShadow() {}

// Range: 0x802353D0 -> 0x80235498
// this: r31
void ISimsObjectModel::CalcOrient() {
    // Local variables
    class EMat4 mOrient; // r1+0x48
    class EMat4 mShadow; // r1+0x8
}

// Range: 0x80235498 -> 0x80235514
// this: r31
void ISimsObjectModel::CalcDynamicOrient() {
    // Local variables
    class EMat4 mShadow; // r1+0x8
}

// Range: 0x80235514 -> 0x80235518
void ISimsObjectModel::SetOutOfWorld() {}

// Range: 0x80235518 -> 0x8023551C
void ISimsObjectModel::StartBurp() {}

// Range: 0x8023551C -> 0x802357A8
// this: r31
enum TreeReturnCode ISimsObjectModel::TryAnimateObject(signed short graphicState /* r27 */, signed short * pLocalForEvent /* r28 */) {
    // Local variables
    const struct ObjAnimDef & animDef; // r30
    unsigned int nextAnimID; // r29
    class ERAnim * pAnim; // r0
    int duration; // r4

    // References
    // -> class EAnimManager _animman;
    // -> unsigned char _ISOM_bUpdateWarn;
}

// Range: 0x802357A8 -> 0x802358E4
// this: r29
enum TreeReturnCode ISimsObjectModel::PreloadAnimation(signed short graphicState /* r30 */) {
    // Local variables
    unsigned int animationID; // r30
    const struct ObjAnimDef & animDef; // r0

    // References
    // -> class EAnimManager _animman;
    // -> unsigned char _ISOM_bUpdateWarn;
}

// Range: 0x802358E4 -> 0x80235B38
void ISimsObjectModel::BlendHighlights(struct ELights * pLights /* r30 */) {
    // Local variables
    class ESimsCam * cam; // r0
    float angle; // f26
    float anglediff; // f0
    int numLightsCurrentlyOnObject; // r31
    float r; // f0
    float g; // f0
    float b; // f0
    float angle2; // f25
    float cosine; // f0
    float sine; // f0
    float angle3; // f25
    float cosine; // f0
    float sine; // f0

    // References
    // -> class GameData _gd;
}

// Range: 0x80235B38 -> 0x80235CFC
// this: r31
void ISimsObjectModel::DoLightingCalculation() {
    // Local variables
    const class DigestGeomShaderPtr * pDigest; // r4
    unsigned char hilights[2]; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> struct ELights _ERRORLightCur;
}

// Range: 0x80235CFC -> 0x80235D54
unsigned char ISimsObjectModel::IsVisible() {}

// Range: 0x80235D54 -> 0x80235D9C
// this: r31
void ISimsObjectModel::UpdateAnimController() {}

// Range: 0x80235D9C -> 0x80235DDC
unsigned char ISimsObjectModel::ShouldPlaceOnWaterSurface() {}

// Range: 0x80235DDC -> 0x80235EE8
// this: r29
unsigned char ISimsObjectModel::ShouldPlaceOnTerrain() {
    // Local variables
    unsigned char bShouldPlace; // r31
    class cXObject * pContainer; // r30
    signed short slotNum; // r0
    class ObjectSlot * pSlot; // r29
    class cXPerson * pPerson; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80235EE8 -> 0x80235FCC
// this: r30
unsigned int ISimsObjectModel::VisibilityTest(class E3DWindow & win /* r31 */) {
    // Local variables
    class EBound3 bounds; // r1+0x18
    float elevation; // r1+0x8
    unsigned int visibleResults; // r31
}

// Range: 0x80235FCC -> 0x802361D0
// this: r29
void ISimsObjectModel::DoAnimation() {
    // Local variables
    class EMat4 mOrient; // r1+0x10
    float elevation; // r1+0x8
    class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
    const struct EACNodeState * pNodeStates; // r0
    signed short nNewAnimStateFlags; // r5
}

// Range: 0x802361D0 -> 0x80236698
// this: r24
void ISimsObjectModel::Draw(struct ELevelDrawData & renderParam /* r25 */) {
    // Local variables
    float instanceAlpha; // f31
    unsigned char isAlphaFadeOn; // r30
    class EOrderTableData otd; // r1+0x60
    float elevation; // r1+0x10
    int MatsInDL; // r29
    unsigned char bSentMatrices; // r28
    const class DigestGeomShaderPtr * pDigest; // r27
    int nDigest; // r26
    float elevation; // r1+0xC
    const struct EShaderDef * pShaderDef; // r0
    float elevation; // r1+0x8
    unsigned char bDoAnimate; // r23
    class EVec3 vPos; // r1+0x14
    class EMat4 mOrient; // r1+0x20
    float ftheta; // f30
    class NLIteratorPtrType * it; // r23
    class EParticleObj * pParticleObj; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80236698 -> 0x8023679C
// this: r30
void ISimsObjectModel::DrawAsShadow(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    const class EMat4 * pmOrient; // r0
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
}

// Range: 0x8023679C -> 0x8023695C
// this: r29
void ISimsObjectModel::AnimateLights() {
    // Local variables
    struct EACNodeState * nodeStates; // r0
    int i; // r31
    int n; // r0
    class EILight * l; // r30
    const class SimsLightInfo & li; // r0
    int nodeIndex; // r24
    class EIPointLight * pl; // r0
    class EIDirLight * dl; // r0
    class EMat4 mat; // r1+0x20
    class EVec3 v; // r1+0x14
}

// Range: 0x8023695C -> 0x80236B60
// this: r27
unsigned int ISimsObjectModel::GetAnimRefByIndex(signed short animIndex /* r28 */) {
    // Local variables
    class AUTOPTR privatetable; // r1+0xC
    unsigned char hasPrivateTable; // r30
    class AUTOPTR semitable; // r1+0x8
    unsigned char hasSemiTable; // r29
    int iNumStates; // r30
    unsigned int tempAnimID; // r0
}

// Range: 0x80236B60 -> 0x80236C5C
// this: r27
struct ObjAnimDef & ISimsObjectModel::GetAnimDef(int graphic /* r28 */) {
    // Local variables
    int iNumStates; // r0
    int index; // [invalid]
    unsigned char found; // r30
    int i; // r29
    const struct ObjAnimDef & state; // r0
}

// Range: 0x80236C5C -> 0x80236E4C
// this: r29
int ISimsObjectModel::processAnimEvents(const class ERAnim * pAnim /* r30 */, int iStartTime /* r20 */, int interval /* r31 */, unsigned char bBackward /* r21 */) {
    // Local variables
    int size; // r27
    int delay; // r26
    const class TArray * notes; // r25
    int iEvtTime; // r24
    int i; // r23
    int modTime; // r26
    int negTime; // r22
    int rStartTime; // r22
    int i; // r23
    int modTime; // r26
    int negTime; // r21
}

// Range: 0x80236E4C -> 0x8023709C
// this: r31
unsigned char ISimsObjectModel::animEventHandler(const struct EAnimNote & event /* r28 */, int preLoadMod /* r29 */) {
    // Local variables
    int number; // r1+0x8
    class NLIteratorPtrType * it; // r29
    const class REffectsAttachment * pEffectAttachment; // r0
    class EParticleObj * pParticleObj; // r0
    class EMat4 mOrient; // r1+0x10

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x8023709C -> 0x80237180
// this: r29
void ISimsObjectModel::SetInitalObjectState() {
    // Local variables
    unsigned int graphic; // r31
    const struct ObjAnimDef & animDef; // r30

    // References
    // -> unsigned char _ISOM_bInitWarn;
}

// Range: 0x80237180 -> 0x80237200
void PortalRoom(signed short & roomId /* r29 */, signed short & lightRoomId /* r30 */) {
    // Local variables
    class RoomManager * roomManager; // r31
    class Room * room; // r0
}

// Range: 0x80237200 -> 0x802372B8
// this: r31
void ISimsObjectModel::Create() {}

// Range: 0x802372B8 -> 0x80237324
unsigned int ISimsObjectModel::GetTreeAnimationId() {}

// Range: 0x80237324 -> 0x802374A0
unsigned int ISimsObjectModel::GetTreeModelId() {}

// Range: 0x802374A0 -> 0x80237500
// this: r31
enum eTreeType ISimsObjectModel::GetTreeType() {
    // Local variables
    enum eTreeType eTree; // r0
}

// Range: 0x80237500 -> 0x8023764C
// this: r30
void ISimsObjectModel::SetObjOrient() {
    // Local variables
    class cXObject * pXOb; // r31
    float _xoff; // f30
    float _yoff; // f31
    class CTilePt pt; // r1+0x8
    int theta; // r0
    float ftheta; // f29
    class EVec3 vPos; // r1+0x18
}

// Range: 0x8023764C -> 0x802376BC
// this: r30
void ISimsObjectModel::OrientSubObjects() {
    // Local variables
    class NLIteratorPtrType * iter; // r31
    class ISimInstance * p; // r0
}

// Range: 0x802376BC -> 0x80237830
// this: r30
void ISimsObjectModel::OrentSubObject() {
    // Local variables
    int theta; // r0
    float ftheta; // f31
    class EMat4 mOr; // r1+0x10
    float _xoff; // f30
    float _yoff; // f29
    class CTilePt pt; // r1+0x8
}

// Range: 0x80237830 -> 0x8023787C
// this: r31
ISimsWallObjectModel::ISimsWallObjectModel() {
    // References
    // -> struct [anonymous] __vt__20ISimsWallObjectModel;
}

// Range: 0x8023787C -> 0x802378D4
// this: r30
ISimsWallObjectModel::~ISimsWallObjectModel() {}

// Range: 0x802378D4 -> 0x802378D8
void ISimsWallObjectModel::CreateShadow() {}

// Range: 0x802378D8 -> 0x80237934
// this: r31
void ISimsWallObjectModel::Create() {}

// Range: 0x80237934 -> 0x80237DA4
// this: r27
void ISimsWallObjectModel::SetObjOrient() {
    // Local variables
    class cXObject * pXOb; // r31
    class EMat4 mOr; // r1+0xB8
    float _HouseXoff; // f31
    float _HouseYoff; // f30
    int theta; // r30
    float ftheta; // f28
    class EVec2 vCenter; // r1+0x20
    class cXMTObject * pMtOb; // r29
    class cXMTObject * pMaster; // [invalid]
    class cXMTObject * pCurObj; // r28
    class EIObjTileBoundRect m_tileBoundRect; // r1+0x68
    class CTilePt pt; // r1+0x18
    float xoff; // f28
    float yoff; // f29
    const struct ResData * const pResData; // r3
    const struct ObjLightDef * pLightDef; // r28
    class EMat4 mOrient; // r1+0x78
    class EIPointLight * pPoint; // r29
    class EVec3 vPos; // r1+0x58
    class EISpotLight * pSpot; // r29
}

// Range: 0x80237DA4 -> 0x80237DF0
// this: r31
ISimsMultiTileObjectModel::ISimsMultiTileObjectModel() {
    // References
    // -> struct [anonymous] __vt__25ISimsMultiTileObjectModel;
}

// Range: 0x80237DF0 -> 0x80237E48
// this: r30
ISimsMultiTileObjectModel::~ISimsMultiTileObjectModel() {}

// Range: 0x80237E48 -> 0x80237EA4
// this: r31
void ISimsMultiTileObjectModel::Create() {}

// Range: 0x80237EA4 -> 0x80238264
// this: r31
void ISimsMultiTileObjectModel::SetObjOrient() {
    // Local variables
    class cXObject * pXOb; // r29
    class cXMTObject * pMtOb; // r30
    class cXMTObject * pMaster; // [invalid]
    int theta; // r3
    float ftheta; // f30
    class EVec2 vCenter; // r1+0x28
    class cXMTObject * pCurrent; // r28
    class cXMTObject * pLeadObjectTile; // r27
    struct ObjDefinition * pObjDefinition; // r0
    int anchor; // r26
    class cXMTObject * pCurObj; // r25
    class EIObjTileBoundRect m_tileBoundRect; // r1+0x48
    class cXPortal * pPortal; // r25
    class ERoom * pERoom; // r26
    enum TileWallsSegment segment; // r27
    class CTilePt point; // r1+0x20
    unsigned char pointInBounds; // r0
    class TileWalls walls; // r1+0x58
    enum TileWallsSegment segpos; // r28
    int i; // r25
    class EIPortalPointLight * ppl; // r3
}

// Range: 0x80238264 -> 0x802382B0
// this: r31
ISimsCounterTopObject::ISimsCounterTopObject() {
    // References
    // -> struct [anonymous] __vt__21ISimsCounterTopObject;
}

// Range: 0x802382B0 -> 0x80238308
// this: r30
ISimsCounterTopObject::~ISimsCounterTopObject() {}

// Range: 0x80238308 -> 0x80238344
// this: r31
void ISimsCounterTopObject::Create() {}

// Range: 0x80238344 -> 0x802385F4
// this: r25
void ISimsCounterTopObject::SetObjOrient() {
    // Local variables
    int graphic; // r31
    unsigned int workbenchId; // r29
    const struct ECntrMdlLkupTable & modelList; // r28
    const struct ECntrMdlLkupNode * pModels; // r27
    unsigned int workbenchIdKey; // r0
    int count; // r26
    class CTilePt point; // r1+0x8
    class ObjectIterator i; // r1+0xC
    class cXObject * pTempOb; // r26

    // References
    // -> class EGlobal _globals;
}

// Range: 0x802385F4 -> 0x80238670
unsigned char ISimsCounterTopObject::IsSinkId(class cXObject * pOb /* r30 */) {}

// Range: 0x80238670 -> 0x802386BC
// this: r31
IShrubObject::IShrubObject() {
    // References
    // -> struct [anonymous] __vt__12IShrubObject;
}

// Range: 0x802386BC -> 0x80238714
// this: r30
IShrubObject::~IShrubObject() {}

// Range: 0x80238714 -> 0x80238770
// this: r31
void IShrubObject::Create() {}

// Range: 0x80238770 -> 0x80238B40
// this: r28
void IShrubObject::SetObjOrient() {
    // Local variables
    class cXObject * pXOb; // r30
    float _xoff; // f30
    float _yoff; // f31
    class CTilePt pt; // r1+0x18
    float xs; // f29
    float ys; // f28
    class TileWalls walls; // r1+0x64
    unsigned char bGotVNeighbor; // r31
    unsigned char bGotHNeighbor; // r29
    class ObjectIterator leftIt; // r1+0x58
    class cXObject * pTempOb; // r0
    class ObjectIterator topIt; // r1+0x4C
    class cXObject * pTempOb; // r0
    class ObjectIterator rightIt; // r1+0x40
    class cXObject * pTempOb; // r0
    class ObjectIterator botIt; // r1+0x34
    class cXObject * pTempOb; // r0

    // References
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x80238B40 -> 0x80238BE0
unsigned char IsShrubId(class cXObject * pOb /* r30 */) {}

// Range: 0x80238BE0 -> 0x80238C18
unsigned char ISimsObjectModel::IsMultiTilePart() {
    // Local variables
    const struct ResData * const pResData; // r3
}

// Range: 0x80238C18 -> 0x80239580
// this: r31
void ISimsObjectModel::ApplyMatrix(float ftheta /* f26 */, const class EVec3 & vPos /* r26 */, const class EVec3 & vScale /* r27 */) {
    // Local variables
    class EMat4 mOrient; // r1+0x1E8
    class EVec3 vThis; // r1+0xC0
    class EVec3 vOther; // r1+0xB4
    unsigned int thisId; // r29
    unsigned int otherId; // r28
    class CTilePt ptThis; // r1+0x18
    class CTilePt ptOther; // r1+0x14
    class FTilePt fPtThis; // r1+0x40
    class FTilePt fPtOther; // r1+0x38
    class EVec3 vusePos; // r1+0xA8
    class EVec2 vShiftPos; // r1+0x30
    class CTilePt tile; // r1+0x10
    int lotXstart; // r28
    int lotYstart; // r3
    unsigned short roomid; // r29
    class Room * pRoom; // r0
    class EMat4 mOr; // r1+0x1A8
    class cXObject * pContainerOb; // r28
    class ESim * pESim; // r0
    class cXObject * pContained; // r28
    class ISimInstance * pISimContained; // r29
    class cXObject * pParent; // r28
    float slotHeight; // r1+0xC
    class EVec3 vOff; // r1+0x9C
    class cXObject * pObject; // r29
    signed short slotNum; // r0
    class ObjectSlot * pSlot; // r29
    float xoff; // f27
    float yoff; // f26
    int theta; // r0
    float fthetapar; // f26
    class EMat4 mParentOr; // r1+0x168
    const struct ResData * const pResData; // r28
    class EBound3 bound; // r1+0xD0
    float dummy; // r1+0x8
    class EMat4 mShadow; // r1+0x128
    const struct ResData * const pResData; // r3
    const struct ObjLightDef * pLightDef; // r28
    class EMat4 mOrient; // r1+0xE8
    class EIPointLight * pPoint; // r29
    class EVec3 vPos; // r1+0x90
    class EISpotLight * pSpot; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80239580 -> 0x802397C8
// this: r27
void ISimsObjectModel::DrawCursorHighLight(class ERC * prc /* r28 */, class EVec3 & vPos /* r29 */, unsigned char bDoAnimation /* r30 */) {
    // Local variables
    class EVec3 objectColor; // r1+0x1C
    int it; // r6
    int ring_S0; // r31
    int ring_S1; // r30
    float usetime; // f1
    float _range[2]; // r1+0x8
    float mu; // f1
    float wmu; // f0
    float xyscale; // f31
    float zscale; // f30
    class EMat4 mStatic; // r1+0x28
    struct ELights _deflight; // r1+0x68

    // References
    // -> float _dt;
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class EGlobal _globals;
}


