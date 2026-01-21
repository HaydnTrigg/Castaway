/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\tokenitem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011EC64 -> 0x8011EFDC
*/
// Range: 0x8011EC64 -> 0x8011ECE0
// this: r29
TokenItem::TokenItem(signed short tokenID /* r30 */, signed short count /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9TokenItem;
}

// Range: 0x8011ECE0 -> 0x8011ED38
struct IngredientToken * TokenItem::GetIngredientToken() {}

// Range: 0x8011ED38 -> 0x8011ED98
// this: r30
void TokenItem::DoStream(class ReconBuffer * rb /* r31 */) {}

// Range: 0x8011ED98 -> 0x8011EE7C
// this: r30
class cXObject * TokenItem::MakeObject() {
    // Local variables
    class ObjSelector * selector; // r31
    signed short newObjectID; // r0
    class cXObject * retObj; // r31
}

// Range: 0x8011EE7C -> 0x8011EEA8
unsigned char TokenItem::IsFood() {}

// Range: 0x8011EEA8 -> 0x8011EED4
unsigned char TokenItem::IsFastFood() {}

// Range: 0x8011EED4 -> 0x8011EF00
unsigned char TokenItem::IsTool() {}

// Range: 0x8011EF00 -> 0x8011EF2C
unsigned char TokenItem::IsFastTool() {}

// Range: 0x8011EF2C -> 0x8011EF58
unsigned char TokenItem::IsResource() {}

// Range: 0x8011EF58 -> 0x8011EF84
unsigned char TokenItem::CanBePlanted() {}

// Range: 0x8011EF84 -> 0x8011EFB0
unsigned char TokenItem::IsHandObject() {}

// Range: 0x8011EFB0 -> 0x8011EFDC
unsigned char TokenItem::IsDye() {}


