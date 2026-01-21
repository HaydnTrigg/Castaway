/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rsoundevent.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E8FF8 -> 0x802E967C
*/
// Range: 0x802E8FF8 -> 0x802E9098
// this: r30
ERSoundEvent::ERSoundEvent() {
    // References
    // -> struct [anonymous] __vt__12ERSoundEvent;
}

// Range: 0x802E9098 -> 0x802E9188
// this: r30
ERSoundEvent::~ERSoundEvent() {
    // References
    // -> class ESoundEventManager g_soundeventman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__12ERSoundEvent;
}

// Range: 0x802E9188 -> 0x802E9530
// this: r30
void ERSoundEvent::Load(class EFile * binaryFile /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x18
    unsigned char c; // r1+0xA
    signed char hasTrack; // r1+0x9
    unsigned char spl; // r1+0x8
    unsigned int size; // r1+0x14
    unsigned int list; // r26
    class TArray & hitpatchlist; // r0
    unsigned int patches; // r1+0x10
    unsigned int patch; // r25
    unsigned int trackDataID; // r1+0xC

    // References
    // -> class ESoundTrackDataManager g_soundtrackdataman;
}

// Range: 0x802E9530 -> 0x802E9540
void ERSoundEvent::Refresh() {}

// Range: 0x802E9540 -> 0x802E95DC
// this: r24
void ERSoundEvent::AddRefSoundsEffects() {
    // Local variables
    int j; // r28
    int jmax; // r27
    int k; // r26
    int kmax; // r25
    class TArray * t; // r0

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x802E95DC -> 0x802E967C
// this: r24
void ERSoundEvent::DelRefSoundsEffectsAsync() {
    // Local variables
    int j; // r27
    int jmax; // r26
    int k; // r25
    int kmax; // r0
    class TArray * t; // r0

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}


