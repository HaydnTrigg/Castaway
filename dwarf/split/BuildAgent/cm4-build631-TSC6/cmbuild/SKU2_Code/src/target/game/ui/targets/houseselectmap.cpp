/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\houseselectmap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C9358 -> 0x801CB188
*/
// Range: 0x801C9358 -> 0x801C96C8
// this: r31
CHouseSelectMap::CHouseSelectMap() {
    // Local variables
    class WeatherManager * pWeatherManager; // r0
    unsigned int nClockCycleCount; // r0
    char * szHouseName; // r0
    class EString strWorldMapDataset; // r1+0x8

    // References
    // -> class ECharacterManager _characterman;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class ELevelManager _levelman;
    // -> class EDatasetManager _datasetman;
    // -> signed short GameStartSecond;
    // -> signed short GameStartMinute;
    // -> signed short GameStartHour;
    // -> signed short GameStartDay;
    // -> signed short GameStartMonth;
    // -> signed short GameStartYear;
    // -> struct RandomLotInfo s_lots[26];
    // -> class EGlobal _globals;
}

// Range: 0x801C96C8 -> 0x801C97C0
// this: r29
CHouseSelectMap::~CHouseSelectMap() {
    // Local variables
    class CameraDirector * pCamDir; // r3
    class WeatherManager * pWeatherManager; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801C97C0 -> 0x801C9938
// this: r30
void CHouseSelectMap::DeallocateCurrentLot() {
    // Local variables
    class FrameEffectsManager * feMgr; // r0
    class DepthOfField * dofObj; // r31

    // References
    // -> class ELevelManager _levelman;
    // -> class ECharacterManager _characterman;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class EEngine * _pEngine;
    // -> class EGlobal _globals;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x801C9938 -> 0x801C99BC
// this: r31
void CHouseSelectMap::DeallocateNextLot() {
    // References
    // -> class ELevelManager _levelman;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x801C99BC -> 0x801C9D90
// this: r31
void CHouseSelectMap::Reset() {
    // Local variables
    class WeatherManager * pWeatherManager; // r29
    class EIDirLight * pSun; // r29
    class EIDirLight * pMoon; // r29
    class EIAmbLight * pSunAmbient; // r29
    struct CreatedLightingEntry lighting; // r1+0x58
    class CameraDirector * pCamDir; // r29
    class EVec3 vUp; // r1+0x48

    // References
    // -> class EDatasetManager _datasetman;
    // -> struct RandomLotInfo s_lots[26];
    // -> class EGlobal _globals;
    // -> class EEngine * _pEngine;
}

// Range: 0x801C9D90 -> 0x801C9DCC
void CHouseSelectMap::ResetToNextLot() {}

// Range: 0x801C9DCC -> 0x801CA290
// this: r31
void CHouseSelectMap::Update() {
    // Local variables
    class EAnimController * pAc; // r29
    class EAnimController * ac; // r0
    class EAnimController * ac; // r0
    class WeatherManager * pWeatherManager; // r29
    float dt; // f3
    signed short nDeltaHours; // r5
    signed short nDeltaMinutes; // r6
    signed short nDeltaSeconds; // r4
    struct CreatedLightingEntry lighting; // r1+0xA0
    struct CreatedLightingEntry lighting; // r1+0x8

    // References
    // -> float _gamedt;
    // -> float _dt;
    // -> class ECharacterManager _characterman;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> class EGlobal _globals;
}

// Range: 0x801CA290 -> 0x801CA394
// this: r31
unsigned char CHouseSelectMap::UpdateLoad() {
    // References
    // -> class ELevelManager _levelman;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x801CA394 -> 0x801CA398
void CHouseSelectMap::UpdateController() {}

// Range: 0x801CA398 -> 0x801CA6B4
// this: r31
void CHouseSelectMap::UpdateNextLotLoad() {
    // Local variables
    char * szNextHouseName; // r0
    char * szNextHouseName; // r0

    // References
    // -> class ELevelManager _levelman;
    // -> class EGlobal _globals;
    // -> class EDatasetManager _datasetman;
    // -> struct RandomLotInfo s_lots[26];
    // -> float _dt;
}

// Range: 0x801CA6B4 -> 0x801CA888
// this: r29
void CHouseSelectMap::Draw(class ERC * prc /* r27 */) {
    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
}

// Range: 0x801CA888 -> 0x801CB188
static void __sinit_\game_ui_targets_tsc5_unity_cpp() {
    // References
    // -> static const char * const SWS_sn48;
    // -> static const char * const SWS_sn46;
    // -> static const char * const SWS_sn45;
    // -> static const char * const SWS_sn44;
    // -> static const char * const SWS_sn43;
    // -> static const char * const SWS_sn42;
    // -> static const char * const SWS_sn41;
    // -> static const char * const SWS_sn40;
    // -> static const char * const SWS_sn38;
    // -> static const char * const SWS_sn37;
    // -> static const char * const SWS_sn36;
    // -> static const char * const SWS_sn35;
    // -> static const char * const SWS_sn34;
    // -> static const char * const SWS_sn33;
    // -> static const char * const SWS_sn32;
    // -> static const char * const SWS_sn31;
    // -> static const char * const SWS_sn30;
    // -> static const char * const SWS_sn28;
    // -> static const char * const SWS_sn27;
    // -> static const char * const SWS_sn26;
    // -> static const char * const SWS_sn25;
    // -> static const char * const SWS_sn24;
    // -> static const char * const SWS_sn23;
    // -> static const char * const SWS_sn22;
    // -> static const char * const SWS_sn21;
    // -> static const char * const SWS_sn20;
    // -> static const char * const SWS_sn58;
    // -> static const char * const SWS_sn57;
    // -> static const char * const SWS_sn56;
    // -> static const char * const SWS_sn55;
    // -> static const char * const SWS_sn54;
    // -> static const char * const SWS_sn53;
    // -> static const char * const SWS_sn52;
    // -> static const char * const SWS_sn51;
    // -> static const char * const SWS_sn47;
    // -> static const char * const SWS_sn50;
    // -> static const char * const SWS_sn00;
    // -> static const char * const SWS_sn18;
    // -> static const char * const SWS_sn17;
    // -> static const char * const SWS_sn16;
    // -> static const char * const SWS_sn15;
    // -> static const char * const SWS_sn14;
    // -> static const char * const SWS_sn13;
    // -> static const char * const SWS_sn12;
    // -> static const char * const SWS_sn11;
    // -> static const char * const SWS_sn10;
    // -> static const char * const SWS_sn08;
    // -> static const char * const SWS_sn07;
    // -> static const char * const SWS_sn06;
    // -> static const char * const SWS_sn05;
    // -> static const char * const SWS_sn04;
    // -> static const char * const SWS_sn03;
    // -> static const char * const SWS_sn02;
    // -> static const char * const RSP_shdr6;
    // -> static const char * const RSP_shdr5;
    // -> static const char * const RSP_shdr4;
    // -> static const char * const RSP_shdr3;
    // -> static const char * const RSP_shdr2;
    // -> static const char * const RSP_shdr1;
    // -> static const char * const RSP_shdr7;
    // -> static const char * const SWS_sn01;
    // -> static const char * const RSP_shdr0;
    // -> char * s_SWSShaderNames[6][9];
    // -> static char * const RSP_headShaderNames[8];
    // -> struct RandomLotInfo s_lots[26];
}


