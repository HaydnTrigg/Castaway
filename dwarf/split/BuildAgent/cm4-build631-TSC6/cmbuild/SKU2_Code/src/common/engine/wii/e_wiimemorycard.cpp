/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\wii\e_wiimemorycard.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AFBFC -> 0x802B1488
*/
// Range: 0x802AFBFC -> 0x802AFCF8
static void LoadNandBanner() {
    // Local variables
    const char * filename; // r0
    struct DVDFileInfo file; // r1+0x8
    unsigned char ok; // r0
    long bytesRead; // r0

    // References
    // -> static unsigned short _nandBannerComments[2][32];
    // -> static unsigned long _nandBannerSize;
    // -> static struct NANDBanner _nandBanner;
    // -> static const char * BANNER_BIN_DUT_FILENAME;
    // -> static const char * BANNER_BIN_SPA_FILENAME;
    // -> static const char * BANNER_BIN_ITA_FILENAME;
    // -> static const char * BANNER_BIN_GER_FILENAME;
    // -> static const char * BANNER_BIN_FRE_FILENAME;
    // -> static const char * BANNER_BIN_ENG_FILENAME;
}

// Range: 0x802AFCF8 -> 0x802AFD38
// this: r31
EWiiMemoryCard::~EWiiMemoryCard() {}

// Range: 0x802AFD38 -> 0x802AFD80
// this: r31
enum EMC_OpStatus EWiiMemoryCard::InitMemoryCard() {}

// Range: 0x802AFD80 -> 0x802AFD88
enum EMC_OpStatus EWiiMemoryCard::UnInitMemoryCard() {}

// Range: 0x802AFD88 -> 0x802B01D0
// this: r29
enum EMC_OpStatus EWiiMemoryCard::LoadDataChunkS(const char * pFileName /* r28 */, unsigned int size /* r30 */, unsigned int offset /* r27 */, void * pOutData /* r31 */) {
    // Local variables
    enum EMC_OpStatus status; // r0
    class NandFile file; // r1+0x8
}

// Range: 0x802B01D0 -> 0x802B01E8
enum EMC_OpStatus EWiiMemoryCard::LoadDataS() {}

// Range: 0x802B01E8 -> 0x802B01FC
enum EMC_OpStatus EWiiMemoryCard::OpenForIO() {}

// Range: 0x802B01FC -> 0x802B0210
enum EMC_OpStatus EWiiMemoryCard::CloseForIO() {}

// Range: 0x802B0210 -> 0x802B0658
// this: r29
enum EMC_OpStatus EWiiMemoryCard::SaveDataChunkS(const char * pFileName /* r28 */, unsigned int size /* r30 */, unsigned int offset /* r27 */, void * pInData /* r31 */) {
    // Local variables
    enum EMC_OpStatus status; // r0
    class NandFile file; // r1+0x8
}

// Range: 0x802B0658 -> 0x802B0670
enum EMC_OpStatus EWiiMemoryCard::SaveDataS() {}

// Range: 0x802B0670 -> 0x802B0D10
// this: r31
enum EMC_OpStatus EWiiMemoryCard::CreateFileS(const char * pFileName /* r28 */, unsigned int size /* r27 */) {
    // Local variables
    int result; // r0
    enum EMC_OpStatus status; // r29
    class NandFile file; // r1+0x9C
    unsigned long bytesToWrite; // r28
    class NandFile banner; // r1+0x8

    // References
    // -> static struct NANDBanner _nandBanner;
    // -> static const char * BANNER_BIN_FILENAME;
    // -> static unsigned long _nandBannerSize;
    // -> static char block[1024];
}

// Range: 0x802B0D10 -> 0x802B0F40
// this: r30
enum EMC_OpStatus EWiiMemoryCard::DeleteDataS(const char * pFileName /* r31 */) {
    // Local variables
    enum EMC_OpStatus status; // r0

    // References
    // -> static const char * BANNER_BIN_FILENAME;
}

// Range: 0x802B0F40 -> 0x802B0F48
enum EMC_OpStatus EWiiMemoryCard::FormatCardS() {}

// Range: 0x802B0F48 -> 0x802B0F50
enum EMC_OpStatus EWiiMemoryCard::UnFormatCardS() {}

// Range: 0x802B0F50 -> 0x802B10F0
// this: r31
enum EMC_OpStatus EWiiMemoryCard::IsSpaceAvailable(unsigned char & available /* r29 */) {
    // Local variables
    unsigned long answer; // r1+0x8
    unsigned long blocks; // r30
    int result; // r0
    enum EMC_OpStatus status; // r0
}

// Range: 0x802B10F0 -> 0x802B128C
// this: r31
enum EMC_OpStatus EWiiMemoryCard::IsEnoughFiles(unsigned char & available /* r29 */) {
    // Local variables
    unsigned long answer; // r1+0x8
    unsigned long inodes; // r30
    int result; // r0
    enum EMC_OpStatus status; // r0
}

// Range: 0x802B128C -> 0x802B129C
enum EMC_OpStatus EWiiMemoryCard::IsSpaceAvailable() {}

// Range: 0x802B129C -> 0x802B12AC
unsigned char EWiiMemoryCard::IsCardAvailable() {}

// Range: 0x802B12AC -> 0x802B12CC
enum EMC_OpStatus EWiiMemoryCard::IsCardFormated() {}

// Range: 0x802B12CC -> 0x802B12D0
void EWiiMemoryCard::SetupSaveTypes() {}

// Range: 0x802B12D0 -> 0x802B12D4
void EWiiMemoryCard::SetGameCode() {}

// Range: 0x802B12D4 -> 0x802B135C
// this: r29
enum EMC_OpStatus EWiiMemoryCard::DoesFileExist(unsigned char & bExists /* r30 */) {}

// Range: 0x802B135C -> 0x802B136C
enum EMC_OpStatus EWiiMemoryCard::GetSectorSize() {}

// Range: 0x802B136C -> 0x802B13E0
unsigned char EWiiMemoryCard::ValidatePort(const class MemoryDevicePort_t & port_ /* r30 */) {
    // Local variables
    unsigned char bValid; // r31
}

// Range: 0x802B13E0 -> 0x802B13F0
unsigned char EWiiMemoryCard::ValidateDevice() {}

// Range: 0x802B13F0 -> 0x802B13F8
void EWiiMemoryCard::SetLanguage() {}

// Range: 0x802B13F8 -> 0x802B1488
void EWiiMemoryCard::SetComments(const unsigned short * comment2 /* r30 */) {
    // References
    // -> static struct NANDBanner _nandBanner;
    // -> static unsigned short _nandBannerComments[2][32];
    // -> static unsigned long _nandBannerSize;
}


