/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\actionmenu.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C2080 -> 0x801C4A68
*/
// Range: 0x801C2080 -> 0x801C23F4
// this: r28
ActionMenu::ActionMenu() {
    // Local variables
    int i; // r29

    // References
    // -> class EGlobal _globals;
    // -> float m_ActionMenuNextObjectIcon_X;
    // -> float m_ActionMenuPreviousObjectIcon_X;
    // -> float m_ActionMenuPosition_BottomX;
    // -> class EGraphics * _pGfx;
    // -> static const char * const IMU_icon;
    // -> static const char * const IMU_count;
    // -> static const char * const IMU_MoreText;
    // -> static const char * const IMU_title;
    // -> static const char * const IMU_Scroll;
    // -> static const char * const IMU_HideCallback;
    // -> static const char * const IMU_RefreshCallback;
    // -> static const char * const IMU_ShowCallback;
    // -> static const char * const IMU_Highlight;
    // -> static const char * const IMU_Choice;
    // -> static const char * const IMU_IsWideScreen;
    // -> static const char * const IMU_show_arrow_left;
    // -> static const char * const IMU_show_arrow_right;
    // -> static const char * const IMU_draw_one;
    // -> static const char * const IMU_DirectControl;
    // -> static const char * const IMU_exists;
    // -> struct [anonymous] __vt__10ActionMenu;
}

// Range: 0x801C23F4 -> 0x801C24C8
// this: r27
ActionMenu::~ActionMenu() {
    // Local variables
    int i; // r29

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__10ActionMenu;
}

// Range: 0x801C24C8 -> 0x801C24D0
unsigned char ActionMenu::IsObjectInMenu() {}

// Range: 0x801C24D0 -> 0x801C24D8
class cXObject * ActionMenu::GetSelectedObject() {}

// Range: 0x801C24D8 -> 0x801C25A4
// this: r30
void ActionMenu::UpdateIcon() {
    // Local variables
    int iconIndex; // r31
    class MenuItem * pIconItem; // r0

    // References
    // -> static const char * const IMU_icon;
}

// Range: 0x801C25A4 -> 0x801C267C
// this: r29
unsigned char ActionMenu::FillInMenu() {
    // Local variables
    class MenuItem * currentMenu; // r31
    int selectedItem; // r0
    class MenuItem * pSelectedMenuItem; // r0
    unsigned char terminateFlag; // r30
    unsigned char valid; // r0
}

// Range: 0x801C267C -> 0x801C2770
// this: r26
void ActionMenu::AddMenu(class cXObject * pObj /* r27 */, const class BString2 & strLabel /* r28 */, unsigned int shaderID /* r29 */, class ERShader * pShader /* r30 */) {
    // Local variables
    class MenuItem * newMenu; // r31
}

// Range: 0x801C2770 -> 0x801C280C
// this: r24
void ActionMenu::AddMenuItem(class cXObject * pObj /* r25 */, class Interaction * pAction /* r26 */, const class BString2 & strLabel /* r27 */, unsigned int shaderID /* r28 */, class ERShader * pShader /* r29 */, unsigned char bDisabled /* r30 */) const {}

// Range: 0x801C280C -> 0x801C281C
void ActionMenu::CompleteMenu() {}

// Range: 0x801C281C -> 0x801C29D4
// this: r27
unsigned char ActionMenu::ShowMenu(unsigned char dcObjectChange /* r28 */) {
    // Local variables
    int launchX; // r1+0xC
    int launchY; // r1+0x8
    unsigned char usingClassicMode; // r30
    class InteractorManager * interactorManager; // r29
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0

    // References
    // -> float m_ActionMenuPosition_BottomX;
}

// Range: 0x801C29D4 -> 0x801C2B30
// this: r27
void ActionMenu::VisibilityCallfunction(int menuItemCount /* r28 */, int launchX /* r29 */, int launchY /* r30 */, unsigned char dcObjectChange /* r31 */) {
    // Local variables
    char countStr[8]; // r1+0x18
    char xStr[8]; // r1+0x10
    char yStr[8]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801C2B30 -> 0x801C2C84
// this: r31
void ActionMenu::BackOutMenu() {
    // Local variables
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> float m_ActionMenuPosition_BottomX;
    // -> class GameData _gd;
}

// Range: 0x801C2C84 -> 0x801C2EA4
// this: r31
void ActionMenu::AcceptMenu() {
    // Local variables
    class MenuItem * currentSubMenu; // r30
    int selectedItem; // r0
    class MenuItem * currentMenu; // r30
    class GrabManipulator * pInteractor; // r29
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> float m_ActionMenuPosition_BottomX;
    // -> class AptViewer * _gpAptViewer;
    // -> class GameData _gd;
}

// Range: 0x801C2EA4 -> 0x801C2F2C
void ActionMenu::CloseMenu() {
    // Local variables
    class InteractorManager * interactorManager; // r31
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0
}

// Range: 0x801C2F2C -> 0x801C3030
unsigned char ActionMenu::CheckCursorOnNextPreviousIcons(class EController * pCtrl /* r29 */, unsigned char bPrevious /* r30 */) {
    // Local variables
    unsigned char bRetVal; // r31
    class EVec2 controllerCursorPosition; // r1+0x8

    // References
    // -> float m_ActionMenuNextObjectIcon_X;
    // -> float m_ActionMenuPreviousObjectIcon_X;
}

// Range: 0x801C3030 -> 0x801C37F0
// this: r25
void ActionMenu::Update() {
    // Local variables
    class EController * pCtrl; // r30
    unsigned int selectedItem; // r1+0x10
    unsigned char bChangeHighlight; // r29
    unsigned char bCursorInBoundingBox; // r28
    unsigned char bUpScroll; // r1+0x8
    enum ScrollArrowEnableSetting scrollButtonEnable; // r27
    enum ObjectArrowEnableSetting objectButtonEnable; // r26
    class FlashPiMenu * pPiMenu; // r0
    class FlashPiMenu * pPiMenu; // r0
    float fCurrentNunchukTilt; // r1+0xC
    float fTiltDelta; // f1
    char scrollString[8]; // r1+0x20
    char objectString[8]; // r1+0x18
    int i; // r24
    class FlashPiMenu * pPiMenu; // r0
    int i; // r24
    class FlashPiMenu * pPiMenu; // r0
    class FlashPiMenu * pPiMenu; // r0
    unsigned char m_inAnInteraction; // r24
    unsigned char bCarryFlag; // r27
    class cXPerson * pPlayer; // r26
    signed short m_carryObjectID; // r0
    class cXObject * pObj; // r0
    class ISimInstance * instance; // r0

    // References
    // -> float _dt;
    // -> static const char * const IMU_icon;
    // -> static float fLastNunchukChange_TiltPosition;
    // -> class GameData _gd;
    // -> static unsigned char bLastChangeByWiimote;
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
}

// Range: 0x801C37F0 -> 0x801C391C
// this: r29
void ActionMenu::TerminateMenu(unsigned char dcObjectChange /* r30 */) {
    // Local variables
    class MenuItem * currentMenu; // r0
    class GrabManipulator * pInteractor; // r0
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class GameData _gd;
}

// Range: 0x801C391C -> 0x801C39B8
// this: r30
void ActionMenu::InitMenuStack() {}

// Range: 0x801C39B8 -> 0x801C3BC4
// this: r28
char * ActionMenu::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
    char wsString[8]; // r1+0x8

    // References
    // -> static const char * const IMU_exists;
    // -> class EGraphics * _pGfx;
    // -> static const char * const IMU_IsWideScreen;
    // -> static const char * const IMU_show_arrow_right;
    // -> static const char * const IMU_show_arrow_left;
    // -> static const char * const IMU_draw_one;
    // -> static const char * const IMU_DirectControl;
}

// Range: 0x801C3BC4 -> 0x801C3E58
// this: r31
void ActionMenu::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // Local variables
    int parm; // r0
    class MenuItem * pMenu; // r30
    unsigned int itemCount; // r0
    unsigned int parm; // r0
    class MenuItem * pMenu; // r30
    unsigned int itemCount; // r0
    unsigned int parm; // r0

    // References
    // -> static const char * const IMU_loaded;
    // -> static const char * const IMU_RefreshCallback;
    // -> static const char * const IMU_HideCallback;
    // -> static const char * const IMU_ShowCallback;
    // -> static const char * const IMU_Scroll;
    // -> static const char * const IMU_Highlight;
    // -> class EGlobal _globals;
    // -> static const char * const IMU_Choice;
}

// Range: 0x801C3E58 -> 0x801C3EEC
// this: r29
void ActionMenu::InstallGetLocalizationItems() {
    // Local variables
    int firstItem; // r0
    int i; // r30
    char temp[8]; // r1+0x10
    char numStr[8]; // r1+0x8
}

// Range: 0x801C3EEC -> 0x801C3F80
void ActionMenu::UpdateGetLocalizationItems() {
    // Local variables
    int firstItem; // r30
    int i; // r29
    char temp[8]; // r1+0x10
    char numStr[8]; // r1+0x8
}

// Range: 0x801C3F80 -> 0x801C427C
// this: r28
unsigned short * ActionMenu::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    class BString2 objName; // r1+0x14
    class MenuItem * pMenu; // r29
    char numStr[32]; // r1+0x18
    class BString2 largeStr; // r1+0x10
    unsigned int index; // r29
    class MenuItem * pMenu; // r31
    unsigned int itemCount; // r0
    unsigned short * outString; // r29

    // References
    // -> static const char * const IMU_count;
    // -> static const char * const IMU_MoreText;
    // -> class EGlobal _globals;
    // -> static const char * const IMU_title;
}

// Range: 0x801C427C -> 0x801C432C
// this: r29
void ActionMenu::DoRefresh(int selectedIndex /* r30 */, int framingIndex /* r31 */) {
    // Local variables
    char countStr[8]; // r1+0x18
    char highlightStr[8]; // r1+0x10
    char offsetStr[8]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801C432C -> 0x801C43A0
// this: r31
void ActionMenu::DoHide() {
    // References
    // -> static const char * const IMU_icon;
}

// Range: 0x801C43A0 -> 0x801C43FC
// this: r31
MenuItem::MenuItem() {}

// Range: 0x801C43FC -> 0x801C4468
// this: r30
MenuItem::~MenuItem() {}

// Range: 0x801C4468 -> 0x801C455C
// this: r27
void MenuItem::Setup(const class BString2 & strLabel /* r31 */, unsigned int shaderID /* r28 */, class ERShader * pShader /* r29 */, unsigned char bDisabled /* r30 */) {
    // Local variables
    int length; // r0
    unsigned short * pSlash; // r31
}

// Range: 0x801C455C -> 0x801C456C
void MenuItem::AddItem() {}

// Range: 0x801C456C -> 0x801C45DC
void MenuItem::AddSubItem(class MenuItem * menuItem /* r30 */) {
    // Local variables
    class MenuItem * lastItem; // r31
}

// Range: 0x801C45DC -> 0x801C462C
class MenuItem * MenuItem::GetNthItem() {
    // Local variables
    class MenuItem * pItem; // r3
}

// Range: 0x801C462C -> 0x801C46BC
// this: r30
unsigned char MenuItem::IsObjectInMenu(class cXObject * pObj /* r31 */) {}

// Range: 0x801C46BC -> 0x801C4750
// this: r31
void MenuItem::ClearMenu() {}

// Range: 0x801C4750 -> 0x801C4758
class MenuItem * MenuItem::GetNext() {}

// Range: 0x801C4758 -> 0x801C4760
class MenuItem * MenuItem::GetSubMenu() {}

// Range: 0x801C4760 -> 0x801C47A4
unsigned int MenuItem::GetMenuItemCount() {
    // Local variables
    unsigned int count; // r31
    class MenuItem * items; // r3
}

// Range: 0x801C47A4 -> 0x801C4860
// this: r29
void ActionMenu::PushControllerButtonFilter(unsigned char usingClassicMode /* r30 */) {
    // Local variables
    class EController * pCtrl; // r31

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801C4860 -> 0x801C48B4
// this: r31
void ActionMenu::PopControllerButtonFilter() {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801C48B4 -> 0x801C4A20
// this: r29
void ActionMenu::SortSelectedSimToBottom(class MenuItem * in_menu /* r27 */, class MenuItem * parent_menu /* r28 */) {
    // Local variables
    class cXObject * ourSim; // r0
    class MenuItem * submenu; // r0
    class MenuItem * current; // [invalid]
    unsigned char found; // r30
    class MenuItem * prev; // r29
    class MenuItem * temp; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801C4A20 -> 0x801C4A50
void ActionMenu::SetBackdrop(unsigned char bRed /* r0 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801C4A50 -> 0x801C4A68
void ActionMenu::SetupHarvestCount() {}


