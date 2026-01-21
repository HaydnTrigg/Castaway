/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\camera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80206344 -> 0x8020F494
*/
// Range: 0x80206344 -> 0x802063B4
unsigned char IsUsingSpecifiedInteractor(enum InteractorType iType /* r30 */) {
    // Local variables
    class Interactor * pActiveInteractor; // r0
    class Interactor * pRequestedInteractor; // r0
}

// Range: 0x802063B4 -> 0x80206488
static unsigned char InterpolateSmooth(float * currVal /* r30 */, const float & targetVal /* r31 */, float stiffness /* f31 */, float dt /* f29 */) {
    // Local variables
    float diff; // f30
    float vel; // f0
    float disp; // f29
}

// Range: 0x80206488 -> 0x802064DC
static void TurnOffSocialModeEffects() {
    // Local variables
    class DepthOfField * dofObj; // r31
}

// Range: 0x802064DC -> 0x80206548
static void TurnOnMotionBlur() {
    // Local variables
    class MotionBlur * mbObj; // r31
    struct MotionBlurSettings settings; // r1+0x8
}

// Range: 0x80206548 -> 0x80206598
static void TurnOffMotionBlur() {
    // Local variables
    class MotionBlur * mbObj; // r31
}

// Range: 0x80206598 -> 0x80206638
static void HandleEffectNote(const struct EAnimNote & event /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80206638 -> 0x802066C0
static unsigned char IsNaN(const class EVec2 & vec /* r30 */) {}

// Range: 0x802066C0 -> 0x80206ABC
// this: r29
SimsCameraParameters::SimsCameraParameters() {
    // References
    // -> float kMaximumTilt;
    // -> float kMinimumTilt;
    // -> float kPetPlazaLotPetCamMaxZoom;
    // -> float kPetPlazaLotPetCamMinZoom;
    // -> float kHomeLotSimCamMaxZoom;
    // -> float kHomeLotSimCamMinZoom;
    // -> struct [anonymous] __vt__20SimsCameraParameters;
}

// Range: 0x80206ABC -> 0x80206AFC
// this: r31
SimsCameraParameters::~SimsCameraParameters() {}

// Range: 0x80206AFC -> 0x80206B7C
// this: r31
void SimsCameraParameters::Validate() {
    // References
    // -> float kHomeLotPetCamMaxZoom;
    // -> float kHomeLotSimCamMaxZoom;
}

// Range: 0x80206B7C -> 0x80206B98
float SimsCameraParameters::GetMinZoom() {}

// Range: 0x80206B98 -> 0x80206BB4
float SimsCameraParameters::GetMaxZoom() {}

// Range: 0x80206BB4 -> 0x80206BD0
float SimsCameraParameters::GetMinTilt() {}

// Range: 0x80206BD0 -> 0x80206BEC
float SimsCameraParameters::GetMaxTilt() {}

// Range: 0x80206BEC -> 0x80206C08
float SimsCameraParameters::GetLookatHeight() {}

// Range: 0x80206C08 -> 0x80206E18
// this: r29
ESimsCam::ESimsCam() {
    // References
    // -> class SimsCameraParameters s_params;
    // -> struct [anonymous] __vt__8ESimsCam;
}

// Range: 0x80206E18 -> 0x80206EB4
// this: r30
ESimsCam::~ESimsCam() {
    // References
    // -> struct [anonymous] __vt__8ESimsCam;
}

// Range: 0x80206EB4 -> 0x80206F40
// this: r31
float ESimsCam::GetCurZoomRatio() const {
    // Local variables
    float dz; // f31
    float mu; // f0
}

// Range: 0x80206F40 -> 0x80206FCC
// this: r31
float ESimsCam::GetActualZoomRatio() const {
    // Local variables
    float dz; // f31
    float mu; // f0
}

// Range: 0x80206FCC -> 0x80207198
// this: r28
float ESimsCam::GetNearPlane() {
    // Local variables
    float minZoomNearPlane; // f29
    class SAnimator2 * sAnimator; // r30
    enum BoneIdx boneIndexArray[2]; // r1+0x8
    int boneIdx; // r29
    class EVec3 bonePos; // r1+0x10
    float zoom; // f0
    float nearPlane; // f1

    // References
    // -> float kPetCamNearPlaneAtMinZoom;
    // -> class EGlobal _globals;
}

// Range: 0x80207198 -> 0x802071A0
static unsigned char IsUsingDirectControlInteractor() {}

// Range: 0x802071A0 -> 0x802071A8
void ESimsCam::SetTarget() {}

// Range: 0x802071A8 -> 0x802071B0
float ESimsCam::GetFarPlane() {}

// Range: 0x802071B0 -> 0x802071FC
// this: r31
float ESimsCam::GetFov() {
    // Local variables
    float zoom; // f0
    float fov; // f1
}

// Range: 0x802071FC -> 0x802072A4
// this: r31
void ESimsCam::SetFov(float fov /* f29 */) {
    // Local variables
    float dz; // f31
    float df; // f30
}

// Range: 0x802072A4 -> 0x802072F8
// this: r31
void ESimsCam::ForceFullScreenViewport() {}

// Range: 0x802072F8 -> 0x8020731C
void ESimsCam::Init() {
    // References
    // -> enum CameraMode m_modeDef;
}

// Range: 0x8020731C -> 0x80207434
// this: r29
void ESimsCam::Reset() {
    // Local variables
    class SimsCameraParameters default_params; // r1+0x8
    unsigned int i; // r30

    // References
    // -> float kHomeLotPetCamMaxZoom;
    // -> float kHomeLotPetCamMinZoom;
    // -> float kHomeLotSimCamMaxZoom;
    // -> float kHomeLotSimCamMinZoom;
}

// Range: 0x80207434 -> 0x802074C4
// this: r31
void ESimsCam::SetState() {}

// Range: 0x802074C4 -> 0x80207530
// this: r30
void ESimsCam::SetMode(enum CameraMode newmode /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80207530 -> 0x802077D0
// this: r27
void ESimsCam::FollowPlayerInteractor() {
    // Local variables
    float elevation; // r1+0xC
    class Interactor * pInteractor; // r0
    class EVec3 vPos; // r1+0x28
    int curXTile; // r31
    int curYTile; // r30
    int maxYTile; // r29
    int maxXTile; // r28
    int curZoom; // r0
    int tileThreshold; // r3
    float elevation; // r1+0x8
    int lotId; // r0
    float k_z; // f31
    class EVec3 temp; // r1+0x1C
    class EVec3 delta; // r1+0x10
    float dist; // f0

    // References
    // -> class NewControlParms s_newControlParms;
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
}

// Range: 0x802077D0 -> 0x80207A84
// this: r31
void ESimsCam::Update() {
    // Local variables
    class SAnimator2 * animator; // r30
    class EVec3 vUp; // r1+0x8
    unsigned char bplRot; // r0
    unsigned char brot; // r0
    unsigned char bzoom; // r0
    float zoomRatio; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80207A84 -> 0x80207A94
void ESimsCam::ApplyPan() {}

// Range: 0x80207A94 -> 0x80207AC8
static void WrapAngle() {}

// Range: 0x80207AC8 -> 0x80207B80
// this: r31
void ESimsCam::ApplyZoom(float zoom /* f30 */) {
    // Local variables
    float maxZFact; // f31
}

// Range: 0x80207B80 -> 0x80207B8C
void ESimsCam::SetZoom() {}

// Range: 0x80207B8C -> 0x80207B94
void ESimsCam::SetRotAng() {}

// Range: 0x80207B94 -> 0x80207C60
// this: r31
void ESimsCam::AlignCameraToWorld() {
    // Local variables
    float curAngle; // f0
    float newAngle; // f0
}

// Range: 0x80207C60 -> 0x80207D70
// this: r31
unsigned char ESimsCam::HandlePlayerRotation() {
    // Local variables
    float playerMovementX; // f1
    class EVec3 vTargetToEye; // r1+0x8
    float angle; // f0
    float angleDelta; // f3

    // References
    // -> static unsigned char old_camera_mode;
}

// Range: 0x80207D70 -> 0x80208074
// this: r30
unsigned char ESimsCam::HandleRotation() {
    // Local variables
    float cMag; // f31
    float mag; // f30
    float speed; // f0
    float mulPlayerRotationFactor; // f29
    float playerMovementX; // f1
    float pan; // f28
    float absolutepan; // f0
    class EVec3 CursorToEye; // r1+0x2C
    float dist; // f0
    float angle; // f1

    // References
    // -> static unsigned char blueprintCamReset;
    // -> float _dt;
    // -> static unsigned char old_camera_mode;
    // -> class EGlobal _globals;
}

// Range: 0x80208074 -> 0x8020807C
static unsigned char IsUsingSocialModeInteractor() {}

// Range: 0x8020807C -> 0x8020818C
// this: r31
unsigned char ESimsCam::HandleZoom() {
    // Local variables
    float zoom; // f31
    class EVec3 CursorToEye; // r1+0x2C
    float dist; // f0
    float angle; // f1

    // References
    // -> static float delta;
    // -> class EGlobal _globals;
}

// Range: 0x8020818C -> 0x80208630
// this: r29
void ESimsCam::UpdateWin() {
    // Local variables
    class RoomManager * roomManager; // r30
    class Room * room; // r0
    class EVec3 pos; // r1+0xDC
    class EVec3 camDir; // r1+0xD0
    float scale; // f27
    class EVec3 temp; // r1+0xC4
    float swapTemp; // f1
    class EVec3 offset; // r1+0xB8

    // References
    // -> class NewControlParms s_newControlParms;
    // -> class EGlobal _globals;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80208630 -> 0x80208768
// this: r28
void ESimsCam::FindZoomTiltFromHorizontalDistance(float dist /* f29 */, float & outZoom /* r29 */, float & outTilt /* r30 */) {
    // Local variables
    float actualDist; // f0
    float delta; // f30
    unsigned int iter; // r31
}

// Range: 0x80208768 -> 0x80208794
float ESimsCam::CalcRegularTiltFromZoom() {
    // Local variables
    float tilt; // f1

    // References
    // -> float kMinimumTilt;
    // -> float kMaximumTilt;
    // -> float kHomeLotSimCamMaxZoom;
    // -> float kHomeLotSimCamMinZoom;
}

// Range: 0x80208794 -> 0x80208834
// this: r31
float ESimsCam::CalcTiltFromZoom(float zoom /* f30 */) const {
    // Local variables
    float tilt; // f30
}

// Range: 0x80208834 -> 0x80208A3C
// this: r27
void ESimsCam::CalcEyePositionRayInteractorMode(class EVec3 & vEye /* r28 */, struct CameraParameters & camParams /* r29 */) {
    // Local variables
    class EMat4 mRot; // r1+0x78
    float oldEyeHeight; // f30
    class EVec3 vEyeToTarg; // r1+0x68
    class EVec3 vEyeNew; // r1+0x5C
    class EVec3 vAx; // r1+0x50
    class EVec3 vEyeTmp; // r1+0x44
    class EVec3 vTargToEye; // r1+0x38
    unsigned char eyeAdjusted; // r31
    unsigned char shouldFindLegalPos; // r30
}

// Range: 0x80208A3C -> 0x80208BE8
// this: r29
void ESimsCam::CalcEyePositionBluePrintMode(class EVec3 & vEye /* r30 */, const struct CameraParameters & camParams /* r31 */) {
    // Local variables
    class EMat4 mRot; // r1+0xC0
    class EVec3 vEyeToTarg; // r1+0x74
    class EVec3 vEyeNew; // r1+0x68
    class EVec3 vAx; // r1+0x5C
    class EMat4 mRotZ; // r1+0x80
    class EVec3 xAxis; // r1+0x50
    class EVec3 vTargToEye; // r1+0x44
}

// Range: 0x80208BE8 -> 0x80208D64
// this: r29
void ESimsCam::CalcEyePosition(class EVec3 & vEye /* r30 */, const struct CameraParameters & camParams /* r31 */) const {
    // Local variables
    class EMat4 mRot; // r1+0x80
    class EVec3 vEyeToTarg; // r1+0x74
    class EVec3 vEyeNew; // r1+0x68
    class EVec3 vAx; // r1+0x5C
    class EVec3 vTargToEye; // r1+0x50
}

// Range: 0x80208D64 -> 0x80208F3C
// this: r28
void ESimsCam::CalcAndAdjustEyePosition(class EVec3 & vEye /* r29 */, struct CameraParameters & camParams /* r30 */) {
    // Local variables
    class EMat4 mRot; // r1+0x78
    float oldEyeHeight; // f30
    class EVec3 vEyeToTarg; // r1+0x68
    class EVec3 vEyeNew; // r1+0x5C
    class EVec3 vAx; // r1+0x50
    class EVec3 vEyeTmp; // r1+0x44
    class EVec3 vTargToEye; // r1+0x38
    unsigned char eyeAdjusted; // r31
}

// Range: 0x80208F3C -> 0x80209074
// this: r28
unsigned char ESimsCam::AdjustEyePositionForNoCameraZone(class EVec3 & vEye /* r29 */, class EVec3 & vLookAt /* r30 */, unsigned char bFindLegalPos /* r31 */) {
    // Local variables
    float elevation; // r1+0x8
    float dt; // f0
    float oldHeight; // f31

    // References
    // -> float _dt;
}

// Range: 0x80209074 -> 0x8020915C
static unsigned char InterpolateSmooth(class EVec3 * currVal /* r30 */, const class EVec3 & targetVal /* r31 */, float stiffness /* f29 */, float dt /* f30 */) {
    // Local variables
    class EVec3 dirVec; // r1+0x20
    float dirVecMag; // f31
    float vel; // f0
    float disp; // f0
}

// Range: 0x8020915C -> 0x80209584
// this: r26
void ESimsCam::FindLegalCameraPosition(class EVec3 & vEye /* r28 */, class EVec3 & vLookAt /* r27 */) {
    // Local variables
    class EVec3 vEyeToLookAt; // r1+0x6C
    float hzDistance; // f0
    class EVec3 eyePos; // r1+0x60
    unsigned char isLegalPositionFound; // r0
    float minT; // f28
    float maxT; // f27
    float curT; // f0
    float curRes; // f0
    unsigned char legalPosFound; // r29
    float hitT; // f26
    unsigned int i; // r28
    class EVec3 tstPos; // r1+0x54
    float elevation; // r1+0x14
    float zoom; // r1+0x10
    float tilt; // r1+0xC
    float heightOfCam; // f0
    float magXY; // f0
    class EVec3 vLookAtToEye; // r1+0x48
    float dt; // f31
    class EVec3 newEye; // r1+0x3C
    float isCameraCloseToGround; // f26
    float distance; // f1
    float stiffnessXY; // f0
    float updatedHeight; // r1+0x8

    // References
    // -> float kMinimumCameraHeight;
    // -> float _dt;
}

// Range: 0x80209584 -> 0x8020972C
// this: r30
void ESimsCam::UpdateCameraPositionForTerrainDetection(struct CameraParameters & camParams /* r31 */) {
    // Local variables
    class EMat4 mRot; // r1+0x90
    class EVec3 vEyeToTarg; // r1+0x84
    class EVec3 vEyeNew; // r1+0x78
    class EVec3 vAx; // r1+0x6C
    class EVec3 vEye; // r1+0x60
    class EVec3 vTargToEye; // r1+0x54
    float elevation; // r1+0x8
}

// Range: 0x8020972C -> 0x80209788
float ESimsCam::GetZoomBasedHeightOffset() {
    // Local variables
    float offsetRatio; // f1

    // References
    // -> float kZoomBasedHeightOffset;
    // -> float kHomeLotSimCamMinZoomForHeightOffset;
    // -> float kHomeLotSimCamMinZoom;
}

// Range: 0x80209788 -> 0x802099D8
// this: r29
void ESimsCam::InterpolateSmoothCameraHeight(class EVec3 & vEye /* r30 */, float oldEyeHeight /* f29 */, struct CameraParameters & camParams /* r31 */) {
    // Local variables
    float dt; // f31
    float updatedHeight; // r1+0xC
    float stiffness; // f30
    float mulFac; // f3
    float mulFac; // f2
    float updatedHeight; // r1+0x8
    float kStiffnessMulFac; // f30
    float stiffness; // f0
    float mulFac; // f0

    // References
    // -> float kTiltForLandStiffness;
    // -> float s_minShallowWaterTilt;
    // -> float kMinimumCameraHeight;
    // -> float kMinimumInterpStiffness;
    // -> float _dt;
}

// Range: 0x802099D8 -> 0x802099F0
unsigned char ESimsCam::IsCameraOnWater() {}

// Range: 0x802099F0 -> 0x80209AF0
// this: r30
unsigned char ESimsCam::IsCameraCloseToGround(class EVec3 & pos /* r31 */) {
    // Local variables
    float elevation; // r1+0x8
    class EVec3 eyeLoc; // r1+0xC

    // References
    // -> float s_heightWaterOffset;
    // -> float kMinimumCameraHeight;
}

// Range: 0x80209AF0 -> 0x80209C48
// this: r30
void ESimsCam::ResetPos() {
    // Local variables
    float degreesRot; // f1
    class Interactor * pInteractor; // r31
    class EVec3 pos; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80209C48 -> 0x80209EA8
// this: r28
void ESimsCam::FollowSimStiff() {
    // Local variables
    class Interactor * pInteractor; // r30
    class EVec2 newSimPos; // r1+0x10
    class cXPerson * pPerson; // r30
    class SAnimator2 * sAnimator; // r29
    class EVec3 pos; // r1+0x30
    float elevation; // r1+0x8

    // References
    // -> static class EVec2 defaultPosition;
    // -> class EGlobal _globals;
}

// Range: 0x80209EA8 -> 0x80209F70
// this: r30
void ESimsCam::SetTrackSimCameraState() {
    // Local variables
    unsigned short flag; // r0
    unsigned char bSimOnWater; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80209F70 -> 0x80209FB0
unsigned char ESimsCam::IsSimOnWater() {
    // Local variables
    unsigned short terrainFlag; // r0

    // References
    // -> float s_heightWaterOffset;
}

// Range: 0x80209FB0 -> 0x80209FC4
unsigned char ESimsCam::IsCameraIllegalFlagSet() {}

// Range: 0x80209FC4 -> 0x8020A0C0
enum eTrackSimCameraState ESimsCam::GetStateFromFlag() {
    // Local variables
    unsigned short cameraFlag; // r0
    unsigned short terrainFlag; // r4
}

// Range: 0x8020A0C0 -> 0x8020A1B0
// this: r31
void ESimsCam::UpdateTrackSimCameraState() {}

// Range: 0x8020A1B0 -> 0x8020A2E8
// this: r27
void ESimsCam::TransitionToCameraParams(enum eCameraParamIdx eCamParamMinIdx /* r31 */, enum eCameraParamIdx eCamParamMaxIdx /* r28 */) {
    // Local variables
    float dt; // f0
    unsigned char bMinTilt; // r0
    unsigned char bMaxTilt; // r0
    unsigned char bMinZoom; // r0
    unsigned char bMaxZoom; // r0

    // References
    // -> float kMinimumInterpStiffness;
    // -> float _dt;
}

// Range: 0x8020A2E8 -> 0x8020A3AC
// this: r29
unsigned char ESimsCam::IsInDeadZone(const class EVec3 & pos /* r30 */) const {
    // Local variables
    float deadZoneRadiusSquare; // f0
    class EVec3 dispVec; // r1+0x8
}

// Range: 0x8020A3AC -> 0x8020A3F0
static float InterpolateLinear() {}

// Range: 0x8020A3F0 -> 0x8020A45C
// this: r30
float ESimsCam::CalcTranslationStiffness() const {}

// Range: 0x8020A45C -> 0x8020A4C8
// this: r30
float ESimsCam::CalcRotationStiffness() const {}

// Range: 0x8020A4C8 -> 0x8020A534
// this: r30
float ESimsCam::CalcZoomStiffness() const {}

// Range: 0x8020A534 -> 0x8020A780
// this: r30
void ESimsCam::InterpolateActualCameraParamsToTarget(float deltaTime /* f31 */) {
    // Local variables
    class EVec2 oldLookAt; // r1+0x18
    class EVec2 newLookAt; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8020A780 -> 0x8020A790
// this: r4
void ESimsCam::SnapActualCameraParamsToTarget() {}

// Range: 0x8020A7C4 -> 0x8020AC7C
// this: r31
void ESimsCam::CenterOnSelectedSim() {
    // Local variables
    class Interactor * pInteractor; // r0
    class EVec3 vPos; // r1+0x48
    unsigned char okToLockOnPlayer; // r29
    class Interactor * pInteractor; // r0
    class EVec3 temp; // r1+0x3C
    unsigned char status; // r0
    class EVec3 delta; // r1+0x30
    float xSize; // f30
    float ySize; // f29
    class EVec3 temp; // r1+0x24
    class EVec3 delta; // r1+0x18
    float dist; // f0
    float xSize; // f29
    float ySize; // f30

    // References
    // -> class cFixedWorld * pFixedWorld;
    // -> class NewControlParms s_newControlParms;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8020AC7C -> 0x8020ACE0
// this: r29
void ESimsCam::GetPos(class EVec3 & vTargetOut /* r30 */, class EVec3 & vUpOut /* r31 */) const {}

// Range: 0x8020ACE0 -> 0x8020AD50
// this: r27
void ESimsCam::GetActualParams(class EVec3 & vPosition /* r28 */, float & zoom /* r29 */, float & rot /* r30 */, float & tilt /* r31 */) const {}

// Range: 0x8020AD50 -> 0x8020AE64
// this: r28
void ESimsCam::SetPosAndReset(const class EVec3 & vEye /* r29 */, const class EVec3 & vTarget /* r30 */, const class EVec3 & vUp /* r31 */) {
    // Local variables
    class EVec3 vEyeToTarg; // r1+0x14
    float rot; // f31
    class EVec3 vEyeToTargDef; // r1+0x8
    float rotDef; // f0
}

// Range: 0x8020AE64 -> 0x8020AF8C
// this: r28
void ESimsCam::SetPos(const class EVec3 & vEye /* r29 */, const class EVec3 & vTarget /* r30 */, const class EVec3 & vUp /* r31 */) {
    // Local variables
    class EVec3 vEyeToTarg; // r1+0x14
    float pitch; // f0
    float rot; // f3
    class EVec3 vEyeToTargDef; // r1+0x8
    float rotDef; // f0
}

// Range: 0x8020AF8C -> 0x8020B0B4
// this: r28
void ESimsCam::ForcePosition(const class EVec3 & vEye /* r29 */, const class EVec3 & vTarget /* r30 */, const class EVec3 & vUp /* r31 */) {
    // Local variables
    class EVec3 vEyeToTarg; // r1+0x14
    float pitch; // f0
    float rot; // f3
    class EVec3 vEyeToTargDef; // r1+0x8
    float rotDef; // f0
}

// Range: 0x8020B0B4 -> 0x8020B118
// this: r30
void ESimsCam::ForceTarget(const class EVec3 & vTarget /* r31 */) {
    // Local variables
    class EVec3 vEye; // r1+0x8
}

// Range: 0x8020B118 -> 0x8020B130
int ESimsCam::PointOffScreen() {}

// Range: 0x8020B130 -> 0x8020B248
// this: r30
int ESimsCam::PointOutsideScreenRect(const class EVec3 & pos /* r31 */, float fLeft /* f28 */, float fTop /* f29 */, float fRight /* f30 */, float fBottom /* f31 */) {
    // Local variables
    class EVec2 vCurScreen; // r1+0x8
    int retval; // r31
}

// Range: 0x8020B248 -> 0x8020B42C
// this: r29
void ESimsCam::ValidateCursorPosition(class EVec3 * pos /* r30 */) {
    // Local variables
    class EVec3 temp; // r1+0x38

    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x8020B42C -> 0x8020B5D0
unsigned short ESimsCam::CalRoomId(const class EVec3 & pos /* r29 */) {
    // Local variables
    float fx; // f30
    float fy; // f5
    int x; // r31
    int y; // r30
    class cFixedWorld * world; // r29
    class CTilePt pt; // r1+0x8
    unsigned short room; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8020B5D0 -> 0x8020B69C
unsigned char ESimsCam::IsManipulatorOnIllegalSpot() {
    // Local variables
    class Interactor * pInteractor; // r0
    class EVec3 pos; // r1+0xC
    class CTilePt currentTile; // r1+0x8
    class cFixedWorld * world; // r31
    unsigned char tileFlags; // r0
}

// Range: 0x8020B69C -> 0x8020BA98
// this: r29
void ESimsCam::SetWinPos(class E3DWindow & win /* r30 */) {
    // Local variables
    class EVec3 noiseEye; // r1+0x68
    class EVec3 direction; // r1+0x5C
    class cXPerson * pPerson; // r3
    class SAnimator2 * sAnimator; // r31
    class EVec3 pos; // r1+0x50
    float ratio; // f31
    float dt; // f0
    float dt; // f0
    float dt; // f0
    class EVec3 lookAtVector; // r1+0x44
    class EVec3 noiseEye; // r1+0x38

    // References
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x8020BA98 -> 0x8020BB34
float ESimsCam::CalcPitch(const class EVec3 & vec /* r31 */) {
    // Local variables
    float hyp; // f0
    class EVec3 hdg; // r1+0x8
    float opp; // f0
    float x; // f2
    float theta; // f1
}

// Range: 0x8020BB34 -> 0x8020BBAC
float ESimsCam::CalcZAxisTheta() {
    // Local variables
    class EVec3 tvec; // r1+0x8
    float x; // f1
    float theta; // f1
}

// Range: 0x8020BBAC -> 0x8020BCC0
// this: r28
class EVec3 ESimsCam::GetCursorPos(class ESimsCam * const this /* r29 */) {
    // Local variables
    class Interactor * pInteractor; // r31
    class InteractorManager * pIM; // r30
    enum InteractorType t; // r5
    class RayInteractor * ray_interactor; // r0
    class RayManipulator * pRM; // r0
}

// Range: 0x8020BCC0 -> 0x8020BD34
// this: r31
float ESimsCam::GetCursorSpeed() const {
    // Local variables
    float dz; // f31
    float mu; // f1
}

// Range: 0x8020BD34 -> 0x8020BDAC
// this: r31
float ESimsCam::GetCursorLimitTopWidth() const {
    // Local variables
    float dz; // f31
    float mu; // f1

    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x8020BDAC -> 0x8020BE24
// this: r31
float ESimsCam::GetCursorLimitDepth() const {
    // Local variables
    float dz; // f31
    float mu; // f1

    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x8020BE24 -> 0x8020BED0
void ESimsCam::GetObjectPosition(class EVec3 * pos /* r30 */, class cXObject * obj /* r31 */) {
    // Local variables
    class ISimInstance * inst; // r31
    class EMat4 orient; // r1+0x18
}

// Range: 0x8020BED0 -> 0x8020BF7C
void ESimsCam::GetObjectOrientation(class EVec3 * dir /* r30 */, class cXObject * obj /* r31 */) {
    // Local variables
    class ISimInstance * inst; // r31
    class EMat4 orient; // r1+0x18
}

// Range: 0x8020BF7C -> 0x8020BF8C
void ESimsCam::SetAnimationMode() {}

// Range: 0x8020BF8C -> 0x8020BFD8
unsigned char ESimsCam::CursorNotActive() {
    // Local variables
    class Interactor * pInteractor; // r0
}

// Range: 0x8020BFD8 -> 0x8020C0EC
// this: r31
void ESimsCam::SetActiveNoiseSetting(enum CameraNoiseSetting noiseSetting /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x8020C0EC -> 0x8020C518
// this: r30
class EVec3 ESimsCam::ApplyNoise(const class EVec3 & eye /* r31 */) {
    // Local variables
    int i; // r5
    class EVec3 newPos; // r1+0xBC
    class EVec3 targetPos; // r1+0xB0
    class EVec3 vel; // r1+0xA4
    float delta; // f1
    class EMat4 mat; // r1+0xC8
    class EMat4 * animMat; // r0

    // References
    // -> float _dt;
}

// Range: 0x8020C518 -> 0x8020C560
// this: r30
void ESimsCam::UpdateStaticCamera(const class EVec3 & vLookAt /* r31 */) {}

// Range: 0x8020C560 -> 0x8020C818
// this: r26
void ESimsCam::DrawCameraInfo(class ERC * prc /* r27 */) {
    // Local variables
    char displayString[128]; // r1+0x58

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8020C818 -> 0x8020C824
unsigned char ESimsCam::SetControllerFilterId() {}

// Range: 0x8020C824 -> 0x8020C834
unsigned char ESimsCam::ClearControllerFilterId() {}

// Range: 0x8020C834 -> 0x8020C978
// this: r30
float ESimsCam::ReadControllerZoom() {
    // Local variables
    class EController * pCtrl; // r31
    float fRet; // f31
    float ratioDelta; // f30
    float ratioDelta; // f30

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020C978 -> 0x8020CA2C
// this: r30
float ESimsCam::ReadControllerRotation() {
    // Local variables
    class EController * pCtrl; // r31
    float fRet; // f31

    // References
    // -> class EGlobal _globals;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020CA2C -> 0x8020CAC8
// this: r31
float ESimsCam::ReadPlayerControllerRotationX() {
    // Local variables
    class EController * pCtrl; // r30
    float fRet; // f31
    unsigned char bL; // r0
    unsigned char bR; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020CAC8 -> 0x8020CADC
struct CameraParameters & ESimsCam::GetDefaultCameraParam() {
    // References
    // -> struct CameraParameters s_defaultCameraParams[16];
}

// Range: 0x8020CADC -> 0x8020CB8C
// this: r31
CameraDirector::CameraDirector() {}

// Range: 0x8020CB8C -> 0x8020CC1C
// this: r29
CameraDirector::~CameraDirector() {}

// Range: 0x8020CC1C -> 0x8020CCE4
// this: r30
void CameraDirector::Reset() {}

// Range: 0x8020CCE4 -> 0x8020CD0C
void CameraDirector::RegisterCurrentCamera() {}

// Range: 0x8020CD0C -> 0x8020CE14
// this: r31
void CameraDirector::InitSimsCamera() {
    // Local variables
    class EVec3 simsEye; // r1+0x20
    class EVec3 simsLookAt; // r1+0x14
    class EVec3 simsUp; // r1+0x8
}

// Range: 0x8020CE14 -> 0x8020CE74
// this: r31
void CameraDirector::InitCurrentCamera() {}

// Range: 0x8020CE74 -> 0x8020CF98
// this: r30
void CameraDirector::ReleaseCurrentCamera() {}

// Range: 0x8020CF98 -> 0x8020D01C
// this: r31
void CameraDirector::DisableControls() {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020D01C -> 0x8020D098
// this: r31
void CameraDirector::EnableControls() {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020D098 -> 0x8020D174
// this: r29
void CameraDirector::AttachDummy(class ENDummy * dummy /* r30 */, class EMat4 * offsetMat /* r31 */) {}

// Range: 0x8020D174 -> 0x8020D29C
// this: r30
void CameraDirector::SetCameraCut(class ENCamera * camera /* r31 */) {}

// Range: 0x8020D29C -> 0x8020D484
// this: r30
void CameraDirector::SetCameraCutAnim(int animResId /* r31 */) {
    // Local variables
    class EMat4 * animMat; // r3
    class EVec3 simsEye; // r1+0x2C
    class EVec3 simsLookAt; // r1+0x20
    class EVec3 simsUp; // r1+0x14
    struct EACNodeState * animNode; // r0
}

// Range: 0x8020D484 -> 0x8020D5DC
// this: r29
void CameraDirector::SetCameraInterp(class ENCamera * camera /* r30 */, float speed /* f31 */, enum CamDirInterpType interpType /* r31 */) {}

// Range: 0x8020D5DC -> 0x8020D6F8
// this: r31
void CameraDirector::SetCameraInterpAnim() {
    // Local variables
    float currZoom; // f0
    class EMat4 simToWorldMat; // r1+0x58
    class EVec3 targetPoint; // r1+0x8
}

// Range: 0x8020D6F8 -> 0x8020D8EC
// this: r30
void CameraDirector::SetUpInterpCamera(float speed /* f29 */, enum CamDirInterpType interpType /* r31 */) {
    // Local variables
    class EVec3 simsEye; // r1+0x78
    class EVec3 simsLookAt; // r1+0x6C
    class EVec3 simsUp; // r1+0x60
    float targetFOV; // f31
    class EMat4 targetMat; // r1+0x88
    class EQuat quatSource; // r1+0x50
    class EQuat quatTarget; // r1+0x40
    float qdist; // f30
    class EVec3 distSource; // r1+0x34
    class EVec3 distTarget; // r1+0x28
    float tdist; // f1
    float interptime; // f1

    // References
    // -> class EClock _sysclock;
}

// Range: 0x8020D8EC -> 0x8020DA28
// this: r31
unsigned char CameraDirector::ReleaseToGameCamera() {
    // Local variables
    class EVec3 eye; // r1+0x2C
    class EVec3 target; // r1+0x20
    class EVec3 up; // r1+0x14
}

// Range: 0x8020DA28 -> 0x8020DBA4
// this: r31
unsigned char CameraDirector::InterpToGameCamera() {
    // Local variables
    class EVec3 eye; // r1+0x2C
    class EVec3 target; // r1+0x20
    class EVec3 up; // r1+0x14
    float currZoom; // f0
}

// Range: 0x8020DBA4 -> 0x8020DBB4
void CameraDirector::SetHoldState() {}

// Range: 0x8020DBB4 -> 0x8020DC58
// this: r29
unsigned char CameraDirector::InterpToCancelCamera(float speed /* f31 */, enum CamDirInterpType interpType /* r30 */, unsigned char recalCancelCam /* r31 */) {}

// Range: 0x8020DC58 -> 0x8020DE34
// this: r30
void CameraDirector::CalcSimsCam() {
    // Local variables
    enum CameraDirectorMode oldMode; // r31
    class EVec3 currSimsEye; // r1+0x68
    class EVec3 currSimsLookAt; // r1+0x5C
    class EVec3 currSimsUp; // r1+0x50
    float currFOV; // f31
    class EVec3 simsEye; // r1+0x44
    class EVec3 simsLookAt; // r1+0x38
    class EVec3 simsUp; // r1+0x2C
    class EVec3 newPos; // r1+0x20
    class EVec3 newLookAt; // r1+0x14
    class EVec3 newUp; // r1+0x8
}

// Range: 0x8020DE34 -> 0x8020DE3C
class FrameEffectsManager * CameraDirector::GetFrameEffectsManager() {}

// Range: 0x8020DE3C -> 0x8020E00C
// this: r31
void CameraDirector::CalcCancelCam() {
    // Local variables
    class EVec3 currSimsEye; // r1+0x68
    class EVec3 currSimsLookAt; // r1+0x5C
    class EVec3 currSimsUp; // r1+0x50
    float currFOV; // f31
    class EVec3 simsEye; // r1+0x44
    class EVec3 simsLookAt; // r1+0x38
    class EVec3 simsUp; // r1+0x2C
    class EVec3 newPos; // r1+0x20
    class EVec3 newLookAt; // r1+0x14
    class EVec3 newUp; // r1+0x8
}

// Range: 0x8020E00C -> 0x8020E0D4
// this: r30
unsigned char CameraDirector::CheckCancelled() {
    // Local variables
    class EController * pCtrl; // r31

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8020E0D4 -> 0x8020E4FC
// this: r29
unsigned char CameraDirector::Interp() {
    // Local variables
    float delta; // f31
    float interpFOV; // f29
    unsigned char status; // r30
    class EMat4 targetMat; // r1+0x150
    class EMat4 interpMat; // r1+0x110
    class EVec3 srcEyePt; // r1+0x104
    class EVec3 srcLookAtDir; // r1+0xF8
    float srcT; // f0
    class EVec3 srcTargetPt; // r1+0xEC
    class EVec3 dstEyePt; // r1+0xE0
    class EVec3 dstLookAtDir; // r1+0xD4
    float dstT; // f0
    class EVec3 dstTargetPt; // r1+0xC8
    class EVec3 interpTargetPt; // r1+0xBC
    class EVec3 interpLookAtDir; // r1+0xB0
    float interpT; // f1
    class EVec3 interpEyePt; // r1+0xA4
    class EVec3 vEye; // r1+0x98
    class EVec3 vTarget; // r1+0x8C
    class EVec3 vUp; // r1+0x80

    // References
    // -> class EClock _sysclock;
}

// Range: 0x8020E4FC -> 0x8020E560
// this: r31
void CameraDirector::SetFOV() {
    // Local variables
    float fovDeg; // f1
}

// Range: 0x8020E560 -> 0x8020E570
void CameraDirector::InitAnim() {}

// Range: 0x8020E570 -> 0x8020E72C
// this: r28
unsigned char CameraDirector::StartAnim(int resId /* r29 */, unsigned char relative /* r30 */, unsigned char holdAtEnd /* r31 */) {
    // Local variables
    class EVec3 vEye; // r1+0x20
    class EVec3 vTarget; // r1+0x14
    class EVec3 vUp; // r1+0x8
}

// Range: 0x8020E72C -> 0x8020E780
// this: r30
unsigned char CameraDirector::StartAnim(const struct AnimRef * pAnimRef /* r31 */) {}

// Range: 0x8020E780 -> 0x8020EA94
// this: r31
void CameraDirector::Update() {
    // Local variables
    class EMat4 finalMat; // r1+0x130
    class EVec3 vEye; // r1+0x20
    class EVec3 vTarget; // r1+0x14
    class EVec3 vUp; // r1+0x8

    // References
    // -> float _dtlim15;
}

// Range: 0x8020EA94 -> 0x8020EA98
void CameraDirector::UpdateAnimNoteTrack() {}

// Range: 0x8020EA98 -> 0x8020ECC0
// this: r30
void CameraDirector::UpdateCameraPosAndFOV() {
    // Local variables
    class EMat4 cameraMat; // r1+0x70
    class EMat4 * animMat; // r31
    class EVec3 vEye; // r1+0x60
    class EVec3 vTarget; // r1+0x54
    class EVec3 vUp; // r1+0x48
    class EVec4 mirroredEye; // r1+0x38
    class EVec4 mirroredTarget; // r1+0x28
    class EVec4 mirroredUp; // r1+0x18
    struct EACNodeState * animNode; // r0
    float newFov; // f31

    // References
    // -> class GameData _gd;
}

// Range: 0x8020ECC0 -> 0x8020ED38
static void FlipXCoord(class EVec4 & vec /* r30 */, const class EMat4 & fromLocal /* r31 */) {}

// Range: 0x8020ED38 -> 0x8020ED7C
// this: r30
void CameraDirector::LetterBox(unsigned char status /* r31 */) {}

// Range: 0x8020ED7C -> 0x8020EF98
// this: r28
void CameraDirector::Draw(class ERC * prc /* r27 */) {}

// Range: 0x8020EF98 -> 0x8020F07C
// this: r29
void CameraDirector::ProcessPropertyEventTags() {
    // Local variables
    float timeMultiplier; // f0
    int interval; // r30

    // References
    // -> float _dt;
}

// Range: 0x8020F07C -> 0x8020F1AC
// this: r24
int CameraDirector::ProcessAnimEvents(const struct AnimRef * pAnimRef /* r25 */, int iStartTime /* r26 */, int interval /* r27 */) {
    // Local variables
    class ERAnim * pAnim; // r0
    int size; // r30
    class TArray notes; // r1+0x8
    int iEvtTime; // r29
    int i; // r28

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8020F1AC -> 0x8020F2A8
unsigned char CameraDirector::AnimEventHandler() {
    // Local variables
    int number; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8020F2A8 -> 0x8020F2C8
void CameraDirector::ForceDisableHud() {}

// Range: 0x8020F2C8 -> 0x8020F2DC
unsigned char CameraDirector::IsForceDisableHud() {}

// Range: 0x8020F2DC -> 0x8020F494
NewControlParms::NewControlParms() {
    // References
    // -> struct [anonymous] __vt__15NewControlParms;
}


