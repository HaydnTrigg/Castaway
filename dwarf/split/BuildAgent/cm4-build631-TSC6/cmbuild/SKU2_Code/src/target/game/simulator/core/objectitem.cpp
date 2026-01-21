/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectitem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011EFDC -> 0x8011F980
*/
// Range: 0x8011EFDC -> 0x8011F050
// this: r31
ObjectItem::ObjectItem() {
    // References
    // -> struct [anonymous] __vt__10ObjectItem;
}

// Range: 0x8011F050 -> 0x8011F0FC
// this: r30
ObjectItem::ObjectItem(class cXObject * obj /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10ObjectItem;
}

// Range: 0x8011F0FC -> 0x8011F1CC
// this: r30
ObjectItem::ObjectItem(unsigned int guid /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10ObjectItem;
}

// Range: 0x8011F1CC -> 0x8011F2B8
// this: r28
class cXObject * ObjectItem::MakeObject(class Family * fam /* r29 */, signed short index /* r30 */) {
    // Local variables
    class ObjSelector * selector; // r31
    signed short newObjectID; // r0
    class cXObject * retObj; // r31
}

// Range: 0x8011F2B8 -> 0x8011F350
// this: r28
void ObjectItem::LoadItemInfo(class cXObject * obj /* r29 */, class Family * fam /* r30 */, signed short index /* r31 */) {}

// Range: 0x8011F350 -> 0x8011F490
// this: r28
void ObjectItem::DoStream(class ReconBuffer * rb /* r29 */, int version /* r30 */) {
    // Local variables
    signed short length; // r1+0xC
    int i; // r31
    signed short temp; // r1+0xA
    unsigned char dummy; // r1+0x8
}

// Range: 0x8011F490 -> 0x8011F50C
// this: r30
OwnableItem::OwnableItem(class cXObject * obj /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11OwnableItem;
}

// Range: 0x8011F50C -> 0x8011F564
// this: r31
OwnableItem::OwnableItem() {
    // References
    // -> struct [anonymous] __vt__11OwnableItem;
}

// Range: 0x8011F564 -> 0x8011F630
// this: r29
void OwnableItem::SetupOwnershipInfo(class cXObject * obj /* r30 */) {
    // Local variables
    class RelMatrix * relations; // r31
    int i; // r30
    struct OwnerInfo oi; // r1+0x8
}

// Range: 0x8011F630 -> 0x8011F6C0
// this: r29
void OwnableItem::AddOwner(struct OwnerInfo & oi /* r30 */) {
    // Local variables
    struct OwnerInfo * i; // r31
}

// Range: 0x8011F6C0 -> 0x8011F710
// this: r31
signed short OwnableItem::GetOwnerID() const {}

// Range: 0x8011F710 -> 0x8011F788
// this: r29
signed short OwnableItem::GetOwnershipPoints(signed short ownerID /* r30 */) const {
    // Local variables
    const struct OwnerInfo * i; // r31
}

// Range: 0x8011F788 -> 0x8011F7FC
// this: r28
class cXObject * OwnableItem::MakeObject(class Family * fam /* r29 */, signed short index /* r30 */) {
    // Local variables
    class cXObject * retObj; // r31
}

// Range: 0x8011F7FC -> 0x8011F890
// this: r29
void OwnableItem::LoadItemInfo(class cXObject * obj /* r30 */) {
    // Local variables
    class RelMatrix * relMat; // r31
    struct OwnerInfo * i; // r30
}

// Range: 0x8011F890 -> 0x8011F980
// this: r29
void OwnableItem::DoStream(class ReconBuffer * rb /* r30 */) {
    // Local variables
    signed short length; // r1+0x8
    int i; // r31
    struct OwnerInfo temp; // r1+0x10
    struct OwnerInfo curr; // r1+0xC
}


