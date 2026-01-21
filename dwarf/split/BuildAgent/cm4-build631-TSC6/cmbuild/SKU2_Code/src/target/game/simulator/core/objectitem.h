/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectitem.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E2DC -> 0x8011E550
*/
// Range: 0x8011E2DC -> 0x8011E334
// this: r31
OwnableItem::OwnableItem() {
    // References
    // -> struct [anonymous] __vt__11OwnableItem;
}

// Range: 0x8011E334 -> 0x8011E39C
// this: r30
ObjectItem::~ObjectItem() {}

// Range: 0x8011E39C -> 0x8011E3A4
int ObjectItem::GetGuid() {}

// Range: 0x8011E3A4 -> 0x8011E3AC
signed char ObjectItem::GetCategory() {}

// Range: 0x8011E3AC -> 0x8011E3B4
signed short ObjectItem::GetOwnerID() {}

// Range: 0x8011E3B4 -> 0x8011E3BC
signed short ObjectItem::GetOwnershipPoints() {}

// Range: 0x8011E3BC -> 0x8011E3C0
void ObjectItem::SetupOwnershipInfo() {}

// Range: 0x8011E3C0 -> 0x8011E428
// this: r30
OwnableItem::~OwnableItem() {}

// Range: 0x8011E428 -> 0x8011E430
signed char OwnableItem::GetCategory() {}

// Range: 0x8011E430 -> 0x8011E438
signed short ObjectItem::GetID() {}

// Range: 0x8011E438 -> 0x8011E440
signed short ObjectItem::GetCount() {}

// Range: 0x8011E440 -> 0x8011E448
int ObjectItem::GetNumAttributes() {}

// Range: 0x8011E448 -> 0x8011E470
signed short ObjectItem::GetAttribute() {}

// Range: 0x8011E470 -> 0x8011E4A4
void ObjectItem::SetAttribute(signed short value /* r31 */) {}

// Range: 0x8011E4A4 -> 0x8011E4D0
void ObjectItem::AddAtribute(signed short value /* r1+0x8 */) {}

// Range: 0x8011E4D0 -> 0x8011E4D8
signed char ObjectItem::GetStatusText() {}

// Range: 0x8011E4D8 -> 0x8011E4E0
void ObjectItem::SetStatusText() {}

// Range: 0x8011E4E0 -> 0x8011E4E4
void ObjectItem::IncrementCount() {}

// Range: 0x8011E4E4 -> 0x8011E4E8
void ObjectItem::DecrementCount() {}

// Range: 0x8011E4E8 -> 0x8011E4F0
struct InventoryTokens * ObjectItem::GetToken() {}

// Range: 0x8011E4F0 -> 0x8011E4F8
struct IngredientToken * ObjectItem::GetIngredientToken() {}

// Range: 0x8011E4F8 -> 0x8011E500
unsigned char ObjectItem::IsFood() {}

// Range: 0x8011E500 -> 0x8011E508
unsigned char ObjectItem::IsFastFood() {}

// Range: 0x8011E508 -> 0x8011E510
unsigned char ObjectItem::IsTool() {}

// Range: 0x8011E510 -> 0x8011E518
unsigned char ObjectItem::IsFastTool() {}

// Range: 0x8011E518 -> 0x8011E520
unsigned char ObjectItem::IsResource() {}

// Range: 0x8011E520 -> 0x8011E528
unsigned char ObjectItem::CanBePlanted() {}

// Range: 0x8011E528 -> 0x8011E530
unsigned char ObjectItem::IsHandObject() {}

// Range: 0x8011E530 -> 0x8011E538
unsigned char ObjectItem::IsClothing() {}

// Range: 0x8011E538 -> 0x8011E540
unsigned char ObjectItem::IsDye() {}

// Range: 0x8011E540 -> 0x8011E548
unsigned char ObjectItem::IsDyable() {}

// Range: 0x8011E548 -> 0x8011E550
void ObjectItem::ClearAttributes() {}


