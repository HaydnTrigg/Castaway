/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\pictureinpicture.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023E4E4 -> 0x8023F26C
*/
// Range: 0x8023E4E4 -> 0x8023E668
// this: r30
EPictureInPicture::EPictureInPicture() {
    // References
    // -> class EShaderManager _shaderman;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__17EPictureInPicture;
}

// Range: 0x8023E668 -> 0x8023E6EC
// this: r30
EPictureInPicture::~EPictureInPicture() {
    // References
    // -> struct [anonymous] __vt__17EPictureInPicture;
}

// Range: 0x8023E6EC -> 0x8023E790
// this: r31
void EPictureInPicture::Update() {
    // References
    // -> float _dt;
    // -> class GameData _gd;
}

// Range: 0x8023E790 -> 0x8023EF04
// this: r30
void EPictureInPicture::Draw(class ERC * prc /* r31 */) {
    // Local variables
    class cXObject * ObjPtr; // r28
    class ISimInstance * ISim; // r29
    class EBoundSphere Sphere; // r1+0x80
    class EVec3 Target; // r1+0x70
    float Radius; // f1
    float Scale; // f31
    class EVec3 Eye; // r1+0x64
    class EVec3 Up; // r1+0x58
    class TRect Rect; // r1+0x48
    class EWindow * pOldWin; // r27
    class E3DWindow * pOld3DWin; // r26
    class EVec2 UpperLeft; // r1+0x18
    class EVec2 LowerRight; // r1+0x10

    // References
    // -> class EVec2 _defLRTextureCoord;
    // -> class EVec2 _defULTextureCoord;
    // -> class EVec4 _WHITE;
    // -> class EGlobal _globals;
    // -> class HeightFade g_heightFade;
}

// Range: 0x8023EF04 -> 0x8023EFB0
// this: r30
class TRect EPictureInPicture::GetPIPRect(class EPictureInPicture * const this /* r31 */) {
    // Local variables
    float Size; // f31
    float AspectRatio; // f0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8023EFB0 -> 0x8023EFFC
float EPictureInPicture::ClampToPixelX() {
    // Local variables
    float halfpixel; // f31
    float cx; // f1
}

// Range: 0x8023EFFC -> 0x8023F048
float EPictureInPicture::ClampToPixelY() {
    // Local variables
    float halfpixel; // f31
    float cy; // f1
}

// Range: 0x8023F048 -> 0x8023F07C
void EPictureInPicture::resetPiP() {}

// Range: 0x8023F07C -> 0x8023F1A8
// this: r23
void EPictureInPicture::DoPictureInPicture(unsigned char inTurnOn /* r24 */, class cXObject * inObject /* r25 */, int inMSTimeout /* r26 */, int inZoom /* r27 */, int inSize /* r28 */, unsigned char justCenter /* r31 */, const unsigned short * inText /* r29 */, unsigned char slowDownGame /* r30 */) {}

// Range: 0x8023F1A8 -> 0x8023F26C
// this: r31
void EPictureInPicture::setupPortal() {
    // Local variables
    class TRect Rect; // r1+0x8
    float Size; // f30
    float AspectRatio; // f0

    // References
    // -> class EGraphics * _pGfx;
}


