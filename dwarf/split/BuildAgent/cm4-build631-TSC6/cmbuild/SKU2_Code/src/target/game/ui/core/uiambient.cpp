/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiambient.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017F098 -> 0x8017F7C8
*/
// Range: 0x8017F098 -> 0x8017F170
// this: r28
UIAMBIENT::UIAMBIENT() {
    // Local variables
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__9UIAMBIENT;
}

// Range: 0x8017F170 -> 0x8017F21C
// this: r27
UIAMBIENT::~UIAMBIENT() {
    // Local variables
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__9UIAMBIENT;
}

// Range: 0x8017F21C -> 0x8017F310
// this: r31
void UIAMBIENT::PlaySound(unsigned int sampleId /* r30 */) {
    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}

// Range: 0x8017F310 -> 0x8017F468
// this: r31
void UIAMBIENT::Update() {
    // Local variables
    int index; // r30
    unsigned int nextIndex; // r4
    int failsafe; // r29

    // References
    // -> float _dt;
}

// Range: 0x8017F468 -> 0x8017F664
// this: r27
void UIAMBIENT::UpdateAmbientAudioLoad(int index /* r26 */) {
    // Local variables
    int pan; // r6
    float otherChannelVolume; // f1
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x8017F664 -> 0x8017F720
// this: r28
void UIAMBIENT::StopSound(int voiceIndex /* r31 */) {
    // References
    // -> class EAudio * _pActualAudio;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}

// Range: 0x8017F720 -> 0x8017F7BC
void UIAMBIENT::InitAmbientSounds() {
    // References
    // -> unsigned int UIAMBIENT_cas[24];
    // -> unsigned int UIAMBIENT_frontend[47];
    // -> unsigned int AMBIENT_Store_lengths[2];
}

// Range: 0x8017F7BC -> 0x8017F7C8
void UIAMBIENT::UpdateAmbientSounds() {}


