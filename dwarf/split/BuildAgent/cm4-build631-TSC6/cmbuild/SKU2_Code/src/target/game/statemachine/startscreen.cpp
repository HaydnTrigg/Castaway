/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\startscreen.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017680C -> 0x80177214
*/
// Range: 0x8017680C -> 0x801768AC
// this: r31
void StartScreenVars::Startup() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x801768AC -> 0x80176900
// this: r31
void StartScreenVars::Shutdown() {}

// Range: 0x80176900 -> 0x80176988
// this: r31
void StartScreenVars::Reset() {}

// Range: 0x80176988 -> 0x801769CC
void StartScreenVars::Update() {}

// Range: 0x801769CC -> 0x80176A98
void StartScreenVars::DrawPressStart(class ERC * prc /* r29 */) {
    // Local variables
    class ERFont * pFont; // r30

    // References
    // -> static class EVec2 s_press_start_position;
    // -> static class EVec4 s_press_start_color;
    // -> class EGlobal _globals;
}

// Range: 0x80176A98 -> 0x80176B1C
// this: r31
void TheSimsStartScreenStateMachine::Startup() {
    // References
    // -> class EDatasetManager _datasetman;
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176B1C -> 0x80176B6C
// this: r31
StartScreenStartState::StartScreenStartState() {
    // References
    // -> struct [anonymous] __vt__21StartScreenStartState;
}

// Range: 0x80176B6C -> 0x80176BA8
// this: r31
StartScreenVars::StartScreenVars() {}

// Range: 0x80176BA8 -> 0x80176BF4
// this: r31
void TheSimsStartScreenStateMachine::Shutdown() {
    // References
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176BF4 -> 0x80176C58
// this: r31
void TheSimsStartScreenStateMachine::Reset() {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176C58 -> 0x80176CA0
// this: r31
void TheSimsStartScreenStateMachine::Update(float fDeltaSeconds /* f31 */) {
    // References
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176CA0 -> 0x80176D7C
// this: r30
void StartScreenStartState::Startup() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class GameData _gd;
    // -> static class StartScreenVars * s_pVars;
    // -> class HDDThread g_hddThread;
}

// Range: 0x80176D7C -> 0x80176DF8
// this: r29
void StartScreenStartState::Shutdown() {
    // References
    // -> class GameData _gd;
    // -> class EShaderManager _shaderman;
}

// Range: 0x80176DF8 -> 0x80176FF4
// this: r30
void StartScreenStartState::Update() {
    // References
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
    // -> class EControllerManager * _pCtrlMan;
    // -> float _dt;
    // -> static class StartScreenVars * s_pVars;
    // -> class GameData _gd;
    // -> class EShaderManager _shaderman;
}

// Range: 0x80176FF4 -> 0x801771CC
// this: r26
void StartScreenStartState::Draw(class ERC * prc /* r27 */) {
    // References
    // -> static class StartScreenVars * s_pVars;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801771CC -> 0x80177214
static void __sinit_\game_statemachine_unity_cpp() {
    // References
    // -> static class EVec2 s_press_start_position;
    // -> static class EVec4 s_press_start_color;
}


