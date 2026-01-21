/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\languagesel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023B8F4 -> 0x8023C260
*/
// Range: 0x8023B8F4 -> 0x8023B990
static void SetLanguageEntries() {
    // Local variables
    const struct ERQTable * pTab; // r1+0x8
    const class VECTOR & languageNames; // r31
    struct LanguageEntry * pEntry; // r30
    int i; // r29

    // References
    // -> static struct LanguageEntry s_languageMenu[7];
    // -> class EGlobal _globals;
}

// Range: 0x8023B990 -> 0x8023BC74
// this: r27
void LanguageSel::SetupMenuPane() {
    // Local variables
    class ERFont * pFont; // r29
    float fFontSize; // f31
    class EVec2 vPos; // r1+0x30
    class EVec2 vIconSize; // r1+0x28
    class EVec2 vOffset; // r1+0x20
    float xPadding; // f30
    float yPadding; // f29
    class EVec2 selIconPos; // r1+0x18
    class EVec2 vIconSelSize; // r1+0x10
    int i; // r28
    class EVec2 tPos; // r1+0x8

    // References
    // -> static struct LanguageEntry s_languageMenu[7];
}

// Range: 0x8023BC74 -> 0x8023BE38
// this: r30
void LanguageSel::Startup() {
    // Local variables
    class IconItem * markerIcon; // r31
    class IconItem * selIcon; // r0
    float yPos; // f0

    // References
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x8023BE38 -> 0x8023BEF0
// this: r29
void LanguageSel::Shutdown() {
    // Local variables
    struct LanguageEntry * pEntry; // r31
    int i; // r30

    // References
    // -> static struct LanguageEntry s_languageMenu[7];
}

// Range: 0x8023BEF0 -> 0x8023BF3C
// this: r30
void LanguageSel::Reset() {}

// Range: 0x8023BF3C -> 0x8023C020
// this: r29
void LanguageSel::MakeMenuSelection() {
    // Local variables
    int selectedLanguage; // r30

    // References
    // -> class EQuickdataManager _quickdataman;
    // -> static struct LanguageEntry s_languageMenu[7];
}

// Range: 0x8023C020 -> 0x8023C1C0
// this: r28
void LanguageSel::Update() {
    // Local variables
    unsigned int button; // r30
    int numControllers; // r0
    int controllerId; // r29
    class EController * ctrl; // r0
    int selValue; // r29
    int enabledItemIndex; // r29
    class IconItem * markerIcon; // r30
    class IconItem * selIcon; // r0
    float yPos; // f0
    int selectItem; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8023C1C0 -> 0x8023C1D4
void LanguageSel::Draw() {}

// Range: 0x8023C1D4 -> 0x8023C21C
// this: r31
void LanguageSel::MenuPaneShow() {}

// Range: 0x8023C21C -> 0x8023C260
// this: r31
void LanguageSel::MenuPaneHide() {}


