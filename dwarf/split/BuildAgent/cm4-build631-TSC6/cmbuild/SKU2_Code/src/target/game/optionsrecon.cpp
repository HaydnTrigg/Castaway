/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\optionsrecon.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023D810 -> 0x8023E448
*/
// Range: 0x8023D810 -> 0x8023D840
// this: r31
OptionsRecon::OptionsRecon() {}

// Range: 0x8023DAC4 -> 0x8023DBD4
// this: r28
void OptionsRecon::ResetToDefaults() {
    // Local variables
    int songcount; // r0
    int songindex; // r30
    int genreindex; // r29
}

// Range: 0x8023DBD4 -> 0x8023DF74
// this: r29
void OptionsRecon::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed char DummyNum; // r1+0x8
}

// Range: 0x8023DF74 -> 0x8023E080
// this: r29
enum EMC_OpStatus OptionsRecon::WriteOut() {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r31
    struct EChecksummedConfigBuffer * cb; // r30
    struct HandleNode * handle; // r29

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8023E080 -> 0x8023E1D0
// this: r28
enum EMC_OpStatus OptionsRecon::ReadIn(const class MemoryDevicePort_t & port /* r30 */) {
    // Local variables
    enum EMC_OpStatus ErrReturn; // r30
    struct EChecksummedConfigBuffer * cb; // r29
    struct HandleNode handle; // r1+0xC
    int version; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x8023E1D0 -> 0x8023E240
int OptionsRecon::GetMusicGenreIndex() {}

// Range: 0x8023E240 -> 0x8023E2AC
int OptionsRecon::GetMusicGenreSongCount() {}

// Range: 0x8023E2AC -> 0x8023E330
// this: r28
unsigned char OptionsRecon::GetIsMusicGenreEnabled(int genreindex /* r29 */) const {
    // Local variables
    int songcount; // r0
    int songindex; // r30
}

// Range: 0x8023E330 -> 0x8023E39C
unsigned char OptionsRecon::SetIsSongEnabled() {}

// Range: 0x8023E39C -> 0x8023E3E4
unsigned char OptionsRecon::GetIsSongEnabledByIndex() {}

// Range: 0x8023E3E4 -> 0x8023E448
unsigned char OptionsRecon::GetIsSongEnabledByResourceID() {
    // Local variables
    unsigned long songindex; // r7

    // References
    // -> unsigned int gMSSMusicIDs[6][16];
}


