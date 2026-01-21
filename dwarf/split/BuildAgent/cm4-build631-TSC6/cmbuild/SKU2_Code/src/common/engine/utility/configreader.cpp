/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\configreader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F18CC -> 0x802F265C
*/
// Range: 0x802F18CC -> 0x802F18EC
ConfigReader::ConfigReader() {}

// Range: 0x802F18EC -> 0x802F19D0
// this: r28
ConfigReader::~ConfigReader() {
    // Local variables
    struct Section * * iter; // r31
    struct Section * pSection; // r30
}

// Range: 0x802F19D0 -> 0x802F1C28
// this: r26
unsigned char ConfigReader::Init() {
    // Local variables
    class EFile * pFile; // r1+0x10
    char * pszBuffer; // r27
    unsigned long nNumRead; // r0
    char * pCurPos; // r1+0xC
    int nCurrentSectionIndex; // r28
    struct Section * pSection; // r1+0x8

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802F1C28 -> 0x802F1C70
void ConfigReader::AdvancePastWhiteSpace() {}

// Range: 0x802F1C70 -> 0x802F1CD8
void ConfigReader::AdvanceToNextLine() {}

// Range: 0x802F1CD8 -> 0x802F1EA0
// this: r29
unsigned char ConfigReader::AddSection(char * & pCurPos /* r30 */) {
    // Local variables
    char * pStartPos; // r7
    char * szSectionName; // r31
    unsigned long nLen; // r28
    struct Section * pSection; // r1+0x8
}

// Range: 0x802F1EA0 -> 0x802F2254
// this: r29
void ConfigReader::AddItem(char * & pCurPos /* r30 */, int nSectionIndex /* r31 */) {
    // Local variables
    char * pStartPos; // r7
    unsigned char quotedIdentifier; // r8
    char * pQuotedIdentifierEnd; // r9
    struct Item item; // r1+0x8
    unsigned long nLen; // r28
    unsigned char bHasQuotes; // r6
    unsigned long nLen; // r28
}

// Range: 0x802F2254 -> 0x802F2314
// this: r27
int ConfigReader::GetItemIndex(const char * szItemName /* r28 */) {
    // Local variables
    int nItemIndex; // r30
    struct Item * iter; // r29
}

// Range: 0x802F2314 -> 0x802F2380
char * ConfigReader::GetValue() {}

// Range: 0x802F2380 -> 0x802F24AC
unsigned char ConfigReader::GetBoolValue(unsigned char & bValue /* r31 */) {}

// Range: 0x802F24AC -> 0x802F2584
unsigned char ConfigReader::GetFloatValue(float & fValue /* r31 */) {
    // Local variables
    char * szStopScanChar; // r1+0x8
}

// Range: 0x802F2584 -> 0x802F265C
unsigned char ConfigReader::GetIntValue(int & nValue /* r31 */) {
    // Local variables
    char * szStopScanChar; // r1+0x8
}


