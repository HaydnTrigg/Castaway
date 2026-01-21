/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\kpktarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E4820 -> 0x801E54E4
*/
// Range: 0x801E4820 -> 0x801E490C
// this: r30
KPKTarget::~KPKTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9KPKTarget;
}

// Range: 0x801E490C -> 0x801E4BF4
// this: r31
void KPKTarget::SetVariable(const char * szCommand /* r28 */, const char * szParams /* r27 */) {
    // Local variables
    unsigned short newChar[2]; // r1+0x8
    int i; // r0
    unsigned short pTmp[256]; // r1+0x10
    unsigned short * pSrc; // r28
    unsigned short * pDst; // r27
    int chars; // r0

    // References
    // -> static const char * const KPK_done;
    // -> static const char * const KPK_exit;
    // -> static const char * const KPK_quit;
    // -> static const char * const KPK_add;
}

// Range: 0x801E4BF4 -> 0x801E4E8C
// this: r30
char * KPKTarget::GetVariable(const char * szVar /* r28 */) {
    // Local variables
    char * retStr; // r31
    unsigned char moved; // r29
    unsigned char moved; // r29
    unsigned char moved; // r29
    unsigned int size; // r0
    int moves; // r5
    unsigned char valid; // r29
    int useLength; // r28

    // References
    // -> static const char * const K2Y_exists;
    // -> static const char * const KPK_exists;
    // -> static const char * const KPK_valid;
    // -> static const char * const KPK_bs;
    // -> static const char * const KPK_right;
    // -> static const char * const KPK_left;
    // -> static const char * const KPK_more;
}

// Range: 0x801E4E8C -> 0x801E4F74
// this: r29
unsigned short * KPKTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30

    // References
    // -> static const char * const KPK_header;
    // -> static const char * const KPK_user_text;
}

// Range: 0x801E4F74 -> 0x801E4FF4
// this: r31
void KPKTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801E4FF4 -> 0x801E51F8
// this: r29
void KPKTarget::DrawUserText(class ERC * prc /* r30 */, const struct structDrawCBparams * params /* r31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x68
    class EVec4 vColor; // r1+0x18
    class EVec2 vTL; // r1+0x10
    class EVec2 vBR; // r1+0x8
    float ew; // f29
    float drawAreaWidth; // f28
    float fontSize; // f27
    float printWidth; // f1
    class EMat4 mat; // r1+0x28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E51F8 -> 0x801E544C
// this: r25
void KPKTarget::MakeDisplayString() {
    // Local variables
    int dashCounter; // r28
    unsigned short dashString[8]; // r1+0x8
    int lenDashString; // r0
    int i; // r0
    unsigned short * pSrc; // r27
    unsigned short * pDst; // r26
    int chars; // r0
    unsigned short resetFontString[32]; // r1+0x18
}

// Range: 0x801E544C -> 0x801E5484
void KPKTarget::InvokeRouterAcceptCommand() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E5484 -> 0x801E54BC
void KPKTarget::InvokeRouterCancelCommand() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E54BC -> 0x801E54E4
void KPKTarget::CreateInvalidCodeDialog() {}


