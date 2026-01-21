/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_mat4.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262D14 -> 0x80264D7C
*/
// Range: 0x80262D14 -> 0x80262E10
class EVec4 operator*() {}

// Range: 0x80262E10 -> 0x80262E24
// this: r0
void EMat4::Mult4x4() {}

// Range: 0x80262E24 -> 0x80262E94
class EMat4 & EMat4::PreScale() {
    // Local variables
    int i; // r0
    int j; // r0
}

// Range: 0x80262E94 -> 0x80262F10
class EMat4 & EMat4::PreScale() {}

// Range: 0x80262F10 -> 0x80262FA4
class EMat4 & EMat4::PreTranslate() {
    // Local variables
    int i; // r0
}

// Range: 0x80262FA4 -> 0x80263034
class EStream & operator<<(class EStream & s /* r25 */, const class EMat4 & m /* r26 */) {
    // Local variables
    int i; // r28
    int j; // r27
}

// Range: 0x80263034 -> 0x802630B4
class EStream & operator>>(class EStream & s /* r27 */) {
    // Local variables
    int i; // r29
    int j; // r28
}

// Range: 0x802630B4 -> 0x802630D8
void EMat4::GetColumn() {}

// Range: 0x802630D8 -> 0x8026319C
// this: r29
class EMat4 & EMat4::Normalize() {
    // Local variables
    int i; // r30
    class EVec3 vCol; // r1+0x8
}

// Range: 0x8026319C -> 0x80263224
class EMat4 & EMat4::Transpose() {
    // Local variables
    int y; // r0
    int x; // r0
}

// Range: 0x80263224 -> 0x80263288
class EMat4 & EMat4::Transpose() {
    // Local variables
    float temp; // f6
}

// Range: 0x80263288 -> 0x802632D4
class EMat4 & EMat4::Id() {}

// Range: 0x802632D4 -> 0x80263328
// this: r30
class EMat4 & EMat4::Translate(const class EVec3 & v /* r31 */) {}

// Range: 0x80263328 -> 0x8026337C
// this: r30
class EMat4 & EMat4::Scale(const class EVec3 & v /* r31 */) {}

// Range: 0x8026337C -> 0x802633BC
float EMat4::GetScaleX() {
    // Local variables
    class EVec3 tmp; // r1+0x8
}

// Range: 0x802633BC -> 0x802633FC
float EMat4::GetScaleY() {
    // Local variables
    class EVec3 tmp; // r1+0x8
}

// Range: 0x802633FC -> 0x8026347C
// this: r31
class EMat4 & EMat4::RotateX(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
}

// Range: 0x8026347C -> 0x802634FC
// this: r31
class EMat4 & EMat4::RotateY(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
}

// Range: 0x802634FC -> 0x8026357C
// this: r31
class EMat4 & EMat4::RotateZ(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
}

// Range: 0x8026357C -> 0x8026388C
unsigned char EMat4::Invert() {
    // Local variables
    float determinant; // f20
    float invDet; // f24
}

// Range: 0x8026388C -> 0x802639B4
// this: r30
class EMat4 & EMat4::Rotate(const class EVec3 & vAxis /* r31 */, float angle /* f30 */) {
    // Local variables
    float fSin; // f0
    float fCos; // f0
    float fOneMinusCos; // f12
    float fX2; // f0
    float fY2; // f1
    float fZ2; // f13
    float fXYM; // f2
    float fXZM; // f5
    float fYZM; // f4
    float fXSin; // f3
    float fYSin; // f1
    float fZSin; // f6
}

// Range: 0x802639B4 -> 0x80263ABC
// this: r31
class EMat4 & EMat4::PostRotateX(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
    float nsinAngle; // f12
    float a; // f13
}

// Range: 0x80263ABC -> 0x80263BC4
// this: r31
class EMat4 & EMat4::PostRotateY(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
    float nsinAngle; // f12
    float a; // f13
}

// Range: 0x80263BC4 -> 0x80263CA4
// this: r31
class EMat4 & EMat4::PreRotateZ(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
    float nsinAngle; // f10
    float a; // f11
}

// Range: 0x80263CA4 -> 0x80263DAC
// this: r31
class EMat4 & EMat4::PostRotateZ(float angle /* f30 */) {
    // Local variables
    float sinAngle; // f0
    float cosAngle; // f0
    float nsinAngle; // f12
    float a; // f13
}

// Range: 0x80263DAC -> 0x80263DE0
class EMat4 & EMat4::PostTranslate() {}

// Range: 0x80263DE0 -> 0x80263E80
class EMat4 & EMat4::PostScale() {}

// Range: 0x80263E80 -> 0x80263F14
class EMat4 & EMat4::PostScale() {
    // Local variables
    int i; // r0
    int j; // r0
}

// Range: 0x80263F14 -> 0x80263FD8
float EMat4::GetMaxScale() {
    // Local variables
    float maxScale; // f1
    int i; // r0
    float axisScale; // f4
    int j; // r0
}

// Range: 0x80263FD8 -> 0x80264084
// this: r28
void EMat4::GetHPR(float & heading /* r29 */, float & pitch /* r30 */, float & roll /* r31 */) {
    // Local variables
    float len; // f0
}

// Range: 0x80264084 -> 0x802640C4
float EMat4::ExtractAxisRotation(const class EVec3 & vAxis /* r31 */) {
    // Local variables
    class EQuat q; // r1+0x8
}

// Range: 0x802640C4 -> 0x80264198
void EMat4::GetLookAtPos() {}

// Range: 0x80264198 -> 0x8026438C
// this: r29
class EMat4 & EMat4::LookAtPos(const class EVec3 & vEye /* r30 */, const class EVec3 & vUp /* r31 */) {
    // Local variables
    class EVec3 zbody; // r1+0x20
    class EVec3 xbody; // r1+0x14
    class EVec3 ybody; // r1+0x8
}

// Range: 0x8026438C -> 0x8026460C
// this: r31
class EMat4 & EMat4::LookAt(const class EVec3 & vEye /* r29 */, const class EVec3 & vUp /* r30 */) {}

// Range: 0x8026460C -> 0x80264734
// this: r29
class EMat4 & EMat4::LookAtDirect(const class EVec3 & vOldUnitDir /* r30 */, const class EVec3 & vNewUnitDir /* r31 */, float multiplier /* f30 */) {
    // Local variables
    float dot; // f0
    float angle; // f0
    class EVec3 vAxis; // r1+0x8
    float mag; // f0
}

// Range: 0x80264734 -> 0x80264824
// this: r31
class EMat4 & EMat4::Projection(float aspect /* f27 */, float nearPlane /* f28 */, float farPlane /* f29 */) {
    // Local variables
    float fovy; // f30
    float cot; // f30
}

// Range: 0x80264824 -> 0x8026492C
// this: r31
class EMat4 & EMat4::Ortho(float left /* f26 */, float right /* f27 */, float bottom /* f28 */, float top /* f29 */, float nearPlane /* f30 */, float farPlane /* f31 */) {
    // Local variables
    float rml; // f6
    float tmb; // f7
    float fmn; // f8
}

// Range: 0x8026492C -> 0x80264AA8
// this: r29
class EMat4 & EMat4::BlendQuat(float u /* f31 */, const class EMat4 & mA /* r30 */, const class EMat4 & mB /* r31 */) {
    // Local variables
    class EQuat qA; // r1+0x98
    class EQuat qB; // r1+0x88
    class EVec3 vA; // r1+0x7C
    class EVec3 vB; // r1+0x70
    class EQuat qBlended; // r1+0x60
    class EVec3 vBlended; // r1+0x50
}

// Range: 0x80264AA8 -> 0x80264D7C
class EVec3 EMat4::ToEulerXYZ(class EVec3 * ea /* r29 */) {
    // Local variables
    class EMat4 m; // r1+0x8
    float cy; // f0
}


