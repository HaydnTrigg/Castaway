/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\treetablequickdata.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80162B7C -> 0x801636D4
*/
// Range: 0x80162B7C -> 0x80162BD0
// this: r30
TreeTableAdQuickData::TreeTableAdQuickData(const class TreeTableAd * pTreeTableAd /* r31 */) {
    // References
    // -> struct [anonymous] __vt__20TreeTableAdQuickData;
}

// Range: 0x80162BD0 -> 0x80162C18
// this: r31
TreeTableAdQuickData::~TreeTableAdQuickData() {}

// Range: 0x80162C18 -> 0x80162CDC
// this: r30
TreeTableEntryQuickData::TreeTableEntryQuickData(const class TreeTableEntry * pTreeTableEntry /* r31 */) {
    // References
    // -> class TreeTableAd ZERO_AD;
    // -> class TreeTableAdQuickData * ZERO_AD_QD;
    // -> struct [anonymous] __vt__23TreeTableEntryQuickData;
}

// Range: 0x80162CDC -> 0x80162D54
// this: r30
TreeTableEntryQuickData::~TreeTableEntryQuickData() {
    // References
    // -> struct [anonymous] __vt__23TreeTableEntryQuickData;
}

// Range: 0x80162D54 -> 0x80162E4C
// this: r28
class ITreeTableAd * TreeTableEntryQuickData::GetAd(int motiveNum /* r29 */) const {
    // Local variables
    const class ITreeTableAd * pTreeTableAd; // r0
    const class TreeTableAd * pTreeTableAdQD; // r30

    // References
    // -> class TreeTableAdQuickData * ZERO_AD_QD;
}

// Range: 0x80162E4C -> 0x80162E74
unsigned short * TreeTableEntryQuickData::GetName() {}

// Range: 0x80162E74 -> 0x80162EF0
// this: r30
TreeTableQuickData::TreeTableQuickData() {
    // References
    // -> struct [anonymous] __vt__18TreeTableQuickData;
}

// Range: 0x80162EF0 -> 0x80162F68
// this: r30
TreeTableQuickData::~TreeTableQuickData() {
    // References
    // -> struct [anonymous] __vt__18TreeTableQuickData;
}

// Range: 0x80162F68 -> 0x80162F70
class ObjectDataID TreeTableQuickData::GetDataID() {}

// Range: 0x80162F70 -> 0x80163058
// this: r27
unsigned char TreeTableQuickData::LoadFromDataID(const class ObjectDataID & id /* r28 */) {
    // Local variables
    class iResFile * pFile; // r0
    const struct ResFile * pResFile; // r0
    const class TreeTable * pTreeTable; // r29
}

// Range: 0x80163058 -> 0x80163060
unsigned char TreeTableQuickData::SaveDataByID() {}

// Range: 0x80163060 -> 0x80163068
enum tObjectDataType TreeTableQuickData::GetDataSourceType() {}

// Range: 0x80163068 -> 0x801630C8
// this: r31
int TreeTableQuickData::Load() {
    // Local variables
    class ObjectDataID dataID; // r1+0x8
}

// Range: 0x801630C8 -> 0x801631B8
// this: r28
class ITreeTableEntry * TreeTableQuickData::GetNthEntry(int num /* r29 */) const {
    // Local variables
    const class ITreeTableEntry * pTreeTableEntry; // r0
    const class TreeTableEntry * pTreeTableEntryQD; // r30
}

// Range: 0x801631B8 -> 0x80163228
// this: r30
class ITreeTableEntry * TreeTableQuickData::GetEntryByIndex(int resID /* r31 */) const {
    // Local variables
    int index; // r0
}

// Range: 0x80163228 -> 0x801632A8
// this: r29
class ITreeTableEntry * TreeTableQuickData::GetEntryByTreeID(signed short checkTreeID /* r30 */, signed short actionTreeID /* r31 */) const {
    // Local variables
    int index; // r0
}

// Range: 0x801632A8 -> 0x80163318
// this: r30
class ITreeTableEntry * TreeTableQuickData::GetNthOrderedEntry(int num /* r31 */) const {
    // Local variables
    int index; // r0
}

// Range: 0x80163318 -> 0x801633B8
// this: r30
unsigned char TreeTableAdQuickData::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x801633B8 -> 0x801633CC
unsigned int TreeTableAdQuickData::AddRef() {}

// Range: 0x801633CC -> 0x80163420
unsigned int TreeTableAdQuickData::Release() {}

// Range: 0x80163420 -> 0x801634C0
// this: r30
unsigned char TreeTableEntryQuickData::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x801634C0 -> 0x801634D4
unsigned int TreeTableEntryQuickData::AddRef() {}

// Range: 0x801634D4 -> 0x80163528
unsigned int TreeTableEntryQuickData::Release() {}

// Range: 0x80163528 -> 0x801635C8
// this: r30
unsigned char TreeTableQuickData::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x801635C8 -> 0x801635DC
unsigned int TreeTableQuickData::AddRef() {}

// Range: 0x801635DC -> 0x80163630
unsigned int TreeTableQuickData::Release() {}

// Range: 0x80163630 -> 0x801636D4
static void __sinit_\game_simulator_objectdata_unity_cpp() {
    // References
    // -> class TreeTableAd ZERO_AD;
    // -> class FastAllocPool g_poolResourceBehaviorTree;
    // -> unsigned char g_rbTreePoolBuffer[564];
    // -> class FastAllocPool g_poolQdBcon;
    // -> unsigned char g_qdBconPoolBuffer[1664];
}


