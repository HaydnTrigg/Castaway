/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\acttarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019AD0C -> 0x8019BE38
*/
// Range: 0x8019AD64 -> 0x8019AE7C
// this: r29
ACTTarget::~ACTTarget() {
    // Local variables
    struct ListIterator it; // r1+0x10
    class iqRecord * iqRec; // r31

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9ACTTarget;
}

// Range: 0x8019AE7C -> 0x8019AFB0
// this: r31
void ACTTarget::SetVariable(const char * szCommand /* r29 */) {
    // Local variables
    int item; // r1+0x8
    class UIReflow reflow; // r1+0x10

    // References
    // -> static const char * const AQU;
    // -> static const char * const AQU_hide_callback;
    // -> static const char * const AQU_show_callback;
}

// Range: 0x8019AFB0 -> 0x8019B034
// this: r29
char * ACTTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const AQU_exists;
}

// Range: 0x8019B034 -> 0x8019B2C0
// this: r28
void ACTTarget::Update() {
    // Local variables
    class InteractorManager * interactorManager; // r0
    unsigned char interactorInitialized; // r0
    class UIReflow reflow; // r1+0x38
    class UIReflow reflow; // r1+0x20
    struct ACTRecord * rec; // r30
    struct ListIterator it; // r1+0x18
    class iqRecord * iqRec; // r29

    // References
    // -> class EGlobal _globals;
    // -> static const char * const AQU_hide_callback;
    // -> static const char * const AQU_show_callback;
    // -> static const char * const AQU;
    // -> class GameData _gd;
}

// Range: 0x8019B2C0 -> 0x8019B2CC
void ACTTarget::ShowActionQueue() {}

// Range: 0x8019B2CC -> 0x8019B2D8
void ACTTarget::HideActionQueue() {}

// Range: 0x8019B2D8 -> 0x8019B46C
// this: r24
void ACTTarget::AddAction(const class Interaction * pAction /* r25 */, const class BString2 & strName /* r26 */, unsigned int shaderID /* r27 */, class ERShader * pShader /* r28 */, unsigned int insertGUID /* r29 */) {
    // Local variables
    unsigned char found; // r30
    struct ListIterator it; // r1+0x14
    class iqRecord * iqRec; // r31
    struct ACTRecord * recLoop; // r30
    class iqRecord * pqRec; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019B46C -> 0x8019B6B8
// this: r27
void ACTTarget::PlaceItem(struct ACTRecord * rec /* r31 */, unsigned int insertGUID /* r28 */) {
    // Local variables
    unsigned char insertOccured; // r30
    struct ACTRecord * irec; // r29
    class UIReflow reflow; // r1+0x8
}

// Range: 0x8019B6B8 -> 0x8019B900
// this: r27
void ACTTarget::RemoveAction(const class Interaction * pAction /* r28 */) {
    // Local variables
    unsigned char found; // r25
    struct ListIterator it; // r1+0x14
    class iqRecord * iqRec; // r26
    unsigned char done; // r30
    struct ACTRecord * rec; // r29
}

// Range: 0x8019B900 -> 0x8019B994
// this: r29
void ACTTarget::RemoveAllActions() {
    // Local variables
    int i; // r30
}

// Range: 0x8019B994 -> 0x8019B99C
unsigned char ACTTarget::IsActionQueueAvailable() {}

// Range: 0x8019B99C -> 0x8019BA08
struct ACTRecord * ACTTarget::GetRecord() {
    // Local variables
    unsigned char found; // r7
    int i; // r8
}

// Range: 0x8019BA08 -> 0x8019BAFC
// this: r27
void ACTTarget::ReOrderActionQueue() {
    // Local variables
    int pos; // r29
    struct ACTRecord * rec; // r28
}

// Range: 0x8019BAFC -> 0x8019BB00
void ACTTarget::DebugListValidation() {}

// Range: 0x8019BB00 -> 0x8019BB8C
class Interaction * ACTTarget::GetInteractionFromID(int id /* r27 */) {
    // Local variables
    class cXPerson * pPerson; // r30
    int count; // r0
    int i; // r29
    const class Interaction * action; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019BB8C -> 0x8019BCD8
// this: r31
void ACTTarget::CancelCurrentObject() {
    // Local variables
    class cXPerson * pPerson; // r29
}

// Range: 0x8019BCD8 -> 0x8019BDCC
// this: r31
void ACTTarget::UpdateCancelModeWidgets() {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x8019BDCC -> 0x8019BE38
void ACTTarget::ExitCancelMode() {
    // Local variables
    class UIReflow reflow; // r1+0x8

    // References
    // -> class GameData _gd;
}


