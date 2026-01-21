/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\raymanipulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80080D6C -> 0x800824EC
*/
// Range: 0x80080D6C -> 0x80080F20
// this: r29
RayManipulator::RayManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule14RayManipulator;
}

// Range: 0x80080F78 -> 0x80081010
// this: r30
RayManipulator::~RayManipulator() {}

// Range: 0x80081010 -> 0x80081018
void RayManipulator::SetCameraRotationPoint() {}

// Range: 0x80081018 -> 0x80081054
// this: r31
void RayManipulator::Initialize() {}

// Range: 0x80081054 -> 0x80081100
// this: r30
void RayManipulator::ParseControls() {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x80081100 -> 0x800811A4
// this: r31
void RayManipulator::Update() {}

// Range: 0x800811A4 -> 0x8008120C
// this: r30
void RayManipulator::SetNewArrowPosition(const class EVec2 & newPos /* r31 */) {}

// Range: 0x8008120C -> 0x80081278
// this: r31
void RayManipulator::ResetCursor() {}

// Range: 0x80081278 -> 0x80081440
// this: r29
void RayManipulator::CastRay() {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x54
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x48
    class EVec3 hit_pos; // r1+0x3C
    float tBest; // r1+0x8
    float xSize; // f31
    float ySize; // f30
    int lotId; // r0
    float k_z; // f29
    class EBound3 worldBB; // r1+0x60

    // References
    // -> float s_gridDrawOffset[27];
    // -> class cFixedWorld * pFixedWorld;
    // -> class EGlobal _globals;
}

// Range: 0x80081440 -> 0x800814C0
// this: r31
void RayManipulator::CalculateCameraRotationPoint() {
    // Local variables
    float cam_zoom_ratio; // f1
    float distance_in_front_of_cam; // f1
}

// Range: 0x800814C0 -> 0x800816B8
// this: r28
void RayManipulator::ClampPosToLot(class EVec3 & posToUpdate /* r29 */, float * scale_lot_down /* r30 */) {
    // Local variables
    float xSize; // f31
    float ySize; // f3
    float scale; // f0
    float x_max; // f31
    float x_min; // f30
    float y_max; // f29
    float y_min; // f28
    int lotId; // r0
    float k_z; // f28

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
    // -> class cFixedWorld * pFixedWorld;
}

// Range: 0x800816B8 -> 0x800817C4
class EVec3 RayManipulator::GetPositionAlongCamZ(float dist /* f31 */) {
    // Local variables
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x38
    class EMat4 cam_matrix; // r1+0x48
    class EVec3 camera_z_axis; // r1+0x2C
    class EVec3 pos; // r1+0x20

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800817C4 -> 0x8008197C
// this: r31
void RayManipulator::UpdateCameraPosition() {
    // Local variables
    class E3DWindow * win; // r0
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
    // -> class EGlobal _globals;
}

// Range: 0x8008197C -> 0x800819C4
// this: r31
float RayManipulator::GetCameraSpeedScaledByZoom() {
    // Local variables
    float cam_zoom_ratio; // f1
    float scale_factor; // f1
}

// Range: 0x800819C4 -> 0x800819F4
// this: r4
unsigned char RayManipulator::UpdateInteractorOnFloorPosition() {}

// Range: 0x800819F4 -> 0x800819FC
void RayManipulator::UpdateFloorOffset() {}

// Range: 0x800819FC -> 0x80081A00
void RayManipulator::UpdateObjectGrabOffset() {}

// Range: 0x80081A00 -> 0x80081C18
unsigned char RayManipulator::SimInstanceHitAABB(const class EVec3 & ray_dir /* r26 */, const class EVec3 & cam_pos /* r27 */, class ISimInstance * instance /* r28 */, class EVec3 & out_hit_pos /* r29 */, float & out_hit_dist /* r30 */) {
    // Local variables
    class EBoundSphere sphere; // r1+0x40
    class EBound3 currentBounds; // r1+0x50
    class ESim * sim; // r0
    unsigned char model_loaded; // r0
    unsigned char is_changing; // r0
    class EVec3 sim_pos; // r1+0x30
    class EMat4 TempMat; // r1+0x68
    int node_count; // r0
    class EVec3 min_corner; // r1+0x24
    class EVec3 max_corner; // r1+0x18
    float elevation; // r1+0x8
    unsigned char obj_hit; // r0
}

// Range: 0x80081C18 -> 0x80082040
// this: r31
unsigned char RayManipulator::RaySceneObjectsIntersectTest(class EIObjectMan * objMan /* r28 */) {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x18
    class EVec3 ray_dir; // r1+0x44
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x38
    class TNodeList allObjects; // r1+0x2C
    class ISimInstance * closest_instance; // r3
    float nearest_distance; // f28
    class EVec3 hit_pos; // r1+0x20
    class NLIteratorPtrType * i; // r29
    class ISimInstance * instance; // r1+0x14
    float hit_dist; // r1+0x10
    unsigned char obj_hit; // r0
    float near_plane; // f0
    class cXObject * pObj; // r28
    float dist; // r1+0xC
    class EInstance * nearest_wall; // r0
    unsigned char rayPickerHitWall; // r1+0x9
    unsigned char rayPickerHitFloor; // r1+0x8
    class ISimInstance * * it; // r28
    class cXObject * pSelectedObject; // r0
    class ISimInstance * pSelectedInstance; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> static int frame_number;
}

// Range: 0x80082040 -> 0x800821B4
// this: r29
class EInstance * RayManipulator::FindClosestWall(class EVec3 & hit_point /* r30 */) {
    // Local variables
    float dist; // r1+0xC
    float hit_dist; // r1+0x8
    class EInstance * nearest_wall; // r31

    // References
    // -> static int frame_number;
}

// Range: 0x800821B4 -> 0x800822C0
class EVec3 RayManipulator::GetWallCorner(class EVec3 * corner /* r29 */, class EInstance * instance /* r30 */, const class EVec3 & hit_pos /* r31 */) {
    // Local variables
    class EBound3 mBound; // r1+0x48
    class EVec3 bbox_max; // r1+0x38
    class EVec3 bbox_min; // r1+0x2C
    class EVec3 final_hit_pos; // r1+0x20
    class EVec3 hit_to_min; // r1+0x14
    float dist_to_min; // f0
    class EVec3 hit_to_max; // r1+0x8
    float dist_to_max; // f0
}

// Range: 0x800822C0 -> 0x800823A0
// this: r29
class EVec2 RayManipulator::CalculateArrowPos(class RayManipulator * const this /* r30 */, const class EVec3 & world_pos /* r31 */) {
    // Local variables
    class E3DWindow * win; // r0
    unsigned char in_front_of_cam; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800823A0 -> 0x800823BC
class EVec2 RayManipulator::GetArrowPos() {}

// Range: 0x800823BC -> 0x80082478
// this: r28
unsigned char RayManipulator::IsCmdDown(unsigned int ectrlcmd /* r29 */) const {
    // Local variables
    class EController * pCtrl; // r31
    class InteractorInputManager * pIIM; // r30
    class InstanceData * pInstanceData; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80082478 -> 0x80082494
unsigned char RayManipulator::AllowCursorNavigate() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80082494 -> 0x800824EC
// this: r30
void RayManipulator::GetInteractorInfo(struct InteractorInfo & info /* r31 */) {}


