/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\weather\rain_effect.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802483D4 -> 0x80248F7C
*/
// Range: 0x802483D4 -> 0x802485A4
// this: r27
RainEffect::RainEffect(unsigned int nModelID /* r28 */, unsigned int nCharacterID /* r29 */, unsigned int nAnimID /* r30 */) {
    // Local variables
    float offset_x; // f31
    float offset_y; // f30

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
    // -> class EGlobal _globals;
}

// Range: 0x802485A4 -> 0x802486A4
// this: r30
RainEffect::~RainEffect() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802486A4 -> 0x80248804
// this: r31
unsigned char RainEffect::UpdateAssetLoad() {
    // References
    // -> class EModelManager _modelman;
    // -> class ECharacterManager _characterman;
    // -> class EAnimManager _animman;
}

// Range: 0x80248804 -> 0x802488DC
// this: r31
unsigned char RainEffect::CreateRainInstance() {
    // Local variables
    class ERLevel * pLevel; // r4
    class EMat4 mIdent; // r1+0x18
    class EBoundSphere rainSphere; // r1+0x8

    // References
    // -> class EEngine * _pEngine;
}

// Range: 0x802488DC -> 0x80248964
void RainEffect::SetRainShaderState() {
    // Local variables
    class InstanceData * pInstanceData; // r0
}

// Range: 0x80248964 -> 0x80248984
void RainEffect::Update() {}

// Range: 0x80248984 -> 0x802489A4
void RainEffect::DoAnimation() {}

// Range: 0x802489A4 -> 0x80248D60
// this: r25
void RainEffect::Draw(class ERC * prc /* r26 */) {
    // Local variables
    class E3DWindow * pWin; // r0
    unsigned char bForceRain; // r0
    unsigned char bCameraInHouse; // r29
    unsigned char bCameraFacingWindow; // r28
    class EVec2 vOffsetToWindow; // r1+0x50
    class EVec2 vCamPos; // r1+0x48
    class CTilePt cameraTile; // r1+0x10
    class cFixedWorld * pWorld; // r31
    unsigned short nCamPosRoomID; // r0
    float fGroundHeight; // f30
    class ESimsCam * pCam; // r0
    float fRealRoofHeight; // f1
    class EVec2 vCamPosFront; // r1+0x40
    class CTilePt camFrontTile; // r1+0xC
    unsigned short nCameraFrontRoomID; // r0
    unsigned char bMinDistFound; // r27
    float fWindowDist; // f29
    class EVec2 vCamPosFrontTemp; // r1+0x38
    class CTilePt camFrontTileTemp; // r1+0x8
    unsigned short nCameraFrontTempRoomID; // r0
    class EVec2 pos; // r1+0x30
    class EVec2 dir; // r1+0x28
    class EMat4 cam_matrix; // r1+0x68
    class EVec2 vEffectPos; // r1+0x20
    class EVec4 vRealPos; // r1+0x58
    class EMat4 * m; // r27
}

// Range: 0x80248D60 -> 0x80248DB4
// this: r5
void RainEffect::SetRainRate() {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x80248DB4 -> 0x80248ECC
// this: r30
void RainEffect::SetWindAcceleration() {
    // Local variables
    float fWindSpeed; // f0
    class EVec3 v3WindDirection; // r1+0x24
    class EVec3 v3TempWindDirection; // r1+0x18
    class EMat4 mat; // r1+0x30

    // References
    // -> class EVec3 _Z_AXIS;
}

// Range: 0x80248ECC -> 0x80248F7C
// this: r29
class EVec2 RainEffect::GetPositionInFrontOfCamera(class RainEffect * const this /* r30 */, float units_in_front /* f31 */) {
    // Local variables
    class E3DWindow * pWin; // r0
    class EVec2 pos; // r1+0x18
    class EVec2 dir; // r1+0x10
}


