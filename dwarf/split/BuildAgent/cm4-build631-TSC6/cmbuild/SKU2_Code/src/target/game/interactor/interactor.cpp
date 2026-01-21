/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005E058 -> 0x800601B8
*/
// Range: 0x8005E058 -> 0x8005E1AC
// this: r31
CursorMovementTracker::CursorMovementTracker() {}

// Range: 0x8005E1AC -> 0x8005E1B4
void CursorMovementTracker::SetEdgeFuzziness() {}

// Range: 0x8005E1B4 -> 0x8005E200
void CursorMovementTracker::SetCursor(int xpos /* r30 */, int ypos /* r31 */) {}

// Range: 0x8005E200 -> 0x8005E240
// this: r31
void CursorMovementTracker::Reset() {}

// Range: 0x8005E240 -> 0x8005E3CC
// this: r28
float CursorMovementTracker::GetTotalBorderInfluence(int xpos /* r29 */, int ypos /* r31 */, class EVec2 * outVec /* r30 */) {
    // Local variables
    float leftInf; // r1+0x14
    float rightInf; // r1+0x10
    float topInf; // r1+0xC
    float bottomInf; // r1+0x8
    float maxInfluence; // f31
    class EVec2 leftVec; // r1+0x48
    class EVec2 rightVec; // r1+0x40
    class EVec2 topVec; // r1+0x38
    class EVec2 bottomVec; // r1+0x30
}

// Range: 0x8005E3CC -> 0x8005E44C
float CursorMovementTracker::GetEdgeInfluence() {
    // Local variables
    float inf; // r1+0x8
}

// Range: 0x8005E44C -> 0x8005E664
// this: r29
void CursorMovementTracker::UpdateCursorPositionFromJoystick() {
    // Local variables
    float input_dx; // f0
    float input_dy; // f0
    float delta_t; // f30
    float acceleration; // f28
    class EVec2 input_buffer; // r1+0x20
    float stickInputMagnitude; // r1+0x18
    float cursorSpeedFactor; // f2
    float adjustedMaxCursorSpeed; // r1+0x14
    float offset_factor; // r1+0x10
    int screen_dx; // r31
    int screen_dy; // r30

    // References
    // -> float _dt;
}

// Range: 0x8005E664 -> 0x8005E714
// this: r29
void CursorMovementTracker::UpdateCurrentFuzzyEdgeInfluence(int screen_dx /* r30 */, int screen_dy /* r31 */) {
    // Local variables
    class EVec2 edgeVec; // r1+0x18
    float currentFuzzyInfluence; // f0
    class EVec2 moveVec; // r1+0x10
}

// Range: 0x8005E714 -> 0x8005E86C
// this: r30
void CursorMovementTracker::UpdateCursorPositionFromControllerCursor() {
    // Local variables
    float newPixelX; // f31
    float newPixelY; // f30
    int screen_dx; // r31
    int screen_dy; // r0
}

// Range: 0x8005E86C -> 0x8005E910
// this: r31
unsigned char CursorMovementTracker::UseControllerCursorPosInsteadOfJoystick() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005E910 -> 0x8005E9F4
void CursorMovementTracker::UpdateCursorAlpha() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8005E9F4 -> 0x8005EC40
// this: r26
void CursorMovementTracker::Update(const class EVec2 & stickInput /* r27 */, class EVec2 & clearOutput /* r28 */, class EVec2 & edgeOutput /* r29 */, unsigned char forceEdge /* r30 */, const class EVec2 & controllerCursorPosition /* r31 */) {
    // Local variables
    unsigned char bUseControllerCursorInsteadOfJoystick; // r0

    // References
    // -> class EGlobal _globals;
    // -> static int useStickPanning;
    // -> class EGraphics * _pGfx;
}

// Range: 0x8005EC40 -> 0x8005EC8C
// this: r31
WiiMoteToMenuInteractor::WiiMoteToMenuInteractor() {}

// Range: 0x8005EC8C -> 0x8005EE28
// this: r31
unsigned char WiiMoteToMenuInteractor::CheckForNunchukDpadEmulation(unsigned int menuItemCount /* r27 */, unsigned int * outNewSelectedItem /* r28 */, unsigned char bReverseOrder /* r29 */) {
    // Local variables
    unsigned char retVal; // r30
    float nunchukTilt; // r1+0x8
    float incrementPerMenuItem; // f2
    unsigned int selectedItem; // r3
}

// Range: 0x8005EE28 -> 0x8005EE9C
// this: r30
unsigned char WiiMoteToMenuInteractor::IsCursorInBoundingBox(class EController * pCtrl /* r31 */) {
    // Local variables
    class EVec2 controllerCursorPosition; // r1+0x10
}

// Range: 0x8005EE9C -> 0x8005EFB8
// this: r28
unsigned char WiiMoteToMenuInteractor::IsCursorInScrollBar(class EController * pCtrl /* r29 */, float scrollWidth /* f30 */, float barFraction /* f31 */, unsigned char & bUp /* r30 */) {
    // Local variables
    unsigned char bRetVal; // r31
    class EVec2 controllerCursorPosition; // r1+0x8
    float arrowHeight; // f4
}

// Range: 0x8005EFB8 -> 0x8005F0F4
// this: r31
void WiiMoteToMenuInteractor::SetBoundingBox_Int(int x1 /* r27 */, int y1 /* r28 */, int x2 /* r29 */, int y2 /* r30 */) {
    // Local variables
    int left; // r1+0x14
    int right; // r1+0x10
    int top; // r1+0xC
    int bottom; // r1+0x8
    float fMidPointX; // f5
    float fMidPointY; // f7
    float cx1; // f1
    float cy1; // f2
    float cx2; // f3
    float cy2; // f4
}

// Range: 0x8005F0F4 -> 0x8005F1A0
// this: r29
void WiiMoteToGridInteractor::SetMaxItems(int max /* r30 */) {}

// Range: 0x8005F1A0 -> 0x8005F4B8
// this: r28
unsigned char WiiMoteToMenuInteractor::CheckForWiiMoteDpadEmulation(class EController * pCtrl /* r25 */, unsigned int menuItemCount /* r29 */, unsigned int * outNewSelectedItem /* r30 */, unsigned char bReverseOrder /* r26 */, unsigned char bAllowUnselected /* r27 */) {
    // Local variables
    unsigned char retVal; // r31
    class EVec2 controllerCursorPosition; // r1+0x18
    unsigned int selectedItem; // r3
    float increment; // f2
    unsigned char bChangeOccurred; // r3
    float currentYPosition; // f4
    float increment; // f1

    // References
    // -> float m_BottomCursorLimit;
    // -> float m_TopCursorLimit;
    // -> static float controllerPadding;
    // -> class EGlobal _globals;
}

// Range: 0x8005F4B8 -> 0x8005F580
unsigned char WiiMoteToMenuInteractor::DoWiiMoteDpadEmulation(unsigned int currentSelectedItem /* r29 */, unsigned int controllerNum /* r30 */) {
    // Local variables
    unsigned char retVal; // r31
    unsigned int selectedItem; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x8005F580 -> 0x8005F59C
MenuItemPosition::MenuItemPosition() {}

// Range: 0x8005F59C -> 0x8005F5DC
// this: r31
MenuItemPosition::~MenuItemPosition() {}

// Range: 0x8005F5DC -> 0x8005F670
// this: r30
WiiMoteToGridInteractor::WiiMoteToGridInteractor() {}

// Range: 0x8005F670 -> 0x8005F6E0
// this: r30
WiiMoteToGridInteractor::~WiiMoteToGridInteractor() {}

// Range: 0x8005F6E0 -> 0x8005F71C
void WiiMoteToGridInteractor::ValidateRow() {
    // Local variables
    int i; // r7
    class MenuItemPosition * currentKey; // r8
}

// Range: 0x8005F71C -> 0x8005FA00
// this: r31
void WiiMoteToGridInteractor::FindKeyByCursorIntersection() {
    // Local variables
    class MenuItemPosition * selectedKey; // r6
    int i; // r0
    class MenuItemPosition * currentKey; // r7
    unsigned char bKeyFound; // r30
    char param1[8]; // r1+0x18
    char param2[8]; // r1+0x10
    char * const params[2]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8005FA00 -> 0x8005FC80
// this: r30
void WiiMoteToGridInteractor::AddKey() {
    // Local variables
    char * pStr; // r28
    int count; // [invalid]
    int i; // r31
}

// Range: 0x8005FC80 -> 0x8005FCBC
// this: r31
UndoRedoCommand::UndoRedoCommand() {}

// Range: 0x8005FCBC -> 0x8005FCC8
void UndoRedoCommand::Erase() {}

// Range: 0x8005FCC8 -> 0x8005FDDC
// this: r28
Interactor::Interactor() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule10Interactor;
}

// Range: 0x8005FDDC -> 0x8005FE20
// this: r31
void Interactor::Update() {
    // References
    // -> class PyramidFade g_pyramidFade;
}

// Range: 0x8005FE20 -> 0x8005FE28
void Interactor::AttachCamera() {}

// Range: 0x8005FE28 -> 0x8005FE30
class ESimsCam * Interactor::GetAttachedCamera() {}

// Range: 0x8005FE30 -> 0x8005FE50
// this: r5
void Interactor::GetInteractorInfo() {}

// Range: 0x8005FE50 -> 0x8005FE58
void Interactor::SetExtents() {}

// Range: 0x8005FE58 -> 0x8005FEEC
// this: r31
void Interactor::OnCommandReleased() {}

// Range: 0x8005FEEC -> 0x8005FF70
// this: r31
void Interactor::OnCommandUpdate() {}

// Range: 0x8005FF70 -> 0x8005FFC8
// this: r31
void Interactor::ResetInputState() {}

// Range: 0x8005FFC8 -> 0x8006000C
float Interactor::GetSelectionRadius() {
    // Local variables
    class ESimsCam * pCam; // r0
    float mu; // f0
}

// Range: 0x8006000C -> 0x8006001C
// this: r5
void Interactor::UpdateObjectHighlights() {}

// Range: 0x8006001C -> 0x80060024
class EVec3 & Interactor::GetPos() {}

// Range: 0x80060024 -> 0x8006002C
class EVec3 & Interactor::GetSnappedPos() {}

// Range: 0x8006002C -> 0x80060064
// this: r31
void Interactor::SnapToPos() {}

// Range: 0x80060064 -> 0x8006008C
unsigned char Interactor::EitherStickCentered() {}

// Range: 0x8006008C -> 0x80060094
int Interactor::GetPlayerId() {}

// Range: 0x80060094 -> 0x8006009C
void Interactor::SetDrawState() {}

// Range: 0x8006009C -> 0x800600A4
int Interactor::GetDrawState() {}

// Range: 0x800600A4 -> 0x800600AC
void Interactor::SetBaseCursorState() {}

// Range: 0x800600AC -> 0x800600F0
void Interactor::SetBaseCursorStateAndHighlight(unsigned char highlight /* r31 */) {}

// Range: 0x800600F0 -> 0x800601B8
unsigned char Interactor::BlockInteractorUpdate() {
    // References
    // -> class GameData _gd;
}


