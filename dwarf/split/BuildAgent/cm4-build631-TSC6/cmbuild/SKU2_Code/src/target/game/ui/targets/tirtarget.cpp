/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\tirtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F3EB4 -> 0x801F42F8
*/
// Range: 0x801F3EB4 -> 0x801F4020
// this: r30
TIRTarget::TIRTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const TIR_TransInProgress;
    // -> static const char * const TIR_Loaded;
    // -> static const char * const TIR_TransOutDone;
    // -> static const char * const TIR_TransInDone;
    // -> static const char * const TIR_exists;
    // -> struct [anonymous] __vt__9TIRTarget;
}

// Range: 0x801F4020 -> 0x801F40E4
// this: r29
TIRTarget::~TIRTarget() {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9TIRTarget;
}

// Range: 0x801F40E4 -> 0x801F40EC
unsigned char TIRTarget::IsLoaded() {}

// Range: 0x801F40EC -> 0x801F41B0
// this: r30
void TIRTarget::SetVariable(const char * szCommand /* r31 */) {
    // References
    // -> static const char * const TIR_Loaded;
    // -> static const char * const TIR_TransInProgress;
    // -> static const char * const TIR_TransOutDone;
    // -> static const char * const TIR_TransInDone;
}

// Range: 0x801F41B0 -> 0x801F4220
char * TIRTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const TIR_exists;
}

// Range: 0x801F4220 -> 0x801F428C
// this: r31
void TIRTarget::TransitionIn() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F428C -> 0x801F42F8
// this: r31
void TIRTarget::TransitionOut() {
    // References
    // -> class EGlobal _globals;
}


