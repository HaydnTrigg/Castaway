/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rshader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E5098 -> 0x802E8DC0
*/
// Range: 0x802E5098 -> 0x802E5170
// this: r30
ERShader::ERShader() {
    // References
    // -> struct [anonymous] __vt__8ERShader;
}

// Range: 0x802E5170 -> 0x802E5260
// this: r30
ERShader::~ERShader() {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__8ERShader;
}

// Range: 0x802E5260 -> 0x802E539C
// this: r29
void ERShader::Deallocate() {
    // Local variables
    struct EShaderDef * sd; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E539C -> 0x802E55E0
// this: r29
void ERShader::DelRefSubResources() {
    // Local variables
    int crp; // r6
    int crp; // r30
    unsigned char i; // r31
}

// Range: 0x802E55E0 -> 0x802E56F8
// this: r30
void ERShader::DeallocateIncomingShader() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E56F8 -> 0x802E5A54
// this: r30
void ERShader::AddRefSubResources() {
    // Local variables
    unsigned char shouldUseLoc; // r7
    unsigned int i; // r8
    unsigned char i; // r27
    int crp; // r25
    class EString str; // r1+0x8

    // References
    // -> class ETextureManager _textureman;
    // -> unsigned char m_defaultShaderState;
    // -> unsigned int _localizationShadersCount;
    // -> unsigned int * _localizationShaders;
}

// Range: 0x802E5A54 -> 0x802E5F74
// this: r30
unsigned char ERShader::TryIncrementSubResources() {
    // Local variables
    unsigned char shouldUseLoc; // r7
    unsigned int i; // r8
    unsigned int useState; // r27
    unsigned int useShaderId; // r0
    class EResource * pShader; // r1+0x8
    unsigned char i; // r27
    int undo; // r28
    unsigned char i; // r27
    int crp; // r26
    int undo; // r26
    int crp; // r26

    // References
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> unsigned char m_defaultShaderState;
    // -> unsigned int _localizationShadersCount;
    // -> unsigned int * _localizationShaders;
}

// Range: 0x802E5F74 -> 0x802E61D4
// this: r30
void ERShader::CreateEShaderForTexture(class ETexture * pTexture /* r31 */) {
    // Local variables
    struct EShaderDef sd; // r1+0x8
    class EShader * pCustomShdr; // r0

    // References
    // -> static unsigned int nNextID;
    // -> class ETextureManager _textureman;
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E61D4 -> 0x802E61F0
void ERShader::Refresh() {}

// Range: 0x802E61F0 -> 0x802E62FC
// this: r29
void ERShader::Load(class EFile & s /* r30 */) {
    // Local variables
    struct EShaderDef sd; // r1+0x8

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E62FC -> 0x802E6ACC
// this: r26
class ERShader * ERShader::Clone(unsigned int newResId /* r27 */) {
    // Local variables
    unsigned int i; // r28

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E6ACC -> 0x802E6AD4
void ERShader::SetDefaultShaderState() {
    // References
    // -> unsigned char m_defaultShaderState;
}

// Range: 0x802E6AD4 -> 0x802E6E44
// this: r29
void ERShader::DoLoadMultiShader(char * ptr /* r30 */, struct EShaderDef & sd /* r31 */) {
    // Local variables
    unsigned char mulShaderType; // r1+0x8
    int i; // r27
    int i; // r8
    int j; // r9
    unsigned int tmpShaderId; // r10
    unsigned int i; // r6

    // References
    // -> unsigned char m_defaultShaderState;
    // -> unsigned int _localizationShadersCount;
    // -> unsigned int * _localizationShaders;
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E6E44 -> 0x802E6F0C
// this: r30
unsigned char ERShader::SetCurrentShaderForState() {
    // Local variables
    int i; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E6F0C -> 0x802E7068
// this: r30
void ERShader::ChangeCurrentShader(class ERShader * pRShader /* r31 */) {
    // Local variables
    unsigned int crp; // r6

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E7068 -> 0x802E70CC
unsigned int ERShader::GetMultiShaderStateID() {
    // Local variables
    int i; // r7
}

// Range: 0x802E70CC -> 0x802E71C0
// this: r30
unsigned char ERShader::SetShaderASyncForState() {
    // Local variables
    int i; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E71C0 -> 0x802E77F4
// this: r28
void ERShader::DoLoad(class EFile & s /* r24 */, struct EShaderDef & sd /* r29 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
    unsigned char isMultiShader; // r25
    char * buffer; // r31
    char * ptr; // r30
    unsigned int textureId; // r7
    unsigned int sortMode; // r4
    int crp; // r6
    int c; // r7
    int textureCount; // r24
    int i; // r0
    int crp; // r9
    unsigned char needTransform; // r7
    int crp; // r8
    unsigned char i; // r24
    int crp; // r24
    int i; // r6

    // References
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> unsigned int _shaderVersion;
}

// Range: 0x802E77F4 -> 0x802E7A7C
char * ERShader::CopyShedData(struct EShaderDef & sd /* r28 */, char * ptr /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x802E7A7C -> 0x802E7B38
// this: r31
void ERShader::AddToUpdateList() {
    // References
    // -> class TLinkedList s_updateList;
    // -> class EMutex s_updateListMutex;
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E7B38 -> 0x802E7C08
// this: r31
void ERShader::RemoveFromUpdateList() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class TLinkedList s_updateList;
    // -> class EMutex s_updateListMutex;
}

// Range: 0x802E7C08 -> 0x802E7F44
// this: r31
void ERShader::Update() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E7F44 -> 0x802E80EC
unsigned char ERShader::HasCommonTexture() {
    // Local variables
    unsigned int numRP; // r0
    unsigned int i; // r0
}

// Range: 0x802E80EC -> 0x802E80F0
void ERShader::UpdateWeatherShader() {}

// Range: 0x802E80F0 -> 0x802E8124
void ERShader::UpdateTimeOfDayShader() {}

// Range: 0x802E8124 -> 0x802E81F8
// this: r30
void ERShader::InterpolateShaders() {
    // Local variables
    float ratio; // f1

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E81F8 -> 0x802E858C
// this: r27
void ERShader::BlendCurrentShader(float ratio /* f31 */) {
    // Local variables
    const struct EShaderDef * incomingSD; // r0
    int i; // r28
}

// Range: 0x802E858C -> 0x802E87A0
void ERShader::UpdateAll(float deltaTime /* f31 */, int hr /* r28 */, int minute /* r29 */, int weather /* r30 */) {
    // Local variables
    class vector shaderVector; // r1+0x8
    struct ERShaderUpdate * psu; // r31
    class ERShader * * it; // r31
    class ERShader * pShader; // r4

    // References
    // -> class TLinkedList s_updateList;
    // -> class EMutex s_updateListMutex;
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E87A0 -> 0x802E8988
void ERShader::InitDayNightShaders(int hr /* r29 */, int minute /* r30 */) {
    // Local variables
    class vector shaderVector; // r1+0x8
    struct ERShaderUpdate * psu; // r31
    class ERShader * * it; // r31
    class ERShader * pShader; // r3
    class ERShader * pShader; // r4

    // References
    // -> class TLinkedList s_updateList;
    // -> class EMutex s_updateListMutex;
    // -> class EShaderManager _shaderman;
}

// Range: 0x802E8988 -> 0x802E89FC
void ERShader::SetDayNightShaderToClosestTime() {
    // Local variables
    unsigned char timeStateId; // r5
    int i; // r7
    int idx; // r8
}

// Range: 0x802E89FC -> 0x802E8C00
// this: r28
void ERShader::ReplaceTexture(class ERTexture * pT /* r29 */, int iRenderPass /* r30 */) {}

// Range: 0x802E8C00 -> 0x802E8DC0
// this: r29
void ERShader::SwapTexture(class ERTexture * pT /* r30 */, int iRenderPass /* r31 */) {}


