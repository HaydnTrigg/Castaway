/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_instance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80084ACC -> 0x8008536C
*/
// Range: 0x80084ACC -> 0x80084AD0
class EStream & operator<<() {}

// Range: 0x80084AD0 -> 0x80084B18
class EStream & operator>>(class EStream & s /* r30 */, class EInstance * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x80084B18 -> 0x80084B60
class EFile & operator>>(class EFile & s /* r30 */, class EInstance * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x80084B60 -> 0x80084C14
// this: r31
EInstance::EInstance() {
    // References
    // -> struct [anonymous] __vt__9EInstance;
}

// Range: 0x80084C14 -> 0x80084C88
// this: r30
EInstance::~EInstance() {
    // References
    // -> struct [anonymous] __vt__9EInstance;
}

// Range: 0x80084C88 -> 0x80084CEC
// this: r30
void EInstance::Write(class EStream & s /* r31 */) {}

// Range: 0x80084CEC -> 0x80084DB0
// this: r30
void EInstance::Read(class EStream & s /* r31 */) {
    // Local variables
    unsigned int dead1; // r1+0xC
    unsigned int dead2; // r1+0x8
}

// Range: 0x80084DB0 -> 0x80084E70
// this: r30
void EInstance::Load(class EFile & s /* r31 */) {
    // Local variables
    unsigned int dead1; // r1+0xC
    unsigned int dead2; // r1+0x8
}

// Range: 0x80084E70 -> 0x80084E98
// this: r6
void EInstance::SetBounds() {}

// Range: 0x80084E98 -> 0x80084EA0
void EInstance::GetBoundSphere() {}

// Range: 0x80084EA0 -> 0x80084EBC
void EInstance::RemoveFromLevel() {}

// Range: 0x80084EBC -> 0x80084F10
void TruncateLightDirection(class EVec3 & vDir /* r31 */) {}

// Range: 0x80084F10 -> 0x80085038
// this: r29
void EInstance::ShadowDirAtPoint(const class EVec3 & vTargetPos /* r26 */, class EVec3 & vTotalDir /* r27 */, int modelLocation /* r28 */) {
    // Local variables
    const struct LightData * lights; // r0
    const signed short * ids; // r0
    int i; // r29
    int id; // r0
    const struct LightData & l; // r28
    class EVec3 dir; // r1+0x20
    float dirMagSq; // f0
    float intensity; // f0
    float factor; // f1
}

// Range: 0x80085038 -> 0x8008512C
// this: r28
void EInstance::CalcShadowLight(class EVec3 & vDir /* r29 */, signed short modelLocation /* r31 */) {
    // Local variables
    const class RoomData * rd; // r30
    int nIndexOfStrongestDirectional; // r0
    class EVec3 vTargetPos; // r1+0x14
}

// Range: 0x8008512C -> 0x8008527C
// this: r25
void EInstance::ShadowDirAtPointWeighted(const class EVec3 & vTargetPos /* r26 */, class EVec3 & vTotalDir /* r27 */, int modelLocation /* r28 */) {
    // Local variables
    const struct LightData * lights; // r0
    struct LightWeight lw[12]; // r1+0x30
    int i; // r31
    int id; // r0
    const struct LightData & l; // r28
    class EVec3 dir; // r1+0x20
    float dirMagSq; // f0
    float intensity; // f0
    float factor; // f1
}

// Range: 0x8008527C -> 0x80085364
// this: r25
void EInstance::CalcLights(const class EVec3 & vTargetPos /* r26 */, struct ELights & lightsOut /* r27 */) {
    // Local variables
    const class RoomData * rd; // r0
    int i; // r28
}

// Range: 0x80085364 -> 0x8008536C
void EInstance::InsertInOrderTable() {}


