/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\lotmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012091C -> 0x80121BDC
*/
// Range: 0x8012091C -> 0x80120960
class LotManager * LotManager::Instance() {
    // References
    // -> class LotManager * s_LotManager;
}

// Range: 0x80120960 -> 0x801209A4
// this: r31
LotManager::LotManager() {}

// Range: 0x801209A4 -> 0x80120B38
// this: r30
void LotManager::Reset() {
    // Local variables
    class ObjectFolder * objFolder; // r31
    class ObjSelector * os; // r0
    unsigned int fileID; // r0
    class NamespaceSelector * ns; // r0
    class ConsoleAutoRefCount startingLockedTransitions; // r1+0x8
    unsigned char transitionID; // r31
}

// Range: 0x80120B38 -> 0x80120B70
unsigned char LotManager::HasLotBeenVisited() {}

// Range: 0x80120B70 -> 0x80120BA8
unsigned char LotManager::DoesLotHaveTiki() {}

// Range: 0x80120BA8 -> 0x80120BB0
signed short LotManager::WhereIsHomeTiki() {}

// Range: 0x80120BB0 -> 0x80120C14
unsigned char LotManager::IsTransitionOpen() {
    // Local variables
    int index; // r0
}

// Range: 0x80120C14 -> 0x80120C48
unsigned char LotManager::HasTransitionBeenUsed() {}

// Range: 0x80120C48 -> 0x80120C70
void LotManager::TransitionUsed() {}

// Range: 0x80120C70 -> 0x80120F44
// this: r31
void LotManager::EventHappened() {
    // Local variables
    int currentLot; // r0
    int currentLot; // r0
    class IGoalUnlock * unlocks; // r31
    class IGoalUnlock * unlocks; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80120F44 -> 0x801210DC
// this: r29
void LotManager::LotEntered(signed short lotID /* r30 */) {
    // Local variables
    int index; // r0
    class GameTime lotNowTime; // r1+0x8
    class IGoalUnlock * unlocks; // r31
    class IGoalUnlock * unlocks; // r31
}

// Range: 0x801210DC -> 0x80121154
// this: r30
void LotManager::SetLotExitTimeNow() {
    // Local variables
    int lotID; // r0
    class GameTime lotExitTime; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80121154 -> 0x8012127C
// this: r30
void LotManager::SetTimeSinceLastLotExit() {
    // Local variables
    int minutes; // r31
    int hours; // r30
    int lotID; // r0
    int index; // r0
    class GameTime lotNowTime; // r1+0xC
    class GameTime lotNowTime; // r1+0x8
    int seconds; // r6

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8012127C -> 0x8012130C
// this: r30
int LotManager::GetEpochSecondsAtLastExit() {
    // Local variables
    class GameTime lotNowTime; // r1+0x8
}

// Range: 0x8012130C -> 0x801213AC
// this: r25
unsigned char LotManager::CanSimGetToLot(signed short neighborID /* r26 */, signed char sourceLot /* r27 */, signed char destLot /* r28 */, signed short & energyCost /* r29 */, float & timeCost /* r30 */, unsigned char * pTransitions /* r31 */) {
    // Local variables
    signed short hygieneCost; // r1+0x8
}

// Range: 0x801213AC -> 0x801214C8
// this: r28
void LotManager::DoStream(class ReconBuffer * rb /* r29 */) {
    // Local variables
    signed short count; // r1+0x8
    int i; // r30
}

// Range: 0x801214C8 -> 0x801215EC
void LotManager::UnlockEverything() {
    // Local variables
    int i; // r5
}

// Range: 0x801215EC -> 0x80121824
// this: r30
void LotManager::PerformLotToLotTransition(signed short nNeighborID /* r8 */, signed char nDestLot /* r31 */) {
    // Local variables
    signed short nEnergyCost; // r1+0xA
    float timeCost; // r1+0x1C
    signed short nHygieneCost; // r1+0x8
    signed short hours; // r28
    signed short minutes; // r27
    class GameTime currentTime; // r1+0x18
    int i; // r26
}

// Range: 0x80121824 -> 0x80121BDC
void LotManager::ApplyDamageOverTimeOnLotLoad(signed char nDestLot /* r26 */) {
    // Local variables
    class GameTime lastLotTime; // r1+0x34
    class WeatherManager * pWeatherManager; // r30
    class vector damageEvents; // r1+0x40
    int nNumWeatherEvents; // r0
    struct WeatherEvent * pPreviousWeatherEvent; // r29
    struct WeatherEvent * pCurrentWeatherEvent; // r28
    class GameTime nWeatherEventEndTime; // r1+0x30
    int i; // r27
    struct WeatherEvent * pNextWeatherEvent; // r29
    class ObjectModule * pObjModule; // r27
    struct DamageEvent totalDamage; // r1+0x38
    signed short nArmorMultiplier; // r28
    struct DamageEvent * iter; // r29
    int nNumObjects; // r0
    int currId; // r29
    class cXObject * pObject; // r0

    // References
    // -> class EGlobal _globals;
}


