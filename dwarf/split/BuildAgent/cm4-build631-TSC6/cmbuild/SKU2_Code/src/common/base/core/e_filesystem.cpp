/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_filesystem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80260B84 -> 0x8026142C
*/
// Range: 0x80260B84 -> 0x80260BF0
// this: r31
EFileSystem::EFileSystem() {
    // References
    // -> struct [anonymous] __vt__11EFileSystem;
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
}

// Range: 0x80260BF0 -> 0x80260C8C
// this: r30
EFileSystem::~EFileSystem() {
    // References
    // -> struct [anonymous] __vt__20EGlobalManagerClient;
    // -> unsigned char m_shutdownComplete;
    // -> struct [anonymous] __vt__11EFileSystem;
}

// Range: 0x80260C8C -> 0x80260C94
void EFileSystem::ManagedShutdown() {}

// Range: 0x80260C94 -> 0x80260D14
// this: r31
FileCreator::FileCreator() {}

// Range: 0x80260D14 -> 0x80260EAC
// this: r20
class EFile * (* EFileSystem::FindCreator(enum DeviceType eDevice /* r21 */, enum IOMode eMode /* r22 */, enum AccessMode eAccess /* r23 */, const char * pszExt /* r24 */))(class EFile *, char *, char *, enum DeviceType, enum AccessMode, unsigned int) const {
    // Local variables
    int maxCreator; // r27
    int maxScore; // r26
    int curCreator; // r25
    int curScore; // r0
    int numCreators; // r0
}

// Range: 0x80260EAC -> 0x80261004
// this: r26
unsigned char EFileSystem::Access(const char * pszFileName /* r27 */, const char * pszMode /* r28 */, enum DeviceType eDevice /* r29 */) {
    // Local variables
    unsigned char bResult; // r31
    class EFile * (* pfnCreator)(class EFile *, char *, char *, enum DeviceType, enum AccessMode, unsigned int); // r30
    enum IOMode eMode; // r1+0xC
    class EFile * pFile; // r1+0x8
    class TString filename; // r1+0x11C
}

// Range: 0x80261004 -> 0x80261144
// this: r24
unsigned char EFileSystem::Create(class EFile * & pFile /* r25 */, const char * pszFileName /* r26 */, const char * pszMode /* r27 */, enum DeviceType eDevice /* r28 */, enum AccessMode eAccess /* r29 */, unsigned int uiFileAttr /* r30 */) {
    // Local variables
    unsigned char bResult; // r31
    class EFile * (* pfnCreator)(class EFile *, char *, char *, enum DeviceType, enum AccessMode, unsigned int); // r31
    enum IOMode eMode; // r1+0x8
    class TString filename; // r1+0x118
}

// Range: 0x80261144 -> 0x80261188
void EFileSystem::Destroy(class EFile * & pFile /* r31 */) {}

// Range: 0x80261188 -> 0x802611F0
// this: r30
unsigned char EFileSystem::Init(enum DeviceType eDefaultType /* r31 */) {
    // References
    // -> unsigned char m_startupComplete;
}

// Range: 0x802611F0 -> 0x802611F8
unsigned char EFileSystem::InitHDDFileSystem() {}

// Range: 0x802611F8 -> 0x80261200
unsigned char EFileSystem::InitHDD() {}

// Range: 0x80261200 -> 0x80261214
unsigned char EFileSystem::HDDInitialized() {}

// Range: 0x80261214 -> 0x80261228
unsigned char EFileSystem::HDDTmpInitialized() {}

// Range: 0x80261228 -> 0x80261230
unsigned char EFileSystem::HDDIsUnformatted() {}

// Range: 0x80261230 -> 0x80261380
// this: r31
unsigned char EFileSystem::RegisterFileCreator(enum DeviceType eDevice /* r11 */, enum IOMode eMode /* r10 */, enum AccessMode eAccess /* r9 */, const char * pszExt /* r0 */) {
    // Local variables
    class FileCreator creator; // r1+0x8
    int cur; // r0
}

// Range: 0x80261380 -> 0x8026142C
unsigned char EFileSystem::ParseMode(const char * pszMode /* r29 */, enum IOMode & eMode /* r30 */) {
    // Local variables
    int mymode; // r31
}


