/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\wrapper\textblock.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B638 -> 0x8009BD24
*/
// Range: 0x8009B638 -> 0x8009B738
// this: r31
void TextBlock::Clear() {}

// Range: 0x8009B738 -> 0x8009BBDC
// this: r19
void TextBlock::DrawWrappedText(class ERC * prc /* r20 */, class EVec2 & vPos /* r21 */, float fBottomY /* f28 */, float fAlpha /* f29 */) {
    // Local variables
    class EVec4 tColor; // r1+0x50
    float fWidth; // f31
    float fLineInc; // f30
    const unsigned short * pStrCur; // r28
    unsigned char bGotLine; // r27
    int iLineCnt; // r26
    unsigned short sLine[256]; // r1+0x60
    class EVec2 vNewStrW; // r1+0x48
    int nCharsInWord; // r3
    int iSkippedLines; // r25
    class EVec2 vCurTextPos; // r1+0x40
    int i; // r24
    unsigned short * pBuffPos; // r23
    int cPos0; // r22
    float fWordW; // f26
    float fLastWw; // f0
    class EVec2 vLineSize; // r1+0x38
    enum EFontAlignX xAlign; // r7
    enum EFontAlignY yAlign; // r0

    // References
    // -> class BString2 s_empty;
}

// Range: 0x8009BBDC -> 0x8009BD18
// this: r30
void TextBlock::DrawText(class ERC * prc /* r31 */, float fAlpha /* f31 */) {
    // Local variables
    class EVec2 vTopLeft; // r1+0x18
    class EVec2 vCenter; // r1+0x10
    class EVec2 vPos; // r1+0x8
    float fBottomY; // f1
}

// Range: 0x8009BD18 -> 0x8009BD24
void TextBlock::CalcSizes() {}


