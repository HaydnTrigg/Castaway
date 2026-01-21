/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\cas_archetype_target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80199C80 -> 0x8019AA48
*/
// Range: 0x80199C80 -> 0x8019A028
// this: r28
CASArchetypeTarget::CASArchetypeTarget(class CasMediator & mediator /* r29 */) {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__18CASArchetypeTarget;
}

// Range: 0x8019A028 -> 0x8019A124
// this: r29
CASArchetypeTarget::~CASArchetypeTarget() {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__18CASArchetypeTarget;
}

// Range: 0x8019A124 -> 0x8019A2C0
// this: r28
void CASArchetypeTarget::SetVariable(const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019A2C0 -> 0x8019A38C
// this: r29
char * CASArchetypeTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
    class CasSimDescription * pSimDesc; // r0
}

// Range: 0x8019A38C -> 0x8019A4D0
// this: r29
unsigned short * CASArchetypeTarget::GetLocalizable(const char * szVar /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x10
    unsigned short * pResultString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019A4D0 -> 0x8019A67C
void CASArchetypeTarget::ParseDescriptionText(unsigned short * outStr /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019A67C -> 0x8019A9C8
void CASArchetypeTarget::ParseNameText(enum eArchetype archetype /* r29 */, unsigned short * outStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019A9C8 -> 0x8019AA48
// this: r31
void CASArchetypeTarget::Update() {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}


