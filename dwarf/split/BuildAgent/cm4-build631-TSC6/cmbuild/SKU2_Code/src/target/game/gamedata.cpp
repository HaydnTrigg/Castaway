/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\gamedata.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80227780 -> 0x8022A068
*/
// Range: 0x80227780 -> 0x80227864
// this: r30
GameData::GameData() {}

// Range: 0x80227864 -> 0x802278D8
// this: r30
GameData::~GameData() {}

// Range: 0x802278D8 -> 0x8022790C
void GameData::GamePlayShutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8022790C -> 0x80227964
// this: r31
void GameData::GamePlayReset() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80227964 -> 0x80227A34
void GameData::LoadDefaultNeighborhood() {
    // References
    // -> class GameData _gd;
    // -> class ESimsApp _app;
}

// Range: 0x80227A34 -> 0x80227A88
void GameData::LoadSavedNeighborhood() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80227A88 -> 0x80227BF8
void GameData::LoadPlayerFamilyThumbnails(unsigned char bLoadFromDisk /* r25 */) {
    // Local variables
    class Neighbor * * n; // r27
    class Family * pFamily; // r26
    class ERShader * pShader; // r1+0x8
    int nGUID; // r0
    const struct RelationshipTable * relTableRow; // r0

    // References
    // -> class EShaderManager _shaderman;
    // -> class EGlobal _globals;
}

// Range: 0x80227BF8 -> 0x80227CCC
void GameData::UnloadPlayerFamilyThumbnails() {
    // Local variables
    class Neighbor * * n; // r30
    class Family * pFamily; // r29
}

// Range: 0x80227CCC -> 0x80227E0C
// this: r27
void GameData::PrepareSimData(int neighborId /* r29 */, int nSlotIndex /* r28 */) {
    // Local variables
    class Neighbor * neighbor; // r29
    int familyNum; // r29
    class Family * family; // r0
    const class FamilyMember * member; // r0
    class ENeighborhoodCustomChar & customChar; // r28
    class CasSimDescription * pSimDesc; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80227E0C -> 0x80227ECC
// this: r28
void GameData::ReplaceSimData(int neighborId /* r31 */, int nSimNum /* r29 */, int nSlotIndex /* r30 */) {
    // Local variables
    class Neighbor * neighbor; // r3
    int familyNum; // r31
    class Family * family; // r0
    const class FamilyMember * member; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80227ECC -> 0x80228014
void GameData::PlayerEnterHouse() {
    // Local variables
    int iHouseNum; // r30
    int selectedFamily; // r29
    class Family * p1Family; // r29
    enum TransitionType tt; // r0
    int neighborid; // r29
    class Player * pPlayer; // r0
    class Neighbor * pNeighbor; // r0

    // References
    // -> class ESimsApp _app;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80228014 -> 0x8022809C
// this: r30
void GameData::SetInitialSimSelectionFromSimulator() {
    // Local variables
    signed short nSelectedSimInstanceID; // r0
    class cXObject * pObject; // r31
}

// Range: 0x8022809C -> 0x80228394
// this: r31
void GameData::PrepCreateAFamilyData(int iFamilyNum /* r22 */) {
    // Local variables
    class Family * family; // r25
    int i; // r26
    class CasSimDescription & simDesc; // r28
    int nNumFamilyMembers; // r0
    class Neighbor * neighbor; // r24
    class ObjSelector * pObjSel; // r29
    class ENeighborhoodCustomChar & simCustomData; // r23
    class CasSimDescription & simDesc; // r22
    class BString2 S; // r1+0xC
    class BString2 famName; // r1+0x8
}

// Range: 0x80228394 -> 0x80228408
int GameData::CreateAFamilyAddFamilyMember(class Family * family /* r30 */, unsigned char bIsPet /* r31 */) {
    // Local variables
    class Neighbor * neighbor; // r1+0x8
}

// Range: 0x80228408 -> 0x80228B20
// this: r31
unsigned char GameData::StoreCreateAFamilyDataNewGame(int nPrimarySimIndex /* r15 */) {
    // Local variables
    int nStartingLots[6]; // r1+0x30
    class vector sims; // r1+0x20
    int i; // r17
    int nCurrentFamilyNumber; // r24
    class ENeighborhoodCustomChar * * iter; // r23
    class Neighborhood * pNeighborhood; // r22
    class ENeighborhoodCustomChar * pPrevSimCustomData; // r27
    int nIndex; // r21
    unsigned char bPreviousFamilyWasDeleted; // r20
    class ENeighborhoodCustomChar * pSimCustomData; // r19
    class Neighbor * pNeighbor; // r15
    int i; // r15
    int i; // r15
    enum eArchetype archetype; // r0
    class ObjSelector * pObjSel; // r18
    class CasSimDescription & srcSimDesc; // r17
    class Family * pFamily; // r16
    class InventoryItems * pInventory; // r15
    unsigned char bIsMale; // r0
    class BString2 S; // r1+0x18
    class BString2 famName; // r1+0x14
    int iHouseNum; // r15
    class ENeighborhoodCustomChar * pSimCustomData; // r0
    class Neighbor * pNeighbor; // r0

    // References
    // -> class EGlobal _globals;
    // -> class ESimsApp _app;
}

// Range: 0x80228B20 -> 0x80229010
// this: r31
unsigned char GameData::StoreCreateAFamilyDataExistingGame() {
    // Local variables
    class Family * pFamily; // r27
    unsigned char found; // r26
    class vector deletelist; // r1+0x18
    int nNumFamilyMembers; // r0
    int i; // r25
    unsigned int j; // r24
    int GUID; // r0
    class Neighbor * * iter; // r24
    int i; // r24
    class ENeighborhoodCustomChar * pSimCustomData; // r25
    class Neighbor * pNeighbor; // r26
    int i; // r26
    int i; // r26
    enum eArchetype archetype; // r0
    class ObjSelector * pObjSel; // r26
    class CasSimDescription & srcSimDesc; // r27
    unsigned char bIsMale; // r0
    class BString2 S; // r1+0x14
    class BString2 famName; // r1+0x10
}

// Range: 0x80229010 -> 0x802290E4
unsigned char GameData::SaveSimDescriptionToNeighbor(class Neighbor * pNeighbor /* r27 */, class CasSimDescription & srcSimDesc /* r28 */) {
    // Local variables
    unsigned char bReturnVal; // r31
    class ObjSelector * pObjSel; // r30
    class CasSimDescription * pDestSimDesc; // r29
}

// Range: 0x802290E4 -> 0x802291C0
// this: r26
unsigned char GameData::SaveCreateAFamily(unsigned char bNewGame /* r27 */, int nPrimarySimIndex /* r28 */) {
    // Local variables
    unsigned char bFound; // r30
    unsigned int i; // r29
}

// Range: 0x802291C0 -> 0x80229338
// this: r29
unsigned char GameData::SystemPreUpdate() {
    // Local variables
    signed char i; // r31
    unsigned char bContinue; // r30
    class EController * pCtrl; // r0
    int prevMapping; // r0
    int status; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80229338 -> 0x80229380
unsigned char GameData::SystemPreDraw() {
    // Local variables
    int status; // r0
}

// Range: 0x80229380 -> 0x80229628
void GameData::SystemPostDraw(class ERC * prc /* r31 */) {
    // References
    // -> float SAFE_RIGHT;
    // -> float SAFE_LEFT;
    // -> float SAFE_BOTTOM;
    // -> float SAFE_TOP;
    // -> class EGlobal _globals;
}

// Range: 0x80229628 -> 0x80229680
void GameData::GotoLiveMode() {
    // References
    // -> class ESimsApp _app;
    // -> class GameData _gd;
}

// Range: 0x80229680 -> 0x80229754
// this: r30
unsigned char GameData::CopyrightUpdate() {
    // Local variables
    unsigned char bDone; // r31
    float fAlpha; // f3
}

// Range: 0x80229754 -> 0x80229888
// this: r28
void GameData::CopyrightDraw(class ERC * prc /* r29 */) {
    // Local variables
    class ERFont * pFont; // r30

    // References
    // -> static const unsigned short * s_NintendoLicenseText;
    // -> class EVec4 _WHITE;
    // -> class EGlobal _globals;
}

// Range: 0x80229888 -> 0x80229950
unsigned int GameData::GetLocalizedSims2Logo() {
    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x80229950 -> 0x80229A44
unsigned int GameData::GetLocalizedEAMovie() {
    // References
    // -> int _iVideoMode;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x80229A44 -> 0x80229A8C
void GameData::SetBlackGraphicsBackgroundColor() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80229A8C -> 0x80229AD4
void GameData::SetUglyGraphicsBackgroundColor() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80229AD4 -> 0x80229AE0
void GameData::UseConfigOptions() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80229AE0 -> 0x80229DB0
void GameData::StageInitTiming() {
    // Local variables
    float fScaleFactor; // f0
    int i; // r9
    float fTotalRecip; // f3
    int i; // r10
    float fStageDelta; // f4
    float fDeltaRecip; // f5

    // References
    // -> class QTimer s_stageTimer;
    // -> float s_fStageDeltaActual[64];
    // -> float s_fStageDeltaRecip[64];
    // -> float s_fStageDelta[64];
    // -> float s_fScaleFactor;
    // -> float s_fStageTotal;
    // -> int s_iWorstIterationStageEnd;
    // -> int s_iWorstIterationStageStart;
    // -> float s_fWorstIterationTime;
    // -> const float * s_pStageDelta;
    // -> int s_iStageCntMax;
    // -> int s_iStage;
}

// Range: 0x80229DB0 -> 0x80229DB8
void GameData::StageStartFrame() {
    // References
    // -> class QTimer s_frameTimer;
}

// Range: 0x80229DB8 -> 0x80229E68
void GameData::StageEndFrame(int iOldStage /* r30 */, int iNewStage /* r31 */) {
    // Local variables
    float fTime; // f0
    float fDelta; // f0

    // References
    // -> int s_iStage;
    // -> float s_fStageDeltaActual[64];
    // -> class QTimer s_stageTimer;
    // -> int s_iWorstIterationStageEnd;
    // -> int s_iWorstIterationStageStart;
    // -> float s_fWorstIterationTime;
    // -> class QTimer s_frameTimer;
    // -> int s_iStageCntMax;
}

// Range: 0x80229E68 -> 0x80229ED8
// this: r29
void GameData::StageEnd(const char * tableLabel /* r30 */) const {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80229ED8 -> 0x80229EDC
void GameData::StageOutputActualTimes() {}

// Range: 0x80229EDC -> 0x80229FD0
unsigned char GameData::GotoXamMode(int hudMode /* r28 */, int lotNum /* r29 */, int temp3 /* r30 */) {
    // Local variables
    int nIngredientMode; // r4
}

// Range: 0x80229FD0 -> 0x8022A038
unsigned char GameData::CustomUiMode() {}

// Range: 0x8022A038 -> 0x8022A068
int GameData::SetBuildBuyPlayer() {
    // Local variables
    int previous; // r5
}


