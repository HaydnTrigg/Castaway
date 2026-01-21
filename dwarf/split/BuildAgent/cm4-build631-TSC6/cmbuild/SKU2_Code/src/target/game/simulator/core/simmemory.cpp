/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\simmemory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DDFD8 -> 0x800DE32C
*/
// Range: 0x800DDFD8 -> 0x800DDFEC
int GetIndividualMemory() {}

// Range: 0x800DDFEC -> 0x800DE0AC
static void SetupMatrixAndKey(int neighborId /* r30 */, int neighbor2Id /* r27 */, class RelMatrix * & matrix /* r28 */, int & key /* r29 */) {
    // Local variables
    class Neighborhood * ngh; // r31
    class Neighbor * neighbor; // r30
}

// Range: 0x800DE0AC -> 0x800DE110
int cXPerson::GetSimMemory(class cXPerson * person2 /* r30 */, int memID /* r29 */) {
    // Local variables
    int neighborId; // r31
    int neighbor2Id; // r30
}

// Range: 0x800DE110 -> 0x800DE184
void cXPerson::SetSimMemory(class cXPerson * person2 /* r30 */, int memID /* r28 */, int memValue /* r29 */) {
    // Local variables
    int neighborId; // r31
    int neighbor2Id; // r30
}

// Range: 0x800DE184 -> 0x800DE1E8
int cXPerson::GetDominantMemory(class cXPerson * person2 /* r30 */, int threshold /* r29 */) {
    // Local variables
    int neighborId; // r31
    int neighbor2Id; // r30
}

// Range: 0x800DE1E8 -> 0x800DE2A0
int ObjectModule::GetSimMemory(int memID /* r31 */) {
    // Local variables
    class RelMatrix * matrix; // r1+0xC
    int key; // r1+0x8
    int relationship; // r0

    // References
    // -> int sRelationshipLevelMin[10];
}

// Range: 0x800DE2A0 -> 0x800DE2A4
void ObjectModule::SetSimMemory() {}

// Range: 0x800DE2A4 -> 0x800DE32C
int ObjectModule::GetDominantMemory() {
    // Local variables
    class RelMatrix * matrix; // r1+0xC
    int key; // r1+0x8
    int relationship; // r0

    // References
    // -> int sRelationshipLevelMin[10];
}


