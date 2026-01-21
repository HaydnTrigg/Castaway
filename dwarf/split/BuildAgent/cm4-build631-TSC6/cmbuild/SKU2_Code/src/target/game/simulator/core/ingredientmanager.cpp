/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\ingredientmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011FD18 -> 0x801203F4
*/
// Range: 0x8011FD18 -> 0x8011FD5C
class IngredientManager * GetIngredientManager() {
    // References
    // -> static class IngredientManager * spIngredientManager;
}

// Range: 0x8011FD5C -> 0x8011FDFC
// this: r30
IngredientManager::IngredientManager() {
    // Local variables
    const struct ERQTable * pIngredientTypeTable; // r1+0x10
    const struct ERQTable * pIngredientTable; // r1+0xC
    const struct ERQTable * pFoodResultTable; // r1+0x8
}

// Range: 0x8011FDFC -> 0x8011FEB8
unsigned char IngredientManager::GetIngredientTypes(const struct IngredientType * * dst /* r30 */, unsigned long count /* r31 */) {
    // Local variables
    const struct ERQTable * pIngredientTypeTable; // r1+0x8
    unsigned long i; // r5
}

// Range: 0x8011FEB8 -> 0x8011FF88
unsigned char IngredientManager::GetIngredientTokens(const struct IngredientToken * * dst /* r30 */, unsigned long count /* r31 */) {
    // Local variables
    const struct ERQTable * pIngredientTable; // r1+0x8
    unsigned long i; // r5
}

// Range: 0x8011FF88 -> 0x8011FFB0
int IngredientManager::less_int16_t() {
    // Local variables
    signed short x; // r0
    signed short y; // r3
}

// Range: 0x8011FFB0 -> 0x8012005C
unsigned char IngredientManager::get_ingredient_type_array() {}

// Range: 0x8012005C -> 0x80120108
unsigned char IngredientManager::make_ingredient_type_array() {}

// Range: 0x80120108 -> 0x80120184
struct IngredientToken * IngredientManager::FindIngredientToken(signed short id /* r31 */) {
    // Local variables
    const struct ERQTable * pIngredientTable; // r1+0x8
    unsigned long index; // r0
    const struct IngredientToken & currToken; // r3
}

// Range: 0x80120184 -> 0x8012020C
struct FoodResult * IngredientManager::FindFoodResult(signed short id /* r31 */) {
    // Local variables
    const struct ERQTable * pFoodResultTable; // r1+0x8
    unsigned long count; // r0
    unsigned long index; // r6
}

// Range: 0x8012020C -> 0x80120314
struct FoodResult * IngredientManager::MixIngredients() {
    // Local variables
    signed short input[4]; // r1+0x18
    const struct ERQTable * pFoodResultTable; // r1+0x8
    unsigned long count; // r30
    unsigned long index; // r29
    const struct FoodResult * pFoodResult; // r28
    signed short foodingtypes[4]; // r1+0x10
}

// Range: 0x80120314 -> 0x80120354
unsigned char IngredientToken::GetName() {}

// Range: 0x80120354 -> 0x80120394
unsigned char IngredientToken::GetDescription() {}

// Range: 0x80120394 -> 0x801203C4
unsigned int IngredientToken::GetLargeShaderSymbol() {}

// Range: 0x801203C4 -> 0x801203F4
unsigned int IngredientToken::GetSmallShaderSymbol() {}


