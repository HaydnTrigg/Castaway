/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\itbtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AE43C -> 0x801AEF64
*/
// Range: 0x801AE43C -> 0x801AE650
// this: r29
ITBTarget::ITBTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const ITB_message_shdr;
    // -> struct [anonymous] __vt__9ITBTarget;
}

// Range: 0x801AE650 -> 0x801AE6F4
// this: r30
ITBTarget::~ITBTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9ITBTarget;
}

// Range: 0x801AE6F4 -> 0x801AE814
// this: r29
void ITBTarget::SetVariable(const char * szCommand /* r30 */) {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801AE814 -> 0x801AE89C
// this: r29
char * ITBTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
}

// Range: 0x801AE89C -> 0x801AE95C
// this: r29
unsigned short * ITBTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801AE95C -> 0x801AED24
// this: r30
void ITBTarget::Update() {
    // Local variables
    class UIReflow reflow; // r1+0x68
    class UIReflow reflow; // r1+0x50
    class UIReflow reflow; // r1+0x38
    class UIReflow reflow; // r1+0x20
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801AED24 -> 0x801AED30
void ITBTarget::ShowIntroThoughtBalloon() {}

// Range: 0x801AED30 -> 0x801AED3C
void ITBTarget::HideIntroThoughtBalloon() {}

// Range: 0x801AED3C -> 0x801AED84
void ITBTarget::UpdateIntroThoughtBalloon() {}

// Range: 0x801AED84 -> 0x801AEF5C
// this: r28
void ITBTarget::SpawnIntroThoughtBalloon(class UIDialog * pDialog /* r29 */) {
    // Local variables
    unsigned char hasMessageShader; // r30
    class UIReflow reflow; // r1+0x10

    // References
    // -> static const char * const ITB_message_shdr;
}

// Range: 0x801AEF5C -> 0x801AEF64
float ITBTarget::GetUserReadTime() {}


