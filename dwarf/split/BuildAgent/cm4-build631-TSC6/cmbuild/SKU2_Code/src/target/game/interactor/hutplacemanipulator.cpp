/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\hutplacemanipulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800727A8 -> 0x800734E0
*/
// Range: 0x800727A8 -> 0x800727F4
// this: r31
CallbackData::CallbackData() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule19HutPlaceManipulator12CallbackData;
}

// Range: 0x800727F4 -> 0x80072864
// this: r31
HutPlaceManipulatorParams::HutPlaceManipulatorParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule19HutPlaceManipulator25HutPlaceManipulatorParams;
}

// Range: 0x80072864 -> 0x800728A8
// this: r31
HutPlaceManipulator::HutPlaceManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule19HutPlaceManipulator;
}

// Range: 0x80072910 -> 0x80072978
// this: r30
HutPlaceManipulator::~HutPlaceManipulator() {}

// Range: 0x80072978 -> 0x80072CF4
// this: r30
void HutPlaceManipulator::Update() {
    // Local variables
    class cXObject * pSavedObject; // r28
    class FTilePt fTilePt; // r1+0x50
    class CTilePt cTilePt; // r1+0x14
    int h_x2; // r31
    int h_y2; // r27
    signed short dir; // r0
    class CTilePt oob; // r1+0x10
    class EVec2 w; // r1+0x48
    class EVec2 c; // r1+0x40
    class EVec2 p; // r1+0x38
    class EVec2 d; // r1+0x30
    class EVec2 n; // r1+0x28
    float len; // f29
    unsigned char found; // r28
    class EVec2 t; // r1+0x20
    class CTilePt tp; // r1+0xC
    struct PlacementData placeData; // r1+0x18

    // References
    // -> static signed short lastPlacementDir;
}

// Range: 0x80072CF4 -> 0x80072D2C
// this: r31
void HutPlaceManipulator::OnCreate() {}

// Range: 0x80072D2C -> 0x80072DC8
// this: r30
void HutPlaceManipulator::OnStart(const struct InteractorParams * pParams /* r31 */) {
    // Local variables
    class ESimsCam * pSimsCam; // r0

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80072DC8 -> 0x80072F9C
// this: r31
void HutPlaceManipulator::OnCommandPressed() {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    struct CallbackData cbd; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80072FF4 -> 0x8007307C
void HutPlaceManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8007307C -> 0x8007318C
// this: r29
void HutPlaceManipulator::StartPlacement() {
    // Local variables
    class cXObject * pObject; // r31
    unsigned long index; // r30
}

// Range: 0x8007318C -> 0x80073348
// this: r29
void HutPlaceManipulator::TryPlacingCurrentObject() {
    // Local variables
    class cXObject * pSavedObject; // r30
    class EVec2 screenpt; // r1+0x10
    class CTilePt cTilePt; // r1+0x8
    signed short dir; // r0
    struct CallbackData cbd; // r1+0x28

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80073348 -> 0x800734E0
// this: r29
void HutPlaceManipulator::CancelSession() {
    // Local variables
    struct CallbackData cbd; // r1+0x28
    unsigned char bRecomputeLightingGrid; // r31
    class cXObject * pObject; // r30
    class EVec2 screenpt; // r1+0x10

    // References
    // -> unsigned char m_blueprintMode;
}


