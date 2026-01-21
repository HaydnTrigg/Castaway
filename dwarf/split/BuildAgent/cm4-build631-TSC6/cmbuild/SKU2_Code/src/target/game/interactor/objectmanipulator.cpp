/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\objectmanipulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006DDB0 -> 0x80072790
*/
// Range: 0x8006DDB0 -> 0x8006DDEC
unsigned char is_object_cloneable() {
    // Local variables
    signed short mvflags; // r0
}

// Range: 0x8006DDEC -> 0x8006DE34
// this: r31
void PlacementObject::ClearDrawOverride() {}

// Range: 0x8006DE34 -> 0x8006DE3C
unsigned char PlacementObject::GetDrawOverrideFlag() {}

// Range: 0x8006DE3C -> 0x8006DE44
class FTilePt & PlacementObject::GetOverrideLocation() {}

// Range: 0x8006DE44 -> 0x8006DE4C
class cXObject * PlacementObject::GetObjectInHand() {}

// Range: 0x8006DE4C -> 0x8006DE60
unsigned char PlacementObject::ObjectIsInHand() {}

// Range: 0x8006DE60 -> 0x8006DE68
class cXMTObject * PlacementObject::GetGridObject() {}

// Range: 0x8006DE68 -> 0x8006DE78
// this: r5
void PlacementObject::GetOriginalPos() const {}

// Range: 0x8006DE78 -> 0x8006DE80
signed short PlacementObject::GetOriginalDir() {}

// Range: 0x8006DE80 -> 0x8006DEC8
// this: r31
ObjectManipulatorParams::ObjectManipulatorParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule17ObjectManipulator23ObjectManipulatorParams;
}

// Range: 0x8006DEC8 -> 0x8006DF78
// this: r29
ObjectManipulator::ObjectManipulator() {
    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> struct [anonymous] __vt__Q216InteractorModule17ObjectManipulator;
}

// Range: 0x8006DF78 -> 0x8006DFE0
// this: r30
ObjectManipulator::~ObjectManipulator() {}

// Range: 0x8006DFE0 -> 0x8006E018
// this: r31
void ObjectManipulator::OnCreate() {}

// Range: 0x8006E018 -> 0x8006E050
// this: r31
void ObjectManipulator::OnDestroy() {}

// Range: 0x8006E050 -> 0x8006E20C
// this: r29
void ObjectManipulator::OnStart(const struct InteractorParams * pParams /* r30 */) {
    // Local variables
    struct ButtonSemantic butSems[8]; // r1+0x30
    struct StickSemantic stickSems[4]; // r1+0x10

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006E20C -> 0x8006E28C
// this: r31
void ObjectManipulator::OnStop() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006E28C -> 0x8006E300
void ObjectManipulator::OnCommandUpdate() {}

// Range: 0x8006E300 -> 0x8006E36C
void ObjectManipulator::OnCommandReleased() {}

// Range: 0x8006E36C -> 0x8006E37C
// this: r0
void ObjectManipulator::PreDraw() {}

// Range: 0x8006E37C -> 0x8006E38C
// this: r0
void ObjectManipulator::Draw() {}

// Range: 0x8006E38C -> 0x8006EAC8
// this: r30
void ObjectManipulator::Update(float deltaT /* f31 */) {
    // Local variables
    unsigned char bMoveEnabled; // r31
    class cXObject * handObject; // r28
    class EVec2 screenCoords; // r1+0x48
    class EVec3 worldCoords; // r1+0x78
    class FTilePt gridCoords; // r1+0x40
    unsigned char bTileMove; // r27
    class cXMTObject * mtObjStart; // r27
    int xSize; // r1+0x10
    int ySize; // r1+0xC
    int xOffset; // r28
    int yOffset; // r29
    class FTileRect rect; // r1+0x68
    class FTilePt tileCenter; // r1+0x38
    int minX; // r5
    int maxX; // r27
    int minY; // r28
    int maxY; // r29
    class FTilePt snapPosTile; // r1+0x30
    class EVec3 worldSnapPos; // r1+0x5C
    unsigned char bWasPlaced; // r27
    struct PlacementData placeData; // r1+0x28
    struct PlacementData placeData; // r1+0x20
    float dz; // f2

    // References
    // -> class NewControlParms s_newControlParms;
    // -> class GameData _gd;
    // -> unsigned char m_lastBlueprintMode;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006EAC8 -> 0x8006EB1C
// this: r31
void ObjectManipulator::UpdateObjectGrabOffset() {}

// Range: 0x8006EB1C -> 0x8006EC5C
// this: r30
unsigned char ObjectManipulator::ResetGrab() {
    // Local variables
    class cXObject * pObject; // r31
    class EVec3 objcenter; // r1+0x28
    const class FTilePt & objectftilept; // r31
    class EVec3 objectpos; // r1+0x1C
    class EVec3 newoffset; // r1+0x10
    class EVec2 screenpt; // r1+0x8
}

// Range: 0x8006EC5C -> 0x8006EDA0
// this: r30
unsigned char ObjectManipulator::GradualCenterToObject() {
    // Local variables
    class cXObject * pObject; // r31
    class EVec3 newOffset; // r1+0x44
    class EVec3 cameraTarget; // r1+0x38
    int lotId; // r0
    float k_z; // f31
    class EVec3 objCenter; // r1+0x2C

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
}

// Range: 0x8006EDA0 -> 0x8006EE10
// this: r31
unsigned char ObjectManipulator::LockCursorToObject() {
    // Local variables
    class cXObject * pObject; // r0
    class EVec3 cursorFocus; // r1+0x10
    class EVec2 screenpt; // r1+0x8
}

// Range: 0x8006EE10 -> 0x8006F01C
// this: r26
void ObjectManipulator::UpdateObjectHighlights(class EIObjectMan * objMan /* r27 */) {
    // Local variables
    class cXObject * pSelectedObject; // r31
    class ISimInstance * pSelectedInstance; // r0
    class TNodeList allObjects; // r1+0x10
    class EBound3 cursorBound; // r1+0x20
    class ISimInstance * instance; // r31
    unsigned char shouldHighlight; // r30
    unsigned char overlap; // r0
    class NLIteratorPtrType * i; // r29
    const class EBound3 & currbounds; // r28
    class cXObject * pXObj; // r27
    struct OverlapData overlapData; // r1+0x8

    // References
    // -> class GameData _gd;
}

// Range: 0x8006F01C -> 0x8006F0EC
// this: r30
void ObjectManipulator::UpdateOverlapIntersection(struct OverlapData * pOverlapData /* r31 */) {
    // Local variables
    class EVec3 center; // r1+0x14
    class EVec3 delta; // r1+0x8
    float dist2; // f0
}

// Range: 0x8006F0EC -> 0x8006F0F4
void ObjectManipulator::SetIsCursorModelEnabled() {}

// Range: 0x8006F0F4 -> 0x8006F0FC
unsigned char ObjectManipulator::GetIsCursorModelEnabled() {}

// Range: 0x8006F0FC -> 0x8006F104
class PlacementObject & ObjectManipulator::GetPlacementObject() {}

// Range: 0x8006F104 -> 0x8006F160
// this: r31
GrabManipulatorParams::GrabManipulatorParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule15GrabManipulator21GrabManipulatorParams;
}

// Range: 0x8006F1B8 -> 0x8006F210
// this: r30
CallbackData::CallbackData(unsigned char bIsCloneMode /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule15GrabManipulator12CallbackData;
}

// Range: 0x8006F210 -> 0x8006F25C
// this: r31
GrabManipulator::GrabManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule15GrabManipulator;
}

// Range: 0x8006F2B4 -> 0x8006F31C
// this: r30
GrabManipulator::~GrabManipulator() {}

// Range: 0x8006F31C -> 0x8006F320
void GrabManipulator::OnCreate() {}

// Range: 0x8006F320 -> 0x8006F3A0
// this: r30
void GrabManipulator::OnStart(const struct InteractorParams * pParams /* r31 */) {}

// Range: 0x8006F450 -> 0x8006F7A8
// this: r31
void GrabManipulator::OnCommandPressed() {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    struct CallbackData cbd; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> unsigned char m_blueprintMode;
    // -> int _framecount;
    // -> class EGlobal _globals;
}

// Range: 0x8006F800 -> 0x8006F8A8
void GrabManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006F8A8 -> 0x8006F944
// this: r31
void GrabManipulator::CancelCurrentGrab() {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8006F944 -> 0x8006FB14
// this: r27
void GrabManipulator::TryGrabbingWorldObject() {
    // Local variables
    class TNodeList objList; // r1+0x8
    class NLIteratorPtrType * iter; // r31
    class ISimInstance * pInst; // r0
    signed short objId; // r0
    unsigned long cloneablecount; // r31
    class ISimInstance * pISimInstance; // r30
    class cXObject * pObject; // r29
    class NLIteratorPtrType * it; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006FB14 -> 0x8006FFB4
// this: r31
void GrabManipulator::TryGrabbingWorldObjectFromId(signed short objectId /* r27 */) {
    // Local variables
    class cXObject * pObject; // r28
    class cXMTObject * pMTObject; // r0
    class EVec3 objorigin; // r1+0x9C
    class ESimsCam * pCamera; // r0
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x90
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x84
    class ISimInstance * instance; // r29
    class EVec3 hit_pos; // r1+0x78
    class EVec3 hit_pos2; // r1+0x6C
    float hit_dist; // r1+0x8
    unsigned char failed; // r30
    class EVec3 hitPosAverage; // r1+0x60
    class EVec3 offset; // r1+0x54
    class ObjSelector * pSrcSelector; // r0
    int price; // r0
    int funds; // r0
    int guid; // r0
    class cXObject * pNewObject; // r28
    signed short srcdir; // r0
    unsigned long index; // r29
    struct CallbackData cbd; // r1+0xC0
    struct CallbackData cbd; // r1+0xA8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006FFB4 -> 0x8007012C
// this: r29
void GrabManipulator::DestroyObjectInHand(enum eDestroyObjectContext context /* r31 */) {
    // Local variables
    class cXObject * pObject; // r30
    class ObjSelector * pObjSelector; // r0

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x8007012C -> 0x800702D4
// this: r29
void GrabManipulator::DropCurrentObject() {
    // Local variables
    class cXObject * pPlacedObject; // r30
    class FTilePt snapTileLoc; // r1+0x10
    struct PlacementData placeData; // r1+0x8
    unsigned char objectInHand; // r0
    struct CallbackData cbd; // r1+0x18

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x800702D4 -> 0x80070378
// this: r31
void GrabManipulator::TryRemoveCurrentObjectFromWorld() {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x80070378 -> 0x80070900
// this: r30
unsigned char GrabManipulator::OnUndoButton() {
    // Local variables
    class InventoryItems * pInventory; // r0
    class cXObject * pObject; // r28
    class ObjSelector * pObjSelector; // r0
    struct PlacementData placedata; // r1+0x8
    class PlacementObject placer; // r1+0x40
    struct UndoRedoCommand command; // r1+0x28
    struct CallbackData cbd; // r1+0x10

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x80070900 -> 0x80070950
unsigned char GrabManipulator::CanPickupObject() {
    // Local variables
    class cXObject * pObjectLead; // r0
}

// Range: 0x80070950 -> 0x8007099C
// this: r31
CallbackData::CallbackData() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule16PlaceManipulator12CallbackData;
}

// Range: 0x8007099C -> 0x800709FC
// this: r31
PlaceManipulatorParams::PlaceManipulatorParams() {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule16PlaceManipulator22PlaceManipulatorParams;
}

// Range: 0x800709FC -> 0x80070A48
// this: r31
PlaceManipulator::PlaceManipulator() {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule16PlaceManipulator;
}

// Range: 0x80070AA0 -> 0x80070B08
// this: r30
PlaceManipulator::~PlaceManipulator() {}

// Range: 0x80070B08 -> 0x80070B40
// this: r31
void PlaceManipulator::OnCreate() {}

// Range: 0x80070B40 -> 0x80070BF4
// this: r30
void PlaceManipulator::OnStart(const struct InteractorParams * pParams /* r31 */) {
    // Local variables
    class ESimsCam * pSimsCam; // r0
    const struct PlaceManipulatorParams * pPlaceManipulatorParams; // [invalid]

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070BF4 -> 0x80070DF4
// this: r31
void PlaceManipulator::OnCommandPressed() {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    struct CallbackData cbd; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070E4C -> 0x80070EF4
void PlaceManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070EF4 -> 0x80070FC0
// this: r29
void PlaceManipulator::StartPlacement() {
    // Local variables
    class cXObject * pObject; // r31
    unsigned long index; // r30
}

// Range: 0x80071024 -> 0x80071204
// this: r28
void PlaceManipulator::TryPlacingCurrentObject() {
    // Local variables
    class cXObject * pSavedObject; // r29
    class FTilePt snapTileLoc; // r1+0x18
    struct PlacementData placeData; // r1+0x10
    signed short saveddirection; // r0
    struct CallbackData cbd; // r1+0x30
    class EVec2 screenpt; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x80071204 -> 0x80071370
// this: r29
void PlaceManipulator::CancelSession() {
    // Local variables
    struct CallbackData cbd; // r1+0x28
    unsigned char bRecomputeLightingGrid; // r31
    class cXObject * pObject; // r30
    class EVec2 screenpt; // r1+0x10

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80071370 -> 0x800713C4
// this: r30
PlacementObject::PlacementObject() {}

// Range: 0x800713C4 -> 0x80071404
// this: r31
PlacementObject::~PlacementObject() {}

// Range: 0x80071404 -> 0x80071520
unsigned char PlacementObject::SetObjectColor(class cXObject * pObject /* r31 */, unsigned char colorindex /* r30 */) {
    // Local variables
    class ISimInstance * pISimInstance; // r0
    class cXMTObject * pMTObject; // r0
}

// Range: 0x80071520 -> 0x800715FC
// this: r29
unsigned char PlacementObject::CreateNewPlacementObjectFromGuid(unsigned int objectGUID /* r30 */, unsigned char colorindex /* r31 */) {
    // Local variables
    float firevalue; // f0
}

// Range: 0x800715FC -> 0x800716D0
// this: r30
unsigned char PlacementObject::GrabExistingObjectInstanceFromId() {
    // Local variables
    class cXObject * pObject; // r0
}

// Range: 0x800716D0 -> 0x8007194C
// this: r27
void PlacementObject::CreateGridObject(const class FTilePt & location /* r28 */, class cXObject * pObjectInHand /* r29 */) {
    // Local variables
    class ObjSelector * pGridSelector; // r31
    class cXMTObject * pMTObject; // r30
    class cXMTObject * pMTObj; // r29
    class cXMTObject * pGridObject; // r0
    class cXMTObject * curObj; // r29
}

// Range: 0x8007194C -> 0x800719E0
// this: r28
class cXMTObject * PlacementObject::CreateGridTile(class ObjSelector * pGridSelector /* r29 */) {
    // Local variables
    class ObjectModule * pObjectModule; // r30
}

// Range: 0x800719E0 -> 0x80071A40
void PlacementObject::DestroyGridObject(class cXMTObject * & pLeadGridObject /* r30 */) {}

// Range: 0x80071A40 -> 0x80071A9C
unsigned char PlacementObject::InitializeGridObject(class cXMTObject * pGridObject /* r31 */) {}

// Range: 0x80071A9C -> 0x80071B50
void PlacementObject::AssignOffsetsToGridObject(class cXMTObject * pLeadGridObject /* r30 */, class cXObject * pObjectInHandLead /* r31 */) {
    // Local variables
    class cXMTObject * pLead; // r31
    class cXMTObject * pGridObject; // [invalid]
}

// Range: 0x80071B50 -> 0x80071BE4
// this: r31
void PlacementObject::Pickup() {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071BE4 -> 0x80071C4C
// this: r29
unsigned char PlacementObject::IsLegalToPlaceAtLocation(class FTilePt & location /* r30 */, struct PlacementData & placeData /* r31 */) {}

// Range: 0x80071C4C -> 0x80071D60
// this: r29
void PlacementObject::Place(const class FTilePt & location /* r30 */, struct PlacementData & placeData /* r31 */) {
    // Local variables
    unsigned char bCanPlace; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071D60 -> 0x80071DD8
// this: r31
unsigned char PlacementObject::Drop() {}

// Range: 0x80071DD8 -> 0x80071DDC
void PlacementObject::Initialize() {}

// Range: 0x80071DDC -> 0x80071DF4
unsigned char PlacementObject::CanObjectBeDestroyed() {}

// Range: 0x80071DF4 -> 0x80071E78
// this: r30
unsigned char PlacementObject::Destroy() {
    // Local variables
    unsigned char bWasDestroyed; // r31

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071E78 -> 0x80071F78
// this: r30
void PlacementObject::Reset() {
    // Local variables
    class cXObject * pObject; // r31
    class cXMTObject * pMTObj; // r0
    class cXMTObject * pMTObject; // r31
}

// Range: 0x80071F78 -> 0x80071FC0
// this: r4
void PlacementObject::ResetDirection() {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071FC0 -> 0x80072008
// this: r5
void PlacementObject::SetDirection() {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80072008 -> 0x800723FC
// this: r31
void PlacementObject::Rotate(enum RotateDirection dirToRotate /* r26 */) {
    // Local variables
    int theta; // r30
    class FTilePt loc; // r1+0x10
    int rotCount; // r29
    class cXObject * pLeadObject; // r0
    class cXMTObject * srch; // r28
    int slotCnt; // r27
    class cXObject * child; // r26
    int slotCnt; // r26
    class cXObject * child; // r27
    struct PlacementData placeData; // r1+0x8
    const struct ResData * pResData; // r0
    unsigned char bIsLegalToPlace; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x800723FC -> 0x800725A4
// this: r30
void PlacementObject::ResetLocation() {
    // Local variables
    struct PlacementData placeData; // r1+0x8
    unsigned char bIsLegalToPlace; // r0
    class cXMTObject * mtobj; // r0
}

// Range: 0x800725A4 -> 0x80072790
// this: r27
void PlacementObject::SetShaderToValidState(unsigned char bIsValidState /* r26 */) {
    // Local variables
    class cFixedWorld * world; // r29
    class FTilePt firstLoc; // r1+0x20
    class cXMTObject * pCurrentObject; // r28
    unsigned char bIsValid; // r27
    class FTilePt curLoc; // r1+0x18
    class ISimInstance * pCurrentInstance; // r30
    class cXMTObject * pCurrentObject; // r27
    class ISimInstance * pCurrentInstance; // r28
}


