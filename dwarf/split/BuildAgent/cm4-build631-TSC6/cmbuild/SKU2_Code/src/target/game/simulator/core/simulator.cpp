/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\simulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DE32C -> 0x800E007C
*/
// Range: 0x800DE32C -> 0x800DE400
// this: r30
cSimulator::cSimulator() {
    // References
    // -> struct [anonymous] __vt__10cSimulator;
}

// Range: 0x800DE400 -> 0x800DE494
// this: r30
cSimulator::~cSimulator() {
    // References
    // -> struct [anonymous] __vt__10cSimulator;
}

// Range: 0x800DE494 -> 0x800DE650
// this: r30
void cSimulator::Init() {
    // Local variables
    signed short cnt; // r0

    // References
    // -> signed short overrideDialogReturnCode;
    // -> class EQuickdataManager _quickdataman;
    // -> signed short GameStartSecond;
    // -> signed short GameStartMinute;
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> signed short GameStartYear;
}

// Range: 0x800DE650 -> 0x800DE9AC
// this: r29
void cSimulator::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed short paused; // r28
    signed short freeWillOverride; // r27
    signed short flags; // r26
    signed short objID; // r1+0x8
    int dummyPetPoints; // r1+0x1C
    unsigned int randSeed; // r1+0x18
    int dummyWasPendingFunds; // r1+0x14
    int version; // r1+0x10
    int dummyBuf[8]; // r1+0x20
    int i; // r26

    // References
    // -> signed short DaysInAMonth;
    // -> class EQuickdataManager _quickdataman;
    // -> signed short GameStartSecond;
    // -> signed short GameStartMinute;
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> signed short GameStartYear;
}

// Range: 0x800DE9AC -> 0x800DEA0C
unsigned char cSimulator::DoCommand() {}

// Range: 0x800DEA0C -> 0x800DEAF0
// this: r29
unsigned char cSimulator::SimulateOneTick() {
    // Local variables
    unsigned int stashSeed; // r31
    unsigned char incTicks; // r30
    unsigned char hourChanged; // r1+0x9
    unsigned char dayChanged; // r1+0x8
}

// Range: 0x800DEAF0 -> 0x800DEC44
// this: r31
void cSimulator::Simulate() {
    // Local variables
    float dt; // f30
    float multiplier; // f0
    float overtime; // f4

    // References
    // -> float _dt;
}

// Range: 0x800DEC44 -> 0x800DEF00
// this: r30
unsigned char cSimulator::TickAllObjects() {
    // Local variables
    int maxID; // r0
    class cXObject * obj; // r26
    int lot_tran; // r25
    class cXPerson * selected_sim; // r24
    int dist; // r0
    int idleStatus; // r0
    unsigned char engaged; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x800DEF00 -> 0x800DEF74
// this: r31
void cSimulator::Resume() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x800DEF74 -> 0x800DEF88
void cSimulator::RestoreTrueDt() {
    // References
    // -> float _dt;
}

// Range: 0x800DEF88 -> 0x800DF0B4
// this: r31
void cSimulator::UpdateGameTime() {
    // References
    // -> signed short MonthsInAYear;
    // -> signed short DaysInAMonth;
    // -> signed short HoursInADay;
    // -> signed short MinutesInAnHour;
    // -> signed short SecondsInAMinute;
    // -> static unsigned char bSkipATimeAdvance;
}

// Range: 0x800DF0B4 -> 0x800DF12C
// this: r30
void cSimulator::CheckForGameTimeChangeThresholds(unsigned char hourChanged /* r31 */) {
    // Local variables
    enum TimeOfDay lastTimeOfDay; // r0
    enum TimeOfDay newTimeOfDay; // r0
}

// Range: 0x800DF12C -> 0x800DF1E8
void cSimulator::ApplyInitalObjectDepreciation() {
    // Local variables
    class ObjectModule * objModule; // r30
    int currId; // r29
    class cXObject * obj; // r28
    signed short value; // r0
    const struct ObjDefinition * def; // r0
}

// Range: 0x800DF1E8 -> 0x800DF2B4
// this: r29
void cSimulator::PreLoadLotDataset(int lot /* r31 */) {
    // Local variables
    char housepredataset[64]; // r1+0x8

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x800DF2B4 -> 0x800DF374
// this: r29
void cSimulator::PostDelRefLotDataset() {
    // Local variables
    char housepredataset[64]; // r1+0x8

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x800DF374 -> 0x800DF3B8
// this: r31
int cSimulator::GetPlayerCheatsValue() {
    // Local variables
    unsigned int cheats; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800DF3B8 -> 0x800DF41C
// this: r31
void cSimulator::UpdateSpeed() {}

// Range: 0x800DF41C -> 0x800DF468
float cSimulator::TranslateSpeedToFloat() {}

// Range: 0x800DF468 -> 0x800DF4D4
// this: r31
void cSimulator::SetGameTime() {}

// Range: 0x800DF4D4 -> 0x800DF548
// this: r31
void cSimulator::SetGameTime() {}

// Range: 0x800DF548 -> 0x800DF550
int cSimulator::GetFunds() {}

// Range: 0x800DF550 -> 0x800DF5B0
void cSimulator::SetFunds() {}

// Range: 0x800DF5B0 -> 0x800DF6B0
// this: r26
unsigned char cSimulator::AddListener(unsigned short listenerID /* r27 */, unsigned short simID /* r28 */, enum ECTRL_CMD command /* r29 */, unsigned short callbackParam /* r30 */) {
    // Local variables
    unsigned int i; // r31
    struct ListenPacket newPacket; // r1+0x8
}

// Range: 0x800DF6B0 -> 0x800DF7E0
// this: r27
void cSimulator::RemoveListener(unsigned short listenerID /* r28 */, unsigned short simID /* r29 */, enum ECTRL_CMD command /* r30 */) {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x800DF7E0 -> 0x800DF8E8
// this: r28
void cSimulator::RemoveAllForListener(unsigned short listenerID /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x800DF8E8 -> 0x800DF97C
// this: r30
void cSimulator::RemoveAllListeners() {
    // Local variables
    unsigned int i; // r31
}

// Range: 0x800DF97C -> 0x800DFC68
// this: r31
void cSimulator::ListenForInputs() {
    // Local variables
    unsigned int i; // r29
    unsigned short lastSelectedSimID; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800DFC68 -> 0x800DFD0C
// this: r29
unsigned char cSimulator::TurnOnEvent(struct ListenPacket & packet /* r30 */) {
    // Local variables
    class EController * pCtrl; // r31
}

// Range: 0x800DFD0C -> 0x800DFD8C
// this: r30
unsigned char cSimulator::TurnOffEvent(struct ListenPacket & packet /* r31 */) {
    // Local variables
    class EController * pCtrl; // r0
}

// Range: 0x800DFD8C -> 0x800DFE64
// this: r29
void cSimulator::CheckForEvent(struct ListenPacket & packet /* r30 */) {
    // Local variables
    class EController * pCtrl; // r0
    class cXObject * obj; // r31
    signed short valueArray[8]; // r1+0x8
}

// Range: 0x800DFE64 -> 0x800DFEC4
// this: r31
void cSimulator::StartListenerFilter() {
    // Local variables
    class EController * pCtrl; // r0
}

// Range: 0x800DFEC4 -> 0x800DFF20
// this: r31
void cSimulator::StopListenerFilter() {
    // Local variables
    class EController * pCtrl; // r0
}

// Range: 0x800DFF20 -> 0x800DFF38
class EController * cSimulator::GetPlayersController() {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x800DFF38 -> 0x800DFF74
void cSimulator::NotifySimOfCancel() {
    // Local variables
    class cXPerson * selected_sim; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800DFF74 -> 0x800E0000
void cSimulator::ApplyGlobalDamage(const struct DamageEvent & damage /* r30 */) {
    // Local variables
    class ObjectModule * pObjModule; // r0
    class cXObject * pObject; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800E0000 -> 0x800E007C
void cSimulator::NotifyBuildModeObjects() {
    // Local variables
    signed short params[8]; // r1+0x8
    class ObjectModule * pObjModule; // r0
    class cXObject * pObject; // r31
}


