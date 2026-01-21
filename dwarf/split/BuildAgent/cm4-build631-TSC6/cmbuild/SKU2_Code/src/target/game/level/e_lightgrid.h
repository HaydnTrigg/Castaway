/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_lightgrid.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80027DF0 -> 0x80027E00
*/
// Range: 0x80027DF0 -> 0x80027E00
class RoomData * ELightGrid::GetRoomData() {}


// Range: 0x80085610 -> 0x80085618
struct LightData * ELightGrid::GetLights() {}

// Range: 0x80085618 -> 0x8008562C
LightWeight::LightWeight() {}

// Range: 0x8008562C -> 0x80085638
struct ELights * ELightGrid::GetOuterLotLights() {}

// Range: 0x80085638 -> 0x800856B4
// this: r29
RoomData::RoomData() {}

// Range: 0x800856B4 -> 0x800856FC
// this: r31
LightData::LightData() {}

// Range: 0x800856FC -> 0x80085718
void RoomData::FindClosestPointLights(struct LightData * in /* r0 */) {}

// Range: 0x80085718 -> 0x80085734
void RoomData::FindClosestPortalLights(struct LightData * in /* r0 */) {}

// Range: 0x80085734 -> 0x80085740
void ELightGrid::EvaluatePortalLights() {}

// Range: 0x80085740 -> 0x8008574C
void ELightGrid::EvaluatePointLights() {}

// Range: 0x8008574C -> 0x80085764
// this: r5
void ELightGrid::GetAmbient() {}

// Range: 0x80085764 -> 0x80085770
void ELightGrid::SetOutdated() {}


