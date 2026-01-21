/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uidb.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018106C -> 0x80181F54
*/
// Range: 0x8018106C -> 0x80181734
void UIDB::UIDBInit() {
    // Local variables
    unsigned short * str; // r25

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
    // -> struct UIDBData s_UIDBTable[49];
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x80181734 -> 0x801817C4
void UIDB::UIDBShutdown() {
    // Local variables
    int i; // r28

    // References
    // -> unsigned char s_UIDBInitialized;
    // -> struct UIDBData s_UIDBTable[49];
}

// Range: 0x801817C4 -> 0x80181810
int UIDB::UIDBGetInt() {
    // Local variables
    struct UIDBData * record; // r0

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x80181810 -> 0x8018185C
float UIDB::UIDBGetFloat() {
    // Local variables
    struct UIDBData * record; // r0

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x8018185C -> 0x801818A8
unsigned short * UIDB::UIDBGetString() {
    // Local variables
    struct UIDBData * record; // r0

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x801818A8 -> 0x80181904
unsigned char UIDB::UIDBSetInt(int value /* r31 */) {
    // Local variables
    struct UIDBData * record; // r0

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x80181904 -> 0x80181960
unsigned char UIDB::UIDBSetFloat(float value /* f31 */) {
    // Local variables
    struct UIDBData * record; // r0

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x80181960 -> 0x80181A08
unsigned char UIDB::UIDBSetString(const unsigned short * dataString /* r29 */) {
    // Local variables
    struct UIDBData * record; // r0
    int n; // r30

    // References
    // -> unsigned char s_UIDBInitialized;
}

// Range: 0x80181A08 -> 0x80181AA0
struct UIDBData * UIDB::UIDBFindRecord(const char * nameString /* r26 */, enum eUIDBDataType type /* r27 */) {
    // Local variables
    struct UIDBData * record; // r30
    int i; // r29
    unsigned char found; // r28

    // References
    // -> struct UIDBData s_UIDBTable[49];
}

// Range: 0x80181AA0 -> 0x80181BB4
// this: r30
UIDBTarget::UIDBTarget() {
    // References
    // -> struct [anonymous] __vt__10UIDBTarget;
}

// Range: 0x80181BB4 -> 0x80181C20
// this: r30
UIDBTarget::~UIDBTarget() {
    // References
    // -> struct [anonymous] __vt__10UIDBTarget;
}

// Range: 0x80181C20 -> 0x80181D90
void UIDBTarget::SetVariable(const char * szVar /* r29 */, const char * szValue /* r30 */) {
    // Local variables
    int len; // r0
    char type[128]; // r1+0x90
    char name[128]; // r1+0x10
    int colons; // r31
    int t; // r0
    int n; // r0
    int i; // r0
    int i; // r1+0x8
    float f; // f0
}

// Range: 0x80181D90 -> 0x80181F54
char * UIDBTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    int len; // r0
    char * szString; // r30
    char type[128]; // r1+0x88
    char name[128]; // r1+0x8
    int colons; // r9
    int t; // r0
    int n; // r0
    int i; // r0
    int data; // r0
    float data; // f0
    unsigned short * dataString; // r31
    char * returnString; // r29
}


