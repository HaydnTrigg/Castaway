/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\lottolottransition.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80121C50 -> 0x80122974
*/
// Range: 0x80121C50 -> 0x80121C88
// this: r31
unsigned char Transition::IsAvailable() {}

// Range: 0x80121C88 -> 0x801221CC
void LotToLotTransition::Initialize() {
    // Local variables
    class ObjectFolder * objFolder; // r30
    class ObjSelector * os; // r0
    unsigned int fileID; // r0
    class NamespaceSelector * ns; // r31
    class ConsoleAutoRefCount bcSourceLotID; // r1+0x28
    unsigned char transitionID; // r29
    class Transition & t; // r28
    class ConsoleAutoRefCount bcDestinationLotID; // r1+0x24
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcTimeCost; // r1+0x20
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcHygieneCost; // r1+0x1C
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcEnergyCost; // r1+0x18
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcEnergyRequirement; // r1+0x14
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcBodySkillRequirement; // r1+0x10
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcMinBodyForDiscount; // r1+0xC
    unsigned char transitionID; // r28
    class ConsoleAutoRefCount bcEnergyCostDiscount; // r1+0x8
    unsigned char transitionID; // r28

    // References
    // -> class Transition m_Transitions[72];
    // -> unsigned char m_Initialized;
}

// Range: 0x801221CC -> 0x8012226C
void LotToLotTransition::UpdateAvailability(class Neighbor * neighbor /* r30 */) {
    // Local variables
    unsigned char autonomous; // r31
    int transitionIndex; // r30

    // References
    // -> class Transition m_Transitions[72];
    // -> class EGlobal _globals;
}

// Range: 0x8012226C -> 0x8012283C
unsigned char LotToLotTransition::BuildTransitionList(unsigned char sourceLot /* r19 */, unsigned char destinationLot /* r20 */, signed short neighborID /* r18 */, signed short & energyCost /* r21 */, float & timeCost /* r22 */, signed short & hygieneCost /* r23 */, unsigned char * pTransitions /* r24 */) {
    // Local variables
    class Neighbor * neighbor; // r25
    signed short bodySkill; // r0
    struct LotNode lotNodes[27]; // r1+0x18
    class intrusive_list nlOpen; // r1+0x10
    unsigned char i; // r26
    unsigned char ti; // r25
    struct LotNode * n; // r0
    struct LotNode * b; // [invalid]
    class intrusive_list_iterator it; // r1+0xC
    class intrusive_list_iterator end; // r1+0x8
    int transitionCount; // r28
    struct LotNode * n; // r27
    class Transition * t; // r0
    int i; // r4
    int r; // r18
    unsigned char tmp; // r19
    unsigned char i; // r26
    class Transition & t; // r25
    struct LotNode * l; // r3
    int h; // r7
    signed short transEnergyCost; // r8
    int costFunction; // r5
    float motiveWeight; // f0

    // References
    // -> class Transition m_Transitions[72];
}

// Range: 0x8012283C -> 0x8012288C
signed short LotToLotTransition::GetTransitionEnd(signed short transitionID /* r31 */) {
    // Local variables
    class Transition * t; // r0

    // References
    // -> class Transition m_Transitions[72];
}

// Range: 0x8012288C -> 0x80122974
void LotToLotTransition::GetTransitionCost(signed char transitionID /* r31 */, signed short neighborID /* r27 */, signed short & energyCost /* r28 */, float & timeCost /* r29 */, signed short & hygieneCost /* r30 */) {
    // Local variables
    class Transition * t; // r0
    class Neighbor * neighbor; // r0
    signed short bodySkill; // r0

    // References
    // -> class Transition m_Transitions[72];
}


