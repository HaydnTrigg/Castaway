/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_standard_heap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253724 -> 0x8025C324
*/
// Range: 0x80253724 -> 0x802537A4
class EAHeap * ResourceHeap() {
    // References
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x802537FC -> 0x802538D4
class EAHeap * MainHeap() {
    // References
    // -> class EAHeap * g_MainHeap;
    // -> static class EAHeap s_MainHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x802538D4 -> 0x802539AC
class EAHeap * AudioHeap() {
    // References
    // -> class EAHeap * g_AudioHeap;
    // -> static class EAHeap s_AudioHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x802539AC -> 0x80253A84
class EAHeap * ShaderHeap() {
    // References
    // -> class EAHeap * g_ShaderHeap;
    // -> static class EAHeap s_ShaderHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80253A84 -> 0x80253B5C
class EAHeap * AnimationHeap() {
    // References
    // -> class EAHeap * g_AnimationHeap;
    // -> static class EAHeap s_AnimationHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80253B5C -> 0x80253C34
class EAHeap * FlashesHeap() {
    // References
    // -> class EAHeap * g_FlashesHeap;
    // -> static class EAHeap s_FlashesHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80253C34 -> 0x80253D0C
class EAHeap * TextureHeap() {
    // References
    // -> class EAHeap * g_TextureHeap;
    // -> static class EAHeap s_TextureHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80253D0C -> 0x80253DD4
class EAHeap * ModelHeap() {
    // References
    // -> class EAHeap * g_ModelHeap;
    // -> static class EAHeap s_ModelHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80253DD4 -> 0x80254024
class FPHeap * AptHeap() {
    // References
    // -> class FPHeap * g_AptHeap;
    // -> class EAHeap * g_FlashesHeap;
    // -> static class FPHeap s_AptHeap;
    // -> static class EAHeap s_FlashesHeap;
    // -> class EAHeap * g_TextureHeap;
    // -> static class EAHeap s_TextureHeap;
    // -> class EAHeap * g_ModelHeap;
    // -> static class EAHeap s_ModelHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80254080 -> 0x802574A0
void EAHeap::InitializeHeapStatics() {
    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
    // -> unsigned int s_poolBlocks[16];
    // -> static class AllocPoolManager protectedPoolManager;
    // -> class EAHeap * g_MainHeap;
    // -> static class EAHeap s_MainHeap;
    // -> class EAHeap * g_AudioHeap;
    // -> static class EAHeap s_AudioHeap;
    // -> class EAHeap * g_ShaderHeap;
    // -> static class EAHeap s_ShaderHeap;
    // -> class EAHeap * g_AnimationHeap;
    // -> static class EAHeap s_AnimationHeap;
    // -> class EAHeap * g_FlashesHeap;
    // -> static class EAHeap s_FlashesHeap;
    // -> class EAHeap * g_TextureHeap;
    // -> static class EAHeap s_TextureHeap;
    // -> class EAHeap * g_ModelHeap;
    // -> static class EAHeap s_ModelHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x802574A0 -> 0x80257B08
void FPHeap::InitializeHeapStatics() {
    // References
    // -> class FPHeap * g_AptHeap;
    // -> class EAHeap * g_FlashesHeap;
    // -> static class FPHeap s_AptHeap;
    // -> static class EAHeap s_FlashesHeap;
    // -> class EAHeap * g_TextureHeap;
    // -> static class EAHeap s_TextureHeap;
    // -> class EAHeap * g_ModelHeap;
    // -> static class EAHeap s_ModelHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x80257B1C -> 0x80257BC0
// this: r26
EAHeap::EAHeap(const char * name /* r27 */, void * core /* r28 */, unsigned long coreSize /* r29 */, class EAHeap * parent /* r30 */, class EAHeap * sibling /* r31 */) {
    // References
    // -> unsigned char s_nNextHeapID;
}

// Range: 0x80257BC0 -> 0x80257BEC
unsigned char EAHeap::Init() {
    // Local variables
    unsigned char init; // r0
}

// Range: 0x80257BEC -> 0x80257C6C
// this: r29
void * EAHeap::MallocWrapper(unsigned long nSize /* r30 */, int nAllocationFlags /* r31 */) {
    // Local variables
    void * ptr; // r0

    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
}

// Range: 0x80257C6C -> 0x80258948
// this: r28
void * EAHeap::Malloc(unsigned long nSize /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * ptr; // r31
}

// Range: 0x80258948 -> 0x802589F0
// this: r27
void * EAHeap::MallocAlignedWrapper(unsigned long nSize /* r28 */, unsigned long nAlignment /* r29 */, unsigned long nAlignmentOffset /* r30 */, int nAllocationFlags /* r31 */) {
    // Local variables
    void * ptr; // r0

    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
}

// Range: 0x802589F0 -> 0x802598C4
// this: r26
void * EAHeap::MallocAligned(unsigned long nSize /* r27 */, unsigned long nAlignment /* r28 */, unsigned long nAlignmentOffset /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * ptr; // r31
}

// Range: 0x802598C4 -> 0x8025995C
// this: r26
void * EAHeap::CallocWrapper(unsigned long nElementCount /* r27 */, unsigned long nElementSize /* r28 */, int nAllocationFlags /* r29 */) {
    // Local variables
    unsigned long nSize; // r31
    void * ptr; // r30

    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
}

// Range: 0x8025995C -> 0x8025A738
// this: r27
void * EAHeap::Calloc(unsigned long nElementCount /* r28 */, unsigned long nElementSize /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * ptr; // r31
}

// Range: 0x8025A738 -> 0x8025A7FC
// this: r31
void EAHeap::Free(void * p /* r29 */) {
    // Local variables
    class ProtectedAllocPool * pool; // r0
    class EAHeap * heap; // r0

    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
}

// Range: 0x8025A7FC -> 0x8025A8EC
void EAHeap::WarnHeapFull(unsigned long nSize /* r30 */) {
    // References
    // -> unsigned int s_WarnHeapFullLastThread;
    // -> double s_WarnHeapFullLastTime;
    // -> unsigned int s_WarnHeapFullLastSize;
    // -> unsigned int s_WarnHeapFullFirstThread;
    // -> double s_WarnHeapFullFirstTime;
    // -> class EClockMan * _pClockMan;
    // -> class EClock _sysclock;
    // -> unsigned int s_WarnHeapFullFirstSize;
    // -> unsigned int s_WarnHeapFullCount;
    // -> static class EMutex warnHeapFullMutex;
}

// Range: 0x8025A8EC -> 0x8025A954
// this: r30
void EAHeap::Compact() {}

// Range: 0x8025A954 -> 0x8025A9A0
// this: r31
void EAHeap::Clear() {}

// Range: 0x8025A9A0 -> 0x8025B4C4
// this: r26
class EAHeap * EAHeap::FindHeapForAddress(void * p /* r27 */) const {}

// Range: 0x8025B4C4 -> 0x8025B4C8
void EAHeap::AllocatorAssertionFailureFunction() {}

// Range: 0x8025B4C8 -> 0x8025B5AC
// this: r26
FPHeap::FPHeap(const char * name /* r27 */, void * core /* r28 */, unsigned long coreSize /* r29 */, class EAHeap * parent /* r30 */, class EAHeap * sibling /* r31 */) {
    // References
    // -> unsigned char s_nNextHeapID;
}

// Range: 0x8025B5AC -> 0x8025B624
// this: r29
void * FPHeap::Malloc(unsigned long nSize /* r30 */, int nAllocationFlags /* r31 */) {
    // Local variables
    void * ptr; // r3

    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
}

// Range: 0x8025B624 -> 0x8025B634
void FPHeap::Free() {}

// Range: 0x8025B634 -> 0x8025B638
void FPHeap::AllocatorAssertionFailureFunction() {}

// Range: 0x8025B638 -> 0x8025B670
void * operator new(unsigned long size /* r31 */) {}

// Range: 0x8025B670 -> 0x8025B6A8
void * operator new[](unsigned long size /* r31 */) {}

// Range: 0x8025B6A8 -> 0x8025C1DC
void operator delete(void * address /* r26 */) {
    // References
    // -> class AllocPoolManager * s_protectedPoolManager;
    // -> class EAHeap * g_MainHeap;
    // -> class EAHeap * g_AudioHeap;
    // -> static class EAHeap s_MainHeap;
    // -> class EAHeap * g_ShaderHeap;
    // -> static class EAHeap s_AudioHeap;
    // -> class EAHeap * g_AnimationHeap;
    // -> static class EAHeap s_ShaderHeap;
    // -> class EAHeap * g_FlashesHeap;
    // -> static class EAHeap s_AnimationHeap;
    // -> static class EAHeap s_FlashesHeap;
    // -> class EAHeap * g_ResourceHeap;
    // -> unsigned char s_nNextHeapID;
    // -> static class EAHeap s_ResourceHeap;
}

// Range: 0x8025C1DC -> 0x8025C210
void operator delete[](void * address /* r31 */) {}

// Range: 0x8025C210 -> 0x8025C248
void * malloc(unsigned long size /* r31 */) {}

// Range: 0x8025C248 -> 0x8025C27C
void free(void * pAddress /* r31 */) {}

// Range: 0x8025C27C -> 0x8025C2C0
void * operator new[](unsigned long size /* r30 */, int flags /* r31 */) {}

// Range: 0x8025C2C0 -> 0x8025C324
void * operator new[](unsigned long size /* r28 */, unsigned long alignment /* r29 */, unsigned long alignmentOffset /* r30 */, int flags /* r31 */) {}


