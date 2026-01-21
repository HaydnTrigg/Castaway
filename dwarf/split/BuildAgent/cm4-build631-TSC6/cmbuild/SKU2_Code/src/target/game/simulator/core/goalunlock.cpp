/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\goalunlock.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010FE2C -> 0x801114A8
*/
// Range: 0x8010FE2C -> 0x8010FE84
// this: r31
GoalUnlock::GoalUnlock() {
    // References
    // -> struct [anonymous] __vt__10GoalUnlock;
}

// Range: 0x8010FE94 -> 0x8010FED4
// this: r31
GoalUnlock::~GoalUnlock() {}

// Range: 0x8010FED4 -> 0x8010FFC0
// this: r30
void GoalUnlock::DoStream(class ReconBuffer * rb /* r31 */) {}

// Range: 0x8010FFC0 -> 0x801103E8
// this: r30
void GoalUnlock::ClearGoalsAndUnlocks() {
    // Local variables
    int i; // r5
    unsigned int fileID; // r31
    class NamespaceSelector * ns; // r0
    class ConsoleAutoRefCount goalTuningValues; // r1+0x8
}

// Range: 0x801103E8 -> 0x8011042C
int GoalUnlock::GetUnlockCount() {}

// Range: 0x8011042C -> 0x801105D4
int GoalUnlock::GetUnlockIndex() {
    // Local variables
    int ID; // r0
    int bookID; // r3
    int pageID; // r4
    int bookID; // r6
    int pageID; // r5
    int goalID; // r4
}

// Range: 0x801105D4 -> 0x80110650
int GoalUnlock::GetUnlockIndex() {}

// Range: 0x80110650 -> 0x801106CC
// this: r30
unsigned char GoalUnlock::IsUsed(enum UnlockType type /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801106CC -> 0x80110730
// this: r31
unsigned char GoalUnlock::IsUsed() {
    // Local variables
    int index; // r0
}

// Range: 0x80110730 -> 0x801107E4
// this: r29
unsigned char GoalUnlock::IsLocked(enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801107E4 -> 0x801108A0
// this: r29
unsigned char GoalUnlock::IsUnlocked(enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801108A0 -> 0x80110900
// this: r31
unsigned char GoalUnlock::IsUnlocked() {
    // Local variables
    int index; // r0
}

// Range: 0x80110900 -> 0x801109B8
// this: r29
unsigned char GoalUnlock::IsCompleted(enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801109B8 -> 0x80110A18
// this: r31
unsigned char GoalUnlock::IsCompleted() {
    // Local variables
    int index; // r0
}

// Range: 0x80110A18 -> 0x80110A84
// this: r31
signed short GoalUnlock::GetStatus() {
    // Local variables
    int index; // r0
}

// Range: 0x80110A84 -> 0x80110AF8
// this: r30
void GoalUnlock::SetStatus(signed short status /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110AF8 -> 0x80110BC4
// this: r29
void GoalUnlock::GrantUnlock(enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110BC4 -> 0x80110BCC
unsigned char GoalUnlock::IsRecentlyUnlocked() {}

// Range: 0x80110BCC -> 0x80110BD0
void GoalUnlock::SetRecentlyUnlocked() {}

// Range: 0x80110BD0 -> 0x80110C20
// this: r31
unsigned char GoalUnlock::AreAnyMotivesLocked() {
    // Local variables
    int index; // r0
}

// Range: 0x80110C20 -> 0x80110D18
unsigned char GoalUnlock::IsMotiveUnlocked() {
    // Local variables
    signed short motiveID[16]; // r1+0x8
}

// Range: 0x80110D18 -> 0x80110E38
// this: r30
signed short GoalUnlock::TryEvaluateGoals(signed short book /* r31 */) {
    // Local variables
    int bookIndex; // r0
}

// Range: 0x80110E38 -> 0x80111108
// this: r30
void GoalUnlock::PlanMade(signed short planID /* r31 */) {
    // Local variables
    const struct Plan * plan; // r0
    signed short tokenID; // r0
    const struct ClothingItems * pClothingItemLookup; // r0
    enum eBodyPart bodyPart; // r0
}

// Range: 0x80111108 -> 0x80111270
// this: r30
void GoalUnlock::ResourceHarvested(signed short id /* r31 */) {}

// Range: 0x80111270 -> 0x801114A8
// this: r31
void GoalUnlock::OpenAllBooksAndPages() {}


