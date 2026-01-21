/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\patch.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BB6FC -> 0x800BE764
*/
// Range: 0x800BB6FC -> 0x800BB70C
TrackDataReader::TrackDataReader() {}

// Range: 0x800BB70C -> 0x800BB754
// this: r31
TrackDataReader::~TrackDataReader() {}

// Range: 0x800BB754 -> 0x800BB768
class TrackDataReader & TrackDataReader::operator=() {}

// Range: 0x800BB768 -> 0x800BB778
class TrackDataReader & TrackDataReader::operator=() {}

// Range: 0x800BB778 -> 0x800BB788
class TrackDataReader & TrackDataReader::operator--() {}

// Range: 0x800BB788 -> 0x800BB798
class TrackDataReader & TrackDataReader::operator+=() {}

// Range: 0x800BB798 -> 0x800BB83C
// this: r31
union SndInstruction & TrackDataReader::ReadCommand() {
    // References
    // -> static union SndInstruction nopInst;
}

// Range: 0x800BB83C -> 0x800BB840
void TrackDataReader::Trace() {}

// Range: 0x800BB840 -> 0x800BB884
// this: r31
void cTrack::HandleTrackFlowError() {}

// Range: 0x800BB884 -> 0x800BB890
unsigned char cHitMan::RegisterSourceDataRequestHandler() {}

// Range: 0x800BB890 -> 0x800BB8AC
// this: r7
unsigned char cHitMan::GetSourceDataField() {
    // Local variables
    unsigned char bOk; // r0
}

// Range: 0x800BB8AC -> 0x800BB954
// this: r30
class cHitControlGroup * cHitMan::ControlGroup(int lControlGroupId /* r1+0x8 */) {
    // Local variables
    class cHitControlGroup * pControlGroup; // r31
    struct rbtree_iterator it; // r1+0x10
}

// Range: 0x800BB954 -> 0x800BB964
cHitControlGroup::cHitControlGroup() {}

// Range: 0x800BB964 -> 0x800BBA3C
// this: r30
unsigned char cHitControlGroup::SetVolume() {
    // Local variables
    class list & listActive; // r31
    struct ListIterator itTrack; // r1+0x14
    struct ListIterator itTrackEnd; // r1+0x10
    class cTrack * track; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBA3C -> 0x800BBAF4
// this: r29
cHitMan::cHitMan() {}

// Range: 0x800BBB4C -> 0x800BBBBC
// this: r30
unsigned char cHitMan::Init() {
    // Local variables
    int i; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBBBC -> 0x800BBC44
// this: r30
cHitMan::~cHitMan() {}

// Range: 0x800BBC44 -> 0x800BBD28
// this: r30
unsigned char cHitMan::Shutdown() {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x20
    struct rbtree_iterator itEnd; // r1+0x1C
    struct rbtree_iterator it; // r1+0x18
    class cHitControlGroup * pControlGroup; // r3
}

// Range: 0x800BBD28 -> 0x800BBE04
// this: r28
void cHitMan::UpdateActiveTrackVolumes() {
    // Local variables
    class cTrack * tracks[64]; // r1+0x18
    int i; // r30
    int j; // r29
    struct ListIterator it; // r1+0x10
}

// Range: 0x800BBE04 -> 0x800BBE18
void cHitMan::SetSequenceGroupTrackId() {}

// Range: 0x800BBE18 -> 0x800BBE2C
class ERSoundEvent * cHitMan::SequenceGroupTrackId() {}

// Range: 0x800BBE2C -> 0x800BBF10
// this: r30
void cHitMan::TimerCallback() {
    // Local variables
    struct ListIterator itCopy; // r1+0x14
    class cTrack * track; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBF10 -> 0x800BBF50
// this: r31
unsigned char cHitMan::AddToUpdateList(class cTrack * pTrack /* r1+0x8 */) {}

// Range: 0x800BBF50 -> 0x800BC058
// this: r30
unsigned char cHitMan::RemoveFromUpdateList(const class cTrack * pTrack /* r31 */) {
    // Local variables
    struct ListIterator it; // r1+0x24
}

// Range: 0x800BC058 -> 0x800BC0CC
// this: r30
void cHitMan::DuckMapSetSndobPri(class cTrack * pSndob /* r1+0x8 */, int lPri /* r31 */) {
    // Local variables
    int lNewDuckPri; // r0

    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BC0CC -> 0x800BC15C
// this: r30
int cHitMan::DuckMapMaxPri() {
    // Local variables
    int lMaxPri; // r31
    struct rbtree_iterator itEnd; // r1+0x10
    struct rbtree_iterator it; // r1+0xC
    int lPri; // r0
}

// Range: 0x800BC15C -> 0x800BC1C0
// this: r31
void cHitMan::DuckMapRemoveAll() {
    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BC1C0 -> 0x800BC2EC
// this: r29
cTrack::cTrack(class ERSoundEvent * pEvent /* r30 */) {
    // References
    // -> struct [anonymous] __vt__6cTrack;
}

// Range: 0x800BC2EC -> 0x800BC3BC
// this: r30
cTrack::~cTrack() {
    // References
    // -> class cHitMan * g_pHitMan;
    // -> struct [anonymous] __vt__6cTrack;
}

// Range: 0x800BC3BC -> 0x800BC460
// this: r30
unsigned char cTrack::OnStartPlaying() {}

// Range: 0x800BC460 -> 0x800BC4C0
// this: r31
unsigned char cTrack::OnEndPlaying() {}

// Range: 0x800BC4C0 -> 0x800BC4CC
class ERSoundTrackData * cTrack::StartPos() {}

// Range: 0x800BC4CC -> 0x800BC684
// this: r30
void cTrack::HandleTimerCallback() {
    // Local variables
    int lCurrentValue; // r5
    unsigned int time; // r0
    int lNumCommands; // r28

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC684 -> 0x800BC868
// this: r27
unsigned char cTrack::PlayPause(int argInstId /* r28 */, int argVol /* r29 */, int argPan /* r30 */, float timeToPlayAt /* f31 */) {
    // Local variables
    int group; // r4
    class cHitControlGroup * pGroup; // r0

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC868 -> 0x800BC8C4
// this: r31
unsigned char cTrack::Pause() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC8C4 -> 0x800BC930
// this: r31
unsigned char cTrack::Unpause() {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC930 -> 0x800BC9DC
// this: r31
unsigned char cTrack::Stop() {}

// Range: 0x800BC9DC -> 0x800BCA8C
// this: r30
unsigned char cTrack::Kill() {
    // References
    // -> class cHitMan * g_pHitMan;
    // -> class EClock _sysclock;
}

// Range: 0x800BCA8C -> 0x800BCB10
int cTrack::RegisterVal() {
    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BCB10 -> 0x800BCC6C
// this: r28
unsigned char cTrack::SetRegister(int lRegisterId /* r29 */, int lValue /* r30 */) {
    // Local variables
    unsigned char bOk; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BCC6C -> 0x800BCCE0
// this: r30
int cTrack::GetVHitList(int list /* r31 */) {
    // Local variables
    class TArray * hpl; // r0
}

// Range: 0x800BCCE0 -> 0x800BD6F0
// this: r31
unsigned char cTrack::DoCommand() {
    // Local variables
    union SndInstruction cmd; // r1+0x10
    int lVal; // r0
    int lVal; // r0
    int lTicks; // r27
    int lSrcVal; // r0
    int lDestVal; // r0
    int lDestValue; // r0
    int lDestValue; // r27
    int lSrcValue; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r5
    int lJumpAddr; // r5
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lMinVal; // r27
    int lMaxVal; // r0
    int lRand; // r0
    int lVal; // r0
    int lVal; // r0
    int lVal; // r0
    int lDstReg; // r27
    int lSourceId; // r0
    int lParmVal; // r1+0xC
    unsigned char bOk; // r0
    int lVal; // r0
    int lHitListId; // r0
    int lDestReg; // r27
    int size; // r28
    int lValue; // r4
    int i; // r29
    struct SndEvtHitPatch * patch; // r0
    int lDestReg; // r26
    int size; // r0
    int lVal; // r0
    class TArray * list; // r25
    int genreindex; // r24
    int enabledsongcount; // r23
    unsigned int enabledsongs[16]; // r1+0x18
    unsigned char currenabled; // r0
    int patchindex; // r22
    struct SndEvtHitPatch & patch; // r0
    int lValue; // r4
    int i; // r22
    struct SndEvtHitPatch * patch; // r0
    int randomindex; // r3
    unsigned long attemptcount; // r22
    unsigned int musicid; // r22
    struct SndEvtHitPatch * patch; // r5
    int patchindex; // r23
    int lGroupId; // r22
    class ERSoundEvent * lGroupTrackId; // r23
    class cTrack * pGroupSndob; // r23
    int lDestReg; // r22
    int lSourceId; // r23
    int lParmId; // r0
    int lParmVal; // r1+0x8
    unsigned char bOk; // r0

    // References
    // -> class EGlobal _globals;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BD6F0 -> 0x800BD730
void cTrack::SetCompareFlags() {}

// Range: 0x800BD730 -> 0x800BD7B8
// this: r30
unsigned char cTrack::NoteOn() {
    // Local variables
    unsigned char bOk; // r31
}

// Range: 0x800BD7B8 -> 0x800BD8A4
// this: r30
unsigned char cTrack::SetPatch(struct SndEvtHitPatch * pSndHitPatch /* r31 */, float timeToPlayAt /* f31 */) {}

// Range: 0x800BD8A4 -> 0x800BD8BC
unsigned char cTrack::NoteOff() {}

// Range: 0x800BD8BC -> 0x800BD8C8
unsigned char cTrack::SetVolume() {}

// Range: 0x800BD8C8 -> 0x800BD8D4
unsigned char cTrack::SetPan() {}

// Range: 0x800BD8D4 -> 0x800BDA3C
// this: r29
int cTrack::CalculateCurrentVolume() {
    // Local variables
    int baseVolume; // r31
    int lControlGroupId; // r30
    class cHitControlGroup * pControlGroup; // r0
    int minVol; // r0

    // References
    // -> unsigned char s_superDuckEnabled;
    // -> unsigned char s_maxVoxDuckPri;
    // -> unsigned char s_maxMusicDuckPri;
    // -> unsigned char s_maxSfxDuckPri;
    // -> float g_musicMinVolume;
    // -> class EGlobal _globals;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BDA3C -> 0x800BDA90
// this: r31
unsigned char cTrack::UpdateVolPan() {}

// Range: 0x800BDA90 -> 0x800BDA9C
unsigned char cTrack::GetMinRange() {}

// Range: 0x800BDA9C -> 0x800BDAA8
unsigned char cTrack::GetMaxRange() {}

// Range: 0x800BDAA8 -> 0x800BDAB8
int cTrack::GetControlGroup() {}

// Range: 0x800BDAB8 -> 0x800BDAC8
int cTrack::GetArgsType() {}

// Range: 0x800BDAC8 -> 0x800BDAF4
cSamplePatch::cSamplePatch() {}

// Range: 0x800BDAF4 -> 0x800BDB48
// this: r30
cSamplePatch::~cSamplePatch() {}

// Range: 0x800BDB48 -> 0x800BDB50
void cSamplePatch::SetLooped() {}

// Range: 0x800BDB50 -> 0x800BDBDC
// this: r31
unsigned char cSamplePatch::CreateSnd() {
    // References
    // -> class cIGZSndSys * g_pSndSys;
}

// Range: 0x800BDBDC -> 0x800BDC30
// this: r31
unsigned char cSamplePatch::FreeSnd() {}

// Range: 0x800BDC30 -> 0x800BDC70
// this: r31
class cSampleChannel * cSamplePatch::CreateChannel() {}

// Range: 0x800BDC70 -> 0x800BDCAC
// this: r31
cSampleChannel::cSampleChannel() {}

// Range: 0x800BDCAC -> 0x800BDD0C
// this: r30
cSampleChannel::~cSampleChannel() {}

// Range: 0x800BDD0C -> 0x800BDD30
unsigned char cSampleChannel::SetVolume() {}

// Range: 0x800BDD30 -> 0x800BDD54
unsigned char cSampleChannel::Shutdown() {}

// Range: 0x800BDD54 -> 0x800BDE0C
// this: r30
unsigned char cSampleChannel::SetChannelPatch(class cSamplePatch * pPatch /* r31 */) {}

// Range: 0x800BDE0C -> 0x800BDE6C
// this: r30
unsigned char cSampleChannel::SetPan(int lPanPos /* r31 */) {}

// Range: 0x800BDE6C -> 0x800BDEF4
// this: r31
unsigned char cSampleChannel::NoteOn() {
    // Local variables
    float time; // f31

    // References
    // -> class EClock _sysclock;
}

// Range: 0x800BDEF4 -> 0x800BDF48
// this: r31
unsigned char cSampleChannel::NoteOff() {}

// Range: 0x800BDF48 -> 0x800BDF6C
unsigned char cSampleChannel::IsPlaying() {}

// Range: 0x800BDF6C -> 0x800BDFB4
unsigned char cSampleChannel::Pause() {
    // Local variables
    class cIGZSnd * pSnd; // r0
}

// Range: 0x800BDFB4 -> 0x800BDFFC
unsigned char cSampleChannel::Unpause() {
    // Local variables
    class cIGZSnd * pSnd; // r0
}

// Range: 0x800BDFFC -> 0x800BE03C
// this: r31
cSoundCache::cSoundCache() {}

// Range: 0x800BE03C -> 0x800BE090
// this: r30
cSoundCache::~cSoundCache() {}

// Range: 0x800BE090 -> 0x800BE0CC
void cSoundCache::onTrackDelete() {
    // Local variables
    int i; // r6
}

// Range: 0x800BE0CC -> 0x800BE144
void cSoundCache::Shutdown() {
    // Local variables
    int i; // r29
}

// Range: 0x800BE144 -> 0x800BE284
// this: r31
void cSoundCache::CleanupIdleTracks() {
    // Local variables
    int i; // r28
    int iNumActiveTracks; // r27
    int j; // r28

    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x800BE284 -> 0x800BE3A0
void cSoundCache::UpdateDuckingPriorities() {
    // Local variables
    int i; // r30
    class ERSoundEvent * pEvent; // r4
    signed char duckSelect; // r5

    // References
    // -> unsigned char s_duckAmbient;
    // -> unsigned char s_superDuckEnabled;
    // -> unsigned char s_maxVoxDuckPri;
    // -> unsigned char s_maxMusicDuckPri;
    // -> unsigned char s_maxSfxDuckPri;
}

// Range: 0x800BE3A0 -> 0x800BE3F4
void cSoundCache::KillAll() {
    // Local variables
    int i; // r30
}

// Range: 0x800BE3F4 -> 0x800BE478
void cSoundCache::PauseGroup(int group /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800BE478 -> 0x800BE4FC
void cSoundCache::UnpauseGroup(int group /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800BE4FC -> 0x800BE638
// this: r31
class cTrack * cSoundCache::GetTrackObject(class ERSoundEvent * id /* r30 */) {
    // Local variables
    class cTrack * pResult; // r0
    int i; // r8
}

// Range: 0x800BE638 -> 0x800BE640
unsigned char cSoundCache::IsInMemory() {}

// Range: 0x800BE640 -> 0x800BE760
unsigned char cSoundCache::IsInMemory() {
    // Local variables
    int i; // r6
}

// Range: 0x800BE760 -> 0x800BE764
void cSoundCache::printTrackList() {}


