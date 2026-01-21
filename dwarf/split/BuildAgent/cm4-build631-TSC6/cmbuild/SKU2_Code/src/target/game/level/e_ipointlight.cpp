/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_ipointlight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80085ABC -> 0x80085F5C
*/
// Range: 0x80085ABC -> 0x80085B60
// this: r31
EIPointLight::EIPointLight() {
    // References
    // -> struct [anonymous] __vt__12EIPointLight;
}

// Range: 0x80085B60 -> 0x80085BBC
// this: r30
void EIPointLight::Write(class EStream & s /* r31 */) {}

// Range: 0x80085BBC -> 0x80085C28
// this: r30
void EIPointLight::Read(class EStream & s /* r31 */) {}

// Range: 0x80085C28 -> 0x80085CFC
// this: r30
void EIPointLight::CalcFullIntensityLightOnPoint(float & intensity /* r31 */) {
    // Local variables
    class EVec3 vDelta; // r1+0x8
    float distance; // f0
    float distanceFactor; // f2
}

// Range: 0x80085CFC -> 0x80085E24
// this: r28
void EIPointLight::LightingParameters(class EVec3 & vDirectionOut /* r29 */, class EVec3 & vLightColorOut /* r30 */) {
    // Local variables
    class EVec3 is; // r1+0x2C
}

// Range: 0x80085E24 -> 0x80085ED0
// this: r30
void EIPointLight::SetPosition(const class EVec3 & vPos /* r31 */) {
    // Local variables
    signed short loc; // r1+0xA
    signed short lightLoc; // r1+0x8
    int x; // r4
    int y; // r5

    // References
    // -> unsigned char m_haveLightsChanged;
}

// Range: 0x80085ED0 -> 0x80085F5C
// this: r31
void EIPointLight::Setup() {
    // Local variables
    class EBound3 b; // r1+0x20
}


