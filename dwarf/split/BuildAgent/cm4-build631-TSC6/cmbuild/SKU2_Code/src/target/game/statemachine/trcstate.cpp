/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\trcstate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AF90 -> 0x8017BB60
*/
// Range: 0x8017AF90 -> 0x8017AFFC
static unsigned char IsTRCShowing() {
    // Local variables
    class UIScreenManager * pUISM; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017AFFC -> 0x8017B158
// this: r31
void TRCStateMachine::Startup() {}

// Range: 0x8017B158 -> 0x8017B198
// this: r31
TRCBatteryLowState::TRCBatteryLowState() {
    // References
    // -> struct [anonymous] __vt__18TRCBatteryLowState;
}

// Range: 0x8017B198 -> 0x8017B1F0
// this: r31
TRCNunchukReconnectState::TRCNunchukReconnectState() {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> struct [anonymous] __vt__24TRCNunchukReconnectState;
}

// Range: 0x8017B1F0 -> 0x8017B230
// this: r31
TRCNunchukDisconnectState::TRCNunchukDisconnectState() {
    // References
    // -> struct [anonymous] __vt__25TRCNunchukDisconnectState;
}

// Range: 0x8017B230 -> 0x8017B270
// this: r31
TRCCoreDisconnectState::TRCCoreDisconnectState() {
    // References
    // -> struct [anonymous] __vt__22TRCCoreDisconnectState;
}

// Range: 0x8017B270 -> 0x8017B2B0
// this: r31
TRCDelayState::TRCDelayState() {
    // References
    // -> struct [anonymous] __vt__13TRCDelayState;
}

// Range: 0x8017B2B0 -> 0x8017B2F0
// this: r31
TRCReadyState::TRCReadyState() {
    // References
    // -> struct [anonymous] __vt__13TRCReadyState;
}

// Range: 0x8017B2F0 -> 0x8017B324
// this: r31
void TRCStateMachine::Shutdown() {}

// Range: 0x8017B324 -> 0x8017B370
// this: r31
void TRCStateMachine::Reset() {
    // References
    // -> static unsigned int s_batteryTimeout;
}

// Range: 0x8017B370 -> 0x8017B4A4
// this: r31
void TRCStateMachine::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned char bDialogPending; // r0

    // References
    // -> static unsigned int s_delayTimeout;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x8017B4A4 -> 0x8017B750
// this: r29
void TRCStateMachine::UpdateControllers(int control /* r30 */) {
    // Local variables
    long wpadResult; // r0
    struct _WiiPadInfo * pInfo; // r0
    unsigned char bNotifyCore; // r0
    unsigned char bCoreConnected; // r5
    unsigned char bBatteryLow; // r0
    unsigned char bNunChukConnected; // r27
    unsigned char bNotifyCore; // r0
    unsigned char bCurrentStateIsDisconnect; // r0

    // References
    // -> static unsigned int s_batteryTimeout;
}

// Range: 0x8017B794 -> 0x8017B7B4
void TRCStateMachine::EnableNotification() {}

// Range: 0x8017B7B4 -> 0x8017B7D4
void TRCStateMachine::DisableNotification() {}

// Range: 0x8017B7D4 -> 0x8017B7FC
unsigned char TRCStateMachine::GetNotificationEnabled() {}

// Range: 0x8017B7FC -> 0x8017B874
void TRCStateMachine::Monitor(unsigned char enable /* r31 */, unsigned int delay /* r30 */) {
    // Local variables
    class StateMachine * pTRCStateMachine; // r31

    // References
    // -> static unsigned int s_delayTimeout;
}

// Range: 0x8017B874 -> 0x8017B8CC
void TRCCoreDisconnectState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B8CC -> 0x8017B91C
void TRCCoreDisconnectState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B91C -> 0x8017B964
// this: r31
void TRCNunchukReconnectState::Startup() {}

// Range: 0x8017B964 -> 0x8017B9B4
// this: r31
void TRCNunchukReconnectState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B9B4 -> 0x8017B9FC
// this: r31
void TRCNunchukReconnectState::Update() {}

// Range: 0x8017B9FC -> 0x8017BA64
void TRCNunchukDisconnectState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BA64 -> 0x8017BA9C
void TRCNunchukDisconnectState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BA9C -> 0x8017BAA0
void TRCNunchukDisconnectState::Update() {}

// Range: 0x8017BAA0 -> 0x8017BAD4
void TRCBatteryLowState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BAD4 -> 0x8017BB18
void TRCBatteryLowState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BB18 -> 0x8017BB60
// this: r31
void TRCBatteryLowState::Update() {}


