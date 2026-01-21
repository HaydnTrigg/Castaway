/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\base_core_engine_dependencies_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DB50 -> 0x8024DB50
*/
// total size: 0x8
struct ERTQ4CacheNode {
    // Members
    unsigned int color; // offset 0x0, size 0x4
    int data; // offset 0x4, size 0x4
};
// total size: 0x48
struct ERTQ4Node {
    // Members
    float vTotalColor[4]; // offset 0x0, size 0x10
    unsigned int number_colors; // offset 0x10, size 0x4
    unsigned int number_unique; // offset 0x14, size 0x4
    unsigned short parent; // offset 0x18, size 0x2
    unsigned short child[16]; // offset 0x1A, size 0x20
    unsigned short children; // offset 0x3A, size 0x2
    unsigned short vMidColor[4]; // offset 0x3C, size 0x8
    unsigned char level; // offset 0x44, size 0x1
    unsigned char color_number; // offset 0x45, size 0x1
    unsigned char id; // offset 0x46, size 0x1
};
// total size: 0x2100
class ERTQuantize4D : public IRTQuantize {
    // Members
protected:
    struct ERTQ4CacheNode m_cache[511]; // offset 0x4, size 0xFF8
    void * (* m_pfnAlloc)(unsigned int); // offset 0xFFC, size 0x4
    void (* m_pfnFree)(void *); // offset 0x1000, size 0x4
    unsigned short m_root; // offset 0x1004, size 0x2
    unsigned short m_nFreeNodeHead; // offset 0x1006, size 0x2
    struct ERTQ4Node * m_pNodes; // offset 0x1008, size 0x4
    unsigned int m_mode; // offset 0x100C, size 0x4
    unsigned int m_nNodes; // offset 0x1010, size 0x4
    unsigned int m_maxColors; // offset 0x1014, size 0x4
    unsigned int m_maxNodes; // offset 0x1018, size 0x4
    unsigned int m_depth; // offset 0x101C, size 0x4
    unsigned int m_nPixels; // offset 0x1020, size 0x4
    unsigned int m_nColors; // offset 0x1024, size 0x4
    unsigned int m_pruningThreshold; // offset 0x1028, size 0x4
    unsigned int m_nextPruningThreshold; // offset 0x102C, size 0x4
    unsigned int m_shift[11]; // offset 0x1030, size 0x2C
    unsigned int m_color_number; // offset 0x105C, size 0x4
    class EVec4 m_colormap[256]; // offset 0x1060, size 0x1000
    class EVec4 m_vColor; // offset 0x2060, size 0x10
    float m_distance; // offset 0x2070, size 0x4
    class EMat4 m_mTrans; // offset 0x2078, size 0x40
    class EMat4 m_mInvTrans; // offset 0x20B8, size 0x40
    unsigned char m_YUVColorSpace; // offset 0x20F8, size 0x1
};
class EAHeap * g_ResourceHeap; // size: 0x4, address: 0x805DBDD8
static class EAHeap s_ResourceHeap; // size: 0x564, address: 0x804A83EC
class EAHeap * g_MainHeap; // size: 0x4, address: 0x805DBDE0
static class EAHeap s_MainHeap; // size: 0x564, address: 0x804A895C
class EAHeap * g_AudioHeap; // size: 0x4, address: 0x805DBDE8
static class EAHeap s_AudioHeap; // size: 0x564, address: 0x804A8ECC
class EAHeap * g_ShaderHeap; // size: 0x4, address: 0x805DBDF0
static class EAHeap s_ShaderHeap; // size: 0x564, address: 0x804A943C
class EAHeap * g_AnimationHeap; // size: 0x4, address: 0x805DBDF8
static class EAHeap s_AnimationHeap; // size: 0x564, address: 0x804A99AC
class EAHeap * g_FlashesHeap; // size: 0x4, address: 0x805DBE00
static class EAHeap s_FlashesHeap; // size: 0x564, address: 0x804A9F1C
class EAHeap * g_TextureHeap; // size: 0x4, address: 0x805DBE08
static class EAHeap s_TextureHeap; // size: 0x564, address: 0x804AA48C
class EAHeap * g_ModelHeap; // size: 0x4, address: 0x805DBE10
static class EAHeap s_ModelHeap; // size: 0x564, address: 0x804AA9FC
class FPHeap * g_AptHeap; // size: 0x4, address: 0x805DBE18
static class FPHeap s_AptHeap; // size: 0x564, address: 0x804AAF6C
unsigned int s_WarnHeapFullCount; // size: 0x4, address: 0x805DBE20
unsigned int s_WarnHeapFullFirstSize; // size: 0x4, address: 0x805DBE24
double s_WarnHeapFullFirstTime; // size: 0x8, address: 0x805DBE28
unsigned int s_WarnHeapFullFirstThread; // size: 0x4, address: 0x805DBE30
unsigned int s_WarnHeapFullLastSize; // size: 0x4, address: 0x805DBE34
double s_WarnHeapFullLastTime; // size: 0x8, address: 0x805DBE38
unsigned int s_WarnHeapFullLastThread; // size: 0x4, address: 0x805DBE40
unsigned int s_poolBlocks[16]; // size: 0x40, address: 0x8041CA60
class AllocPoolManager * s_protectedPoolManager; // size: 0x4, address: 0x805DBE44
unsigned char s_nNextHeapID; // size: 0x1, address: 0x805DA1F0
// total size: 0x398
class AllocPoolManager {
    // Members
    unsigned char * m_heapPoolBuffer; // offset 0x0, size 0x4
    unsigned char * m_heapPoolBufferEnd; // offset 0x4, size 0x4
    class ProtectedAllocPool m_pools[16]; // offset 0x8, size 0x380
    unsigned char m_poolSearchIndices[16]; // offset 0x388, size 0x10
};
static class AllocPoolManager protectedPoolManager; // size: 0x398, address: 0x804AB4E0
static class EMutex warnHeapFullMutex; // size: 0x1C, address: 0x804AB884
// total size: 0x38
class ProtectedAllocPool : public FastAllocPool {
    // Members
    class EMutex m_poolMutex; // offset 0x1C, size 0x1C
};
// total size: 0x28
struct {} __vt__13ERTQuantize4D; // size: 0x28, address: 0x804528E0
// total size: 0x28
struct {} __vt__11ERTQuantize; // size: 0x28, address: 0x80452908
// total size: 0x24
struct {} __vt__11IRTQuantize; // size: 0x24, address: 0x80452930

