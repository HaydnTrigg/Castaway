/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_mirrorportal.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802959E4 -> 0x8029671C
*/
// Range: 0x802959E4 -> 0x80295AA4
// this: r31
EMirrorPortal::EMirrorPortal() {}

// Range: 0x80295AA4 -> 0x80295B44
// this: r29
EMirrorPortal::~EMirrorPortal() {}

// Range: 0x80295B44 -> 0x80295B4C
void EMirrorPortal::SetNumCorners() {}

// Range: 0x80295B4C -> 0x80295B70
void EMirrorPortal::SetCorner() {}

// Range: 0x80295B70 -> 0x80295BDC
// this: r30
void EMirrorPortal::SetMirrorShader(unsigned int shaderId /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80295BDC -> 0x80295D78
// this: r27
void EMirrorPortal::StartRendering(class E3DWindow & win /* r28 */, class ERC * prc /* r29 */) {
    // Local variables
    class EMat4 proj; // r1+0x38

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80295D78 -> 0x80295EBC
// this: r29
void EMirrorPortal::StopRendering(class E3DWindow & win /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x80295EBC -> 0x80296194
// this: r30
void EMirrorPortal::CalcMirrorMatrix() {
    // Local variables
    class EVec3 normal; // r1+0x50
    class EVec3 zAxis; // r1+0x44
    unsigned char axis; // r31
    float dot; // f0
    float angle; // f31
    class EVec3 rotAxis; // r1+0x38
    class EMat4 thereMatrix; // r1+0xE0
    class EVec3 scale; // r1+0x2C
    class EMat4 backMatrix; // r1+0xA0
}

// Range: 0x80296194 -> 0x8029629C
void EMirrorPortal::InitRC(class ERC * prc /* r31 */) {}

// Range: 0x8029629C -> 0x802964AC
void EMirrorPortal::PushPortal(class E3DWindow & win /* r31 */) {
    // Local variables
    const class EMat4 & lookAt; // r5
}

// Range: 0x802964AC -> 0x8029662C
void EMirrorPortal::PopPortal(class E3DWindow & win /* r31 */) {}

// Range: 0x8029662C -> 0x8029671C
void EMirrorPortal::BuildPortalGeometry() {
    // Local variables
    int i; // r8
    struct EGEVert & v; // r9
    int which; // r0
}


