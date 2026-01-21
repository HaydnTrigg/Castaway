/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\isiminstance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023B47C -> 0x8023B8E4
*/
// Range: 0x8023B47C -> 0x8023B4BC
// this: r31
IBaseSimInstance::~IBaseSimInstance() {}

// Range: 0x8023B4BC -> 0x8023B4C8
void ISimInstance::SetPlacementError() {}

// Range: 0x8023B4C8 -> 0x8023B5AC
// this: r29
ISimInstance::ISimInstance() {
    // References
    // -> struct ELights _ERRORLightCur;
    // -> class EVec3 _ERRORLight;
    // -> struct [anonymous] __vt__12ISimInstance;
}

// Range: 0x8023B5AC -> 0x8023B6F8
// this: r29
ISimInstance::~ISimInstance() {
    // References
    // -> struct [anonymous] __vt__12ISimInstance;
}

// Range: 0x8023B6F8 -> 0x8023B720
void ISimInstance::SetHighlight() {}

// Range: 0x8023B720 -> 0x8023B758
unsigned char ISimInstance::GetIsPerson() {}

// Range: 0x8023B758 -> 0x8023B770
class ObjSelector * ISimInstance::GetSelector() {}

// Range: 0x8023B770 -> 0x8023B844
// this: r30
unsigned char ISimInstance::HasInteractions() {
    // Local variables
    class cXObject * pXObj; // r31
    unsigned char hasInteractions; // r31
    class InteractionList mInteractions; // r1+0x8

    // References
    // -> int _framecount;
}

// Range: 0x8023B844 -> 0x8023B8E4
// this: r30
class EVec3 ISimInstance::GetLastNodePos() {
    // Local variables
    int numNodes; // r0
    class EMat4 pos; // r1+0x18
    class EVec3 retVal; // r1+0x8
}


