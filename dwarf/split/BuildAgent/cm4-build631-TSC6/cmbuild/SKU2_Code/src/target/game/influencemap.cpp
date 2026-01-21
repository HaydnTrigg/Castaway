/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\influencemap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80231424 -> 0x80231EAC
*/
// Range: 0x80231424 -> 0x8023146C
// this: r31
IObjectList::IObjectList() {}

// Range: 0x8023146C -> 0x802314DC
// this: r30
void IObjectList::AddObject(class cXObject * obj /* r1+0x8 */) {
    // Local variables
    class cXObject * * iter; // r31
}

// Range: 0x802314DC -> 0x80231554
// this: r29
void IObjectList::RemoveObject(const class cXObject * obj /* r30 */) {
    // Local variables
    class cXObject * * iter; // r31
}

// Range: 0x80231554 -> 0x802315B0
// this: r31
void IObjectList::RemoveAll() {
    // Local variables
    class vector temp; // r1+0x10
}

// Range: 0x802315B0 -> 0x8023161C
// this: r30
InfluenceMap::InfluenceMap() {}

// Range: 0x80231674 -> 0x802316E0
// this: r30
InfluenceMap::~InfluenceMap() {}

// Range: 0x802316E0 -> 0x80231760
// this: r29
void InfluenceMap::RemoveAll() {
    // Local variables
    int x; // r31
    int y; // r30
}

// Range: 0x80231760 -> 0x8023197C
// this: r29
void InfluenceMap::CalculateAffectedArea(class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r28 */, class FTileRect & activationArea /* r31 */) const {
    // Local variables
    unsigned char subTileX; // r1+0xD
    unsigned char subTileY; // r1+0xC
    unsigned char north; // r1+0xB
    unsigned char east; // r1+0xA
    unsigned char south; // r1+0x9
    unsigned char west; // r1+0x8
    int numXTiles; // r1+0x14
    int numYTiles; // r1+0x10
    class FTilePt subTileOffset; // r1+0x18
    const class FTilePt & location; // r0
}

// Range: 0x8023197C -> 0x80231A94
// this: r24
void InfluenceMap::AddObjectToMap(class cXObject * baseObj /* r25 */) {
    // Local variables
    class cXObject * interactionObj; // r30
    const class ITreeTable * treeTab; // r29
    unsigned char haveProcessedDefaultActivation; // r28
    unsigned char needToAdd; // r27
    int count; // r0
    int cnt; // r26
    const class ITreeTableEntry * entry; // r25
}

// Range: 0x80231A94 -> 0x80231C6C
// this: r29
void InfluenceMap::AddObjectEntry(class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r27 */) {
    // Local variables
    class FTileRect activationArea; // r1+0x20
    const class FTilePt & entryOrigin; // r0
    class EVec2 gameWorldLocation; // r1+0x18
    class EVec2 affectedTile; // r1+0x10
    class EVec2 junkResult; // r1+0x8
    int x; // r31
    int y; // r27
}

// Range: 0x80231C6C -> 0x80231D84
// this: r24
void InfluenceMap::RemoveObjectFromMap(class cXObject * baseObj /* r25 */) {
    // Local variables
    class cXObject * interactionObj; // r30
    const class ITreeTable * treeTab; // r29
    unsigned char haveProcessedDefaultActivation; // r28
    unsigned char needToRemove; // r27
    int count; // r0
    int cnt; // r26
    const class ITreeTableEntry * entry; // r25
}

// Range: 0x80231D84 -> 0x80231E60
// this: r29
void InfluenceMap::RemoveObjectEntry(class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r28 */) {
    // Local variables
    class FTileRect activationArea; // r1+0x8
    int x; // r31
    int y; // r28
}

// Range: 0x80231E60 -> 0x80231EAC
class vector * InfluenceMap::GetObjectList() {}


