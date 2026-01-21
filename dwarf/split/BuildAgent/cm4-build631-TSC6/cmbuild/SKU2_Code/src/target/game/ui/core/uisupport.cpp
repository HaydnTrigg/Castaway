/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uisupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801858F0 -> 0x8018731C
*/
// Range: 0x801858F0 -> 0x80185A04
// this: r30
UIAUDIOTarget::UIAUDIOTarget() {
    // References
    // -> struct [anonymous] __vt__13UIAUDIOTarget;
}

// Range: 0x80185A04 -> 0x80185A70
// this: r30
UIAUDIOTarget::~UIAUDIOTarget() {
    // References
    // -> struct [anonymous] __vt__13UIAUDIOTarget;
}

// Range: 0x80185A70 -> 0x80185B40
// this: r29
void UIAUDIOTarget::SetVariable(const char * szVar /* r30 */, const char * szValue /* r31 */) {
    // Local variables
    int len; // r0
    char name[128]; // r1+0x8
    int colons; // r7
    int n; // r0
    int i; // r0
    int sample; // r4
}

// Range: 0x80185B40 -> 0x80185BC4
char * UIAUDIOTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
}

// Range: 0x80185BC4 -> 0x80185CFC
// this: r30
UIAnalog::UIAnalog() {
    // References
    // -> struct [anonymous] __vt__8UIAnalog;
}

// Range: 0x80185CFC -> 0x80185D68
// this: r30
UIAnalog::~UIAnalog() {
    // References
    // -> struct [anonymous] __vt__8UIAnalog;
}

// Range: 0x80185D68 -> 0x80185EFC
char * UIAnalog::GetVariable(const char * szVar /* r27 */) {
    // Local variables
    char * retStr; // r30
    float fvalue; // f0
    class EController * pCtrl; // r29
    unsigned int filterId; // r28

    // References
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80185EFC -> 0x80185F48
void UIButtonImages::Startup() {
    // References
    // -> class UIButtonImages * instance;
}

// Range: 0x80185F48 -> 0x80185F9C
void UIButtonImages::Shutdown() {
    // References
    // -> class UIButtonImages * instance;
}

// Range: 0x80185F9C -> 0x80186050
UIButtonImages::UIButtonImages() {
    // Local variables
    int i; // r0

    // References
    // -> struct [anonymous] __vt__14UIButtonImages;
}

// Range: 0x80186050 -> 0x80186090
// this: r31
UIButtonImages::~UIButtonImages() {}

// Range: 0x80186090 -> 0x80186524
void UIButtonImages::DefineIDs() {
    // Local variables
    int x; // r0
    int x; // r0
    int x; // r0
}

// Range: 0x80186524 -> 0x801865A0
// this: r28
void UIButtonImages::AddRefAll() {
    // Local variables
    int i; // r29

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x801865A0 -> 0x80186614
// this: r28
void UIButtonImages::DelRefAll() {
    // Local variables
    int i; // r29

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80186614 -> 0x80186688
class ERShader * UIButtonImages::GetButtonShader() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class UIButtonImages * instance;
}

// Range: 0x80186688 -> 0x801866AC
float UIButtonImages::GetButtonMinSize() {
    // References
    // -> class UIButtonImages * instance;
}

// Range: 0x801866AC -> 0x80186958
void UIButtonImages::LocalizeXBoxImages() {
    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EShaderManager _shaderman;
    // -> class UIButtonImages * instance;
}

// Range: 0x80186958 -> 0x80186A74
void UIButtonImages::LocalizePS2Images() {
    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EShaderManager _shaderman;
    // -> class UIButtonImages * instance;
}

// Range: 0x80186A74 -> 0x80186BE0
// this: r28
CURTarget::CURTarget() {
    // References
    // -> struct [anonymous] __vt__9CURTarget;
}

// Range: 0x80186BE0 -> 0x80186C38
// this: r30
CURTarget::~CURTarget() {}

// Range: 0x80186C38 -> 0x80186C7C
class CURTarget * CURTarget::Instance() {
    // References
    // -> class CURTarget * s_SingletonCURTarget;
}

// Range: 0x80186C7C -> 0x80186CC4
void CURTarget::Shutdown() {
    // References
    // -> class CURTarget * s_SingletonCURTarget;
}

// Range: 0x80186CC4 -> 0x80186D3C
// this: r30
unsigned char CURTarget::SetPosition() {
    // Local variables
    unsigned char clamping_occured; // r31
}

// Range: 0x80186D3C -> 0x80186E20
unsigned char CURTarget::ClampCursor() {}

// Range: 0x80186E20 -> 0x80186E34
void CURTarget::GetPosition() {}

// Range: 0x80186E34 -> 0x80186EB0
void CURTarget::UpdateFlashWithPosition(int y /* r31 */) {
    // Local variables
    char param1[8]; // r1+0x18
    char param2[8]; // r1+0x10
    char * const params[2]; // r1+0x8
}

// Range: 0x80186EB0 -> 0x80186F1C
// this: r30
void CURTarget::AddVisibilityRef(int & refID /* r31 */) {}

// Range: 0x80186F1C -> 0x80186F88
// this: r30
void CURTarget::DelVisibilityRef(int & refID /* r31 */) {}

// Range: 0x80186F88 -> 0x801870B4
// this: r31
int CURTarget::DoAddRemoveFromStack(unsigned char on /* r28 */, int refID /* r29 */, const char * action /* r30 */) {
    // Local variables
    int retVal; // r0
}

// Range: 0x801870B4 -> 0x80187168
void CURTarget::SetVisible() {
    // Local variables
    char c_value[16]; // r1+0x10
    char * const param[1]; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80187168 -> 0x80187170
unsigned char CURTarget::GetCursorHighlight() {}

// Range: 0x80187170 -> 0x80187188
void CURTarget::SetCursorState() {}

// Range: 0x80187188 -> 0x801871A0
void CURTarget::SetCursorAlpha() {}

// Range: 0x801871A0 -> 0x801871A8
void CURTarget::SetCursorAlpha_Low() {}

// Range: 0x801871A8 -> 0x801871B0
void CURTarget::SetCursorAlpha_Max() {}

// Range: 0x801871B0 -> 0x801871C8
void CURTarget::SetCursorHighlight() {}

// Range: 0x801871C8 -> 0x8018731C
// this: r30
void CURTarget::UpdateFlashCursor() {
    // Local variables
    char c_value[16]; // r1+0x10
    int value; // r5
    char * const param[1]; // r1+0xC
    char * const paramAlpha[1]; // r1+0x8
}


