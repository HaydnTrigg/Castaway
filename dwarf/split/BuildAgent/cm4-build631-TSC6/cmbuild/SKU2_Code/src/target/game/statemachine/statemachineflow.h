/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\statemachineflow.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800524C8 -> 0x800524E4
*/
// Range: 0x800524C8 -> 0x800524E4
unsigned char StateMachineFlow::IsFlowRequestPending() {
    // References
    // -> enum eGameState m_stateCurrent;
    // -> enum eGameState m_stateRequest;
}


// Range: 0x8009B1BC -> 0x8009B1C4
void StateMachineFlow::SetFlowRequest() {
    // References
    // -> enum eGameState m_stateRequest;
}


// Range: 0x8016E42C -> 0x8016E440
void StateMachineFlow::AcceptFlowRequest() {
    // References
    // -> enum eGameState m_stateLast;
    // -> enum eGameState m_stateRequest;
    // -> enum eGameState m_stateCurrent;
}

// Range: 0x8016E440 -> 0x8016E448
enum eGameState StateMachineFlow::GetFlowRequest() {
    // References
    // -> enum eGameState m_stateRequest;
}

// Range: 0x8016E448 -> 0x8016E450
enum eGameState StateMachineFlow::GetCurrentState() {
    // References
    // -> enum eGameState m_stateCurrent;
}


