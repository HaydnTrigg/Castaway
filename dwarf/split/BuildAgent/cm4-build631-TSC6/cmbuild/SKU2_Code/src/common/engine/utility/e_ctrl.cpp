/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\e_ctrl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F2EC8 -> 0x802F5160
*/
// Range: 0x802F2EC8 -> 0x802F31DC
// this: r31
EController::EController() {
    // Local variables
    int i; // r5

    // References
    // -> int _nCtrlPads;
    // -> struct [anonymous] __vt__11EController;
}

// Range: 0x802F31DC -> 0x802F3274
// this: r30
EController::~EController() {
    // References
    // -> struct [anonymous] __vt__11EController;
}

// Range: 0x802F3274 -> 0x802F32D0
// this: r31
void EController::Update() {
    // References
    // -> int _lastCtrlUpdate;
    // -> int _retracecount;
}

// Range: 0x802F32D0 -> 0x802F33D4
void EController::UpdateAutoRepeat() {
    // Local variables
    int cur; // r8
}

// Range: 0x802F33D4 -> 0x802F33E8
// this: r4
void EController::ClearAllData() {}

// Range: 0x802F33E8 -> 0x802F3414
int EBtnToCmdAssoc::CompareControllerCommands() {}

// Range: 0x802F3414 -> 0x802F3438
void EController::SetCommandMap(struct EBtnToCmdAssoc * commands /* r0 */) {}

// Range: 0x802F3438 -> 0x802F3590
// this: r29
unsigned char EController::IsInUse() {}

// Range: 0x802F3590 -> 0x802F35B8
void EController::Flush() {}

// Range: 0x802F35B8 -> 0x802F35C0
unsigned char EController::HasVibration() {}

// Range: 0x802F35C0 -> 0x802F35D8
unsigned char EController::IsMotorOneActive() {}

// Range: 0x802F35D8 -> 0x802F35F0
unsigned char EController::IsMotorTwoActive() {}

// Range: 0x802F35F0 -> 0x802F3658
// this: r31
unsigned char EController::VibrateMotorOne(float Intensity /* f31 */) {}

// Range: 0x802F3658 -> 0x802F3684
unsigned char EController::VibrateMotorOne() {}

// Range: 0x802F3684 -> 0x802F36EC
// this: r31
unsigned char EController::VibrateMotorTwo(float Intensity /* f31 */) {}

// Range: 0x802F36EC -> 0x802F3718
unsigned char EController::VibrateMotorTwo() {}

// Range: 0x802F3718 -> 0x802F3798
// this: r30
unsigned char EController::VibrateAll(float I2 /* f31 */) {}

// Range: 0x802F3798 -> 0x802F382C
// this: r30
unsigned char EController::VibrateAll(float I2 /* f30 */, float D2 /* f31 */) {}

// Range: 0x802F382C -> 0x802F3840
unsigned char EController::StopMotorOne() {}

// Range: 0x802F3840 -> 0x802F384C
unsigned char EController::StopMotorOne() {}

// Range: 0x802F384C -> 0x802F3860
unsigned char EController::StopMotorTwo() {}

// Range: 0x802F3860 -> 0x802F386C
unsigned char EController::StopMotorTwo() {}

// Range: 0x802F386C -> 0x802F38DC
// this: r30
unsigned char EController::StopVibration() {}

// Range: 0x802F38DC -> 0x802F3984
// this: r31
unsigned char EController::UpdateVibration() {
    // References
    // -> float _dt;
}

// Range: 0x802F3984 -> 0x802F39B4
void EController::PauseMotors() {}

// Range: 0x802F39B4 -> 0x802F39D4
void EController::ResumeMotors() {}

// Range: 0x802F39D4 -> 0x802F39F0
unsigned char EController::GetControllerCursorPosition() {}

// Range: 0x802F39F0 -> 0x802F3A04
unsigned char EController::GetNunchukTilt() {}

// Range: 0x802F3A04 -> 0x802F3A0C
void EController::ResetControllerData() {}

// Range: 0x802F3A0C -> 0x802F3B7C
void EController::UpdateButtonData() {
    // Local variables
    unsigned int newReleased; // r0
    unsigned int newPressed; // r4
    int i; // r5
    unsigned int mask; // r10
}

// Range: 0x802F3B7C -> 0x802F3C10
void EController::UpdateStickData() {}

// Range: 0x802F3C10 -> 0x802F3C24
void EController::UpdateCursorData() {}

// Range: 0x802F3C24 -> 0x802F3C30
void EController::UpdateNunchukTiltData() {}

// Range: 0x802F3C30 -> 0x802F3D04
// this: r29
float EController::GetStick(int stickIndex /* r30 */, int axisIndexIn /* r31 */) {
    // Local variables
    unsigned int mask; // r0
    int axisIndex; // [invalid]
}

// Range: 0x802F3D04 -> 0x802F3DF4
// this: r29
unsigned char EController::StickMoved(int index /* r30 */, float minDelta /* f30 */, unsigned int filterId /* r31 */) {
    // Local variables
    float tmp; // f0
}

// Range: 0x802F3DF4 -> 0x802F3EC8
// this: r29
float EController::GetLastStick(int stickIndex /* r30 */, int axisIndexIn /* r31 */) {
    // Local variables
    unsigned int mask; // r0
    int axisIndex; // [invalid]
}

// Range: 0x802F3EC8 -> 0x802F3F0C
unsigned char EController::GetBtnResult() {}

// Range: 0x802F3F0C -> 0x802F3F4C
unsigned char EController::GetBtnResultAny() {}

// Range: 0x802F3F4C -> 0x802F3F78
int EBtnToCmdAssoc::CompareControllerCommandToKey() {}

// Range: 0x802F3F78 -> 0x802F4088
// this: r27
unsigned char EController::GetCmdResult(unsigned int nCommandId /* r28 */, unsigned int state1 /* r29 */, unsigned int state2 /* r30 */, unsigned char excl /* r31 */) {
    // Local variables
    struct EBtnToCmdAssoc * firstCommand; // r3
}

// Range: 0x802F4088 -> 0x802F4160
// this: r31
unsigned int EController::AddFilter(unsigned int buttonMask /* r29 */, int priority /* r30 */) {
    // Local variables
    unsigned int filterId; // r3
    int cur; // r5

    // References
    // -> static unsigned int lastfilterId;
}

// Range: 0x802F4160 -> 0x802F4214
// this: r30
void EController::RemoveFilter(unsigned int filterId /* r31 */) {
    // Local variables
    int index; // r3
}

// Range: 0x802F4214 -> 0x802F4260
// this: r30
void EController::AddCmdToFilter(unsigned int filterId /* r31 */) {}

// Range: 0x802F4260 -> 0x802F42AC
// this: r30
void EController::RemoveCmdFromFilter(unsigned int filterId /* r31 */) {}

// Range: 0x802F42AC -> 0x802F4300
// this: r30
void EController::AddBtnToFilter(unsigned int buttons /* r31 */) {
    // Local variables
    int filter; // r0
}

// Range: 0x802F4300 -> 0x802F4354
// this: r30
void EController::RemoveBtnFromFilter(unsigned int buttons /* r31 */) {
    // Local variables
    int filter; // r0
}

// Range: 0x802F4354 -> 0x802F4418
// this: r29
unsigned int EController::GetCmdButtonMask(unsigned int nCommandId /* r30 */) {
    // Local variables
    struct EBtnToCmdAssoc * firstCommand; // r3
    unsigned int buttonMask; // r31
}

// Range: 0x802F4418 -> 0x802F4464
int EController::GetFilterIndex() {
    // Local variables
    int top; // r6
}

// Range: 0x802F4464 -> 0x802F4688
unsigned int EController::GetFilterMask() {
    // Local variables
    int start; // r4
    unsigned int mask; // r0
}

// Range: 0x802F4688 -> 0x802F48B4
unsigned int EController::GetBtnDownMask() {}

// Range: 0x802F48B4 -> 0x802F4AE0
unsigned int EController::GetBtnUpMask() {}

// Range: 0x802F4AE0 -> 0x802F4D0C
unsigned int EController::GetBtnPressedMask() {}

// Range: 0x802F4D0C -> 0x802F4F38
unsigned int EController::GetBtnReleasedMask() {}

// Range: 0x802F4F38 -> 0x802F5160
unsigned int EController::GetBtnRepeatMask() {}


