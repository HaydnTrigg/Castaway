/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\wrapper\wrapper.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009C0A8 -> 0x8009D8E8
*/
// Range: 0x8009C0A8 -> 0x8009C20C
static void DrawIcon(class ERC * prc /* r27 */, class EVec2 & rSize /* r28 */, class EVec4 & vColor /* r29 */, class ERShader * pShader /* r30 */) {
    // Local variables
    class EVec2 vPos; // r1+0x20
}

// Range: 0x8009C20C -> 0x8009C280
// this: r31
void TextBaseItem::Startup() {}

// Range: 0x8009C280 -> 0x8009C370
// this: r29
void TextBaseItem::Draw(class ERC * prc /* r30 */, float fAlpha /* f30 */) {
    // Local variables
    enum ItemStyle oldStyle; // r31
    float oldSize; // f31
}

// Range: 0x8009C370 -> 0x8009C3B4
// this: r31
void TextBaseItem::SetText() {}

// Range: 0x8009C3B4 -> 0x8009C4C4
// this: r27
void TextBaseItem::SetStyle(enum ItemStyle itemStyle /* r28 */) {
    // References
    // -> class EVec4 _ORANGE;
    // -> class EVec4 _YELLOW;
    // -> class EVec4 _LT_GREAY;
    // -> class EVec4 _DK_GREAY;
    // -> class EVec4 _BLUE;
    // -> class EVec4 _BLUEBLACK;
    // -> class EVec4 _WHITE;
    // -> static struct Style s_style[10];
    // -> static unsigned char s_bStyleInited;
}

// Range: 0x8009C4C4 -> 0x8009C50C
// this: r31
void TextItem::Startup() {}

// Range: 0x8009C50C -> 0x8009C554
// this: r31
void MenuItem::Startup() {}

// Range: 0x8009C554 -> 0x8009C59C
// this: r31
void ButtonItem::Startup() {}

// Range: 0x8009C59C -> 0x8009C5D0
// this: r31
void IconItem::Startup() {}

// Range: 0x8009C5D0 -> 0x8009C5D4
void IconItem::Shutdown() {}

// Range: 0x8009C5D4 -> 0x8009C68C
// this: r30
void IconItem::Draw(class ERC * prc /* r31 */, float fAlpha /* f31 */) {
    // Local variables
    class EVec4 tColor; // r1+0x8
}

// Range: 0x8009C68C -> 0x8009C6CC
// this: r31
void IconItem::SetShader() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8009C6CC -> 0x8009C710
// this: r31
void IconItem::ReleaseShader() {}

// Range: 0x8009C710 -> 0x8009C760
// this: r31
void WrapperPaneBase::Startup() {}

// Range: 0x8009C760 -> 0x8009C8AC
// this: r24
void WrapperPaneBase::Shutdown() {
    // Local variables
    int i; // r25

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009C8AC -> 0x8009CAFC
// this: r23
void WrapperPaneBase::DrawBackground(class ERC * prc /* r24 */) {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r25
    float fAlpha; // f31

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009CAFC -> 0x8009CBA8
// this: r27
void WrapperPaneBase::DrawItems(class ERC * prc /* r28 */, unsigned char bDrawBeforeApt /* r29 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
}

// Range: 0x8009CBA8 -> 0x8009CC4C
// this: r26
void WrapperPaneBase::SetSelected(enum ItemType type /* r27 */, int enabledItemIndex /* r28 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    int iEnabledItemIndex; // r30
    class PaneItem * pItem; // r29
}

// Range: 0x8009CC4C -> 0x8009CCE8
// this: r28
class PaneItem * WrapperPaneBase::GetSelectedItem(enum ItemType type /* r29 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
}

// Range: 0x8009CCE8 -> 0x8009CD78
// this: r26
class PaneItem * WrapperPaneBase::GetItem(enum ItemType type /* r27 */, int index /* r28 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    int iItemIndex; // r30
    class PaneItem * pItem; // r29
}

// Range: 0x8009CD78 -> 0x8009CDAC
void WrapperPaneBase::SetItemText(const unsigned short * text /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CDAC -> 0x8009CDE0
void WrapperPaneBase::SetItemFontSize(float fValue /* f31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CDE0 -> 0x8009CE14
void WrapperPaneBase::SetItemStyle(enum ItemStyle itemStyle /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CE14 -> 0x8009CE54
void WrapperPaneBase::SetItemPos(class EVec2 & vPos /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CE54 -> 0x8009CF44
// this: r29
int WrapperPaneBase::CalculateMenuWidthPixels() {
    // Local variables
    float fWidestWidthFound; // f31
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
    class EVec2 vSize; // r1+0x8
    float fScreenX; // f0
    int iWidestPixels; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8009CF44 -> 0x8009CF84
// this: r31
void WrapperPaneBase::SetBackgroundShader() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8009CF84 -> 0x8009CFC8
// this: r31
void WrapperPaneBase::ReleaseBackgroundShader() {}

// Range: 0x8009CFC8 -> 0x8009D090
// this: r29
void WrapperPaneBase::DeleteItemList() {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
    class vector temp; // r1+0x10
}

// Range: 0x8009D090 -> 0x8009D1C8
// this: r25
void WrapperPaneBase::ShowEnabledButtons() {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r3

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009D1C8 -> 0x8009D300
// this: r25
void WrapperPaneBase::HideEnabledButtons() {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r3

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009D300 -> 0x8009D384
// this: r31
void DialogPaneBase::Startup() {}

// Range: 0x8009D384 -> 0x8009D388
void DialogPaneBase::Shutdown() {}

// Range: 0x8009D388 -> 0x8009D3C0
int MenuPane::GetSelectedMenuItemValue() {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009D3C0 -> 0x8009D3C8
void Wrapper::WrapperStartup() {}

// Range: 0x8009D3C8 -> 0x8009D4AC
// this: r29
void Wrapper::WrapperShutdown() {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    class WrapperPaneBase * pPane; // r30
    class vector temp; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8009D4AC -> 0x8009D4B0
void Wrapper::WrapperRestoreMessageHandler() {}

// Range: 0x8009D4B0 -> 0x8009D4B4
void Wrapper::WrapperRemoveMessageHandler() {}

// Range: 0x8009D4B4 -> 0x8009D4B8
void Wrapper::WrapperReset() {}

// Range: 0x8009D4B8 -> 0x8009D4BC
void Wrapper::WrapperUpdate() {}

// Range: 0x8009D4BC -> 0x8009D60C
// this: r27
void Wrapper::WrapperDraw(class ERC * prc /* r28 */) {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    unsigned char bAnyVisiblePanes; // r30
    class WrapperPaneBase * pPane; // r29
    class WrapperPaneBase * pPane; // r29
}

// Range: 0x8009D60C -> 0x8009D654
// this: r31
class WrapperPaneBase * Wrapper::AddPane(class WrapperPaneBase * pPane /* r1+0x8 */) {}

// Range: 0x8009D654 -> 0x8009D6C8
// this: r29
class WrapperPaneBase * Wrapper::FindPane(class WrapperPaneBase * pState /* r30 */) {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    class WrapperPaneBase * pPane; // r3
}

// Range: 0x8009D6C8 -> 0x8009D7B8
static void __sinit_\game_misc_unity_cpp() {
    // References
    // -> class CTGFileManager sTheMgr;
    // -> class EVec4 _ORANGE;
    // -> class EVec4 _YELLOW;
    // -> class EVec4 _LT_GREAY;
    // -> class EVec4 _DK_GREAY;
    // -> class EVec4 _BLUE;
    // -> class EVec4 _BLUEBLACK;
    // -> class EVec4 _WHITE;
    // -> static struct Style s_style[10];
}


