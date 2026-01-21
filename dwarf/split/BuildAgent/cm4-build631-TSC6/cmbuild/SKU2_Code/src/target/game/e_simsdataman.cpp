/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\e_simsdataman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802143C8 -> 0x8021505C
*/
// Range: 0x802143C8 -> 0x802143D0
unsigned long EDummyFile::Read() {}

// Range: 0x802143D0 -> 0x802143D8
unsigned long EDummyFile::Write() {}

// Range: 0x802143D8 -> 0x802143E4
unsigned long EDummyFile::Seek() {}

// Range: 0x802143E4 -> 0x802143EC
unsigned long EDummyFile::Tell() {}

// Range: 0x802143EC -> 0x802143F4
unsigned char EDummyFile::Flush() {}

// Range: 0x802143F4 -> 0x802143FC
enum ErrorCode EDummyFile::GetLastError() {}

// Range: 0x802143FC -> 0x80214404
void * EDummyFile::GetSystemHandle() {}

// Range: 0x80214404 -> 0x80214408
void EDummyFile::Destroy() {}

// Range: 0x80214408 -> 0x80214480
unsigned char isResInList(class vector & resList /* r27 */, unsigned int id /* r28 */) {
    // Local variables
    unsigned char result; // r30
    int iSize; // r0
    int i; // r29
}

// Range: 0x80214480 -> 0x8021452C
void collectResInfoForSel(class ObjSelector * pSel /* r29 */, class vector & resList /* r30 */) {
    // Local variables
    class ERQuickdata * simsObjects; // r31
    const struct ResFile * pResFile; // r4
    const char * rowName; // r0
    unsigned int datasetID; // r1+0x8

    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x8021452C -> 0x80214640
void collectResInfoForMultSel(class ObjSelector * pSel /* r1+0x8 */, class vector & resList /* r28 */, class vector * pSelList /* r29 */) {
    // Local variables
    class ObjectFolder * const pFolder; // r31
    signed short masterID; // r30
    class ObjSelector * p; // r1+0xC
}

// Range: 0x80214640 -> 0x802146C4
unsigned char ESimsDataManager::compareID(const unsigned int & id1 /* r5 */, const unsigned int & id2 /* r30 */) {
    // Local variables
    unsigned int offs1; // r1+0x14
    unsigned int offs2; // r1+0x10
    unsigned int length1; // r1+0xC
    unsigned int length2; // r1+0x8

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x802146C4 -> 0x8021477C
void addRefList(class vector & resList /* r27 */, unsigned int * pTotalCompleted /* r28 */) {
    // Local variables
    int iSize; // r0
    int i; // r29

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8021477C -> 0x802147FC
void delRefList(class vector & resList /* r28 */) {
    // Local variables
    int iSize; // r0
    int i; // r29

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x802147FC -> 0x80214914
// this: r27
void ObjectSaveTypeTable2::DoStream(class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    class BString tempStr; // r1+0x18
    signed short type; // r1+0xA
    signed short objectType; // r1+0x8
    int guid; // r1+0x14
    int initTreeVersion; // r1+0x10
    int mainTreeVersion; // r1+0xC
    class ObjectFolder * const fFolder; // r30
    class ObjSelector * sel; // r0
}

// Range: 0x80214914 -> 0x80214988
// this: r31
ESimsDataManager::ESimsDataManager() {
    // References
    // -> struct [anonymous] __vt__16ESimsDataManager;
}

// Range: 0x80214988 -> 0x802149E8
// this: r30
ESimsDataManager::~ESimsDataManager() {}

// Range: 0x802149E8 -> 0x80214A54
float ESimsDataManager::GetLoadProgress() {}

// Range: 0x80214A54 -> 0x80214BB4
// this: r29
class EResource * ESimsDataManager::AllocateAndLoadResource(class EFile * pFile /* r31 */, unsigned int uLength /* r30 */) {
    // Local variables
    class ESim * pSim; // r31
    class EAutoMutex fmtx; // r1+0xC
    class CasSimRenderer * pSimRenderer; // r31
    class EAutoMutex fmtx; // r1+0x8
}

// Range: 0x80214BB4 -> 0x80214C28
// this: r30
void ESimsDataManager::preloadResources(class EEvent & event /* r31 */) {
    // Local variables
    class NghResFile * const pNghFile; // r0
}

// Range: 0x80214C28 -> 0x80214C74
// this: r31
void ESimsDataManager::incWorkQueued() {
    // Local variables
    class EAutoMutex fmtx; // r1+0x8
}

// Range: 0x80214C74 -> 0x80214CCC
// this: r31
void ESimsDataManager::decWorkQueued() {
    // Local variables
    class EAutoMutex fmtx; // r1+0x8
}

// Range: 0x80214CCC -> 0x80214D6C
// this: r29
void ESimsDataManager::LoadSelectorData(class ObjSelector * sel /* r30 */, unsigned char bWait /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
    // -> static class EDummyFile _dummyFile;
}

// Range: 0x80214D6C -> 0x80214DEC
// this: r30
void ESimsDataManager::UnloadSelectorData(class ObjSelector * sel /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x80214DEC -> 0x80214E68
void ESimsDataManager::undoPreload(class ObjSelector * sel /* r31 */) {
    // Local variables
    class vector resList; // r1+0x10
}

// Range: 0x80214E68 -> 0x80214EE8
void ESimsDataManager::preload(class ObjSelector * sel /* r31 */) {
    // Local variables
    class vector resList; // r1+0x10
}

// Range: 0x80214EE8 -> 0x80214F9C
// this: r29
void ESimsDataManager::QueueCommand(class ESim * pSim /* r30 */, unsigned int command /* r31 */) {
    // Local variables
    class EAutoMutex fmtx; // r1+0x8

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> static class EDummyFile _dummyFile;
}

// Range: 0x80214F9C -> 0x80215048
// this: r29
void ESimsDataManager::QueueCASCommand(class CasSimRenderer * pSimRenderer /* r30 */, unsigned int command /* r31 */) {
    // Local variables
    class EAutoMutex fmtx; // r1+0x8

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> static class EDummyFile _dummyFile;
}

// Range: 0x80215048 -> 0x8021505C
void ESimsDataManager::FlushCommands() {
    // References
    // -> class EResourceLoader * _pResLoader;
}


