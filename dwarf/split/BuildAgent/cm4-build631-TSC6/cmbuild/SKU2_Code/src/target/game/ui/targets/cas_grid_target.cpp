/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\cas_grid_target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801987D4 -> 0x80199C80
*/
// Range: 0x801987D4 -> 0x80198BC0
// this: r28
CASGridTarget::CASGridTarget(class CasMediator & mediator /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASGridTarget;
}

// Range: 0x80198BC0 -> 0x80198CF0
// this: r27
CASGridTarget::~CASGridTarget() {
    // Local variables
    int i; // r29

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASGridTarget;
}

// Range: 0x80198CF0 -> 0x80198E80
// this: r29
void CASGridTarget::Initialize() {
    // Local variables
    class CASTargetTSC6 * pNavTarget; // r30
    enum eTattooLocation bodyTexture; // r1+0xC
    enum eBodyPart bodyPart; // r1+0x8
    class CasMediator * pMediator; // r0
    class CasSimDescription * pSimDesc; // r30

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80198E80 -> 0x8019918C
// this: r31
void CASGridTarget::SetVariable(const char * szVar /* r28 */, const char * szValue /* r29 */) {
    // Local variables
    int scanresult; // r0
    int gridindex; // r1+0xC
    int shaderindex; // r1+0x8
    class ERTexture * pIconTexture; // r3

    // References
    // -> class EGlobal _globals;
    // -> class ETextureManager _textureman;
    // -> char * const GridGadgetShaderTable[16];
}

// Range: 0x8019918C -> 0x801992B4
// this: r28
char * CASGridTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801992B4 -> 0x801992BC
unsigned short * CASGridTarget::GetLocalizable() {}

// Range: 0x801992BC -> 0x80199748
// this: r29
void CASGridTarget::SubGetLocalizable(const char * szVar /* r28 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80199748 -> 0x801997C8
// this: r31
void CASGridTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801997C8 -> 0x80199874
unsigned char CASGridTarget::ConvertUiFocusToBodyPart() {}

// Range: 0x80199874 -> 0x8019989C
unsigned char CASGridTarget::ConvertUiFocusToBodyTextureType() {}

// Range: 0x8019989C -> 0x801998D0
enum eBodyPart CASGridTarget::GetCurrentUIFocusBodyPart() {
    // Local variables
    enum eBodyPart bodyPart; // r1+0x8
}

// Range: 0x801998D0 -> 0x801999CC
unsigned char CASGridTarget::ConvertCurUIFocusToChangeEvent(int & changeEvent /* r30 */) {
    // Local variables
    unsigned char retResult; // r31
}

// Range: 0x801999CC -> 0x80199A70
// this: r30
int CASGridTarget::ConvertCurUIFocusToCharDescriptionField(class CasSimDescription * pSimDesc /* r31 */) {
    // Local variables
    int currSelection; // r3
    enum eBodyPart bodyPart; // r1+0xC
    enum eTattooLocation tattooLocation; // r1+0x8
}

// Range: 0x80199A70 -> 0x80199C80
// this: r30
void CASGridTarget::CreateSelectionShaders() {
    // References
    // -> class EShaderManager _shaderman;
}


