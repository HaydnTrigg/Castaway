/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\objectdataobjdefinition.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FCC0 -> 0x80160330
*/
// Range: 0x8015FCC0 -> 0x8015FD3C
// this: r31
ObjectDataObjDefinition::ObjectDataObjDefinition() {
    // References
    // -> struct [anonymous] __vt__23ObjectDataObjDefinition;
}

// Range: 0x8015FD3C -> 0x8015FDA8
// this: r30
ObjectDataObjDefinition::~ObjectDataObjDefinition() {
    // References
    // -> struct [anonymous] __vt__23ObjectDataObjDefinition;
}

// Range: 0x8015FDA8 -> 0x8015FDB4
void ObjectDataObjDefinition::Detach() {}

// Range: 0x8015FDB4 -> 0x8015FDFC
// this: r31
void ObjectDataObjDefinition::Reset() {}

// Range: 0x8015FDFC -> 0x8015FE64
// this: r30
class ObjectDataObjDefinition & ObjectDataObjDefinition::operator=(const struct ObjDefinition & from /* r31 */) {
    // Local variables
    class StackString name; // r1+0x8
}

// Range: 0x8015FE64 -> 0x8015FED4
// this: r30
void ObjectDataObjDefinition::SetOwnDefinition(struct ObjDefinition * from /* r31 */) {
    // Local variables
    class StackString name; // r1+0x8
}

// Range: 0x8015FED4 -> 0x8015FF38
// this: r30
unsigned char ObjectDataObjDefinition::GetResourceName(class StringBuffer * name /* r31 */) const {}

// Range: 0x8015FF38 -> 0x8015FF44
unsigned int ObjectDataObjDefinition::GetResourceType() {}

// Range: 0x8015FF44 -> 0x8015FFD0
// this: r28
unsigned char ObjectDataObjDefinition::LoadFromQDataByID(unsigned int fileID /* r30 */, signed short id /* r29 */) {
    // Local variables
    class iResFile * file; // r0
    const struct ResFile * pResFile; // r30
    const struct ObjDefinition * objDef; // r0
}

// Range: 0x8015FFD0 -> 0x801600DC
// this: r29
unsigned char ObjectDataObjDefinition::LoadFromIFFByID(unsigned int fileID /* r30 */, signed short id /* r31 */) {
    // Local variables
    struct HandleNode * handle; // r31
    class iResFile * file; // r30
    struct ObjDefinition * objDef; // r0
    class StackString tempName; // r1+0x10
    signed short resID; // r1+0x8
}

// Range: 0x801600DC -> 0x801601D4
// this: r27
unsigned char ObjectDataObjDefinition::SaveToIFFFile(unsigned int fileID /* r30 */, signed short id /* r28 */, class StringBuffer & name /* r29 */) {
    // Local variables
    class iResFile * file; // r31
    struct HandleNode * btHand; // r30
    int err; // r0
    struct ObjDefinition * objDef; // r0
}

// Range: 0x801601D4 -> 0x801601DC
unsigned char ObjectDataObjDefinition::LoadFromDBByID() {}

// Range: 0x801601DC -> 0x801601E4
unsigned char ObjectDataObjDefinition::SaveToDB() {}

// Range: 0x801601E4 -> 0x80160284
// this: r30
unsigned char ObjectDataObjDefinition::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x80160284 -> 0x80160298
unsigned int ObjectDataObjDefinition::AddRef() {}

// Range: 0x80160298 -> 0x801602EC
unsigned int ObjectDataObjDefinition::Release() {}

// Range: 0x801602EC -> 0x80160328
// this: r31
void ObjectDataObjDefinition::SetResourceName() {}

// Range: 0x80160328 -> 0x80160330
void ObjectDataObjDefinition::SetResID() {}


