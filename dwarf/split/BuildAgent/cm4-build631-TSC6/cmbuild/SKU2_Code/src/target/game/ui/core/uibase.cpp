/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uibase.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017BBB8 -> 0x8017BEA4
*/
// Range: 0x8017BBB8 -> 0x8017BBCC
unsigned int UIObjectBase::pushAptButtonFilter() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BBCC -> 0x8017BBE0
void UIObjectBase::popAptButtonFilter() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BBE0 -> 0x8017BBFC
void UIObjectBase::addCmdToAptButtonFilter(unsigned int uFilterID /* r0 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BBFC -> 0x8017BC18
void UIObjectBase::removeCmdFromAptButtonFilter(unsigned int uFilterID /* r0 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BC18 -> 0x8017BC7C
unsigned int UIObjectBase::pushAptButtonFilterALL() {
    // Local variables
    unsigned int uResultID; // r31
    unsigned long index; // r30
}

// Range: 0x8017BC7C -> 0x8017BD1C
unsigned char UIObjectBase::makeNumberString(unsigned short * pDst /* r29 */) {
    // Local variables
    char tempbuff[32]; // r1+0x8
    int len; // r30
}

// Range: 0x8017BD1C -> 0x8017BDA4
unsigned char UIObjectBase::makeMoneyString(int number /* r29 */, unsigned short * pDst /* r30 */, unsigned char bUseCurrencySymbol /* r31 */) {
    // Local variables
    class StackString2 moneystring; // r1+0x8
}

// Range: 0x8017BDA4 -> 0x8017BE30
unsigned char UIObjectBase::makePetPointString(int number /* r29 */, unsigned short * pDst /* r30 */, unsigned char bUsePetPointSymbol /* r31 */) {
    // Local variables
    class StackString2 petpointstring; // r1+0x8
}

// Range: 0x8017BE30 -> 0x8017BE34
unsigned char UIObjectBase::doUIQDStringSubstitution() {}

// Range: 0x8017BE34 -> 0x8017BE68
void UIObjectBase::AptViewer_CallFunction(const char * szName /* r12 */, char * szReturnValue /* r11 */, const char * szThisObject /* r10 */, int nNumParams /* r0 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BE68 -> 0x8017BE74
unsigned int UIObjectBase::get_blank_shader_id() {}

// Range: 0x8017BE74 -> 0x8017BEA4
unsigned char UIObjectBase::play_error_sound() {}


