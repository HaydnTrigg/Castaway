/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\wrapper\wrapper.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009D8E8 -> 0x8009E2B0
*/
// Range: 0x8009D8E8 -> 0x8009D8F0
class ERFont * Wrapper::GetDefaultFont() {
    // References
    // -> class ERFont * s_pDefaultFont;
}

// Range: 0x8009D8F0 -> 0x8009D8F4
void PaneItem::Startup() {}

// Range: 0x8009D8F4 -> 0x8009D930
// this: r31
void TextBaseItem::SetFontSize() {}

// Range: 0x8009D930 -> 0x8009D958
void PaneItem::SetDirtySize() {}

// Range: 0x8009D958 -> 0x8009D964
unsigned char PaneItem::IsSelected() {}

// Range: 0x8009D964 -> 0x8009D96C
float TextBaseItem::GetFontSize() {}

// Range: 0x8009D96C -> 0x8009D974
enum ItemStyle TextBaseItem::GetStyle() {}

// Range: 0x8009D974 -> 0x8009D980
unsigned char PaneItem::IsEnabled() {}

// Range: 0x8009D980 -> 0x8009D988
float Wrapper::GetDefaultTextFontSize() {
    // References
    // -> float s_fDefaultTextFontSize;
}

// Range: 0x8009D988 -> 0x8009D990
enum ItemStyle Wrapper::GetDefaultTextStyle() {
    // References
    // -> enum ItemStyle s_defaultTextStyle;
}

// Range: 0x8009D990 -> 0x8009D998
float Wrapper::GetDefaultMenuFontSize() {
    // References
    // -> float s_fDefaultMenuFontSize;
}

// Range: 0x8009D998 -> 0x8009D9A0
enum ItemStyle Wrapper::GetDefaultMenuStyle() {
    // References
    // -> enum ItemStyle s_defaultMenuStyle;
}

// Range: 0x8009D9A0 -> 0x8009D9A8
float Wrapper::GetDefaultButtonFontSize() {
    // References
    // -> float s_fDefaultButtonFontSize;
}

// Range: 0x8009D9A8 -> 0x8009D9B0
enum ItemStyle Wrapper::GetDefaultButtonStyle() {
    // References
    // -> enum ItemStyle s_defaultButtonStyle;
}

// Range: 0x8009D9B0 -> 0x8009D9B4
void PaneItem::CalculateSize() {}

// Range: 0x8009D9B4 -> 0x8009D9DC
void PaneItem::SetWaitingToReset() {}

// Range: 0x8009D9DC -> 0x8009D9E8
unsigned char PaneItem::IsGotAptPosY() {}

// Range: 0x8009D9E8 -> 0x8009D9F4
unsigned char PaneItem::IsGotAptPosX() {}

// Range: 0x8009D9F4 -> 0x8009DA00
unsigned char PaneItem::IsWaitingToReset() {}

// Range: 0x8009DA00 -> 0x8009DA04
void PaneItem::Draw() {}

// Range: 0x8009DA04 -> 0x8009DA10
unsigned char PaneItem::IsDrawBeforeApt() {}

// Range: 0x8009DA10 -> 0x8009DA1C
unsigned char WrapperPaneBase::IsDrawEnabled() {}

// Range: 0x8009DA1C -> 0x8009DA2C
void PaneItem::Select() {}

// Range: 0x8009DA2C -> 0x8009DA3C
void PaneItem::Deselect() {}

// Range: 0x8009DA3C -> 0x8009DA50
unsigned char PaneItem::IsType() {}

// Range: 0x8009DA50 -> 0x8009DA58
int PaneItem::GetValue() {}

// Range: 0x8009DA58 -> 0x8009DA94
// this: r31
void TextBaseItem::SetFont() {}

// Range: 0x8009DA94 -> 0x8009DA9C
void PaneItem::SetPos() {}

// Range: 0x8009DA9C -> 0x8009DAA4
void PaneItem::SetPosX() {}

// Range: 0x8009DAA4 -> 0x8009DAAC
void PaneItem::SetPosY() {}

// Range: 0x8009DAAC -> 0x8009DAE8
// this: r31
void PaneItem::SetSize() {}

// Range: 0x8009DAE8 -> 0x8009DAFC
void PaneItem::SetSizeX() {}

// Range: 0x8009DAFC -> 0x8009DB10
void PaneItem::SetSizeY() {}

// Range: 0x8009DB10 -> 0x8009DB18
class EVec2 & PaneItem::GetPos() {}

// Range: 0x8009DB18 -> 0x8009DB20
float PaneItem::GetPosX() {}

// Range: 0x8009DB20 -> 0x8009DB28
float PaneItem::GetPosY() {}

// Range: 0x8009DB28 -> 0x8009DB64
// this: r31
class EVec2 & PaneItem::GetSize() {}

// Range: 0x8009DB64 -> 0x8009DBA0
// this: r31
float PaneItem::GetSizeX() {}

// Range: 0x8009DBA0 -> 0x8009DBDC
// this: r31
float PaneItem::GetSizeY() {}

// Range: 0x8009DBDC -> 0x8009DBE4
class vector & WrapperPaneBase::GetItemList() {}

// Range: 0x8009DBE4 -> 0x8009DC60
// this: r30
PaneItem::~PaneItem() {
    // References
    // -> struct [anonymous] __vt__8PaneItem;
}

// Range: 0x8009DC60 -> 0x8009DC6C
void PaneItem::Reset() {}

// Range: 0x8009DC6C -> 0x8009DC70
void PaneItem::Shutdown() {}

// Range: 0x8009DC70 -> 0x8009DC98
float TextBaseItem::GetPosY() {}

// Range: 0x8009DC98 -> 0x8009DCC0
float TextBaseItem::GetPosX() {}

// Range: 0x8009DCC0 -> 0x8009DCC8
void TextBaseItem::SetPosY() {}

// Range: 0x8009DCC8 -> 0x8009DCD0
void TextBaseItem::SetPosX() {}

// Range: 0x8009DCD0 -> 0x8009DD00
class PaneItem * WrapperPaneBase::AddItem(class PaneItem * pItem /* r1+0x8 */) {}

// Range: 0x8009DD00 -> 0x8009DD68
// this: r31
ButtonItem::ButtonItem() {
    // References
    // -> struct [anonymous] __vt__10ButtonItem;
}

// Range: 0x8009DD68 -> 0x8009DDD0
// this: r30
TextBaseItem::~TextBaseItem() {}

// Range: 0x8009DDD0 -> 0x8009DDD4
void TextBaseItem::Reset() {}

// Range: 0x8009DDD4 -> 0x8009DE48
// this: r31
TextBaseItem::TextBaseItem() {
    // References
    // -> struct [anonymous] __vt__12TextBaseItem;
}

// Range: 0x8009DE48 -> 0x8009DEB4
// this: r31
PaneItem::PaneItem() {
    // References
    // -> struct [anonymous] __vt__8PaneItem;
}

// Range: 0x8009DEB4 -> 0x8009DEDC
void PaneItem::Enable() {}

// Range: 0x8009DEDC -> 0x8009DF44
// this: r31
TextItem::TextItem() {
    // References
    // -> struct [anonymous] __vt__8TextItem;
}

// Range: 0x8009DF44 -> 0x8009DFB8
// this: r30
WrapperPaneBase::~WrapperPaneBase() {
    // References
    // -> struct [anonymous] __vt__15WrapperPaneBase;
}

// Range: 0x8009DFB8 -> 0x8009DFC0
unsigned char Wrapper::IsDrawOverApt() {}

// Range: 0x8009DFC0 -> 0x8009DFC8
float WrapperPaneBase::GetAlpha() {}

// Range: 0x8009DFC8 -> 0x8009E020
// this: r30
TextItem::~TextItem() {}

// Range: 0x8009E020 -> 0x8009E078
// this: r30
MenuItem::~MenuItem() {}

// Range: 0x8009E078 -> 0x8009E0D0
// this: r30
ButtonItem::~ButtonItem() {}

// Range: 0x8009E0D0 -> 0x8009E118
// this: r31
void TextBaseItem::CalculateSize() {}

// Range: 0x8009E118 -> 0x8009E120
void TextBaseItem::SetColor() {}

// Range: 0x8009E120 -> 0x8009E128
class EVec4 & TextBaseItem::GetColor() {}

// Range: 0x8009E128 -> 0x8009E130
void TextBaseItem::SetAlpha() {}

// Range: 0x8009E130 -> 0x8009E138
float TextBaseItem::GetAlpha() {}

// Range: 0x8009E138 -> 0x8009E140
void TextBaseItem::SetShadowAlpha() {}

// Range: 0x8009E140 -> 0x8009E148
float TextBaseItem::GetShadowAlpha() {}

// Range: 0x8009E148 -> 0x8009E150
void TextBaseItem::SetShadowSize() {}

// Range: 0x8009E150 -> 0x8009E158
float TextBaseItem::GetShadowSize() {}

// Range: 0x8009E158 -> 0x8009E160
void TextBaseItem::SetPos() {}

// Range: 0x8009E160 -> 0x8009E168
class EVec2 & TextBaseItem::GetPos() {}

// Range: 0x8009E168 -> 0x8009E1C0
// this: r30
IconItem::~IconItem() {}

// Range: 0x8009E1C0 -> 0x8009E210
// this: r30
void IconItem::SetColor(class EVec4 & vColor /* r31 */) {}

// Range: 0x8009E210 -> 0x8009E254
// this: r30
class EVec4 IconItem::GetColor(class IconItem * const this /* r31 */) {}

// Range: 0x8009E254 -> 0x8009E2AC
// this: r30
DialogPaneBase::~DialogPaneBase() {}

// Range: 0x8009E2AC -> 0x8009E2B0
void WrapperPaneBase::Reset() {}


// Range: 0x8017A144 -> 0x8017A218
// this: r28
BackgroundPane::BackgroundPane(int iIconItems /* r29 */, int iTextItems /* r30 */) {
    // Local variables
    int i; // r31
    int i; // r31

    // References
    // -> struct [anonymous] __vt__14BackgroundPane;
}

// Range: 0x8017A218 -> 0x8017A2A4
// this: r31
IconItem::IconItem() {
    // References
    // -> struct [anonymous] __vt__8IconItem;
}

// Range: 0x8017A2A4 -> 0x8017A36C
// this: r29
WrapperPaneBase::WrapperPaneBase(int iItemCntMax /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15WrapperPaneBase;
}

// Range: 0x8017A36C -> 0x8017A374
void Wrapper::SetDefaultFont() {
    // References
    // -> class ERFont * s_pDefaultFont;
}

// Range: 0x8017A374 -> 0x8017A3F0
// this: r30
Wrapper::Wrapper(const char * pAssetName /* r31 */) {
    // References
    // -> struct [anonymous] __vt__7Wrapper;
}

// Range: 0x8017A3F0 -> 0x8017A468
// this: r30
Wrapper::~Wrapper() {
    // References
    // -> struct [anonymous] __vt__7Wrapper;
}

// Range: 0x8017A468 -> 0x8017A470
void WrapperPaneBase::SetAlpha() {}

// Range: 0x8017A470 -> 0x8017A480
void WrapperPaneBase::EnableDraw() {}

// Range: 0x8017A480 -> 0x8017A490
void WrapperPaneBase::SetTextItemPos() {}

// Range: 0x8017A490 -> 0x8017A4A0
void WrapperPaneBase::SetTextItemStyle() {}

// Range: 0x8017A4A0 -> 0x8017A4AC
void WrapperPaneBase::SetTextItemFontSize() {}

// Range: 0x8017A4AC -> 0x8017A4BC
void WrapperPaneBase::SetTextItemText() {}

// Range: 0x8017A4BC -> 0x8017A514
// this: r30
BackgroundPane::~BackgroundPane() {}


// Range: 0x8023C260 -> 0x8023C268
void Wrapper::SetUsesApt() {}

// Range: 0x8023C268 -> 0x8023C2D0
// this: r31
MenuItem::MenuItem() {
    // References
    // -> struct [anonymous] __vt__8MenuItem;
}

// Range: 0x8023C2D0 -> 0x8023C2D8
void IconItem::SetAlpha() {}

// Range: 0x8023C2D8 -> 0x8023C2E0
void PaneItem::SetValue() {}

// Range: 0x8023C2E0 -> 0x8023C308
void PaneItem::SetDrawBeforeApt() {}

// Range: 0x8023C308 -> 0x8023C314
class IconItem * WrapperPaneBase::GetIconItem() {}

// Range: 0x8023C314 -> 0x8023C320
void MenuPane::SetSelectedMenuItem() {}

// Range: 0x8023C320 -> 0x8023C328
void MenuPane::SetMenuWidth() {}

// Range: 0x8023C328 -> 0x8023C374
// this: r31
void WrapperPaneBase::SetButtonContext() {}

// Range: 0x8023C374 -> 0x8023C450
// this: r28
MenuPane::MenuPane(int iMenuItems /* r29 */, int iButtonItems /* r30 */) {
    // Local variables
    int i; // r31
    int i; // r31

    // References
    // -> struct [anonymous] __vt__8MenuPane;
}

// Range: 0x8023C450 -> 0x8023C458
void Wrapper::SetDefaultButtonStyle() {
    // References
    // -> enum ItemStyle s_defaultButtonStyle;
}

// Range: 0x8023C458 -> 0x8023C460
void Wrapper::SetDefaultMenuStyle() {
    // References
    // -> enum ItemStyle s_defaultMenuStyle;
}

// Range: 0x8023C460 -> 0x8023C468
void Wrapper::SetDefaultTextStyle() {
    // References
    // -> enum ItemStyle s_defaultTextStyle;
}

// Range: 0x8023C468 -> 0x8023C470
void Wrapper::SetDefaultButtonFontSize() {
    // References
    // -> float s_fDefaultButtonFontSize;
}

// Range: 0x8023C470 -> 0x8023C478
void Wrapper::SetDefaultMenuFontSize() {
    // References
    // -> float s_fDefaultMenuFontSize;
}

// Range: 0x8023C478 -> 0x8023C480
void Wrapper::SetDefaultTextFontSize() {
    // References
    // -> float s_fDefaultTextFontSize;
}

// Range: 0x8023C480 -> 0x8023C490
void WrapperPaneBase::DisableDraw() {}

// Range: 0x8023C490 -> 0x8023C4E8
// this: r30
MenuPane::~MenuPane() {}


