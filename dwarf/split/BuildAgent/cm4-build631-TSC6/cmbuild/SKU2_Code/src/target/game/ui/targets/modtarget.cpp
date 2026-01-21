/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\modtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F22C8 -> 0x801F3024
*/
// Range: 0x801F22C8 -> 0x801F24DC
// this: r29
MODTarget::MODTarget() {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const HUD_icon;
    // -> static const char * const HUD_warning_icon;
    // -> static const char * const HUD_warning_text;
    // -> static const char * const HUD_moon;
    // -> static const char * const HUD_cloudy;
    // -> static const char * const HUD_tod;
    // -> static const char * const HUD_meter;
    // -> static const char * const HUD_exists;
    // -> struct [anonymous] __vt__9MODTarget;
}

// Range: 0x801F24DC -> 0x801F2560
// this: r30
MODTarget::~MODTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MODTarget;
}

// Range: 0x801F2560 -> 0x801F2564
void MODTarget::SetVariable() {}

// Range: 0x801F2564 -> 0x801F26D0
// this: r29
char * MODTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
    int value; // r0
    int value; // r0
    unsigned char cloudy; // r0
    int value; // r0

    // References
    // -> static const char * const HUD_exists;
    // -> static const char * const HUD_moon;
    // -> static const char * const HUD_cloudy;
    // -> static const char * const HUD_tod;
    // -> static const char * const HUD_meter;
}

// Range: 0x801F26D0 -> 0x801F27C4
// this: r29
unsigned short * MODTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30

    // References
    // -> class EGlobal _globals;
    // -> static const char * const HUD_warning_text;
}

// Range: 0x801F27C4 -> 0x801F27C8
void MODTarget::Update() {}

// Range: 0x801F27C8 -> 0x801F282C
// this: r31
int MODTarget::GetMeterDisplayValue() {
    // Local variables
    class cXPerson * pPerson; // r3
    float tmpVal; // f0
    float avg; // f1

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F282C -> 0x801F28F8
// this: r30
void MODTarget::SetMeterValue() {
    // Local variables
    float scaledMeter; // f1
    int value; // r31
}

// Range: 0x801F28F8 -> 0x801F2944
unsigned char MODTarget::GetIsCloudy() {
    // Local variables
    unsigned char cloudy; // r31
    enum CloudLevel cloudLevel; // r0
}

// Range: 0x801F2944 -> 0x801F2968
int MODTarget::GetMoonDisplayValue() {
    // Local variables
    enum MoonPhase phase; // r0
}

// Range: 0x801F2968 -> 0x801F2A80
int MODTarget::GetTimeOfDayDisplayValue() {
    // Local variables
    class WeatherManager * pWeatherManager; // r31
    class cSimulator * pSimulator; // r30
    unsigned int hour; // r29
    unsigned int minutes; // r28
    int value; // r4

    // References
    // -> signed short EpochMinute;
    // -> signed short EpochHour;
    // -> class EGlobal _globals;
}

// Range: 0x801F2A80 -> 0x801F2C98
void MODTarget::DrawMoodHeadCallback(class ERC * prc /* r30 */, struct structDrawCBparams * params /* r31 */) {
    // Local variables
    class cXPerson * pPerson1; // r3
    int houseNumber; // r31
    class BString2 houseNameString; // r1+0xC
    char * houseName; // r0
    class AptParagraph paragraph; // r1+0x90
    class EVec4 vColor; // r1+0x40
    float fontSize; // f31
    class EVec2 vTL; // r1+0x18
    class EVec2 vBR; // r1+0x10
    class EMat4 mat; // r1+0x50
    class EVec4 vColorScale; // r1+0x30
    class EVec4 vColorTranslate; // r1+0x20

    // References
    // -> class EFontManager _fontman;
    // -> static class ERFont * pFont;
    // -> signed short lotToDisplayTextFor;
    // -> class EGlobal _globals;
}

// Range: 0x801F2C98 -> 0x801F2CEC
// this: r31
void MODTarget::ShowMood() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F2CEC -> 0x801F2D40
// this: r31
void MODTarget::HideMood() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F2D40 -> 0x801F2EB0
// this: r30
void MODTarget::UpdateMood() {
    // Local variables
    class cSimulator * pSimulator; // r0
    int currentTime; // r3
    char valStr[8]; // r1+0x18
    int currentMeter; // r31
    char valStr[8]; // r1+0x10
    int currentMoon; // r3
    char valStr[8]; // r1+0x8

    // References
    // -> static int lastMoon;
    // -> static int lastMeter;
    // -> class EGlobal _globals;
    // -> static int lastTime;
}

// Range: 0x801F2EB0 -> 0x801F2EB8
unsigned char MODTarget::IsMoodActive() {}

// Range: 0x801F2EB8 -> 0x801F2FA4
// this: r31
void MODTarget::SetWarning() {
    // Local variables
    int crMotiveIndex; // r0

    // References
    // -> class EGlobal _globals;
    // -> static const char * const HUD_warning_icon;
    // -> unsigned int RedMotiveShaderIDs[18];
}

// Range: 0x801F2FA4 -> 0x801F300C
int MODTarget::MapBarToCatalogRating() {}

// Range: 0x801F300C -> 0x801F3018
void MODTarget::RelationshipChangeOccured() {}

// Range: 0x801F3018 -> 0x801F301C
void MODTarget::SetDpadIcons() {}

// Range: 0x801F301C -> 0x801F3020
void MODTarget::RestoreLastDPadVisualState() {}

// Range: 0x801F3020 -> 0x801F3024
void MODTarget::SetTextButtonPressed() {}


