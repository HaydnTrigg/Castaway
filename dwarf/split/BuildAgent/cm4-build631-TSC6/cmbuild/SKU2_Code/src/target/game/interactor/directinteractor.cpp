/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\directinteractor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004DE60 -> 0x80050DA0
*/
// Range: 0x8004DE60 -> 0x8004DF18
// this: r30
DirectInteractor::DirectInteractor() {
    // Local variables
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__Q216InteractorModule16DirectInteractor;
    // -> float c_SelectionConeAngle;
}

// Range: 0x8004DF70 -> 0x8004E024
// this: r30
DirectInteractor::~DirectInteractor() {
    // Local variables
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__Q216InteractorModule16DirectInteractor;
}

// Range: 0x8004E024 -> 0x8004E05C
// this: r31
void DirectInteractor::OnCreate() {}

// Range: 0x8004E05C -> 0x8004E094
// this: r31
void DirectInteractor::OnDestroy() {}

// Range: 0x8004E094 -> 0x8004E200
// this: r31
void DirectInteractor::OnStart() {
    // Local variables
    struct ButtonSemantic butSems[3]; // r1+0x30
    struct StickSemantic stickSems[4]; // r1+0x10

    // References
    // -> class EGlobal _globals;
    // -> class EVec3 s_invalidPos;
}

// Range: 0x8004E200 -> 0x8004E264
// this: r31
void DirectInteractor::OnStop() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8004E264 -> 0x8004E310
// this: r30
void DirectInteractor::ParseControls() {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x8004E310 -> 0x8004E38C
enum eAnimState DirectInteractor::GetDesiredAnimState() {
    // Local variables
    enum eAnimState desiredAnimState; // r3
    float fStickMagnitude; // f0
}

// Range: 0x8004E38C -> 0x8004E53C
// this: r28
unsigned char DirectInteractor::InitPlayerPos() {
    // Local variables
    class EVec3 selectedSimPos; // r1+0x20
    unsigned char bRetVal; // r29
    class FTilePt playerLocation; // r1+0x18
    class FTilePt simTile; // r1+0x10

    // References
    // -> class EVec3 s_invalidPos;
}

// Range: 0x8004E53C -> 0x8004E600
// this: r31
void DirectInteractor::UpdatePlumbBob() {
    // Local variables
    class EVec3 simPos; // r1+0x8
    class SAnimator2 * anim; // r0
    float z; // f31
}

// Range: 0x8004E600 -> 0x8004E684
// this: r31
void DirectInteractor::UpdateControlStatus() {
    // Local variables
    class SAnimator2 * animator; // r0
}

// Range: 0x8004E684 -> 0x8004E6CC
unsigned char DirectInteractor::CameraDirectorPermitsDirectControl() {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x8004E6CC -> 0x8004E724
// this: r30
void DirectInteractor::SetVelocityModifiers() {
    // Local variables
    class SAnimator2 * animator; // r31
}

// Range: 0x8004E724 -> 0x8004E778
void DirectInteractor::SendNeutralFreeMoveInput() {
    // Local variables
    class SAnimator2 * animator; // r31
}

// Range: 0x8004E778 -> 0x8004E818
// this: r29
void DirectInteractor::InterpretFreeMoveInput() {
    // Local variables
    class SAnimator2 * animator; // r31
    enum eAnimState desiredAnimState; // r30
    float fDesiredFacing; // f1
    float fStickAngle; // r1+0x8
}

// Range: 0x8004E818 -> 0x8004F550
// this: r30
void DirectInteractor::Update(float delta /* f31 */) {
    // Local variables
    class FlashPiMenu * pPiMenu; // r31
    class cXPerson * pNewPlayer; // r3
    class SAnimator2 * animator; // r29
    const class FTilePt & simPos; // r0
    class EVec3 newInteractorPos; // r1+0x44
    unsigned char forceReleaseSimSwitcher; // r4
    class NLIteratorPtrType * it; // r1+0x10
    class ISimInstance * pNextISim; // r29
    class TNodeList objList; // r1+0x38
    class NLIteratorPtrType * it; // r29
    class NLIteratorPtrType * itp; // r1+0xC
    class ISimInstance * pPrevISim; // r28
    class ISimInstance * pPossPrevISim; // r27
    class TNodeList objList; // r1+0x2C
    class NLIteratorPtrType * it; // r1+0x8
    class ISimInstance * pCurrISim; // r27
    class TNodeList objList; // r1+0x20
    unsigned char bCarryFlag; // r27
    signed short m_carryObjectID; // r0
    class cXObject * pObj; // r0
    class ISimInstance * instance; // r0
    class TNodeList objList; // r1+0x14
    unsigned char objectsToSelectFromHasChanged; // r27
    int objListCount; // r0
    int lastObjListCount; // r0
    unsigned char same; // r28
    class NLIteratorPtrType * it; // r31
    class NLIteratorPtrType * it2; // r26

    // References
    // -> static class EVec3 last_pos;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8004F550 -> 0x8004F5A4
// this: r31
void DirectInteractor::UpdateInteractorPos() {
    // Local variables
    class SAnimator2 * animator; // r0
}

// Range: 0x8004F5A4 -> 0x8004F5EC
// this: r31
void DirectInteractor::SetAdvanceRightISim() {}

// Range: 0x8004F5EC -> 0x8004F634
// this: r31
void DirectInteractor::SetAdvanceLeftISim() {}

// Range: 0x8004F634 -> 0x8004F67C
// this: r31
void DirectInteractor::SetExpandedMenuISim() {}

// Range: 0x8004F67C -> 0x8004F6A4
void DirectInteractor::SetLeftArrow() {
    // References
    // -> class GameData _gd;
}

// Range: 0x8004F6A4 -> 0x8004F6CC
void DirectInteractor::SetRightArrow() {
    // References
    // -> class GameData _gd;
}

// Range: 0x8004F6CC -> 0x8004F754
// this: r29
void DirectInteractor::ResetDisplayArrows(class TNodeList & objList /* r30 */, class NLIteratorPtrType * & it /* r31 */) {}

// Range: 0x8004F754 -> 0x8004F884
void DirectInteractor::GetInteractionMenuObjectList(class TNodeList & objList /* r28 */) {
    // Local variables
    class ObjectSlot * os; // r31
    class cXObject * pObj; // r30
    class ISimInstance * handSimInstance; // r0
    class NLIteratorPtrType * nli; // r29
    class ISimInstance * pIobject; // r0
    class ISimInstance * pISimInstance; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8004F884 -> 0x8004F8B8
unsigned char DirectInteractor::IsSimulatorPaused() {}

// Range: 0x8004F8B8 -> 0x8004FB98
// this: r26
unsigned char DirectInteractor::ShouldHighlightObject(class cXObject * obj /* r27 */, float maxDist /* f30 */) {
    // Local variables
    unsigned char shouldHighlight; // r28
    class cXPerson * selectedSim; // r29
    float final_max_distance; // r31
    class ISimInstance * inst; // r30
    unsigned char is_person; // r0
    unsigned char is_pet; // r31
    class FTilePt objCenterLocation; // r1+0x38
    class EVec3 centerVec; // r1+0x70
    class EVec3 delta; // r1+0x64
    class ISimInstance * instance; // r27
    class EBound3 objBound; // r1+0x80
    class EVec3 pet_pos; // r1+0x58
    class EVec3 min_corner; // r1+0x4C
    class EVec3 max_corner; // r1+0x40
    float facingDir; // f30
    class EVec2 facingVec; // r1+0x30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8004FB98 -> 0x8004FBFC
// this: r30
void DirectInteractor::GetInteractorInfo(struct InteractorInfo & info /* r31 */) {
    // Local variables
    const class EVec3 & physPos; // r0
}

// Range: 0x8004FBFC -> 0x8004FC10
void DirectInteractor::StartCancelTimer() {}

// Range: 0x8004FC10 -> 0x8004FC24
void DirectInteractor::ClearCancelTimer() {}

// Range: 0x8004FC24 -> 0x8004FC90
// this: r31
void DirectInteractor::CancelQueuedActions() {
    // Local variables
    class SAnimator2 * animator; // r0
}

// Range: 0x8004FC90 -> 0x8004FCC8
unsigned char DirectInteractor::CheckCancelTimer() {
    // References
    // -> float _dt;
}

// Range: 0x8004FCC8 -> 0x8004FCD8
// this: r0
void DirectInteractor::PreDraw() {}

// Range: 0x8004FCD8 -> 0x8004FCE8
// this: r0
void DirectInteractor::Draw() {}

// Range: 0x8004FCE8 -> 0x8004FE3C
// this: r29
void DirectInteractor::OnCommandRepeated(enum InteractorCommand cmd /* r30 */) {
    // Local variables
    class cXPerson * player; // r31
    unsigned char doSwitch; // r31
    class CameraDirector * camDir; // r30

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8004FE3C -> 0x80050014
// this: r30
void DirectInteractor::OnCommandPressed(enum InteractorCommand cmd /* r31 */) {
    // Local variables
    class cXPerson * player; // r29
    unsigned char doSwitch; // r28
    class CameraDirector * camDir; // r27

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80050014 -> 0x800500C4
void DirectInteractor::OnCommandReleased() {
    // References
    // -> class GameData _gd;
}

// Range: 0x800500C4 -> 0x80050190
// this: r30
void DirectInteractor::OnCommandUpdate(enum InteractorCommand cmd /* r31 */, float value /* f31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80050190 -> 0x800501C4
// this: r31
void DirectInteractor::ResetInputState() {}

// Range: 0x800501C4 -> 0x800501CC
float DirectInteractor::GetSelectionRadius() {}

// Range: 0x800501CC -> 0x80050594
// this: r31
void DirectInteractor::ExecuteActionMenu() {
    // Local variables
    class TNodeList objList; // r1+0x44
    class ObjectSlot * os; // r30
    class cXObject * pObj; // r29
    class ISimInstance * instance; // r0
    class ISimInstance * handSimInstance; // r0
    class NLIteratorPtrType * nli; // r28
    class ISimInstance * pIobject; // r0
    class ISimInstance * pS; // r28
    class EVec3 vPos0; // r1+0x38
    unsigned char changeOccurred; // r28
    class NLIteratorPtrType * nli1; // r29
    class NLIteratorPtrType * nli2; // r30
    class ISimInstance * p1; // r27
    class ISimInstance * p2; // r26
    class EVec3 vPos1; // r1+0x2C
    class EVec3 vPos2; // r1+0x20
    class EVec3 t; // r1+0x14
    float ds1; // f0
    float ds2; // f0
    class ISimInstance * temp; // r26
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80050594 -> 0x8005067C
// this: r29
void DirectInteractor::ExecuteObjectActionMenu(class cXObject * pObj /* r30 */) {
    // Local variables
    class TNodeList objList; // r1+0x8
    class ISimInstance * pData; // r0
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x8005067C -> 0x800506A4
void DirectInteractor::StopInObjectMenu() {
    // References
    // -> class GameData _gd;
}

// Range: 0x800506A4 -> 0x800506F4
unsigned char DirectInteractor::ChooseAction(class Interaction * pAction /* r31 */) {}

// Range: 0x800506F4 -> 0x80050738
// this: r31
void DirectInteractor::SetupCamera() {}

// Range: 0x80050738 -> 0x80050BB4
// this: r31
void DirectInteractor::UpdateObjectHighlights(class EIObjectMan * objMan /* r25 */) {
    // Local variables
    const class vector * objects; // r30
    class cXObject * pSelectedObject; // r28
    int numberOfItemsHighlighted; // r27
    class cXObject * const * iter; // r29
    class cXObject * currentObj; // r26
    class ISimInstance * instance; // r25
    signed short carryId; // r0
    class cXObject * pCarryObject; // r25
    class ISimInstance * pSelectedInstance; // r26
    class cXObject * const * iter; // r25
    class cXObject * currentObj; // r26
    class ISimInstance * instance; // r26
    int numPeople; // r0
    int i; // r25
    class cXPerson * curPerson; // r26
    class ISimInstance * instance; // r0
    class EVec2 personWorldCoord; // r1+0x18
    class cXPerson * selectedSim; // r27
    class EVec2 myWorldCoord; // r1+0x10
    class EVec2 resultPos; // r1+0x8
    class ISimInstance * instance; // r26

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80050BB4 -> 0x80050BDC
void DirectInteractor::SetAutonomous() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80050BDC -> 0x80050C90
// this: r30
void DirectInteractor::ResetIdleTime() {
    // Local variables
    class SAnimator2 * pAnimator; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80050C90 -> 0x80050CCC
void DirectInteractor::ClearUsingEdithMenu() {
    // Local variables
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80050CCC -> 0x80050DA0
static void __sinit_\game_interactor_unity_cpp() {
    // References
    // -> class EVec3 m_vUp;
    // -> static float kCursorBaseAdditionalRotation;
    // -> class EVec3 s_invalidPos;
    // -> class EVec3 s_invalidPos;
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> static class EVec3 brown;
    // -> static class EVec3 red;
    // -> static class EVec3 green;
    // -> static class EVec3 white;
    // -> class EVec3 s_invalidPos;
    // -> float c_SelectionConeAngle;
}


