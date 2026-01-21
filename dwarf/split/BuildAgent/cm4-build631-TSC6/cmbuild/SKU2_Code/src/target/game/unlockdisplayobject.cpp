/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\unlockdisplayobject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80243720 -> 0x80243FF4
*/
// Range: 0x80243720 -> 0x80243838
// this: r31
CUnlockDisplayObject::CUnlockDisplayObject() {
    // References
    // -> struct [anonymous] __vt__20CUnlockDisplayObject;
}

// Range: 0x80243838 -> 0x80243948
// this: r30
CUnlockDisplayObject::~CUnlockDisplayObject() {
    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> struct [anonymous] __vt__20CUnlockDisplayObject;
}

// Range: 0x80243948 -> 0x80243A00
// this: r30
unsigned char CUnlockDisplayObject::ServiceDataReady() {
    // Local variables
    unsigned char ready; // r31

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
}

// Range: 0x80243A00 -> 0x80243A84
// this: r31
void CUnlockDisplayObject::Setup() {}

// Range: 0x80243A84 -> 0x80243E20
// this: r31
void CUnlockDisplayObject::Update() {
    // Local variables
    class EMat4 mat; // r1+0x60
    class EBound3 bound; // r1+0x48

    // References
    // -> float _dt;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
}

// Range: 0x80243E20 -> 0x80243F4C
// this: r28
void CUnlockDisplayObject::Draw(class ERC * prc /* r29 */) {
    // Local variables
    int nNodes; // r31
    class EMat4 * pmNodes; // r30
    class EMat4 tmp; // r1+0x8
}

// Range: 0x80243F4C -> 0x80243F74
unsigned char CUnlockDisplayObject::IsActive() {
    // Local variables
    unsigned char rc; // r4
}

// Range: 0x80243F74 -> 0x80243FF4
// this: r30
void CUnlockDisplayObject::SetMultiColorIndex(int index /* r31 */) {}


