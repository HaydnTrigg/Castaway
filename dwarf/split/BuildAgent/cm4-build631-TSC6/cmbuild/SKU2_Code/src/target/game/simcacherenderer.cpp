/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simcacherenderer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80245108 -> 0x8024611C
*/
// Range: 0x80245108 -> 0x8024517C
// this: r31
CachedSimRenderer::CachedSimRenderer() {
    // References
    // -> class EVec3 kDefaultSimPosition;
}

// Range: 0x8024517C -> 0x802451D8
// this: r30
CachedSimRenderer::~CachedSimRenderer() {}

// Range: 0x802451D8 -> 0x80245250
// this: r31
void CachedSimRenderer::SetupAnimController() {}

// Range: 0x80245250 -> 0x80245258
void CachedSimRenderer::SetPos() {}

// Range: 0x80245258 -> 0x8024526C
void CachedSimRenderer::SetAnim() {}

// Range: 0x8024526C -> 0x8024532C
// this: r31
void CachedSimRenderer::Update() {
    // Local variables
    class EMat4 mSimOrient; // r1+0x30
    class EVec3 vScale; // r1+0x20
    class EVec3 mRot; // r1+0x14
}

// Range: 0x8024532C -> 0x802453D0
// this: r28
void CachedSimRenderer::Render(class ERC * prc /* r29 */) {
    // Local variables
    int nNodes; // r31
    class EMat4 * pmNodes; // r30
}

// Range: 0x802453D0 -> 0x80245430
// this: r29
void CachedSimRenderer::GetBoneOrientation(int index /* r30 */, class EMat4 & orient /* r31 */) {}

// Range: 0x80245430 -> 0x80245438
void CachedSimRenderer::SetIndex() {}

// Range: 0x80245438 -> 0x80245444
void CachedSimRenderer::TurnOnBoneRendering() {}

// Range: 0x80245444 -> 0x80245450
void CachedSimRenderer::TurnOffBoneRendering() {}

// Range: 0x80245450 -> 0x8024611C
static void __sinit_\game_unity_cpp() {
    // References
    // -> class EVec3 kDefaultSimPosition;
    // -> class TerrainCameraTweakTool _gTerrainCameraTweakTool;
    // -> class WaterCameraTweakTool _gWaterCameraTweakTool;
    // -> struct CameraParameters s_defaultCameraParams[16];
    // -> class BString2 _sButton3NGC;
    // -> class BString2 _sButton2NGC;
    // -> class BString2 _sButton1NGC;
    // -> class BString2 _sThe3TextNGC;
    // -> class BString2 _sThe2TextNGC;
    // -> class BString2 _sThe1TextNGC;
    // -> class BString2 _sDpadRightButtNGC;
    // -> class BString2 _sDpadLeftButtNGC;
    // -> class BString2 _sDpadDownButtNGC;
    // -> class BString2 _sDpadUpButtNGC;
    // -> class BString2 _sdxButtNGC;
    // -> class BString2 _ssxButtNGC;
    // -> class BString2 _sIButtNGC;
    // -> class BString2 _sDButtNGC;
    // -> class BString2 _sGButtNGC;
    // -> class BString2 _sRoomButtNGC;
    // -> class BString2 _sSocialButtNGC;
    // -> class BString2 _sFunButtNGC;
    // -> class BString2 _sEnergyButtNGC;
    // -> class BString2 _sBladderButtNGC;
    // -> class BString2 _sHygieneButtNGC;
    // -> class BString2 _sComfortButtNGC;
    // -> class BString2 _sHungerButtNGC;
    // -> class BString2 _sDpadButtNGC;
    // -> class BString2 _sCenterCursorButtonButtNGC;
    // -> class BString2 _sWallButtonButtNGC;
    // -> class BString2 _sStartButtNGC;
    // -> class BString2 _sSelectButtNGC;
    // -> class BString2 _sRanalogButtNGC;
    // -> class BString2 _sLanalogButtNGC;
    // -> class BString2 _sZButtNGC;
    // -> class BString2 _sRButtNGC;
    // -> class BString2 _sLButtNGC;
    // -> class BString2 _sYButtNGC;
    // -> class BString2 _sXButtNGC;
    // -> class BString2 _sBButtNGC;
    // -> class BString2 _sAButtNGC;
    // -> class BString2 _sNewLine;
    // -> class BString2 _sButtonSymbol;
    // -> class BString2 _sRbrack;
    // -> class BString2 _sLbrack;
    // -> class BString2 _sComma;
    // -> class BString2 _sColon;
    // -> class BString2 _s100s;
    // -> class BString2 _s1000s;
    // -> class BString2 _sDlrSgn;
    // -> class BString2 _sLiquidate;
    // -> class BString2 _sName;
    // -> class BString2 _sAmount;
    // -> class BString2 _sNum;
    // -> class BString2 _sAM_PMLookup;
    // -> class BString2 _sMinLookup;
    // -> class BString2 _sHours24Lookup;
    // -> class BString2 _sHoursLookup;
    // -> class PlumbBobParms s_plumbBobParms;
    // -> static class EVec3 s_interactorColor;
    // -> static class EVec3 s_plumbBobAmbientColor;
    // -> static class EVec3 s_plumbBobLightDir;
    // -> static class EVec3 s_plumbBobLightColor;
    // -> static class EVec3 s_glowColor;
    // -> static class EVec3 s_camUp;
    // -> static class EVec3 s_camTarget;
    // -> static class EVec3 s_camEye;
    // -> class ETypeInfo * gpTypeInfo_ISimInstance;
    // -> class EVec3 _ERRORLight;
    // -> struct ELights _ERRORLightCur;
    // -> class ETypeInfo * gpTypeInfo_IShrubObject;
    // -> class ETypeInfo * gpTypeInfo_ISimsCounterTopObject;
    // -> class ETypeInfo * gpTypeInfo_ISimsMultiTileObjectModel;
    // -> class ETypeInfo * gpTypeInfo_ISimsWallObjectModel;
    // -> class ETypeInfo * gpTypeInfo_ISimsObjectModel;
    // -> class EVec3 _hlcolor2;
    // -> class EVec3 _hlcolor;
    // -> class ETypeInfo * gpTypeInfo_EIFloor;
    // -> static class EVec3 _lightingBuffer[3969];
    // -> class TNodeList m_stripsForLighting[40];
    // -> class EFloorShdTblNode _eFloorOrderTable[72];
    // -> class TRedBlackTree m_floors;
    // -> class EVec3 _mFloorVecZero;
    // -> class EVec4 _PRESSED;
    // -> class EVec4 _LT_BLUE;
    // -> class EVec4 _ORANGE;
    // -> class EVec4 _DK_GREAY;
    // -> class EVec4 _LT_GREAY;
    // -> class EVec4 _GREAY;
    // -> class EVec4 _MAJENTA;
    // -> class EVec4 _CYAN;
    // -> class EVec4 _GREEN;
    // -> class EVec4 _RED;
    // -> class EVec4 _BLUE;
    // -> class EVec4 _YELLOW;
    // -> class EVec4 _BLACK;
    // -> class EVec4 _WHITE;
    // -> class EVec4 _BLUEBLACK;
    // -> class EVec4 _vBlueBack;
    // -> class EVec2 _defLRTextureCoord;
    // -> class EVec2 _defULTextureCoord;
    // -> class EGlobal _globals;
    // -> class EInstance s_DaveRemoveTheSuck;
    // -> class QTimer s_frameTimer;
    // -> class QTimer s_stageTimer;
    // -> class GameData _gd;
    // -> class EWallSetup g_wallConfigs[6];
    // -> class ETypeInfo * gpTypeInfo_ESim;
    // -> static class EVec3 bigPosVal;
    // -> class EVec3 vRepairMeterColor;
    // -> class EVec3 vSkillMeterColor;
    // -> static struct ELights _ESim_GreenLight;
    // -> static class EVec3 _vGhostGreen;
    // -> class ETypeInfo * gpTypeInfo_EIWallPart;
    // -> class ETypeInfo * gpTypeInfo_EIFenceWall;
    // -> class WallFadeParms s_wallFadeParmsClassic;
    // -> class WallFadeParms s_wallFadeParmsDC;
    // -> static class EDummyFile _dummyFile;
    // -> class ESimsDataManager _simsdataman;
    // -> class RaycastLastHit m_lastHit;
    // -> class SimsCameraParameters s_params;
    // -> class NewControlParms s_newControlParms;
    // -> class BG _bg;
    // -> static class QTimer s_qtimerOutside;
    // -> static class QTimer s_qtimerInside;
    // -> class EMat4 s_restoreMatrix;
    // -> static class EVec4 WT_COLOR;
    // -> class Queue loadingQueue;
    // -> static class EVec2 pWXH[350];
    // -> static struct AptAuxLayerInfo gLevelInfo[60];
    // -> static class EMat4 vertexMatrix;
    // -> class ESimsApp _app;
    // -> class PlayerCheats g_playerCheats;
}


