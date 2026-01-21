/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\nghresfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012EBA0 -> 0x80134388
*/
// Range: 0x8012EBA0 -> 0x8012EC68
// this: r30
NghResFile::NghResFile() {
    // References
    // -> class NghLayout s_nghLayout11;
    // -> struct [anonymous] __vt__10NghResFile;
}

// Range: 0x8012EC68 -> 0x8012ED50
// this: r28
NghResFile::~NghResFile() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> unsigned int s_nNumHouses;
    // -> struct [anonymous] __vt__10NghResFile;
}

// Range: 0x8012ED50 -> 0x8012ED74
int NghResFile::Create() {}

// Range: 0x8012ED74 -> 0x8012ED7C
int NghResFile::Delete() {}

// Range: 0x8012ED7C -> 0x8012ED84
int NghResFile::Open() {}

// Range: 0x8012ED84 -> 0x8012ED8C
int NghResFile::CloseForReopen() {}

// Range: 0x8012ED8C -> 0x8012ED94
int NghResFile::Reopen() {}

// Range: 0x8012ED94 -> 0x8012ED9C
int NghResFile::Close() {}

// Range: 0x8012ED9C -> 0x8012EDA0
void NghResFile::Update() {}

// Range: 0x8012EDA0 -> 0x8012EDA8
unsigned char NghResFile::Writable() {}

// Range: 0x8012EDA8 -> 0x8012EDB8
// this: r5
void NghResFile::GetFileName() {}

// Range: 0x8012EDB8 -> 0x8012EE14
int NghResFile::GetNghIndex() {
    // Local variables
    int i; // r0

    // References
    // -> int s_nghIndex[4];
}

// Range: 0x8012EE14 -> 0x8012EE98
int NghResFile::GetHouseIndex() {
    // Local variables
    int i; // r0

    // References
    // -> int s_houseIndex[6];
}

// Range: 0x8012EE98 -> 0x8012EECC
int NghResFile::GetUserIndex() {
    // Local variables
    int i; // r0

    // References
    // -> int s_userIndex[2];
}

// Range: 0x8012EECC -> 0x8012EED4
unsigned int * NghResFile::GetTableResArray() {}

// Range: 0x8012EED4 -> 0x8012EF08
unsigned int * NghResFile::GetStartOffsetArray(unsigned int numEntries /* r31 */) {}

// Range: 0x8012EF08 -> 0x8012EF3C
unsigned int * NghResFile::GetChunkLengthArray(unsigned int numEntries /* r31 */) {}

// Range: 0x8012EF3C -> 0x8012EF70
unsigned short * NghResFile::GetResIndexArray(unsigned int numEntries /* r31 */) {}

// Range: 0x8012EF70 -> 0x8012EFB4
void NghResFile::DeleteList(struct NghResFileWriteInfo * pList /* r31 */) {
    // Local variables
    struct NghResFileWriteInfo * pNode; // r3
}

// Range: 0x8012EFB4 -> 0x8012F038
unsigned int NghResFile::CalculateDataSizeForList(int & iNumEntries /* r28 */) {
    // Local variables
    struct NghResFileWriteInfo * pNode; // r31
    unsigned int result; // r30
    int iCount; // r29
}

// Range: 0x8012F038 -> 0x8012F040
unsigned char NghResFile::ValidFile() {}

// Range: 0x8012F040 -> 0x8012F048
signed short NghResFile::CountTypes() {}

// Range: 0x8012F048 -> 0x8012F050
int NghResFile::GetIndType() {}

// Range: 0x8012F050 -> 0x8012F090
signed short NghResFile::Count() {
    // Local variables
    struct NghResFileWriteInfo * * ppList; // r0
    struct NghResFileWriteInfo * pNode; // r3
    int result; // r4
}

// Range: 0x8012F090 -> 0x8012F0E8
struct HandleNode * NghResFile::GetByID(signed short id /* r31 */) {
    // Local variables
    struct NghResFileWriteInfo * * ppList; // r0
    struct NghResFileWriteInfo * pNode; // r3
}

// Range: 0x8012F0E8 -> 0x8012F0F0
struct HandleNode * NghResFile::GetByName() {}

// Range: 0x8012F0F0 -> 0x8012F160
// this: r30
struct HandleNode * NghResFile::GetByIndex(signed short index /* r31 */) {
    // Local variables
    struct NghResFileWriteInfo * * ppList; // r0
    struct NghResFileWriteInfo * pNode; // r3
    signed short count; // r4
}

// Range: 0x8012F160 -> 0x8012F164
void NghResFile::GetName() {}

// Range: 0x8012F164 -> 0x8012F16C
int NghResFile::GetResType() {}

// Range: 0x8012F16C -> 0x8012F17C
void NghResFile::GetID() {}

// Range: 0x8012F17C -> 0x8012F180
void NghResFile::GetIndex() {}

// Range: 0x8012F180 -> 0x8012F184
void NghResFile::FindUniqueName() {}

// Range: 0x8012F184 -> 0x8012F18C
signed short NghResFile::FindUniqueID() {}

// Range: 0x8012F18C -> 0x8012F190
void NghResFile::Detach() {}

// Range: 0x8012F190 -> 0x8012F194
void NghResFile::Load() {}

// Range: 0x8012F194 -> 0x8012F19C
unsigned char NghResFile::IsLittleEndian() {}

// Range: 0x8012F19C -> 0x8012F1A0
void NghResFile::SetID() {}

// Range: 0x8012F1A0 -> 0x8012F2C4
void NghResFile::Add(struct HandleNode * theHandle /* r27 */, signed short rID /* r28 */) {
    // Local variables
    struct NghResFileWriteInfo * * ppList; // r0
    struct NghResFileWriteInfo * pNode; // r30
    struct NghResFileWriteInfo * pPrev; // r29
}

// Range: 0x8012F2C4 -> 0x8012F2C8
void NghResFile::Write() {}

// Range: 0x8012F2C8 -> 0x8012F2CC
void NghResFile::Remove() {}

// Range: 0x8012F2CC -> 0x8012F2D0
void NghResFile::SetInfo() {}

// Range: 0x8012F2D0 -> 0x8012F2DC
void NghResFile::SetCurrentHouse() {}

// Range: 0x8012F2DC -> 0x8012F34C
// this: r27
void NghResFile::FlushHouseData() const {
    // Local variables
    int i; // r28
}

// Range: 0x8012F34C -> 0x8012F3F4
// this: r27
void NghResFile::FlushCharacterData(unsigned char flushThumbnails /* r28 */) {
    // Local variables
    int i; // r29
    unsigned int i; // r6

    // References
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x8012F3F4 -> 0x8012F464
// this: r28
void NghResFile::FlushNeighborData() {
    // Local variables
    int i; // r29
}

// Range: 0x8012F464 -> 0x8012F504
// this: r31
void NghResFile::FlushAllData() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8012F504 -> 0x8012F684
// this: r28
void NghResFile::Init() {
    // Local variables
    int i; // r29

    // References
    // -> unsigned int s_nNumSimsPerFamily;
    // -> unsigned int s_nNumModifiableFamilies;
    // -> unsigned int s_nNumHouses;
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x8012F684 -> 0x8012F7A0
// this: r31
void NghResFile::reset() {
    // Local variables
    int i; // r27
    int j; // r26

    // References
    // -> unsigned int s_nNumThumbnails;
    // -> unsigned int s_nNumHouses;
}

// Range: 0x8012F7A0 -> 0x8012F850
// this: r29
struct NghResFileWriteInfo * * NghResFile::FindListByResType(unsigned int type /* r30 */) {
    // Local variables
    struct NghResFileWriteInfo * * result; // r31
    int index; // r0
}

// Range: 0x8012F850 -> 0x8012F970
void NghResFile::WriteList(char * pDest /* r23 */, unsigned int uResType /* r24 */, unsigned int * & pTableResArray /* r25 */, unsigned int * & pStartOffsetArray /* r26 */, unsigned int * & pChunkLengthArray /* r27 */, unsigned short * & pResIndexArray /* r28 */, unsigned int & uDataOffset /* r29 */, unsigned int & uEntryOffset /* r30 */) {
    // Local variables
    struct NghResFileWriteInfo * pNode; // r31
}

// Range: 0x8012F970 -> 0x8012FA34
// this: r31
unsigned char NghResFile::IsSectionLoaded() const {
    // Local variables
    unsigned char bLoaded; // r0
}

// Range: 0x8012FA34 -> 0x8012FC24
// this: r31
void NghResFile::FlushSection(unsigned int uSecType /* r26 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int uCurrentHouse; // r25
    struct NghResFileWriteInfo * * ppList; // r0

    // References
    // -> unsigned int s_nNumThumbnails;
    // -> unsigned int s_nNumHouses;
}

// Range: 0x8012FC24 -> 0x8012FD90
// this: r25
char * NghResFile::ReadSection(unsigned int uSectionOffset /* r26 */, unsigned int uSectionSize /* r27 */, unsigned char & isFromMemoryCard /* r28 */, enum EMC_OpStatus & errReturn /* r29 */) {
    // Local variables
    char * pMemoryBlock; // r30
    class EFile * pFile; // r1+0x8

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x8012FD90 -> 0x801300E4
// this: r31
class NghResFileSectionHeader * NghResFile::DecompressSection(class NghResFileSectionHeader * pSecHeader /* r30 */, unsigned char bIgnoreEndian /* r29 */) {
    // Local variables
    unsigned int uSize; // r1+0xC
    unsigned int uCompressedDataSize; // r1+0x8
    class NghResFileSectionHeader * pHeaderCopy; // r31
    unsigned int uFinalSize; // r0
    class NghResFileSectionHeader * pHeaderSwizzled; // r30
    struct ThumbNailImageFormat * pThumbnailDst; // r29
    int i; // r0
    unsigned char * ptr; // r0
    unsigned char temp; // r4
}

// Range: 0x801300E4 -> 0x80130204
// this: r29
enum EMC_OpStatus NghResFile::ValidateSaveGame(const char * fileName /* r26 */, const class MemoryDevicePort_t & port_ /* r27 */, unsigned char bValidate /* r28 */) const {
    // Local variables
    unsigned int uOffset; // r31
    unsigned int uSize; // r30
    enum EMC_OpStatus errReturn; // r29
    char * pMem; // r28

    // References
    // -> class EMemoryCard * _pMemoryCard;
    // -> char s_ValidationValue[16];
}

// Range: 0x80130204 -> 0x80130350
enum EMC_OpStatus NghResFile::IsSaveGameValid(const char * fileName /* r24 */, const class MemoryDevicePort_t & port_ /* r25 */, unsigned char & bIsValid /* r26 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r29
    unsigned int uOffset; // r28
    unsigned int uSize; // r31
    char * pMem; // r27

    // References
    // -> char s_ValidationValue[16];
    // -> class EMemoryCard * _pMemoryCard;
    // -> class NghLayout s_nghLayout11;
}

// Range: 0x80130350 -> 0x801306FC
// this: r15
enum EMC_OpStatus NghResFile::ReadHostSection(void * pSource /* r16 */, unsigned char bIgnoreEndian /* r1+0x8 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r1+0x28
    char * pMemoryBlock; // r14
    unsigned int uSectionOffset; // r14
    unsigned int uSectionSize; // r0
    class NghResFileSectionHeader * pSecHeader; // r31
    unsigned int uEntries; // r18
    unsigned int * pTableResArray; // r30
    unsigned int * pStartOffsetArray; // r29
    unsigned int * pChunkLengthArray; // r28
    unsigned short * pResIndexArray; // r27
    class StackString empty; // r1+0x30
    unsigned int i; // r0
    struct HandleNode * handle; // r17
    int type; // r1+0x24
    unsigned int uStartOffset; // r1+0x20
    unsigned int uChunkLength; // r1+0x1C
    unsigned short resIndex; // r1+0xC
    unsigned short resIndex_SIMIBuffer; // r26
    unsigned int uChunkLength_SIMIBuffer; // r25
    int type_HOUSBuffer; // r24
    unsigned short resIndex_HOUSBuffer; // r23
    int type_SIMIBuffer; // r22
    unsigned int uChunkLength_HOUSBuffer; // r21
    unsigned int uStartOffset_Buffer; // r20
    unsigned int uCurrentHouse; // f5
    unsigned int j; // r19
    unsigned int i; // r18
    struct HandleNode * handle; // r17
    int type; // r1+0x18
    unsigned int uStartOffset; // r1+0x14
    unsigned int uChunkLength; // r1+0x10
    unsigned short resIndex; // r1+0xA

    // References
    // -> unsigned int s_nNumHouses;
}

// Range: 0x801306FC -> 0x8013092C
// this: r30
enum EMC_OpStatus NghResFile::ReadBothSection(void * pSource /* r31 */, unsigned char bIgnoreEndian /* r1+0x8 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r1+0x18
    char * pMemoryBlock; // r28
    unsigned int uSectionOffset; // r28
    unsigned int uSectionSize; // r0
    class NghResFileSectionHeader * pSecHeader; // r27
    unsigned int uEntries; // r26
    unsigned int * pTableResArray; // r25
    unsigned int * pStartOffsetArray; // r24
    unsigned int * pChunkLengthArray; // r23
    unsigned short * pResIndexArray; // r29
    class StackString empty; // r1+0x20
    unsigned int i; // r22
    struct HandleNode * handle; // r21
    int type; // r1+0x14
    unsigned int uStartOffset; // r1+0x10
    unsigned int uChunkLength; // r1+0xC
    unsigned short resIndex; // r1+0xA

    // References
    // -> unsigned int m_uBothSectionChecksum;
}

// Range: 0x8013092C -> 0x8013093C
void NghResFile::StoreThumbGUID() {}

// Range: 0x8013093C -> 0x8013094C
unsigned int NghResFile::GetThumbGUID() {}

// Range: 0x8013094C -> 0x80130994
unsigned short NghResFile::GetResIDFromThumbGUID() {
    // Local variables
    unsigned int i; // r7

    // References
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x80130994 -> 0x801309A0
unsigned short NghResFile::GetResIDFromThumbID() {}

// Range: 0x801309A0 -> 0x80130AC8
// this: r25
enum EMC_OpStatus NghResFile::ReadThumbSection(void * pSource /* r26 */, unsigned char bIgnoreEndian /* r1+0x8 */) {
    // Local variables
    int iCount; // r30
    char * pMemoryBlock; // r29
    unsigned int uSectionSize; // r28
    enum EMC_OpStatus errReturn; // r1+0xC
    int i; // r27
    unsigned int uSectionOffset; // r0

    // References
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x80130AC8 -> 0x80130BE0
// this: r24
enum EMC_OpStatus NghResFile::ReadThumbSubSection(void * pMemoryBlock /* r27 */, int nIndex /* r25 */, unsigned char bIgnoreEndian /* r26 */) {
    // Local variables
    class NghResFileSectionHeader * pSecHeader; // r31
    unsigned int uEntryOffset; // r30
    class StackString empty; // r1+0x8
    struct HandleNode * handle; // r29
    unsigned int uChunkLength; // r28
    unsigned short resIndex; // r27
    unsigned int thumbGuid; // r26
}

// Range: 0x80130BE0 -> 0x80130F64
// this: r27
enum EMC_OpStatus NghResFile::WriteHostSection(void * pMemoryBlock /* r28 */) {
    // Local variables
    unsigned int uSize; // r0
    unsigned int uEntries; // r31
    int iNumEntries; // r1+0x28
    unsigned int uCurrentHouse; // r30
    unsigned int i; // r24
    unsigned int uTableSize; // r3
    class NghResFileSectionHeader * pSecHeader; // r29
    unsigned int uEntryOffset; // r1+0x24
    unsigned int uDataOffset; // r1+0x20
    unsigned int * pTableResArray; // r1+0x1C
    unsigned int * pStartOffsetArray; // r1+0x18
    unsigned int * pChunkLengthArray; // r1+0x14
    unsigned short * pResIndexArray; // r1+0x10
    unsigned int i; // r24
    unsigned int hostSectionSize; // r24
    char * pDest; // r25
    int uCompressedSize; // r0
    char * pCompressDest; // r26
    enum EMC_OpStatus errReturn; // r24

    // References
    // -> unsigned int s_nNumHouses;
}

// Range: 0x80130F64 -> 0x801312FC
// this: r24
enum EMC_OpStatus NghResFile::WriteBothSection(void * pMemoryBlock /* r25 */) {
    // Local variables
    int iNumEntries; // r1+0x28
    unsigned int m_uSize; // r0
    unsigned int uEntries; // r27
    unsigned int uTableSize; // r4
    class NghResFileSectionHeader * pSecHeader; // r26
    unsigned int uEntryOffset; // r1+0x24
    unsigned int uDataOffset; // r1+0x20
    unsigned int * pTableResArray; // r1+0x1C
    unsigned int * pStartOffsetArray; // r1+0x18
    unsigned int * pChunkLengthArray; // r1+0x14
    unsigned short * pResIndexArray; // r1+0x10
    unsigned int bothSectionSize; // r22
    char * pDest; // r23
    int uCompressedSize; // r0
    unsigned char * pCompressDest; // r27
    enum EMC_OpStatus errReturn; // r22

    // References
    // -> unsigned int m_uLastBothSectionChecksum;
    // -> unsigned int m_uBothSectionChecksum;
}

// Range: 0x801312FC -> 0x801313A4
// this: r25
enum EMC_OpStatus NghResFile::WriteThumbSection(void * pMemoryBlock /* r26 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r29
    unsigned int thumbChunkSize; // r0
    signed short iCount; // r28
    int i; // r27
    void * pMemorySubBlock; // r4
    unsigned int nThumbDataSize; // r1+0xC
    unsigned int nThumbCompressedSize; // r1+0x8

    // References
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x801313A4 -> 0x8013164C
// this: r28
enum EMC_OpStatus NghResFile::WriteThumbSubSection(void * pMemoryBlock /* r29 */, int nIndex /* r30 */, unsigned int & nDataSize /* r20 */, unsigned int & nCompressedSize /* r31 */) {
    // Local variables
    unsigned int thumbChunkSize; // r25
    char * pDest; // r24
    unsigned char writeData; // r26
    unsigned int uSize; // r23
    struct HandleNode * handle; // r22
    class NghResFileSectionHeader * pSecHeader; // r21
    unsigned int uDataOffset; // r4
    int compressedSize; // r0
    unsigned char * pCompressDest; // r22
    class NghResFileSectionHeader * header; // r0
    enum EMC_OpStatus errReturn; // r21
}

// Range: 0x8013164C -> 0x80131AA4
// this: r19
enum EMC_OpStatus NghResFile::LoadHouseContents(unsigned int uHouseNum /* r18 */, void * pSource /* r20 */, unsigned char bIgnoreEndian /* r21 */) {
    // Local variables
    void * pMemoryBlock; // [invalid]
    enum EMC_OpStatus errReturn; // r31
    unsigned int uSectionOffset; // r22
    unsigned int uSectionSize; // r23
    class EFile * pFile; // r1+0x20
    unsigned int uReadSize; // r23
    unsigned int uCurrentHouse; // r30
    class NghResFileSectionHeader * pSecHeader; // r29
    unsigned int uSize; // r1+0x1C
    unsigned int uCompressedDataSize; // r1+0x18
    char * pHeaderCopy; // r28
    unsigned int uFinalSize; // r0
    unsigned int uEntries; // r27
    unsigned int * pTableResArray; // r26
    unsigned int * pStartOffsetArray; // r25
    unsigned int * pChunkLengthArray; // r24
    unsigned short * pResIndexArray; // r23
    class StackString empty; // r1+0x28
    unsigned int i; // r22
    struct HandleNode * handle; // r18
    int type; // r1+0x14
    unsigned int uStartOffset; // r1+0x10
    unsigned int uChunkLength; // r1+0xC
    unsigned short resIndex; // r1+0x8

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x80131AA4 -> 0x80131E5C
// this: r19
enum EMC_OpStatus NghResFile::SaveHouseContents(unsigned int uHouseNum /* r20 */, void * pMemoryBlock /* r21 */) {
    // Local variables
    int iNumEntries; // r1+0x28
    unsigned int uCurrentHouse; // r26
    unsigned int houseChunkSize; // r25
    char * pDest; // r24
    unsigned int m_uSize; // r0
    unsigned int uEntries; // r23
    unsigned int uTableSize; // r4
    class NghResFileSectionHeader * pSecHeader; // r22
    unsigned int uEntryOffset; // r1+0x24
    unsigned int uDataOffset; // r1+0x20
    unsigned int * pTableResArray; // r1+0x1C
    unsigned int * pStartOffsetArray; // r1+0x18
    unsigned int * pChunkLengthArray; // r1+0x14
    unsigned short * pResIndexArray; // r1+0x10
    int uCompressedSize; // r0
    char * pCompressDest; // r18
    unsigned int uWriteSize; // r18
    enum EMC_OpStatus errReturn; // r18
    unsigned int uOffset; // r20
}

// Range: 0x80131E5C -> 0x80131F04
// this: r29
void NghResFile::FlushHouseContents() const {}

// Range: 0x80131F04 -> 0x80131F58
// this: r30
void NghResFile::FlushAllHouseContents() {
    // Local variables
    unsigned int i; // r31

    // References
    // -> unsigned int s_nNumHouses;
}

// Range: 0x80131F58 -> 0x80131F7C
unsigned char NghResFile::AreHouseContentsLoaded() {}

// Range: 0x80131F7C -> 0x801321E0
// this: r26
void NghResFile::SetLayout(class NghLayout * pLayout /* r27 */) {
    // Local variables
    unsigned int nNewNumThumbnails; // r0
    unsigned int nOldNumHouses; // r0
    unsigned int nNewNumHouses; // r0
    unsigned int i; // r3
    unsigned int i; // r29
    unsigned int i; // r28

    // References
    // -> unsigned int s_nNumSimsPerFamily;
    // -> unsigned int s_nNumModifiableFamilies;
    // -> unsigned int s_nNumHouses;
    // -> unsigned int s_nNumThumbnails;
}

// Range: 0x801321E0 -> 0x8013268C
// this: r26
int NghResFile::SaveToFileInMemoryBlocks(const char * szFileName /* r27 */) {
    // Local variables
    class StackString nghName; // r1+0x10
    class EFile * pFile; // r1+0x8
    unsigned int nMaxSectionSize; // r29
    unsigned int nSectionSize; // r3
    char * pMem; // r28
    enum EMC_OpStatus errReturn; // r0
    unsigned int uCurrentHouse; // r0
    unsigned int i; // r27
    int nFileSizeDiff; // r27

    // References
    // -> unsigned int s_nNumHouses;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x8013268C -> 0x801329E8
// this: r28
int NghResFile::LoadFromFile(const char * fileName /* r29 */) {
    // Local variables
    class StackString nghName; // r1+0x10
    class EFile * pDefaultNghFile; // r1+0x8
    unsigned char * fileBuffer; // r29
    enum EMC_OpStatus errReturn; // r0
    unsigned int hostSectionSize; // r31
    unsigned int bothSectionSize; // r31
    unsigned int thumbSectionSize; // r31

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x801329E8 -> 0x80132B20
// this: r27
enum EMC_OpStatus NghResFile::SaveToMemoryCardCache() {
    // Local variables
    class StackString sOldSourceFilePath; // r1+0x8
    enum EMC_OpStatus errReturn; // r30
    unsigned int uCurrentHouse; // r0
    unsigned int i; // r29
    unsigned int uHouseNum; // r28

    // References
    // -> unsigned int s_nNumHouses;
    // -> const char * s_saveFileName;
}

// Range: 0x80132B20 -> 0x80132C18
unsigned int NghResFile::ReadNghVersion(class EFile * pFile /* r29 */) {
    // Local variables
    unsigned int nFileStartLocation; // r31
    unsigned int nHostSectionOffset; // r0
    void * buf; // r30
    unsigned int nNghVersion; // r1+0x8

    // References
    // -> class NghLayout s_nghLayout11;
}

// Range: 0x80132C18 -> 0x80132D24
// this: r30
enum EMC_OpStatus NghResFile::CopyDefaultNghToCache(const char * inFileName /* r31 */) {
    // Local variables
    class StackString nghName; // r1+0x10
    class EFile * pDefaultNghFile; // r1+0x8
    enum EMC_OpStatus errReturn; // r31
    unsigned int nNghVersion; // r0

    // References
    // -> const char * s_saveFileName;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x80132D24 -> 0x801330D4
// this: r30
enum EMC_OpStatus NghResFile::CopyDefaultNghToCache_Version11(class EFile * pFile /* r31 */) {
    // Local variables
    unsigned int uFileSize; // r0
    enum EMC_OpStatus errReturn; // r26
    int bytesRemaining; // r25
    unsigned int uMaxWriteSize; // r28
    void * pWriteBuf; // r24
    unsigned int readOffset; // r23
    class NghSubSectionIterator iter; // r1+0x10
    unsigned int uWriteSize; // r22
    unsigned int nThumbDataSize; // r1+0xC
    unsigned int nThumbCompressedSize; // r1+0x8
    unsigned int nWriteOffset; // r29
    unsigned int nCurrHouse; // r0
    unsigned int nWriteOffset; // r26

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class NghLayout s_nghLayout11;
}

// Range: 0x801330D4 -> 0x801336DC
// this: r24
enum EMC_OpStatus NghResFile::ConvertDefaultNghToVersion11(class EFile * pFile /* r25 */) {
    // Local variables
    unsigned int uFileSize; // r0
    enum EMC_OpStatus errReturn; // r31
    int bytesRemaining; // r30
    void * pWriteBuf; // r29
    unsigned int readOffset; // r28
    unsigned char bThumbSectionRead; // r27
    class NghSubSectionIterator iter; // r1+0x8
    unsigned int uWriteSize; // r26
    unsigned int nSubSectionSize; // r31
    unsigned int nExpectedSize; // r22
    unsigned int nActualSize; // r0
    unsigned int i; // r18
    unsigned int nWriteOffset; // r17
    unsigned int nCurrHouse; // r0
    unsigned int nWriteOffset; // r17
    unsigned int nWriteOffset; // r17
    enum SourceType storeSourceType; // r17
    int i; // r0

    // References
    // -> unsigned int s_nNumThumbnails;
    // -> class EResourceLoader * _pResLoader;
    // -> class NghLayout s_nghLayout10;
    // -> class NghLayout s_nghLayout11;
}

// Range: 0x801336DC -> 0x801337D4
// this: r29
enum EMC_OpStatus NghResFile::LoadFromMemoryCardCache() {
    // Local variables
    enum EMC_OpStatus errReturn; // r30

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> const char * s_saveFileName;
}

// Range: 0x801337D4 -> 0x80133A00
// this: r29
enum EMC_OpStatus NghResFile::CopyHouse(int dstHouseNum /* r30 */, class NghResFile & srcFile /* r31 */, int srcHouseNum /* r23 */) {
    // Local variables
    unsigned int i; // r25
    class StackString dummy; // r1+0x18
    class EString filename; // r1+0x10
    class StackString fullname; // r1+0x60
    class EString efullname; // r1+0xC
    enum EMC_OpStatus errReturn; // r0
    unsigned int uPreviousHouseNumber; // r24
    struct NghResFileWriteInfo * pNode; // r23

    // References
    // -> int s_houseIndex[6];
}

// Range: 0x80133A00 -> 0x80133A70
void NghResFile::GetDefaultNghPath(const char * fileName /* r30 */, class StackString & outPath /* r31 */) {
    // References
    // -> class EApp * _pApp;
}

// Range: 0x80133A70 -> 0x80133AB8
// this: r31
class MemoryCardCache * NghResFile::GetMemoryCardCache() {}

// Range: 0x80133AB8 -> 0x80133ACC
void NghResFile::SwapTwoByteNumber() {
    // Local variables
    unsigned char * pFakeArray; // r0
    unsigned char nBuffer; // r3
}

// Range: 0x80133ACC -> 0x80133AF0
void NghResFile::SwapFourByteNumber() {
    // Local variables
    unsigned char * pFakeArray; // r0
    unsigned char nBuffer; // r6
}

// Range: 0x80133AF0 -> 0x80133B4C
// this: r31
void NghResFileSectionHeader::EndianSwap() {}

// Range: 0x80133B4C -> 0x80133BEC
// this: r26
unsigned char NghResFile::RegisterSection(enum RegistryID id /* r27 */, void (* saveSection)(enum SectionID, class SaveRecord &) /* r28 */, void (* loadSection)(enum SectionID, class SaveRecord &) /* r29 */, void (* saveComplete)(enum SectionID, class SaveRecord &) /* r30 */) {
    // Local variables
    struct RegistryNode * iter; // r31
}

// Range: 0x80133BEC -> 0x80133C70
// this: r27
unsigned char NghResFile::FindNodeInRegistry(enum RegistryID id /* r28 */, struct RegistryNode & node /* r29 */) {
    // Local variables
    unsigned char found; // r31
    struct RegistryNode * iter; // r30
}

// Range: 0x80133C70 -> 0x80133CF8
// this: r28
void NghResFile::SectionSaveViaRegistry(enum RegistryID id /* r29 */, enum SectionID section /* r30 */, class SaveRecord & saveRec /* r31 */) {
    // Local variables
    struct RegistryNode regNode; // r1+0x8
}

// Range: 0x80133CF8 -> 0x80133D80
// this: r28
void NghResFile::SaveCompleteViaRegistry(enum RegistryID id /* r29 */, enum SectionID section /* r30 */, class SaveRecord & saveRec /* r31 */) {
    // Local variables
    struct RegistryNode regNode; // r1+0x8
}

// Range: 0x80133D80 -> 0x80133E08
// this: r28
void NghResFile::SectionLoadViaRegistry(enum RegistryID id /* r29 */, enum SectionID section /* r30 */, class SaveRecord & saveRec /* r31 */) {
    // Local variables
    struct RegistryNode regNode; // r1+0x8
}

// Range: 0x80133E08 -> 0x80133E10
void NghResFile::SetStoreChecksum() {}

// Range: 0x80133E10 -> 0x80133E20
void NghResFile::ResetChecksums() {
    // References
    // -> unsigned int m_uLastBothSectionChecksum;
    // -> unsigned int m_uBothSectionChecksum;
}

// Range: 0x80133E20 -> 0x80133E60
int NghLayout::GetSectionNumberForOffset() {
    // Local variables
    int sOffset; // r4
    int section; // r3
}

// Range: 0x80133E60 -> 0x80133EBC
int NghLayout::GetSubSectionNumberForOffset() {
    // Local variables
    int sOffset; // r4
    int subSection; // r3
    unsigned int i; // r0
}

// Range: 0x80133EBC -> 0x8013407C
// this: r27
unsigned char NghLayout::IsOffsetARegistrySubSection(unsigned int offset /* r28 */, enum RegistryID & registryId /* r29 */, enum SectionID & sectionId /* r30 */) {
    // Local variables
    unsigned char valid; // r31
    class NghSubSectionIterator iter; // r1+0x8
    enum SectionID firstSubSectionId; // r29
    unsigned int subSectionIndex; // r0
}

// Range: 0x8013407C -> 0x80134214
int ThumbnailCompresser::Encode(unsigned char * inBuffer /* r30 */, int inBufferLen /* r31 */, unsigned char * outBuffer /* r29 */) {
    // Local variables
    struct ThumbNailImageFormat * pThumbnail; // r0
    struct ThumbNailCompressedImageFormat * pDest; // r31
    int i; // r9
    unsigned int paletteEntry; // r10
    int j; // r5
    int k; // r0
}

// Range: 0x80134214 -> 0x80134388
int ThumbnailCompresser::Decode(unsigned char * inBuffer /* r6 */, int inBufferLen /* r31 */, unsigned char * outBuffer /* r30 */) {
    // Local variables
    struct ThumbNailImageFormat * pThumbnail; // [invalid]
    struct ThumbNailCompressedImageFormat * pCompressedSrc; // r31
    int i; // r11
    unsigned int paletteEntry; // r4
}


