/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\slots.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E0E8C -> 0x800E28E0
*/
// Range: 0x800E0E8C -> 0x800E0E9C
Slot::Slot() {
    // References
    // -> struct [anonymous] __vt__4Slot;
}

// Range: 0x800E0E9C -> 0x800E0EAC
Slot::Slot() {
    // References
    // -> struct [anonymous] __vt__4Slot;
}

// Range: 0x800E0EAC -> 0x800E0EB0
void Slot::WriteSlot() {}

// Range: 0x800E0EB0 -> 0x800E0F3C
// this: r31
RoutingSlot::RoutingSlot() {
    // References
    // -> struct [anonymous] __vt__11RoutingSlot;
}

// Range: 0x800E0F3C -> 0x800E0FFC
// this: r29
RoutingSlot::RoutingSlot(const class SlotDescriptor * sd /* r30 */) {
    // References
    // -> struct [anonymous] __vt__11RoutingSlot;
}

// Range: 0x800E0FFC -> 0x800E1078
void RoutingSlot::WriteSlot() {}

// Range: 0x800E1078 -> 0x800E10A0
void RoutingSlot::AllowDirection() {}

// Range: 0x800E10A0 -> 0x800E10B8
void RoutingSlot::SetFacingDirection() {}

// Range: 0x800E10B8 -> 0x800E10C8
void RoutingSlot::SetDistances() {}

// Range: 0x800E10C8 -> 0x800E1114
void RoutingSlot::SetTileDistances() {}

// Range: 0x800E1114 -> 0x800E11C0
float RoutingSlot::GetXOffset() {
    // Local variables
    float offset; // f0

    // References
    // -> float kCornerOffset[6];
    // -> float kStraightOffset[6];
}

// Range: 0x800E11C0 -> 0x800E1270
float RoutingSlot::GetYOffset() {
    // Local variables
    float offset; // f0

    // References
    // -> float kCornerOffset[6];
    // -> float kStraightOffset[6];
}

// Range: 0x800E1270 -> 0x800E12D8
// this: r31
ObjectSlot::ObjectSlot() {
    // References
    // -> struct [anonymous] __vt__10ObjectSlot;
}

// Range: 0x800E12D8 -> 0x800E1364
// this: r30
ObjectSlot::ObjectSlot(const class SlotDescriptor * sd /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10ObjectSlot;
}

// Range: 0x800E1364 -> 0x800E13A8
void ObjectSlot::WriteSlot() {}

// Range: 0x800E13A8 -> 0x800E1424
void ObjectSlot::SetHeight() {}

// Range: 0x800E1424 -> 0x800E14D4
// this: r30
SpriteSlot::SpriteSlot(class cXObject * pOb /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10SpriteSlot;
}

// Range: 0x800E14D4 -> 0x800E1598
// this: r29
SpriteSlot::SpriteSlot(class SlotDescriptor * sd /* r30 */, class cXObject * pOb /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10SpriteSlot;
}

// Range: 0x800E1598 -> 0x800E15C4
void SpriteSlot::WriteSlot() {}

// Range: 0x800E15C4 -> 0x800E161C
// this: r30
SpriteSlot::~SpriteSlot() {}

// Range: 0x800E161C -> 0x800E1690
// this: r31
void SpriteSlot::SetSprite() {}

// Range: 0x800E1690 -> 0x800E16F4
// this: r30
void SpriteSlot::SetSprite() {}

// Range: 0x800E16F4 -> 0x800E172C
// this: r31
void SpriteSlot::ChangeToSprite() {}

// Range: 0x800E172C -> 0x800E176C
// this: r31
void SpriteSlot::AlternateWithSprite() {}

// Range: 0x800E176C -> 0x800E1A20
// this: r31
unsigned char SpriteSlot::Tick() {
    // Local variables
    float ticksElapsed; // f31
    int swapTemp; // r0

    // References
    // -> float _dt;
}

// Range: 0x800E1A20 -> 0x800E1AB8
// this: r30
void SpriteSlot::ActivateForTicks(int tickDuration /* r31 */) {}

// Range: 0x800E1AB8 -> 0x800E1B04
// this: r30
void SpriteSlot::ActivateForLoops(int loopDuration /* r31 */) {
    // Local variables
    int ticks; // r0
}

// Range: 0x800E1B04 -> 0x800E1B38
void SpriteSlot::Reset() {}

// Range: 0x800E1B38 -> 0x800E1BF8
// this: r31
SlotDescriptor::SlotDescriptor() {
    // Local variables
    class RoutingSlot temp; // r1+0x8
}

// Range: 0x800E1BF8 -> 0x800E1EC0
// this: r31
void SlotDescriptor::DoStream(class ReconBuffer * r /* r29 */, int version /* r30 */) {
    // Local variables
    signed short temp; // r1+0xA
    signed short dummyID; // r1+0x8
}

// Range: 0x800E1EC0 -> 0x800E1ED0
SlotLoader::SlotLoader() {}

// Range: 0x800E1ED0 -> 0x800E20EC
// this: r25
unsigned char SlotLoader::Load(signed short id /* r26 */, class vector * objectSlots /* r27 */, class vector * routingSlots /* r28 */, class vector * spriteSlots /* r29 */, class cXObject * pObj /* r30 */) {
    // Local variables
    class ConsoleAutoRefCount slotDescList; // r1+0x8
    int count; // r31
    class SlotDescriptor * sd; // r3
    class ObjectSlot newSlot; // r1+0x54
    class SpriteSlot newSlot; // r1+0x78
    class RoutingSlot newSlot; // r1+0x18
}

// Range: 0x800E20EC -> 0x800E212C
// this: r31
SlotLoader::~SlotLoader() {}

// Range: 0x800E212C -> 0x800E2184
// this: r31
ObjectDataSlotDescList::ObjectDataSlotDescList() {
    // References
    // -> struct [anonymous] __vt__22ObjectDataSlotDescList;
}

// Range: 0x800E2184 -> 0x800E21C4
// this: r31
ObjectDataSlotDescList::~ObjectDataSlotDescList() {}

// Range: 0x800E21C4 -> 0x800E2220
// this: r30
unsigned char ObjectDataSlotDescList::GetResourceName(class StringBuffer & name /* r31 */) const {}

// Range: 0x800E2220 -> 0x800E2248
unsigned char ObjectDataSlotDescList::SetResourceName() {}

// Range: 0x800E2248 -> 0x800E2300
// this: r28
unsigned char QuickDataSlotDescList::LoadFromDataID(const class ObjectDataID & id /* r30 */) {
    // Local variables
    class iResFile * pFile; // r0
    const struct ResFile * pResFile; // r0
    const struct SlotDescList * sdl; // r3
}

// Range: 0x800E2300 -> 0x800E23C0
// this: r28
unsigned char QuickDataSlotDescList::LoadFromIndex(unsigned int id /* r29 */, int index /* r30 */) {
    // Local variables
    class iResFile * pFile; // r0
    const struct ResFile * pResFile; // r0
}

// Range: 0x800E23C0 -> 0x800E2460
// this: r30
unsigned char QuickDataSlotDescList::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x800E2460 -> 0x800E2474
unsigned int QuickDataSlotDescList::AddRef() {}

// Range: 0x800E2474 -> 0x800E24C8
unsigned int QuickDataSlotDescList::Release() {}

// Range: 0x800E24C8 -> 0x800E24F0
unsigned char IFFSlotDescList::AddSlot() {}

// Range: 0x800E24F0 -> 0x800E256C
// this: r30
unsigned char IFFSlotDescList::RemoveSlot(int index /* r31 */) {}

// Range: 0x800E256C -> 0x800E2650
// this: r27
unsigned char IFFSlotDescList::LoadFromDataID(const class ObjectDataID & id /* r28 */) {
    // Local variables
    class iResFile * file; // r30
    struct HandleNode * handle; // r29
    int err; // r0
}

// Range: 0x800E2650 -> 0x800E2744
// this: r27
unsigned char IFFSlotDescList::LoadFromIndex(unsigned int id /* r28 */, int index /* r29 */) {
    // Local variables
    class iResFile * file; // r30
    struct HandleNode * handle; // r29
    signed short resourceID; // r1+0x8
    int err; // r0
}

// Range: 0x800E2744 -> 0x800E2754
unsigned char IFFSlotDescList::LoadOnlyNameAndIDFromIndex() {}

// Range: 0x800E2754 -> 0x800E27D8
// this: r29
unsigned char IFFSlotDescList::SaveDataByID(const class ObjectDataID & id /* r30 */) {
    // Local variables
    class iResFile * file; // r31
    int err; // r0
}

// Range: 0x800E27D8 -> 0x800E2878
// this: r30
unsigned char IFFSlotDescList::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x800E2878 -> 0x800E288C
unsigned int IFFSlotDescList::AddRef() {}

// Range: 0x800E288C -> 0x800E28E0
unsigned int IFFSlotDescList::Release() {}


