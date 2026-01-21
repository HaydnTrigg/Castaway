/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\Wii\TRCWiiHomeButton.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246FA4 -> 0x802483A4
*/
// Range: 0x80246FA4 -> 0x80246FF8
class TRCHomeButton * TRCHomeButton::Create() {
    // References
    // -> struct TRCWiiInit msInitParams;
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80246FF8 -> 0x8024700C
void TRCHomeButton::Destroy() {}

// Range: 0x8024700C -> 0x80247108
// this: r31
TRCHomeButton::TRCHomeButton() {
    // References
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80247108 -> 0x80247168
// this: r30
TRCHomeButton::~TRCHomeButton() {
    // References
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80247168 -> 0x80247230
void * TRCHomeButton::LoadData(const char * pAllocName /* r26 */, int alignment /* r27 */, unsigned long * pOutSize /* r28 */) {
    // Local variables
    void * pDataResult; // r31
    class EFile * pFile; // r30
    unsigned long fileSize; // r29

    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247230 -> 0x802472F0
// this: r30
unsigned char TRCHomeButton::Init(enum HomeInputType inputType /* r31 */) {}

// Range: 0x802472F0 -> 0x802473F4
// this: r29
void TRCHomeButton::LoadBanIcon(const char * homeMenuRoot /* r30 */) {
    // Local variables
    char nameBuf[64]; // r1+0x8
}

// Range: 0x802473F4 -> 0x80247544
// this: r31
void TRCHomeButton::Restore() {
    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247544 -> 0x802477B8
// this: r30
unsigned char TRCHomeButton::InitInfo() {
    // Local variables
    char nameBuf[64]; // r1+0x8
}

// Range: 0x802477B8 -> 0x80247824
// this: r31
unsigned char TRCHomeButton::InitHBMLibrary() {
    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247824 -> 0x802478E4
// this: r31
unsigned char TRCHomeButton::InitSound() {
    // Local variables
    char nameBuf[64]; // r1+0x8

    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x802478E4 -> 0x8024795C
// this: r31
void TRCHomeButton::InitHomeMenu() {}

// Range: 0x8024795C -> 0x80247964
int TRCHomeButton::SoundCallback() {}

// Range: 0x80247964 -> 0x802479E8
// this: r31
unsigned char TRCHomeButton::WasHomeButtonPressedThisFrame() {
    // Local variables
    unsigned int i; // r0
}

// Range: 0x802479E8 -> 0x80247A2C
void TRCHomeButton::StartUpHomeMenu() {}

// Range: 0x80247A2C -> 0x80247A30
void TRCHomeButton::RestoreHomeMenu() {}

// Range: 0x80247A30 -> 0x80247A50
void TRCHomeButton::ShutDownHomeMenu() {}

// Range: 0x80247A50 -> 0x80247AB8
// this: r31
void TRCHomeButton::Update() {}

// Range: 0x80247AB8 -> 0x80247B28
void TRCHomeButton::ClearInputHistory() {}

// Range: 0x80247B28 -> 0x80247CC8
// this: r31
void TRCHomeButton::UpdateControllersKPAD() {
    // Local variables
    unsigned int i; // r24
    unsigned long dev_type; // r23
    signed char wpad_err; // r22
    unsigned int i; // r22
}

// Range: 0x80247CC8 -> 0x80247D1C
// this: r31
void TRCHomeButton::ProcessController() {}

// Range: 0x80247D1C -> 0x80247E70
// this: r30
void TRCHomeButton::PreRender() {
    // Local variables
    float mv[3][4]; // r1+0x58
    float projMtx[4][4]; // r1+0x18
    int i; // r30
}

// Range: 0x80247E70 -> 0x80247F0C
// this: r29
void TRCHomeButton::PostRender() {
    // Local variables
    int i; // r30
}

// Range: 0x80247F0C -> 0x80247F44
// this: r31
void TRCHomeButton::RenderHomeMenu() {}

// Range: 0x80247F44 -> 0x80247FAC
// this: r31
void TRCHomeButton::TriggerHomeMenuBanIcon() {}

// Range: 0x80247FAC -> 0x8024810C
// this: r31
float TRCHomeButton::UpdateBanIconAlpha() {
    // Local variables
    float elapse; // f3
}

// Range: 0x8024810C -> 0x80248124
void TRCHomeButton::DisableHomeMenu() {}

// Range: 0x80248124 -> 0x802483A4
// this: r31
void TRCHomeButton::RenderBanIcon() {
    // Local variables
    struct _GXTexObj texObj; // r1+0x10
}


