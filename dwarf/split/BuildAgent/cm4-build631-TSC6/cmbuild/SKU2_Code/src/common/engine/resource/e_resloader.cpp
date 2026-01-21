/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_resloader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D99AC -> 0x802DBC7C
*/
// Range: 0x802D99AC -> 0x802D99EC
// this: r31
EResourceLoader::~EResourceLoader() {}

// Range: 0x802D99EC -> 0x802D9B44
// this: r30
unsigned char EResLoaderMsgPriQueue::Create(int size /* r31 */) {
    // Local variables
    unsigned char inRet; // r0
    unsigned char outRet; // r0
    int i; // r7
    struct QueueList * temp; // r8
}

// Range: 0x802D9B44 -> 0x802D9C20
// this: r29
unsigned char EResLoaderMsgPriQueue::IsInQueue(class EResourceManager * pManager /* r30 */, unsigned int id /* r31 */) {
    // Local variables
    struct QueueList * pQueue; // r3
    struct EResLoadCmd * cmd; // r4
}

// Range: 0x802D9C20 -> 0x802D9D0C
// this: r29
unsigned char EResLoaderMsgPriQueue::CollapseDelRef(class EResourceManager * pManager /* r30 */, unsigned int id /* r31 */) {
    // Local variables
    struct QueueList * pQueue; // r3
    struct EResLoadCmd * cmd; // r4
}

// Range: 0x802D9D0C -> 0x802D9E2C
// this: r30
unsigned char EResLoaderMsgPriQueue::Send(unsigned int msg /* r31 */) {
    // Local variables
    unsigned char success; // r0
}

// Range: 0x802D9E2C -> 0x802D9FC4
// this: r31
unsigned char EResLoaderMsgPriQueue::Receive(unsigned int * pMsgOut /* r30 */) {
    // Local variables
    unsigned char success; // r0
    struct QueueList * pQueue; // r3
}

// Range: 0x802D9FC4 -> 0x802D9FE8
void EResourceLoaderImpl::GetQueueStats() {}

// Range: 0x802D9FE8 -> 0x802D9FF0
int EResourceLoaderImpl::GetQueuedCommandCount() {}

// Range: 0x802D9FF0 -> 0x802DA024
unsigned char EResourceLoaderImpl::IsBusy() {}

// Range: 0x802DA024 -> 0x802DA11C
// this: r28
EResourceLoaderImpl::EResourceLoaderImpl() {
    // References
    // -> class EResourceLoader * _pResLoader;
    // -> struct [anonymous] __vt__19EResourceLoaderImpl;
    // -> struct [anonymous] __vt__15EResourceLoader;
}

// Range: 0x802DA11C -> 0x802DA21C
// this: r29
EResourceLoaderImpl::~EResourceLoaderImpl() {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802DA21C -> 0x802DA2F0
// this: r28
void EResourceLoaderImpl::Shutdown() {
    // Local variables
    int i; // r29
}

// Range: 0x802DA2F0 -> 0x802DA370
// this: r31
void EResourceLoaderImpl::TerminateThread() {}

// Range: 0x802DA370 -> 0x802DA378
unsigned char EResourceLoaderImpl::IsCallingThread() {}

// Range: 0x802DA378 -> 0x802DA3F8
// this: r30
void EResourceLoaderImpl::Init() {}

// Range: 0x802DA3F8 -> 0x802DA3FC
void EResourceLoaderImpl::Update() {}

// Range: 0x802DA3FC -> 0x802DA408
void EResourceLoaderImpl::sendCommand() {}

// Range: 0x802DA408 -> 0x802DA4F8
// this: r30
void EResourceLoaderImpl::FlushCommandQueue() {
    // Local variables
    class EEvent flushEvent; // r1+0x8
}

// Range: 0x802DA4F8 -> 0x802DA5BC
// this: r29
unsigned int * EResourceLoaderImpl::AddManager(class EResourceManager * pManager /* r30 */) {}

// Range: 0x802DA5BC -> 0x802DA694
// this: r29
void EResourceLoaderImpl::RemoveManager(class EResourceManager * pManager /* r30 */) {
    // Local variables
    class EAutoMutex mutex'47; // r31
}

// Range: 0x802DA694 -> 0x802DA69C
unsigned char EResourceLoaderImpl::CollapseDelRef() {}

// Range: 0x802DA69C -> 0x802DA6A4
unsigned char EResourceLoaderImpl::IsInQueue() {}

// Range: 0x802DA6A4 -> 0x802DA884
// this: r29
class EResource * EResourceLoaderImpl::Load(class EResourceManager * pManager /* r30 */, unsigned int id /* r31 */, class EFile * pSourceFile /* r23 */, unsigned int uStartOffset /* r24 */, unsigned int uLength /* r28 */, unsigned char bWait /* r25 */) {
    // Local variables
    class EResource * result; // r26
    class EFile * pfile; // r3
    unsigned int LSN; // r0
    unsigned int offset; // r1+0xC
    unsigned int length; // r1+0x8

    // References
    // -> class EApp * _pApp;
}

// Range: 0x802DA884 -> 0x802DA97C
// this: r29
void EResourceLoaderImpl::Unload(class EResourceManager * pManager /* r30 */, unsigned int id /* r31 */) {}

// Range: 0x802DA97C -> 0x802DAAEC
// this: r23
unsigned int EResourceLoaderImpl::ReadData(class EFile * pSourceFile /* r24 */, void * pBuffer /* r25 */, unsigned int uStartOffset /* r26 */, unsigned int uLength /* r27 */, unsigned char bWait /* r28 */, struct EResLoadCmdResult * pResult /* r29 */) {
    // Local variables
    unsigned int result; // r30
}

// Range: 0x802DAAEC -> 0x802DAC84
// this: r23
unsigned int EResourceLoaderImpl::ReadData(class EResourceManager * manager /* r24 */, void * pBuffer /* r25 */, unsigned int uStartOffset /* r26 */, unsigned int uLength /* r27 */, unsigned char bWait /* r28 */, struct EResLoadCmdResult * pResult /* r29 */) {
    // Local variables
    unsigned int result; // r30
    class EFile * pfile; // r0
    unsigned int LSN; // r0
}

// Range: 0x802DAC84 -> 0x802DADF4
// this: r23
unsigned int EResourceLoaderImpl::WriteData(class EFile * pDestFile /* r24 */, void * pBuffer /* r25 */, unsigned int uStartOffset /* r26 */, unsigned int uLength /* r27 */, unsigned char bWait /* r28 */, struct EResLoadCmdResult * pResult /* r29 */) {
    // Local variables
    unsigned int result; // r30
}

// Range: 0x802DADF4 -> 0x802DAE74
// this: r29
class EResourceManager * EResourceLoaderImpl::FindResourceManager(const char * szDataType /* r30 */) {}

// Range: 0x802DAE74 -> 0x802DAEE0
class EResourceManager * EResourceLoaderImpl::FindResourceManagerInternal(const char * szDataType /* r30 */) {
    // Local variables
    class EResourceManager * pManager; // r31
}

// Range: 0x802DAEE0 -> 0x802DAF80
// this: r30
void EResourceLoaderImpl::OpenFiles() {
    // Local variables
    class EResourceManager * pManager; // r30
    class EAutoMutex fmutex2'39; // r31
}

// Range: 0x802DAF80 -> 0x802DB090
// this: r31
void EResourceLoaderImpl::CloseArchiveFile(class EResourceManager * manager /* r30 */) {
    // Local variables
    class EAutoMutex fmutex2'55; // r31
}

// Range: 0x802DB090 -> 0x802DB128
// this: r30
void EResourceLoaderImpl::AddRefDelRefAllResources() {
    // Local variables
    class EResourceManager * pManager; // r30
}

// Range: 0x802DB128 -> 0x802DB1A4
unsigned char EResourceLoaderImpl::FreeOverFlowUnreferencedResources() {
    // Local variables
    unsigned char freed; // r30
    class EResourceManager * pManager; // r29
}

// Range: 0x802DB1A4 -> 0x802DB220
unsigned char EResourceLoaderImpl::FreeUnreferencedResources() {
    // Local variables
    unsigned char freed; // r30
    class EResourceManager * pManager; // r29
}

// Range: 0x802DB220 -> 0x802DB2F8
// this: r30
unsigned char EResourceLoaderImpl::FreeUnreferencedResources(const char * resourceType /* r29 */) {}

// Range: 0x802DB2F8 -> 0x802DB354
int EResourceLoaderImpl::GetUnreferencedResourceCount() {
    // Local variables
    int count; // r31
    class EResourceManager * pManager; // r30
}

// Range: 0x802DB354 -> 0x802DB41C
// this: r29
int EResourceLoaderImpl::GetUnreferencedResourceCount(const char * resourceType /* r28 */) {
    // Local variables
    int count; // r29
}

// Range: 0x802DB41C -> 0x802DB65C
// this: r31
void EResourceLoaderImpl::allocateGlobalIndex() {
    // Local variables
    int currentIndexNum; // r24
    class EString indexPath; // r1+0x10
    char buffer[16]; // r1+0x18
    class EFile * pFile; // r1+0xC
    int retriesLeft; // r27
    unsigned char indexBuffer[256]; // r1+0x28
    class EResourceManager * pManager; // r24

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802DB65C -> 0x802DB700
unsigned int * EResourceLoaderImpl::getIndexPointer(const class EString & dataType /* r25 */) {
    // Local variables
    int currentIndexNum; // r28
    void * index; // r27
    int i; // r26
}

// Range: 0x802DB700 -> 0x802DB7AC
// this: r28
void EResourceLoaderImpl::Main() {
    // Local variables
    unsigned int msg; // r1+0x8
    unsigned char received; // r0
}

// Range: 0x802DB7AC -> 0x802DBA5C
// this: r30
unsigned char EResourceLoaderImpl::ProcessMessage() {
    // Local variables
    struct EResLoadCmd * pCmd; // r31
    class EResource * res; // r1+0x8
}

// Range: 0x802DBA5C -> 0x802DBC48
// this: r26
class EResource * EResourceLoaderImpl::DoLoadResource(class EResourceManager * pManager /* r27 */, unsigned int id /* r28 */, class EFile * pSourceFile /* r29 */, unsigned int uStartOffset /* r1+0x8 */, unsigned int uLength /* r1+0xC */) {
    // Local variables
    class EFile * overrideFile; // r1+0x10
    unsigned int endPos; // r31
    class EResource * result; // r30

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802DBC48 -> 0x802DBC50
void EResourceLoaderImpl::EnableReloads() {}

// Range: 0x802DBC50 -> 0x802DBC5C
void EResourceLoaderImpl::PauseLoads() {}

// Range: 0x802DBC5C -> 0x802DBC74
void EResourceLoaderImpl::UnPauseLoads() {}

// Range: 0x802DBC74 -> 0x802DBC7C
unsigned char EResourceLoaderImpl::AreLoadsPaused() {}


