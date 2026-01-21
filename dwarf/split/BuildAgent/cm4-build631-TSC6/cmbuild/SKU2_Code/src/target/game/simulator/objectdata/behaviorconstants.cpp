/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\behaviorconstants.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015D97C -> 0x8015E51C
*/
// Range: 0x8015D97C -> 0x8015D9E0
// this: r30
ObjectDataBehaviorConstants::ObjectDataBehaviorConstants() {
    // References
    // -> struct [anonymous] __vt__27ObjectDataBehaviorConstants;
}

// Range: 0x8015D9E0 -> 0x8015DA78
// this: r30
ObjectDataBehaviorConstants::~ObjectDataBehaviorConstants() {
    // References
    // -> struct [anonymous] __vt__27ObjectDataBehaviorConstants;
}

// Range: 0x8015DA78 -> 0x8015DA84
signed short ObjectDataBehaviorConstants::CountValues() {}

// Range: 0x8015DA84 -> 0x8015DB4C
// this: r30
void ObjectDataBehaviorConstants::SetValueCount(int count /* r31 */) {}

// Range: 0x8015DB4C -> 0x8015DB58
unsigned char ObjectDataBehaviorConstants::IsTuning() {}

// Range: 0x8015DB58 -> 0x8015DB7C
void ObjectDataBehaviorConstants::SetIsTuning() {}

// Range: 0x8015DB7C -> 0x8015DBA4
unsigned char ObjectDataBehaviorConstants::GetResourceName() {}

// Range: 0x8015DBA4 -> 0x8015DBAC
unsigned char ObjectDataBehaviorConstants::SetResourceName() {}

// Range: 0x8015DBAC -> 0x8015DC04
void * QuickDataBehaviorConstants::operator new(unsigned long size /* r31 */) {
    // Local variables
    void * p; // r0

    // References
    // -> class FastAllocPool g_poolQdBcon;
}

// Range: 0x8015DC04 -> 0x8015DC68
void QuickDataBehaviorConstants::operator delete(void * p /* r30 */) {
    // References
    // -> class FastAllocPool g_poolQdBcon;
}

// Range: 0x8015DC68 -> 0x8015DD2C
// this: r28
unsigned char QuickDataBehaviorConstants::LoadFromIndex(unsigned int fileID /* r29 */, int index /* r30 */) {
    // Local variables
    class iResFile * file; // r0
    const struct ResFile * pResFile; // r0
}

// Range: 0x8015DD2C -> 0x8015DDEC
// this: r28
unsigned char QuickDataBehaviorConstants::LoadFromDataID(const class ObjectDataID & id /* r30 */) {
    // Local variables
    class iResFile * file; // r0
    const struct ResFile * pResFile; // r0
}

// Range: 0x8015DDEC -> 0x8015DDF0
void QuickDataBehaviorConstants::SetValueCount() {}

// Range: 0x8015DDF0 -> 0x8015DE90
// this: r30
unsigned char QuickDataBehaviorConstants::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x8015DE90 -> 0x8015DEA4
unsigned int QuickDataBehaviorConstants::AddRef() {}

// Range: 0x8015DEA4 -> 0x8015DEF8
unsigned int QuickDataBehaviorConstants::Release() {}

// Range: 0x8015DEF8 -> 0x8015E0BC
// this: r27
void IFFBehaviorConstants::LoadData(class iResFile * file /* r28 */, struct HandleNode * handle /* r29 */) {
    // Local variables
    struct EdithBehaviorConstants * obc; // r30
    signed short cnt; // r0
    signed short i; // r5
    signed short resID; // r1+0x8
}

// Range: 0x8015E0BC -> 0x8015E164
// this: r28
unsigned char IFFBehaviorConstants::LoadFromIndex(unsigned int fileID /* r29 */, int index /* r30 */) {
    // Local variables
    class iResFile * file; // r31
    struct HandleNode * handle; // r5
}

// Range: 0x8015E164 -> 0x8015E174
unsigned char IFFBehaviorConstants::LoadOnlyNameAndIDFromIndex() {}

// Range: 0x8015E174 -> 0x8015E224
// this: r29
unsigned char IFFBehaviorConstants::LoadFromDataID(const class ObjectDataID & id /* r30 */) {
    // Local variables
    class iResFile * file; // r31
    struct HandleNode * handle; // r5
}

// Range: 0x8015E224 -> 0x8015E390
// this: r25
unsigned char IFFBehaviorConstants::SaveDataByID(const class ObjectDataID & id /* r26 */) {
    // Local variables
    class iResFile * file; // r30
    struct HandleNode * bcHand; // r29
    int err; // r0
    struct EdithBehaviorConstants * bc; // r28
    int i; // r27
}

// Range: 0x8015E390 -> 0x8015E3EC
// this: r30
unsigned char IFFBehaviorConstants::GetResourceName(class StringBuffer & name /* r31 */) const {}

// Range: 0x8015E3EC -> 0x8015E414
unsigned char IFFBehaviorConstants::SetResourceName() {}

// Range: 0x8015E414 -> 0x8015E4B4
// this: r30
unsigned char IFFBehaviorConstants::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x8015E4B4 -> 0x8015E4C8
unsigned int IFFBehaviorConstants::AddRef() {}

// Range: 0x8015E4C8 -> 0x8015E51C
unsigned int IFFBehaviorConstants::Release() {}


