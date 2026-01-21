/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rshader.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800318DC -> 0x8003195C
*/
// Range: 0x800318DC -> 0x8003192C
void ERShader::Select(class ERC * prc /* r30 */, unsigned int overrideColorId /* r31 */) {}

// Range: 0x8003192C -> 0x8003195C
class EShader * ERShader::GetShader() {}


// Range: 0x8006B710 -> 0x8006B724
void * ERShader::operator new() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8006B724 -> 0x8006B74C
class ERTexture * ERShader::GetRTextureForRenderPass() {}


// Range: 0x80084298 -> 0x800842D8
void ERShader::SelectForShadowMask(class ERC * prc /* r31 */) {}

// Range: 0x800842D8 -> 0x800842E4
unsigned char ERShader::IsMultiShader() {}

// Range: 0x800842E4 -> 0x80084360
// this: r31
unsigned char ERShader::IsMultiTextureShader() {}

// Range: 0x80084360 -> 0x800843A0
// this: r31
class ERShader * ERShader::GetCurrentShader() {}


// Range: 0x8017E764 -> 0x8017E770
unsigned char ERShader::IsStateChangePending() {}

// Range: 0x8017E770 -> 0x8017E784
unsigned char ERShader::SupportsMultiShaderStates() {}

// Range: 0x8017E784 -> 0x8017E78C
unsigned char ERShader::GetCurrentGraphicsState() {}


// Range: 0x802EFB8C -> 0x802EFBAC
void ERShader::SafeDelete() {}

// Range: 0x802EFBAC -> 0x802EFBB8
class ETypeInfo * ERShader::GetTypeInfo() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802EFBB8 -> 0x802EFBC8
char * ERShader::GetTypeName() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802EFBC8 -> 0x802EFBD8
unsigned int ERShader::GetTypeKey() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802EFBD8 -> 0x802EFBE8
unsigned short ERShader::GetTypeVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x802EFBE8 -> 0x802EFC00
void ERShader::DetachClone() {}

// Range: 0x802EFC00 -> 0x802EFCF8
void ERShader::Destruct(class ERShader * p /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9EResource;
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__8ERShader;
}

// Range: 0x802EFCF8 -> 0x802EFD08
void ERShader::Construct() {}

// Range: 0x802EFD08 -> 0x802EFD44
class ERShader * ERShader::New() {
    // References
    // -> class EShaderManager _shaderman;
}


