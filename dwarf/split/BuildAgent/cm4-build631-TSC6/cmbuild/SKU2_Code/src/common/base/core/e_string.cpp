/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_string.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802707B4 -> 0x80271570
*/
// Range: 0x802707B4 -> 0x80270878
// this: r26
EString::EString(const char * szSource1 /* r27 */, const char * szSource2 /* r28 */) {
    // Local variables
    int len1; // r30
    int len2; // r0
    int len; // r4
    char * pData; // r29
}

// Range: 0x80270878 -> 0x80270884
void EString::SetToNull() {
    // References
    // -> char m_null[1];
}

// Range: 0x80270884 -> 0x80270898
void EString::Deallocate() {
    // References
    // -> char m_null[1];
}

// Range: 0x80270898 -> 0x802708D0
char * EString::AllocBuffer(int nSize /* r31 */) {
    // Local variables
    char * pNew; // r0
}

// Range: 0x802708D0 -> 0x80270904
void EString::FreeBuffer(char * pBuf /* r31 */) {}

// Range: 0x80270904 -> 0x80270A1C
// this: r28
unsigned char EString::GetNextTokenInString(const char * szDelimiters /* r29 */, unsigned int & nStartPos /* r30 */, unsigned int & nEndPos /* r31 */) {
    // Local variables
    const char * szCurrentTokenPointer; // r8
    const char * szStartPtr; // r9
}

// Range: 0x80270A1C -> 0x80270AE8
// this: r27
int EString::Tokenize(const char * szDelimiters /* r28 */, class TArray & arrayTokens /* r29 */) {
    // Local variables
    unsigned int nStartPos; // r1+0x10
    unsigned int nEndPos; // r1+0xC

    // References
    // -> char m_null[1];
}

// Range: 0x80270AE8 -> 0x80270B88
// this: r28
void EString::MakeCopy(const char * szSource /* r29 */) {
    // Local variables
    int len; // r0
    int allocSize; // r30

    // References
    // -> char m_null[1];
}

// Range: 0x80270B88 -> 0x80270C38
// this: r27
class EString & EString::operator=(const char * szSource /* r28 */) {
    // Local variables
    char * pOld; // r29

    // References
    // -> char m_null[1];
}

// Range: 0x80270C38 -> 0x80270C40
int EString::GetLength() {}

// Range: 0x80270C40 -> 0x80270C7C
class EString & EString::MakeUpper() {
    // Local variables
    char * c; // r5
}

// Range: 0x80270C7C -> 0x80270CB0
// this: r31
class EString & EString::MakeLower() {}

// Range: 0x80270CB0 -> 0x80270D04
// this: r30
void EString::Empty() {
    // References
    // -> char m_null[1];
}

// Range: 0x80270D04 -> 0x80270D5C
int EString::Compare() {}

// Range: 0x80270D5C -> 0x80270DB4
int EString::CompareNoCase() {}

// Range: 0x80270DB4 -> 0x80270EE0
class EString EString::Mid(int count /* r28 */) {
    // References
    // -> char m_null[1];
}

// Range: 0x80270EE0 -> 0x80270FBC
// this: r27
class EString EString::Left(const class EString * const this /* r30 */, int count /* r29 */) const {
    // References
    // -> char m_null[1];
}

// Range: 0x80270FBC -> 0x80271098
// this: r27
class EString & EString::operator+=() {
    // Local variables
    class EString t; // r1+0x8

    // References
    // -> char m_null[1];
}

// Range: 0x80271098 -> 0x80271164
// this: r28
class EString & EString::Convert() {
    // Local variables
    char buffer[40]; // r1+0x8

    // References
    // -> char m_null[1];
}

// Range: 0x80271164 -> 0x802711A4
class EStream & operator<<(class EStream & s /* r31 */) {}

// Range: 0x802711A4 -> 0x8027125C
class EStream & operator>>(class EStream & s /* r27 */, class EString & d /* r28 */) {
    // Local variables
    char szBuffer[1024]; // r1+0x8

    // References
    // -> char m_null[1];
}

// Range: 0x8027125C -> 0x8027138C
class EString EString::ExtractFilename() {
    // Local variables
    char szBuffer[260]; // r1+0x8

    // References
    // -> char m_null[1];
}

// Range: 0x8027138C -> 0x802713FC
class EString & EString::MakeLegalSymbolName() {
    // Local variables
    char * szThis; // r6
}

// Range: 0x802713FC -> 0x80271570
// this: r28
char * const EString::Format(const char * pszFormat /* r29 */) {
    // Local variables
    struct __va_list_struct argList[1]; // r1+0x68
    int nLength; // r0

    // References
    // -> char m_null[1];
}


