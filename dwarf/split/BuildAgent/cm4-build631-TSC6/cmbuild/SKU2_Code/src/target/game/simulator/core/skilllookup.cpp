/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\skilllookup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E00F4 -> 0x800E0E8C
*/
// Range: 0x800E00F4 -> 0x800E013C
static void ReportMissingAnimation(class cXPerson * p /* r31 */) {}

// Range: 0x800E013C -> 0x800E0188
static void ReportMissingAnimation(class cXPerson * p /* r31 */) {}

// Range: 0x800E0188 -> 0x800E0314
void InitSkillLookup() {
    // Local variables
    unsigned int fileID; // r30
    signed short i; // r29

    // References
    // -> static class GlobalSkillTables * sTables;
}

// Range: 0x800E0314 -> 0x800E0408
// this: r29
GlobalSkillTables::GlobalSkillTables() {
    // Local variables
    int i; // r31
}

// Range: 0x800E0408 -> 0x800E0438
void DestroySkillLookup() {
    // References
    // -> static class GlobalSkillTables * sTables;
}

// Range: 0x800E04F8 -> 0x800E0620
enum TreeReturnCode resolveSkillForPassiveInfluence(class cXObject * pObj /* r26 */, class StackElem * elem /* r27 */, const class AnimateNewParam * param /* r28 */, const struct AnimRef * & theSkill /* r29 */, unsigned char & scale /* r30 */) {
    // Local variables
    signed short animID; // r31
}

// Range: 0x800E0620 -> 0x800E0664
static class AnimTable * GetStdPetTable() {}

// Range: 0x800E0664 -> 0x800E0874
enum TreeReturnCode GetStdAnimRef(class cXPerson * p /* r29 */, enum StdAnimIdx idx /* r30 */, const struct AnimRef * & name /* r31 */) {
    // Local variables
    class AnimTable * table; // r0
    class AnimTable * table; // r0
    class AnimTable * table; // r0

    // References
    // -> static struct AnimRef sHackedAnimRef;
    // -> static class GlobalSkillTables * sTables;
}

// Range: 0x800E0874 -> 0x800E0994
enum TreeReturnCode GetMiscAnimRef(class cXPerson * p /* r28 */, int idx /* r29 */, const struct AnimRef * & name /* r30 */, unsigned char & scale /* r31 */) {
    // Local variables
    class AnimTable * tableToUse; // r0
    class AnimTable * table; // r0
}

// Range: 0x800E0994 -> 0x800E0CBC
enum TreeReturnCode GetObjectAnimRef(class cXObject * obj /* r27 */, class cXPerson * p /* r28 */, int idx /* r29 */, const struct AnimRef * & name /* r30 */, unsigned char & scale /* r31 */) {
    // Local variables
    class AnimTable * tableToUse; // r24
    class cXObject * animTarget; // r25
    class ERSocialAnimationSet * pSAS; // r23
    class cXPerson * target; // r22
    int size; // r0
    int index; // r0
    int i; // r22
    class AnimTable * table; // r0
    class AnimTable * semiTable; // r0

    // References
    // -> class ESocialAnimationSetManager g_socialanimationsetman;
}

// Range: 0x800E0CBC -> 0x800E0D3C
enum TreeReturnCode GetObjectAnimRefPassiveInfluence(int idx /* r30 */, const struct AnimRef * & skillName /* r31 */) {
    // Local variables
    class AnimTable * tableToUse; // r0
}

// Range: 0x800E0D3C -> 0x800E0DCC
enum TreeReturnCode GetPersonStockAnimRef(class cXPerson * p /* r29 */, int idx /* r30 */, const struct AnimRef * & name /* r31 */) {
    // References
    // -> static class GlobalSkillTables * sTables;
}

// Range: 0x800E0DCC -> 0x800E0E5C
enum TreeReturnCode GetGlobalAnimRef(class cXPerson * p /* r29 */, int idx /* r30 */, const struct AnimRef * & name /* r31 */) {
    // References
    // -> static class GlobalSkillTables * sTables;
}

// Range: 0x800E0E5C -> 0x800E0E8C
class AnimTable * GetMiscSkillTableForType() {
    // References
    // -> static class GlobalSkillTables * sTables;
}


