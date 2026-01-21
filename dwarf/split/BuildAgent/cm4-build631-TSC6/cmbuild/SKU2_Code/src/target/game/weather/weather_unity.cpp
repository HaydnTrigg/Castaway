/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\weather\weather_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802483D4 -> 0x802483D4
*/
// total size: 0xA8
class RainEffect {
    // Static members
    static float VISIBLE_RAIN_OFFSET; // size: 0x4
    static float INVISIBLE_RAIN_OFFSET; // size: 0x4

    // Members
    class EMat4 m_windRotMatrix; // offset 0x0, size 0x40
    class ERModel * m_pModel; // offset 0x40, size 0x4
    float m_fRainModelRadius; // offset 0x44, size 0x4
    class ERCharacter * m_pCharacter; // offset 0x48, size 0x4
    class ERAnim * m_pAnim; // offset 0x4C, size 0x4
    struct MidLotObject m_midLotObjectData; // offset 0x50, size 0x3C
    class EMidLotInstance * m_pMidLotInstance; // offset 0x8C, size 0x4
    unsigned int m_nBlendAnimID; // offset 0x90, size 0x4
    class ERAnim * m_pBlendAnim; // offset 0x94, size 0x4
    float m_fBlendDuration; // offset 0x98, size 0x4
    class EVec2 m_vHouseOffset; // offset 0x9C, size 0x8
};
char * ms_szWeatherStateNames[4]; // size: 0x10, address: 0x804526F8
char * ms_szWindLevelNames[5]; // size: 0x14, address: 0x80452720
char * ms_szRainLevelNames[5]; // size: 0x14, address: 0x80452734
char * ms_szCloudLevelNames[3]; // size: 0xC, address: 0x80452754
char * ms_szFogLevelNames[4]; // size: 0x10, address: 0x80452760
char * ms_szMoonPhaseNames[8]; // size: 0x20, address: 0x804527C8
float MAX_WIND_SPEED; // size: 0x4, address: 0x805DEBD8
int SECONDS_BETWEEN_MOON_PHASE_UPDATE; // size: 0x4, address: 0x805DBDD0
// total size: 0x4
struct WeatherSounds {
    // Members
    class VECTOR soundevents; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct DamageEvent * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    struct WindyPlantInfo * mIterator; // offset 0x0, size 0x4
};

