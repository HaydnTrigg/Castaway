/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\casscene.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800300EC -> 0x8003169C
*/
// Range: 0x800300EC -> 0x8003028C
// this: r29
CasScene::CasScene() {
    // References
    // -> struct [anonymous] __vt__8CasScene;
}

// Range: 0x8003028C -> 0x80030384
// this: r29
CasScene::~CasScene() {
    // References
    // -> struct [anonymous] __vt__8CasScene;
}

// Range: 0x80030384 -> 0x80030438
// this: r31
void CasScene::Init() {}

// Range: 0x80030438 -> 0x80030440
void CasScene::SetMediator() {}

// Range: 0x80030440 -> 0x8003050C
// this: r31
void CasScene::Update() {
    // Local variables
    struct CreatedLightingEntry lighting; // r1+0x8

    // References
    // -> float _dt;
}

// Range: 0x800305C0 -> 0x8003063C
// this: r30
void CasScene::Draw(class ERC * prc /* r31 */) {
    // Local variables
    class EMat4 transform; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8003063C -> 0x80030904
// this: r30
void CasScene::ApplyLighting(class ERC * prc /* r31 */, const class EVec3 & pos /* r22 */, unsigned char bApplySimLighting /* r23 */) {
    // Local variables
    class ERLevel * pLevel; // r25
    struct ELights lights; // r1+0xA0
    const class RoomData * rd; // r0
    int i; // r24
    class EVec3 ambColor; // r1+0x50
    float brightness; // f1
    float ambMinimum; // f31
    float x; // f0
    float contrast; // f31
    int i; // r24
    class EVec3 fillDir; // r1+0x44
    class EMat4 fillOrientation; // r1+0x60
    class EVec3 vDir; // r1+0x38

    // References
    // -> class SimLightingTuning g_simLightingTuning;
    // -> class EEngine * _pEngine;
}

// Range: 0x80030904 -> 0x80030914
void CasScene::SetProjectionParams() {}

// Range: 0x80030914 -> 0x80030B60
// this: r30
void CasScene::RepositionCamera(unsigned int newAngleIndex /* r31 */, float duration /* f30 */, float delay /* f31 */) {
    // Local variables
    struct CameraAngle newAngle; // r1+0x50
    struct CameraAngle newAltAngle; // r1+0x38
    class EVec3 newPosition; // r1+0x2C
    class EVec3 newTarget; // r1+0x20
    class EVec3 newAltPosition; // r1+0x14
    class EVec3 newAltTarget; // r1+0x8

    // References
    // -> class CasTweakTool _gCasTweakTool;
    // -> struct CameraAngle m_altCameraAngles[9];
    // -> struct CameraAngle m_cameraAngles[9];
}

// Range: 0x80030B60 -> 0x80030C48
// this: r31
void CasScene::InitCamera() {
    // Local variables
    struct CameraAngle newAngle; // r1+0x20
    class EVec3 newPosition; // r1+0x14
    class EVec3 newTarget; // r1+0x8

    // References
    // -> class CasTweakTool _gCasTweakTool;
    // -> struct CameraAngle m_cameraAngles[9];
}

// Range: 0x80030C48 -> 0x80030FA0
// this: r28
void CasScene::UpdateCamera() {
    // Local variables
    int playerNum; // r31
    int filterId; // r31
    class EController * pCtrl; // r30
    int id; // r29
    float joystickPos; // f31
    float altHerm; // f31
    float herm; // f31

    // References
    // -> class EGlobal _globals;
    // -> class CasTweakTool _gCasTweakTool;
    // -> float _dt;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80030FA0 -> 0x800310C4
// this: r28
void CasScene::SetUpWindow(class ERC * prc /* r29 */) {
    // Local variables
    int screenX; // r0
    int screenY; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x800310C4 -> 0x8003131C
// this: r29
void CasScene::HandleEventChangeFocus(const class CasEventChangeFocus & event /* r30 */) {
    // Local variables
    int nCASMode; // r0

    // References
    // -> static class EVec3 kSimPosDefault;
    // -> static class EVec3 kListenerDir;
    // -> static class EVec3 kPosSimCAR[6];
}

// Range: 0x8003131C -> 0x800313C8
unsigned char CasScene::GetObjectPosition(unsigned int nObject /* r30 */, float & rotation /* r31 */) {
    // References
    // -> static float kRotationSimCAR[6];
    // -> static class EVec3 kPosSimCAR[6];
    // -> static class EVec3 kSimPosDefault;
}

// Range: 0x800313C8 -> 0x80031674
static void __sinit_\game_cas_unity_cpp() {
    // References
    // -> class EVec3 kMirrorClothingCorners[4];
    // -> class EVec3 kMirrorClothingCorners[4];
    // -> class EVec3 kDefaultCameraUp;
    // -> class EVec3 kDefaultCameraTarget;
    // -> class EVec3 kDefaultCameraPos;
    // -> class EVec3 kDefaultDirLightDir[4];
    // -> class EVec3 kDefaultDirLightColor[4];
    // -> class EVec3 kDefaultLightAmbientColor;
    // -> class EVec4 kDefaultBackgroundColor;
    // -> class CasTweakTool _gCasTweakTool;
    // -> static class EVec3 kListenerDir;
    // -> static class EVec3 kPosSimCAR[6];
    // -> static class EVec3 kSimPosDefault;
}


