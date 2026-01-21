/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcstream.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CDC14 -> 0x802CF2E8
*/
// Range: 0x802CDC14 -> 0x802CDD08
// this: r24
ENGCAudioStreamer::ENGCAudioStreamer() {
    // Local variables
    unsigned int i; // r25

    // References
    // -> unsigned int ENGCAudioStreamer_irq_counter;
    // -> unsigned int next_stream_handle;
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CDD08 -> 0x802CDDB8
// this: r28
ENGCAudioStreamer::~ENGCAudioStreamer() {
    // Local variables
    int i; // r30

    // References
    // -> unsigned char s_bShuttingDown;
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CDDB8 -> 0x802CDE94
void ENGCAudioStreamer::Update() {
    // Local variables
    struct Stream * stream; // r31
    unsigned int i; // r30
    unsigned int len1; // r4
    unsigned int len2; // r6
    unsigned int currentPosition; // r7
    unsigned int blah; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CDE94 -> 0x802CDF2C
void ENGCAudioStreamer::Pause(unsigned int sh /* r30 */) {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CDF2C -> 0x802CDFC4
void ENGCAudioStreamer::Resume(unsigned int sh /* r30 */) {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CDFC4 -> 0x802CE090
unsigned int ENGCAudioStreamer::Allocate(struct NGCStreamInfo * info /* r28 */, unsigned char vol /* r29 */, unsigned char pan /* r30 */) {
    // Local variables
    unsigned int handle; // r31
    struct Stream * stream; // r1+0x8
    unsigned int len; // r30
}

// Range: 0x802CE090 -> 0x802CE1E8
unsigned int ENGCAudioStreamer::AllocateStereo(struct NGCStreamInfo * info_left /* r30 */, struct NGCStreamInfo * info_right /* r31 */, unsigned char vol /* r24 */) {
    // Local variables
    struct Stream * stream[2]; // r1+0x8
}

// Range: 0x802CE1E8 -> 0x802CE284
unsigned char ENGCAudioStreamer::Free(unsigned int sh /* r31 */) {
    // Local variables
    unsigned char ret; // r30
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE284 -> 0x802CE2EC
unsigned char ENGCAudioStreamer::IsActive(unsigned int sh /* r31 */) {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE2EC -> 0x802CE344
unsigned char ENGCAudioStreamer::AnyIsActive() {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE344 -> 0x802CE484
void ENGCAudioStreamer::SetVolume(unsigned int sh /* r30 */, unsigned char vol /* r31 */) {
    // Local variables
    unsigned int i; // r0
    unsigned char active; // r5
    unsigned char initializing; // r7

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE484 -> 0x802CE508
void ENGCAudioStreamer::SetPan(unsigned int sh /* r30 */, unsigned char pan /* r31 */) {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE508 -> 0x802CE63C
static unsigned int get_free(struct Stream * & stream /* r30 */) {
    // Local variables
    unsigned int sh; // r31
    unsigned int i; // r6
    unsigned int j; // r7

    // References
    // -> unsigned int next_stream_handle;
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE63C -> 0x802CE70C
static unsigned int init_stream(struct Stream * stream /* r30 */) {
    // Local variables
    unsigned int len; // r31
    unsigned int update_len; // r5
}

// Range: 0x802CE70C -> 0x802CE730
static void ENGCAudioStreamer_enable_IRQ() {
    // References
    // -> unsigned char ENGCAudioStreamer_old_irq_state;
    // -> unsigned int ENGCAudioStreamer_irq_counter;
}

// Range: 0x802CE730 -> 0x802CE774
static void ENGCAudioStreamer_disable_IRQ() {
    // References
    // -> unsigned char ENGCAudioStreamer_old_irq_state;
    // -> unsigned int ENGCAudioStreamer_irq_counter;
}

// Range: 0x802CE774 -> 0x802CE9F0
static void dvd_callback() {
    // Local variables
    unsigned int i; // r5
    struct Stream * stream; // r31
    void * ramstart; // r31
    unsigned int datalen; // r30
    unsigned int aramaddress; // r29

    // References
    // -> unsigned char ENGCAudioStreamer_old_irq_state;
    // -> unsigned int ENGCAudioStreamer_irq_counter;
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CE9F0 -> 0x802CEA74
static int ENGCAudioStreamer_GetDB() {
    // Local variables
    float diff; // f1
    float logval; // f0
    int dbVolume; // r3
}

// Range: 0x802CEA74 -> 0x802CECB4
static unsigned char activate_stream(struct Stream * stream /* r30 */) {
    // Local variables
    struct _AXPBADDR addr; // r1+0x18
    unsigned int start; // r31
    unsigned int end; // r3
    struct _AXPBADPCM adpcm; // r1+0x28
    struct _AXPBSRC src; // r1+0x8
    unsigned int srcBits; // r0

    // References
    // -> unsigned char ENGCAudioStreamer_old_irq_state;
    // -> unsigned int ENGCAudioStreamer_irq_counter;
}

// Range: 0x802CECB4 -> 0x802CEE84
static void stream_data(struct Stream * stream /* r31 */) {
    // Local variables
    unsigned int update_len; // r29
    unsigned int total_update; // r5
    void * ramstart; // r29
    unsigned int datalen; // r28
    unsigned int aramaddress; // r27

    // References
    // -> unsigned char ENGCAudioStreamer_old_irq_state;
    // -> unsigned int ENGCAudioStreamer_irq_counter;
}

// Range: 0x802CEE84 -> 0x802CEF14
static void shutdown_stream(struct Stream * stream /* r31 */) {}

// Range: 0x802CEF14 -> 0x802CEFE0
static unsigned int stream_update_handler() {
    // Local variables
    struct Stream * stream; // r31
}

// Range: 0x802CEFE0 -> 0x802CF02C
static unsigned int get_private_index() {
    // Local variables
    unsigned int i; // r0

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CF02C -> 0x802CF098
static void ENGCAudioStreamer_stream_free(struct Stream * stream /* r31 */) {}

// Range: 0x802CF098 -> 0x802CF110
static void ENGCAudioStreamer_ax_drop_voice_callback() {
    // Local variables
    struct _AXVPB * voice; // r29
    unsigned int i; // r28

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}

// Range: 0x802CF110 -> 0x802CF2E8
static void ENGCAudioStreamer_arq_callback() {
    // Local variables
    struct Stream * p; // r0
    unsigned int i; // r5

    // References
    // -> struct Stream ENGCAudioStreamer_streams[2];
}


