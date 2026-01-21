/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_3dwindow.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80283568 -> 0x80286F04
*/
// Range: 0x80283568 -> 0x80283614
// this: r31
E3DWindow::E3DWindow() {
    // References
    // -> struct [anonymous] __vt__9E3DWindow;
}

// Range: 0x80283614 -> 0x80283740
// this: r31
void E3DWindow::SetProjection(float fovYDegrees /* f28 */, float aspect /* f29 */, float nearPlane /* f30 */, float farPlane /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x8
}

// Range: 0x80283740 -> 0x80283C5C
// this: r31
void E3DWindow::SetOrthoProjectionForUIHD(float left /* f21 */, float right /* f22 */, float bottom /* f23 */, float top /* f24 */, float nearPlane /* f25 */, float farPlane /* f26 */, float scale_x /* f27 */, float scale_y /* f28 */, float scale_z /* f29 */, float scale_x_correction /* f30 */, float scale_y_correction /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x120
    class EMat4 mat; // r1+0xE0
    class EMat4 mat2; // r1+0xA0
}

// Range: 0x80283C5C -> 0x80283EB8
// this: r31
void E3DWindow::SetOrthoProjection(float left /* f26 */, float right /* f27 */, float bottom /* f28 */, float top /* f29 */, float nearPlane /* f30 */, float farPlane /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x8
}

// Range: 0x80283EB8 -> 0x80283F78
// this: r24
void E3DWindow::SetLookAt() {}

// Range: 0x80283F78 -> 0x80283FBC
// this: r31
void E3DWindow::SetLookAt() {}

// Range: 0x80283FBC -> 0x80284010
// this: r31
void E3DWindow::SetViewport() {}

// Range: 0x80284010 -> 0x80284064
void E3DWindow::CalcViewport() {}

// Range: 0x80284064 -> 0x802852EC
// this: r31
void E3DWindow::CalcViewportStructures() {
    // Local variables
    float z; // f0
    class EVec4 vcam; // r1+0x1E8
    class EVec3 off; // r1+0x1D8
    class EVec3 scale; // r1+0x1CC
    class EVec3 v; // r1+0x1C0
    float d; // f3

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802852EC -> 0x80285434
int E3DWindow::Test() {
    // Local variables
    float x; // f0
    float y; // f1
    float z; // f2
    float rad; // f3
    float d; // f4
    float dScreen; // f8
}

// Range: 0x80285434 -> 0x80285758
int E3DWindow::Test() {
    // Local variables
    unsigned char * boxPtr; // r0
    float x; // f1
    float y; // f5
    float z; // f5
    float dNear; // f2
    float dFar; // f1
    float dScreenNear; // f0
    float dScreenFar; // f1
    int flags; // r0
}

// Range: 0x80285758 -> 0x80285900
int E3DWindow::TestAsRect() {
    // Local variables
    unsigned char * boxPtr; // r0
    float x; // f0
    float y; // f3
    float dNear; // f2
    float dFar; // f1
}

// Range: 0x80285900 -> 0x802859E4
// this: r31
void E3DWindow::ProjectionMatrixChanged() {}

// Range: 0x802859E4 -> 0x80285AC0
// this: r31
void E3DWindow::LookAtMatrixChanged() {}

// Range: 0x80285AC0 -> 0x80285B00
// this: r31
void E3DWindow::CalcLookAtDotProjection() {}

// Range: 0x80285B00 -> 0x80285C14
// this: r30
void E3DWindow::Select(class ERC * prc /* r31 */) {}

// Range: 0x80285C14 -> 0x80285C68
void E3DWindow::InputCoordinatesChanged() {}

// Range: 0x80285C68 -> 0x80285CBC
void E3DWindow::OutputCoordinatesChanged() {}

// Range: 0x80285CBC -> 0x80285D7C
// this: r30
unsigned char E3DWindow::TransformToScreen(class EVec2 & vScreenOut /* r31 */) {
    // Local variables
    class EVec4 vEye; // r1+0x18
    float q; // f3
}

// Range: 0x80285D7C -> 0x80285E60
// this: r30
unsigned char E3DWindow::TransformToScreen(class EVec3 & vScreenOut /* r31 */, float zOffset /* f31 */) {
    // Local variables
    class EVec4 vEye; // r1+0x18
    float q; // f3
    float z; // f0
}

// Range: 0x80285E60 -> 0x80286040
// this: r30
unsigned char E3DWindow::TransformToWorld(class EVec3 & vWorldOut /* r31 */) {
    // Local variables
    class EVec2 vView; // r1+0x10
    float right; // r1+0xC
    float bottom; // r1+0x8
}

// Range: 0x80286040 -> 0x80286060
void E3DWindow::GetFOVLengths() {}

// Range: 0x80286060 -> 0x80286078
void E3DWindow::SetFrustumType() {}

// Range: 0x80286078 -> 0x802860C8
void dummyTrace() {}

// Range: 0x802860C8 -> 0x80286F04
// this: r29
void E3DWindow::Get3DQuadFromScreenTrapAtZ(float z /* f30 */, const float * trap /* r30 */, class Quad * quad /* r31 */) {
    // Local variables
    class EVec2 screenPos; // r1+0x28
    class EVec3 corner; // r1+0x23C
    class EVec3 temp; // r1+0x230
    float width; // f31
}


