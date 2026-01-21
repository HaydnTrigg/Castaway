/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\treetab.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E6128 -> 0x800E685C
*/
// Range: 0x800E6128 -> 0x800E61E0
float CalculateAttenuationValue() {
    // References
    // -> float gHighAttenuation;
    // -> float gModerateAttenuation;
    // -> float gLowAttenuation;
    // -> float gVisHighAttenuation;
    // -> float gVisModerateAttenuation;
    // -> float gVisLowAttenuation;
}

// Range: 0x800E61E0 -> 0x800E623C
// this: r30
class TreeTableEntry * TreeTable::GetNthEntry(int index /* r31 */) const {}

// Range: 0x800E623C -> 0x800E6250
// this: r5
float TreeTableEntry::GetAttenuationValue() const {}

// Range: 0x800E6250 -> 0x800E62D8
// this: r31
TTabScratchEntry::TTabScratchEntry() {
    // References
    // -> struct [anonymous] __vt__16TTabScratchEntry;
}

// Range: 0x800E62D8 -> 0x800E6340
// this: r30
TTabScratchEntry::~TTabScratchEntry() {}

// Range: 0x800E6340 -> 0x800E64C0
// this: r28
void TTabScratchEntry::CopyFrom(const class ITreeTableEntry * other /* r29 */) {
    // Local variables
    int adsToCopy; // r31
    int i; // r30
}

// Range: 0x800E64C0 -> 0x800E64D4
// this: r5
float TTabScratchEntry::GetAttenuationValue() const {}

// Range: 0x800E64D4 -> 0x800E6574
// this: r30
unsigned char TreeTableAdScratch::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x800E6574 -> 0x800E6588
unsigned int TreeTableAdScratch::AddRef() {}

// Range: 0x800E6588 -> 0x800E65DC
unsigned int TreeTableAdScratch::Release() {}

// Range: 0x800E65DC -> 0x800E667C
// this: r30
unsigned char TTabScratchEntry::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x800E667C -> 0x800E6690
unsigned int TTabScratchEntry::AddRef() {}

// Range: 0x800E6690 -> 0x800E66E4
unsigned int TTabScratchEntry::Release() {}

// Range: 0x800E66E4 -> 0x800E6774
// this: r29
int TreeTable::GetIndexOfResource(signed short resID /* r30 */) const {
    // Local variables
    const class TreeTableEntry * pEntry; // r0
}

// Range: 0x800E6774 -> 0x800E67FC
// this: r27
int TreeTable::GetIndexByTreeID(signed short checkTreeID /* r28 */, signed short actionTreeID /* r29 */) const {
    // Local variables
    int iNumEntries; // r0
    signed short cnt; // r30
    const class TreeTableEntry * srch; // r0
}

// Range: 0x800E67FC -> 0x800E685C
// this: r30
int TreeTable::GetIndexOfNthOrderedEntry(int num /* r31 */) const {
    // Local variables
    int iNumEntries; // r0
    const class TreeTableEntry * srch; // r0
}


