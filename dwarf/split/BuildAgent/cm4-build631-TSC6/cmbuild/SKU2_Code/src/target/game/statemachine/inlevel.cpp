/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\inlevel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016EDD8 -> 0x80170C6C
*/
// Range: 0x8016EDD8 -> 0x8016EE60
// this: r30
void InLevelBaseState::Reset() {
    // References
    // -> class GameData _gd;
}

// Range: 0x8016EE60 -> 0x8016EEF4
// this: r30
void InLevelBaseState::Shutdown() {
    // References
    // -> class GameData _gd;
}

// Range: 0x8016EEF4 -> 0x801707B0
// this: r29
void InLevelBaseState::Update() {
    // Local variables
    int callStateResult; // r0
    enum eGameState flowstaterequest; // r28
    class Interactor * pActiveInteractor; // r0
    struct InteractorParams params; // r1+0x8
    enum eMUResult result; // r0
    unsigned char bLaunchFromLiveMode; // r30
    enum eGameState currentState; // r0
    class Interactor * pInteractor; // r0
    int savegame_result; // r0
    class cSimulator * pSimulator; // r28
    class Neighborhood * pNeighborhood; // r30

    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
    // -> static int goingToCasStage;
    // -> class EApp * _pApp;
    // -> class GameData _gd;
    // -> class ESimsApp _app;
}

// Range: 0x801707B0 -> 0x80170808
void InLevelBaseState::HandleFlowToIngameDialog() {
    // Local variables
    class Interactor * pInteractor; // r0
}

// Range: 0x80170808 -> 0x8017092C
// this: r31
void InLevelBaseState::HandleExitToMainMenu() {
    // References
    // -> class GameData _gd;
}

// Range: 0x8017092C -> 0x80170980
void InLevelBaseState::Draw(class ERC * prc /* r31 */) {
    // References
    // -> class ESimsApp _app;
    // -> class GameData _gd;
}

// Range: 0x80170980 -> 0x801709D8
void InLevelBaseState::SavePlayerInteractorState() {
    // Local variables
    class Interactor * pInteractor; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801709D8 -> 0x80170A6C
// this: r31
InLevelBaseState::InLevelBaseState() {
    // References
    // -> struct [anonymous] __vt__16InLevelBaseState;
}

// Range: 0x80170A6C -> 0x80170C6C
// this: r29
InLevelBaseState::~InLevelBaseState() {
    // References
    // -> struct [anonymous] __vt__16InLevelBaseState;
}


