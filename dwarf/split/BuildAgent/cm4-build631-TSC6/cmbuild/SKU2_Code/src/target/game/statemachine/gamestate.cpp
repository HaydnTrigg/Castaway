/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\gamestate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E82C -> 0x8016EC44
*/
// Range: 0x8016E82C -> 0x8016E888
// this: r30
EGameState::~EGameState() {}

// Range: 0x8016E888 -> 0x8016E8D0
// this: r31
EGameStateMan::EGameStateMan() {}

// Range: 0x8016E928 -> 0x8016E990
// this: r30
EGameStateMan::~EGameStateMan() {}

// Range: 0x8016E990 -> 0x8016EAA4
// this: r27
void EGameStateMan::SetState(class EGameStateId & newState /* r28 */) {
    // Local variables
    class NLIteratorPtrType * nli; // r30
    class EGameState * pState; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EAA4 -> 0x8016EAE4
// this: r30
void EGameStateMan::AddState(class EGameState * pState /* r31 */) {}

// Range: 0x8016EAE4 -> 0x8016EB3C
// this: r31
void EGameStateMan::KillState() {}

// Range: 0x8016EB3C -> 0x8016EBA8
// this: r31
void EGameStateMan::DeleteAllStates() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EBA8 -> 0x8016EC00
// this: r31
void EGameStateMan::Update() {
    // Local variables
    class EGameState * pState; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EC00 -> 0x8016EC44
void EGameStateMan::Draw(class ERC * prc /* r31 */) {}


