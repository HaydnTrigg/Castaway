/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\o2ttarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B5B30 -> 0x801B7F5C
*/
// Range: 0x801B5B30 -> 0x801B6134
// this: r30
O2TTarget::O2TTarget() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> static const char * const O2T_titleIcon;
    // -> static const char * const O2T_TitleText;
    // -> static const char * const O2T_Set_Wii_DPD_Zones;
    // -> static const char * const O2T_rgSizeY;
    // -> static const char * const O2T_rgSizeX;
    // -> static const char * const O2T_HoverTab;
    // -> static const char * const O2T_Rollover;
    // -> static const char * const O2T_rgOffSetY;
    // -> static const char * const O2T_rgOffSetX;
    // -> static const char * const O2T_rgKey;
    // -> static const char * const O2T_Close_Screen;
    // -> static const char * const O2T_Change_Main_State;
    // -> static const char * const O2T_Time_Delay;
    // -> static const char * const O2T_Invert_DC_Cam;
    // -> static const char * const O2T_Vibrate;
    // -> static const char * const O2T_Get_Cam_Rot_DC;
    // -> static const char * const O2T_invert_cam_rot;
    // -> static const char * const O2T_Classic_Free_Will;
    // -> static const char * const O2T_Free_Will;
    // -> static const char * const O2T_screen_y_step;
    // -> static const char * const O2T_screen_y;
    // -> static const char * const O2T_screen_x_step;
    // -> static const char * const O2T_screen_x;
    // -> static const char * const O2T_music_step;
    // -> static const char * const O2T_music_vol;
    // -> static const char * const O2T_sfx_step;
    // -> static const char * const O2T_sfx_vol;
    // -> class O2TTarget * m_pSingletonPtr;
    // -> struct [anonymous] __vt__9O2TTarget;
}

// Range: 0x801B6134 -> 0x801B6270
// this: r30
O2TTarget::~O2TTarget() {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class O2TTarget * m_pSingletonPtr;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9O2TTarget;
}

// Range: 0x801B6270 -> 0x801B62F0
// this: r31
void O2TTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801B62F0 -> 0x801B6A8C
// this: r28
void O2TTarget::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r31 */) {
    // Local variables
    int state; // r0
    float fVal; // f0
    float fVal; // f0
    float fVal; // f0
    float fVal; // f0
    float fVal; // f0
    float fVal; // f0
    int iValue; // r0
    int ctrlIndex; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iVal; // r0
    int iVal; // r3

    // References
    // -> static const char * const O2T_Set_Wii_DPD_Zones;
    // -> static const char * const O2T_Rollover;
    // -> static const char * const O2T_rgSizeY;
    // -> static const char * const O2T_rgSizeX;
    // -> static const char * const O2T_rgOffSetY;
    // -> static const char * const O2T_rgOffSetX;
    // -> static const char * const O2T_rgKey;
    // -> static const char * const O2T_HoverTab;
    // -> static const char * const O2T_Time_Delay;
    // -> static const char * const O2T_Invert_DC_Cam;
    // -> static const char * const O2T_Classic_Free_Will;
    // -> static const char * const O2T_Free_Will;
    // -> class EControllerManager * _pCtrlMan;
    // -> static const char * const O2T_Vibrate;
    // -> static const char * const O2T_screen_y;
    // -> static const char * const O2T_screen_x;
    // -> static const char * const O2T_music_vol;
    // -> static const char * const O2T_sfx_vol;
    // -> static const char * const O2T_Close_Screen;
    // -> class EGlobal _globals;
    // -> static const char * const O2T_Change_Main_State;
}

// Range: 0x801B6A8C -> 0x801B705C
// this: r28
char * O2TTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const O2T_Classic_Free_Will;
    // -> static const char * const O2T_Free_Will;
    // -> static const char * const O2T_Get_Cam_Rot_DC;
    // -> static const char * const O2T_invert_cam_rot;
    // -> static const char * const O2T_Vibrate;
    // -> static const char * const O2T_screen_y_step;
    // -> static const char * const O2T_screen_y;
    // -> static const char * const O2T_screen_x_step;
    // -> static const char * const O2T_screen_x;
    // -> static const char * const O2T_music_step;
    // -> static const char * const O2T_music_vol;
    // -> static const char * const O2T_sfx_step;
    // -> static const char * const O2T_sfx_vol;
    // -> static const char * const O2T_Invert_DC_Cam;
    // -> static const char * const O2T_Time_Delay;
    // -> class EGlobal _globals;
}

// Range: 0x801B705C -> 0x801B7418
// this: r28
unsigned short * O2TTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    const unsigned short * const pString; // r4
    unsigned short * outString; // r31

    // References
    // -> static const char * const O2T_TitleText;
    // -> class EGlobal _globals;
}

// Range: 0x801B7418 -> 0x801B7454
// this: r31
void O2TTarget::SetTopLevelState() {
    // Local variables
    int state; // r0
}

// Range: 0x801B7454 -> 0x801B74D4
// this: r30
void O2TTarget::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B74D4 -> 0x801B7680
// this: r30
void O2TTarget::OnStateChange() {
    // Local variables
    unsigned char audio_modified; // r0
    unsigned char options_modified; // r0
    class cSoundPlayer * pSoundPlayer; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B7680 -> 0x801B76FC
unsigned char O2TTarget::AudioOptionsModified() {
    // References
    // -> signed char m_CurrentVoiceVolume;
    // -> signed char m_CurrentAmbientVolume;
    // -> signed char m_CurrentMusicVolume;
    // -> signed char m_CurrentSFXVolume;
    // -> class EGlobal _globals;
}

// Range: 0x801B76FC -> 0x801B7780
unsigned char O2TTarget::GameOptionsModified() {
    // References
    // -> signed char m_DelayInitiateFreeWill;
    // -> unsigned char m_bFreeWillClassic;
    // -> unsigned char m_bFreeWill;
    // -> unsigned char m_bCameraRotateDC;
    // -> unsigned char m_bCameraRotate;
    // -> unsigned char m_bRumbleOn;
    // -> class EGlobal _globals;
}

// Range: 0x801B7780 -> 0x801B78CC
// this: r28
void O2TTarget::SpawnSaveSettingsDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B78CC -> 0x801B795C
// this: r31
void O2TTarget::OnSaveSettingsDialogClose() {}

// Range: 0x801B795C -> 0x801B798C
void O2TTarget::RememberAudioOptions() {
    // References
    // -> signed char m_CurrentMusicVolume;
    // -> signed char m_CurrentSFXVolume;
    // -> signed char m_CurrentVoiceVolume;
    // -> signed char m_CurrentAmbientVolume;
    // -> class EGlobal _globals;
}

// Range: 0x801B798C -> 0x801B7A28
void O2TTarget::RestoreAudioOptions() {
    // References
    // -> signed char m_CurrentVoiceVolume;
    // -> signed char m_CurrentAmbientVolume;
    // -> signed char m_CurrentMusicVolume;
    // -> signed char m_CurrentSFXVolume;
    // -> class EGlobal _globals;
}

// Range: 0x801B7A28 -> 0x801B7A68
void O2TTarget::RememberGameOptions() {
    // References
    // -> signed char m_DelayInitiateFreeWill;
    // -> unsigned char m_bFreeWillClassic;
    // -> unsigned char m_bFreeWill;
    // -> unsigned char m_bCameraRotateDC;
    // -> unsigned char m_bCameraRotate;
    // -> unsigned char m_bRumbleOn;
    // -> class EGlobal _globals;
}

// Range: 0x801B7A68 -> 0x801B7ABC
void O2TTarget::RestoreGameOptions() {
    // References
    // -> signed char m_DelayInitiateFreeWill;
    // -> unsigned char m_bFreeWillClassic;
    // -> unsigned char m_bFreeWill;
    // -> unsigned char m_bCameraRotateDC;
    // -> unsigned char m_bCameraRotate;
    // -> unsigned char m_bRumbleOn;
    // -> class EGlobal _globals;
}

// Range: 0x801B7ABC -> 0x801B7B34
float O2TTarget::GetScreenXLocal() {}

// Range: 0x801B7B34 -> 0x801B7B98
signed char O2TTarget::GetScreenXGlobal() {}

// Range: 0x801B7B98 -> 0x801B7C10
float O2TTarget::GetScreenYLocal() {}

// Range: 0x801B7C10 -> 0x801B7C74
signed char O2TTarget::GetScreenYGlobal() {}

// Range: 0x801B7C74 -> 0x801B7D9C
// this: r31
void O2TTarget::UpdateShaders() {
    // Local variables
    int value; // r0

    // References
    // -> static const char * const O2T_TabIcon2;
    // -> static const char * const O2T_TabIcon1;
    // -> static const char * const O2T_TabIcon0;
}

// Range: 0x801B7D9C -> 0x801B7E4C
// this: r30
void O2TTarget::ShowHelp() {
    // Local variables
    class UIScreenManager * pUISM; // r4

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B7E4C -> 0x801B7EC0
// this: r31
void O2TTarget::StartScreenWizard() {
    // Local variables
    int value; // r0
}

// Range: 0x801B7EC0 -> 0x801B7ED8
void O2TTarget::ExitScreenWizard() {}

// Range: 0x801B7ED8 -> 0x801B7F24
// this: r31
void O2TTarget::OnSaveGameComplete() {}

// Range: 0x801B7F24 -> 0x801B7F5C
unsigned char O2TTarget::FlashScreenReady() {
    // References
    // -> class EGlobal _globals;
}


