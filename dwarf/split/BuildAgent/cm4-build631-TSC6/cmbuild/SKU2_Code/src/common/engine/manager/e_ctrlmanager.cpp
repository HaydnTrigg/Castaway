/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\e_ctrlmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A806C -> 0x802A8358
*/
// Range: 0x802A806C -> 0x802A8084
EControllerManager::EControllerManager() {
    // References
    // -> struct [anonymous] __vt__18EControllerManager;
}

// Range: 0x802A8084 -> 0x802A809C
unsigned char EControllerManager::Init() {}

// Range: 0x802A809C -> 0x802A80F8
void EControllerManager::Update() {
    // Local variables
    int i; // r30

    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A80F8 -> 0x802A80FC
void EControllerManager::Shutdown() {}

// Range: 0x802A80FC -> 0x802A810C
void EControllerManager::MapPlayerToController() {}

// Range: 0x802A810C -> 0x802A8110
void EControllerManager::SwapPlayerControls() {}

// Range: 0x802A8110 -> 0x802A811C
void EControllerManager::UnmapPlayer() {}

// Range: 0x802A811C -> 0x802A8124
unsigned char EControllerManager::GetPlayerMapped() {}

// Range: 0x802A8124 -> 0x802A8144
class EController * EControllerManager::GetController() {
    // Local variables
    class EController * pController; // r3

    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A8144 -> 0x802A814C
int EControllerManager::GetPlayerControllerIndex() {}

// Range: 0x802A814C -> 0x802A8174
class EController * EControllerManager::GetPlayerController() {
    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A8174 -> 0x802A81E4
int EControllerManager::FindActiveController() {
    // Local variables
    int ctrlIndex; // r30
    int i; // r29

    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A81E4 -> 0x802A8240
void EControllerManager::Flush() {
    // Local variables
    int i; // r30

    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A8240 -> 0x802A831C
unsigned char EControllerManager::GetCmdResultAllCtrl(unsigned int nCommandId /* r21 */, unsigned int (EController::* (& getmask1))(void *, void *, unsigned int) /* r22 */, unsigned int (EController::* (& getmask2))(void *, void *, unsigned int) /* r23 */, unsigned char excl /* r24 */, unsigned int * pCtrlIdOut /* r25 */, unsigned int filterId /* r26 */) {
    // Local variables
    unsigned char bResult; // r3
    int i; // r27

    // References
    // -> class EController * _ctrlPads[4];
}

// Range: 0x802A831C -> 0x802A8358
// this: r31
void EControllerManager::MapControllerCommands() {
    // References
    // -> class EController * _ctrlPads[4];
}


