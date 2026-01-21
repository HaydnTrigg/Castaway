/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\aptauxpceorgl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FBE70 -> 0x801FF804
*/
// Range: 0x801FBE70 -> 0x801FBE78
unsigned char GetAptAuxAsyncFlashLoadQueueEmpty() {
    // References
    // -> static unsigned char bAptAuxAsyncFlashLoadQueueEmpty;
}

// Range: 0x801FBE78 -> 0x801FBE80
void SetAptAuxAsyncFlashLoadQueueEmpty() {
    // References
    // -> static unsigned char bAptAuxAsyncFlashLoadQueueEmpty;
}

// Range: 0x801FBE80 -> 0x801FBE8C
static unsigned int GetGameFontID() {}

// Range: 0x801FBE8C -> 0x801FBEC4
void * SimsAptMalloc(unsigned long nSize /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x801FBEC4 -> 0x801FBF00
void SimsAptFreeFunc(void * p /* r31 */) {}

// Range: 0x801FBF00 -> 0x801FBF04
static void command() {}

// Range: 0x801FBF04 -> 0x801FC11C
static void setExternVariable(const char * szVariable /* r30 */, const char * szValue /* r29 */) {
    // Local variables
    char szInitMessage[64]; // r1+0x8
    int nLevel; // r0
    unsigned char bAssert; // r30
    int i; // r0

    // References
    // -> static class UIObjectBase * gpUiObjectList[1];
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
    // -> static unsigned char gbFinishedFlashInit;
    // -> static const char * gszFlashInitFile;
}

// Range: 0x801FC11C -> 0x801FC128
static class AptValue * loadVariables() {
    // Local variables
    const char * szString; // r0
}

// Range: 0x801FC128 -> 0x801FC134
static class AptValue * loadVariablesNULL() {
    // Local variables
    const char * szString; // r0
}

// Range: 0x801FC134 -> 0x801FC138
static void sendVariables() {}

// Range: 0x801FC138 -> 0x801FC140
static int pointHitTest() {}

// Range: 0x801FC140 -> 0x801FC144
static void getRealTimeClock() {}

// Range: 0x801FC144 -> 0x801FC14C
static int getBytesTotal() {}

// Range: 0x801FC14C -> 0x801FC154
static int getBytesLoaded() {}

// Range: 0x801FC154 -> 0x801FC15C
static float getStageWidth() {}

// Range: 0x801FC15C -> 0x801FC164
static float getStageHeight() {}

// Range: 0x801FC164 -> 0x801FC410
static class AptValue * getExternVariable(const char * szVar /* r29 */) {
    // Local variables
    char * szString; // r31
    int lang; // r0
    class AptValue * pResult; // r30
    char * szString; // r30
    int i; // r0
    class AptValue * pValue; // r31

    // References
    // -> static class UIObjectBase * gpUiObjectList[1];
    // -> class EQuickdataManager _quickdataman;
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x801FC410 -> 0x801FC460
static void debugPrintStub() {}

// Range: 0x801FC460 -> 0x801FC464
void debugSetScreenGrabPending() {}

// Range: 0x801FC464 -> 0x801FC468
void debugAddSavedInput() {}

// Range: 0x801FC468 -> 0x801FC5FC
static void _loadGeometry(struct AptAuxLayerInfo * pLevel /* r30 */) {
    // Local variables
    char szFilename[256]; // r1+0x10
    struct AptAuxGeoInfo * pInfo; // r0
    void * pBase; // r0
    int i; // r31
    int j; // r5
}

// Range: 0x801FC610 -> 0x801FC7F0
static void * loadTexture(void * pUserData /* r26 */) {
    // Local variables
    int i; // r0
    struct AptAuxLayerInfo * pLevel; // r0
    void * pLoadedTexture; // r28
    struct AptAuxTexRemap * scan; // r3
    int texNum; // r27
    char szBuf[32]; // r1+0x10
    int width; // r1+0xC
    int height; // r1+0x8
    struct EShaderDef sd; // r1+0x30
    struct EShaderRenderPassDef & rpd; // r0

    // References
    // -> static class EShader * gpShaders[350];
    // -> class EGraphics * _pGfx;
    // -> static class EVec2 pWXH[350];
    // -> static class ERTexture * gpTextures[350];
    // -> static int gTextureSlots[350];
}

// Range: 0x801FC7F0 -> 0x801FC884
static void freeTexture() {
    // Local variables
    unsigned int nTexID; // r0

    // References
    // -> static int gTextureSlots[350];
    // -> static class ERTexture * gpTextures[350];
    // -> class EGraphics * _pGfx;
    // -> static class EShader * gpShaders[350];
}

// Range: 0x801FC884 -> 0x801FC9A0
static void bindTexture(void * pUserData /* r24 */, int nID /* r26 */, void * texture /* r25 */) {
    // Local variables
    struct AptAuxLayerInfo * pLevel; // r0
    struct AptAuxIDToChar * i; // r28
    struct AptAuxIDToChar * e; // r0
    struct AptAuxShape * pShape; // r0
    int iUnit; // r27
    struct AptAuxUnit * pUnit; // r26
    int nTexID; // r0
}

// Range: 0x801FC9A0 -> 0x801FC9F0
static void setColourTransform(struct AptCXForm * pCXForm /* r31 */) {
    // References
    // -> static float colourTranslate[4];
    // -> static float colourScale[4];
}

// Range: 0x801FC9F0 -> 0x801FC9FC
void AptAuxPCEorGL_VertexMatrixId() {
    // References
    // -> static class EMat4 vertexMatrix;
}

// Range: 0x801FC9FC -> 0x801FCA38
static void setVertexMatrix() {
    // References
    // -> static class EMat4 vertexMatrix;
}

// Range: 0x801FCA38 -> 0x801FCA40
static void * loadSound() {}

// Range: 0x801FCA40 -> 0x801FCA44
static void startSoundStream() {}

// Range: 0x801FCA44 -> 0x801FCA48
static void startSound() {}

// Range: 0x801FCA48 -> 0x801FCA4C
static void freeSound() {}

// Range: 0x801FCA4C -> 0x801FCA50
static void setBackgroundColour() {}

// Range: 0x801FCA50 -> 0x801FCA54
static void myassert() {}

// Range: 0x801FCA54 -> 0x801FCA7C
static void * loadRenderingUnit() {}

// Range: 0x801FCA7C -> 0x801FCA80
static void freeRenderingUnit() {}

// Range: 0x801FCA80 -> 0x801FCB28
static void drawRenderingUnit(void * renderingUnit /* r28 */, enum AptMaskRenderOperation eMaskOperation /* r29 */) {
    // Local variables
    int iUnit; // r30
    struct AptAuxShape * pShape; // r0
    struct AptAuxUnit * pUnit; // r3
}

// Range: 0x801FCB28 -> 0x801FD4D4
static void customControlRender(char * szType /* r28 */, char * szTarget /* r27 */, void * renderingUnit /* r26 */) {
    // Local variables
    int len; // r3
    char * useStr; // r30
    float rectListArgs[16]; // r1+0xC0
    class EVec2 vTL; // r1+0x20
    class EVec2 vBR; // r1+0x18
    class EVec2 vTransformedTL; // r1+0x10
    class EVec2 vTransformedBR; // r1+0x8
    class EVec3 tl; // r1+0xB4
    class EVec3 br; // r1+0xA8
    class EVec4 fixColorScale; // r1+0x98
    class EVec4 fixColorTranslate; // r1+0x88
    struct AptAuxShape * pShape; // r0
    const class EMat4 & projection; // r29
    float zValue; // f31
    struct AptAuxUnit * pUnit; // r3
    const float * p; // r27
    int i; // r0
    float x; // f1
    float y; // f2
    unsigned char bCCRMA; // r27
    unsigned char bCCRMS; // r26
    class ERShader * pShader; // r28
    class UI2D * pUi2d; // r0
    class EVec4 color; // r1+0x78
    float dist; // f29
    float dist; // f29
    float scaleX; // f28
    float scaleY; // f30
    class CUnlockDisplay * pDisplay; // r26
    class UI3D * pUi3d; // r0

    // References
    // -> struct structDrawCBparams s_drawCBparams;
    // -> int iUseStencil;
    // -> int iUseStencilCCR;
    // -> static class ERC * gPrc;
    // -> static class EMat4 vertexMatrix;
    // -> static float colourTranslate[4];
    // -> static float colourScale[4];
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801FD4D4 -> 0x801FD8E4
static void * allocateString(struct AptAllocateStringParameters * pParameters /* r30 */) {
    // Local variables
    int i; // r3
    unsigned char found; // r5
    struct AllocatedString * pAllocString; // r31
    int len; // r5
    char defaultString[2]; // r1+0x8
    unsigned short * localString; // r27
    unsigned short * qdString; // r4
    unsigned short * uidbString; // r0
    unsigned short * wideStr; // r28
    class EVec4 vColor; // r1+0x20
    unsigned int color; // r0
    class EVec2 tl; // r1+0x18
    class EVec2 br; // r1+0x10
    int lines; // r3
    class AptLine * line; // r4

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AllocatedString defaultAllocString;
    // -> struct AllocatedString allocStrings[250];
}

// Range: 0x801FD8E4 -> 0x801FDB98
void Debug_DrawTextBox(class ERC * prc /* r28 */, class EVec2 & tl /* r29 */, class EVec2 & br /* r30 */, int which /* r31 */) {
    // Local variables
    class EVec4 color; // r1+0x98
    float alpha; // f4
}

// Range: 0x801FDB98 -> 0x801FE288
void drawStringEor(void * string /* r30 */) {
    // Local variables
    struct AllocatedString * pString; // r0
    class EVec4 vColor; // r1+0x98
    class EVec4 fixColorScale; // r1+0x88
    class EVec4 fixColorTranslate; // r1+0x78
    class EVec2 vTrans; // r1+0x58
    class EVec2 vScale; // r1+0x50
    class EVec3 vCTL; // r1+0x6C
    class EVec3 vCBR; // r1+0x60
    const class EMat4 & orthoProj; // r28
    int fhich; // r28
    class EMat4 mTransform; // r1+0xA8
    class EVec2 vTL; // r1+0x48
    class EVec2 vBR; // r1+0x40
    class EVec2 vSize; // r1+0x38
    class EVec2 vOrigin; // r1+0x30
    class EVec2 vCenter; // r1+0x28
    unsigned short * outString; // r28
    class EVec2 vPrintArea; // r1+0x20

    // References
    // -> int iUseStencil;
    // -> static class ERC * gPrc;
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> static class EMat4 vertexMatrix;
    // -> class EGraphics * _pGfx;
    // -> static float colourTranslate[4];
    // -> static float colourScale[4];
    // -> class ERFont * gpFont;
}

// Range: 0x801FE288 -> 0x801FE314
static void deallocateString(void * string /* r30 */) {
    // Local variables
    struct AllocatedString * pString; // r0

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x801FE314 -> 0x801FE318
static void hardwareInit() {}

// Range: 0x801FE318 -> 0x801FE4C0
void AptAuxCheckFlashLoadingForBeingDone() {
    // Local variables
    struct LoadingFlashItems elem; // r1+0x8
    class ERFlash * flash; // r26
    struct LoadParams * pLP; // r25
    char szFilename[256]; // r1+0x18

    // References
    // -> static int nFinishedLoads;
    // -> class EFlashManager _flashman;
    // -> class Queue loadingQueue;
    // -> static struct LoadParams * aFinishedLoads[256];
}

// Range: 0x801FE4C0 -> 0x801FE65C
void AptAuxPCEorGL_LoadAnimation(const char * szBaseName /* r29 */, class AptSharedPtr & pAsyncLoadContext /* r30 */) {
    // Local variables
    struct LoadParams * pLP; // r31
    unsigned int i; // r4
    char szFilename[256]; // r1+0x118
    char szBaseFilename[256]; // r1+0x18
    const char * pSlash; // r4
    struct LoadingFlashItems elem; // r1+0x8

    // References
    // -> class Queue loadingQueue;
    // -> class EFlashManager _flashman;
    // -> static struct AptAuxLayerInfo gLevelInfo[60];
}

// Range: 0x801FE65C -> 0x801FE72C
void AptAuxPCEorGL_FinishAsyncLoads() {
    // Local variables
    int i; // r29

    // References
    // -> static int nFinishedLoads;
    // -> static struct LoadParams * aFinishedLoads[256];
}

// Range: 0x801FE72C -> 0x801FE730
void AptAuxPCEorGL_FreeConstantTable() {}

// Range: 0x801FE730 -> 0x801FE7B4
void AptAuxPCEorGL_FreeAnimation(void * pUserHandle /* r30 */) {
    // Local variables
    struct AptAuxLayerInfo * pLevel; // r0
    class vector temp; // r1+0x10
}

// Range: 0x801FE7B4 -> 0x801FE7BC
void AptAuxPCEorGL_TimerInit() {
    // References
    // -> static class EClock * aptClock;
}

// Range: 0x801FE7BC -> 0x801FE7C0
void AptAuxPCEorGL_TimerStartFrame() {}

// Range: 0x801FE7C0 -> 0x801FE7C4
unsigned int AptAuxPCEorGL_TimerGetTicks() {}

// Range: 0x801FE7C4 -> 0x801FEC58
void AptAuxPCEorGL_Initialize(int nWidth /* r28 */, int nHeight /* r29 */) {
    // Local variables
    int i; // r7

    // References
    // -> struct psystem * g_pTextParticleSystem;
    // -> static class ERTexture * gpTextures[350];
    // -> static int gTextureSlots[350];
    // -> static class EVec2 pWXH[350];
    // -> static class UIObjectBase * gpUiObjectList[1];
    // -> static int nFinishedLoads;
    // -> static struct AptAuxLayerInfo gLevelInfo[60];
    // -> static struct LoadParams * aFinishedLoads[256];
    // -> struct AllocatedString allocStrings[250];
    // -> class EFontManager _fontman;
    // -> static class EClock * aptClock;
    // -> class ERFont * gpFont;
    // -> static int gnSavedInputFileSize;
    // -> static struct AptSavedInputRecord * gaSavedInputs;
    // -> static class EMat4 vertexMatrix;
    // -> static struct _FILE * savedInputsFile;
    // -> static float colourScale[4];
    // -> static float colourTranslate[4];
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x801FEC58 -> 0x801FED1C
void AptAuxPCEorGL_Shutdown() {
    // References
    // -> struct psystem * g_pTextParticleSystem;
    // -> class ERFont * gpFont;
    // -> static class UIObjectBase * gpUiObjectList[1];
    // -> static int nFinishedLoads;
    // -> static struct AptAuxLayerInfo gLevelInfo[60];
    // -> static struct LoadParams * aFinishedLoads[256];
    // -> struct AllocatedString allocStrings[250];
    // -> static struct AptSavedInputRecord * gaSavedInputs;
    // -> static class EClock * aptClock;
}

// Range: 0x801FED1C -> 0x801FEF60
static void GetScaledVertexColor() {
    // Local variables
    float a; // f8
    float r; // f9
    float g; // f10
    float b; // f7

    // References
    // -> int _clampAptColorsAt128;
    // -> static float colourTranslate[4];
    // -> static float colourScale[4];
}

// Range: 0x801FEF60 -> 0x801FF278
static void DrawTriSolid(const struct AptAuxUnit * pUnit /* r29 */, enum AptMaskRenderOperation maskOp /* r30 */) {
    // Local variables
    float zValue; // f30
    unsigned int vertexColor[4]; // r1+0x8
    struct EGEVert verts[3]; // r1+0x18
    int count; // r31
    float * p; // r30
    int vert; // r0

    // References
    // -> int iUseStencil;
    // -> static class ERC * gPrc;
    // -> static class EMat4 vertexMatrix;
}

// Range: 0x801FF278 -> 0x801FF4D0
static void DrawTriTiledClipped(struct AptAuxUnit * pUnit /* r28 */) {
    // Local variables
    float zValue; // f30
    unsigned int vertexColor[4]; // r1+0x8
    struct EGEVert verts[3]; // r1+0x18
    int count; // r31
    float * p; // r30
    int vertexUvNumber; // r29
    int vert; // r0

    // References
    // -> static int _aptTriangleUVidx[12];
    // -> int iUseStencil;
    // -> static class ERC * gPrc;
    // -> static class EMat4 vertexMatrix;
    // -> static class EShader * gpShaders[350];
}

// Range: 0x801FF4D0 -> 0x801FF4D8
void AptAuxPCEorGL_SetRC() {
    // References
    // -> static class ERC * gPrc;
}

// Range: 0x801FF4D8 -> 0x801FF550
class UIObjectBase * AptAuxPCEorGL_SetUiObject(class UIObjectBase * uiObject /* r31 */) {
    // Local variables
    int i; // r4

    // References
    // -> static class UIObjectBase * gpUiObjectList[1];
}

// Range: 0x801FF550 -> 0x801FF5F0
unsigned char AptAuxPCEorGL_RemoveUiObject() {
    // Local variables
    int i; // r5
    unsigned char bFound; // r6

    // References
    // -> static class UIObjectBase * gpUiObjectList[1];
}

// Range: 0x801FF5F0 -> 0x801FF63C
void AptAuxPCEorGL_WaitOn() {
    // References
    // -> static unsigned char gbFinishedFlashInit;
    // -> static const char * gszFlashInitFile;
}

// Range: 0x801FF63C -> 0x801FF6C8
unsigned char AptAuxPCEorGL_LoadFile(const char * szName /* r31 */) {
    // Local variables
    class EString fullPath; // r1+0x8

    // References
    // -> class EApp * _pApp;
}

// Range: 0x801FF6C8 -> 0x801FF780
void UCS2ToUTF8() {
    // Local variables
    unsigned short * p; // r6
    int i; // r0
}

// Range: 0x801FF780 -> 0x801FF804
void UTF8ToUCS2() {
    // Local variables
    unsigned char * pSrc; // r3
    unsigned short * pDst; // r5
}


