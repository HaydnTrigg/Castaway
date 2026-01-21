/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animeventhandlersupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F62D0 -> 0x801F6D78
*/
// Range: 0x801F62D0 -> 0x801F6418
static void OverrideMotionBlurSettingsFromTokens(struct FrameEffectsMotionBlurDataElement * pBlur /* r26 */, const class EString * tokens /* r27 */) {
    // Local variables
    int i; // r28
}

// Range: 0x801F6418 -> 0x801F66E0
static void OverrideBloomSettingsFromTokens(struct FrameEffectsBloomDataElement * pBloom /* r27 */, const class EString * tokens /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x801F66E0 -> 0x801F6888
static void OverrideDOFSettingsFromTokens(struct FrameEffectsDepthOfFieldDataElement * pDOF /* r27 */, const class EString * tokens /* r28 */) {
    // Local variables
    int i; // r29
}

// Range: 0x801F6888 -> 0x801F6A50
void HandleBloomEvent(const struct EAnimNote & event /* r31 */, class FrameEffectsManager * feManager /* r29 */) {
    // Local variables
    class ERQuickdata * pObjectData; // r30
    const struct ERQTable * pTable; // r1+0xC
    class Bloom * bloomObj; // r29
    class TArray valTokens; // r1+0x10
    int numTokens; // r0
    const struct FrameEffectsBloomDataElement * pBloomRow; // r1+0x8
    const struct FrameEffectsBloomDataElement * pBloom; // r30
    struct FrameEffectsBloomDataElement overrideBloom; // r1+0x48
    struct BloomSettings bloomSettings; // r1+0x1C

    // References
    // -> static const char * kNoteValueSeparator;
    // -> static const char * kFrameEffectDisableStr;
}

// Range: 0x801F6A50 -> 0x801F6BD8
void HandleMotionBlurEvent(const struct EAnimNote & event /* r31 */, class FrameEffectsManager * feManager /* r29 */) {
    // Local variables
    class ERQuickdata * pObjectData; // r30
    const struct ERQTable * pTable; // r1+0xC
    class MotionBlur * blurObj; // r29
    class TArray valTokens; // r1+0x1C
    int numTokens; // r0
    const struct FrameEffectsMotionBlurDataElement * pBlurRow; // r1+0x8
    const struct FrameEffectsMotionBlurDataElement * pBlur; // r30
    struct FrameEffectsMotionBlurDataElement overrideBlur; // r1+0x28
    struct MotionBlurSettings blurSettings; // r1+0x10

    // References
    // -> static const char * kNoteValueSeparator;
    // -> static const char * kFrameEffectDisableStr;
}

// Range: 0x801F6BD8 -> 0x801F6D78
void HandleDepthOfFieldEvent(const struct EAnimNote & event /* r31 */, class FrameEffectsManager * feManager /* r29 */) {
    // Local variables
    class ERQuickdata * pObjectData; // r30
    const struct ERQTable * pTable; // r1+0xC
    class DepthOfField * dofObj; // r29
    class TArray valTokens; // r1+0x1C
    int numTokens; // r0
    const struct FrameEffectsDepthOfFieldDataElement * pDOFRow; // r1+0x8
    const struct FrameEffectsDepthOfFieldDataElement * pDOF; // r30
    struct FrameEffectsDepthOfFieldDataElement overrideDOFObj; // r1+0x3C
    struct DepthOfFieldSettings dofSettings; // r1+0x28

    // References
    // -> static const char * kNoteValueSeparator;
    // -> static const char * kFrameEffectDisableStr;
}


