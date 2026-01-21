/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\ambientsoundplayer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F98E8 -> 0x800FAF04
*/
// Range: 0x800F98E8 -> 0x800F9964
// this: r30
AmbientSoundPlayer::AmbientSoundPlayer() {}

// Range: 0x800F9964 -> 0x800F99E4
// this: r30
AmbientSoundPlayer::~AmbientSoundPlayer() {}

// Range: 0x800F99E4 -> 0x800F99EC
void AmbientSoundPlayer::SetScorePlayer() {}

// Range: 0x800F99EC -> 0x800F99F4
void AmbientSoundPlayer::SetAmbientSound() {}

// Range: 0x800F99F4 -> 0x800F9A28
// this: r31
void AmbientSoundPlayer::Update() {}

// Range: 0x800F9A28 -> 0x800F9D58
// this: r31
unsigned char AmbientSoundPlayer::Start() {
    // Local variables
    int selectedSound; // r0
    float angle; // f1
    class CTilePt tilePt; // r1+0x8

    // References
    // -> class EClock _sysclock;
    // -> class cIGZSndSys * g_pSndSys;
}

// Range: 0x800F9D58 -> 0x800F9DC8
// this: r31
unsigned char AmbientSoundPlayer::Stop() {}

// Range: 0x800F9DC8 -> 0x800F9E04
unsigned char AmbientSoundPlayer::Pause() {}

// Range: 0x800F9E04 -> 0x800F9E40
unsigned char AmbientSoundPlayer::UnPause() {}

// Range: 0x800F9E40 -> 0x800FA5FC
// this: r30
void AmbientSoundPlayer::SetInitialSoundPosition() {
    // Local variables
    class EVec3 newPos; // r1+0x70
    class EVec3 diffVect; // r1+0x64
    float minDistSq; // f29
    const struct ListenerInfo * it; // r31
    class EVec3 upleftBound; // r1+0x58
    class EVec3 botrightBound; // r1+0x4C
    class EVec3 newPos; // r1+0x40
    class EVec3 diffVect; // r1+0x34
    float minDistSq; // f29
    const struct ListenerInfo * it; // r31
    float last_distance; // f28
    class cXObject * obj; // r31
    unsigned char isambientObject; // r29
    class FTilePt temp; // r1+0x8
    class EVec3 world_loc; // r1+0x28
    const struct ListenerInfo * it; // r29
    float dx; // f4
    float dy; // f5
    float dz; // f2
    float dist; // f0
}

// Range: 0x800FA5FC -> 0x800FA644
void AmbientSoundPlayer::UpdateSoundPosition() {
    // References
    // -> float _dt;
}

// Range: 0x800FA644 -> 0x800FAACC
// this: r31
void AmbientSoundPlayer::UpdateLoopingSoundPosition() {
    // Local variables
    float axisDist; // f28
    float minAxisDist; // f30
    const struct ListenerInfo * it; // r30
    class EVec3 midPt; // r1+0x2C
    class EVec3 tempPt; // r1+0x20
    class EVec3 deltaVec; // r1+0x14
    float distSq; // f28
    float minDistSq; // f29
    const struct ListenerInfo * it; // r30
}

// Range: 0x800FAACC -> 0x800FADC8
// this: r31
void AmbientSoundPlayer::UpdatePanAndVolume() {
    // Local variables
    int lVol; // r1+0x1C
    int rVol; // r1+0x18
    int fVol; // r1+0x14
    int bVol; // r1+0x10
    int newVol; // r1+0xC
    int newPan; // r1+0x8
    float minRad; // f31
    float time; // f0
    float delta; // f3
    unsigned char listenerInRoom; // r30
    const struct ListenerInfo * it; // r29

    // References
    // -> unsigned char s_superDuckEnabled;
    // -> unsigned char s_duckAmbient;
}

// Range: 0x800FADC8 -> 0x800FAE80
// this: r31
void AmbientSoundPlayer::UpdateSoundVolume() {
    // Local variables
    int scaledVolume; // r29
}

// Range: 0x800FAE80 -> 0x800FAE88
class ERAmbientSound * AmbientSoundPlayer::GetAmbientSound() {}

// Range: 0x800FAE88 -> 0x800FAEDC
unsigned char AmbientSoundPlayer::IsFinished() {}

// Range: 0x800FAEDC -> 0x800FAF04
unsigned char AmbientSoundPlayer::IsValid() {}


