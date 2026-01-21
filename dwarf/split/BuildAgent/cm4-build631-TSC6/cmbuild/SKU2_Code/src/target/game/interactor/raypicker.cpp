/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\raypicker.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80075E34 -> 0x80077104
*/
// Range: 0x80075E34 -> 0x80075E74
RayPicker::RayPicker() {}

// Range: 0x80075E74 -> 0x80075EB4
// this: r31
RayPicker::~RayPicker() {}

// Range: 0x80075EB4 -> 0x80075F68
void RayPicker::GetColorFromFrameBuffer(int x /* r29 */, int y /* r30 */, unsigned char * final_colors /* r31 */) {
    // Local variables
    unsigned char colorArray[4]; // r1+0x10
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    void * tex_data; // r0
}

// Range: 0x80075F68 -> 0x8007606C
// this: r29
void RayPicker::InitWindow(class E3DWindow & window /* r30 */, class ERC * prc /* r31 */) {
    // Local variables
    struct ERenderSurfaceDef rsd; // r1+0x18
    class ERenderSurface * pRenderSurface; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8007606C -> 0x80076378
// this: r22
class EInstance * RayPicker::FindClosestArchitectureHit(class ESimsCam * pCamera /* r23 */, float & dist /* r24 */, class vector & vNearestWalls /* r25 */, unsigned char increase_bbox /* r26 */) {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x54
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x48
    class ERLevel * level; // r29
    int num_instances; // r0
    class EInstance * closest_instance; // r28
    float nearest_distance; // f27
    int i; // r27
    class EInstance * instance; // r1+0xC
    class EBound3 mBound; // r1+0x78
    float hit_dist; // r1+0x8
    class EVec3 hit_pos; // r1+0x3C
    class EVec3 bbox_max; // r1+0x30
    class EVec3 bbox_min; // r1+0x24
    float delta_x; // f0
    float delta_y; // f0
    class EBound3 new_bound; // r1+0x60
    unsigned char obj_hit; // r0
    float near_plane; // f0
    unsigned char is_wall_down; // r0
    unsigned char is_wall_down; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80076378 -> 0x80076F4C
// this: r26
class vector & RayPicker::CreateImageMultiSampled(const class vector & hit_objects_vector /* r27 */, int screen_x /* r28 */, int screen_y /* r29 */, class vector & final_hit_list /* r30 */, unsigned char & out_hitFloor /* r31 */) {
    // Local variables
    class E3DWindow * win; // r23
    class ERC * prc; // r22
    struct EMaterial defMat; // r1+0xB0
    class EVec4 bckgnd_color; // r1+0x80
    int sz; // r0
    class ISimInstance * next_obj; // r21
    struct ELights lightList; // r1+0x190
    int i; // r1+0x2C
    unsigned short color_table[64]; // r1+0x110
    class ERModel * current_model; // r20
    unsigned char current_is_person; // r19
    unsigned char is_person; // r0
    class EAnimController * pAC; // r18
    int nNodes; // r17
    class EMat4 * pmNodes; // r16
    unsigned char has_animation; // r15
    class EMat4 mOrient; // r1+0xD0
    float height; // f0
    int ctIdx; // r0
    int idx; // r1+0x28
    int ctIdx; // r0
    struct ETextureDef td; // r1+0x90
    class ETexture * m_RenderTargetTexture; // r16
    class ERenderSurface * pRenderSurface; // r17
    unsigned char bSrcTextureSwizzled; // r18
    int min_x; // r1+0x24
    int max_x; // r1+0x20
    int min_y; // r1+0x1C
    int max_y; // r1+0x18
    float x_normalized; // f5
    float y_normalized; // f3
    int buffer_x; // r15
    int buffer_y; // r19
    int x; // r19
    int y; // r20
    int floorPixelHits; // r21
    unsigned char colorArray[4]; // r1+0x14
    unsigned char green_color; // r25
    int index; // r29
    int i; // r1+0x10
    int ctIdx; // r0
    class ISimInstance * * it; // r0
    float threshHold; // f1
    int i'285; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
}

// Range: 0x80076F4C -> 0x80077104
// this: r10
class EInstance * RayPicker::FindClosestBasedOnBBox(const class vector & vObjects /* r23 */, class ESimsCam * pCamera /* r24 */, float & dist /* r25 */, class EVec3 & hit_point /* r26 */) {
    // Local variables
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x30
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x24
    int num_instances; // r0
    class EInstance * closest_instance; // r29
    float nearest_distance; // f29
    int i; // r28
    class EInstance * instance; // r27
    class EBound3 mBound; // r1+0x40
    float hit_dist; // r1+0x8
    unsigned char obj_hit; // r0
    float near_plane; // f0

    // References
    // -> class EGlobal _globals;
}


