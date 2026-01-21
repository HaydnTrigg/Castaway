/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_iportalpointlight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80086094 -> 0x80086734
*/
// Range: 0x80086094 -> 0x800860D8
float EIPortalPointLight::GetLumina() {
    // Local variables
    float innerRadius; // f31
}

// Range: 0x800860D8 -> 0x80086198
// this: r30
EIPortalPointLight::EIPortalPointLight() {
    // Local variables
    class EVec3 vPos; // r1+0x8

    // References
    // -> static float c_intensityRegular[2];
    // -> static float c_outerRegular[2];
    // -> struct [anonymous] __vt__18EIPortalPointLight;
}

// Range: 0x800861F0 -> 0x80086208
void EIPortalPointLight::SetPortal() {}

// Range: 0x80086208 -> 0x80086284
// this: r30
void EIPortalPointLight::Write(class EStream & s /* r31 */) {
    // Local variables
    class EVec3 vPos; // r1+0x8
}

// Range: 0x80086284 -> 0x80086304
// this: r30
void EIPortalPointLight::Read(class EStream & s /* r31 */) {
    // Local variables
    class EVec3 vPos; // r1+0x8
}

// Range: 0x80086304 -> 0x8008640C
// this: r29
void EIPortalPointLight::LightingParameters(class EVec3 & vDirectionOut /* r30 */, class EVec3 & vLightColorOut /* r31 */) {
    // Local variables
    signed short objLoc; // r1+0xE
    signed short objLocOtherSide; // r1+0xC
    signed short objLightLoc; // r1+0xA
    signed short objLightLocOtherSide; // r1+0x8
}

// Range: 0x8008640C -> 0x800864B8
// this: r31
void EIPortalPointLight::Setup() {
    // Local variables
    class EBound3 b; // r1+0x30
    class EVec3 vPos; // r1+0x20
}

// Range: 0x800864B8 -> 0x800866BC
// this: r31
void EIPortalPointLight::Update() {
    // Local variables
    class EMat4 portalMatrix; // r1+0x28
    class EVec3 vLocalPos; // r1+0x18
    class EVec3 vNewPos; // r1+0xC
    signed short thisLocation; // r1+0xA
    signed short thisLightLoc; // r1+0x8
    int ix; // r0

    // References
    // -> static float c_intensityLarge[2];
    // -> static float c_outerLarge[2];
    // -> static float c_intensitySmall[2];
    // -> static float c_outerSmall[2];
    // -> static float c_intensityRegular[2];
    // -> static float c_outerRegular[2];
    // -> float _portalOffset;
}

// Range: 0x800866BC -> 0x80086734
// this: r30
unsigned char EIPortalPointLight::IsEnabled() {
    // Local variables
    signed short objLoc; // r1+0xE
    signed short objLightLoc; // r1+0xC
    signed short objLocOtherSide; // r1+0xA
    signed short objLightLocOtherSide; // r1+0x8
}


