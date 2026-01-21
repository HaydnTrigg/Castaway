/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_redithtreeset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D939C -> 0x802D99AC
*/
// Range: 0x802D939C -> 0x802D93CC
int IffMapCompare() {}

// Range: 0x802D93CC -> 0x802D9414
// this: r31
EREdithTreeSet::EREdithTreeSet() {
    // References
    // -> struct [anonymous] __vt__14EREdithTreeSet;
}

// Range: 0x802D9414 -> 0x802D9484
// this: r30
EREdithTreeSet::~EREdithTreeSet() {
    // References
    // -> struct [anonymous] __vt__14EREdithTreeSet;
}

// Range: 0x802D9484 -> 0x802D94EC
// this: r29
void EREdithTreeSet::Deallocate() {
    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x802D94EC -> 0x802D94F4
void EREdithTreeSet::Write() {}

// Range: 0x802D94F4 -> 0x802D94FC
void EREdithTreeSet::Read() {}

// Range: 0x802D94FC -> 0x802D9880
// this: r28
void EREdithTreeSet::Load(class EFile * pFile /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x44
    struct TreeSetHeader header; // r1+0x30
    unsigned char * buffer; // r29
    char * ptr; // r30
    int nameLen; // r5
    int size; // r31
    unsigned char * nextByte; // r29
    int bytesLeft; // r30
    class ChunkHeader header; // r1+0x1C
    class ChunkHeader header; // r1+0x8

    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x802D9880 -> 0x802D98EC
void * EREdithTreeSet::GetBehaviorTree() {
    // Local variables
    unsigned int lowItem; // r7
    unsigned int highItem; // r8
    unsigned int middleItem; // r9
}

// Range: 0x802D98EC -> 0x802D9918
int EREdithTreeSet::GetTreeIDByIndex() {}

// Range: 0x802D9918 -> 0x802D99AC
// this: r28
int EREdithTreeSet::GetTreeIDByName(const char * name /* r29 */) {
    // Local variables
    unsigned int treeCount; // r30
}


