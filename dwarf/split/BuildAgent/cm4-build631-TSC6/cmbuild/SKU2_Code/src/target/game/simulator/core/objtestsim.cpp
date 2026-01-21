/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objtestsim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A48F4 -> 0x800A5CB0
*/
// Range: 0x800A48F4 -> 0x800A4908
ObjTestSim::ObjTestSim() {}

// Range: 0x800A4908 -> 0x800A494C
// this: r31
ObjTestSim::ObjTestSim() {}

// Range: 0x800A494C -> 0x800A49E8
// this: r28
ObjTestSim::~ObjTestSim() {
    // Local variables
    int cnt; // r30
}

// Range: 0x800A49E8 -> 0x800A4A28
// this: r31
void ObjTestSim::SetStackObject() {}

// Range: 0x800A4A28 -> 0x800A4E78
// this: r24
void ObjTestSim::TestInteraction(class Interaction * interaction /* r25 */, unsigned char autonomous /* r22 */, unsigned char bRunPrefixTree /* r26 */, unsigned char bRunCheckTree /* r27 */, class TTabScratchEntry * * modifiedEntry /* r28 */) {
    // Local variables
    class cXObject * stackObj; // r31
    const class ITreeTableEntry * entry; // r23
    signed short stackLocals[4]; // r1+0x8
    class cXPerson * person; // r30
    unsigned char avail; // r29
    signed short checkTreeID; // r23
    int cnt; // r22
    signed short prefixCheckTreeID; // r0
    class ITreeTableAd * roomAd; // r0
    signed short checkTreeResult; // r0

    // References
    // -> class TTabScratchEntry * sCheckTreeModEntry;
}

// Range: 0x800A4E78 -> 0x800A4ED0
void ObjTestSim::SetupInteractionColors(class Interaction * pInteraction /* r30 */, signed short checkTreeResult /* r31 */) {}

// Range: 0x800A4ED0 -> 0x800A51C4
// this: r29
void ObjTestSim::AppendInteractionsForMenu(class InteractionList & interactions /* r30 */, int numToAdd /* r31 */, unsigned char bSameTileOnlyInDC /* r23 */) {
    // Local variables
    const class ITreeTable * treeTab; // r26
    signed short prefixTree; // r0
    unsigned char bExcludeFunctions; // r25
    const class ITreeTableEntry * entry; // r0
    class cXPerson * targetPerson; // r3
    class Interaction join; // r1+0x58
    unsigned char requireLocation; // r27
    int count; // r0
    int cnt; // r24
    const class ITreeTableEntry * entry; // r23
    class FTileRect activationArea; // r1+0x8
    class Interaction newInteraction; // r1+0x18

    // References
    // -> class EGlobal _globals;
    // -> class InteractionList * sMenu;
    // -> class ObjTestSim * sMenuBuilder;
}

// Range: 0x800A51C4 -> 0x800A5280
// this: r28
int ObjTestSim::RunMenuCheckTree(class InteractionList & interactions /* r29 */, class Interaction & interaction /* r30 */) {
    // Local variables
    unsigned long size; // r0

    // References
    // -> class Interaction * sInteraction;
}

// Range: 0x800A5280 -> 0x800A52B0
unsigned char ObjTestSim::IsMenuInProgress() {
    // References
    // -> class Interaction * sInteraction;
    // -> class InteractionList * sMenu;
    // -> class ObjTestSim * sMenuBuilder;
}

// Range: 0x800A52B0 -> 0x800A5394
void ObjTestSim::MakeNewMenuItem(const unsigned short * name /* r28 */, const signed short * stackVars /* r29 */, class StackElem * elem /* r30 */, signed short interactionResult /* r31 */) {
    // Local variables
    class Interaction newInteraction; // r1+0x8

    // References
    // -> class InteractionList * sMenu;
    // -> class Interaction * sInteraction;
}

// Range: 0x800A5394 -> 0x800A56B0
// this: r30
void ObjTestSim::AppendInteractionsForAuto(class InteractionList & intVector /* r31 */) {
    // Local variables
    const class ITreeTable * treeTab; // r26
    int numEntries; // r0
    unsigned char visitor; // r0
    signed short autonomy; // r0
    int i; // r27
    const class ITreeTableEntry * entry; // r25
    unsigned char allowedForType; // r24
    class cXPerson * otherPerson; // r24
    const class ITreeTableEntry * entry; // r25
}

// Range: 0x800A56B0 -> 0x800A56C0
InteractionList::InteractionList() {}

// Range: 0x800A56C0 -> 0x800A5714
// this: r30
InteractionList::~InteractionList() {}

// Range: 0x800A5714 -> 0x800A5734
unsigned long InteractionList::size() {
    // Local variables
    unsigned long result; // r3
    class Interaction * node; // r4
}

// Range: 0x800A5734 -> 0x800A5790
// this: r30
void InteractionList::push_back(const class Interaction & x /* r31 */) {}

// Range: 0x800A5790 -> 0x800A57BC
void InteractionList::push_back() {}

// Range: 0x800A57BC -> 0x800A5830
// this: r27
void InteractionList::push_back(class cXPerson * person /* r28 */, class cXObject * obj /* r29 */, int treeTabEntryIndex /* r30 */, int priority /* r31 */) {}

// Range: 0x800A5830 -> 0x800A589C
// this: r29
void InteractionList::push_back(class cXPerson * person /* r30 */, class cXPerson * otherPerson /* r31 */) {}

// Range: 0x800A589C -> 0x800A59B4
// this: r28
void InteractionList::remove(const class iterator & removeEntry /* r29 */) {
    // Local variables
    class Interaction * newHead; // r31
    class Interaction * node; // r30
    class Interaction * newNext; // r31
}

// Range: 0x800A59B4 -> 0x800A5A20
// this: r30
void InteractionList::clear() {
    // Local variables
    class Interaction * node; // r31
    class Interaction * tmp; // r3
}

// Range: 0x800A5A20 -> 0x800A5A38
void InteractionList::increment() {}

// Range: 0x800A5A38 -> 0x800A5A68
class Interaction * iterator::operator++() {
    // Local variables
    class Interaction * result; // r31
}

// Range: 0x800A5A68 -> 0x800A5CB0
static void __sinit_\game_simulator_core2_unity_cpp() {
    // References
    // -> class vector s_objPartition;
    // -> float kCornerOffset[6];
    // -> float kStraightOffset[6];
    // -> class SpacePartition fSpacePartition;
    // -> static class RoomScoreConstants sTheClient;
    // -> static class Scheme schemeVer1;
    // -> static class Scheme scheme32;
    // -> static class Scheme scheme16;
    // -> static class Scheme scheme8;
    // -> static class Interaction s_emptyCurrentInteraction;
    // -> static class AutonomyConstantsClient sTheAutonomyClient;
    // -> class MotiveCurveArray sBoarMoodWeightCurves;
    // -> class MotiveCurveArray sChimpMoodWeightCurves;
    // -> class MotiveCurveArray sAdultMoodWeightCurves;
    // -> class Queue s_TrappedQueue;
    // -> class Queue s_RoutingQueue;
    // -> class vector m_TileVector;
    // -> class vector m_TileVector;
    // -> class TTabScratchEntry sCheckTreeAds;
}


