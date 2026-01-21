/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\game_level_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800824EC -> 0x800824EC
*/
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C848
class ETypeInfo * gpTypeInfo_EIAmbLight; // size: 0x4, address: 0x805DB720
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C870
class ETypeInfo * gpTypeInfo_EIDirLight; // size: 0x4, address: 0x805DB724
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C898
class ETypeInfo * gpTypeInfo_EIGameInstance; // size: 0x4, address: 0x805DB728
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C8C0
class ETypeInfo * gpTypeInfo_EILight; // size: 0x4, address: 0x805DB72C
unsigned char m_haveLightsChanged; // size: 0x1, address: 0x805DB730
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C8E8
class ETypeInfo * gpTypeInfo_EInstance; // size: 0x4, address: 0x805DB734
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C910
class ETypeInfo * gpTypeInfo_EIPointAmbLight; // size: 0x4, address: 0x805DB738
// total size: 0xBC
class EIPointAmbLight : public EILight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class EVec3 m_vPos; // offset 0xA4, size 0xC
    float m_falloffStartDistance; // offset 0xB0, size 0x4
    float m_falloffEndDistance; // offset 0xB4, size 0x4
    unsigned char m_distanceFalloffEnabled; // offset 0xB8, size 0x1
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C938
class ETypeInfo * gpTypeInfo_EIPointLight; // size: 0x4, address: 0x805DB73C
// total size: 0xC8
class EIPointLight : public EILight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
    class EVec3 m_vPos; // offset 0xA4, size 0xC
    int m_xLoc; // offset 0xB0, size 0x4
    int m_yLoc; // offset 0xB4, size 0x4
    int m_roomId; // offset 0xB8, size 0x4
public:
    float m_falloffStartDistance; // offset 0xBC, size 0x4
    float m_falloffEndDistance; // offset 0xC0, size 0x4
    unsigned char m_distanceFalloffEnabled; // offset 0xC4, size 0x1
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C960
class ETypeInfo * gpTypeInfo_EIPortalPointLight; // size: 0x4, address: 0x805DB740
static float c_outerLarge[2]; // size: 0x8, address: 0x805D8610
static float c_outerRegular[2]; // size: 0x8, address: 0x805D8618
static float c_outerSmall[2]; // size: 0x8, address: 0x805D8620
static float c_intensityLarge[2]; // size: 0x8, address: 0x805D8628
static float c_intensityRegular[2]; // size: 0x8, address: 0x805D8630
static float c_intensitySmall[2]; // size: 0x8, address: 0x805D8638
// total size: 0xCC
class EIPortalPointLight : public EIPointLight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    unsigned char m_isFlip; // offset 0xC5, size 0x1
protected:
    class EInstance * m_pPortalObject; // offset 0xC8, size 0x4
};
float _portalOffset; // size: 0x4, address: 0x805D8640
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C988
class ETypeInfo * gpTypeInfo_EISpotLight; // size: 0x4, address: 0x805DB744
// total size: 0xD8
class EISpotLight : public EILight {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class EVec3 m_vPos; // offset 0xA4, size 0xC
    class EVec3 m_vDir; // offset 0xB0, size 0xC
    float m_falloffStartDistance; // offset 0xBC, size 0x4
    float m_falloffEndDistance; // offset 0xC0, size 0x4
    float m_falloffStartAngle; // offset 0xC4, size 0x4
    float m_falloffEndAngle; // offset 0xC8, size 0x4
    unsigned char m_distanceFalloffEnabled; // offset 0xCC, size 0x1
protected:
    float m_cosFalloffStartAngle; // offset 0xD0, size 0x4
    float m_cosFalloffEndAngle; // offset 0xD4, size 0x4
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C9B0
class ETypeInfo * gpTypeInfo_EIStaticModel; // size: 0x4, address: 0x805DB748
// total size: 0x0
class FTIteratorPtrType {};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x8048C9D8
class ETypeInfo * gpTypeInfo_EIStaticSubModel; // size: 0x4, address: 0x805DB74C
static class EVec3 s_vDistantPointToForceSkySortOrder; // size: 0xC, address: 0x8048CA00
class ELevelManager _levelman; // size: 0xD44, address: 0x8048CA18
static signed char zodiacPersonalityValues[12][5]; // size: 0x3C, address: 0x8041B190
static int sMotiveCurveMap[11]; // size: 0x2C, address: 0x8041B1CC
static signed short m_lightVertexDummy[4]; // size: 0x8, address: 0x805DB750
static float k_maxPortalColor; // size: 0x4, address: 0x805D8650
static float sAmbientPortalScaler; // size: 0x4, address: 0x805D8654
class EVec3 s_vDistantPointToForceSkySortOrder; // size: 0xC, address: 0x8048D75C
// total size: 0x4
class EffectsVisitor {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
float indoorObjectCullDistance; // size: 0x4, address: 0x805D8658
float indoorObjectCullDistanceSq; // size: 0x4, address: 0x805DB758
static unsigned char g_bERLevelOrderTableDataBuffer[15424]; // size: 0x3C40, address: 0x8048D768
// total size: 0x8
struct AllocBlock {
    // Members
    unsigned int m_buf; // offset 0x0, size 0x4
    struct AllocBlock * m_next; // offset 0x4, size 0x4
};
// total size: 0x1C
class FastAllocPool {
    // Static members
    static int ALIGNMENT; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    struct AllocBlock * m_allocPool; // offset 0x4, size 0x4
    void * m_end; // offset 0x8, size 0x4
    struct AllocBlock * m_freeList; // offset 0xC, size 0x4
    unsigned int m_poolBlocks; // offset 0x10, size 0x4
    unsigned int m_blockSize; // offset 0x14, size 0x4
    unsigned int m_alignment; // offset 0x18, size 0x4
};
static class FastAllocPool g_poolOrderTableDataObjects; // size: 0x1C, address: 0x804913B4
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804913D0
class ETypeInfo * gpTypeInfo_ERLevel; // size: 0x4, address: 0x805DB75C
int m_raycastThisFrame; // size: 0x4, address: 0x805DB760
int m_raycastThreshold; // size: 0x4, address: 0x805DB764
int m_raycastThrottled; // size: 0x4, address: 0x805DB768
int m_raycastDelayed; // size: 0x4, address: 0x805DB76C
unsigned char m_drawingOrderTable; // size: 0x1, address: 0x805DB770
unsigned char m_fillingOrderTable; // size: 0x1, address: 0x805DB771
unsigned int kMidLotObjectResIDs[20]; // size: 0x50, address: 0x8041B1F8
// total size: 0x28
class EBoundTreeNode : public EStorable {
    // Static members
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
public:
    class EBound3 m_b; // offset 0x4, size 0x18
    class EBoundTreeNode * m_pParent; // offset 0x1C, size 0x4
    class EStorable * m_pChildren[2]; // offset 0x20, size 0x8
};
class EVec3 s_outsideAmbient; // size: 0xC, address: 0x804913F8
class EVec3 s_outsideDiffuse; // size: 0xC, address: 0x80491404
float s_outsidePointLightDimmer; // size: 0x4, address: 0x805DB774
// total size: 0x18
class EFloorTileGroup {
    // Members
public:
    class EFloorTileGroup * m_next; // offset 0x0, size 0x4
    class EDL * m_dl; // offset 0x4, size 0x4
    int m_numStrips; // offset 0x8, size 0x4
    struct EFloorTileStrip * m_strips; // offset 0xC, size 0x4
    class ERShader * m_shaderResource; // offset 0x10, size 0x4
    unsigned char m_isCeiling; // offset 0x14, size 0x1
};
// total size: 0x134
class EIFloor : public EInstance {
    // Static members
    static class ERShader * m_sCeilingShader; // size: 0x4
    static class TRedBlackTree m_floors; // size: 0xC
    static unsigned int m_nAlloced; // size: 0x4
    static unsigned char m_bRebuildFloors; // size: 0x1
    static class ETypeInfo m_typeInfo; // size: 0x28

    // Members
protected:
    unsigned int m_roomID; // offset 0x78, size 0x4
    int m_numRoomID; // offset 0x7C, size 0x4
    unsigned short m_roomIDList[64]; // offset 0x80, size 0x80
    class EFloorTileGroup * m_tileGroups; // offset 0x100, size 0x4
    int m_numVertexSpans; // offset 0x104, size 0x4
    struct EFloorVertexSpan * m_vertexSpans; // offset 0x108, size 0x4
    class EBound3 m_boundingBox; // offset 0x10C, size 0x18
public:
    float m_occludeHeight; // offset 0x124, size 0x4
    unsigned char m_isCulled; // offset 0x128, size 0x1
    float m_ceilingOpacity; // offset 0x12C, size 0x4
    unsigned char m_isCeilingDrawPass; // offset 0x130, size 0x1
};
// total size: 0xC
struct EffectEntry {
    // Members
    unsigned int m_framesScheduledForDeletion; // offset 0x0, size 0x4
    unsigned char m_bIsScheduledForDeletion; // offset 0x4, size 0x1
    class Effect * m_pEffect; // offset 0x8, size 0x4
};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0x28
class EffectsManager {
    // Static members
    static class EffectsManager * s_pSingleton; // size: 0x4

    // Members
    class EVec3 m_ambientColor; // offset 0x0, size 0xC
    unsigned char m_bIsInitialized; // offset 0xC, size 0x1
    class TNodeList m_activeEffectList; // offset 0x10, size 0xC
    class TNodeList m_deleteEffectList; // offset 0x1C, size 0xC
};
// total size: 0x340
class ERenderer : public EThread {};
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_EURGB60_PROG = 22,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_MPAL_PROG = 10,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
// total size: 0x80
struct GXFifoObj {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
};
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
enum _GXTlut {
    GX_TLUT0 = 0,
    GX_TLUT1 = 1,
    GX_TLUT2 = 2,
    GX_TLUT3 = 3,
    GX_TLUT4 = 4,
    GX_TLUT5 = 5,
    GX_TLUT6 = 6,
    GX_TLUT7 = 7,
    GX_TLUT8 = 8,
    GX_TLUT9 = 9,
    GX_TLUT10 = 10,
    GX_TLUT11 = 11,
    GX_TLUT12 = 12,
    GX_TLUT13 = 13,
    GX_TLUT14 = 14,
    GX_TLUT15 = 15,
    GX_BIGTLUT0 = 16,
    GX_BIGTLUT1 = 17,
    GX_BIGTLUT2 = 18,
    GX_BIGTLUT3 = 19,
};
// total size: 0x98
class ENgcTextureBase : public ETexture {
    // Members
protected:
    class EMutex m_Mutex; // offset 0x28, size 0x1C
    int m_lockCount; // offset 0x44, size 0x4
    struct _GXTexObj m_texObj; // offset 0x48, size 0x20
    enum _GXTexWrapMode m_sWrap; // offset 0x68, size 0x4
    enum _GXTexWrapMode m_tWrap; // offset 0x6C, size 0x4
    unsigned int m_texFormat; // offset 0x70, size 0x4
    unsigned char * m_pImage; // offset 0x74, size 0x4
    unsigned char * m_pCopyData; // offset 0x78, size 0x4
    unsigned char m_pixelsPerTileRow; // offset 0x7C, size 0x1
    unsigned char m_pixelsPerTileCol; // offset 0x7D, size 0x1
    unsigned char m_init; // offset 0x7E, size 0x1
    struct _GXTlutObj m_tlutObj; // offset 0x80, size 0xC
    unsigned char * m_pPalette; // offset 0x8C, size 0x4
    enum _GXTlut m_tlutName; // offset 0x90, size 0x4
    enum ETextureUpdateType m_updateType; // offset 0x94, size 0x4
};
// total size: 0x2C
class ENgcTexture : public ETexture {
    // Members
protected:
    class ENgcTextureBase * m_textureImp; // offset 0x28, size 0x4
};
enum _GXPosNrmMtx {
    GX_PNMTX0 = 0,
    GX_PNMTX1 = 3,
    GX_PNMTX2 = 6,
    GX_PNMTX3 = 9,
    GX_PNMTX4 = 12,
    GX_PNMTX5 = 15,
    GX_PNMTX6 = 18,
    GX_PNMTX7 = 21,
    GX_PNMTX8 = 24,
    GX_PNMTX9 = 27,
};
enum _GXAttrType {
    GX_NONE = 0,
    GX_DIRECT = 1,
    GX_INDEX8 = 2,
    GX_INDEX16 = 3,
};
enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
enum _GXTexMapID {
    GX_TEXMAP0 = 0,
    GX_TEXMAP1 = 1,
    GX_TEXMAP2 = 2,
    GX_TEXMAP3 = 3,
    GX_TEXMAP4 = 4,
    GX_TEXMAP5 = 5,
    GX_TEXMAP6 = 6,
    GX_TEXMAP7 = 7,
    GX_MAX_TEXMAP = 8,
    GX_TEXMAP_NULL = 255,
    GX_TEX_DISABLE = 256,
};
enum _GXChannelID {
    GX_COLOR0 = 0,
    GX_COLOR1 = 1,
    GX_ALPHA0 = 2,
    GX_ALPHA1 = 3,
    GX_COLOR0A0 = 4,
    GX_COLOR1A1 = 5,
    GX_COLOR_ZERO = 6,
    GX_ALPHA_BUMP = 7,
    GX_ALPHA_BUMPN = 8,
    GX_COLOR_NULL = 255,
};
enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
    GX_CC_TEXRRR = 16,
    GX_CC_TEXGGG = 17,
    GX_CC_TEXBBB = 18,
    GX_CC_QUARTER = 14,
};
enum _GXTevOp {
    GX_TEV_ADD = 0,
    GX_TEV_SUB = 1,
    GX_TEV_COMP_R8_GT = 8,
    GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10,
    GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_BGR24_GT = 12,
    GX_TEV_COMP_BGR24_EQ = 13,
    GX_TEV_COMP_RGB8_GT = 14,
    GX_TEV_COMP_RGB8_EQ = 15,
    GX_TEV_COMP_A8_GT = 14,
    GX_TEV_COMP_A8_EQ = 15,
};
enum _GXTevBias {
    GX_TB_ZERO = 0,
    GX_TB_ADDHALF = 1,
    GX_TB_SUBHALF = 2,
    GX_MAX_TEVBIAS = 3,
};
enum _GXTevScale {
    GX_CS_SCALE_1 = 0,
    GX_CS_SCALE_2 = 1,
    GX_CS_SCALE_4 = 2,
    GX_CS_DIVIDE_2 = 3,
    GX_MAX_TEVSCALE = 4,
};
enum _GXTevRegID {
    GX_TEVPREV = 0,
    GX_TEVREG0 = 1,
    GX_TEVREG1 = 2,
    GX_TEVREG2 = 3,
    GX_MAX_TEVREG = 4,
};
enum _GXTevAlphaArg {
    GX_CA_APREV = 0,
    GX_CA_A0 = 1,
    GX_CA_A1 = 2,
    GX_CA_A2 = 3,
    GX_CA_TEXA = 4,
    GX_CA_RASA = 5,
    GX_CA_KONST = 6,
    GX_CA_ZERO = 7,
    GX_CA_ONE = 6,
};
enum _GXTevSwapSel {
    GX_TEV_SWAP0 = 0,
    GX_TEV_SWAP1 = 1,
    GX_TEV_SWAP2 = 2,
    GX_TEV_SWAP3 = 3,
    GX_MAX_TEVSWAP = 4,
};
// total size: 0x5C
struct ENgcRSTevStage {
    // Members
    enum _GXTexCoordID orderCoord; // offset 0x0, size 0x4
    enum _GXTexMapID orderMap; // offset 0x4, size 0x4
    enum _GXChannelID orderColor; // offset 0x8, size 0x4
    enum _GXTevColorArg colorA; // offset 0xC, size 0x4
    enum _GXTevColorArg colorB; // offset 0x10, size 0x4
    enum _GXTevColorArg colorC; // offset 0x14, size 0x4
    enum _GXTevColorArg colorD; // offset 0x18, size 0x4
    enum _GXTevOp colorOp; // offset 0x1C, size 0x4
    enum _GXTevBias colorBias; // offset 0x20, size 0x4
    enum _GXTevScale colorScale; // offset 0x24, size 0x4
    unsigned char colorClamp; // offset 0x28, size 0x1
    enum _GXTevRegID colorOutReg; // offset 0x2C, size 0x4
    enum _GXTevAlphaArg alphaA; // offset 0x30, size 0x4
    enum _GXTevAlphaArg alphaB; // offset 0x34, size 0x4
    enum _GXTevAlphaArg alphaC; // offset 0x38, size 0x4
    enum _GXTevAlphaArg alphaD; // offset 0x3C, size 0x4
    enum _GXTevOp alphaOp; // offset 0x40, size 0x4
    enum _GXTevBias alphaBias; // offset 0x44, size 0x4
    enum _GXTevScale alphaScale; // offset 0x48, size 0x4
    unsigned char alphaClamp; // offset 0x4C, size 0x1
    enum _GXTevRegID alphaOutReg; // offset 0x50, size 0x4
    enum _GXTevSwapSel rasSwapIndex; // offset 0x54, size 0x4
    enum _GXTevSwapSel texSwapIndex; // offset 0x58, size 0x4
};
// total size: 0x340
struct ENgcRSTevState {
    // Members
    unsigned char nStages; // offset 0x0, size 0x1
    struct ENgcRSTevStage stage[9]; // offset 0x4, size 0x33C
};
enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
// total size: 0xC
struct ENgcRSZMode {
    // Members
    unsigned char compare_enable; // offset 0x0, size 0x1
    enum _GXCompare func; // offset 0x4, size 0x4
    unsigned char update_enable; // offset 0x8, size 0x1
};
enum _GXAlphaOp {
    GX_AOP_AND = 0,
    GX_AOP_OR = 1,
    GX_AOP_XOR = 2,
    GX_AOP_XNOR = 3,
    GX_MAX_ALPHAOP = 4,
};
// total size: 0x14
struct ENgcRSAlphaCompareMode {
    // Members
    enum _GXCompare comp0; // offset 0x0, size 0x4
    unsigned char ref0; // offset 0x4, size 0x1
    enum _GXAlphaOp op; // offset 0x8, size 0x4
    enum _GXCompare comp1; // offset 0xC, size 0x4
    unsigned char ref1; // offset 0x10, size 0x1
    unsigned char zCompBeforeTex; // offset 0x11, size 0x1
};
enum _GXColorSrc {
    GX_SRC_REG = 0,
    GX_SRC_VTX = 1,
};
enum _GXDiffuseFn {
    GX_DF_NONE = 0,
    GX_DF_SIGN = 1,
    GX_DF_CLAMP = 2,
};
enum _GXAttnFn {
    GX_AF_SPEC = 0,
    GX_AF_SPOT = 1,
    GX_AF_NONE = 2,
};
// total size: 0x18
struct ENgcRSColorChannelState {
    // Members
    unsigned char enable; // offset 0x0, size 0x1
    enum _GXColorSrc ambientSrc; // offset 0x4, size 0x4
    enum _GXColorSrc materialSrc; // offset 0x8, size 0x4
    unsigned int lightMask; // offset 0xC, size 0x4
    enum _GXDiffuseFn diffuseFunc; // offset 0x10, size 0x4
    enum _GXAttnFn attenuationFunc; // offset 0x14, size 0x4
};
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
// total size: 0x268
struct ENgcRSLightingState {
    // Members
    struct _GXColor ambientColor; // offset 0x0, size 0x4
    struct _GXColor materialColor; // offset 0x4, size 0x4
    struct ENgcRSColorChannelState colorChannel[4]; // offset 0x8, size 0x60
    struct _GXLightObj lights[8]; // offset 0x68, size 0x200
};
enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
// total size: 0x10
struct ENgcRSBlendMode {
    // Members
    enum _GXBlendMode type; // offset 0x0, size 0x4
    enum _GXBlendFactor src_factor; // offset 0x4, size 0x4
    enum _GXBlendFactor dst_factor; // offset 0x8, size 0x4
    enum _GXLogicOp op; // offset 0xC, size 0x4
};
enum _GXTexGenType {
    GX_TG_MTX3x4 = 0,
    GX_TG_MTX2x4 = 1,
    GX_TG_BUMP0 = 2,
    GX_TG_BUMP1 = 3,
    GX_TG_BUMP2 = 4,
    GX_TG_BUMP3 = 5,
    GX_TG_BUMP4 = 6,
    GX_TG_BUMP5 = 7,
    GX_TG_BUMP6 = 8,
    GX_TG_BUMP7 = 9,
    GX_TG_SRTG = 10,
};
enum _GXTexGenSrc {
    GX_TG_POS = 0,
    GX_TG_NRM = 1,
    GX_TG_BINRM = 2,
    GX_TG_TANGENT = 3,
    GX_TG_TEX0 = 4,
    GX_TG_TEX1 = 5,
    GX_TG_TEX2 = 6,
    GX_TG_TEX3 = 7,
    GX_TG_TEX4 = 8,
    GX_TG_TEX5 = 9,
    GX_TG_TEX6 = 10,
    GX_TG_TEX7 = 11,
    GX_TG_TEXCOORD0 = 12,
    GX_TG_TEXCOORD1 = 13,
    GX_TG_TEXCOORD2 = 14,
    GX_TG_TEXCOORD3 = 15,
    GX_TG_TEXCOORD4 = 16,
    GX_TG_TEXCOORD5 = 17,
    GX_TG_TEXCOORD6 = 18,
    GX_TG_COLOR0 = 19,
    GX_TG_COLOR1 = 20,
};
// total size: 0x1C
struct GXTexCoordGen {
    // Members
    enum _GXTexCoordID dst; // offset 0x0, size 0x4
    enum _GXTexGenType func; // offset 0x4, size 0x4
    enum _GXTexGenSrc src; // offset 0x8, size 0x4
    unsigned int mtx; // offset 0xC, size 0x4
    unsigned char normalize; // offset 0x10, size 0x1
    unsigned int postmtx; // offset 0x14, size 0x4
    unsigned char sideProjection; // offset 0x18, size 0x1
};
enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
// total size: 0x18
struct /* @class$41074game_level_unity_cpp */ {
    // Members
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    float nearz; // offset 0x10, size 0x4
    float farz; // offset 0x14, size 0x4
};
union /* @class$41073game_level_unity_cpp */ {
    float vp[6]; // offset 0x0, size 0x18
    // total size: 0x18
    struct /* @class$41074game_level_unity_cpp */ {
        // Members
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float width; // offset 0x8, size 0x4
        float height; // offset 0xC, size 0x4
        float nearz; // offset 0x10, size 0x4
        float farz; // offset 0x14, size 0x4
    } __anon$41075; // offset 0x0, size 0x18
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    float nearz; // offset 0x10, size 0x4
    float farz; // offset 0x14, size 0x4
};
// total size: 0x18
struct ENgcRSViewport {
    // Members
    union { // inferred
        union /* @class$41073game_level_unity_cpp */ {
            float vp[6]; // offset 0x0, size 0x18
            // total size: 0x18
            struct /* @class$41074game_level_unity_cpp */ {
                // Members
                float left; // offset 0x0, size 0x4
                float top; // offset 0x4, size 0x4
                float width; // offset 0x8, size 0x4
                float height; // offset 0xC, size 0x4
                float nearz; // offset 0x10, size 0x4
                float farz; // offset 0x14, size 0x4
            } __anon$41075; // offset 0x0, size 0x18
            float left; // offset 0x0, size 0x4
            float top; // offset 0x4, size 0x4
            float width; // offset 0x8, size 0x4
            float height; // offset 0xC, size 0x4
            float nearz; // offset 0x10, size 0x4
            float farz; // offset 0x14, size 0x4
        } __anon$41077; // offset 0x0, size 0x18
        float vp[6]; // offset 0x0, size 0x18
        // total size: 0x18
        struct /* @class$41074game_level_unity_cpp */ {
            // Members
            float left; // offset 0x0, size 0x4
            float top; // offset 0x4, size 0x4
            float width; // offset 0x8, size 0x4
            float height; // offset 0xC, size 0x4
            float nearz; // offset 0x10, size 0x4
            float farz; // offset 0x14, size 0x4
        } __anon$41075; // offset 0x0, size 0x18
        struct { // inferred
            float left; // offset 0x0, size 0x4
            float top; // offset 0x4, size 0x4
            float width; // offset 0x8, size 0x4
            float height; // offset 0xC, size 0x4
            float nearz; // offset 0x10, size 0x4
            float farz; // offset 0x14, size 0x4
        };
    };
};
// total size: 0x10
struct ENgcRSScissor {
    // Members
    unsigned int left; // offset 0x0, size 0x4
    unsigned int top; // offset 0x4, size 0x4
    unsigned int width; // offset 0x8, size 0x4
    unsigned int height; // offset 0xC, size 0x4
};
enum ENgcRSProjectionType {
    E_NGCRS_PROJRECT = 0,
    E_NGCRS_PROJSCREEN = 1,
    E_NGCRS_PROJNORMAL = 2,
};
// total size: 0x28
struct ENgcRSViewportStack {
    // Members
    struct ENgcRSViewport viewport; // offset 0x0, size 0x18
    struct ENgcRSScissor scissor; // offset 0x18, size 0x10
};
// total size: 0x28
struct ENgcRenderStateStack {
    // Members
    struct ENgcRSZMode zMode; // offset 0x0, size 0xC
    struct ENgcRSAlphaCompareMode alphaCompareMode; // offset 0xC, size 0x14
    unsigned int geometryModes; // offset 0x20, size 0x4
    unsigned int rasterModes; // offset 0x24, size 0x4
};
enum _GXTevStageID {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
    GX_MAX_TEVSTAGE = 16,
};
enum _GXAttr {
    GX_VA_PNMTXIDX = 0,
    GX_VA_TEX0MTXIDX = 1,
    GX_VA_TEX1MTXIDX = 2,
    GX_VA_TEX2MTXIDX = 3,
    GX_VA_TEX3MTXIDX = 4,
    GX_VA_TEX4MTXIDX = 5,
    GX_VA_TEX5MTXIDX = 6,
    GX_VA_TEX6MTXIDX = 7,
    GX_VA_TEX7MTXIDX = 8,
    GX_VA_POS = 9,
    GX_VA_NRM = 10,
    GX_VA_CLR0 = 11,
    GX_VA_CLR1 = 12,
    GX_VA_TEX0 = 13,
    GX_VA_TEX1 = 14,
    GX_VA_TEX2 = 15,
    GX_VA_TEX3 = 16,
    GX_VA_TEX4 = 17,
    GX_VA_TEX5 = 18,
    GX_VA_TEX6 = 19,
    GX_VA_TEX7 = 20,
    GX_POS_MTX_ARRAY = 21,
    GX_NRM_MTX_ARRAY = 22,
    GX_TEX_MTX_ARRAY = 23,
    GX_LIGHT_ARRAY = 24,
    GX_VA_NBT = 25,
    GX_VA_MAX_ATTR = 26,
    GX_VA_NULL = 255,
};
// total size: 0x1224
class ENgcRenderStateCache {
    // Static members
    static int s_vpStackPos; // size: 0x4
    static int s_stackPos; // size: 0x4
    static struct ENgcRSViewportStack s_viewportStack[5]; // size: 0xC8
    static struct ENgcRenderStateStack s_stateStack[9]; // size: 0x168
    static float projMtx[4][4]; // size: 0x40
    static float screenOrthoMtx[4][4]; // size: 0x40
    static float rectOrthoMtx[4][4]; // size: 0x40

    // Members
protected:
    enum _GXPosNrmMtx currentMtx; // offset 0x0, size 0x4
    enum _GXPosNrmMtx _rsPrev_currentMtx; // offset 0x4, size 0x4
    enum _GXAttrType attrType[26]; // offset 0x8, size 0x68
    enum _GXAttrType _rsPrev_attrType[26]; // offset 0x70, size 0x68
    struct ENgcRSTevState tevState; // offset 0xD8, size 0x340
    struct ENgcRSTevState _rsPrev_tevState; // offset 0x418, size 0x340
    struct ENgcRSZMode zMode; // offset 0x758, size 0xC
    struct ENgcRSZMode _rsPrev_zMode; // offset 0x764, size 0xC
    struct ENgcRSAlphaCompareMode alphaCompareMode; // offset 0x770, size 0x14
    struct ENgcRSAlphaCompareMode _rsPrev_alphaCompareMode; // offset 0x784, size 0x14
    struct ENgcRSLightingState lightState; // offset 0x798, size 0x268
    struct ENgcRSLightingState _rsPrev_lightState; // offset 0xA00, size 0x268
    int preReflectNumTevStages; // offset 0xC68, size 0x4
    int _rsPrev_preReflectNumTevStages; // offset 0xC6C, size 0x4
    struct ENgcRSTevStage preReflectTevStage0; // offset 0xC70, size 0x5C
    struct ENgcRSTevStage _rsPrev_preReflectTevStage0; // offset 0xCCC, size 0x5C
    struct ENgcRSBlendMode preReflectBlendMode; // offset 0xD28, size 0x10
    struct ENgcRSBlendMode _rsPrev_preReflectBlendMode; // offset 0xD38, size 0x10
    unsigned int preReflectRasterModes; // offset 0xD48, size 0x4
    unsigned int _rsPrev_preReflectRasterModes; // offset 0xD4C, size 0x4
    int preReflectNumTexGens; // offset 0xD50, size 0x4
    int _rsPrev_preReflectNumTexGens; // offset 0xD54, size 0x4
    struct GXTexCoordGen preReflectTexGen0; // offset 0xD58, size 0x1C
    struct GXTexCoordGen _rsPrev_preReflectTexGen0; // offset 0xD74, size 0x1C
    unsigned char weighted; // offset 0xD90, size 0x1
    unsigned char _rsPrev_weighted; // offset 0xD91, size 0x1
public:
    unsigned int modified; // offset 0xD94, size 0x4
    unsigned int tevModified; // offset 0xD98, size 0x4
    unsigned int lightModified; // offset 0xD9C, size 0x4
    struct ENgcRSBlendMode blendMode; // offset 0xDA0, size 0x10
    struct ENgcRSBlendMode _rsPrev_blendMode; // offset 0xDB0, size 0x10
    unsigned int geometryModes; // offset 0xDC0, size 0x4
    unsigned int _rsPrev_geometryModes; // offset 0xDC4, size 0x4
    unsigned int rasterModes; // offset 0xDC8, size 0x4
    unsigned int _rsPrev_rasterModes; // offset 0xDCC, size 0x4
    unsigned char texGens; // offset 0xDD0, size 0x1
    unsigned char _rsPrev_texGens; // offset 0xDD1, size 0x1
    struct GXTexCoordGen texGen[6]; // offset 0xDD4, size 0xA8
    struct GXTexCoordGen _rsPrev_texGen[6]; // offset 0xE7C, size 0xA8
    enum _GXCullMode cullMode; // offset 0xF24, size 0x4
    enum _GXCullMode _rsPrev_cullMode; // offset 0xF28, size 0x4
    float modelMatrix[4][3][4]; // offset 0xF2C, size 0xC0
    float viewMatrix[3][4]; // offset 0xFEC, size 0x30
    float modelViewMatrix[3][4]; // offset 0x101C, size 0x30
    float textureMatrix[2][3][4]; // offset 0x104C, size 0x60
    float _rsPrev_textureMatrix[2][3][4]; // offset 0x10AC, size 0x60
    float texturePtMatrix[2][3][4]; // offset 0x110C, size 0x60
    float _rsPrev_texturePtMatrix[2][3][4]; // offset 0x116C, size 0x60
    struct ENgcRSViewport viewport; // offset 0x11CC, size 0x18
    struct ENgcRSViewport _rsPrev_viewport; // offset 0x11E4, size 0x18
    struct ENgcRSScissor scissor; // offset 0x11FC, size 0x10
    struct ENgcRSScissor _rsPrev_scissor; // offset 0x120C, size 0x10
    enum ENgcRSProjectionType projType; // offset 0x121C, size 0x4
    enum ENgcRSProjectionType _rsPrev_projType; // offset 0x1220, size 0x4
};
// total size: 0x1C
class NGCRendererTevImpl {
    // Members
    class ENgcRenderStateCache & renderStateCache; // offset 0x0, size 0x4
    struct EShaderRenderPassDef * m_renderPassDefs; // offset 0x4, size 0x4
    class ENgcTexture * * m_pCurrentTextures; // offset 0x8, size 0x4
    class EMat4 * m_texturePtMatrix; // offset 0xC, size 0x4
    unsigned char & m_hasReflection; // offset 0x10, size 0x4
    unsigned char & m_shaderUses2ndUV; // offset 0x14, size 0x4
    unsigned char & m_usesVertexIntensity; // offset 0x18, size 0x4
};
// total size: 0x10
class NGCRendererAAImpl {
    // Static members
    static unsigned char garbageBuffer[]; // size: 0x0
    static unsigned long ANTIALIASING_SCREEN_OVERLAP; // size: 0x4
    static unsigned char kAASamplePatternOn[12][2]; // size: 0x18
    static unsigned char kVerticalFilterOff[7]; // size: 0x7
    static unsigned char kVerticalFilterOn[7]; // size: 0x7

    // Members
    unsigned char m_bCopyPrevFrame; // offset 0x0, size 0x1
    unsigned char m_forceDisabled; // offset 0x1, size 0x1
    struct _GXRenderModeObj & m_renderMode; // offset 0x4, size 0x4
    unsigned char * & m_xFrameBuffer; // offset 0x8, size 0x4
    void * m_prevFrameTexMem; // offset 0xC, size 0x4
};
enum _GXFogType {
    GX_FOG_NONE = 0,
    GX_FOG_PERSP_LIN = 2,
    GX_FOG_PERSP_EXP = 4,
    GX_FOG_PERSP_EXP2 = 5,
    GX_FOG_PERSP_REVEXP = 6,
    GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN = 10,
    GX_FOG_ORTHO_EXP = 12,
    GX_FOG_ORTHO_EXP2 = 13,
    GX_FOG_ORTHO_REVEXP = 14,
    GX_FOG_ORTHO_REVEXP2 = 15,
    GX_FOG_LIN = 2,
    GX_FOG_EXP = 4,
    GX_FOG_EXP2 = 5,
    GX_FOG_REVEXP = 6,
    GX_FOG_REVEXP2 = 7,
};
// total size: 0x30
class NGCRendererFogImpl {
    // Members
    unsigned char m_forceDisabled; // offset 0x0, size 0x1
    float m_intensity; // offset 0x4, size 0x4
    float m_projNearPlane; // offset 0x8, size 0x4
    float m_projFarPlane; // offset 0xC, size 0x4
    enum _GXFogType m_type; // offset 0x10, size 0x4
    float m_startZ; // offset 0x14, size 0x4
    float m_endZ; // offset 0x18, size 0x4
    struct _GXColor m_color; // offset 0x1C, size 0x4
    float m_startZAtZero; // offset 0x20, size 0x4
    float m_endZAtZero; // offset 0x24, size 0x4
    float m_startZAtOne; // offset 0x28, size 0x4
    float m_endZAtOne; // offset 0x2C, size 0x4
};
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
// total size: 0x5860
class ENgcRenderer : public ERenderer {
    // Static members
    static void (ENgcRenderer::* m_jumpTable[77])(void *, void *, struct EDLEntry *); // size: 0x134
    static class EEvent * s_frameEvent; // size: 0x4
    static void * s_frameXfb; // size: 0x4
    static long s_missedVBlanks; // size: 0x4
    static unsigned char s_frameAvailable; // size: 0x1
    static class EMutex s_copyMutex; // size: 0x1C
    static unsigned char s_breakPointSet; // size: 0x1
    static unsigned short s_lastTokenFromGX; // size: 0x2
    static unsigned short s_lastTokenToGX; // size: 0x2
    static enum _GXTexFmt kFrameEffectsBufferFormat; // size: 0x4

    // Members
    unsigned char m_shadowAlpha; // offset 0x33C, size 0x1
    int m_currentBufferIndex; // offset 0x340, size 0x4
    unsigned char * m_xFrameBuffers[2]; // offset 0x344, size 0x8
    unsigned char * m_xFrameBuffer; // offset 0x34C, size 0x4
    int m_xFBSize; // offset 0x350, size 0x4
    int m_xFBPitch; // offset 0x354, size 0x4
    void * m_FifoMem; // offset 0x358, size 0x4
    unsigned int m_lastRetraceCount; // offset 0x35C, size 0x4
    unsigned char m_clear; // offset 0x360, size 0x1
    struct _GXRenderModeObj m_renderMode; // offset 0x364, size 0x3C
    unsigned int m_overrideColor; // offset 0x3A0, size 0x4
    float m_fixedAlpha; // offset 0x3A4, size 0x4
    struct GXFifoObj * m_FifoObj; // offset 0x3A8, size 0x4
    struct _GXColor m_clearColor; // offset 0x3AC, size 0x4
    unsigned int m_clearZ; // offset 0x3B0, size 0x4
    float m_ViewInvXpose[3][4]; // offset 0x3B4, size 0x30
    float m_IdentityMtx[3][4]; // offset 0x3E4, size 0x30
    float m_RectOrthoMtx[4][4]; // offset 0x414, size 0x40
    float m_ScreenOrthoMtx[4][4]; // offset 0x454, size 0x40
    class EMat4 m_mWindow; // offset 0x498, size 0x40
    struct EDLEntry * m_pc; // offset 0x4D8, size 0x4
    unsigned char m_done; // offset 0x4DC, size 0x1
    struct EDLEntry * m_callStack[10]; // offset 0x4E0, size 0x28
    int m_callStackPos; // offset 0x508, size 0x4
    unsigned char m_isUsingShadowTexture; // offset 0x50C, size 0x1
    unsigned char m_isInitialized; // offset 0x50D, size 0x1
    unsigned char m_tevStagesSetupNeeded; // offset 0x50E, size 0x1
    unsigned char m_isLightSetupNeeded; // offset 0x50F, size 0x1
    int m_passCount; // offset 0x510, size 0x4
    struct EMaterial m_material; // offset 0x514, size 0x20
    struct EShaderRenderPassDef m_renderPassDefs[2]; // offset 0x534, size 0x70
    unsigned char m_hasReflection; // offset 0x5A4, size 0x1
    unsigned char m_shaderUses2ndUV; // offset 0x5A5, size 0x1
    unsigned char m_usesVertexIntensity; // offset 0x5A6, size 0x1
    class EMat4 m_texturePtMatrix[2]; // offset 0x5A8, size 0x80
    struct ELights m_lights; // offset 0x628, size 0xF8
    struct EPointLight m_pointLight; // offset 0x720, size 0x20
    unsigned char m_dirLights; // offset 0x740, size 0x1
    unsigned char m_pointLights; // offset 0x741, size 0x1
    class EMat4 m_modelMatrixList[248]; // offset 0x748, size 0x3E00
    int m_modelMatrixCount; // offset 0x4548, size 0x4
    unsigned char m_activeTextures; // offset 0x454C, size 0x1
    class ENgcTexture * m_pCurrentTextures[2]; // offset 0x4550, size 0x8
    class EDL * m_currentDL; // offset 0x4558, size 0x4
    class ENgcShader * m_pShader; // offset 0x455C, size 0x4
    unsigned char m_zTest; // offset 0x4560, size 0x1
    unsigned char m_zMethod; // offset 0x4561, size 0x1
    unsigned char m_zWrite; // offset 0x4562, size 0x1
    unsigned char m_frameEffectsProcessed; // offset 0x4563, size 0x1
    int m_nSyncPerEntity; // offset 0x4564, size 0x4
    float m_bloomThreshold; // offset 0x4568, size 0x4
    float m_bloomIntensity; // offset 0x456C, size 0x4
    void * m_particles; // offset 0x4570, size 0x4
    int m_numParticles; // offset 0x4574, size 0x4
    int m_particleType; // offset 0x4578, size 0x4
    float m_vertexMorphWeightsArray[24]; // offset 0x457C, size 0x60
public:
    unsigned char m_vertexMorphingOnOff; // offset 0x45DC, size 0x1
private:
    class ENgcRenderStateCache gNGCRenderStateCache; // offset 0x45E0, size 0x1224
    class NGCRendererTevImpl m_tevImpl; // offset 0x5804, size 0x1C
    class NGCRendererAAImpl m_aaImpl; // offset 0x5820, size 0x10
    class NGCRendererFogImpl m_fogImpl; // offset 0x5830, size 0x30
};
// total size: 0x40
class LineFade {
    // Members
    class EVec3 m_eyePoint; // offset 0x0, size 0xC
    class EVec3 m_interestPoint; // offset 0xC, size 0xC
    class EVec3 m_eye2Interest; // offset 0x18, size 0xC
    class EVec3 m_eye2InterestRecip; // offset 0x24, size 0xC
    class EVec3 m_interestTestPoint; // offset 0x30, size 0xC
    unsigned char m_isEnabled; // offset 0x3C, size 0x1
};
static class EVec3 vLookAt; // size: 0xC, address: 0x80491410
static class EVec3 vPosition; // size: 0xC, address: 0x8049141C
// total size: 0x70
struct ShadowPlane {
    // Members
    class EVec3 centre; // offset 0x0, size 0xC
    class EVec3 equation; // offset 0xC, size 0xC
    class EVec3 normal; // offset 0x18, size 0xC
    class EVec3 upVector; // offset 0x24, size 0xC
    class EMat4 dropShadow; // offset 0x30, size 0x40
};
// total size: 0xC
struct OrderTableSortReference {
    // Members
    class EOrderTableData * otd; // offset 0x0, size 0x4
    float sortOrderValue1; // offset 0x4, size 0x4
    float sortOrderValue2; // offset 0x8, size 0x4
};
// total size: 0x98
class LevelLightingTuning {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
    float m_dirtyCornerScaler; // offset 0x4, size 0x4
private:
    class EVec3 m_sunPitchYawOffset; // offset 0x8, size 0xC
    class EVec4 m_sunColor; // offset 0x14, size 0x10
    class EVec3 m_moonPitchYawOffset; // offset 0x24, size 0xC
    class EVec4 m_moonColor; // offset 0x30, size 0x10
    class EVec4 m_skySunColor; // offset 0x40, size 0x10
    class EVec4 m_skyAmbientColor; // offset 0x50, size 0x10
    float m_fMaxSkylightGloomIntensity; // offset 0x60, size 0x4
    class EVec4 m_outsideAmbientColor; // offset 0x64, size 0x10
    float m_fMaxOutsideGloomIntensity; // offset 0x74, size 0x4
    float m_shadowIntensity; // offset 0x78, size 0x4
    class EVec4 m_roomAmbientColor; // offset 0x7C, size 0x10
    float m_roomDiffuseRange; // offset 0x8C, size 0x4
    float m_roomDimmer; // offset 0x90, size 0x4
    unsigned char m_isOverrideEnabled; // offset 0x94, size 0x1
    unsigned char m_bOverrideSunMoonPositions; // offset 0x95, size 0x1
    unsigned char m_bApplyCurrentWeatherEffects; // offset 0x96, size 0x1
    unsigned char m_alwaysUpdateFloorLighting; // offset 0x97, size 0x1
};
unsigned char gbDrawUI; // size: 0x1, address: 0x805D865C
unsigned char gbUpdateUI; // size: 0x1, address: 0x805D865D
class LevelLightingTuning g_levelLightingTuning; // size: 0x98, address: 0x80491438
class SimLightingTuning g_simLightingTuning; // size: 0x10, address: 0x804914D0
// total size: 0x10
struct LLNode {
    // Members
    struct LLNode * pNext; // offset 0x0, size 0x4
    struct LLNode * pPrev; // offset 0x4, size 0x4
    void * pData; // offset 0x8, size 0x4
    int nUsrFlags; // offset 0xC, size 0x4
};
// total size: 0x98
struct LL {
    // Members
    int nUsrFlags; // offset 0x0, size 0x4
    char sName[128]; // offset 0x4, size 0x80
    int nNumElements; // offset 0x84, size 0x4
    struct LLNode * pHead; // offset 0x88, size 0x4
    struct LLNode * pTail; // offset 0x8C, size 0x4
    struct LLNode * pTracer; // offset 0x90, size 0x4
    void (* pFreeCB)(void *); // offset 0x94, size 0x4
};
// total size: 0x84
struct _ptableinfo {
    // Members
    char sName[32]; // offset 0x0, size 0x20
    float fProbablitity; // offset 0x20, size 0x4
    char sEmitters[3][32]; // offset 0x24, size 0x60
};
// total size: 0x58C
struct pemitterinfo {
    // Members
    class PMatrix4 LcsWcs; // offset 0x0, size 0x40
    class PVector4 Turbulence; // offset 0x40, size 0x10
    class PVector4 IColor; // offset 0x50, size 0x10
    class PVector4 TColor1; // offset 0x60, size 0x10
    class PVector4 TColor2; // offset 0x70, size 0x10
    class PVector4 FColor; // offset 0x80, size 0x10
    float fClrRatio; // offset 0x90, size 0x4
    float fClrRatio2; // offset 0x94, size 0x4
    float fLifeMin; // offset 0x98, size 0x4
    float fLifeVar; // offset 0x9C, size 0x4
    float fVelMin; // offset 0xA0, size 0x4
    float fVelVar; // offset 0xA4, size 0x4
    float fMassVar; // offset 0xA8, size 0x4
    float fIScale; // offset 0xAC, size 0x4
    float fTScale; // offset 0xB0, size 0x4
    float fFScale; // offset 0xB4, size 0x4
    float fSclRatio; // offset 0xB8, size 0x4
    float fSpinVar; // offset 0xBC, size 0x4
    float fDrag; // offset 0xC0, size 0x4
    float fELife; // offset 0xC4, size 0x4
    float fERate; // offset 0xC8, size 0x4
    float fGravity; // offset 0xCC, size 0x4
    float fPlaneW; // offset 0xD0, size 0x4
    float fPlaneH; // offset 0xD4, size 0x4
    float fConeRad; // offset 0xD8, size 0x4
    char sTexName[32]; // offset 0xDC, size 0x20
    float nMaxParticles; // offset 0xFC, size 0x4
    int nEVol; // offset 0x100, size 0x4
    unsigned int DataSetMax; // offset 0x104, size 0x4
    unsigned int nFlags; // offset 0x108, size 0x4
    float fScaleMulX; // offset 0x10C, size 0x4
    float fScaleMulY; // offset 0x110, size 0x4
    float fScaleMulZ; // offset 0x114, size 0x4
    float fRot; // offset 0x118, size 0x4
    float fCellU; // offset 0x11C, size 0x4
    float fCellV; // offset 0x120, size 0x4
    float fDataSetRate; // offset 0x124, size 0x4
    float fCellOrgU; // offset 0x128, size 0x4
    float fCellOrgV; // offset 0x12C, size 0x4
    float fOOCR; // offset 0x130, size 0x4
    float fOOCR2MinusCR; // offset 0x134, size 0x4
    float fOOOneMinusCR2; // offset 0x138, size 0x4
    float fOOSR; // offset 0x13C, size 0x4
    float fOOOneMinusSR; // offset 0x140, size 0x4
    float fEInterval; // offset 0x144, size 0x4
    class PVector4 AABBMin; // offset 0x148, size 0x10
    class PVector4 AABBMax; // offset 0x158, size 0x10
    unsigned int nTableInfo; // offset 0x168, size 0x4
    struct _ptableinfo TableInfo[8]; // offset 0x16C, size 0x420
};
// total size: 0x50
struct particle {
    // Members
    struct LLNode * pNext; // offset 0x0, size 0x4
    struct LLNode * pPrev; // offset 0x4, size 0x4
    void * pad[2]; // offset 0x8, size 0x8
    class PVector4 Pos; // offset 0x10, size 0x10
    class PVector4 Vel; // offset 0x20, size 0x10
    class PVector4 PrevPos; // offset 0x30, size 0x10
    class PVector4 PPrevPos; // offset 0x40, size 0x10
};
// total size: 0x4
struct psystem {
    // Members
    struct LL * pLL; // offset 0x0, size 0x4
};
// total size: 0xC0
struct pemitter {
    // Members
    class PMatrix4 LcsWcs; // offset 0x0, size 0x40
    class PVector4 vLocalGravity; // offset 0x40, size 0x10
    unsigned int nFlags; // offset 0x50, size 0x4
    struct LL * pLL; // offset 0x54, size 0x4
    float fTime; // offset 0x58, size 0x4
    float fFracP; // offset 0x5C, size 0x4
    char sName[28]; // offset 0x60, size 0x1C
    int fDeferDeleteTimer; // offset 0x7C, size 0x4
    void * pTex; // offset 0x80, size 0x4
    float fTurbulanceCtr; // offset 0x84, size 0x4
    struct pemitterinfo * pInfo; // offset 0x88, size 0x4
    struct LLNode * pParentNode; // offset 0x8C, size 0x4
    void (* pSubmitCB)(struct particle *, class PVector4 *, float, float, class PVector4 *, void *); // offset 0x90, size 0x4
    void (* pPreProcessCB)(void *); // offset 0x94, size 0x4
    void (* pProcessCB)(void *); // offset 0x98, size 0x4
    void (* pCreateCB)(struct pemitter *, class PVector4 *, class PVector4 *); // offset 0x9C, size 0x4
    void * pCBData; // offset 0xA0, size 0x4
    void (* pPostDestroyCB)(void *); // offset 0xA4, size 0x4
    void * pCBPostDestroyData; // offset 0xA8, size 0x4
    void (* pIntervalCB)(void *); // offset 0xAC, size 0x4
    void * pCBIntervalData; // offset 0xB0, size 0x4
    unsigned int iCullStatus; // offset 0xB4, size 0x4
    struct psystem * pParentPSystem; // offset 0xB8, size 0x4
    float fScale; // offset 0xBC, size 0x4
};
// total size: 0xC4
class Emitter : public EInstance {
    // Members
    struct pemitter * m_pEmitter; // offset 0x78, size 0x4
    class EVec3 m_vSortPos; // offset 0x7C, size 0xC
public:
    class EOrderTableData m_otd; // offset 0x88, size 0x3C
};
// total size: 0x40
struct /* @class$42385game_level_unity_cpp */ {
    // Members
    float m00; // offset 0x0, size 0x4
    float m01; // offset 0x4, size 0x4
    float m02; // offset 0x8, size 0x4
    float m03; // offset 0xC, size 0x4
    float m10; // offset 0x10, size 0x4
    float m11; // offset 0x14, size 0x4
    float m12; // offset 0x18, size 0x4
    float m13; // offset 0x1C, size 0x4
    float m20; // offset 0x20, size 0x4
    float m21; // offset 0x24, size 0x4
    float m22; // offset 0x28, size 0x4
    float m23; // offset 0x2C, size 0x4
    float m30; // offset 0x30, size 0x4
    float m31; // offset 0x34, size 0x4
    float m32; // offset 0x38, size 0x4
    float m33; // offset 0x3C, size 0x4
};
union /* @class$42384game_level_unity_cpp */ {
    float m[4][4]; // offset 0x0, size 0x40
    // total size: 0x40
    struct /* @class$42385game_level_unity_cpp */ {
        // Members
        float m00; // offset 0x0, size 0x4
        float m01; // offset 0x4, size 0x4
        float m02; // offset 0x8, size 0x4
        float m03; // offset 0xC, size 0x4
        float m10; // offset 0x10, size 0x4
        float m11; // offset 0x14, size 0x4
        float m12; // offset 0x18, size 0x4
        float m13; // offset 0x1C, size 0x4
        float m20; // offset 0x20, size 0x4
        float m21; // offset 0x24, size 0x4
        float m22; // offset 0x28, size 0x4
        float m23; // offset 0x2C, size 0x4
        float m30; // offset 0x30, size 0x4
        float m31; // offset 0x34, size 0x4
        float m32; // offset 0x38, size 0x4
        float m33; // offset 0x3C, size 0x4
    } mat; // offset 0x0, size 0x40
};
// total size: 0x40
class PMatrix4 {
    // Members
public:
    union { // inferred
        union /* @class$42384game_level_unity_cpp */ {
            float m[4][4]; // offset 0x0, size 0x40
            // total size: 0x40
            struct /* @class$42385game_level_unity_cpp */ {
                // Members
                float m00; // offset 0x0, size 0x4
                float m01; // offset 0x4, size 0x4
                float m02; // offset 0x8, size 0x4
                float m03; // offset 0xC, size 0x4
                float m10; // offset 0x10, size 0x4
                float m11; // offset 0x14, size 0x4
                float m12; // offset 0x18, size 0x4
                float m13; // offset 0x1C, size 0x4
                float m20; // offset 0x20, size 0x4
                float m21; // offset 0x24, size 0x4
                float m22; // offset 0x28, size 0x4
                float m23; // offset 0x2C, size 0x4
                float m30; // offset 0x30, size 0x4
                float m31; // offset 0x34, size 0x4
                float m32; // offset 0x38, size 0x4
                float m33; // offset 0x3C, size 0x4
            } mat; // offset 0x0, size 0x40
        } __anon$42386; // offset 0x0, size 0x40
        float m[4][4]; // offset 0x0, size 0x40
        // total size: 0x40
        struct /* @class$42385game_level_unity_cpp */ {
            // Members
            float m00; // offset 0x0, size 0x4
            float m01; // offset 0x4, size 0x4
            float m02; // offset 0x8, size 0x4
            float m03; // offset 0xC, size 0x4
            float m10; // offset 0x10, size 0x4
            float m11; // offset 0x14, size 0x4
            float m12; // offset 0x18, size 0x4
            float m13; // offset 0x1C, size 0x4
            float m20; // offset 0x20, size 0x4
            float m21; // offset 0x24, size 0x4
            float m22; // offset 0x28, size 0x4
            float m23; // offset 0x2C, size 0x4
            float m30; // offset 0x30, size 0x4
            float m31; // offset 0x34, size 0x4
            float m32; // offset 0x38, size 0x4
            float m33; // offset 0x3C, size 0x4
        } mat; // offset 0x0, size 0x40
    };
};
class ERC * g_pRC; // size: 0x4, address: 0x805DB77C
static class EMat4 g_DefaultFacingMat; // size: 0x40, address: 0x804914E0
static class EVec4 UnitVec; // size: 0x10, address: 0x80491520
// total size: 0x10
struct /* @class$42380game_level_unity_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
union /* @class$42379game_level_unity_cpp */ {
    float v[4]; // offset 0x0, size 0x10
    // total size: 0x10
    struct /* @class$42380game_level_unity_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        float w; // offset 0xC, size 0x4
    } vec; // offset 0x0, size 0x10
};
// total size: 0x10
class PVector4 {
    // Members
public:
    union { // inferred
        union /* @class$42379game_level_unity_cpp */ {
            float v[4]; // offset 0x0, size 0x10
            // total size: 0x10
            struct /* @class$42380game_level_unity_cpp */ {
                // Members
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
                float z; // offset 0x8, size 0x4
                float w; // offset 0xC, size 0x4
            } vec; // offset 0x0, size 0x10
        } __anon$42381; // offset 0x0, size 0x10
        float v[4]; // offset 0x0, size 0x10
        // total size: 0x10
        struct /* @class$42380game_level_unity_cpp */ {
            // Members
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float w; // offset 0xC, size 0x4
        } vec; // offset 0x0, size 0x10
    };
};
class MidLotInstanceFactory * s_pSingleton; // size: 0x4, address: 0x805DB780
// total size: 0x1
class MidLotInstanceFactory {
    // Static members
    static class MidLotInstanceFactory * s_pSingleton; // size: 0x4
};
class EVec3 kDefaultStageCameraPos; // size: 0xC, address: 0x80491530
class EVec3 kDefaultStageCameraLookAt; // size: 0xC, address: 0x8049153C
class EVec3 kDebugOffset; // size: 0xC, address: 0x80491548
class EVec3 kDefaultOffset; // size: 0xC, address: 0x80491554
class EVec3 kCatamaranOffset; // size: 0xC, address: 0x80491560
float kCatDuration[7]; // size: 0x1C, address: 0x8041B248
class EVec3 kCatSequenceSimLocs[7][6]; // size: 0x1F8, address: 0x80491570
char * kCatSequenceSimAnimations[7][6]; // size: 0xA8, address: 0x804294D0
class EVec3 kCatCameraPos[7]; // size: 0x54, address: 0x80491768
class EVec3 kCatCameraLookAt[7]; // size: 0x54, address: 0x804917BC
unsigned int kCatBackgroundOpening[3]; // size: 0xC, address: 0x8041B264
unsigned int kCatBackgroundPushing[3]; // size: 0xC, address: 0x8041B270
unsigned int kCatBackgroundBoat[3]; // size: 0xC, address: 0x8041B27C
unsigned int kCatBackgroundBoat2[3]; // size: 0xC, address: 0x8041B288
unsigned int kCatBackgroundBoat3[3]; // size: 0xC, address: 0x8041B294
unsigned int kCatBackgroundHome[3]; // size: 0xC, address: 0x8041B2A0
unsigned int kCatBackgroundBills[3]; // size: 0xC, address: 0x8041B2AC
unsigned int kCatSamples[7]; // size: 0x1C, address: 0x8041B2B8
class EVec3 kCatamaranLocator; // size: 0xC, address: 0x80491810
float kRadioDuration[7]; // size: 0x1C, address: 0x8041B2D4
class EVec3 kRadioSequenceSimLocs[7][6]; // size: 0x1F8, address: 0x80491820
char * kRadioSequenceSimAnimations[7][6]; // size: 0xA8, address: 0x80429588
class EVec3 kRadioCameraPos[7]; // size: 0x54, address: 0x80491A18
class EVec3 kRadioCameraLookAt[7]; // size: 0x54, address: 0x80491A6C
unsigned int kRadioBackgroundOpening[3]; // size: 0xC, address: 0x8041B2F0
unsigned int kRadioBackgroundInterior[3]; // size: 0xC, address: 0x8041B2FC
unsigned int kRadioBackgroundBoat[3]; // size: 0xC, address: 0x8041B308
unsigned int kRadioBackgroundWaving[3]; // size: 0xC, address: 0x8041B314
unsigned int kRadioBackgroundCrew[3]; // size: 0xC, address: 0x8041B320
unsigned int kRadioBackgroundHome[3]; // size: 0xC, address: 0x8041B32C
unsigned int kRadioBackgroundBills[3]; // size: 0xC, address: 0x8041B338
unsigned int kRadioSamples[7]; // size: 0x1C, address: 0x8041B344
unsigned int kCommonModelTable[3]; // size: 0xC, address: 0x8041B360
unsigned int kCommonModelChair[3]; // size: 0xC, address: 0x8041B36C
unsigned int kCommonModelBillprop[3]; // size: 0xC, address: 0x8041B378
unsigned int kCommonModelBills1[3]; // size: 0xC, address: 0x8041B384
unsigned int kCommonModelBills2[3]; // size: 0xC, address: 0x8041B390
unsigned int kCommonModelBills3[3]; // size: 0xC, address: 0x8041B39C
unsigned int kCommonModelBills4[3]; // size: 0xC, address: 0x8041B3A8
class SequenceManager * s_pSequenceManager; // size: 0x4, address: 0x805DB784
enum eSequenceCat {
    eSEQUENCE_CAT_OPENING = 0,
    eSEQUENCE_CAT_PUSHING = 1,
    eSEQUENCE_CAT_BOAT = 2,
    eSEQUENCE_CAT_BOAT2 = 3,
    eSEQUENCE_CAT_BOAT3 = 4,
    eSEQUENCE_CAT_HOME = 5,
    eSEQUENCE_CAT_BILLS = 6,
    eSEQUENCE_CAT_COUNT = 7,
};
enum eSequenceRadio {
    eSEQUENCE_RADIO_OPENING = 0,
    eSEQUENCE_RADIO_INTERIOR = 1,
    eSEQUENCE_RADIO_BOAT = 2,
    eSEQUENCE_RADIO_WAVING = 3,
    eSEQUENCE_RADIO_CREW = 4,
    eSEQUENCE_RADIO_HOME = 5,
    eSEQUENCE_RADIO_BILLS = 6,
    eSEQUENCE_RADIO_COUNT = 7,
};
// total size: 0x20
class CachedSimRenderManager {
    // Members
    class CachedSimRenderer * m_SimCacheRenderers[6]; // offset 0x0, size 0x18
    unsigned char m_bSimCacheRenderToggles[6]; // offset 0x18, size 0x6
    unsigned char m_bUseBoneRendering; // offset 0x1E, size 0x1
};
// total size: 0xAC
class EndGameCreditsManager : public UIObjectBase {
    // Members
    class CRDTarget * m_pCRDTarget; // offset 0xA4, size 0x4
    unsigned char m_bCreditsShowing; // offset 0xA8, size 0x1
};
// total size: 0x4A4
class SequenceManager {
    // Static members
    static class SequenceManager * s_pSequenceManager; // size: 0x4
    static int kStaticCatamaranPropBone; // size: 0x4
    static int kStaticSimLeftPropBone; // size: 0x4
    static int kStaticSimRightPropBone; // size: 0x4
    static unsigned int kCommonModelBills4[3]; // size: 0xC
    static unsigned int kCommonModelBills3[3]; // size: 0xC
    static unsigned int kCommonModelBills2[3]; // size: 0xC
    static unsigned int kCommonModelBills1[3]; // size: 0xC
    static unsigned int kCommonModelBillprop[3]; // size: 0xC
    static unsigned int kCommonModelChair[3]; // size: 0xC
    static unsigned int kCommonModelTable[3]; // size: 0xC
    static unsigned int kRadioSamples[7]; // size: 0x1C
    static unsigned int kRadioBackgroundBills[3]; // size: 0xC
    static unsigned int kRadioBackgroundHome[3]; // size: 0xC
    static unsigned int kRadioBackgroundCrew[3]; // size: 0xC
    static unsigned int kRadioBackgroundWaving[3]; // size: 0xC
    static unsigned int kRadioBackgroundBoat[3]; // size: 0xC
    static unsigned int kRadioBackgroundInterior[3]; // size: 0xC
    static unsigned int kRadioBackgroundOpening[3]; // size: 0xC
    static class EVec3 kRadioCameraLookAt[7]; // size: 0x54
    static class EVec3 kRadioCameraPos[7]; // size: 0x54
    static char * kRadioSequenceSimAnimations[7][6]; // size: 0xA8
    static class EVec3 kRadioSequenceSimLocs[7][6]; // size: 0x1F8
    static float kRadioDuration[7]; // size: 0x1C
    static class EVec3 kCatamaranLocator; // size: 0xC
    static unsigned int kCatamaranAltAnimation; // size: 0x4
    static unsigned int kCatSamples[7]; // size: 0x1C
    static unsigned int kCatBackgroundBills[3]; // size: 0xC
    static unsigned int kCatBackgroundHome[3]; // size: 0xC
    static unsigned int kCatBackgroundBoat3[3]; // size: 0xC
    static unsigned int kCatBackgroundBoat2[3]; // size: 0xC
    static unsigned int kCatBackgroundBoat[3]; // size: 0xC
    static unsigned int kCatBackgroundPushing[3]; // size: 0xC
    static unsigned int kCatBackgroundOpening[3]; // size: 0xC
    static class EVec3 kCatCameraLookAt[7]; // size: 0x54
    static class EVec3 kCatCameraPos[7]; // size: 0x54
    static char * kCatSequenceSimAnimations[7][6]; // size: 0xA8
    static class EVec3 kCatSequenceSimLocs[7][6]; // size: 0x1F8
    static float kCatDuration[7]; // size: 0x1C
    static class EVec3 kDebugOffset; // size: 0xC
    static class EVec3 kCatamaranOffset; // size: 0xC
    static class EVec3 kDefaultOffset; // size: 0xC
    static class EVec3 kDefaultStageCameraLookAt; // size: 0xC
    static class EVec3 kDefaultStageCameraPos; // size: 0xC
    static float kDefaultStageDuration; // size: 0x4
    static float kFadeInTime; // size: 0x4
    static float kFadeOutTime; // size: 0x4

    // Members
    enum eSequenceType m_eCurrentSequence; // offset 0x0, size 0x4
    float m_fCurrentStageDuration; // offset 0x4, size 0x4
    enum eSequenceCat m_eSequenceCatCurrent; // offset 0x8, size 0x4
    enum eSequenceRadio m_eSequenceRadioCurrent; // offset 0xC, size 0x4
    class Fader m_Fader; // offset 0x10, size 0x10
    class CachedSimRenderManager m_CachedSimRenderer; // offset 0x20, size 0x20
    class UIDialog m_UIDialog; // offset 0x40, size 0xA0
    enum eDialogNavOptions m_DialogNavOption; // offset 0xE0, size 0x4
    class EndGameCreditsManager m_CreditsManager; // offset 0xE4, size 0xAC
    class ERModel * m_pBackgroundModel[2]; // offset 0x190, size 0x8
    class ERCharacter * m_pBackgroundCharacter[2]; // offset 0x198, size 0x8
    class ERAnim * m_pBackgroundAnimation[2]; // offset 0x1A0, size 0x8
    struct MidLotObject m_backgroundObjectData[2]; // offset 0x1A8, size 0x78
    class EMidLotInstance * m_pBackgroundInstance[2]; // offset 0x220, size 0x8
    unsigned int m_iCurrentBackgroundIndex; // offset 0x228, size 0x4
    unsigned char m_bBackgroundLoadNeeded; // offset 0x22C, size 0x1
    unsigned char m_bLoadInProgress[2]; // offset 0x22D, size 0x2
    class ERModel * m_pCatamaranModel; // offset 0x230, size 0x4
    class ERCharacter * m_pCatamaranCharacter; // offset 0x234, size 0x4
    class ERAnim * m_pCatamaranAnimation; // offset 0x238, size 0x4
    struct MidLotObject m_catamaranObjectData; // offset 0x23C, size 0x3C
    class EMidLotInstance * m_pCatamaranInstance; // offset 0x278, size 0x4
    unsigned char m_bIsCatamaranLoadNeeded; // offset 0x27C, size 0x1
    unsigned char m_bCatamaranLoadInProgress; // offset 0x27D, size 0x1
    class ERModel * m_pCommonModels[7]; // offset 0x280, size 0x1C
    class ERCharacter * m_pCommonCharacters[7]; // offset 0x29C, size 0x1C
    class ERAnim * m_pCommonAnimations[7]; // offset 0x2B8, size 0x1C
    struct MidLotObject m_commonObjectData[7]; // offset 0x2D4, size 0x1A4
    class EMidLotInstance * m_pCommonInstances[7]; // offset 0x478, size 0x1C
    unsigned char m_bCommonObjectLoadNeeded; // offset 0x494, size 0x1
    unsigned char m_bCommonObjectLoadInProgress[7]; // offset 0x495, size 0x7
    unsigned int m_filterId; // offset 0x49C, size 0x4
    unsigned char m_bPauseSequence; // offset 0x4A0, size 0x1
    unsigned char m_bCameraResetNeeded; // offset 0x4A1, size 0x1
};
enum eSequenceType {
    eSEQUENCE_NONE = 0,
    eSEQUENCE_CAPSIZING = 1,
    eSEQUENCE_CATAMARAN = 2,
    eSEQUENCE_RADIORESCUE = 3,
    eSEQUENCE_COUNT = 4,
};
enum eDialogNavOptions {
    DIALOG_NAV_NONE = 0,
    DIALOG_NAV_RETURN_TO_ISLAND = 1,
};
// total size: 0x14
class CBMemberTranslator0 : public CBFunctor0 {};
// total size: 0x14
class CBMemberTranslator1 : public CBFunctor1 {};
enum eCommonModels {
    eCOMMON_TABLE = 0,
    eCOMMON_CHAIR = 1,
    eCOMMON_BILLPROP = 2,
    eCOMMON_BILLS1 = 3,
    eCOMMON_BILLS2 = 4,
    eCOMMON_BILLS3 = 5,
    eCOMMON_BILLS4 = 6,
    eCOMMON_COUNT = 7,
};
// total size: 0xE0
struct {} __vt__7Emitter; // size: 0xE0, address: 0x80429710
// total size: 0xE8
struct {} __vt__16EIStaticSubModel; // size: 0xE8, address: 0x804297F0
// total size: 0xC
struct {} __vt__19LevelLightingTuning; // size: 0xC, address: 0x804298D8
// total size: 0xFC
struct {} __vt__11EISpotLight; // size: 0xFC, address: 0x804298E4
// total size: 0xFC
struct {} __vt__15EIPointAmbLight; // size: 0xFC, address: 0x804299E0
// total size: 0x100
struct {} __vt__18EIPortalPointLight; // size: 0x100, address: 0x80429AE0
// total size: 0x48
struct {} __vt__7ERLevel; // size: 0x48, address: 0x80429BE0
// total size: 0x4C
struct {} __vt__16WallPostInstance; // size: 0x4C, address: 0x80429C28
// total size: 0xC
struct {} __vt__18WallPostCollection; // size: 0xC, address: 0x80429C74
// total size: 0xC
struct {} __vt__15WallPostStorage; // size: 0xC, address: 0x80429C80
// total size: 0x34
struct {} __vt__13ELevelManager; // size: 0x34, address: 0x80429C8C
// total size: 0x100
struct {} __vt__10EIAmbLight; // size: 0x100, address: 0x80429CC0
// total size: 0xFC
struct {} __vt__10EIDirLight; // size: 0xFC, address: 0x80429DC0
// total size: 0xFC
struct {} __vt__12EIPointLight; // size: 0xFC, address: 0x80429EBC
// total size: 0xFC
struct {} __vt__7EILight; // size: 0xFC, address: 0x80429FB8
// total size: 0xF0
struct {} __vt__13EIStaticModel; // size: 0xF0, address: 0x8042A0B8
// total size: 0x4C
struct {} __vt__12TreeInstance; // size: 0x4C, address: 0x8042A1A8
// total size: 0x54
struct {} __vt__14BranchInstance; // size: 0x54, address: 0x8042A1F4
// total size: 0x4C
struct {} __vt__15EMidLotInstance; // size: 0x4C, address: 0x8042A248
// total size: 0xE0
struct {} __vt__14EIGameInstance; // size: 0xE0, address: 0x8042A298
// total size: 0xE0
struct {} __vt__9EInstance; // size: 0xE0, address: 0x8042A378
// total size: 0x24
struct {} __vt__13EBaseInstance; // size: 0x24, address: 0x8042A458
// total size: 0x2C
struct {} __vt__9EStorable; // size: 0x2C, address: 0x8042A47C
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class EMidLotInstance * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct MidLotObject * mIterator; // offset 0x0, size 0x4
};
// total size: 0xD44
class ECharacterManager : public EResourceManager {};
// total size: 0x268
class ENgcGraphics : public EGraphics {
    // Members
    class ETexture * m_shadowMapTexture; // offset 0x25C, size 0x4
    class EShader * m_pClearZShader; // offset 0x260, size 0x4
};
enum EffectState {
    kNotRunning = 1,
    kFadingIn = 2,
    kRunning = 4,
    kFadingOut = 8,
};
// total size: 0x14
class FrameEffect {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    float m_fadeInTime; // offset 0x4, size 0x4
    float m_fadeOutTime; // offset 0x8, size 0x4
private:
    float m_elapsedTime; // offset 0xC, size 0x4
    enum EffectState m_effectState; // offset 0x10, size 0x4
};
// total size: 0xC
struct MotionBlurSettings {
    // Members
    float m_colorOffset; // offset 0x0, size 0x4
    float m_previousFrameBlendAmount; // offset 0x4, size 0x4
    int m_downSampleLevel; // offset 0x8, size 0x4
};
// total size: 0x38
class MotionBlur : public FrameEffect {
    // Members
protected:
    struct MotionBlurSettings m_targetSettings; // offset 0x14, size 0xC
    struct MotionBlurSettings m_currentSettings; // offset 0x20, size 0xC
    struct MotionBlurSettings m_interpolationStartSettings; // offset 0x2C, size 0xC
};
// total size: 0x2C
struct BloomSettings {
    // Members
    float m_frameAmp; // offset 0x0, size 0x4
    float m_bloomThreshold; // offset 0x4, size 0x4
    float m_bloomAmp; // offset 0x8, size 0x4
    float m_bloomFrameBlends[4][2]; // offset 0xC, size 0x20
};
// total size: 0x98
class Bloom : public FrameEffect {
    // Members
protected:
    struct BloomSettings m_targetSettings; // offset 0x14, size 0x2C
    struct BloomSettings m_currentSettings; // offset 0x40, size 0x2C
    struct BloomSettings m_interpolationStartSettings; // offset 0x6C, size 0x2C
};
// total size: 0x14
struct DepthOfFieldSettings {
    // Members
    int m_downSampleLevel; // offset 0x0, size 0x4
    class EVec3 m_tint; // offset 0x4, size 0xC
    float m_blurFactor; // offset 0x10, size 0x4
};
// total size: 0x50
class DepthOfField : public FrameEffect {
    // Members
protected:
    struct DepthOfFieldSettings m_targetSettings; // offset 0x14, size 0x14
    struct DepthOfFieldSettings m_currentSettings; // offset 0x28, size 0x14
    struct DepthOfFieldSettings m_interpolationStartSettings; // offset 0x3C, size 0x14
};
// total size: 0xC
class FrameEffectsManager {
    // Members
    class MotionBlur * m_motionBlurObject; // offset 0x0, size 0x4
    class Bloom * m_bloomObject; // offset 0x4, size 0x4
    class DepthOfField * m_depthOfFieldObject; // offset 0x8, size 0x4
};

