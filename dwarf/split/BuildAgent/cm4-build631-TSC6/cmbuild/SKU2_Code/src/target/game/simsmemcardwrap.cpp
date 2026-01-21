/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simsmemcardwrap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80241B80 -> 0x802421E4
*/
// Range: 0x80241B80 -> 0x80241BA0
static void CheckForFileDescriptorLeaks(const char * fileName /* r0 */) {
    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241BA0 -> 0x80241BA8
static enum EMC_OpStatus InvalidatePS2SavedGame() {}

// Range: 0x80241BA8 -> 0x80241BE0
static unsigned char IsConfigFileValid(const class MemoryDevicePort_t & port_ /* r0 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r0
}

// Range: 0x80241BE0 -> 0x80241C58
void SimsMemCardWrap::Init() {
    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241C58 -> 0x80241CA4
enum EMC_OpStatus SimsMemCardWrap::IsCardInSlot(enum MemoryDevice_t device_ /* r0 */, unsigned char & bResult /* r31 */) {
    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241CA4 -> 0x80241CF0
enum EMC_OpStatus SimsMemCardWrap::IsWrongDevice(enum MemoryDevice_t device_ /* r0 */, unsigned char & bResult /* r31 */) {
    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241CF0 -> 0x80241D10
enum EMC_OpStatus SimsMemCardWrap::IsCardFormatted(enum MemoryDevice_t device_ /* r0 */) {
    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241D10 -> 0x80241D70
enum EMC_OpStatus SimsMemCardWrap::IsCardCorrupted(unsigned char & bCorrupted /* r31 */) {
    // Local variables
    unsigned char bTemp; // r1+0x8
    enum EMC_OpStatus ErrReturn; // r0

    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241D70 -> 0x80241DDC
enum EMC_OpStatus SimsMemCardWrap::IsCardDamaged(const class MemoryDevicePort_t & port_ /* r6 */, unsigned char & bResult /* r31 */) {
    // Local variables
    unsigned char bTemp; // r1+0x8
    enum EMC_OpStatus ErrReturn; // r0

    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241DDC -> 0x80241DFC
enum EMC_OpStatus SimsMemCardWrap::HasSavedGame() {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r0

    // References
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241DFC -> 0x80241E50
enum EMC_OpStatus SimsMemCardWrap::HasInvalidGame(const class MemoryDevicePort_t & port_ /* r5 */, unsigned char & bResult /* r31 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r0
    unsigned char bIsValid; // r1+0x8

    // References
    // -> const char * s_saveFileName;
}

// Range: 0x80241E50 -> 0x80241F48
enum EMC_OpStatus SimsMemCardWrap::HasSpaceForSave(enum MemoryDevice_t device_ /* r29 */, unsigned char & bResult /* r30 */, unsigned int * status /* r31 */) {
    // Local variables
    enum EMC_OpStatus ops; // r3
    unsigned char fileCheckResult; // r1+0x9
    unsigned char spaceCheckResult; // r1+0x8

    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241F48 -> 0x80241FA0
enum EMC_OpStatus SimsMemCardWrap::SaveConfigFile(const class MemoryDevicePort_t & port_ /* r30 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80241FA0 -> 0x80241FB8
enum EMC_OpStatus SimsMemCardWrap::FormatCard() {
    // Local variables
    enum EMC_OpStatus status; // r0

    // References
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241FB8 -> 0x80241FD4
enum EMC_OpStatus SimsMemCardWrap::DeleteFile() {
    // References
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x80241FD4 -> 0x80241FD8
unsigned int SimsMemCardWrap::GetSpaceRequiredForSave() {}

// Range: 0x80241FD8 -> 0x80242074
enum EMC_OpStatus SimsMemCardWrap::LoadGame(const class MemoryDevicePort_t & port_ /* r30 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r31
    class OptionsRecon tempOptions; // r1+0x8

    // References
    // -> const char * s_saveFileName;
    // -> class EGlobal _globals;
}

// Range: 0x80242074 -> 0x80242158
enum EMC_OpStatus SimsMemCardWrap::SaveGame(const class MemoryDevicePort_t & port_ /* r28 */, unsigned char bForcePristine_ /* r29 */) {
    // Local variables
    unsigned char bSaveToDevice; // r30
    enum EMC_OpStatus ErrReturn; // r31

    // References
    // -> const char * s_saveFileName;
    // -> class GameData _gd;
    // -> int iSaveFileVersion;
}

// Range: 0x80242158 -> 0x802421E4
enum EMC_OpStatus SimsMemCardWrap::LoadHouse(int houseNum_ /* r30 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r31

    // References
    // -> class EEngine * _pEngine;
    // -> class GameData _gd;
    // -> class EApp * _pApp;
}


