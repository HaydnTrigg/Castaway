/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\widgetsupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187C60 -> 0x80188694
*/
// Range: 0x80187C60 -> 0x80187C74
WidgetScreenFormat::WidgetScreenFormat() {}

// Range: 0x80187C74 -> 0x80187CEC
// this: r29
WidgetScreenFormat::~WidgetScreenFormat() {}

// Range: 0x80187CEC -> 0x80187DC4
// this: r29
void WidgetScreenFormat::LaunchWidgetScreenLayout(const char * * ppLayout /* r30 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80187DC4 -> 0x80187E5C
// this: r29
unsigned char WidgetScreenFormat::IterateScreenLayout(const char * * ppLayout /* r30 */, enum IterationType iterationType /* r31 */) {}

// Range: 0x80187E5C -> 0x80188050
// this: r31
void WidgetScreenFormat::IterateTags(enum IterationType iterationType /* r28 */) {
    // Local variables
    char endTag[32]; // r1+0x8
    const char * pTag; // r30
    const char * pStartTag; // r29
}

// Range: 0x80188050 -> 0x80188138
// this: r28
char * WidgetScreenFormat::GetNextTag(enum IterationType iterationType /* r29 */) {
    // Local variables
    int skipCount; // r30
}

// Range: 0x80188138 -> 0x801881CC
unsigned char WidgetScreenFormat::IsValidTag(const char * tag /* r26 */) {
    // Local variables
    unsigned char rc; // r28
    unsigned char done; // r27

    // References
    // -> struct TagsAndTests ValidTagsAndTests[64];
}

// Range: 0x801881CC -> 0x80188694
// this: r24
unsigned char WidgetScreenFormat::IsDataValid(const char * tag /* r25 */) const {
    // Local variables
    unsigned char rc; // r28
    unsigned char done; // r27
    int i; // r26
    enum WidgetLayoutValidationType test; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0

    // References
    // -> struct TagsAndTests ValidTagsAndTests[64];
}


