/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\cassimrenderer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80037F78 -> 0x8003A6EC
*/
// Range: 0x80037F78 -> 0x80038130
// this: r28
CasSimRenderer::CasSimRenderer(int charId /* r29 */, unsigned char bInCAFMode /* r30 */) {
    // References
    // -> unsigned int s_nCasFemaleSimAnimations[39];
    // -> struct [anonymous] __vt__14CasSimRenderer;
}

// Range: 0x80038130 -> 0x800382D8
// this: r30
CasSimRenderer::~CasSimRenderer() {
    // References
    // -> class EAnimManager _animman;
    // -> class EGraphics * _pGfx;
    // -> class ESimsDataManager _simsdataman;
    // -> struct [anonymous] __vt__14CasSimRenderer;
}

// Range: 0x800382D8 -> 0x800382E8
void CasSimRenderer::CharacterModelCached() {}

// Range: 0x800382E8 -> 0x8003833C
// this: r31
unsigned char CasSimRenderer::AllMorphDataDeallocated() {}

// Range: 0x8003833C -> 0x800386A0
// this: r28
void CasSimRenderer::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned int nSimPosition; // r31
    class CASTargetTSC6 * pCASTarget; // r0
    class CasScene * pScene; // r0
    int playerNum; // r31
    int filterId; // r31
    class EController * pCtrl; // r30
    int id; // r29
    float joystickPos; // f31

    // References
    // -> float _dt;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x800386A0 -> 0x800388C0
// this: r28
void CasSimRenderer::Draw(class ERC * prc /* r29 */) {
    // Local variables
    float totalRotation; // f3
    class EVec3 mRot; // r1+0x10
    class EMat4 mSimOrient; // r1+0x60
    int nNodes; // r31
    class EMat4 * pmNodes; // r30
    class CasScene * pScene; // r0
    class EMat4 mOrient; // r1+0x20
}

// Range: 0x800388C0 -> 0x800389E4
void CasSimRenderer::processEvents(int iStartTime /* r24 */, int interval /* r25 */) {
    // Local variables
    class ERAnim * pAnim; // r0
    int size; // r30
    int delay; // r29
    const class TArray * notes; // r28
    int i; // r27
    int modTime; // r0
    int negTime; // r26

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x800389E4 -> 0x80038B30
// this: r28
void CasSimRenderer::DoSoundEvents(float fDeltaSeconds /* f31 */) {
    // Local variables
    int animId; // r31
    class ERAnim * pAnim; // r0
    int duration; // r30
    int interval; // r29

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80038B30 -> 0x80038C10
// this: r31
class ETexture * CasSimRenderer::CreateImage(enum eImageModelSetType imageModelSetType /* r26 */, unsigned int nWidth /* r27 */, unsigned int nHeight /* r28 */, unsigned int nDepth /* r29 */, unsigned int nBackgroundTextureID /* r30 */) {
    // Local variables
    enum eSpecies species; // r31
    class SimImageMaker simImageMaker; // r1+0x8
}

// Range: 0x80038C10 -> 0x80038C18
void CasSimRenderer::SetBaseOrient() {}

// Range: 0x80038C18 -> 0x80038C8C
// this: r29
void CasSimRenderer::SetProp(class EMidLotInstance * pInstance /* r30 */, unsigned int bone /* r31 */) {}

// Range: 0x80038C8C -> 0x80038D2C
// this: r30
void CasSimRenderer::SetFaceImage(class ETexture * pFaceImage /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80038D2C -> 0x80038E48
// this: r28
void CasSimRenderer::DrawFaceImage(class ERC * prc /* r27 */) {
    // Local variables
    const class CasSimDescription * pSimDesc; // r0
}

// Range: 0x80038E48 -> 0x80038EBC
// this: r29
void CasSimRenderer::GetBonePos(unsigned int nBoneNumber /* r30 */, class EVec3 & vPos /* r31 */) {
    // Local variables
    class EMat4 mTempMat; // r1+0x8
}

// Range: 0x80038EBC -> 0x80038EC4
void CasSimRenderer::SetPositionNum() {}

// Range: 0x80038EC4 -> 0x80038F4C
// this: r29
unsigned int CasSimRenderer::SetNextAnimation(unsigned int animID /* r30 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80038F4C -> 0x80038FD8
// this: r29
unsigned char CasSimRenderer::CheckPending() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80038FD8 -> 0x800390EC
// this: r31
void CasSimRenderer::PlayPersonalityAnim(signed short personalityVal /* r30 */) {}

// Range: 0x800390EC -> 0x800390F4
void CasSimRenderer::SetBoneTranslationOffsets() {}

// Range: 0x800390F4 -> 0x800392CC
// this: r27
void CasSimRenderer::SetupSimCommon(unsigned char bResetAll /* r28 */) {
    // Local variables
    class CasSimDescription * pOldSimDesc; // r31
    class CasSimDescription * pSimDesc; // r30
    unsigned int nGender; // r29
    unsigned int nOldGender; // r0
    char firstName[32]; // r1+0x30
    char lastName[32]; // r1+0x10
    class EString strFullName; // r1+0x8
}

// Range: 0x800392CC -> 0x800393C0
// this: r31
void CasSimRenderer::SetupSim() {
    // Local variables
    class EString sGender; // r1+0x8

    // References
    // -> unsigned int s_nCasFemaleSimAnimations[39];
    // -> unsigned int s_nCasMaleSimAnimations[39];
}

// Range: 0x800393C0 -> 0x80039468
// this: r30
void CasSimRenderer::HandleEventInitCharacter(const class CasEventInitCharacter & event /* r31 */) {}

// Range: 0x80039468 -> 0x80039510
// this: r30
void CasSimRenderer::HandleEventResetCharacterDraw(const class CasEventResetCharacterDraw & event /* r31 */) {}

// Range: 0x80039510 -> 0x80039714
// this: r29
void CasSimRenderer::HandleEventChangeCharacter(const class CasEventChangeCharacter & event /* r30 */) {
    // Local variables
    class CasMediator * pMediator; // r31
    class CasSimDescription * pSimDesc; // r30
}

// Range: 0x80039714 -> 0x800398F0
// this: r30
void CasSimRenderer::HandleEventChangeFocus(const class CasEventChangeFocus & event /* r31 */) {}

// Range: 0x800398F0 -> 0x80039950
// this: r30
void CasSimRenderer::HandleEventMorphCharacter(const class CasEventMorphCharacter & event /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80039950 -> 0x80039A40
// this: r30
void CasSimRenderer::HandleEventSetMorphRegion(const class CasEventSetMorphRegion & event /* r31 */) {}

// Range: 0x80039A40 -> 0x80039A84
unsigned char CasSimRenderer::IsRegularIdleAnim() {}

// Range: 0x80039A84 -> 0x80039AE4
unsigned char CasSimRenderer::IsShirtIdleAnim() {}

// Range: 0x80039AE4 -> 0x80039B0C
unsigned char CasSimRenderer::IsShoeIdleAnim() {}

// Range: 0x80039B0C -> 0x80039B50
unsigned char CasSimRenderer::IsPantIdleAnim() {}

// Range: 0x80039B50 -> 0x80039BB0
unsigned char CasSimRenderer::IsSittingIdleAnim() {}

// Range: 0x80039BB0 -> 0x80039C2C
// this: r30
unsigned int CasSimRenderer::SetNextRandomRegularIdle() {
    // Local variables
    int randIdle; // r0
    unsigned int newIdleID; // r31
}

// Range: 0x80039C2C -> 0x80039CA8
// this: r30
unsigned int CasSimRenderer::SetNextRandomShirtIdle() {
    // Local variables
    int randIdle; // r0
    unsigned int newIdleID; // r31
}

// Range: 0x80039CA8 -> 0x80039D70
// this: r31
unsigned int CasSimRenderer::SetNextRandomSittingIdle() {
    // Local variables
    unsigned int animID; // r3
    unsigned int nRand; // r0
}

// Range: 0x80039D70 -> 0x8003A238
// this: r31
void CasSimRenderer::SelectNextStandingAnimation() {
    // Local variables
    unsigned int prev; // r30
    unsigned int next; // r29
}

// Range: 0x8003A238 -> 0x8003A5B8
// this: r31
void CasSimRenderer::UpdateClothingChange() {
    // Local variables
    unsigned int numAnimations; // r0
    unsigned int i; // r6

    // References
    // -> class ESimsDataManager _simsdataman;
    // -> unsigned int s_nCasMaleSimAnimations[39];
    // -> unsigned int s_nCasFemaleSimAnimations[39];
    // -> class EGraphics * _pGfx;
    // -> volatile class CasSimRenderer * s_changingSim;
}

// Range: 0x8003A5B8 -> 0x8003A5DC
unsigned char CasSimRenderer::HasQueuedOperation() {}

// Range: 0x8003A5DC -> 0x8003A63C
// this: r31
void CasSimRenderer::UpdateQueuedOperation() {
    // References
    // -> class EApp * _pApp;
}

// Range: 0x8003A63C -> 0x8003A6A8
// this: r31
unsigned char CasSimRenderer::StartClothingChange() {}

// Range: 0x8003A6A8 -> 0x8003A6BC
void CasSimRenderer::ProcessDataManagerCommand() {
    // Local variables
    enum ESimCommands cmd; // r0
}

// Range: 0x8003A6BC -> 0x8003A6D8
void CasSimRenderer::ChangeClothingOnOtherThread() {}

// Range: 0x8003A6D8 -> 0x8003A6E4
void CasSimRenderer::FreezeSimAnimations() {}

// Range: 0x8003A6E4 -> 0x8003A6EC
unsigned int CasSimRenderer::GetNumAnimationsPerGender() {}


