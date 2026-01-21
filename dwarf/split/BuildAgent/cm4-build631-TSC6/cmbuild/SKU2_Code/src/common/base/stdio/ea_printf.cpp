/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\stdio\ea_printf.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80275440 -> 0x80277784
*/
// Range: 0x80275440 -> 0x80275828
static char * local_fcvt(int precision /* r26 */, int * dec /* r27 */, int * sign /* r28 */, char * pConversionBuffer /* r30 */) {
    // Local variables
    float fval; // f29
    float fract; // f28
    float integer; // f1
    float tmp; // f0
    int neg; // r31
    int expcnt; // r25
    char * buf; // r30
    char * t; // r29
    char * p; // r24
    union __ieee_float_shape_type ieeef; // r1+0x8
    char * scan; // r24
}

// Range: 0x80275828 -> 0x802758A0
static unsigned char StringWriter8(unsigned long nCount /* r30 */, void * pContext8 /* r31 */) {
    // Local variables
    struct SnprintfContext8 * const pSnprintfContext8; // r0
}

// Range: 0x802758A0 -> 0x8027597C
static unsigned char StringWriter16To8() {
    // Local variables
    struct SnprintfContext8 * const pSnprintfContext8; // r0
    const char * pSrc; // r3
    char * pDest; // r7
    unsigned int i; // r8
}

// Range: 0x8027597C -> 0x80275F40
static char * ReadFormat8(struct FormatData * pFormatData /* r29 */, struct __va_list_struct * * hArguments /* r30 */) {
    // Local variables
    struct FormatData fd; // r1+0x8
    const char * pFormatCurrent; // r31
    char c; // r6
    unsigned char bModifierPresent; // r0
}

// Range: 0x80275F40 -> 0x802761B0
static char * WriteLong() {
    // Local variables
    unsigned long ulValue; // r4
    unsigned int nBase; // r8
    unsigned int nShift; // r9
    unsigned int nAnd; // r10
    enum Sign sign; // r11
    char * pCurrent; // r5
    int nDigitCount; // r12
    int nDigitCountSum; // r31
    unsigned char bNegative; // r0
    int nDigit; // r30
}

// Range: 0x802761B0 -> 0x802764A4
static char * WriteLongLong(const struct FormatData & fd /* r21 */) {
    // Local variables
    unsigned long long ulValue; // r31
    unsigned int nBase; // r29
    unsigned int nShift; // r28
    unsigned int nAnd; // r27
    enum Sign sign; // r26
    char * pCurrent; // r25
    int nDigitCount; // r24
    int nDigitCountSum; // r23
    unsigned char bNegative; // r22
    int nDigit; // r20
}

// Range: 0x802764A4 -> 0x80276708
static char * WriteDouble(const struct FormatData & fd /* r30 */, char * pBufferEnd8 /* r31 */) {
    // Local variables
    int nDecimalPoint; // r1+0xC
    int nSign; // r1+0x8
    char * pBufferFcvt; // r28
    char * pResult8; // r27
    char * pCurrent8; // r5
    char fcvtConversionBuffer[60]; // r1+0x10
    char * pBufferFract; // r27
    int fractSize; // r0
    int intSize; // r0
    int nWidth; // r4
}

// Range: 0x80276708 -> 0x80276E78
static int VprintfCore8(unsigned char (* pWriteFunction8)(char *, unsigned long, void *) /* r15 */, void * pWriteFunctionContext8 /* r16 */, struct __va_list_struct * arguments /* r1+0x8 */) {
    // Local variables
    const char * pFormatCurrent; // r27
    const char * pFormatSpec; // r25
    struct FormatData fd; // r1+0x10
    int nWriteCount; // r28
    int nWriteCountSum; // r26
    int nWriteCountCurrent; // r25
    char vprintfConversionBuffer[520]; // r1+0x30
    char * pBuffer8; // r24
    char * const pBufferEnd8; // r23
    char * pBufferData8; // r3
    long lValue; // r22
    unsigned long ulValue; // r21
    long long llValue; // r20
    unsigned long long ullValue; // r18
    double ldValue; // f1
    const char * pBufferCurrent; // r4
    const char * const pBufferMax; // r3
    const char * pBufferCurrent; // r3
    const char * pBufferCurrent8; // r4
    const char * const pBufferMax8; // r3
    const char * pBufferCurrent8; // r3
    char nFill; // r1+0xC

    // References
    // -> static char nSpace;
}

// Range: 0x80276E78 -> 0x80276F00
int Vsnprintf(char * pDestination /* r29 */, unsigned long n /* r30 */) {
    // Local variables
    struct SnprintfContext8 sc; // r1+0x8
    int nRequiredLength; // r3
}

// Range: 0x80276F00 -> 0x80276FE0
int Printf(const char * pFormat /* r26 */) {
    // Local variables
    char printfTemp[512]; // r1+0x88
    struct __va_list_struct arguments[1]; // r1+0x78
}

// Range: 0x80276FE0 -> 0x802770D4
int Sprintf(char * pDestination /* r25 */, const char * pFormat /* r26 */) {
    // Local variables
    struct __va_list_struct arguments[1]; // r1+0x78
}

// Range: 0x802770D4 -> 0x802771B8
int Snprintf(char * pDestination /* r27 */, unsigned long n /* r28 */) {
    // Local variables
    struct __va_list_struct arguments[1]; // r1+0x78
}

// Range: 0x802771B8 -> 0x80277250
int Vsprintf(char * pDestination /* r29 */) {}

// Range: 0x80277250 -> 0x80277384
static float local_atof() {
    // Local variables
    float result; // f4
    float sign; // f5
    char c; // r6
    float digit; // f3
}

// Range: 0x80277384 -> 0x8027742C
static int local_atoi() {
    // Local variables
    int result; // r6
    int sign; // r7
    char c; // r5
}

// Range: 0x8027742C -> 0x80277434
float AtoF() {}

// Range: 0x80277434 -> 0x8027743C
int AtoI() {}

// Range: 0x8027743C -> 0x80277784
int Sscanf(const char * pSrc /* r29 */) {
    // Local variables
    float * pFloat; // r26
    int * pInt; // r3
    char * pChar8; // [invalid]
    char c; // r3
    struct __va_list_struct arguments[1]; // r1+0x6C
    const char * p; // r31
    int count; // r30
    const char * pNextChar; // r1+0x68
    int val; // r26
    char * p8; // r4
}


