/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcaudiosampleman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B2988 -> 0x802B2DB0
*/
// Range: 0x802B2988 -> 0x802B29E0
// this: r30
EAudioSampleManager::~EAudioSampleManager() {}

// Range: 0x802B29E0 -> 0x802B2A3C
// this: r30
ENgcAudioSampleManager::~ENgcAudioSampleManager() {}

// Range: 0x802B2A3C -> 0x802B2AC8
// this: r29
void ENgcAudioSampleManager::Init(const char * szDataType /* r30 */) {
    // Local variables
    void * mem; // r31

    // References
    // -> unsigned int m_pZeroBuffer;
}

// Range: 0x802B2AC8 -> 0x802B2B10
void ENgcAudioSampleManager::Shutdown() {
    // References
    // -> unsigned int m_pZeroBuffer;
}

// Range: 0x802B2B10 -> 0x802B2B34
unsigned char ENgcAudioSampleManager::CanCache() {}

// Range: 0x802B2B34 -> 0x802B2D58
// this: r31
class EResource * ENgcAudioSampleManager::AllocateAndLoadResource(class EFile * pFile /* r25 */, unsigned int uLength /* r26 */, unsigned int id /* r27 */) {
    // Local variables
    class ERSampledata * result; // r28
    unsigned int tell; // r0
    unsigned int allocLength; // r28

    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x802B2D58 -> 0x802B2DB0
static void readStream(unsigned int length /* r30 */, unsigned int aram_address /* r31 */) {}


