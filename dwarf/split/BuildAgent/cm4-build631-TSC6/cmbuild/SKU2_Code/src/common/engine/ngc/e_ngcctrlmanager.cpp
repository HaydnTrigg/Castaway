/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcctrlmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B2F94 -> 0x802B3AD0
*/
// Range: 0x802B2F94 -> 0x802B2FD4
// this: r31
ENgcControllerManager::~ENgcControllerManager() {}

// Range: 0x802B2FD4 -> 0x802B3094
unsigned char ENgcControllerManager::Init() {
    // References
    // -> class QTimer _ctrlLastActivetime[4];
    // -> class EClockMan * _pClockMan;
    // -> class EClock _sysclock;
    // -> struct [anonymous] __vt__14ENgcController;
    // -> class ENgcController * * _ngcCtrlPads;
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802B3094 -> 0x802B3098
void ENgcControllerManager::Shutdown() {}

// Range: 0x802B3098 -> 0x802B3288
// this: r31
void ENgcControllerManager::Update() {
    // Local variables
    unsigned int resetMask; // r30

    // References
    // -> class ENgcController * * _ngcCtrlPads;
}

// Range: 0x802B3288 -> 0x802B33B0
float ENgcController::GetStick() {
    // Local variables
    float value; // f1
}

// Range: 0x802B33B0 -> 0x802B37A0
unsigned int ENgcController::GetButtons() {
    // Local variables
    unsigned int buttons; // r3
    float left_stick_x; // f3
    float left_stick_y; // f4
    float fr; // f1
    float fl; // f2
    float fu; // f3
    float fd; // f4
}

// Range: 0x802B37A0 -> 0x802B37A8
unsigned char ENgcController::HasVibration() {}

// Range: 0x802B37A8 -> 0x802B3870
// this: r31
unsigned char ENgcController::VibrateMotorOne() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802B3870 -> 0x802B3938
// this: r31
unsigned char ENgcController::VibrateMotorTwo() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802B3938 -> 0x802B3A00
// this: r31
unsigned char ENgcController::StopMotorOne() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802B3A00 -> 0x802B3AC8
// this: r31
unsigned char ENgcController::StopMotorTwo() {
    // References
    // -> unsigned char s_bShuttingDown;
    // -> unsigned char bWasInError;
}

// Range: 0x802B3AC8 -> 0x802B3ACC
unsigned char ENgcController::IsMotorOneActive() {}

// Range: 0x802B3ACC -> 0x802B3AD0
unsigned char ENgcController::IsMotorTwoActive() {}


