/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\rayinteractor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007381C -> 0x80075DE4
*/
// Range: 0x8007381C -> 0x8007399C
// this: r29
RayInteractor::RayInteractor() {
    // References
    // -> class RayInteractor * m_SingletonRayInteractor;
    // -> struct [anonymous] __vt__Q216InteractorModule13RayInteractor;
}

// Range: 0x8007399C -> 0x80073A6C
// this: r30
RayInteractor::~RayInteractor() {
    // References
    // -> class RayInteractor * m_SingletonRayInteractor;
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__Q216InteractorModule13RayInteractor;
}

// Range: 0x80073A6C -> 0x80073AA4
// this: r31
void RayInteractor::OnCreate() {}

// Range: 0x80073AA4 -> 0x80073ADC
// this: r31
void RayInteractor::OnDestroy() {}

// Range: 0x80073ADC -> 0x80073CC8
// this: r30
void RayInteractor::OnStart() {
    // Local variables
    struct ButtonSemantic butSems[6]; // r1+0x40
    struct StickSemantic stickSems[4]; // r1+0x20

    // References
    // -> class GameData _gd;
    // -> class RayInteractor * m_SingletonRayInteractor;
    // -> class EVec3 s_invalidPos;
}

// Range: 0x80073CC8 -> 0x80073D78
// this: r30
void RayInteractor::OnStop() {
    // References
    // -> class RayInteractor * m_SingletonRayInteractor;
    // -> class EGlobal _globals;
}

// Range: 0x80073D78 -> 0x80073E38
// this: r30
void RayInteractor::ParseControls() {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x80073E38 -> 0x800743FC
// this: r31
void RayInteractor::Update(float delta /* f31 */) {
    // Local variables
    class DirectInteractor * dc_interactor; // r0
    class EVec3 selectedSimPos; // r1+0x34
    class cXPerson * pNewPlayer; // r4
    const class FTilePt & simPos; // r0
    class EVec3 newInteractorPos; // r1+0x28
    unsigned char forceReleaseSimSwitcher; // r4
    const class cXPerson * pPerson; // r4
    class FTilePt simTile; // r1+0x20
    class EVec2 vecToSimPos2D; // r1+0x18
    class EVec2 curPos2D; // r1+0x10

    // References
    // -> class EVec3 s_invalidPos;
    // -> class EGlobal _globals;
    // -> float _dt;
    // -> class GameData _gd;
}

// Range: 0x800743FC -> 0x8007443C
// this: r5
void RayInteractor::GetInteractorInfo() {}

// Range: 0x8007443C -> 0x8007444C
// this: r0
void RayInteractor::PreDraw() {}

// Range: 0x8007444C -> 0x8007445C
// this: r0
void RayInteractor::Draw() {}

// Range: 0x8007445C -> 0x800744C4
// this: r31
unsigned char RayInteractor::CurrentHitPointisValid() const {}

// Range: 0x800744C4 -> 0x80074624
// this: r31
void RayInteractor::OnCommandRepeated(enum InteractorCommand cmd /* r29 */) {
    // Local variables
    class cXPerson * player; // r30
    unsigned char doSwitch; // r30
    class CameraDirector * camDir; // r29

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80074624 -> 0x80074908
// this: r30
void RayInteractor::OnCommandPressed(enum InteractorCommand cmd /* r29 */) {
    // Local variables
    class cXPerson * player; // r31
    struct InteractorParams params; // r1+0x8
    unsigned char doSwitch; // r31
    class CameraDirector * camDir; // r29

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80074908 -> 0x800749E8
void RayInteractor::OnCommandReleased() {
    // References
    // -> class GameData _gd;
}

// Range: 0x800749E8 -> 0x80074A48
void RayInteractor::OnCommandUpdate() {}

// Range: 0x80074A48 -> 0x80074A88
// this: r31
void RayInteractor::ResetInputState() {}

// Range: 0x80074A88 -> 0x80074AF4
// this: r31
void RayInteractor::ResetCursor() {
    // References
    // -> float m_ScreenHeight;
    // -> float m_ScreenWidth;
}

// Range: 0x80074AF4 -> 0x80074B10
void RayInteractor::ResetSnapTimer() {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x80074B10 -> 0x80074B4C
// this: r31
float RayInteractor::GetSelectionRadius() {
    // Local variables
    float radius; // f1
}

// Range: 0x80074B4C -> 0x80074D14
// this: r28
void RayInteractor::ExecuteActionMenu() {
    // Local variables
    class TNodeList objList; // r1+0x8
    class ObjectSlot * os; // r31
    class cXObject * pObj; // r30
    class ISimInstance * handSimInstance; // r0
    class NLIteratorPtrType * nli; // r29
    class ISimInstance * pIobject; // r0
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80074D14 -> 0x80074D20
void RayInteractor::ReturnPlumbobToSim() {}

// Range: 0x80074D20 -> 0x80074D54
unsigned char RayInteractor::IsSimulatorPaused() {}

// Range: 0x80074D54 -> 0x80074D58
void RayInteractor::UpdateObjectHighlights() {}

// Range: 0x80074D58 -> 0x80074DA0
// this: r31
void RayInteractor::SetupCamera() {
    // Local variables
    class ESimsCam * pCam; // r0
}

// Range: 0x80074DA0 -> 0x80074DF8
unsigned char RayInteractor::ChooseAction(class Interaction * pAction /* r31 */) {}

// Range: 0x80074DF8 -> 0x80074FB4
// this: r30
void RayInteractor::CastRay() {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x54
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x48
    class EVec3 hit_pos; // r1+0x3C
    float tBest; // r1+0x8
    float xSize; // f31
    float ySize; // f30
    class EBound3 worldBB; // r1+0x60

    // References
    // -> class cFixedWorld * pFixedWorld;
    // -> class EGlobal _globals;
    // -> float m_ScreenHeight;
    // -> float m_ScreenWidth;
}

// Range: 0x80074FB4 -> 0x800757D0
// this: r28
unsigned char RayInteractor::RaySceneObjectsIntersectTest(class EIObjectMan * objMan /* r29 */) {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x18
    class EVec3 ray_dir; // r1+0x84
    enum CursorState cursorState; // r31
    unsigned char cursorHighlight; // r30
    class E3DWindow * win; // r0
    class ESimsCam * pCamera; // r25
    class EVec3 cam_pos; // r1+0x78
    class TNodeList allObjects; // r1+0x6C
    class ISimInstance * closest_instance; // r25
    float nearest_distance; // f29
    class EBound3 mBound; // r1+0x90
    class NLIteratorPtrType * i; // r24
    class ISimInstance * instance; // r1+0x14
    class ESim * sim; // r23
    unsigned char model_loaded; // r0
    unsigned char is_changing; // r0
    class EVec3 sim_pos; // r1+0x60
    class EMat4 TempMat; // r1+0xA8
    int node_count; // r0
    class EVec3 min_corner; // r1+0x54
    class EVec3 max_corner; // r1+0x48
    class EBoundSphere sphere; // r1+0x38
    float hit_dist; // r1+0x10
    class EVec3 hit_pos; // r1+0x2C
    unsigned char obj_hit; // r0
    float near_plane; // f0
    float alpha; // f23
    unsigned char addToCollisionView; // r23
    class cXObject * testOb; // r0
    float dist; // r1+0xC
    class EInstance * nearest_wall; // r0
    unsigned char rayPickerHitWall; // r1+0x9
    unsigned char rayPickerHitFloor; // r1+0x8
    class ISimInstance * instance; // r0
    int ind; // r23
    unsigned char one_obj_has_interactions; // r24
    unsigned char max_speed_set; // r26
    class cXObject * pSelectedObject; // r0
    class ISimInstance * pSelectedInstance; // r0

    // References
    // -> class GameData _gd;
    // -> class PyramidFade g_pyramidFade;
    // -> class EGlobal _globals;
    // -> float m_ScreenHeight;
    // -> float m_ScreenWidth;
    // -> static int frame_number;
}

// Range: 0x800757D0 -> 0x800759A0
// this: r29
void RayInteractor::UpdateCameraPosition() {
    // Local variables
    class E3DWindow * win; // r0
    class ESimsCam * pCamera; // r30
    float cam_acc; // f2
    float f_delta_x; // f29
    float f_delta_y; // f0
    class EMat4 cam_matrix; // r1+0x68
    class EVec3 camera_x_axis; // r1+0x5C
    class EVec3 camera_z_axis; // r1+0x50
    float scale_factor; // f0
    class EVec3 delta_x_axis; // r1+0x44
    class EVec3 delta_z_axis; // r1+0x38
    class EVec3 final_offset; // r1+0x2C
    class EVec3 camera_target_look_at; // r1+0x20

    // References
    // -> float _dt;
    // -> float m_sCameraPanningSpeed;
    // -> class EGlobal _globals;
}

// Range: 0x800759A0 -> 0x800759E0
// this: r31
unsigned char RayInteractor::UpdateInteractorOnFloorPosition() {}

// Range: 0x800759E0 -> 0x80075A60
// this: r29
void RayInteractor::MoveToNewSim(const class EVec3 & new_sim_pos /* r30 */) {
    // Local variables
    class ESimsCam * pCamera; // r31
    class EVec3 final_pos; // r1+0x8
}

// Range: 0x80075A60 -> 0x80075AA0
float RayInteractor::GetCameraSpeedScaledByZoom() {
    // Local variables
    class ESimsCam * pCamera; // r0
    float cam_zoom_ratio; // f1
    float scale_factor; // f1

    // References
    // -> float m_CameraSpeedScaleFactor;
}

// Range: 0x80075AA0 -> 0x80075BAC
class EVec3 RayInteractor::GetPositionAlongCamZ(float dist /* f31 */) {
    // Local variables
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x38
    class EMat4 cam_matrix; // r1+0x48
    class EVec3 camera_z_axis; // r1+0x2C
    class EVec3 pos; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80075BAC -> 0x80075C2C
// this: r31
void RayInteractor::CalculateCameraRotationPoint() {
    // Local variables
    class ESimsCam * pCamera; // r0
    float cam_zoom_ratio; // f1
    float distance_in_front_of_cam; // f1

    // References
    // -> float m_sMinimumCameraTurnRadius;
}

// Range: 0x80075C2C -> 0x80075DE4
void RayInteractor::ClampPosToLot(class EVec3 & posToUpdate /* r29 */, float * scale_lot_down /* r30 */) {
    // Local variables
    float xSize; // f31
    float ySize; // f3
    float scale; // f0
    float x_max; // f31
    float x_min; // f30
    float y_max; // f29
    float y_min; // f28

    // References
    // -> float m_LotScaleFactor;
    // -> class cFixedWorld * pFixedWorld;
}


