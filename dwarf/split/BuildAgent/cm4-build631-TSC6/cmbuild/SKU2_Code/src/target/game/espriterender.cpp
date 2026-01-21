/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\espriterender.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802232B8 -> 0x802254A0
*/
// Range: 0x802232B8 -> 0x80223384
// this: r30
ESpriteRender::ESpriteRender() {
    // References
    // -> struct [anonymous] __vt__13ESpriteRender;
}

// Range: 0x802233C4 -> 0x80223444
// this: r30
ESpriteRender::~ESpriteRender() {
    // References
    // -> struct [anonymous] __vt__13ESpriteRender;
}

// Range: 0x80223444 -> 0x8022359C
// this: r31
void ESpriteRender::DeleteShaders() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8022359C -> 0x80223748
// this: r30
void ESpriteRender::Update() {
    // Local variables
    const class SpriteSlot & sslot; // r31
    class ESim * pESim; // r0
    class ESim * pESim; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80223748 -> 0x80223940
// this: r29
void ESpriteRender::DrawIntoOrderTable() {
    // Local variables
    const class SpriteSlot & sslot; // r31
    class ISimInstance * pInstance; // r30
    class EVec3 vPos; // r1+0x24
    class E3DWindow * pWin; // r0
    class ESim * pESim; // r0
    class cXPerson * simPerson; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80223940 -> 0x8022398C
void ESpriteRender::SpriteRenderOrderTableCallback(struct ELevelDrawData & renderParam /* r31 */) {}

// Range: 0x8022398C -> 0x80223E9C
// this: r27
void ESpriteRender::DrawDirectly(class ERC * prc /* r28 */) {
    // Local variables
    const class SpriteSlot & sslot; // r30
    class ISimInstance * pInstance; // r31
    class EVec3 vPos; // r1+0xCC
    class E3DWindow * pWin; // r0
    float scaleX; // f0
    float scaleY; // f0
    unsigned char drawFore; // r4
    const struct EShaderDef * shader_def; // r0
    signed short offset; // r29
    class EVec3 vPos_offset; // r1+0xC0
    float offset_scale; // f28
    const struct EShaderDef * shader_def; // r0
    signed short offset; // r29
    class EVec3 vPos_offset; // r1+0xB4
    float offset_scale; // f28
    float dx; // f28
    float dy; // f29
}

// Range: 0x80223E9C -> 0x802244A4
// this: r30
void ESpriteRender::SetSprite() {
    // Local variables
    const class SpriteSlot & sslot; // r31
    int balloonSpriteID; // r28
    const struct SpriteIdToResIdNode * pforeNode; // r0
    class ESim * pESim; // r28
    int value; // r8
    class ObjSelector * pSel; // r27
    const struct ResData * pRes; // r3
    class ObjSelector * pOrigSelMaster; // r0
    class ObjSelector * pSearchSel; // r26
    struct ObjDefinition * pCurDef; // r0
    const struct ResData * pRes; // r0
    const struct SpriteIdToResIdNode * pBackNode; // r0
    const struct SpriteIdToResIdNode * pOverlayNode; // r0

    // References
    // -> class EGlobal _globals;
    // -> unsigned int gValueIndexShaders[10];
    // -> class EShaderManager _shaderman;
}

// Range: 0x802244A4 -> 0x80224784
unsigned char ESpriteRender::SetUpRect(class ERC * prc /* r26 */, const class EVec3 & vPos /* r27 */, float xSize /* f30 */, float ySize /* f31 */, struct SpriteData & data /* r28 */) {
    // Local variables
    class E3DWindow * pWin; // r0
    class EVec3 vDiagonal; // r1+0x38
    float * positions; // r31
    float * texCoords; // r30
    unsigned char * colors; // r29
    const class EVec4 & vColor; // r28
}

// Range: 0x80224784 -> 0x80224C90
// this: r29
unsigned char ESpriteRender::SetUpDoubleRect(class ERC * prc /* r24 */, const class EVec3 & vPos /* r25 */, float xSize /* f30 */, float ySize /* f31 */, class ERShader * shaderLeft /* r26 */, class ERShader * shaderRight /* r27 */, struct SpriteData & data /* r28 */) {
    // Local variables
    class E3DWindow * pWin; // r0
    class EVec3 vDiagonal; // r1+0x54
    class EVec3 vOffset; // r1+0x48
    float * positions; // r31
    float * texCoords; // r30
    unsigned char * colors; // r29
    const class EVec4 & vColor; // r28
}

// Range: 0x80224C90 -> 0x80224EA0
// this: r31
void ESpriteRender::SetSkillMeterState() {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80224EA0 -> 0x80225124
// this: r29
float ESpriteRender::UpdateSkillMeter(class EVec3 & vInnerColor /* r30 */, class EVec3 & vOuterColor /* r31 */) {
    // Local variables
    float scaleFactor; // f1

    // References
    // -> float OuterColorScaler;
    // -> class EVec3 vRepairMeterColor;
    // -> class EVec3 vSkillMeterColor;
    // -> class EModelManager _modelman;
}

// Range: 0x80225124 -> 0x80225438
// this: r24
void ESpriteRender::DrawSkillMeter(class ERC * prc /* r25 */) {
    // Local variables
    class cXPerson * person; // r27
    class EVec3 vColorInner; // r1+0x44
    class EVec3 vColorOuter; // r1+0x38
    float scaleFactorZ; // f0
    struct ELights lightInner; // r1+0x1C8
    struct ELights lightOuter; // r1+0xD0
    class EVec3 vHead; // r1+0x2C
    class ESimsCam * pCam; // r26
    float dirxtmp; // f2
    class EMat4 matOuterSubModel; // r1+0x90
    class EMat4 matInnerSubModel; // r1+0x50
    class EVec3 vHead; // r1+0x20
    float fScaleXYZ; // f1

    // References
    // -> float fRotateZ;
    // -> float fBobHeight;
    // -> float fTranslateZ;
    // -> class EGlobal _globals;
}

// Range: 0x80225438 -> 0x802254A0
// this: r31
void ESpriteRender::UpdateSkillMeter() {
    // Local variables
    class EVec3 vec1; // r1+0x14
    class EVec3 vec2; // r1+0x8

    // References
    // -> float _dt;
}


