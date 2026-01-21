/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\memorycardcache.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC34 -> 0x8012EAE0
*/
// Range: 0x8012DC34 -> 0x8012DD58
// this: r29
enum EMC_OpStatus MemoryCardCache::Init(class NghLayout * pLayout /* r30 */) {
    // Local variables
    unsigned int size; // r31
}

// Range: 0x8012DD58 -> 0x8012DDBC
// this: r30
void MemoryCardCache::Destroy() {}

// Range: 0x8012DDBC -> 0x8012DE78
// this: r27
void MemoryCardCache::DestroySubsectionCache() {
    // Local variables
    unsigned int i; // r28
}

// Range: 0x8012DE78 -> 0x8012DF70
// this: r24
enum EMC_OpStatus MemoryCardCache::GetSection(const class NghLayout * pLayout /* r25 */, char * buff /* r26 */, unsigned int offset /* r27 */, unsigned int size /* r28 */) {
    // Local variables
    int subSection; // r0
    class NghResFileSectionHeader * header; // r30
    unsigned int copySize; // r29
}

// Range: 0x8012DF70 -> 0x8012E12C
// this: r28
enum EMC_OpStatus MemoryCardCache::PutSection(const class NghLayout * pLayout /* r27 */, const char * buff /* r29 */, unsigned int offset /* r26 */, unsigned int size /* r30 */) {
    // Local variables
    int subSection; // r0
    unsigned int nNewAllocationSize; // r26
    int nSection; // r0
}

// Range: 0x8012E12C -> 0x8012E250
// this: r26
enum EMC_OpStatus MemoryCardCache::CacheNghSection(class NghLayout * pLayout /* r27 */, char * buff /* r28 */, unsigned int offset /* r29 */, unsigned int bufsize /* r30 */, unsigned char bIgnoreEndian /* r31 */) {
    // Local variables
    class NghResFileSectionHeader * pSecHeader; // [invalid]
    unsigned int datasize; // r31
    enum EMC_OpStatus verified; // r0
}

// Range: 0x8012E250 -> 0x8012E298
// this: r30
enum EMC_OpStatus MemoryCardCache::LoadCacheFromMemoryCard(const class MemoryDevicePort_t & port /* r31 */) {}

// Range: 0x8012E298 -> 0x8012E48C
// this: r24
enum EMC_OpStatus MemoryCardCache::LoadCacheFromMemoryCard(const class MemoryDevicePort_t & port /* r25 */, class NghResFile * pFile /* r26 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30
    unsigned int uMaxWriteSize; // r29
    void * pWriteBuf; // r29
    class NghSubSectionIterator iter; // r1+0x18
    unsigned int offset; // r28
    unsigned int loadSize; // r27
    enum RegistryID registryId; // r1+0xC
    enum SectionID sectionId; // r1+0x8
    class SaveRecord saveRec; // r1+0x10

    // References
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E48C -> 0x8012E570
// this: r28
enum EMC_OpStatus MemoryCardCache::LoadConfigFromMemoryCard(const class MemoryDevicePort_t & port /* r29 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30

    // References
    // -> const char * s_configFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E570 -> 0x8012E8AC
// this: r22
enum EMC_OpStatus MemoryCardCache::SaveAllToMemoryCard(const class MemoryDevicePort_t & port /* r23 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30
    unsigned int uMaxWriteSize; // r29
    void * pWriteBuf; // r29
    class NghSubSectionIterator iter; // r1+0x18
    unsigned int offset; // r28
    unsigned int readSize; // r27
    unsigned int cardWriteSize; // r26
    void * cardWriteBuff; // r25
    unsigned char usingRegistry; // r24
    enum RegistryID registryId; // r1+0xC
    enum SectionID sectionId; // r1+0x8
    class SaveRecord saveRec; // r1+0x10

    // References
    // -> const char * s_configFileName;
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E8AC -> 0x8012E97C
// this: r28
enum EMC_OpStatus MemoryCardCache::GetConfig(char * buff /* r29 */, unsigned int size /* r30 */, const class MemoryDevicePort_t & port /* r31 */) {}

// Range: 0x8012E97C -> 0x8012EA30
// this: r29
enum EMC_OpStatus MemoryCardCache::PutConfig(const char * buff /* r30 */, unsigned int size /* r31 */) {}

// Range: 0x8012EA30 -> 0x8012EA48
unsigned int MemoryCardCache::GetCurrentBuildVerNum() {}

// Range: 0x8012EA48 -> 0x8012EA80
enum EMC_OpStatus MemoryCardCache::LoadMemoryCardToCache(const class MemoryDevicePort_t & port_ /* r31 */) {}

// Range: 0x8012EA80 -> 0x8012EAB8
enum EMC_OpStatus MemoryCardCache::SaveMemoryCardCacheToCard(const class MemoryDevicePort_t & port_ /* r31 */) {}

// Range: 0x8012EAB8 -> 0x8012EAE0
unsigned int MemoryCardCache::GetTotalSaveGameSize() {}


