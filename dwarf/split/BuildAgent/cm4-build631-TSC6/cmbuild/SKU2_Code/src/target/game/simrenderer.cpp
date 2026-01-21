/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simrenderer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802416AC -> 0x80241B80
*/
// Range: 0x802416AC -> 0x802417C0
void SimRenderer::Render(class ERC * prc /* r25 */, class SimModelTSC6 * pSimModel /* r26 */, const class EAnimController & animController /* r27 */, const class EMat4 * animNodes /* r28 */, unsigned int numAnimNodes /* r29 */, unsigned char morphHead /* r31 */, unsigned char bRenderBody /* r30 */) {
    // Local variables
    unsigned int index; // r31
    enum eBodyPart renderBodyPart; // r0
    class EIStaticModel * pModelPart; // r0
}

// Range: 0x802417C0 -> 0x802418FC
void SimRenderer::Render(class ERC * prc /* r26 */, class SimModelTSC6 * pSimModel /* r27 */, const class EIStaticModel * * pRenderableModels /* r28 */, const class EAnimController & animController /* r31 */, const class EMat4 * animNodes /* r30 */, unsigned int numAnimNodes /* r29 */) {
    // Local variables
    enum eBodyPart renderBodyPart; // r30
    unsigned int index; // r29
    unsigned char bodyPartIndex; // r0
}

// Range: 0x802418FC -> 0x80241A20
void SimRenderer::RenderNoShader(class ERC * prc /* r26 */, class SimModelTSC6 * pSimModel /* r27 */, const class EAnimController & animController /* r28 */, class EMat4 * animNodes /* r29 */, unsigned int numAnimNodes /* r31 */, unsigned char morphHead /* r30 */) {
    // Local variables
    enum eBodyPart renderBodyPart; // r31
    unsigned int index; // r30
}

// Range: 0x80241A20 -> 0x80241B80
void SimRenderer::MorphParts(class SimModelTSC6 * pSimModel /* r29 */, unsigned char morphHead /* r30 */) {
    // Local variables
    unsigned int bodyPart; // r31
}


