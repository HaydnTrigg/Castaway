/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcsamplestream.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CC8B8 -> 0x802CD5C0
*/
// Range: 0x802CC8B8 -> 0x802CC968
// this: r27
ENgcSFXStreamer::ENgcSFXStreamer() {
    // Local variables
    unsigned int i; // r28

    // References
    // -> static unsigned int ENgcSFXStreamer_irq_counter;
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CC968 -> 0x802CCA24
void ENgcSFXStreamer::Update() {
    // Local variables
    unsigned int i; // r30
    unsigned int currentPosition; // r4
    unsigned int loopPosition; // r5

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CCA24 -> 0x802CCA7C
unsigned char ENgcSFXStreamer::IsPlaying(unsigned int voice_handle /* r31 */) {
    // Local variables
    unsigned char playing; // r31

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CCA7C -> 0x802CCBDC
unsigned int ENgcSFXStreamer::Allocate(class ERSampledata * sample /* r29 */, unsigned char vol /* r30 */) {
    // Local variables
    unsigned int ret; // r31
    unsigned int ret2; // r0

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CCBDC -> 0x802CCFF0
void ENgcSFXStreamer::Play(unsigned int voice_handle /* r30 */, class ERSampledata * sample /* r29 */) {
    // Local variables
    struct Voice * voice; // r30
    struct Voice * voice2; // r29
    struct _AXPBADPCM adpcm; // r1+0x70
    struct _AXPBADDR addr; // r1+0x38
    unsigned int start; // r7
    unsigned int end; // r8
    unsigned int loop; // r6
    struct _AXPBSRC src; // r1+0x28
    unsigned int srcBits; // r0
    struct _AXPBADPCM adpcm; // r1+0x48
    struct _AXPBADDR addr; // r1+0x18
    unsigned int start; // r5
    unsigned int end; // r6
    unsigned int loop; // r7
    struct _AXPBSRC src; // r1+0x8
    unsigned int srcBits; // r0

    // References
    // -> unsigned int m_pZeroBuffer;
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CCFF0 -> 0x802CD0F8
void ENgcSFXStreamer::Pause(unsigned int voice_handle /* r31 */) {
    // Local variables
    struct Voice * voice; // r31

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD0F8 -> 0x802CD21C
void ENgcSFXStreamer::Free(unsigned int voice_handle /* r30 */) {
    // Local variables
    struct Voice * voice; // r30

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD21C -> 0x802CD2C4
void ENgcSFXStreamer::SetPitchBend(float pitch_multiplier /* f31 */) {
    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD2C4 -> 0x802CD35C
void ENgcSFXStreamer::SetVolume(unsigned int voice_handle /* r31 */, float volume /* f31 */) {
    // Local variables
    struct Voice * voice; // r31

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD35C -> 0x802CD3F0
void ENgcSFXStreamer::SetPan(unsigned int voice_handle /* r31 */, float pan /* f31 */) {
    // Local variables
    struct Voice * voice; // r4

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD3F0 -> 0x802CD474
static int ENgcSFXStreamer_GetDB() {
    // Local variables
    float diff; // f1
    float logval; // f0
    int dbVolume; // r3
}

// Range: 0x802CD474 -> 0x802CD4E0
static unsigned int ENgcSFXStreamer_GetVoiceHandle() {
    // Local variables
    unsigned int handle; // r3

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}

// Range: 0x802CD4E0 -> 0x802CD504
static void ENgcSFXStreamer_enable_IRQ() {
    // References
    // -> static unsigned char ENgcSFXStreamer_old_irq_state;
    // -> static unsigned int ENgcSFXStreamer_irq_counter;
}

// Range: 0x802CD504 -> 0x802CD548
static void ENgcSFXStreamer_disable_IRQ() {
    // References
    // -> static unsigned char ENgcSFXStreamer_old_irq_state;
    // -> static unsigned int ENgcSFXStreamer_irq_counter;
}

// Range: 0x802CD548 -> 0x802CD5C0
static void ENgcSFXStreamer_ax_drop_voice_callback() {
    // Local variables
    struct _AXVPB * voice; // r29
    unsigned int i; // r28

    // References
    // -> static struct Voice ENgcSFXStreamer_voices[62];
}


