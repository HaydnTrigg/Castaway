/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiaudio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017F7C8 -> 0x801800DC
*/
// Range: 0x8017F7C8 -> 0x8017F8D8
// this: r28
UIAUDIO::UIAUDIO() {
    // Local variables
    class UIAUDIORecord * prev; // r30
    int i; // r31
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__7UIAUDIO;
}

// Range: 0x8017F8D8 -> 0x8017F9DC
// this: r27
UIAUDIO::~UIAUDIO() {
    // Local variables
    class UIAUDIORecord * record; // r5
    class UIAUDIORecord * next; // r30
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__7UIAUDIO;
}

// Range: 0x8017F9DC -> 0x8017FA48
void UIAUDIO::AddEntry() {
    // Local variables
    class UIAUDIORecord * record; // r8
}

// Range: 0x8017FA48 -> 0x8017FAE8
void UIAUDIO::RemoveEntry() {}

// Range: 0x8017FAE8 -> 0x8017FB94
// this: r26
unsigned char UIAUDIO::InstallEntry(const char * flashName /* r27 */, unsigned int sampleId /* r28 */, const char * className /* r29 */) {
    // Local variables
    class UIAUDIORecord * record; // r31
    unsigned char done; // r30
}

// Range: 0x8017FB94 -> 0x8017FC18
// this: r29
unsigned char UIAUDIO::UnInstallEntry(const char * flashName /* r30 */) {
    // Local variables
    class UIAUDIORecord * record; // r31
}

// Range: 0x8017FC18 -> 0x8017FC8C
// this: r29
unsigned char UIAUDIO::UnInstallAllEntries(const char * className /* r30 */) {
    // Local variables
    unsigned char rc; // r3
    class UIAUDIORecord * record; // r5
    class UIAUDIORecord * next; // r31
}

// Range: 0x8017FC8C -> 0x8017FD5C
// this: r28
unsigned int UIAUDIO::GetSound(const char * flashName /* r29 */) {
    // Local variables
    class UIAUDIORecord * record; // r30
}

// Range: 0x8017FD5C -> 0x8017FE50
// this: r31
void UIAUDIO::PlaySound(unsigned int sampleId /* r30 */) {
    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}

// Range: 0x8017FE50 -> 0x8017FE9C
// this: r30
void UIAUDIO::Update() {
    // Local variables
    int index; // r31
}

// Range: 0x8017FE9C -> 0x80180020
// this: r28
void UIAUDIO::UpdateAudioLoad(int index /* r30 */) {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x80180020 -> 0x801800DC
// this: r28
void UIAUDIO::StopSound(int voiceIndex /* r31 */) {
    // References
    // -> class EAudio * _pActualAudio;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}


