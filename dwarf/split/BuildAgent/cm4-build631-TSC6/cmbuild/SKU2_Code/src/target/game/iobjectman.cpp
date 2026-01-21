/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\iobjectman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023A1B4 -> 0x8023AF70
*/
// Range: 0x8023A1B4 -> 0x8023A1FC
// this: r30
EIObjectMan::EIObjectMan(class EHouse * pHouse /* r31 */) {}

// Range: 0x8023A254 -> 0x8023A258
void EIObjectMan::Init() {}

// Range: 0x8023A258 -> 0x8023A2C0
// this: r30
EIObjectMan::~EIObjectMan() {}

// Range: 0x8023A2C0 -> 0x8023A350
void EIObjectMan::TurnOffAllHighlights() {
    // Local variables
    unsigned int flags; // r31
    class RBIteratorPtrType * i; // r30
    class ISimInstance * pData; // r0
}

// Range: 0x8023A350 -> 0x8023A4F4
// this: r27
void EIObjectMan::GetObjectsWithCursorHighlight(unsigned int flag /* r25 */, class TNodeList & vList /* r26 */) {
    // Local variables
    class TileList paintingTileList; // r1+0x18
    class ObjectModule * pModule; // r0
    class cXObject * pObject; // r31
    signed short wflags; // r0
    class FTilePt fTilePt; // r1+0x10
    class RBIteratorPtrType * i; // r30
    class ISimInstance * pData; // r29
    class cXObject * pObj; // r31
    unsigned char restricted; // r28
    class cXMTObject * pMTObj; // r0
    class cXMTObject * pMTObject; // r27
    class FTilePt fTilePt; // r1+0x8
    const class FTilePt * it; // r0
}

// Range: 0x8023A4F4 -> 0x8023A55C
void EIObjectMan::GetObjects(class TNodeList & vList /* r30 */) {
    // Local variables
    class RBIteratorPtrType * i; // r31
    class ISimInstance * pData; // r0
}

// Range: 0x8023A55C -> 0x8023A5C0
// this: r30
void EIObjectMan::FreeSimsObjectInstance(class ISimInstance * pInst /* r31 */) {}

// Range: 0x8023A5C0 -> 0x8023A60C
// this: r30
void EIObjectMan::AttachObject(class ISimInstance * pModel /* r31 */) {
    // Local variables
    unsigned int handel; // r0
}

// Range: 0x8023A60C -> 0x8023A7E4
// this: r28
class ISimInstance * EIObjectMan::AddObject(class cXObject * pXObject /* r29 */, class ERLevel * pLevel /* r30 */) {
    // Local variables
    class ISimInstance * pModel; // r31
    unsigned int handle; // r0
    class RBIteratorPtrType * rbi; // r0
}

// Range: 0x8023A7E4 -> 0x8023A884
// this: r28
void EIObjectMan::RemoveObjectsFromHouse(class ERLevel * pLevel /* r29 */) {
    // Local variables
    class RBIteratorPtrType * i; // r31
    class ISimInstance * pIModel; // r30
}

// Range: 0x8023A884 -> 0x8023AB00
// this: r28
class ISimInstance * EIObjectMan::AllocSimsObjectInstance(class cXObject * pXOb /* r29 */) {
    // Local variables
    struct ObjDefinition * pDef; // r31
    class CTilePt tile; // r1+0x8
    const class VECTOR & vStates; // r30
    unsigned int eormodelId; // r30
    class ISimsObjectModel * pRetVal; // r30
}

// Range: 0x8023AB00 -> 0x8023AB08
void EIObjectMan::PostLoad() {}

// Range: 0x8023AB08 -> 0x8023AB6C
unsigned char APlacementObject() {
    // Local variables
    int q; // r5

    // References
    // -> struct HutData HutDataTable[39];
}

// Range: 0x8023AB6C -> 0x8023AE9C
// this: r25
void EIObjectMan::CountObjects(float & uniqueObjects /* r30 */, float & totalObjects /* r22 */, float & totalObjectsNodes /* r23 */, float & totalStructureObjects /* r24 */, float & modelRam /* r31 */) {
    // Local variables
    float cost; // f28
    int skipCount; // r27
    class map modelMap; // r1+0x28
    class RBIteratorPtrType * i; // r26
    class ISimInstance * pInst; // r25
    class ObjSelector * sel; // r29
    class EAnimController * ac; // r0
    class ERModel * model; // r1+0x18
    struct rbtree_iterator it; // r1+0x14
    struct model_dat mdat; // r1+0x1C
}

// Range: 0x8023AEF4 -> 0x8023AF70
void EIObjectMan::ReOrientHouse() {
    // Local variables
    class RBIteratorPtrType * it; // r31
    class ISimInstance * pInst; // r30
}


