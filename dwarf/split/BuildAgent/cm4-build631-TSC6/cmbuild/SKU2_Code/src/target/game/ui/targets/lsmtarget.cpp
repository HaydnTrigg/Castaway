/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\lsmtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F0258 -> 0x801F22A8
*/
// Range: 0x801F0258 -> 0x801F0878
// this: r22
LSMTarget::LSMTarget() {
    // Local variables
    class ERShader * pShader; // r1+0x18
    class Neighbor * pNeighbor; // r0
    class LotManager * pLotManager; // r24
    int i; // r23
    signed short lot1; // r20
    struct LotRecord * pLot; // r0
    signed short energyCost; // r1+0x8
    float timeCost; // r1+0x14
    int x; // r1+0x10
    int y; // r1+0xC

    // References
    // -> int m_islandCenterPointTable[3][2];
    // -> static const char * const LSM_map_container;
    // -> static const char * const LSM_legend_plumbbob;
    // -> static const char * const LSM_legend_lit_tiki_shdr;
    // -> static const char * const LSM_legend_unlit_tiki_shdr;
    // -> static const char * const LSM_head_shdr;
    // -> static const char * const LSM_plumbbob;
    // -> static const char * const LSM_travel_time;
    // -> static const char * const LSM_island_name;
    // -> static const char * const LSM_info_gadget_close_callback;
    // -> static const char * const LSM_info_gadget_open_callback;
    // -> static const char * const LSM_info_gadget_close_bkg_callback;
    // -> static const char * const LSM_info_gadget_open_bkg_callback;
    // -> static const char * const LSM_tween_callback;
    // -> static const char * const LSM_legend;
    // -> static const char * const LSM_right;
    // -> static const char * const LSM_left;
    // -> static const char * const LSM_cancel;
    // -> static const char * const LSM_select;
    // -> static const char * const LSM_exists;
    // -> class EGlobal _globals;
    // -> class ESimsApp _app;
    // -> struct [anonymous] __vt__9LSMTarget;
}

// Range: 0x801F0878 -> 0x801F0980
// this: r28
LSMTarget::~LSMTarget() {
    // Local variables
    int i; // r30

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9LSMTarget;
}

// Range: 0x801F0980 -> 0x801F0EC0
// this: r31
void LSMTarget::SetVariable(const char * szCommand /* r27 */) {
    // Local variables
    unsigned char transitions[27]; // r1+0x10
    signed short energyCost; // r1+0x8
    float timeCost; // r1+0xC
    int lastTransition; // r28
    int i; // r4
    class Neighbor * pNeighbor; // r27

    // References
    // -> static const char * const LSM_info_gadget_close_bkg_callback;
    // -> static const char * const LSM_info_gadget_close_callback;
    // -> static const char * const LSM_info_gadget_open_bkg_callback;
    // -> static const char * const LSM_info_gadget_open_callback;
    // -> static const char * const LSM_tween_callback;
    // -> static const char * const LSM_legend;
    // -> static const char * const LSM_right;
    // -> static const char * const LSM_left;
    // -> static const char * const LSM_cancel;
    // -> class EGlobal _globals;
    // -> class ESimsApp _app;
    // -> static const char * const LSM_select;
}

// Range: 0x801F0EC0 -> 0x801F0F40
char * LSMTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const LSM_exists;
}

// Range: 0x801F0F40 -> 0x801F1074
// this: r29
unsigned short * LSMTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    const unsigned short * lot_name; // r0
    class BString2 travelString; // r1+0x8
    unsigned short * outString; // r30

    // References
    // -> static const char * const LSM_travel_time;
    // -> static const char * const LSM_island_name;
}

// Range: 0x801F1074 -> 0x801F18B4
// this: r30
void LSMTarget::Update() {
    // Local variables
    struct LotRecord * pLot; // r3
    unsigned char needToUpdateAllLotShaders; // r27
    int tFrame; // r28
    int pFrame; // r0
    unsigned char found; // r3
    int i; // r26
    struct LotRecord * pLot; // r4
    class BString2 travelString; // r1+0x8
    class EVec2 travelTextBox; // r1+0x40
    const unsigned short * lot_name; // r26
    class EVec2 textBox; // r1+0x38
    char actionStr[1024]; // r1+0x68
    int moodMeter; // r0
    char setMoodStr[32]; // r1+0x48
    class EVec2 dummy; // r1+0x30
    int x; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> static const char * const LSM_info_gadget_close_callback;
    // -> static const char * const LSM_info_gadget_close_bkg_callback;
    // -> static const char * const LSM_info_gadget_open_callback;
    // -> static const char * const LSM_info_gadget_open_bkg_callback;
    // -> static const char * const LSM_info_gadget;
    // -> static const char * const LSM_info_gadget_bkg;
    // -> static const char * const LSM_travel_time;
    // -> static const char * const LSM_island_name;
    // -> static const char * const LSM_legend_lit_tiki_shdr;
    // -> static const char * const LSM_legend_plumbbob;
    // -> unsigned int m_litTikiShaderTable[4];
    // -> static const char * const LSM_plumbbob;
    // -> unsigned int m_plumbbobShaderTable[4];
    // -> int m_islandCenterPointTable[3][2];
    // -> static const char * const LSM_tween_callback;
    // -> static const char * const LSM_map_container;
    // -> int m_scrollTimeTable[3][3];
}

// Range: 0x801F18B4 -> 0x801F19D8
// this: r26
void LSMTarget::UpdateAllLotVisibility() {
    // Local variables
    int i; // r28
    struct LotRecord * pLot; // r27
}

// Range: 0x801F19D8 -> 0x801F1BD4
// this: r23
void LSMTarget::UpdateAllLotShaders() {
    // Local variables
    int i; // r24
    struct LotRecord * pLot; // r3

    // References
    // -> unsigned int m_visibleShaderTable[27];
    // -> unsigned int m_visibleHighlightShaderTable[27];
    // -> unsigned int m_blockedShaderTable[27];
    // -> unsigned int m_blockedHighlightShaderTable[27];
    // -> unsigned int m_wrongIslandShaderTable[27];
}

// Range: 0x801F1BD4 -> 0x801F1C28
// this: r31
void LSMTarget::ResetCursor() {}

// Range: 0x801F1C28 -> 0x801F1CB4
// this: r29
void LSMTarget::SetCursor(unsigned int x /* r30 */, unsigned int y /* r31 */) {}

// Range: 0x801F1CB4 -> 0x801F1D84
int LSMTarget::GetLotAtCursor() {
    // Local variables
    int rc; // r10
    int i; // r11
    struct LotRecord * pLot; // r5
    int x; // r7
    int y; // r6

    // References
    // -> struct LotRect m_LotRectTable[27];
}

// Range: 0x801F1D84 -> 0x801F1DA4
unsigned char LSMTarget::IsValidLot() {}

// Range: 0x801F1DA4 -> 0x801F1E34
unsigned char LSMTarget::DoesIslandHaveVisibleLot() {
    // Local variables
    int firstLot; // [invalid]
    int lastLot; // r6
    unsigned char rc; // r3
    int i; // r7
}

// Range: 0x801F1E34 -> 0x801F1E5C
int LSMTarget::GetIslandFromLot() {}

// Range: 0x801F1E5C -> 0x801F1EA8
void LSMTarget::GetLotCenterPoint() {
    // References
    // -> struct LotRect m_LotRectTable[27];
}

// Range: 0x801F1EA8 -> 0x801F1FB0
// this: r30
void LSMTarget::SetupIslandText() {
    // Local variables
    char pdaStringName[256]; // r1+0x8
}

// Range: 0x801F1FB0 -> 0x801F207C
class EVec2 LSMTarget::GetTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */, float fontSize /* f31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801F207C -> 0x801F20BC
unsigned short * LSMTarget::GetLotName() {
    // Local variables
    char * houseName; // r0
    const unsigned short * lot_name; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F20BC -> 0x801F22A8
// this: r28
void LSMTarget::MakeTravelTimeMsg(class BString2 & msg /* r30 */) {
    // Local variables
    unsigned char blocked; // r29
    signed short energyCost; // r1+0x8
    float timeCost; // r1+0x1C
    class LotManager * pLotManager; // r0
    signed short hours; // r5
    signed short minutes; // r28
    char numberStr[256]; // r1+0x20
    class BString2 temp; // r1+0x18

    // References
    // -> class EGlobal _globals;
}


