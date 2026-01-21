/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\interaction.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011A754 -> 0x8011B0F0
*/
// Range: 0x8011A754 -> 0x8011A824
// this: r30
class Interaction & Interaction::operator=(const class Interaction & interaction /* r31 */) {}

// Range: 0x8011A824 -> 0x8011A8AC
// this: r31
Interaction::Interaction() {
    // References
    // -> struct [anonymous] __vt__11Interaction;
}

// Range: 0x8011A8AC -> 0x8011A98C
// this: r27
Interaction::Interaction(const class Interaction & other /* r28 */) {
    // References
    // -> struct [anonymous] __vt__11Interaction;
}

// Range: 0x8011A98C -> 0x8011AB68
// this: r28
Interaction::Interaction(class cXPerson * person /* r31 */, class cXPerson * personToJoin /* r29 */) {
    // Local variables
    const class Interaction & join; // r0
    const class ITreeTable * joinTreeTable; // r30
    const class ITreeTableEntry * joinEntry; // r0
    int joinIndex; // r29
    const class ITreeTableEntry * entry; // r30

    // References
    // -> struct [anonymous] __vt__11Interaction;
}

// Range: 0x8011AB68 -> 0x8011ACA8
// this: r27
Interaction::Interaction(class cXPerson * person /* r28 */, class cXObject * obj /* r29 */, int treeTabEntryIndex /* r30 */, int priority /* r31 */) {
    // Local variables
    const class ITreeTableEntry * entry; // r31

    // References
    // -> struct [anonymous] __vt__11Interaction;
}

// Range: 0x8011ACA8 -> 0x8011AD24
// this: r30
Interaction::~Interaction() {
    // References
    // -> struct [anonymous] __vt__11Interaction;
}

// Range: 0x8011AD24 -> 0x8011AD48
void Interaction::SetStackVars() {}

// Range: 0x8011AD48 -> 0x8011ADE0
// this: r29
void Interaction::SetLocalVars(signed short * localVars /* r30 */, int numLocalVars /* r31 */) {
    // Local variables
    int i; // r5
}

// Range: 0x8011ADE0 -> 0x8011AE38
// this: r31
class ITreeTableEntry * Interaction::GetEntry() const {
    // Local variables
    const class ITreeTable * ttab; // r0
}

// Range: 0x8011AE38 -> 0x8011AE4C
void Interaction::SetUniqueID() {
    // References
    // -> int sLastUniqueID;
}

// Range: 0x8011AE4C -> 0x8011AEF0
// this: r30
class BString2 & Interaction::GetName() const {
    // Local variables
    const class ITreeTableEntry * entry; // r31
    class BString2 & name; // [invalid]
}

// Range: 0x8011AEF0 -> 0x8011AF28
// this: r31
void Interaction::SetName() {}

// Range: 0x8011AF28 -> 0x8011B068
// this: r27
void Interaction::DoStream(class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    class ObjectModule * om; // r31
    unsigned char isJoin; // r30
    int type; // r1+0x8

    // References
    // -> int sLastUniqueID;
}

// Range: 0x8011B068 -> 0x8011B070
class cXObject * Interaction::GetStackObject() {}

// Range: 0x8011B070 -> 0x8011B078
class cXPerson * Interaction::GetPerson() {}

// Range: 0x8011B078 -> 0x8011B080
class cXObject * Interaction::GetIconObject() {}

// Range: 0x8011B080 -> 0x8011B088
void Interaction::SetIconObject() {}

// Range: 0x8011B088 -> 0x8011B0E4
class CTilePt * Interaction::GetCTilePt() {
    // References
    // -> static class CTilePt stat;
}

// Range: 0x8011B0E4 -> 0x8011B0F0
enum tColor Interaction::GetTextColor() {}


