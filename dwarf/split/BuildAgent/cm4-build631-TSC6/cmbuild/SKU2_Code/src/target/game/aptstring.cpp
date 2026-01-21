/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\aptstring.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80200D08 -> 0x80203D48
*/
// Range: 0x80200D08 -> 0x80200E98
// this: r29
AptFormat::AptFormat(class AptWord * pWord /* r30 */) {
    // References
    // -> class EClock _sysclock;
    // -> struct [anonymous] __vt__9AptFormat;
}

// Range: 0x80200E98 -> 0x80200F24
// this: r30
AptFormat::~AptFormat() {
    // References
    // -> struct [anonymous] __vt__9AptFormat;
}

// Range: 0x80200F24 -> 0x802016E4
// this: r30
void AptFormat::Draw(class EMat4 * trans /* r31 */, const class EVec4 * colourScale /* r28 */, const class EVec4 * colourTranslate /* r29 */) {
    // Local variables
    class EVec4 tmpColor; // r1+0x18
    float realTime; // f0
    float time; // f0
    class EVec4 blinkColor; // r1+0x8
    float realTime; // f0
    float time; // f0
    float realTime; // f0
    float time; // f29
    float theta; // f29
    float realtime; // f0
    int wordLen; // r29
    int tmpPos; // r3

    // References
    // -> class EMat4 s_restoreMatrix;
    // -> class EClock _sysclock;
    // -> class ERFont * gpFont;
}

// Range: 0x802016E4 -> 0x802016E8
void AptFormat::ProcessParticles() {}

// Range: 0x802016E8 -> 0x802017FC
// this: r30
void AptFormat::CopyForward(class AptFormat * src /* r31 */) {}

// Range: 0x80201810 -> 0x80201D08
// this: r25
void AptWord::Draw(class ERC * prc /* r26 */, class EMat4 * trans /* r27 */, const class EVec4 * colourScale /* r28 */, const class EVec4 * colourTranslate /* r29 */) {
    // Local variables
    enum EFontMatrixType rotType; // r31
    union fontFXcommand * fontFXdata; // r30
    class EVec2 vPos; // r1+0x40
    class EVec4 c; // r1+0x70
    class EVec2 dsOffset; // r1+0x38
    class EVec4 shadowColor; // r1+0x60
    union fontFXcommand tmpFX; // r1+0x18
    class EVec2 sOffset; // r1+0x30
    class EMat4 slightMat; // r1+0x80
    float oldTransX; // f31
    float oldTransY; // f30

    // References
    // -> class EVec4 _BLACK;
    // -> float _dt;
    // -> class ERFont * gpFont;
}

// Range: 0x80201D08 -> 0x80201DBC
// this: r27
void AptWord::SetWord(const unsigned short * wordOrLine /* r28 */, int nChar16 /* r29 */) {
    // Local variables
    unsigned short * oldString; // r31
    unsigned short * newText; // r30

    // References
    // -> class ERFont * gpFont;
}

// Range: 0x80201DBC -> 0x80201E68
// this: r31
void AptWord::Resize(float restoreSize /* f31 */) {
    // References
    // -> class ERFont * gpFont;
}

// Range: 0x80201E68 -> 0x80201F64
// this: r30
void AptWord::InsertSpace() {
    // Local variables
    int len; // r31
    unsigned short * newText; // r31

    // References
    // -> class ERFont * gpFont;
}

// Range: 0x80201F64 -> 0x80201F74
void AptWord::AddSpace() {}

// Range: 0x80201F74 -> 0x80201F84
void AptWord::AddLineFeed() {}

// Range: 0x80201F84 -> 0x8020202C
// this: r30
void AptWord::ForceFormat(const class AptWord * carryOver /* r31 */) {}

// Range: 0x8020202C -> 0x8020203C
static float GetPixelXSize() {
    // Local variables
    float xSize; // f1
}

// Range: 0x8020203C -> 0x802023CC
// this: r26
void AptShaderWord::Draw(class ERC * prc /* r27 */, class EMat4 * trans /* r28 */, const class EVec4 * colourScale /* r29 */, const class EVec4 * colourTranslate /* r30 */) {
    // Local variables
    class EVec4 color; // r1+0x48
    float rectListArgs[16]; // r1+0x98
    class ERShader * buttonShader; // r31
    class EVec2 vPos; // r1+0x10
    class E3DWindow * win3D; // r31
    class EMat4 mIdentityTemp; // r1+0x58

    // References
    // -> class ERFont * gpFont;
    // -> class BString2 s_empty;
}

// Range: 0x802023CC -> 0x802024B4
// this: r31
void AptShaderWord::Resize(float restoreSize /* f31 */) {
    // References
    // -> class BString2 s_empty;
    // -> class ERFont * gpFont;
}

// Range: 0x802024B4 -> 0x80202540
// this: r31
void AptShaderWord::SetShader() {
    // References
    // -> class ERFont * gpFont;
    // -> class BString2 s_empty;
}

// Range: 0x80202540 -> 0x8020260C
// this: r31
void AptShaderWord::InsertSpace() {
    // Local variables
    class AptWord tWord; // r1+0x10
    class EVec2 tPos; // r1+0x8

    // References
    // -> class ERFont * gpFont;
}

// Range: 0x8020260C -> 0x80202640
void AptLine::AddWord() {
    // Local variables
    class AptWord * word; // r5
}

// Range: 0x80202640 -> 0x80202698
class AptWord * AptLine::UnlinkWord() {
    // Local variables
    class AptWord * pPrev; // r5
    class AptWord * pTmp; // r6
}

// Range: 0x80202698 -> 0x80202714
void AptLine::Draw(class ERC * prc /* r27 */, class EMat4 * trans /* r28 */, const class EVec4 * colourScale /* r29 */, const class EVec4 * colourTranslate /* r30 */) {
    // Local variables
    class AptWord * word; // r3
    class AptWord * next; // r31
}

// Range: 0x80202714 -> 0x80202784
void AptParagraph::Draw(class ERC * prc /* r27 */, class EMat4 * trans /* r28 */, const class EVec4 * colourScale /* r29 */, const class EVec4 * colourTranslate /* r30 */) {
    // Local variables
    class AptLine * line; // r3
    class AptLine * next; // r31
}

// Range: 0x80202784 -> 0x802027B8
void AptParagraph::AddLine() {
    // Local variables
    class AptLine * line; // r5
}

// Range: 0x802027B8 -> 0x80202838
// this: r30
void AptParagraph::Empty() {
    // Local variables
    class AptLine * line; // r4
    class AptLine * next; // r31
}

// Range: 0x80202838 -> 0x80203C50
// this: r29
void AptParagraph::Build(class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */, float fontSize /* f21 */, class EVec4 & vColor /* r18 */, enum AptStringAlignment align /* r17 */, unsigned short * inText /* r16 */) {
    // Local variables
    class EVec2 vCenter; // r1+0x28
    unsigned short * ptr; // [invalid]
    class EVec2 vSize; // r1+0x20
    class EVec2 vTextSize; // r1+0x18
    unsigned char bControls; // r24
    float lineStart; // f22
    class EVec2 vLinePos; // r1+0x10
    unsigned short * pEnd; // r23
    unsigned short * pSpace; // r22
    unsigned char done; // r28
    unsigned char space; // r21
    unsigned char fakeHyphen; // r20
    unsigned char linefeed; // r19
    unsigned char embedded; // r18
    unsigned char endEmbedded; // r17
    int len; // r17
    unsigned short * tempBuffer; // r18
    class AptWord * word; // r17
    class AptWord * prev; // r18
    class AptWord * next; // r19
    class EVec4 vColor; // r1+0x50
    float scale; // f21
    int whichButton; // r20
    class EVec4 vColor; // r1+0x40
    class EVec4 cycle; // r1+0x30
    float lineY; // f27
    float lineSize; // f21
    int lastWordLineFeeds; // r18
    float maxLineHeight; // f28
    unsigned char bLargestIsFromFontTag; // r19
    unsigned char done; // r20
    class AptWord * word; // r21
    class AptWord * next; // r0
    class AptWord * word; // r3
    float lineWidth; // f1
    float lineStart; // f2
    class AptWord * next; // r0
    float wordWidth; // f1

    // References
    // -> static class EVec4 WT_COLOR;
    // -> class ERFont * gpFont;
}

// Range: 0x80203C50 -> 0x80203D48
int AptParagraph::GetWideHexValue(const unsigned short * str /* r29 */, int offset /* r30 */, int fieldWidth /* r31 */) {
    // Local variables
    unsigned short buf[9]; // r1+0x8
    int value; // r3
    int pos; // r7
    int power; // r6
}


