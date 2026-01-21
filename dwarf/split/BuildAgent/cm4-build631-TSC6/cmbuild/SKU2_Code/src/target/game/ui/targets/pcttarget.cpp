/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\pcttarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7F5C -> 0x801BE34C
*/
// Range: 0x801B7F5C -> 0x801B8038
unsigned char get_person_selector_name(class ObjSelector * pObjSelector /* r29 */, char * pDst /* r28 */) {
    // Local variables
    const class BString2 & lastname; // r31
    const class BString2 & firstname; // r29
}

// Range: 0x801B8038 -> 0x801B8118
int sort_selectors_by_name(void * pCellInfoAsVoid2 /* r30 */) {
    // Local variables
    class ObjSelector * const pObjSelector1; // r31
    class ObjSelector * const pObjSelector2; // r30
    const unsigned short * pName1; // r31
    const unsigned short * pName2; // r4
}

// Range: 0x801B8118 -> 0x801B820C
int sort_selectors_by_selector_name(void * pCellInfoAsVoid2 /* r28 */) {
    // Local variables
    class ObjSelector * const pObjSelector1; // r31
    class ObjSelector * const pObjSelector2; // r30
    const char * pName1; // r29
    const char * pName2; // r28
    char tempbuff1[1024]; // r1+0x408
    char tempbuff2[1024]; // r1+0x8

    // References
    // -> static const char * const kUserDefined;
}

// Range: 0x801B820C -> 0x801B8278
static int sort_cellinfo_by_cost(void * pCellInfoAsVoid2 /* r30 */) {
    // Local variables
    int value1; // r0
    int value2; // r0
}

// Range: 0x801B8278 -> 0x801B82DC
static int sort_walls_by_name() {
    // Local variables
    const struct FenceData * pObj2; // r31
    const unsigned short * pName1; // r30
    const unsigned short * pName2; // r0
}

// Range: 0x801B82DC -> 0x801B8340
static int sort_wallpaper_by_name() {
    // Local variables
    const struct WallTile * pObj2; // r31
    const unsigned short * pName1; // r30
    const unsigned short * pName2; // r0
}

// Range: 0x801B8340 -> 0x801B83C0
static int sort_wallpaper_by_cost(void * pCellInfoAsVoid1 /* r29 */, void * pCellInfoAsVoid2 /* r30 */) {
    // Local variables
    int value1; // r0
    int value2; // r0
}

// Range: 0x801B83C0 -> 0x801B8424
static int sort_floors_by_name() {
    // Local variables
    const struct FloorTile * pObj2; // r31
    const unsigned short * pName1; // r30
    const unsigned short * pName2; // r0
}

// Range: 0x801B8424 -> 0x801B84A4
static int sort_floors_by_cost(void * pCellInfoAsVoid1 /* r29 */, void * pCellInfoAsVoid2 /* r30 */) {
    // Local variables
    int value1; // r0
    int value2; // r0
}

// Range: 0x801B84A4 -> 0x801B84C0
void PCTTarget::static_GrabManipulatorCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B84C0 -> 0x801B84DC
void PCTTarget::static_PlaceManipulatorCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B84DC -> 0x801B84F8
void PCTTarget::static_HutPlaceManipulatorCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B84F8 -> 0x801B8514
void PCTTarget::static_WallManipulatorCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B8514 -> 0x801B8530
void PCTTarget::static_WallPainterCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B8530 -> 0x801B854C
void PCTTarget::static_FloorPainterCallback() {
    // Local variables
    class PCTTarget * pThis; // r0
}

// Range: 0x801B854C -> 0x801B856C
cCellInfo::cCellInfo() {}

// Range: 0x801B856C -> 0x801B85F4
// this: r30
unsigned char cCellInfo::Init(class ObjSelector * pObjSelector /* r31 */) {}

// Range: 0x801B85F4 -> 0x801B8638
unsigned char cCellInfo::Init() {}

// Range: 0x801B8638 -> 0x801B867C
unsigned char cCellInfo::Init() {}

// Range: 0x801B867C -> 0x801B86C0
unsigned char cCellInfo::Init() {}

// Range: 0x801B86C0 -> 0x801B8754
int cCellInfo::GetPrice() {}

// Range: 0x801B8754 -> 0x801B8850
unsigned char cCellInfo::GetName(unsigned short * pDst /* r31 */) {
    // Local variables
    const unsigned short * pName; // r0
}

// Range: 0x801B8850 -> 0x801B887C
unsigned char cCellInfo::GetDesc() {}

// Range: 0x801B887C -> 0x801B8898
unsigned char PCTTarget::InitializeStaticData() {
    // References
    // -> int m_SavedFloorTabIndex;
    // -> int m_SavedPaperTabIndex;
    // -> int m_SavedObjectTabIndex;
    // -> int m_SavedToolIndex;
}

// Range: 0x801B8898 -> 0x801B9250
// this: r30
PCTTarget::PCTTarget(enum ePCTMode pctmode /* r27 */) {
    // Local variables
    class HUTIO hutio; // r1+0xC
    class EResource * pTemp; // r0
    unsigned long index; // r0
    class ObjectFolder * pObjectFolder; // r29
    class ObjSelector * pObjSelector; // r4
    class ESimsCam * pSimsCam; // r28
    class SimsCameraParameters * pParams; // r29

    // References
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
    // -> int m_SavedToolIndex;
    // -> int m_SavedObjectTabIndex;
    // -> static struct PCTTabInfo BB5TabInfoForObjects[19];
    // -> static const char * const CAT_TitleIcon;
    // -> static const char * const CAT_ObjDisp2D;
    // -> static const char * const CAT_TabName;
    // -> static const char * const CAT_ScreenTitle;
    // -> static const char * const CAT_Points;
    // -> static const char * const CAT_ObjPrice;
    // -> static const char * const CAT_ObjName;
    // -> static const char * const CAT_ObjInfo2;
    // -> static const char * const CAT_ObjInfo1;
    // -> static const char * const CAT_ObjDescription;
    // -> static const char * const CAT_MotiveValue3;
    // -> static const char * const CAT_MotiveValue2;
    // -> static const char * const CAT_MotiveValue1;
    // -> static const char * const CAT_MotiveValue0;
    // -> static const char * const CAT_Money;
    // -> static const char * const CAT_ShadToItem;
    // -> static const char * const CAT_ShadMax;
    // -> static const char * const CAT_ScrollCB;
    // -> static const char * const CAT_Hi;
    // -> static const char * const CAT_TabsReady;
    // -> static const char * const CAT_ShowHelp;
    // -> static const char * const CAT_ShowCallback;
    // -> static const char * const CAT_Pause;
    // -> static const char * const CAT_HideCallback;
    // -> static const char * const CAT_CurrTab;
    // -> static const char * const CAT_Cancel;
    // -> static const char * const CAT_Accept;
    // -> static const char * const CAT_UnavInv;
    // -> static const char * const CAT_NewInv;
    // -> static const char * const CAT_TotInv;
    // -> static const char * const BBS_OpenAsChild;
    // -> static const char * const CAT_FlowForward;
    // -> static const char * const CAT_UseMotiveText3;
    // -> static const char * const CAT_UseMotiveText2;
    // -> static const char * const CAT_UseMotiveText1;
    // -> static const char * const CAT_UseMotiveText0;
    // -> static const char * const CAT_UseGridBuyAni;
    // -> static const char * const CAT_UseSecondInfoLine;
    // -> static const char * const CAT_UseFirstInfoLine;
    // -> static const char * const CAT_ShowObjDisp3D;
    // -> static const char * const CAT_ShowObjDisp2D;
    // -> static const char * const CAT_SelectedTab;
    // -> static const char * const CAT_SelectedCell;
    // -> static const char * const CAT_MotiveBoxCount;
    // -> static const char * const CAT_ItemCount;
    // -> static const char * const CAT_InitVisible;
    // -> static const char * const CAT_ImageRotation;
    // -> static const char * const CAT_HilitePoints;
    // -> static const char * const CAT_HiliteMoney;
    // -> static const char * const CAT_GetTabCount;
    // -> static const char * const CAT_GetInitialTab;
    // -> static const char * const CAT_exists;
    // -> static const char * const BBS_section;
    // -> static const char * const BBS_section1;
    // -> static const char * const BBS_section0;
    // -> static const char * const BBS_title;
    // -> static const char * const BBS_noTitle;
    // -> static const char * const BBS_horiz;
    // -> static const char * const BBS_config;
    // -> static const char * const BBS_iniSelect;
    // -> static const char * const BBS_exists;
    // -> static const char * const BBS_Cancel;
    // -> static const char * const BBS_Hit;
    // -> static const char * const BBS_Hilite;
    // -> static const char * const tsc5_catalog_sections_ready;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> class EDatasetManager _datasetman;
    // -> class GameData _gd;
    // -> static const char * const PCTTargetName;
    // -> struct [anonymous] __vt__9PCTTarget;
}

// Range: 0x801B92AC -> 0x801B94D4
// this: r29
PCTTarget::~PCTTarget() {
    // Local variables
    class ESimsCam * pSimsCam; // r31
    class SimsCameraParameters * pParams; // r4

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__9PCTTarget;
}

// Range: 0x801B94D4 -> 0x801B9B10
// this: r31
void PCTTarget::SetVariable(const char * zVarName /* r30 */, const char * zValue /* r29 */) {
    // Local variables
    int tempint; // r1+0x18
    int scanresult; // r0
    int gridindex; // r1+0x14
    int cellindex; // r1+0x10
    unsigned int shaderid; // r30
    class cCellInfo * pCellInfo; // r3
    int category; // r1+0xC
    int subcategory; // r1+0x8
    const struct PCTTabInfo * pInfo; // r29

    // References
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
    // -> static const char * const BBS_Cancel;
    // -> static const char * const CAT_TitleIcon;
    // -> static const char * const BBS_Hit;
    // -> int m_SavedHutTabIndex;
    // -> int m_SavedFloorTabIndex;
    // -> int m_SavedPaperTabIndex;
    // -> int m_SavedObjectTabIndex;
    // -> int m_SavedToolIndex;
    // -> class EGlobal _globals;
    // -> static const char * const BBS_Hilite;
    // -> static const char * const tsc5_catalog_sections_ready;
    // -> static const char * const CAT_ShadToItem;
    // -> static const char * const CAT_ShadMax;
    // -> static const char * const CAT_ScrollCB;
    // -> static const char * const CAT_Hi;
    // -> static const char * const CAT_TabsReady;
    // -> static const char * const CAT_ShowHelp;
    // -> static const char * const CAT_Pause;
    // -> static const char * const CAT_HideCallback;
    // -> static const char * const CAT_ShowCallback;
    // -> static const char * const CAT_CurrTab;
    // -> static const char * const CAT_Cancel;
    // -> static const char * const CAT_Accept;
}

// Range: 0x801B9B10 -> 0x801BA1A0
// this: r29
char * PCTTarget::GetVariable(const char * zVarName /* r30 */) {
    // Local variables
    char * pResult; // r31
    const struct PCTTabInfo * pCurrTabInfo; // r3
    int count; // r5

    // References
    // -> static const char * const BBS_OpenAsChild;
    // -> static const char * const BBS_noTitle;
    // -> static const char * const BBS_iniSelect;
    // -> static const char * const BBS_horiz;
    // -> static const char * const BBS_config;
    // -> static const char * const BBS_exists;
    // -> static const char * const CAT_FlowForward;
    // -> static const char * const CAT_UnavInv;
    // -> static const char * const CAT_NewInv;
    // -> static const char * const CAT_TotInv;
    // -> static const char * const CAT_UseMotiveText3;
    // -> static const char * const CAT_UseMotiveText2;
    // -> static const char * const CAT_UseMotiveText1;
    // -> static const char * const CAT_UseMotiveText0;
    // -> static const char * const CAT_MotiveBoxCount;
    // -> static const char * const CAT_UseGridBuyAni;
    // -> static const char * const CAT_UseSecondInfoLine;
    // -> static const char * const CAT_UseFirstInfoLine;
    // -> static const char * const CAT_ShowObjDisp3D;
    // -> static const char * const CAT_ShowObjDisp2D;
    // -> static const char * const CAT_SelectedTab;
    // -> static const char * const CAT_SelectedCell;
    // -> static const char * const CAT_ItemCount;
    // -> static const char * const CAT_InitVisible;
    // -> static const char * const CAT_HilitePoints;
    // -> static const char * const CAT_ImageRotation;
    // -> static const char * const CAT_HiliteMoney;
    // -> static const char * const CAT_GetInitialTab;
    // -> static const char * const CAT_GetTabCount;
    // -> static const char * const CAT_exists;
}

// Range: 0x801BA1A0 -> 0x801BA8FC
// this: r31
unsigned short * PCTTarget::GetLocalizable(const char * zVarName /* r29 */) {
    // Local variables
    const unsigned short * pString; // r3
    unsigned short widestring[4096]; // r1+0x4B8
    int funds; // r0
    class cCellInfo * pCellInfo; // r0
    const struct ObjDefinition * pObjDefinition; // r0
    unsigned short numberstring[64]; // r1+0x38
    class cCellInfo * pCellInfo; // r0
    int price; // r29
    unsigned char bIsRed; // r0
    class cCellInfo * pCellInfo; // r29
    const char * zName; // r30
    char tempbuff[1024]; // r1+0xB8
    unsigned long len; // r0
    const struct PCTTabInfo * pInfo; // r4
    const struct PCTTabInfo * pInfo; // r4
    unsigned short * pResultString; // r29

    // References
    // -> static const char * const BBS_section;
    // -> static const char * const BBS_section1;
    // -> static const char * const BBS_section0;
    // -> static const char * const BBS_title;
    // -> static const char * const CAT_TabName;
    // -> static const char * const CAT_ScreenTitle;
    // -> static const char * const CAT_Points;
    // -> static const char * const CAT_ObjPrice;
    // -> static const char * const kUserDefined;
    // -> static const char * const CAT_ObjName;
    // -> static const char * const CAT_ObjInfo2;
    // -> static const char * const CAT_ObjInfo1;
    // -> class EGlobal _globals;
    // -> const unsigned short * const COLOR_RedText;
    // -> static const char * const CAT_ObjDescription;
    // -> static const char * const CAT_MotiveValue3;
    // -> static const char * const CAT_MotiveValue2;
    // -> static const char * const CAT_MotiveValue1;
    // -> static const char * const CAT_MotiveValue0;
    // -> static const char * const CAT_Money;
}

// Range: 0x801BA8FC -> 0x801BA99C
// this: r31
void PCTTarget::Update() {
    // Local variables
    enum ePCTInteractorState s; // r0
}

// Range: 0x801BA99C -> 0x801BA9AC
unsigned long PCTTarget::get_cell_info_array_index() {}

// Range: 0x801BA9AC -> 0x801BA9F8
// this: r31
class cCellInfo * PCTTarget::get_cell_info_at_gridindex() const {
    // Local variables
    unsigned long cellinfoindex; // r0
}

// Range: 0x801BA9F8 -> 0x801BAAD8
// this: r31
unsigned char PCTTarget::on_tab_changed() {}

// Range: 0x801BAAD8 -> 0x801BAB80
static unsigned char filter_object(const struct PCTTabInfo * pTabInfo /* r30 */, class ObjSelector * pObjSelector /* r31 */) {
    // Local variables
    const struct ObjDefinition * pObjDefinition; // r0
}

// Range: 0x801BAB80 -> 0x801BAD2C
// this: r29
unsigned char PCTTarget::on_tab_changed_objects(enum ePCTType type /* r30 */) {
    // Local variables
    const struct PCTTabInfo * pCurrTabInfo; // r31
    unsigned long selectorindex; // r26
    unsigned long cellinfoindex; // r25
    int (* pQSortFunc)(void *, void *); // r6

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BAD2C -> 0x801BAE68
// this: r28
unsigned char PCTTarget::on_tab_changed_wall() {
    // Local variables
    const struct FenceSet & fenceset; // r30
    const struct FenceData * pFenceData; // r5
    struct FenceData * const * it; // r29
    int (* pQSortFunc)(void *, void *); // r6

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BAE68 -> 0x801BAEA0
static unsigned char filter_wallpaper() {}

// Range: 0x801BAEA0 -> 0x801BB040
// this: r31
unsigned char PCTTarget::on_tab_changed_wallpaper() {
    // Local variables
    const struct PCTTabInfo * pCurrTabInfo; // r28
    const struct WallSet & wallset; // r27
    struct WallTile * const * it; // r29
    int wallpaperid; // r26
    unsigned long cellinfoindex; // r25
    int (* pQSortFunc)(void *, void *); // r6

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BB040 -> 0x801BB09C
static unsigned char filter_floor() {}

// Range: 0x801BB09C -> 0x801BB254
// this: r31
unsigned char PCTTarget::on_tab_changed_floor() {
    // Local variables
    const struct PCTTabInfo * pCurrTabInfo; // r27
    const struct FloorSet & floorset; // r26
    unsigned long floorid; // r28
    struct FloorTile * const * it; // r29
    unsigned long cellindex; // r25
    int (* pQSortFunc)(void *, void *); // r6

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BB254 -> 0x801BB3E8
// this: r28
unsigned char PCTTarget::on_selection_changed() {
    // Local variables
    unsigned long index; // r29
    class cCellInfo * pCellInfo; // r0

    // References
    // -> static const char * const CAT_ObjDisp3D;
    // -> static const char * const CAT_ObjDisp2D;
    // -> unsigned int MotiveShaderIDs[18];
}

// Range: 0x801BB3E8 -> 0x801BB4C4
// this: r29
unsigned char PCTTarget::on_PCT_EnterPlaceMode() {
    // Local variables
    class cCellInfo * pCellInfo; // r30
    float firevalue; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BB4C4 -> 0x801BB618
// this: r30
unsigned char PCTTarget::on_PCT_SetVisible() {
    // Local variables
    class cCellInfo * pCellInfo; // r0

    // References
    // -> class EGlobal _globals;
    // -> int m_SavedToolIndex;
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
}

// Range: 0x801BB618 -> 0x801BB718
// this: r31
unsigned char PCTTarget::update_object_shader() {
    // Local variables
    unsigned long cellinfoindex; // r0
    class cCellInfo * pCellInfo; // r3
    struct ObjectDefinition info; // r1+0x8

    // References
    // -> static const char * const CAT_ObjDisp2D;
    // -> static const char * const CAT_ObjDisp3D;
}

// Range: 0x801BB718 -> 0x801BB930
// this: r31
unsigned char PCTTarget::calc_motive_ratings() {
    // Local variables
    unsigned long cellinfoindex; // r0
    class cCellInfo * pCellInfo; // r3
    class ObjSelector * pObjSelector; // r3
    class multimap intmap; // r1+0x28
    int index; // r1+0x1C
    int ratingvalue; // r1+0x18
    unsigned long motivedisplaycount; // r28
    struct rbtree_iterator it; // r1+0x14
    int index'80; // r30
}

// Range: 0x801BB988 -> 0x801BB9FC
unsigned char PCTTarget::get_motive_rating_value(unsigned short * pDst /* r30 */) {}

// Range: 0x801BB9FC -> 0x801BBA04
unsigned char PCTTarget::set_control_visible() {}

// Range: 0x801BBA04 -> 0x801BBA68
unsigned char PCTTarget::set_dialog_visible() {}

// Range: 0x801BBA68 -> 0x801BBAF8
unsigned char PCTTarget::can_afford_selection() {
    // Local variables
    class cCellInfo * pCellInfo; // r30
    int funds; // r0
    int price; // r0
    unsigned char result; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BBAF8 -> 0x801BBBF0
unsigned char PCTTarget::on_PCT_ShowHelp() {}

// Range: 0x801BBBF0 -> 0x801BBD8C
// this: r29
unsigned char PCTTarget::enter_tool_mode(enum ePCTType t /* r30 */, unsigned char bSetStartPos /* r31 */) {
    // Local variables
    unsigned char result; // r31
    struct GrabManipulatorParams params; // r1+0x8
    class Interactor * pInteractor; // r0
}

// Range: 0x801BBD8C -> 0x801BC248
// this: r31
unsigned char PCTTarget::GrabManipulatorCallback(const struct CallbackData * pData /* r30 */) {
    // Local variables
    const struct CallbackData * pGrabData; // r0
    int price; // r0
    int newfunds; // r0
    unsigned char bWasPlacedFromInventory; // r3

    // References
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
    // -> class EGlobal _globals;
}

// Range: 0x801BC248 -> 0x801BC2C8
// this: r31
void PCTTarget::delete_dialog_selection_callback() {}

// Range: 0x801BC2C8 -> 0x801BC398
// this: r31
void PCTTarget::sell_dialog_selection_callback() {}

// Range: 0x801BC398 -> 0x801BC5DC
// this: r29
unsigned char PCTTarget::enter_place_mode(class cCellInfo * pCellInfo /* r30 */) {
    // Local variables
    unsigned char result; // r31
    struct BBHPriceInfo priceInfo; // r1+0x18
    struct PlaceManipulatorParams params; // r1+0x28
    struct BBHPriceInfo priceInfo; // r1+0x8
    struct HutPlaceManipulatorParams params; // r1+0x50
}

// Range: 0x801BC5DC -> 0x801BC6C0
// this: r27
unsigned char PCTTarget::PickedUpObject(class cXObject * pObject /* r28 */, unsigned char bIsCloneMode /* r29 */) {
    // Local variables
    unsigned char showpig; // r31
    int price; // r30
    unsigned int shaderid; // r29
    struct BBHPriceInfo priceInfo; // r1+0x8
}

// Range: 0x801BC6C0 -> 0x801BC8A8
// this: r31
unsigned char PCTTarget::PlaceModeCallback(const struct CallbackData * pData /* r27 */) {
    // Local variables
    const struct CallbackData * pPlaceData; // r0
    class ObjSelector * pObjSelector; // r29
    int price; // r0
    unsigned char bRestartPlacement; // r29
    int newfunds; // r28

    // References
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
    // -> class EGlobal _globals;
}

// Range: 0x801BC8A8 -> 0x801BCA5C
// this: r27
unsigned char PCTTarget::HutPlaceModeCallback(const struct CallbackData * pData /* r28 */) {
    // Local variables
    const struct CallbackData * pPlaceData; // r0
    class ObjSelector * pObjSelector; // r30
    int price; // r0
    unsigned char bRestartPlacement; // r30
    int newfunds; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BCA5C -> 0x801BCA60
void PCTTarget::NotifyWantsFearsSystemOfPurchase() {}

// Range: 0x801BCA60 -> 0x801BCBC8
// this: r29
unsigned char PCTTarget::enter_wall_mode(class cCellInfo * pCellInfo /* r30 */, unsigned char bIsPlaceMode /* r31 */) {
    // Local variables
    struct WallManipulatorParams params; // r1+0x8
    unsigned char result; // r31
}

// Range: 0x801BCBC8 -> 0x801BCED4
// this: r31
unsigned char PCTTarget::WallManipulatorCallback(const struct CallbackData * pData /* r30 */) {
    // Local variables
    int value; // r30
    int newfunds; // r0
    int newfunds; // r0
    const struct CallbackData * pWallData; // r0
    struct BBHPriceInfo priceInfo; // r1+0x18
    const struct CallbackData * pWallData; // r0

    // References
    // -> int m_SavedToolIndex;
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
}

// Range: 0x801BCED4 -> 0x801BCFE4
// this: r31
struct BBHPriceInfo PCTTarget::calc_wall_value(class PCTTarget * const this /* r29 */, const struct CallbackData * pData /* r28 */) {
    // Local variables
    const struct CallbackData * pWallData; // r0
    const class vector & fenceinfolist; // r30
    const struct FenceSellCount * it; // r29
    const struct FenceSet & fenceset; // r28
    int currprice; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BCFE4 -> 0x801BD074
int get_price_from_wall_style(const struct FenceSet & fenceset /* r29 */, enum WallStyle wallstyle /* r30 */) {
    // Local variables
    struct FenceData * const * it; // r31
    const struct FenceData * pFenceData; // r3
}

// Range: 0x801BD074 -> 0x801BD108
// this: r30
unsigned char PCTTarget::enter_hut_mode(unsigned char bIsPlaceMode /* r31 */) {
    // Local variables
    struct HutPlaceManipulatorParams params; // r1+0x8
    unsigned char result; // r31
}

// Range: 0x801BD108 -> 0x801BD23C
// this: r28
unsigned char PCTTarget::enter_wallpaper_mode(class cCellInfo * pCellInfo /* r29 */, unsigned char bIsPlaceMode /* r30 */) {
    // Local variables
    struct WallPainterParams params; // r1+0xC
    struct WallSet paperSet; // r1+0x8
    unsigned char result; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BD23C -> 0x801BD350
// this: r31
struct BBHPriceInfo PCTTarget::calc_wallpaper_value(class PCTTarget * const this /* r28 */, const struct CallbackData * pData /* r27 */) {
    // Local variables
    const struct CallbackData * pWallpaperData; // r0
    const struct WallSet & wallpaperset; // r29
    int wallpapersetsize; // r0
    const class vector & soldpaper; // r28
    const struct PatternSellCount * it; // r27
    const struct WallTile * pWallpaper; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BD350 -> 0x801BD648
// this: r31
unsigned char PCTTarget::WallPainterCallback(const struct CallbackData * pData /* r30 */) {
    // Local variables
    struct BBHPriceInfo priceInfo; // r1+0x18
    int newfunds; // r3
    unsigned int soundid; // r30
    struct BBHPriceInfo priceInfo; // r1+0x8
    const struct CallbackData * pWallData; // r0

    // References
    // -> int m_SavedToolIndex;
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
}

// Range: 0x801BD648 -> 0x801BD768
// this: r28
unsigned char PCTTarget::enter_floor_mode(class cCellInfo * pCellInfo /* r29 */, unsigned char bIsPlaceMode /* r30 */) {
    // Local variables
    struct FloorPainterParams params; // r1+0x10
    struct FloorSet floorSet; // r1+0x8
    unsigned char result; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BD768 -> 0x801BD9D4
// this: r31
unsigned char PCTTarget::FloorPainterCallback(const struct CallbackData * pData /* r30 */) {
    // Local variables
    struct BBHPriceInfo priceInfo; // r1+0x18
    int newfunds; // r0
    struct BBHPriceInfo priceInfo; // r1+0x8
    const struct CallbackData * pFloorCallbackData; // r0

    // References
    // -> int m_SavedToolIndex;
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
}

// Range: 0x801BD9D4 -> 0x801BDB24
// this: r29
struct BBHPriceInfo PCTTarget::calc_floor_tile_value(class PCTTarget * const this /* r30 */, const struct CallbackData * pData /* r31 */) {
    // Local variables
    const struct CallbackData * pFloorData; // r0
    int result; // r27
    const struct FloorSet & floorset; // r26
    int floorsetsize; // r0
    const struct FloorTile * pFloorTile; // r5
    const struct InvStock * it; // r25

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BDB24 -> 0x801BDB30
void PCTTarget::ZeroInputCallback() {}

// Range: 0x801BDB30 -> 0x801BDB3C
void PCTTarget::DialogClosedCallback() {}

// Range: 0x801BDB3C -> 0x801BDCC0
enum ePCTInteractorState PCTTarget::get_interactor_state() {
    // Local variables
    enum ePCTInteractorState result; // r31
    class InteractorManager * pIM; // r30
    enum InteractorType t; // r0
    class WallManipulator * pWallManipulator; // r30
    class WallPainter * pWallPainter; // r30
    class FloorPainter * pFloorPainter; // r30
    class ObjectManipulator * pObjectManipulator; // r0
}

// Range: 0x801BDCC0 -> 0x801BDED8
// this: r30
unsigned char PCTTarget::onToolMenuItemSelected() {
    // Local variables
    unsigned char result; // r31

    // References
    // -> static struct PCTTabInfo BB5TabInfoForFloors[4];
    // -> int m_SavedFloorTabIndex;
    // -> static struct PCTTabInfo BB5TabInfoForWallpaper[5];
    // -> int m_SavedPaperTabIndex;
    // -> static struct PCTTabInfo BB5TabInfoForWalls[1];
    // -> static struct PCTTabInfo BB5TabInfoForHutObjects[1];
    // -> static struct PCTTabInfo BB5TabInfoForObjects[19];
    // -> int m_SavedObjectTabIndex;
    // -> int m_SavedToolIndex;
}

// Range: 0x801BDED8 -> 0x801BDF48
// this: r31
unsigned char PCTTarget::exit_build_buy() {}

// Range: 0x801BDF48 -> 0x801BDFA0
// this: r31
unsigned char PCTTarget::on_undo() {}

// Range: 0x801BDFA0 -> 0x801BE008
// this: r31
unsigned char PCTTarget::launch_bbs() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BE008 -> 0x801BE040
static struct PCTTabInfo * find_tab_info() {
    // Local variables
    unsigned long index; // r0
}

// Range: 0x801BE040 -> 0x801BE0BC
static unsigned int get_title_icon() {
    // Local variables
    unsigned int titleiconid; // r31
    const struct PCTTabInfo * pTempInfo; // r0

    // References
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
}

// Range: 0x801BE0BC -> 0x801BE17C
// this: r28
unsigned char PCTTarget::install_bbs_icons(const struct PCTTabInfo * pTabInfo /* r29 */, int count /* r30 */) {
    // Local variables
    unsigned int titleiconid; // r0
    int index; // r31
}

// Range: 0x801BE17C -> 0x801BE1DC
unsigned char PCTTarget::FlashScreenReady() {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801BE1DC -> 0x801BE30C
static void __sinit_\game_ui_targets_s2c_unity_cpp() {
    // References
    // -> static const char * const BBS_icn_1_06;
    // -> static const char * const BBS_icn_1_05;
    // -> static const char * const BBS_icn_1_04;
    // -> static const char * const BBS_icn_1_03;
    // -> static const char * const BBS_icn_1_02;
    // -> static const char * const BBS_icn_1_00;
    // -> static const char * const BBS_icn_0_11;
    // -> static const char * const BBS_icn_0_10;
    // -> static const char * const BBS_icn_0_09;
    // -> static const char * const BBS_icn_0_08;
    // -> static const char * const BBS_icn_0_07;
    // -> static const char * const BBS_icn_0_06;
    // -> static const char * const BBS_icn_0_05;
    // -> static const char * const BBS_icn_0_04;
    // -> static struct PCTTabInfo BB5TabInfoForHutObjects[1];
    // -> static const char * const BBS_icn_0_03;
    // -> static struct PCTTabInfo BB5TabInfoForTools[10];
    // -> static struct PCTTabInfo BB5TabInfoForFloors[4];
    // -> static const char * const BBS_icn_0_02;
    // -> static struct PCTTabInfo BB5TabInfoForWallpaper[5];
    // -> static const char * const BBS_icn_0_01;
    // -> static struct PCTTabInfo BB5TabInfoForObjects[19];
    // -> static const char * const BBS_icn_0_00;
    // -> static const char * const BBS_icn_1_01;
}


