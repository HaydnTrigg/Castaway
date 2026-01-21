/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\motiveeffects.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80123A4C -> 0x80124064
*/
// Range: 0x80123A4C -> 0x80123B30
// this: r29
MotiveEffects::MotiveEffects(class cXPerson * person /* r30 */) {
    // Local variables
    class PiecewisePt low; // r1+0x10
    class PiecewisePt high; // r1+0x8
    int c; // r30

    // References
    // -> static int sMotiveCurveMap[11];
}

// Range: 0x80123B30 -> 0x80123BE0
// this: r30
float MotiveEffects::GetCurrentScore() {
    // Local variables
    float result; // f31
    class MotiveCurve * c; // r31
}

// Range: 0x80123BE0 -> 0x80123EC0
// this: r24
float MotiveEffects::GetInteractionScore(const class ITreeTableEntry * pEntry /* r25 */, class cXObject * pObject /* r26 */, int relationshipFlags /* r27 */) {
    // Local variables
    float result; // f27
    class IGoalUnlock * pGoals; // r31
    int numAds; // r30
    class MotiveCurve * c; // r29
    float score; // f0
    int motive; // r21
    const class ITreeTableAd * ad; // r28
    float baseValue; // f26
    int personalityAd; // r0
    const struct PersonalityAdMap * map; // r21
    int persValue; // r21

    // References
    // -> static struct PersonalityAdMap sAdMap[26];
}

// Range: 0x80123EC0 -> 0x80124064
// this: r29
float MotiveEffects::CalcRelationshipModifier(const class ITreeTableAd * ad /* r30 */, int relationshipFlags /* r31 */) {
    // Local variables
    float score; // f31

    // References
    // -> int kPackBit;
    // -> int kMineBit;
    // -> int kMasterBit;
}


