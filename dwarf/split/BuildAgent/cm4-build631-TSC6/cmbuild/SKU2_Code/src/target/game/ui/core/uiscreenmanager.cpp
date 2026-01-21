/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiscreenmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801848C8 -> 0x801858F0
*/
// Range: 0x801848C8 -> 0x80184AF8
// this: r28
UIScreenManager::UIScreenManager() {
    // Local variables
    int i; // r0

    // References
    // -> struct [anonymous] __vt__15UIScreenManager;
}

// Range: 0x80184AF8 -> 0x80184B64
// this: r30
UIScreenManager::~UIScreenManager() {
    // References
    // -> struct [anonymous] __vt__15UIScreenManager;
}

// Range: 0x80184B64 -> 0x80184B9C
struct UIScreenData * UIScreenManager::FindDataByID() {
    // Local variables
    struct UIScreenData * pData; // r3

    // References
    // -> struct UIScreenData UIScreenDataTable[75];
}

// Range: 0x80184B9C -> 0x80184EC0
// this: r29
unsigned char UIScreenManager::LoadUIScreen(enum UIScreenID id /* r30 */) {
    // Local variables
    unsigned char rc; // r28
    int groupSuspended; // r26
    struct UIScreenData * pData; // r0
    enum UIScreenID screenlist[10]; // r1+0x48
    enum UIScreenID screenlist[4]; // r1+0x18
    unsigned long index; // r5
    unsigned long hiddenindex; // r6
    enum UIScreenID hidden[84]; // r1+0x1C0
    unsigned long index; // r5
    unsigned long hiddenindex; // r6
    enum UIScreenID hidden[84]; // r1+0x70
    enum UIScreenID screenlist[3]; // r1+0x8
    class WidgetScreenFormat widgetScreen; // r1+0x28
    unsigned char bDone; // r3
    int i; // r4

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80184EC0 -> 0x80185064
// this: r30
unsigned char UIScreenManager::UnloadUIScreen(enum UIScreenID id /* r31 */) {
    // Local variables
    unsigned char bUnloadFailed; // r24
    int i; // r0
    struct UIManagedScreenRecord * pRec; // r23
    char pName[128]; // r1+0x8
    unsigned char bFound; // r23
    int i; // r24

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80185064 -> 0x801850A0
unsigned char UIScreenManager::IsScreenManaged() {
    // Local variables
    unsigned char rc; // r31
}

// Range: 0x801850A0 -> 0x80185150
// this: r27
int UIScreenManager::SuspendAllActiveScreens() {
    // Local variables
    int rg; // r3
    int i; // r28
    char pScreenName[32]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> int m_groupNumber;
}

// Range: 0x80185150 -> 0x801851B0
// this: r30
unsigned char UIScreenManager::ScreenHasFocus() {
    // Local variables
    unsigned char rc; // r31
    int i; // r0
}

// Range: 0x801851B0 -> 0x801852CC
void UIScreenManager::FixCurrentFocusNumber() {
    // Local variables
    unsigned char screenFound; // r6
    int i; // r7
}

// Range: 0x801852CC -> 0x801853D4
// this: r25
int UIScreenManager::SuspendScreenList(const enum UIScreenID * screenlist /* r26 */) {
    // Local variables
    int rg; // r3
    int i; // r27
    unsigned char found; // r6
    unsigned char done; // r7
    char pScreenName[32]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> int m_groupNumber;
}

// Range: 0x801853D4 -> 0x80185440
unsigned char UIScreenManager::AddScreen() {
    // Local variables
    unsigned char rc; // r8
    struct UIManagedScreenRecord * pRec; // r9
    int i; // r10
}

// Range: 0x80185440 -> 0x80185484
int UIScreenManager::FindRecordIndexByID() {
    // Local variables
    int i; // r3
    unsigned char found; // r6
}

// Range: 0x80185484 -> 0x80185560
unsigned char UIScreenManager::GetScreenFlashName(char * pOutName /* r27 */) {
    // Local variables
    unsigned char rc; // r30
    struct UIScreenData * pData; // r0
    const char * * ppLayout; // r29
    unsigned char fail; // r28
}

// Range: 0x80185560 -> 0x8018559C
unsigned char UIScreenManager::IsUIScreenUnloaded() {
    // Local variables
    unsigned char rc; // r31
    int i; // r0
}

// Range: 0x8018559C -> 0x80185600
// this: r30
unsigned char UIScreenManager::IsUIScreenMarkedForUnloading() {
    // Local variables
    unsigned char rc; // r31
    int i; // r0
    struct UIManagedScreenRecord * pRec; // r3
}

// Range: 0x80185600 -> 0x801856D4
unsigned char UIScreenManager::SetHandlesInput(unsigned char value /* r31 */) {
    // Local variables
    char strScreenName[64]; // r1+0x18
    char * const params[3]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801856D4 -> 0x801857D0
// this: r25
void UIScreenManager::SetVariable(const char * szParams /* r26 */) {
    // Local variables
    struct UIScreenData * pData; // r0
    unsigned char found; // r28
    unsigned char failure; // r27
    int i; // r0
    char pName[128]; // r1+0x8
    int index; // r0
    struct UIManagedScreenRecord * pRec; // r0

    // References
    // -> struct UIScreenData UIScreenDataTable[75];
}

// Range: 0x801857D0 -> 0x80185860
// this: r29
void UIScreenManager::Update() {
    // Local variables
    int i; // r30
}

// Range: 0x80185860 -> 0x801858F0
void UIScreenManager::PopQueue() {}


