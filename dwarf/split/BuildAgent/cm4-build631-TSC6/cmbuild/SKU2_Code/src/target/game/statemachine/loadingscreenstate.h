/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\loadingscreenstate.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015D440 -> 0x8015D448
*/
// Range: 0x8015D440 -> 0x8015D448
class LoadingScreenStateMachine * LoadingScreenStateMachine::GetSingleton() {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
}


// Range: 0x8016E460 -> 0x8016E484
unsigned char LoadingScreenStateMachine::IsFadedIn() {}

// Range: 0x8016E484 -> 0x8016E4C0
float LoadingScreenWaitingForLoadState::IsReadyToLoad() {}

// Range: 0x8016E4C0 -> 0x8016E4FC
float LoadingScreenUpdateState::IsLoadComplete() {}

// Range: 0x8016E4FC -> 0x8016E504
unsigned char LoadingScreenStateMachine::IsLoadComplete() {}

// Range: 0x8016E504 -> 0x8016E50C
class CLoadingScreen * LoadingScreenStateMachine::GetLoadingScreen() {}

// Range: 0x8016E50C -> 0x8016E54C
// this: r31
IrisTransitionOutState::IrisTransitionOutState() {
    // References
    // -> struct [anonymous] __vt__22IrisTransitionOutState;
}

// Range: 0x8016E54C -> 0x8016E58C
// this: r31
IrisTransitionInState::IrisTransitionInState() {
    // References
    // -> struct [anonymous] __vt__21IrisTransitionInState;
}

// Range: 0x8016E58C -> 0x8016E5CC
// this: r31
LoadingScreenUpdateState::LoadingScreenUpdateState() {
    // References
    // -> struct [anonymous] __vt__24LoadingScreenUpdateState;
}

// Range: 0x8016E5CC -> 0x8016E60C
// this: r31
LoadingScreenWaitingForLoadState::LoadingScreenWaitingForLoadState() {
    // References
    // -> struct [anonymous] __vt__32LoadingScreenWaitingForLoadState;
}

// Range: 0x8016E60C -> 0x8016E618
void LoadingScreenStateMachine::LoadFinished() {}

// Range: 0x8016E618 -> 0x8016E624
void LoadingScreenStateMachine::LoadStarted() {}

// Range: 0x8016E624 -> 0x8016E660
float IrisTransitionInState::IsLoadComplete() {}

// Range: 0x8016E660 -> 0x8016E684
unsigned char LoadingScreenStateMachine::IsFadingIn() {}


