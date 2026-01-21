/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\e_resourceman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A89C8 -> 0x802AB590
*/
// Range: 0x802A89C8 -> 0x802A8A5C
// this: r30
EResourceManager::EResourceManager() {
    // References
    // -> struct [anonymous] __vt__16EResourceManager;
}

// Range: 0x802A8A5C -> 0x802A8B34
// this: r30
EResourceManager::~EResourceManager() {
    // References
    // -> struct [anonymous] __vt__16EResourceManager;
}

// Range: 0x802A8B34 -> 0x802A8B9C
// this: r31
void EResourceManager::Shutdown() {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A8B9C -> 0x802A9098
// this: r31
void EResourceManager::Init() {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9098 -> 0x802A9170
// this: r31
void EResourceManager::CalcPath() {
    // Local variables
    class EString m_pathPrefix; // r1+0x14
}

// Range: 0x802A9170 -> 0x802A9294
// this: r27
class EFile * EResourceManager::GetArchiveFile() {
    // References
    // -> class HDDThread g_hddThread;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802A9294 -> 0x802A9314
// this: r31
void EResourceManager::CloseArchiveFile() {
    // Local variables
    class EFile * pArchiveFile; // r1+0x8

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802A9314 -> 0x802A9388
int EResourceManager::BinarySearch() {
    // Local variables
    int left; // r6
    int right; // r7
    int mid; // r5
}

// Range: 0x802A9388 -> 0x802A9470
// this: r29
unsigned char EResourceManager::LookupId(unsigned int & posOut /* r30 */, unsigned int & lengthOut /* r31 */) {}

// Range: 0x802A9470 -> 0x802A9610
// this: r27
void EResourceManager::AddRefAll() {
    // Local variables
    class vector tempArray; // r1+0x18
    int cur; // r28
    struct ResourceIndexRecord rec; // r1+0x8
    int cur; // r30
}

// Range: 0x802A9610 -> 0x802A97C4
// this: r27
void EResourceManager::AddDelRefAll() {
    // Local variables
    class vector tempArray; // r1+0x18
    int cur; // r28
    struct ResourceIndexRecord rec; // r1+0x8
    int cur; // r30
}

// Range: 0x802A97C4 -> 0x802A986C
// this: r28
void EResourceManager::DelRefAll() {
    // Local variables
    int cur; // r29
}

// Range: 0x802A986C -> 0x802A992C
// this: r29
class EResource * EResourceManager::GetRef(unsigned int id /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x8
    unsigned char isLoaded; // r0
    class EAutoMutex mutex'43; // r31
}

// Range: 0x802A992C -> 0x802A996C
// this: r31
class EResource * EResourceManager::GetRef() {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802A996C -> 0x802A99A4
// this: r9
unsigned long EResourceManager::ReadData(void * pBuffer /* r8 */, unsigned int pos /* r0 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A99A4 -> 0x802A9A50
// this: r30
unsigned char EResourceManager::PreloadResource(unsigned int id /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9A50 -> 0x802A9B10
// this: r30
unsigned char EResourceManager::PreloadResource() {
    // Local variables
    unsigned int id; // r31

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9B10 -> 0x802A9C5C
// this: r28
class EResource * EResourceManager::addRef(unsigned int id /* r1+0x8 */, class EFile * pSourceFile /* r29 */, unsigned int length /* r30 */, unsigned char bWait /* r31 */) {
    // Local variables
    struct rbtree_iterator iter; // r1+0x14
    class EResource * pResource; // r1+0x10

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class EApp * _pApp;
}

// Range: 0x802A9C5C -> 0x802A9E38
// this: r29
unsigned char EResourceManager::TryIncrementResource(unsigned int id /* r28 */, class EResource * * pResource /* r30 */) {
    // Local variables
    unsigned char isFound; // r0
    unsigned char result; // r31
    unsigned char bWasInFreeList; // r0

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9E38 -> 0x802A9E40
void EResourceManager::AddResource() {}

// Range: 0x802A9E40 -> 0x802A9E44
void EResourceManager::LogResourceLoad() {}

// Range: 0x802A9E44 -> 0x802A9F24
// this: r27
void EResourceManager::AddResource(class EResource * pResource /* r28 */, unsigned int id /* r29 */, unsigned char loadable /* r30 */) {
    // Local variables
    unsigned char ok; // r0
    class EResource * pAlreadyThere; // r1+0x8
    unsigned char ok2; // r0
    class EAutoMutex mutex'46; // r31
}

// Range: 0x802A9F24 -> 0x802A9F2C
class EResource * EResourceManager::AddRef() {}

// Range: 0x802A9F2C -> 0x802A9F90
// this: r29
class EResource * EResourceManager::AddRef(class EFile * pSourceFile /* r30 */, int length /* r31 */) {
    // Local variables
    unsigned int id; // r0
    class EResource * res; // r0
}

// Range: 0x802A9F90 -> 0x802A9FDC
// this: r31
class EResource * EResourceManager::AddRefAsync() {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802A9FDC -> 0x802A9FEC
class EResource * EResourceManager::AddRefAsync() {}

// Range: 0x802A9FEC -> 0x802AA054
void EResourceManager::AddRef(class EResource * pResource /* r30 */) {
    // Local variables
    class EAutoMutex mutex'39; // r31
}

// Range: 0x802AA054 -> 0x802AA148
// this: r29
void EResourceManager::DelRef(unsigned int id /* r1+0x8 */, enum DelRefMode allowCaching /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x14
    struct rbtree_iterator iter; // r1+0x10
}

// Range: 0x802AA148 -> 0x802AA198
// this: r30
void EResourceManager::DelRef(enum DelRefMode allowCaching /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802AA198 -> 0x802AA1E8
// this: r30
void EResourceManager::DelRefAsync(enum DelRefMode allowCaching /* r31 */) {}

// Range: 0x802AA1E8 -> 0x802AA30C
// this: r28
void EResourceManager::DelRefAsync(unsigned int id /* r29 */, enum DelRefMode allowCaching /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x8
    class EAutoMutex mutex'47; // r31

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA30C -> 0x802AA4A0
// this: r29
void EResourceManager::DelRef(class EResource * pResource /* r30 */, enum DelRefMode allowCaching /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA4A0 -> 0x802AA514
// this: r30
void EResourceManager::Detach(class EResource * pResource /* r31 */) {}

// Range: 0x802AA514 -> 0x802AA5DC
// this: r30
unsigned int EResourceManager::GetPos() {
    // Local variables
    unsigned int pos; // r31
}

// Range: 0x802AA5DC -> 0x802AA6A8
// this: r30
unsigned int EResourceManager::GetSize() {
    // Local variables
    unsigned int length; // r31
}

// Range: 0x802AA6A8 -> 0x802AA72C
// this: r29
unsigned char EResourceManager::IsLoaded(unsigned int id /* r30 */) {
    // Local variables
    unsigned char isFound; // r30
}

// Range: 0x802AA72C -> 0x802AA730
void EResourceManager::ResourceDestructing() {}

// Range: 0x802AA730 -> 0x802AA790
unsigned int EResourceManager::CalcId(const char * szName /* r31 */) {
    // Local variables
    unsigned int nID; // r0
}

// Range: 0x802AA790 -> 0x802AA794
class EAHeap * EResourceManager::GetHeap() {}

// Range: 0x802AA794 -> 0x802AA7E0
// this: r31
unsigned int EResourceManager::MakeSpace() {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA7E0 -> 0x802AA838
// this: r31
unsigned char EResourceManager::FreeOverFlowUnreferencedResources() {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA838 -> 0x802AA870
unsigned char EResourceManager::FreeUnreferencedResources() {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA870 -> 0x802AA878
int EResourceManager::GetUnreferencedResourceCount() {}

// Range: 0x802AA878 -> 0x802AA900
// this: r28
void * EResourceManager::Alloc(unsigned long bytes /* r29 */, unsigned int align /* r30 */) {
    // Local variables
    void * mem; // r0
    class EAHeap * heap; // r31
}

// Range: 0x802AA900 -> 0x802AA948
void EResourceManager::Free(void * ptr /* r31 */) {}

// Range: 0x802AA948 -> 0x802AA950
class EFile * EResourceManager::GetOverriddenFile() {}

// Range: 0x802AA950 -> 0x802AA9A8
unsigned char ResourceHeapFreeMemory() {
    // References
    // -> class EGraphics * _pGfx;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA9A8 -> 0x802AAA30
unsigned char AudioHeapFreeMemory(unsigned long failSize /* r29 */) {
    // Local variables
    unsigned int totalFreed; // r30

    // References
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x802AAA30 -> 0x802AAAD0
unsigned char ShaderHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802AAAD0 -> 0x802AAB98
unsigned char TextureHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EGraphics * _pGfx;
    // -> class ETextureManager _textureman;
}

// Range: 0x802AAB98 -> 0x802AAC38
unsigned char AnimationHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802AAC38 -> 0x802AAD00
unsigned char ModelHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EGraphics * _pGfx;
    // -> class EModelManager _modelman;
}

// Range: 0x802AAD00 -> 0x802AADA0
unsigned char FlashesHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802AADA0 -> 0x802AAE40
unsigned char AptHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802AAE40 -> 0x802AAE5C
EResourceMap::EResourceMap() {}

// Range: 0x802AAE5C -> 0x802AAEB0
// this: r30
EResourceMap::~EResourceMap() {}

// Range: 0x802AAEB0 -> 0x802AAF40
unsigned char EResourceMap::Find() {}

// Range: 0x802AAF40 -> 0x802AAFC8
// this: r29
void EResourceMap::SetCapacity(int capacity /* r30 */) {
    // Local variables
    struct MapEntry * newEntries; // r31
}

// Range: 0x802AAFC8 -> 0x802AB44C
// this: r28
unsigned char EResourceMap::Insert(class EResourceManager * manager /* r29 */, unsigned int id /* r30 */, class EResource * res /* r31 */) {
    // Local variables
    int ix; // r4
    int i; // r5
}

// Range: 0x802AB44C -> 0x802AB530
unsigned char EResourceMap::Remove() {
    // Local variables
    int i; // r9
}

// Range: 0x802AB530 -> 0x802AB590
// this: r30
void EResourceMap::RemoveAll() {}


