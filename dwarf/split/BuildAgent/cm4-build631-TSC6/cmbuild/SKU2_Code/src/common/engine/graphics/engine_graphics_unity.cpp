/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\engine_graphics_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80283568 -> 0x80283568
*/
static float kBlendZRotationCutoff; // size: 0x4, address: 0x805DBF08
struct EACNodeState tempNodeStates[3][128]; // size: 0x6000, address: 0x804F97E0
float tempMorphWeightStates[3][24]; // size: 0x120, address: 0x804FF7E0
float kEACDefaultBlendTime; // size: 0x4, address: 0x805DA350
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
static class EMat4 unavailable; // size: 0x40, address: 0x804FF900
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804FF940
class ETypeInfo * gpTypeInfo_EAnimNodeDataPos; // size: 0x4, address: 0x805DBF10
// total size: 0x28
class EDebugVector {
    // Members
public:
    class EVec3 vStart; // offset 0x0, size 0xC
    class EVec3 vEnd; // offset 0xC, size 0xC
    class EVec4 vColor; // offset 0x18, size 0x10
};
// total size: 0x20
class EDebugSphere {
    // Members
public:
    class EVec3 vCenter; // offset 0x0, size 0xC
    float rad; // offset 0xC, size 0x4
    class EVec4 vColor; // offset 0x10, size 0x10
};
// total size: 0x48
class EDebugAxis {
    // Members
public:
    class EMat4 mOrient; // offset 0x0, size 0x40
    float size; // offset 0x40, size 0x4
};
// total size: 0x28
class EDebugWireBox {
    // Members
public:
    class EBound3 bbox; // offset 0x0, size 0x18
    class EVec4 vColor; // offset 0x18, size 0x10
};
// total size: 0x5D8
class EDebugPrim {
    // Members
protected:
    int m_nVectors; // offset 0x0, size 0x4
    class EDebugVector m_vectors[8]; // offset 0x4, size 0x140
    int m_nSpheres; // offset 0x144, size 0x4
    class EDebugSphere m_spheres[8]; // offset 0x148, size 0x100
    int m_nAxes; // offset 0x248, size 0x4
    class EDebugAxis m_axes[8]; // offset 0x250, size 0x240
    int m_nWireBoxes; // offset 0x490, size 0x4
    class EDebugWireBox m_wireboxes[8]; // offset 0x494, size 0x140
};
class EDebugPrim _debugprim; // size: 0x5D8, address: 0x804FF968
unsigned char g_dlPoolBuffer[67664]; // size: 0x10850, address: 0x804FFF40
class ProtectedAllocPool g_poolDL; // size: 0x38, address: 0x805107A0
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x805107D8
class ETypeInfo * gpTypeInfo_EFontCharacter; // size: 0x4, address: 0x805DBF14
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80510800
class ETypeInfo * gpTypeInfo_EFontPage; // size: 0x4, address: 0x805DBF18
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80510828
class ETypeInfo * gpTypeInfo_EFontSize; // size: 0x4, address: 0x805DBF1C
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80510850
class ETypeInfo * gpTypeInfo_EFontData; // size: 0x4, address: 0x805DBF20
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x80510878
class ETypeInfo * gpTypeInfo_EMorphWeightChannelNodeDataPos; // size: 0x4, address: 0x805DBF24
class DepthFade g_depthFade; // size: 0x38, address: 0x805108B0
// total size: 0x8
struct EDLEntryCommandU32 {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char db[3]; // offset 0x1, size 0x3
    unsigned int dw[1]; // offset 0x4, size 0x4
};
// total size: 0x8
struct EDLEntryCommandU16andU32 {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char db[1]; // offset 0x1, size 0x1
    unsigned short dn[1]; // offset 0x2, size 0x2
    unsigned int dw[1]; // offset 0x4, size 0x4
};
// total size: 0x8
struct EDLEntryCommandU8 {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char db[3]; // offset 0x1, size 0x3
    unsigned char db2[4]; // offset 0x4, size 0x4
};
// total size: 0x8
struct EDLEntryCommandF32 {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char db[3]; // offset 0x1, size 0x3
    float df[1]; // offset 0x4, size 0x4
};
// total size: 0x8
struct EDLEntryCommandU8andU32 {
    // Members
    unsigned char command; // offset 0x0, size 0x1
    unsigned char db[3]; // offset 0x1, size 0x3
    unsigned int dw[1]; // offset 0x4, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct EShaderUpdate * m_pHead; // offset 0x0, size 0x4
    struct EShaderUpdate * m_pTail; // offset 0x4, size 0x4
};
class TLinkedList m_updateList; // size: 0x8, address: 0x805DBF28
class EMutex m_updateListMutex; // size: 0x1C, address: 0x805108F4
class EShader * m_gLastShaderSet; // size: 0x4, address: 0x805DBF30
// total size: 0xC
class TArray {
    // Members
protected:
    class ESubModelShader * * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
static int _ngcStatNumStrips8bit; // size: 0x4, address: 0x805DBF34
static int _ngcStatSavingsFrom8bitIndices; // size: 0x4, address: 0x805DBF38
static int _ngcStatNumStripsTotal; // size: 0x4, address: 0x805DBF3C
static int _ngcStatNumStripsFixedPoint; // size: 0x4, address: 0x805DBF40
static int _ngcStatSavingsFromCollapsingArrays; // size: 0x4, address: 0x805DBF44
// total size: 0x10
struct _GDLObj {
    // Members
    unsigned char * start; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned char * ptr; // offset 0x8, size 0x4
    unsigned char * top; // offset 0xC, size 0x4
};
enum _GXVtxFmt {
    GX_VTXFMT0 = 0,
    GX_VTXFMT1 = 1,
    GX_VTXFMT2 = 2,
    GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4,
    GX_VTXFMT5 = 5,
    GX_VTXFMT6 = 6,
    GX_VTXFMT7 = 7,
    GX_MAX_VTXFMT = 8,
};
int _iVideoMode; // size: 0x4, address: 0x805DEE9C
class EWindow * m_pCurrentWindow; // size: 0x4, address: 0x805DBF48
class E3DWindow * m_pCurrent3DWindow; // size: 0x4, address: 0x805DBF4C
class EVec3 m_globalScale; // size: 0xC, address: 0x80510910
class EVec3 m_globalOffset; // size: 0xC, address: 0x8051091C
// total size: 0x10
struct poolnodeheader {
    // Members
    struct poolnodeheader * pNext; // offset 0x0, size 0x4
    struct poolnodeheader * pPrev; // offset 0x4, size 0x4
    void * pad[2]; // offset 0x8, size 0x8
};
// total size: 0x20
struct pool {
    // Members
    int nSize; // offset 0x0, size 0x4
    int nNodes; // offset 0x4, size 0x4
    int nUsed; // offset 0x8, size 0x4
    struct poolnodeheader * pHead; // offset 0xC, size 0x4
    struct poolnodeheader * pUsed; // offset 0x10, size 0x4
    int pad[3]; // offset 0x14, size 0xC
};
static struct pool * g_LLMemPool; // size: 0x4, address: 0x805DBF50
static struct pool * g_LLNodeMemPool; // size: 0x4, address: 0x805DBF54
static struct LLNode * g_LLTracerStack[8]; // size: 0x20, address: 0x80510928
static int g_LLTracerStackIndex; // size: 0x4, address: 0x805DBF58
struct pool * g_pPSystemPool; // size: 0x4, address: 0x805DBF5C
struct pool * g_pPEmitterPool; // size: 0x4, address: 0x805DBF60
struct pool * g_pParticlePool; // size: 0x4, address: 0x805DBF64
static class PVector4 g_PSystemGravity; // size: 0x10, address: 0x80510948
struct psystem * g_pParticleSystem; // size: 0x4, address: 0x805DBF68
struct psystem * g_pParticleWeatherSystem; // size: 0x4, address: 0x805DBF6C
struct psystem * g_pParticleModelSystem; // size: 0x4, address: 0x805DBF70
class PVector4 * g_TurbulanceTable; // size: 0x4, address: 0x805DBF74
float kActualBBZHeight; // size: 0x4, address: 0x805DA388
// total size: 0x20
struct {} __vt__9ERenderer; // size: 0x20, address: 0x80453FA0
// total size: 0x38
struct {} __vt__14ERenderSurface; // size: 0x38, address: 0x80453FC0
// total size: 0x2C
struct {} __vt__9EFontData; // size: 0x2C, address: 0x80453FF8
// total size: 0x2C
struct {} __vt__9EFontSize; // size: 0x2C, address: 0x80454024
// total size: 0x2C
struct {} __vt__9EFontPage; // size: 0x2C, address: 0x80454050
// total size: 0x2C
struct {} __vt__14EFontCharacter; // size: 0x2C, address: 0x8045407C
// total size: 0xC
struct {} __vt__9EQuadTree; // size: 0xC, address: 0x804540A8
// total size: 0x44
struct {} __vt__7EShader; // size: 0x44, address: 0x804540B4
// total size: 0x120
struct {} __vt__9EGraphics; // size: 0x120, address: 0x804540F8
// total size: 0x178
struct {} __vt__3ERC; // size: 0x178, address: 0x80454218
// total size: 0xC
struct {} __vt__3EDL; // size: 0xC, address: 0x80454390
// total size: 0x4C
struct {} __vt__8ETexture; // size: 0x4C, address: 0x8045439C
// total size: 0x24
struct {} __vt__9E3DWindow; // size: 0x24, address: 0x804543E8
// total size: 0x24
struct {} __vt__7EWindow; // size: 0x24, address: 0x8045440C
// total size: 0x2C
struct {} __vt__30EMorphWeightChannelNodeDataPos; // size: 0x2C, address: 0x80454430
// total size: 0x2C
struct {} __vt__16EAnimNodeDataPos; // size: 0x2C, address: 0x8045445C
struct _GDLObj * __GDCurrentDL; // size: 0x4, address: 0x805DCD70

