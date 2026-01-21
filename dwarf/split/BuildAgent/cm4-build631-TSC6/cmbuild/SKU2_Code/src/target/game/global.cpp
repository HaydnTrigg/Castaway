/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\global.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022A564 -> 0x8022E06C
*/
// Range: 0x8022A564 -> 0x8022A5CC
// this: r30
EGlobal::~EGlobal() {}

// Range: 0x8022A5CC -> 0x8022A8A8
// this: r29
EGlobal::EGlobal() {
    // References
    // -> class ERShader * m_pWhiteShader;
    // -> static const unsigned short * const _pEmptyString;
    // -> static class ELocString _emptyString;
}

// Range: 0x8022A8A8 -> 0x8022A8BC
void EGlobal::SetAuthorModeCheats() {}

// Range: 0x8022A8BC -> 0x8022A8C8
unsigned int EGlobal::GetGameFontID() {}

// Range: 0x8022A8C8 -> 0x8022AE1C
// this: r29
void EGlobal::LoadIntroRequirements() {
    // Local variables
    class UI2D * pUI2D; // r30
    const char * const kGlobalShaders; // r29

    // References
    // -> class EGlobal _globals;
    // -> class EQuickdataManager _quickdataman;
    // -> class EFontManager _fontman;
    // -> class EShaderManager _shaderman;
}

// Range: 0x8022AE1C -> 0x8022AE6C
// this: r31
void EGlobal::LoadPreGlobalRequirements() {
    // References
    // -> struct ECheatVariables * pEORCheats;
}

// Range: 0x8022AE6C -> 0x8022B1EC
// this: r31
void EGlobal::SetDefaults() {
    // Local variables
    const struct ERQTable * pWalTab; // r1+0x14
    const struct ERQTable * pFloorTab; // r1+0x10
    const struct ERQTable * pFenceTab; // r1+0xC

    // References
    // -> class GameData _gd;
    // -> class EGlobal * pEORGlobals;
    // -> class Globs * globs;
    // -> class ERShader * m_pWhiteShader;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
    // -> class EShaderManager _shaderman;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x8022B1EC -> 0x8022B4A0
void EGlobal::SetupSubstitutionStrings() {
    // References
    // -> class BString2 _sButton3NGC;
    // -> class BString2 _sButton2NGC;
    // -> class BString2 _sButton1NGC;
    // -> class BString2 _sThe3TextNGC;
    // -> class BString2 _sThe2TextNGC;
    // -> class BString2 _sThe1TextNGC;
    // -> class BString2 _sDpadRightButtNGC;
    // -> class BString2 _sDpadLeftButtNGC;
    // -> class BString2 _sDpadDownButtNGC;
    // -> class BString2 _sDpadUpButtNGC;
    // -> class BString2 _sdxButtNGC;
    // -> class BString2 _ssxButtNGC;
    // -> class BString2 _sIButtNGC;
    // -> class BString2 _sDButtNGC;
    // -> class BString2 _sGButtNGC;
    // -> class BString2 _sRoomButtNGC;
    // -> class BString2 _sSocialButtNGC;
    // -> class BString2 _sFunButtNGC;
    // -> class BString2 _sEnergyButtNGC;
    // -> class BString2 _sBladderButtNGC;
    // -> class BString2 _sHygieneButtNGC;
    // -> class BString2 _sComfortButtNGC;
    // -> class BString2 _sHungerButtNGC;
    // -> class BString2 _sDpadButtNGC;
    // -> class BString2 _sCenterCursorButtonButtNGC;
    // -> class BString2 _sWallButtonButtNGC;
    // -> class BString2 _sStartButtNGC;
    // -> class BString2 _sSelectButtNGC;
    // -> class BString2 _sRanalogButtNGC;
    // -> class BString2 _sLanalogButtNGC;
    // -> class BString2 _sZButtNGC;
    // -> class BString2 _sRButtNGC;
    // -> class BString2 _sLButtNGC;
    // -> class BString2 _sYButtNGC;
    // -> class BString2 _sXButtNGC;
    // -> class BString2 _sBButtNGC;
    // -> class BString2 _sAButtNGC;
    // -> class BString2 _sNewLine;
    // -> class BString2 _sButtonSymbol;
    // -> class BString2 _sRbrack;
    // -> class BString2 _sLbrack;
    // -> class BString2 _sComma;
    // -> class BString2 _sColon;
    // -> class BString2 _s100s;
    // -> class BString2 _s1000s;
    // -> class BString2 _sDlrSgn;
    // -> class BString2 _sLiquidate;
    // -> class BString2 _sName;
    // -> class BString2 _sAmount;
    // -> class BString2 _sNum;
    // -> class BString2 _sAM_PMLookup;
    // -> class BString2 _sMinLookup;
    // -> class BString2 _sHours24Lookup;
    // -> class BString2 _sHoursLookup;
}

// Range: 0x8022B4A0 -> 0x8022B948
// this: r31
void EGlobal::Reset() {
    // References
    // -> class GameData _gd;
    // -> class ERShader * m_pWhiteShader;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8022B948 -> 0x8022B9F0
// this: r29
void EGlobal::SetCurHouse(int house /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022B9F0 -> 0x8022BA2C
// this: r31
void EGlobal::ClearCurHouse() {}

// Range: 0x8022BA2C -> 0x8022BA44
class E3DWindow * EGlobal::GetWin() {}

// Range: 0x8022BA44 -> 0x8022BA4C
void EGlobal::SetCam() {}

// Range: 0x8022BA4C -> 0x8022BA54
class ESimsCam * EGlobal::GetCam() {}

// Range: 0x8022BA54 -> 0x8022BA5C
void EGlobal::SetCameraDirector() {}

// Range: 0x8022BA5C -> 0x8022BABC
// this: r29
void EGlobal::TransformToWorld(const class EVec2 & vScreenIn /* r30 */, class EVec3 & vWorldOut /* r31 */) {}

// Range: 0x8022BABC -> 0x8022BAC4
class ELocString EGlobal::GetLiveModeMenuUIString() {
    // References
    // -> static class ELocString _emptyString;
}

// Range: 0x8022BAC4 -> 0x8022BB4C
class ELocString EGlobal::HouseNameText(const char * pRef /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct HouseData * pData; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> static class ELocString _emptyString;
}

// Range: 0x8022BB4C -> 0x8022BBC4
unsigned int EGlobal::GetHouseLevelId(const char * houseName /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct HouseData * pData; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BBC4 -> 0x8022BC3C
unsigned int EGlobal::GetHouseGrassShaderId(const char * houseName /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct HouseData * pData; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BC3C -> 0x8022BCCC
struct LightingSequence * EGlobal::GetHouseLightingSequence(int lotNum /* r31 */) {
    // Local variables
    const struct ERQTable * pWorldDataTable; // r1+0x8
    const struct LevelData * pLevelData; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BCCC -> 0x8022BD1C
// this: r31
struct LightingSequence * EGlobal::GetCurrentHouseLightingSequence() const {}

// Range: 0x8022BD1C -> 0x8022BD98
struct LightingSequence * EGlobal::GetDefaultLightingSequence() {
    // Local variables
    const struct ERQTable * pLevelLightingSequenceTable; // r1+0xC
    const struct LightingSequence * pLightingSequenceData; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BD98 -> 0x8022BE1C
struct LevelData * EGlobal::GetLevelData(int lotNum /* r31 */) {
    // Local variables
    const struct ERQTable * pWorldDataTable; // r1+0x8
    const struct LevelData * pLevelData; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BE1C -> 0x8022BE6C
// this: r31
struct LevelData * EGlobal::GetCurrentLevelData() const {}

// Range: 0x8022BE6C -> 0x8022BEC8
struct WorldData * EGlobal::GetWorldData() {
    // Local variables
    const struct ERQTable * pWorldDataTable; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022BEC8 -> 0x8022BFC4
class ELocString EGlobal::GetNewUIString(const char * pRef /* r29 */, const char * pDefault /* r30 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0x14
    const struct NewUIStrings * pData; // r1+0x10
    unsigned short msgBufW[1028]; // r1+0x18
    const unsigned short * pMsg; // r1+0xC
    class ELocString defaultStr; // r1+0x8

    // References
    // -> static class ELocString _emptyString;
    // -> class EGlobal _globals;
}

// Range: 0x8022BFC4 -> 0x8022C0F4
// this: r27
class ELocString EGlobal::GetGenderString(const char * pRef /* r28 */, unsigned char bMale /* r29 */) {
    // Local variables
    unsigned int index; // r1+0x10
    const struct ERQTable * pTab; // r1+0xC
    const struct GenderStrings * pData; // r1+0x8
    class ELocString msgNotFound'55; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022C0F4 -> 0x8022C174
class ELocString EGlobal::GetPDAString(const char * pRef /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct PDAStrings * pData; // r1+0x8

    // References
    // -> static class ELocString _emptyString;
    // -> class EGlobal _globals;
}

// Range: 0x8022C174 -> 0x8022C260
class ELocString EGlobal::GetWantFearCategoryString(int categoryId /* r30 */, int itemId /* r29 */) {
    // Local variables
    const struct ERQTable * catTable; // r1+0x8
    const struct WantCategory * pData; // r4
    int i; // r5
    const class VECTOR & items; // r31
    int nextItem; // r30

    // References
    // -> static class ELocString _emptyString;
}

// Range: 0x8022C260 -> 0x8022C2F4
struct RelationshipTable * EGlobal::GetRelationshipTableRow(unsigned int guid /* r31 */) {
    // Local variables
    const struct RelationshipTable * pData; // r4
    const struct ERQTable * pTab; // r1+0x8
    int i; // r5
}

// Range: 0x8022C2F4 -> 0x8022C36C
class ELocString EGlobal::GetMemCardString(const char * pRef /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct MemCardStrings * pData; // r1+0x8

    // References
    // -> static class ELocString _emptyString;
    // -> class EGlobal _globals;
}

// Range: 0x8022C36C -> 0x8022C478
void EGlobal::GetNghFamilyName(class BString2 & name /* r28 */) {
    // Local variables
    int i; // r31
    const unsigned short * ptr; // r30
    unsigned short * newName; // r29
}

// Range: 0x8022C478 -> 0x8022C5F4
// this: r29
void EGlobal::GetNghHouseName(class BString2 & name /* r28 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0xC
    const struct HouseData * pData; // r1+0x8
    char buffer[64]; // r1+0x10
    int i; // r31
    const unsigned short * ptr; // r30
    unsigned short * newName; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022C5F4 -> 0x8022C67C
int EGlobal::GetWallIndex(const struct WallTile * pTile /* r28 */) {
    // Local variables
    const class VECTOR & tiles; // r30
    int iSize; // r0
    int i; // r29
}

// Range: 0x8022C67C -> 0x8022C684
class cXPerson * EGlobal::GetSelectedPerson() {}

// Range: 0x8022C684 -> 0x8022C7F8
// this: r29
void EGlobal::SetSelectedPerson(class cXPerson * newSelection /* r30 */) {
    // Local variables
    class cXPerson * cursel; // r31
    signed short playerObjectId; // r30

    // References
    // -> class GameData _gd;
}

// Range: 0x8022C7F8 -> 0x8022C82C
unsigned char EGlobal::IsPlayerInSocialMode() {
    // Local variables
    class cXPerson * pSelectedPerson; // r0
}

// Range: 0x8022C82C -> 0x8022C8DC
int EGlobal::GetFamilyIndexOfPerson(class ObjectModule * pObjMod /* r27 */, class Family * family /* r28 */, const class cXPerson * sel /* r29 */) {
    // Local variables
    int n; // r0
    int i; // r30
}

// Range: 0x8022C8DC -> 0x8022CA04
class cXPerson * EGlobal::FindNextInFamily(class Family * family /* r24 */, int startIndex /* r27 */, class cXPerson * sel /* r25 */, unsigned char includeAtWork /* r26 */) {
    // Local variables
    class ObjectModule * pObjMod; // r29
    int n; // r0
    int j; // r28
    class cXPerson * newSel; // r27
}

// Range: 0x8022CA04 -> 0x8022CA74
// this: r31
void EGlobal::AdvanceSelectedPerson() {
    // Local variables
    class ObjectModule * pObjMod; // r0
    class cXPerson * sel; // r4

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022CA74 -> 0x8022CBCC
// this: r25
class cXPerson * EGlobal::FindNextSelectablePerson(class cXPerson * sel /* r26 */, unsigned char includeAtWork /* r27 */) {
    // Local variables
    class ObjectModule * pObjMod; // r31
    class cXPerson * ret; // r0
    int numFamilies; // r0
    class Family * nextFamily; // r0
    int curFamilyNum; // r29
    int curFamilyIndex; // r28
    int i; // r28
}

// Range: 0x8022CBCC -> 0x8022CD04
// this: r26
unsigned char EGlobal::SelectPrevInFamily(class Family * family /* r27 */, int startIndex /* r28 */) {
    // Local variables
    class ObjectModule * pObjMod; // r30
    int n; // r3
    int j; // r29
    class cXPerson * newSel; // r28
}

// Range: 0x8022CD04 -> 0x8022CE3C
// this: r26
void EGlobal::ReverseSelectedPerson() {
    // Local variables
    class ObjectModule * pObjMod; // r31
    class cXPerson * sel; // r29
    int numFamilies; // r0
    class Family * nextFamily; // r0
    int curFamilyNum; // r28
    int curFamilyIndex; // r27
    int i; // r27

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022CE3C -> 0x8022CF84
void EGlobal::GetCursorPosAsFtile(class FTilePt & pOut /* r30 */) {
    // Local variables
    class EVec3 vcurspos; // r1+0x8
    class Interactor * pInteractor; // r0
    float fy; // f31
    float fx; // f3
    int xint; // r4
    int yint; // r5

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022CF84 -> 0x8022D064
// this: r29
void EGlobal::DestroyInstance(class IBaseSimInstance * * ppInstance /* r30 */) {
    // Local variables
    class ISimInstance * pInstance; // r31
}

// Range: 0x8022D064 -> 0x8022D124
// this: r30
void EGlobal::AllocInstance(class cXObject * pObject /* r31 */) {
    // Local variables
    class ISimInstance * pInst; // r0
}

// Range: 0x8022D124 -> 0x8022D2A4
void EGlobal::AllocPersonInstance(class cXPerson * pPerson /* r27 */) {
    // Local variables
    class cXObject * pObj; // r29
    class EIStaticModel * shadow; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022D2A4 -> 0x8022D2AC
class ESpriteRender * EGlobal::AllocSpriteRenderer() {}

// Range: 0x8022D2AC -> 0x8022D2C0
void EGlobal::FreeSpriteRenderer() {}

// Range: 0x8022D2C0 -> 0x8022D2C8
void EGlobal::UpdateSpriteRenderer() {}

// Range: 0x8022D2C8 -> 0x8022D320
struct SpriteIdToResIdNode * EGlobal::ConvertSpriteIdToResId(unsigned int id /* r31 */) {
    // Local variables
    const struct ERQTable * pTab; // r1+0x8
    const struct SpriteIdToResIdNode * pData; // r3
}

// Range: 0x8022D320 -> 0x8022D358
struct ECntrMdlLkupTable & EGlobal::GetCounterModelTable() {
    // Local variables
    const struct ERQTable * pTab; // r1+0x8
}

// Range: 0x8022D358 -> 0x8022D364
void EGlobal::LoadSelectorData() {
    // References
    // -> class ESimsDataManager _simsdataman;
}

// Range: 0x8022D364 -> 0x8022D374
void EGlobal::UnloadSelectorData() {
    // References
    // -> class ESimsDataManager _simsdataman;
}

// Range: 0x8022D374 -> 0x8022D3D8
void OrientObjectInstance(class cXObject * pObj /* r31 */) {}

// Range: 0x8022D3D8 -> 0x8022D3F8
class ISimInstance * GetObjectInstance() {}

// Range: 0x8022D3F8 -> 0x8022D440
// this: r31
void EGlobal::RecalcHouse() {}

// Range: 0x8022D440 -> 0x8022D4E8
void EGlobal::BeginSaveGame() {
    // References
    // -> class EGlobal _globals;
    // -> class EResourceLoader * _pResLoader;
    // -> class EGraphics * _pGfx;
    // -> class ESimsApp _app;
}

// Range: 0x8022D4E8 -> 0x8022D520
void EGlobal::EndSaveGame() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022D520 -> 0x8022D550
void CollectInteractionsForObject() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022D550 -> 0x8022D7F8
void CollectInteractionsForObject(class cXObject * pXObj /* r21 */, class InteractionList & mInteractions /* r26 */, class cXPerson * pPerson /* r27 */, int maxToAdd /* r28 */, unsigned char bSameTileOnlyInDC /* r29 */) {
    // Local variables
    int originalSize; // r0
    struct ObjDefinition * pDef; // r0
    int groupId; // r30
    unsigned char isInteractionGroupLead; // r23
    class cXMTObject * mtobj; // r22
    class ObjTestSim testSim1; // r1+0x5C
    struct ObjDefinition * pDef2; // r0
    int groupId2; // r0
    class ObjTestSim testSim1; // r1+0x40
    class ObjTestSim testSim1; // r1+0x24
    class ObjTestSim testSim1; // r1+0x8
}

// Range: 0x8022D7F8 -> 0x8022D874
unsigned char EGlobal::CheckForZeroExtentOverride(const class cXObject * pObjToIgnore /* r31 */) {
    // Local variables
    class ObjectIterator i; // r1+0x8
    class cXObject * pTempOb; // r0
}

// Range: 0x8022D874 -> 0x8022D8AC
unsigned char EGlobal::CheckForZeroExtentOverride() {}

// Range: 0x8022D8AC -> 0x8022D964
void EGlobal::SetBackgroundColor(float r /* f29 */, float g /* f30 */, float b /* f31 */) {
    // Local variables
    class EVec3 old_background_color; // r1+0x18
    int old_background_alpha; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8022D964 -> 0x8022DA24
void EGlobal::UseOptionsScreenAdjustXY() {
    // Local variables
    unsigned char bChanged; // r5
    signed char nX; // r6
    signed char nY; // r31

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
}

// Range: 0x8022DA24 -> 0x8022DA2C
unsigned int EGlobal::GetPlayerCheats() {}

// Range: 0x8022DA2C -> 0x8022DA4C
unsigned char EGlobal::IsPlayerCheatOn() {}

// Range: 0x8022DA4C -> 0x8022DB48
void EGlobal::TogglePlayerCheat(int cheat /* r29 */) {
    // Local variables
    unsigned char bCheatIsOn; // r30

    // References
    // -> class cSoundPlayer * pSound;
    // -> class GameData _gd;
}

// Range: 0x8022DB48 -> 0x8022DDE8
void EGlobal::InitPlayerCheats() {
    // Local variables
    unsigned short btnMask; // r5
    unsigned short allMask; // r26
    int cheatNum; // r0
}

// Range: 0x8022DDE8 -> 0x8022DEB4
int EGlobal::TryAutoMapPlayer() {
    // Local variables
    int i; // r30
    class EController * control; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8022DEB4 -> 0x8022DF30
unsigned char EGlobal::IsSaveGameEnabled() {
    // Local variables
    unsigned char bEnabled; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8022DF30 -> 0x8022DF34
void EGlobal::SetStartStallTimer() {}

// Range: 0x8022DF34 -> 0x8022DF38
void EGlobal::TraceStallTimer() {}

// Range: 0x8022DF38 -> 0x8022DF70
int GetSimulatorFunds() {}

// Range: 0x8022DF70 -> 0x8022DFBC
unsigned char SetSimulatorFunds(int funds /* r31 */) {}

// Range: 0x8022DFBC -> 0x8022DFC4
int GetSimPetPoints() {}

// Range: 0x8022DFC4 -> 0x8022E014
void SetUIStatusText() {}

// Range: 0x8022E014 -> 0x8022E018
unsigned int GetClockCycleCount() {}

// Range: 0x8022E018 -> 0x8022E06C
unsigned int LoadHousePreloadDataset() {
    // Local variables
    char housepredataset[64]; // r1+0x8

    // References
    // -> class EDatasetManager _datasetman;
}


