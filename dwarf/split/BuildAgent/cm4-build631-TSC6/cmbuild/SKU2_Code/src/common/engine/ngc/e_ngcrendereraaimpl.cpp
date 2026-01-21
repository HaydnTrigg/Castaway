/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrendereraaimpl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5C00 -> 0x802C5E90
*/
// Range: 0x802C5C00 -> 0x802C5C1C
NGCRendererAAImpl::NGCRendererAAImpl() {}

// Range: 0x802C5C1C -> 0x802C5C78
// this: r30
NGCRendererAAImpl::~NGCRendererAAImpl() {}

// Range: 0x802C5C78 -> 0x802C5D24
// this: r30
void NGCRendererAAImpl::Init() {
    // Local variables
    int prevFrameTexMemSize; // r31

    // References
    // -> unsigned char kAASamplePatternOn[12][2];
    // -> unsigned char kVerticalFilterOn[7];
}

// Range: 0x802C5D24 -> 0x802C5D4C
void * NGCRendererAAImpl::GetPreviousFrameBuffer() {}

// Range: 0x802C5D4C -> 0x802C5D5C
// this: r5
unsigned char NGCRendererAAImpl::EnablePrevFrameCopy() {
    // Local variables
    unsigned char prev; // r0
}

// Range: 0x802C5D5C -> 0x802C5D6C
// this: r5
unsigned char NGCRendererAAImpl::ForceDisableAA() {
    // Local variables
    unsigned char retVal; // r0
}

// Range: 0x802C5D6C -> 0x802C5D74
int NGCRendererAAImpl::GetNumberOfFullScenePasses() {}

// Range: 0x802C5D74 -> 0x802C5DEC
// this: r31
void NGCRendererAAImpl::BeginFullScenePass() {}

// Range: 0x802C5DEC -> 0x802C5DF0
void NGCRendererAAImpl::EndFullScenePass() {}

// Range: 0x802C5DF0 -> 0x802C5E90
// this: r31
void NGCRendererAAImpl::EndFrame() {}


