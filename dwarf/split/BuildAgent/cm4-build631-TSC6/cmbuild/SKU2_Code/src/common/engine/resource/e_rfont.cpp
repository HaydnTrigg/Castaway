/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rfont.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DD4C4 -> 0x802E0914
*/
// Range: 0x802DD4C4 -> 0x802DD564
// this: r30
ERFont::ERFont() {
    // References
    // -> struct [anonymous] __vt__6ERFont;
}

// Range: 0x802DD564 -> 0x802DD5FC
// this: r30
ERFont::~ERFont() {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__6ERFont;
}

// Range: 0x802DD5FC -> 0x802DD648
void ERFont::Deallocate() {
    // Local variables
    class NLIteratorPtrType * i; // r31
    class EFontSize * pSize; // r0
}

// Range: 0x802DD648 -> 0x802DD764
// this: r29
void ERFont::Load(class EFile & s /* r30 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0xC
    class EString name; // r1+0x8
}

// Range: 0x802DD764 -> 0x802DD92C
// this: r28
void ERFont::SetSize(float ySize /* f30 */, float aspect /* f31 */) {
    // Local variables
    float closestDist; // f26
    class EFontSize * pClosest; // r30
    class NLIteratorPtrType * i; // r29
    class EFontSize * pSize; // r3
    float dist; // f2

    // References
    // -> class EVec2 m_vScaler;
}

// Range: 0x802DD92C -> 0x802DE970
// this: r22
void ERFont::DoDraw(void * szString /* r23 */, unsigned char doubleByte /* r14 */, unsigned char snapToPixelX /* f3 */, unsigned char snapToPixelY /* f4 */, const class EVec2 & vPos /* r17 */, class ERC * prc /* r24 */, class EVec2 * pvBotRightPosOut /* f7 */, class EMat4 * mat /* r25 */, class EVec2 * pivot /* r15 */, enum EFontMatrixType matType /* f10 */, union fontFXcommand * fxData /* r26 */) {
    // Local variables
    class EMat4 tmpMat; // r1+0x190
    union fontFXcommand tmpFXdata; // r1+0x1C
    class EMat4 matTemp; // r1+0x150
    class EVec2 vCurrentPos; // r1+0x40
    class EMat4 stringMat; // r1+0x110
    class EVec2 stringPivot; // r1+0x38
    float sizeScaler; // f31
    float fontScaler; // v3
    float topLine; // f8
    float baseLine; // v1
    float height; // f5
    float topPos; // f30
    float bottomPos; // f29
    float spaceWidth; // cr6
    int firstPage; // r0
    int lastPage; // f25
    class EVec2 vStartPos; // r1+0x30
    int charsToDraw[64]; // r1+0x1D0
    int cp; // r6
    int strLen; // r0
    unsigned int curChar; // r0
    class EFontCharacter * pChar; // r1+0x18
    int strLen; // r5
    unsigned int curChar; // r0
    int cPage; // f19
    int usePage; // r4
    int nChars; // r0
    float invTextureWidth; // f28
    float invTextureHeight; // f27
    float rectListArgs[352]; // r1+0x2D0
    float * pCurArg; // r30
    int numRectsInList; // r29
    class EFontPage * pPage; // r8
    int pos; // r28
    unsigned int c; // r27
    float width; // f1
    class EFontCharacter * pChar; // r1+0x14
    float leftPos; // f14
    float rightPos; // f26
    float topV; // f25
    float bottomV; // f24
    float leftU; // f23
    float rightU; // f22
    class EVec3 vCharPivot; // r1+0x84
    int offset; // r1+0x10
    float foffset; // f1
    class EVec2 vNextPos; // r1+0x28

    // References
    // -> static float kFontZValue;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EVec2 m_vScaler;
    // -> class EWindow * m_pCurrentWindow;
    // -> class E3DWindow * m_pCurrent3DWindow;
}

// Range: 0x802DE970 -> 0x802DF80C
// this: r15
void ERFont::DoDrawNormalize(void * szString /* r16 */, unsigned char doubleByte /* r17 */, unsigned char snapToPixelX /* f3 */, unsigned char snapToPixelY /* f4 */, const class EVec2 & vPos /* r23 */, class ERC * prc /* r18 */, class EVec2 * pvBotRightPosOut /* f7 */, class EWindow * pWin /* r22 */, class EMat4 * mat /* r19 */, class EVec2 * pivot /* r14 */, enum EFontMatrixType matType /* r20 */, union fontFXcommand * fxData /* r21 */) {
    // Local variables
    class EMat4 tmpMat; // r1+0xB8
    union fontFXcommand tmpFXdata; // r1+0x1C
    class EVec2 vCurrentPos; // r1+0x40
    class EMat4 stringMat; // r1+0x78
    class EVec2 stringPivot; // r1+0x38
    float xScale; // f0
    float yScale; // f0
    float invXScale; // f26
    float invYScale; // f25
    float sizeScaler; // v12
    float fontScaler; // v11
    float topLine; // f9
    float baseLine; // v9
    float height; // f3
    float topPos; // f24
    float bottomPos; // f23
    float spaceWidth; // v5
    int firstPage; // r0
    int lastPage; // r14
    class EVec2 vStartPos; // r1+0x30
    int charsToDraw[64]; // r1+0xF8
    int cp; // r6
    int strLen; // r0
    unsigned int curChar; // r0
    class EFontCharacter * pChar; // r1+0x18
    int strLen; // r5
    unsigned int curChar; // r0
    int cPage; // r26
    int usePage; // r4
    int nChars; // r0
    float invTextureWidth; // f22
    float invTextureHeight; // f21
    float rectListArgs[352]; // r1+0x1F8
    float * pCurArg; // r25
    int numRectsInList; // r24
    class EFontPage * pPage; // r5
    int pos; // r23
    unsigned int c; // r22
    float width; // f1
    class EFontCharacter * pChar; // r1+0x14
    float leftPos; // f0
    float rightPos; // f20
    float topV; // xer
    float bottomV; // f19
    float leftU; // f18
    float rightU; // f17
    float leftPosFinal; // f16
    float topPosFinal; // f15
    float rightPosFinal; // f14
    float bottomPosFinal; // f31
    float xDist; // f14
    float yDist; // f31
    class EVec4 centerRect; // r1+0x68
    float xDist; // f14
    float yDist; // f31
    class EVec4 centerRect; // r1+0x58
    int offset; // r1+0x10
    float foffset; // f1
    class EVec2 vNextPos; // r1+0x28

    // References
    // -> static float kFontZValue;
    // -> class ENgcRenderer _ngcRenderer;
    // -> class EGraphics * _pGfx;
    // -> class EWindow * m_pCurrentWindow;
    // -> class EVec2 m_vScaler;
}

// Range: 0x802DF80C -> 0x802DF8C0
class EVec2 ERFont::DoGetStringSize() {}

// Range: 0x802DF8C0 -> 0x802DF9F4
void ERFont::SnapPosToPixelNormalize() {
    // Local variables
    float xScale; // f0
    float yScale; // f0
    float invXScale; // f5
    float invYScale; // f3

    // References
    // -> class EGraphics * _pGfx;
    // -> class EWindow * m_pCurrentWindow;
}

// Range: 0x802DF9F4 -> 0x802DFDD4
// this: r18
void ERFont::DoDrawAlign(class ERC * prc /* r19 */, void * szString /* r20 */, unsigned char doubleByte /* r21 */, class EVec2 & vPos /* r22 */, enum EFontAlignX xAlign /* r23 */, enum EFontAlignY yAlign /* r24 */, class EVec2 * pvBotRightPosOut /* r25 */, class EMat4 * mat /* r26 */, enum EFontMatrixType matType /* r27 */, union fontFXcommand * fxData /* r28 */, unsigned char posNormalized /* r29 */) {
    // Local variables
    class EVec2 vSize; // r1+0x50
    unsigned char snapPosX; // r31
    unsigned char snapPosY; // r30
    class EVec3 vUsePos; // r1+0x58
}

// Range: 0x802DFDD4 -> 0x802DFF18
void ERFont::Draw(enum EFontAlignY yAlign /* r28 */, class EVec2 * pvBotRightPosOut /* r29 */, enum EFontMatrixType matType /* r30 */, union fontFXcommand * fxData /* r31 */, unsigned char posNormalized /* r12 */) {
    // Local variables
    unsigned short wideStr[4096]; // r1+0x20
    unsigned char * pSrc; // r5
    unsigned short * pDst; // r11
}

// Range: 0x802DFF18 -> 0x802E0118
// this: r24
void ERFont::DrawDs(class ERC * prc /* r25 */, const unsigned short * szString /* r26 */, const class EVec2 & vPos /* r27 */, enum EFontAlignX xAlign /* r28 */, enum EFontAlignY yAlign /* r29 */, class EVec2 * pvBotRightPosOut /* r30 */, float fDropShadowSize /* f9 */, unsigned char posNormalized /* r31 */) {
    // Local variables
    class EVec2 v; // r1+0x30
    class EVec4 c; // r1+0x48

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E0118 -> 0x802E019C
// this: r27
void ERFont::LoadFont() {
    // Local variables
    int cp; // r29
    class EFontPage * pPage; // r28

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E019C -> 0x802E0228
// this: r27
void ERFont::Select() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E0228 -> 0x802E0358
// this: r31
float ERFont::GetLineSpacing() {
    // Local variables
    class EVec2 vSize; // r1+0x30
    float height; // f3
}

// Range: 0x802E0358 -> 0x802E0914
void ERFont::ProcessFontFX(union fontFXcommand * fxData /* r30 */, class EMat4 * transMat /* r31 */) {
    // Local variables
    float tmpf; // f1
    float rumbleAmt; // f31
    class EMat4 tmpMat; // r1+0x88
    class EVec3 tmpVec; // r1+0x38
    int tmpPos; // r7
}


