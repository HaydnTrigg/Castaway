/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptLoad.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF454 -> 0x802FF8C4
*/
// Range: 0x802FF454 -> 0x802FF48C
// this: r31
AptFileSavedInputState::AptFileSavedInputState() {}

// Range: 0x802FF48C -> 0x802FF498
void * AptSavedInputCheckpoints::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF498 -> 0x802FF4D0
// this: r31
AptLinker::AptLinker() {}

// Range: 0x802FF4D0 -> 0x802FF4E4
void Allocator::Free(void * ptr /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF4E4 -> 0x802FF4F0
void * AptLinker::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF520 -> 0x802FF52C
void * AptLoader::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF52C -> 0x802FF540
void AptSavedInputCheckpoints::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF5AC -> 0x802FF5C0
void AptLinker::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF5C0 -> 0x802FF5C8
enum State AptFile::GetState() {}

// Range: 0x802FF5C8 -> 0x802FF704
// this: r29
void AptSavedInputCheckpoints::Checkpoint(const class EAStringC & s /* r30 */) {
    // Local variables
    struct DbgIterator i; // r1+0x2C

    // References
    // -> struct AptLoader * gpLoader;
}

// Range: 0x802FF704 -> 0x802FF744
// this: r30
AptFileSavedInputState::AptFileSavedInputState(enum State state /* r31 */) {}

// Range: 0x802FF744 -> 0x802FF74C
void AptFileSavedInputState::SetState() {}

// Range: 0x802FF74C -> 0x802FF754
enum State AptFileSavedInputState::GetState() {}

// Range: 0x802FF754 -> 0x802FF758
class EAStringC & AptFileSavedInputState::GetName() {}

// Range: 0x802FF758 -> 0x802FF764
unsigned char AptSavedInputCheckpoints::CanContinueSavedInputs() {}

// Range: 0x802FF764 -> 0x802FF810
// this: r29
unsigned char AptSavedInputCheckpoints::allStatesAre2(enum State state0 /* r30 */, enum State state1 /* r31 */) {
    // Local variables
    struct DbgIterator i; // r1+0x14
}

// Range: 0x802FF810 -> 0x802FF8BC
// this: r29
void AptLoader::GetFileVector(class AptSharedPtr * aFilePtrs /* r30 */) {
    // Local variables
    int j; // r0
    class Iterator i; // r1+0x10
}

// Range: 0x802FF8BC -> 0x802FF8C4
void AptFile::setState() {}


// Range: 0x8030FEF8 -> 0x8030FF00
struct AptCharacter * AptFile::GetMainCharacter() {}

// Range: 0x8030FF00 -> 0x8030FF08
void * AptFile::GetAptData() {}

// Range: 0x8030FF08 -> 0x8030FF94
struct AptCharacter * AptFile::FindExport(const char * szName /* r26 */) {
    // Local variables
    int i; // r27
}


// Range: 0x803177C8 -> 0x803177D0
class EAStringC & AptFile::GetName() {}


// Range: 0x80323598 -> 0x803235AC
void AptLoader::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803235AC -> 0x803235B8
void * Allocator::Alloc() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803235B8 -> 0x80323618
// this: r30
AptFile::AptFile(const class EAStringC & name /* r31 */) {}

// Range: 0x80323618 -> 0x80323624
AptSharedPtrRefCount::AptSharedPtrRefCount() {}

// Range: 0x80323624 -> 0x80323630
void * AptFile::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323630 -> 0x80323638
void * AptFile::GetUserData() {}

// Range: 0x80323638 -> 0x80323648
void AptFile::setDataPointers() {}

// Range: 0x80323648 -> 0x80323708
// this: r29
int AptLinker::isFileImported(class AptSharedPtr & pFile /* r30 */) {
    // Local variables
    class Iterator i; // r1+0x10
}

// Range: 0x80323708 -> 0x803237B8
// this: r27
int AptFile::isFileImported(class AptSharedPtr & pFile /* r28 */) {
    // Local variables
    int j; // r29
}

// Range: 0x803237B8 -> 0x80323818
// this: r29
AptLinkerThingy::AptLinkerThingy(class AptSharedPtr & file /* r30 */, class AptCIH * target /* r31 */) {}

// Range: 0x80323818 -> 0x80323824
void * AptLinkerThingy::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323824 -> 0x803238CC
// this: r30
class Iterator AptLinker::findThingy(class AptCIH * pCIH /* r31 */) {
    // Local variables
    class Iterator i; // r1+0xC
}

// Range: 0x803238CC -> 0x803238D4
class AptCIH * AptLinkerThingy::GetTarget() {}

// Range: 0x803238D4 -> 0x8032391C
// this: r31
void AptSavedInputCheckpoints::AllLinked() {
    // Local variables
    class BasicString x; // r1+0x8
}

// Range: 0x8032391C -> 0x80323924
void AptLinkerThingy::SetAttachedToMovie() {}

// Range: 0x80323924 -> 0x8032392C
unsigned char AptLinkerThingy::IsAttachedToMovie() {}

// Range: 0x8032392C -> 0x80323934
class AptSharedPtr AptLinkerThingy::GetFile() {}

// Range: 0x80323934 -> 0x80323940
unsigned char AptSavedInputCheckpoints::CanLinkPendingFiles() {}

// Range: 0x80323940 -> 0x80323954
int AptSharedPtrRefCount::IncRef() {}

// Range: 0x80323954 -> 0x80323968
int AptSharedPtrRefCount::DecRef() {}

// Range: 0x80323968 -> 0x80323A0C
// this: r30
AptFile::~AptFile() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptLoader * gpLoader;
}

// Range: 0x80323A0C -> 0x80323A20
void AptFile::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323A20 -> 0x80323A34
void AptLinkerThingy::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323A34 -> 0x80323A44
void AptSavedInputCheckpoints::FileLoaded() {}

// Range: 0x80323A44 -> 0x80323B28
// this: r27
void AptSavedInputCheckpoints::updateState(const class EAStringC & name /* r28 */, enum State lookFor /* r29 */, enum State setTo /* r30 */, enum State ifNotFound /* r31 */) {
    // Local variables
    struct DbgIterator i; // r1+0x1C
}


