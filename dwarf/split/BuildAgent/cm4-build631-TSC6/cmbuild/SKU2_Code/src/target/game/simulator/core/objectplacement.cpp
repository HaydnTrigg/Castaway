/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectplacement.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80145F9C -> 0x80146224
*/
// Range: 0x80145F9C -> 0x80145FE8
// this: r30
PlacementSpec::PlacementSpec(class cXObject * obj /* r31 */) {}

// Range: 0x80145FE8 -> 0x80146024
// this: r31
PlacementSpec::PlacementSpec() {}

// Range: 0x80146024 -> 0x801460DC
// this: r27
PlacementSpec::PlacementSpec(const class FTilePt & loc /* r28 */, int inLevel /* r29 */, class cXObject * inContainer /* r30 */, int inSlotNum /* r31 */) {
    // Local variables
    class ObjectSlot * objslot; // r0
}

// Range: 0x801460DC -> 0x80146158
// this: r30
HierarchySite::HierarchySite(const class PlacementSpec * ps /* r31 */) {}

// Range: 0x80146158 -> 0x801461A4
// this: r30
HierarchySite::HierarchySite(class cXObject * obj /* r31 */) {}

// Range: 0x801461A4 -> 0x80146224
// this: r28
HierarchySite::HierarchySite(class cXObject * inContainer /* r29 */, const class FTilePt & loc /* r30 */, int inSlotNum /* r31 */) {}


