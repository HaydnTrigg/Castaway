/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\ui3d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017E78C -> 0x8017EEEC
*/
// Range: 0x8017E78C -> 0x8017E874
// this: r29
UI3D::UI3D() {
    // Local variables
    class UI3DRecord * prev; // r31
    int i; // r30

    // References
    // -> struct [anonymous] __vt__4UI3D;
}

// Range: 0x8017E874 -> 0x8017E93C
// this: r29
UI3D::~UI3D() {
    // Local variables
    class UI3DRecord * record; // r5
    class UI3DRecord * next; // r31

    // References
    // -> struct [anonymous] __vt__4UI3D;
}

// Range: 0x8017E93C -> 0x8017EADC
void UI3D::AddEntry(unsigned int characterID /* r28 */, unsigned int modelID /* r31 */, unsigned int animationID /* r30 */) {
    // Local variables
    class UI3DRecord * record; // r29
    struct ObjectDefinition objDef; // r1+0x30
}

// Range: 0x8017EADC -> 0x8017EBE4
// this: r31
void UI3D::RemoveEntry() {}

// Range: 0x8017EBE4 -> 0x8017ECB4
// this: r25
unsigned char UI3D::InstallEntry(const char * flashName /* r26 */, unsigned int characterID /* r27 */, unsigned int modelID /* r28 */, unsigned int animationID /* r29 */, const char * className /* r30 */, int colorIndex /* r31 */) {
    // Local variables
    class UI3DRecord * record; // r4
}

// Range: 0x8017ECB4 -> 0x8017ED8C
// this: r28
class UI3DRecord * UI3D::FindEntry(const char * flashName /* r29 */) {
    // Local variables
    class UI3DRecord * record; // r30
}

// Range: 0x8017ED8C -> 0x8017EDD8
// this: r31
unsigned char UI3D::UnInstallEntry() {
    // Local variables
    class UI3DRecord * record; // r4
}

// Range: 0x8017EDD8 -> 0x8017EE4C
// this: r29
unsigned char UI3D::UnInstallAllEntries(const char * className /* r30 */) {
    // Local variables
    unsigned char rc; // r3
    class UI3DRecord * record; // r5
    class UI3DRecord * next; // r31
}

// Range: 0x8017EE4C -> 0x8017EE78
unsigned char UI3D::ContainsEntry() {}

// Range: 0x8017EE78 -> 0x8017EEB8
void UI3D::Update3D() {
    // Local variables
    class UI3DRecord * record; // r31
}

// Range: 0x8017EEB8 -> 0x8017EEEC
class CUnlockDisplay * UI3D::GetDisplayObject() {
    // Local variables
    class UI3DRecord * record; // r0
}


