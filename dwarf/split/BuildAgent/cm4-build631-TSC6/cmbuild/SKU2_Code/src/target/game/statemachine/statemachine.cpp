/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\statemachine.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016A62C -> 0x8016B318
*/
// Range: 0x8016A62C -> 0x8016A634
void StateMachineState::OwnerSetNextState() {}

// Range: 0x8016A634 -> 0x8016A63C
void StateMachineState::OwnerCallState() {}

// Range: 0x8016A63C -> 0x8016A644
void StateMachineState::OwnerReturnFromState() {}

// Range: 0x8016A644 -> 0x8016A64C
int StateMachineState::OwnerGetReturnVal() {}

// Range: 0x8016A64C -> 0x8016A654
void StateMachineState::OwnerResetReturnVal() {}

// Range: 0x8016A654 -> 0x8016A810
// this: r27
void StateMachine::Update(float fDeltaSeconds /* f30 */) {
    // Local variables
    unsigned char bSwitchedState; // r29
    class StateMachineState * pCurState; // r28
    class StateMachineState * pLastState; // r28
}

// Range: 0x8016A810 -> 0x8016A864
// this: r30
void StateMachine::Draw(class ERC * pGraphicsState /* r31 */) {}

// Range: 0x8016A864 -> 0x8016A8CC
// this: r30
void StateMachine::DrawTopmost(class ERC * pGraphicsState /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x8016A8CC -> 0x8016A91C
// this: r31
void StateMachine::SetNextState(float fSecondsBeforeNextState /* f31 */) {
    // Local variables
    class StateMachineState * pState; // r3
}

// Range: 0x8016A91C -> 0x8016A954
// this: r31
void StateMachine::CallState() {
    // Local variables
    class StateMachineState * pState; // r0
}

// Range: 0x8016A954 -> 0x8016A964
void StateMachine::ReturnFromState() {}

// Range: 0x8016A964 -> 0x8016A9B0
// this: r31
int StateMachine::GetCurStateId() const {}

// Range: 0x8016A9B0 -> 0x8016AA00
// this: r31
class StateMachineState * StateMachine::AddState(class StateMachineState * pState /* r1+0x8 */) {}

// Range: 0x8016AA00 -> 0x8016AAD0
// this: r29
void StateMachine::DeleteAllStates() {
    // Local variables
    class StateMachineState * * stateIter; // r30
    class StateMachineState * pThis; // r3
    class vector temp; // r1+0x10
}

// Range: 0x8016AAD0 -> 0x8016AAD8
float StateMachine::GetTimeInState() {}

// Range: 0x8016AAD8 -> 0x8016AB60
// this: r28
class StateMachineState * StateMachine::FindStateById(int stateId /* r29 */) {
    // Local variables
    class StateMachineState * * stateIter; // r31
    class StateMachineState * pThis; // r30
}

// Range: 0x8016AB60 -> 0x8016ABD4
// this: r29
class StateMachineState * StateMachine::FindState(const class StateMachineState * pState /* r30 */) {
    // Local variables
    class StateMachineState * * stateIter; // r31
    class StateMachineState * pThis; // r3
}

// Range: 0x8016ABD4 -> 0x8016AC0C
// this: r31
void StateMachine::SetState() {}

// Range: 0x8016AC0C -> 0x8016AC60
// this: r31
void StateMachine::PushStatus() {
    // Local variables
    class StateMachineStatus * pStatus; // r1+0x8
}

// Range: 0x8016AC60 -> 0x8016ACBC
// this: r30
void StateMachine::PopStatus() {
    // Local variables
    class StateMachineStatus * pStatus; // r31
}

// Range: 0x8016ACBC -> 0x8016ACE0
void StateMachineStatus::StatusReset() {}

// Range: 0x8016ACE0 -> 0x8016ADF8
// this: r29
void StateMachineStatus::SetState(class StateMachineState * pState /* r30 */) {}

// Range: 0x8016ADF8 -> 0x8016AE20
void StateMachineStatus::AddToSecondsBeforeNextState() {}

// Range: 0x8016AE20 -> 0x8016AE30
void StateMachineStatus::AddToSecondsInCurState() {}

// Range: 0x8016AE30 -> 0x8016AEAC
// this: r30
void StateMachineStatus::ShutdownCurState() {}

// Range: 0x8016AEAC -> 0x8016AF24
// this: r31
void StateMachineStatus::UpdateCurState(float fDeltaSeconds /* f31 */) {}

// Range: 0x8016AF24 -> 0x8016AF9C
// this: r30
void StateMachineStatus::DrawCurState(class ERC * pGraphicsState /* r31 */) {}

// Range: 0x8016AF9C -> 0x8016B020
// this: r29
void StateMachineStatus::DrawTopmostCurState(class ERC * pGraphicsState /* r30 */) {}

// Range: 0x8016B020 -> 0x8016B0A4
// this: r28
class StateMachine * StateMachineManager::FindMachineById(int machineId /* r29 */) {
    // Local variables
    class StateMachine * * iMachine; // r31
    class StateMachine * pThis; // r30
}

// Range: 0x8016B0A4 -> 0x8016B114
// this: r29
class StateMachine * StateMachineManager::FindMachine(const class StateMachine * pMachine /* r30 */) {
    // Local variables
    class StateMachine * * iMachine; // r31
    class StateMachine * pThis; // r3
}

// Range: 0x8016B114 -> 0x8016B148
void StateMachineManager::Startup() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B148 -> 0x8016B170
void StateMachineManager::Shutdown() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B170 -> 0x8016B1E4
// this: r30
void StateMachineManager::UpdateMachine(float fDeltaSeconds /* f31 */) {
    // Local variables
    class StateMachine * * iMachine; // r31
}

// Range: 0x8016B1E4 -> 0x8016B1F8
void StateMachineManager::UpdateMachines() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B1F8 -> 0x8016B26C
// this: r29
void StateMachineManager::DrawMachine(class ERC * pGraphicsState /* r30 */) {
    // Local variables
    class StateMachine * * iMachine; // r31
}

// Range: 0x8016B26C -> 0x8016B2E0
// this: r29
void StateMachineManager::DrawTopmostMachine(class ERC * pGraphicsState /* r30 */) {
    // Local variables
    class StateMachine * * iMachine; // r31
}

// Range: 0x8016B2E0 -> 0x8016B2FC
void StateMachineManager::DrawMachines() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}

// Range: 0x8016B2FC -> 0x8016B318
void StateMachineManager::DrawTopmostMachines() {
    // References
    // -> class StateMachineManager * s_pStateMachineManager;
}


