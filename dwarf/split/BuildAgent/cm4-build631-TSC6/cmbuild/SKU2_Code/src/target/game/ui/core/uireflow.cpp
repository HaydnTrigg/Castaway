/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uireflow.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801835D4 -> 0x80184624
*/
// Range: 0x801835D4 -> 0x801835F4
UIReflow::UIReflow() {}

// Range: 0x801835F4 -> 0x8018366C
// this: r29
UIReflow::~UIReflow() {}

// Range: 0x8018366C -> 0x80183788
void UIReflow::ResetSize(const char * pWID /* r29 */, int h /* r30 */, int w /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x88
    char pTemp[128]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80183788 -> 0x801838A4
void UIReflow::ResetPosition(const char * pWID /* r29 */, int x /* r30 */, int y /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x88
    char pTemp[128]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801838A4 -> 0x8018397C
void UIReflow::ResetVisibility(const char * pWID /* r30 */, unsigned char bOn /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x88
    char pTemp[128]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x8018397C -> 0x80183A54
void UIReflow::ResetFontSizeOverride(const char * pWID /* r30 */, unsigned int fontSizeOverride /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x88
    char pTemp[128]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80183A54 -> 0x80183B18
void UIReflow::ResetSwfAnimation(const char * pWID /* r30 */, const char * animation /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80183B18 -> 0x80183BDC
void UIReflow::ResetSwfFileName(const char * pWID /* r30 */, const char * swfFileName /* r31 */) {
    // Local variables
    char pChar[512]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80183BDC -> 0x80183C74
// this: r29
void UIReflow::AddToBlock(const char * pItem /* r30 */) {
    // Local variables
    int len; // r0
}

// Range: 0x80183C74 -> 0x80183D04
// this: r30
void UIReflow::ReallocateBlock() {
    // Local variables
    char * pTemp; // r31
    int len; // r0
}

// Range: 0x80183D04 -> 0x80183E4C
// this: r27
void UIReflow::OpenTweenBlock(const char * id /* r28 */, unsigned int duration /* r29 */, unsigned int method /* r30 */, const char * setVariableCallback /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80183E4C -> 0x80183EC4
// this: r31
void UIReflow::SubmitTweenBlock() {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80183EC4 -> 0x80183F2C
// this: r30
void UIReflow::Tween_X(int x /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80183F2C -> 0x80183F94
// this: r30
void UIReflow::Tween_Y(int y /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80183F94 -> 0x80183FFC
// this: r30
void UIReflow::Tween_H(unsigned int h /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80183FFC -> 0x80184064
// this: r30
void UIReflow::Tween_W(unsigned int w /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80184064 -> 0x801840CC
// this: r31
void UIReflow::Tween_Rotation(float degrees /* f31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x801840CC -> 0x80184144
// this: r30
void UIReflow::Tween_Alpha(unsigned int alpha /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80184144 -> 0x801841C4
// this: r30
void UIReflow::Tween_ColorOverride(unsigned int color /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x801841C4 -> 0x80184238
// this: r30
void UIReflow::Tween_ColorOnlyOverride(unsigned int color /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80184238 -> 0x801842A0
// this: r30
void UIReflow::Tween_FontSizeOverride(unsigned int size /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x801842A0 -> 0x80184318
// this: r31
void UIReflow::OpenReflowBlock() {}

// Range: 0x80184318 -> 0x801843A8
// this: r31
void UIReflow::SubmitReflowBlock() {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801843A8 -> 0x801843FC
// this: r30
void UIReflow::Reflow_Id(const char * id /* r31 */) {}

// Range: 0x801843FC -> 0x80184400
void UIReflow::Reflow_X() {}

// Range: 0x80184400 -> 0x80184404
void UIReflow::Reflow_Y() {}

// Range: 0x80184404 -> 0x80184408
void UIReflow::Reflow_H() {}

// Range: 0x80184408 -> 0x8018440C
void UIReflow::Reflow_W() {}

// Range: 0x8018440C -> 0x80184410
void UIReflow::Reflow_Rotation() {}

// Range: 0x80184410 -> 0x80184478
// this: r30
void UIReflow::Reflow_Visibility(unsigned char on /* r31 */) {
    // Local variables
    char pChar[128]; // r1+0x8
}

// Range: 0x80184478 -> 0x8018447C
void UIReflow::Reflow_Alpha() {}

// Range: 0x8018447C -> 0x801844D0
// this: r30
void UIReflow::Reflow_Action(const char * strVar /* r31 */) {}

// Range: 0x801844D0 -> 0x801844D4
void UIReflow::Reflow_ColorOverride() {}

// Range: 0x801844D4 -> 0x801844D8
void UIReflow::Reflow_ColorOnlyOverride() {}

// Range: 0x801844D8 -> 0x801844DC
void UIReflow::Reflow_FontSizeOverride() {}

// Range: 0x801844DC -> 0x80184530
// this: r30
void UIReflow::Reflow_SwfAnimation(const char * animation /* r31 */) {}

// Range: 0x80184530 -> 0x80184624
void UIReflow::Debug_PrintBlock() {
    // Local variables
    char * pReflowBlock; // r28
    int outLen; // r27
    unsigned short lineSize; // r26
    char lineString[96]; // r1+0x8
    unsigned short i; // r25
}


