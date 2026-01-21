/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\blueprintgrid.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80080378 -> 0x80080D5C
*/
// Range: 0x80080378 -> 0x800803BC
// this: r31
GridSegment::GridSegment() {}

// Range: 0x800803BC -> 0x80080430
// this: r30
GridSegment::~GridSegment() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80080430 -> 0x800805FC
// this: r31
BluePrintGrid::BluePrintGrid() {
    // Local variables
    class cFixedWorld * world; // r27
    char resourceName[24]; // r1+0x8
    int y; // r26
    int x; // r25
    int segmentIndex; // r5
    class GridSegment * pSeg; // r24

    // References
    // -> unsigned char m_bGridModeHasChanged;
}

// Range: 0x800805FC -> 0x8008067C
// this: r30
BluePrintGrid::~BluePrintGrid() {}

// Range: 0x8008067C -> 0x80080834
void BluePrintGrid::InitializeShader(class ERShader * pShader /* r30 */, char * resourceName /* r31 */) {
    // Local variables
    int i; // r25
    unsigned char color[4]; // r1+0x8
    struct ETextureDef td; // r1+0x10
    class ETexture * pTexture; // r25
    unsigned int shaderID; // r26

    // References
    // -> class EShaderManager _shaderman;
    // -> class EGraphics * _pGfx;
    // -> unsigned char s_fullAlphaValue;
    // -> unsigned int m_Palette[7];
    // -> unsigned char m_Colors[7][4];
}

// Range: 0x80080834 -> 0x80080A38
// this: r18
void BluePrintGrid::BuildTextures() {
    // Local variables
    class cFixedWorld * world; // r26
    unsigned char isMultiTile; // r25
    class ObjSelector * pObjSelector; // r0
    struct ObjDefinition * pObjDefinition; // r0
    int segmentIndex; // r24
    class GridSegment * pSeg; // r23
    class ETexture * pDest; // r22
    unsigned char bDestTextureSwizzled; // r21
    int pitchX; // r1+0x10
    int pitchY; // r1+0xC
    unsigned int * destPixels; // r0
    unsigned int destWidth; // r0
    int tileY; // r20
    int tileX; // r19
    class CTilePt currentTile; // r1+0x8
    unsigned char paletteIndex; // r17

    // References
    // -> unsigned int m_Palette[7];
    // -> unsigned char m_bGridModeHasChanged;
    // -> class cXObject * m_pObjectInHand;
}

// Range: 0x80080A38 -> 0x80080D5C
// this: r27
void BluePrintGrid::Draw(class ERC * rc /* r28 */) {
    // Local variables
    int segmentIndex; // r30
    class GridSegment * pSeg; // r29
    float l; // f28
    float r; // f27
    float t; // f26
    float b; // f25
    int lotId; // r0
    float k_z; // f24
    float w; // f23
    float h; // f22
    struct EGEVert v[4]; // r1+0x28

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
    // -> class cXObject * m_pObjectInHand;
}


