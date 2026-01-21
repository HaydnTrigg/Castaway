/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_rlevel.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001AF68 -> 0x8001AF88
*/
// Range: 0x8001AF68 -> 0x8001AF7C
class EInstance * ERLevel::GetInstance() {}

// Range: 0x8001AF7C -> 0x8001AF88
int ERLevel::GetNumInstances() {}


// Range: 0x8004D2B0 -> 0x8004D2BC
void ERLevel::SetSunYawOffset() {}

// Range: 0x8004D2BC -> 0x8004D2C8
void ERLevel::SetDayNightLightTable() {}


// Range: 0x80059B30 -> 0x80059B3C
void ELevelDrawData::DirtyLights() {}

// Range: 0x80059B3C -> 0x80059B48
void ELevelDrawData::DirtyViewMatrix() {}

// Range: 0x80059B48 -> 0x80059B7C
// this: r31
void ELevelDrawData::DirtyShader() {}

// Range: 0x80059B7C -> 0x80059B8C
void ELevelDrawData::DirtyModelMatrix() {}


// Range: 0x800888A8 -> 0x800888F0
// this: r7
unsigned char ELevelDrawData::ChangeShader() {
    // Local variables
    unsigned char bChanged; // r6
}

// Range: 0x800888F0 -> 0x800889A4
// this: r28
void ELevelDrawData::AnimController(class EAnimController * pAnimController /* r29 */, int bMatsInDL /* r30 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
}

// Range: 0x800889A4 -> 0x800889CC
void ELevelDrawData::Lights() {}

// Range: 0x800889CC -> 0x800889F0
void ELevelDrawData::ModelMatrix() {}

// Range: 0x800889F0 -> 0x800889FC
enum EWallUpDownStateType ERLevel::WallFadeState() {}

// Range: 0x800889FC -> 0x80088A34
unsigned char ELevelDrawData::ChangeShaderShadow(class ERShader * pShader /* r5 */) {}

// Range: 0x80088A34 -> 0x80088A64
void ELevelDrawData::ViewMatrix() {}

// Range: 0x80088A64 -> 0x80088AA8
// this: r30
void ERLevel::RefreshRoomAssignment(class EInstance * pInstance /* r31 */) {}

// Range: 0x80088AA8 -> 0x80088ABC
void ELevelDrawData::ForceModelMatrix() {}

// Range: 0x80088ABC -> 0x80088ACC
unsigned char ELevelDrawData::IsSortEnabled() {}

// Range: 0x80088ACC -> 0x80088B4C
// this: r31
ELevelDrawData::ELevelDrawData() {}

// Range: 0x80088B4C -> 0x80088B5C
EOrderTableEntry::EOrderTableEntry() {}

// Range: 0x80088B5C -> 0x80088B6C
void ERLevel::operator delete() {
    // References
    // -> class ELevelManager _levelman;
}

// Range: 0x80088B6C -> 0x80088B90
void ERLevel::IncrementNumInstances() {}

// Range: 0x80088B90 -> 0x80088BA0
unsigned short ERLevel::GetReadVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088BA0 -> 0x80088CB8
// this: r28
void ELevelDrawData::Setup(class E3DWindow * pWin3D /* r29 */, const class EVec3 & vOutsideLight /* r30 */) {
    // Local variables
    float lightZScale; // f31
}

// Range: 0x80088CB8 -> 0x80088CC4
int ERLevel::GetNumOuterLotInstances() {}

// Range: 0x80088CC4 -> 0x80088CE4
void ERLevel::SafeDelete() {}

// Range: 0x80088CE4 -> 0x80088CF0
class ETypeInfo * ERLevel::GetTypeInfo() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088CF0 -> 0x80088D00
char * ERLevel::GetTypeName() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088D00 -> 0x80088D10
unsigned int ERLevel::GetTypeKey() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088D10 -> 0x80088D20
unsigned short ERLevel::GetTypeVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088D20 -> 0x80088D54
class ETypeInfo * ERLevel::RegisterType() {
    // References
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80088D54 -> 0x80088D5C
void ERLevel::Destruct() {}

// Range: 0x80088D5C -> 0x80088D94
void ERLevel::Construct() {}

// Range: 0x80088D94 -> 0x80088D9C
void * ERLevel::operator new() {}

// Range: 0x80088D9C -> 0x80088DD0
class ERLevel * ERLevel::New() {}

// Range: 0x80088DD0 -> 0x80088DE4
void * ERLevel::operator new() {
    // References
    // -> class ELevelManager _levelman;
}


// Range: 0x801CB2D8 -> 0x801CB2E4
class EIAmbLight * ERLevel::GetSunAmbient() {}

// Range: 0x801CB2E4 -> 0x801CB2F0
class EIDirLight * ERLevel::GetMoon() {}

// Range: 0x801CB2F0 -> 0x801CB2FC
class EIDirLight * ERLevel::GetSun() {}


// Range: 0x80217930 -> 0x8021793C
void ERLevel::SetDrawWallShadowsFunc() {}

// Range: 0x8021793C -> 0x80217954
void ERLevel::UpdateRooms() {}

// Range: 0x80217954 -> 0x80217968
void ERLevel::ClearWallIndexSaves() {}

// Range: 0x80217968 -> 0x80217974
void ERLevel::SetWallFadeState() {}

// Range: 0x80217974 -> 0x80217980
float ERLevel::GetPointLightDimmer() {}


// Range: 0x8024D780 -> 0x8024D78C
void ERLevel::SetRainBlend() {}

// Range: 0x8024D78C -> 0x8024D798
void ERLevel::SetSunTimes() {}


