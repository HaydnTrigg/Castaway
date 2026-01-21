/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\statemachine.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016B318 -> 0x8016C084
*/
// Range: 0x8016B318 -> 0x8016B320
int StateMachine::GetReturnVal() {}

// Range: 0x8016B320 -> 0x8016B32C
void StateMachine::ResetReturnVal() {}

// Range: 0x8016B32C -> 0x8016B330
void StateMachineState::CheckBaseCallFlag() {}

// Range: 0x8016B330 -> 0x8016B334
void StateMachineState::Reset() {}

// Range: 0x8016B334 -> 0x8016B338
void StateMachineState::ClearBaseCallFlag() {}

// Range: 0x8016B338 -> 0x8016B340
void StateMachineStatus::SetCallingState() {}

// Range: 0x8016B340 -> 0x8016B348
unsigned char StateMachine::IsPausedUpdate() {}

// Range: 0x8016B348 -> 0x8016B350
unsigned char StateMachine::IsEnabled() {}

// Range: 0x8016B350 -> 0x8016B354
void StateMachineState::Update() {}

// Range: 0x8016B354 -> 0x8016B358
void StateMachineState::Draw() {}

// Range: 0x8016B358 -> 0x8016B35C
void StateMachineState::DrawTopmost() {}

// Range: 0x8016B35C -> 0x8016B368
void StateMachineStatus::SetNextState() {}

// Range: 0x8016B368 -> 0x8016B370
int StateMachineState::GetStateId() {}

// Range: 0x8016B370 -> 0x8016B378
class StateMachineState * StateMachineStatus::GetCurState() {}

// Range: 0x8016B378 -> 0x8016B380
int StateMachineState::GetStage() {}

// Range: 0x8016B380 -> 0x8016B3C0
// this: r31
StateMachineState::~StateMachineState() {}

// Range: 0x8016B3C0 -> 0x8016B3C8
float StateMachineStatus::GetSecondsInCurState() {}

// Range: 0x8016B3C8 -> 0x8016B3EC
StateMachineStatus::StateMachineStatus() {}

// Range: 0x8016B3EC -> 0x8016B42C
// this: r31
StateMachineStatus::~StateMachineStatus() {}

// Range: 0x8016B42C -> 0x8016B430
void StateMachineState::Startup() {}

// Range: 0x8016B430 -> 0x8016B434
void StateMachineState::Shutdown() {}

// Range: 0x8016B434 -> 0x8016B43C
int StateMachine::GetMachineId() {}

// Range: 0x8016B43C -> 0x8016B484
// this: r31
StateMachineManager::StateMachineManager() {}

// Range: 0x8016B484 -> 0x8016B4E0
void StateMachineManager::RemoveAllMachines() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B4E0 -> 0x8016B4E8
void StateMachineState::SetStage() {}

// Range: 0x8016B4E8 -> 0x8016B4F8
void StateMachineState::NextStage() {}

// Range: 0x8016B4F8 -> 0x8016B500
class StateMachine * StateMachineState::GetStateMachine() {}

// Range: 0x8016B500 -> 0x8016B534
StateMachineState::StateMachineState() {
    // References
    // -> struct [anonymous] __vt__17StateMachineState;
}

// Range: 0x8016B534 -> 0x8016B538
void StateMachine::Startup() {}

// Range: 0x8016B538 -> 0x8016B570
// this: r31
void StateMachine::Shutdown() {}

// Range: 0x8016B570 -> 0x8016B574
void StateMachine::Reset() {}

// Range: 0x8016B574 -> 0x8016B57C
class StateMachineManager * StateMachineManager::GetManager() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B57C -> 0x8016B5FC
// this: r30
StateMachine::~StateMachine() {}

// Range: 0x8016B654 -> 0x8016B704
// this: r29
StateMachine::StateMachine(int machId /* r30 */) {
    // References
    // -> struct [anonymous] __vt__12StateMachine;
}

// Range: 0x8016B704 -> 0x8016B710
void StateMachine::PauseUpdate() {}

// Range: 0x8016B710 -> 0x8016B71C
void StateMachine::UnpauseUpdate() {}

// Range: 0x8016B71C -> 0x8016B724
float StateMachine::GetFrameDeltaTime() {}

// Range: 0x8016B724 -> 0x8016B730
void StateMachine::Disable() {}

// Range: 0x8016B730 -> 0x8016B73C
void StateMachine::Enable() {}


// Range: 0x801FA6B4 -> 0x801FA704
unsigned char StateMachineState::EnableAutoTestLog() {}

// Range: 0x801FA704 -> 0x801FA718
// this: r5
unsigned int StateMachineState::UnsetFlag() {
    // Local variables
    unsigned int bitFlags; // r0
}

// Range: 0x801FA718 -> 0x801FA72C
// this: r5
unsigned int StateMachineState::SetFlag() {
    // Local variables
    unsigned int bitFlags; // r0
}

// Range: 0x801FA72C -> 0x801FA77C
unsigned char StateMachineState::EnableValidateHeapCheck() {}

// Range: 0x801FA77C -> 0x801FA7F4
// this: r31
class StateMachine * StateMachineManager::AddMachine(class StateMachine * pMachine /* r1+0x8 */) {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}


