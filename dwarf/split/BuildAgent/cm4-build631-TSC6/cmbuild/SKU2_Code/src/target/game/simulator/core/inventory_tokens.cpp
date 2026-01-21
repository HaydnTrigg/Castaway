/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\inventory_tokens.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011F980 -> 0x8011FD18
*/
// Range: 0x8011F980 -> 0x8011FA18
unsigned char InventoryTokens::GetName(class ELocString & name /* r30 */) {
    // Local variables
    class ObjSelector * sel; // r0
}

// Range: 0x8011FA18 -> 0x8011FAB0
unsigned char InventoryTokens::GetDescription(class ELocString & desc /* r30 */) {
    // Local variables
    class ObjSelector * sel; // r0
}

// Range: 0x8011FAB0 -> 0x8011FBB8
// this: r29
unsigned int InventoryTokens::GetLargeShaderSymbol(unsigned char fromInventory /* r30 */) const {
    // Local variables
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
}

// Range: 0x8011FBB8 -> 0x8011FCC0
// this: r29
unsigned int InventoryTokens::GetSmallShaderSymbol(unsigned char fromInventory /* r30 */) const {
    // Local variables
    class ObjSelector * sel; // r0
    struct ObjDefinition * pObjDefinition; // r0
    struct ResData * pResData; // r3
}

// Range: 0x8011FCC0 -> 0x8011FD18
// this: r31
signed short InventoryTokens::GetHarvestTool() const {
    // Local variables
    class InventoryItems * pInventory; // r0
    signed short toolToken; // r1+0x8
}


