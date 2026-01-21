/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\unlockdisplay.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802423A0 -> 0x80243638
*/
// Range: 0x802423A0 -> 0x80242648
// this: r29
CUnlockDisplay::CUnlockDisplay() {
    // References
    // -> class EGraphics * _pGfx;
    // -> struct [anonymous] __vt__14CUnlockDisplay;
}

// Range: 0x80242648 -> 0x802426B4
// this: r30
CUnlockDisplay::~CUnlockDisplay() {
    // References
    // -> struct [anonymous] __vt__14CUnlockDisplay;
}

// Range: 0x802426B4 -> 0x802427BC
// this: r26
void CUnlockDisplay::makeObjects() {
    // Local variables
    int numberOfObjects; // r31
    int numberOfSims; // r30
    class CUnlockDisplayObject * pObj; // r3
    class CUnlockDisplayObject * pLast; // r29
    int j; // r28
    int i; // r27
    int i; // r27
}

// Range: 0x802427BC -> 0x8024282C
// this: r30
void CUnlockDisplay::destroyObjects() {
    // Local variables
    class CUnlockDisplayObject * pObj; // r4
    class CUnlockDisplayObject * pNext; // r31
}

// Range: 0x8024282C -> 0x80242990
// this: r31
void CUnlockDisplay::SetupForObject(struct ObjectDefinition * pData /* r26 */, const class EVec3 & pos /* r27 */, const class EVec3 & rot /* r28 */, const class EVec3 & rotAdd /* r29 */) {
    // Local variables
    class CUnlockDisplayObject * pObj; // r30
    unsigned int otherMID; // r1+0xC
    unsigned int otherAID; // r1+0x8
}

// Range: 0x80242990 -> 0x80242B50
// this: r31
void CUnlockDisplay::Update() {
    // Local variables
    class CUnlockDisplayObject * pObj; // r3
    class CUnlockDisplayObject * pNext; // r30
    unsigned char ready; // r30
    class CUnlockDisplayObject * pObj; // r29
    class CUnlockDisplayObject * pNext; // r28
    float radius; // f0
    class CUnlockDisplayObject * pObj; // r3
    class CUnlockDisplayObject * pNext; // r28
    unsigned char bAllDone; // r28
    class CUnlockDisplayObject * pObj; // r29
    class CUnlockDisplayObject * pNext; // r27
}

// Range: 0x80242B50 -> 0x80242BA4
void CUnlockDisplay::SetDisplayBox() {}

// Range: 0x80242BA4 -> 0x80242BB4
void CUnlockDisplay::ManualCameraPos() {}

// Range: 0x80242BB4 -> 0x80243360
// this: r30
void CUnlockDisplay::Draw(class ERC * prc /* r31 */) {
    // Local variables
    class EWindow * pOldWin; // r26
    class E3DWindow * pOld3DWin; // r25
    class EVec3 vec; // r1+0x150
    class EMat4 mat; // r1+0x160
    class E3DWindow * win; // r28
    class EVec3 eye; // r1+0x144
    class EVec3 target; // r1+0x138
    class EVec3 up; // r1+0x12C
    float fNear; // f29
    float fFar; // f30
    float fFov; // f31
    float fFov; // f31
    int objCount; // r25
    class CUnlockDisplayObject * pObj; // r26
    float fFar; // f30
    float fNear; // f29
    int lightNum; // r24
    class CUnlockDisplayObject * pObj; // r3
    class CUnlockDisplayObject * pNext; // r24

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80243360 -> 0x802433CC
// this: r30
void CUnlockDisplay::SetDirectLight(int index /* r31 */) {}

// Range: 0x802433CC -> 0x80243408
// this: r31
void CUnlockDisplay::SetAmbientLight() {}

// Range: 0x80243408 -> 0x80243458
void CUnlockDisplay::SetMultiColorNumber(int colorIndex /* r30 */) {
    // Local variables
    class CUnlockDisplayObject * pObj; // r31
}

// Range: 0x80243458 -> 0x802434CC
// this: r30
void CUnlockDisplay::SetDirectLightDir(int index /* r31 */) {}

// Range: 0x802434CC -> 0x80243638
unsigned char CUnlockDisplay::GetBedOtherHalfIDs() {
    // Local variables
    unsigned int modelsL[5]; // r1+0x44
    unsigned int modelsR[5]; // r1+0x30
    unsigned int animsL[5]; // r1+0x1C
    unsigned int animsR[5]; // r1+0x8
    unsigned long i; // r25
}


