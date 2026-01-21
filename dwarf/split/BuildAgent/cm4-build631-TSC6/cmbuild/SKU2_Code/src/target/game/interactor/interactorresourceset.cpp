/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactorresourceset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800636E8 -> 0x80063DD0
*/
// Range: 0x800636E8 -> 0x80063794
// this: r30
InteractorResourceSet::InteractorResourceSet() {}

// Range: 0x80063794 -> 0x80063838
// this: r30
InteractorResourceSet::~InteractorResourceSet() {}

// Range: 0x80063838 -> 0x80063908
// this: r30
unsigned char InteractorResourceSet::AddModel(unsigned int modelId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERModel * pModel; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8006391C -> 0x800639D8
// this: r30
class ERModel * InteractorResourceSet::GetModel(unsigned int modelId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERModel * pModel; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x800639D8 -> 0x80063AAC
// this: r30
unsigned char InteractorResourceSet::AddShader(unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERShader * pShader; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063AC0 -> 0x80063B60
// this: r30
unsigned char InteractorResourceSet::RemoveShader(unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    unsigned int * iter; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063B60 -> 0x80063C20
// this: r30
class ERShader * InteractorResourceSet::GetShader(unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERShader * pShader; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063C20 -> 0x80063D38
// this: r29
void InteractorResourceSet::ClearSet() {
    // Local variables
    unsigned int * iter; // r30
    unsigned int * iter; // r30
    unsigned int * iter; // r30

    // References
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
}

// Range: 0x80063D38 -> 0x80063D78
// this: r31
void InteractorResourceSet::AddOrderTableData() {}

// Range: 0x80063D78 -> 0x80063DD0
// this: r30
class EOrderTableData * InteractorResourceSet::GetOrderTableData(unsigned int tableId /* r31 */) {}


