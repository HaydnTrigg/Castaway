/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\basestates.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016D89C -> 0x8016E42C
*/
// Range: 0x8016D89C -> 0x8016D908
// this: r30
void CreateASimBaseState::Startup() {
    // References
    // -> class HDDThread g_hddThread;
    // -> class EGlobal _globals;
}

// Range: 0x8016D908 -> 0x8016D930
void CreateASimBaseState::Shutdown() {}

// Range: 0x8016D930 -> 0x8016D9D4
// this: r30
void CreateASimBaseState::Reset() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8016D9D4 -> 0x8016DA6C
void CreateASimBaseState::GetDatasetName(char * buffer /* r30 */) {
    // Local variables
    int nCasMode; // r0
}

// Range: 0x8016DA6C -> 0x8016E2D8
// this: r30
void CreateASimBaseState::Update() {
    // Local variables
    int iRetVal; // r0
    unsigned char bDone; // r27
    class QTimer lqtimer; // r1+0x8
    int iOldStage; // r26
    char szDatasetName[32]; // r1+0x30
    char szDatasetName[32]; // r1+0x10
    int savegame_result; // r0
    int savegame_result; // r0
    int nCASMode; // r0

    // References
    // -> class EGlobal _globals;
    // -> class EDatasetManager _datasetman;
    // -> class GameData _gd;
}

// Range: 0x8016E2D8 -> 0x8016E428
// this: r29
void CreateASimBaseState::OnBackOut() {
    // References
    // -> class cBoxX * g_pBoxX;
    // -> class EFlashManager _flashman;
    // -> class GameData _gd;
}

// Range: 0x8016E428 -> 0x8016E42C
void CreateASimBaseState::Draw() {}


