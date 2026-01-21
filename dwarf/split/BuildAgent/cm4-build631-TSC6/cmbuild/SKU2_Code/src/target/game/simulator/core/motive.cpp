/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\motive.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80122ABC -> 0x801237E4
*/
// Range: 0x80122ABC -> 0x80122AC4
class ConstantsClient * GetMotiveConstantsClient() {
    // References
    // -> static class MotiveConstantsClient MotiveConstants_sTheClient;
}

// Range: 0x80122AC4 -> 0x80123014
// this: r31
void MotiveConstantsClient::UpdateConstants() {
    // Local variables
    unsigned int fileID; // r29
    signed short id; // r0
    class ConsoleAutoRefCount mc; // r1+0x8
    float comfortDecLazy; // f0
    float comfortDecActive; // f0

    // References
    // -> static float wakeEnergyDelta;
    // -> static float sleepEnergyDelta;
    // -> static float sleepHours;
    // -> static unsigned char sConstantsUpdated;
    // -> static float comfortDecBase;
    // -> static int bedTime;
    // -> static float comfortDecMultiplier;
    // -> float firstIslandDecayRate;
    // -> float kAspirationPointToMeterRatio;
    // -> static float aspirationMoodBonusRatio;
    // -> static float aspirationDec;
    // -> static float sleepinessMultiplier;
    // -> static float chewSleepDec;
    // -> static float chewWakeDec;
    // -> static float scratchSleepDec;
    // -> static float scratchWakeDec;
    // -> static float bladderSleepDec;
    // -> static float bladderWakeDec;
    // -> static float hygSleepDec;
    // -> static float hygWakeDec;
    // -> static float entSleepMultiplier;
    // -> static float entWakeDec;
    // -> static float socialDecMultiplier;
    // -> static float socialDecBase;
    // -> static float hungerDecRatio;
    // -> static float hungerToBladderRatio;
    // -> static float clockDrift;
    // -> static int wakeTime;
    // -> static int wakeHours;
    // -> static float totalEnergyShift;
}

// Range: 0x80123014 -> 0x801230E8
// this: r31
void Motives::Init() {
    // Local variables
    int count; // r0
    class ConstantsClient * cc; // r0

    // References
    // -> static unsigned char sConstantsUpdated;
}

// Range: 0x801230E8 -> 0x801230F0
void Motives::SetPerson() {}

// Range: 0x801230F0 -> 0x801234C0
// this: r31
void Motives::Sim() {
    // Local variables
    int sleepOffset; // r30
    float decayRate; // f0
    class IGoalUnlock * unlocks; // r0
    float comfortDecay; // f29
    float rainMod; // f31
    float windMod; // f30
    unsigned short roomID; // r0
    class Room * room; // r0
    class CTilePt pt; // r1+0x8
    int rainProtect; // r0
    float weatherEffect; // f1
    float clothingComfort; // f2
    unsigned short currentRoom; // r0
    float roomScore; // f0

    // References
    // -> static float aspirationDec;
}

// Range: 0x801234C0 -> 0x80123584
void Motives::Cleanup() {
    // Local variables
    int z; // r4
}

// Range: 0x80123584 -> 0x801237A4
// this: r30
void Motives::InitDecayRates() {
    // Local variables
    enum tDecaySimType simType; // r25
    class Neighbor * n; // r31
    int motiveType; // r24

    // References
    // -> float sMotiveDecayNeatMod[3][16];
    // -> float sMotiveDecayOutgoingMod[3][16];
    // -> float sMotiveDecayPlayfulMod[3][16];
    // -> float sMotiveDecayActiveMod[3][16];
    // -> float sMotiveDecayBase[3][16];
}

// Range: 0x801237A4 -> 0x801237E4
// this: r31
MotiveConstantsClient::MotiveConstantsClient() {
    // References
    // -> struct [anonymous] __vt__21MotiveConstantsClient;
}


