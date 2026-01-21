/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\mustates.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80174F98 -> 0x80175800
*/
// Range: 0x80174F98 -> 0x801750D0
// this: r30
void MUStatesProcessRequests::Update() {
    // Local variables
    int iRetVal; // r0

    // References
    // -> enum eMURequest m_resultRequest;
    // -> enum eMURequest m_pendingRequest;
    // -> enum eMUResult m_result;
}

// Range: 0x801750D0 -> 0x80175104
// this: r31
void MUStatesLoadHouse::Reset() {}

// Range: 0x80175104 -> 0x80175108
void MUStatesLoadHouse::Draw() {}

// Range: 0x80175108 -> 0x80175234
// this: r31
void MUStatesLoadHouse::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    int iRetVal; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80175234 -> 0x80175238
void MUStatesTransitionAutoSaveExisting::Reset() {}

// Range: 0x80175238 -> 0x801752D0
// this: r31
void MUStatesTransitionAutoSaveExisting::Update() {
    // Local variables
    int iRetVal; // r0
}

// Range: 0x801752D0 -> 0x80175304
// this: r31
void MUStatesTransitionSaveExistingGame::Reset() {}

// Range: 0x80175304 -> 0x80175308
void MUStatesTransitionSaveExistingGame::Draw() {}

// Range: 0x80175308 -> 0x801753D0
// this: r31
void MUStatesTransitionSaveExistingGame::Update() {
    // Local variables
    int iRetVal; // r0
    class MemoryDevicePort_t port; // r1+0x8
}

// Range: 0x801753D0 -> 0x801754B8
// this: r31
void MUStateMachine::Startup() {}

// Range: 0x801754B8 -> 0x801754F8
// this: r31
MUStatesTransitionSaveExistingGame::MUStatesTransitionSaveExistingGame() {
    // References
    // -> struct [anonymous] __vt__34MUStatesTransitionSaveExistingGame;
}

// Range: 0x801754F8 -> 0x80175538
// this: r31
MUStatesTransitionAutoSaveExisting::MUStatesTransitionAutoSaveExisting() {
    // References
    // -> struct [anonymous] __vt__34MUStatesTransitionAutoSaveExisting;
}

// Range: 0x80175538 -> 0x80175578
// this: r31
MUStatesLoadHouse::MUStatesLoadHouse() {
    // References
    // -> struct [anonymous] __vt__17MUStatesLoadHouse;
}

// Range: 0x80175578 -> 0x801755B8
// this: r31
MUStatesProcessRequests::MUStatesProcessRequests() {
    // References
    // -> struct [anonymous] __vt__23MUStatesProcessRequests;
}

// Range: 0x801755B8 -> 0x801755EC
// this: r31
void MUStateMachine::Shutdown() {}

// Range: 0x801755EC -> 0x80175628
// this: r31
void MUStateMachine::Reset() {}

// Range: 0x80175628 -> 0x8017562C
void MUStateMachine::Update() {}

// Range: 0x8017562C -> 0x80175648
void MUStateMachine::Draw() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80175648 -> 0x80175684
enum eMURequest MUStateMachine::MURequest() {
    // Local variables
    enum eMURequest rc; // r4

    // References
    // -> enum eMURequest m_resultRequest;
    // -> enum eMUResult m_result;
    // -> enum eMURequest m_pendingRequest;
}

// Range: 0x80175684 -> 0x801756A0
enum eMUResult MUStateMachine::MUPollForResult() {
    // Local variables
    enum eMUResult result; // r4

    // References
    // -> enum eMUResult m_result;
    // -> enum eMURequest m_resultRequest;
}

// Range: 0x801756A0 -> 0x801756F8
// this: r30
MUStatesProcessRequests::~MUStatesProcessRequests() {}

// Range: 0x801756F8 -> 0x80175750
// this: r30
MUStatesLoadHouse::~MUStatesLoadHouse() {}

// Range: 0x80175750 -> 0x801757A8
// this: r30
MUStatesTransitionAutoSaveExisting::~MUStatesTransitionAutoSaveExisting() {}

// Range: 0x801757A8 -> 0x80175800
// this: r30
MUStatesTransitionSaveExistingGame::~MUStatesTransitionSaveExistingGame() {}


