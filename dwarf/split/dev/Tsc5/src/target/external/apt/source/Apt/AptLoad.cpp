/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptLoad.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80321CC4 -> 0x803231EC
*/
// Range: 0x80321CC4 -> 0x80321DE0
unsigned char AptFileNameCompare(const char * str1 /* r29 */, const char * str2 /* r30 */) {
    // Local variables
    int nlen1; // r0
    int i; // r0
    char cChar1; // r3
    char cChar2; // r4
}

// Range: 0x80321DE0 -> 0x80321EB4
// this: r29
class AptSharedPtr AptLoader::findFile(const class EAStringC & sFilename /* r30 */) {
    // Local variables
    class Iterator i; // r1+0xC
}

// Range: 0x80321EB4 -> 0x80321F50
// this: r30
AptLoader::~AptLoader() {
    // Local variables
    class Iterator i; // r1+0x8
}

// Range: 0x80321F50 -> 0x80322040
// this: r30
void AptLoader::Invalidate(struct AptFile * pFile /* r31 */) {
    // Local variables
    class Iterator i; // r1+0x18
    class Iterator next; // r1+0x14
}

// Range: 0x80322040 -> 0x80322078
void AptLoader::notify() {}

// Range: 0x80322078 -> 0x80322114
class AptSharedPtr AptLoader::IsLoaded() {
    // Local variables
    class AptSharedPtr f; // r1+0x8
}

// Range: 0x80322114 -> 0x803221E4
// this: r30
class AptSharedPtr AptLoader::Load(const class EAStringC & sFilename /* r31 */) {
    // Local variables
    class AptSharedPtr f; // r1+0x10
    struct AptFile * pFile; // r1+0xC
    class AptSharedPtr ret; // r1+0x8
}

// Range: 0x803221E4 -> 0x803222AC
// this: r26
unsigned char AptLoader::AllImportsAvailable(class AptSharedPtr & f /* r27 */) {
    // Local variables
    unsigned char bReady; // r29
    int j; // r28
}

// Range: 0x803222AC -> 0x80322490
// this: r27
void AptLoader::Update() {
    // Local variables
    unsigned char bMovedToResolved; // r28
    class Iterator i; // r1+0x20
    class AptSharedPtr f; // r1+0x1C
    enum State state; // r0

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80322490 -> 0x80322564
void AptLoader::CompleteLoad(class AptSharedPtr & f /* r28 */, void * pData /* r29 */, void * pConstTable /* r30 */, void * pUserData /* r31 */) {
    // Local variables
    unsigned char * pBase; // r0
    struct AptConstFile * pConstFile; // [invalid]

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80322564 -> 0x80322730
// this: r28
void AptLoader::CancelPreloadedAnimation() {
    // Local variables
    class AptSharedPtr f; // r1+0x18
    enum State state; // r0
    int j; // r29
    class AptSharedPtr fTemp; // r1+0x14

    // References
    // -> struct AptLinker * gpLinker;
    // -> struct AptUserFunctions gAptFuncs;
}

// total size: 0xC
struct DbgIterator : public DbgIteratorBase {};
// total size: 0x104
struct AptSavedInputRecordCheckpoint : public AptSavedInputRecord {
    // Members
    char szBuf[256]; // offset 0x4, size 0x100
};
// Range: 0x80322730 -> 0x80322AB8
// this: r30
void AptLinker::Update() {
    // Local variables
    int nOrigLength; // r31
    struct DbgIterator i; // r1+0x3C
    unsigned char flag; // r23
    class AptSharedPtr f; // r1+0x20
    class Iterator j; // r1+0x1C
    class AptSharedPtr thingy; // r1+0x18
    class AptCIH * pTarget; // r28
    int SwfID; // r0
    struct AptSavedInputRecordCheckpoint inputRecord; // r1+0x5C
    const class EAStringC & sName; // r24
    int nLength; // r0
    class BasicString tmp; // r1+0x48

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> unsigned int gnCurTick;
    // -> int gbSavedInputsEnabled;
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> struct AptLoader * gpLoader;
}

// total size: 0xC
class DbgIteratorBase {
    // Members
protected:
    class AptSharedPtr * mPtr; // offset 0x0, size 0x4
    class AptSharedPtr * mBegin; // offset 0x4, size 0x4
    class AptSharedPtr * mEnd; // offset 0x8, size 0x4
};
// total size: 0x8
struct DbgIteratorFactory {
    // Members
private:
    class AptSharedPtr * mBegin; // offset 0x0, size 0x4
    class AptSharedPtr * mEnd; // offset 0x4, size 0x4
};
// Range: 0x80322AB8 -> 0x80322B48
// this: r30
void AptLinker::Notify(class AptSharedPtr & f /* r31 */) {
    // Local variables
    struct DbgIterator i; // r1+0x14
}

static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045C3F8
// Range: 0x80322B48 -> 0x80323094
// this: r30
void AptLinker::Load(const class EAStringC & sFilename /* r26 */, class EAStringC & sTarget /* r25 */) {
    // Local variables
    class AptValue * pTarget; // r25
    class AptSharedPtr f; // r1+0x4C
    class AptCIH * pCIH; // r31
    class Iterator j; // r1+0x48
    class AptSharedPtr thingy; // r1+0x44
    struct AptFile * pFileTemp; // r25
    class Iterator thingy; // r1+0x40

    // References
    // -> static char __PRETTY_FUNCTION__[46];
    // -> struct AptLoader * gpLoader;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80323094 -> 0x803230F8
// this: r31
void AptLinker::CancelLoad() {
    // Local variables
    class Iterator i; // r1+0xC
}

// Range: 0x803230F8 -> 0x803230FC
int AptSharedPtrIncRef() {}

// Range: 0x803230FC -> 0x80323100
int AptSharedPtrDecRef() {}

// Range: 0x80323100 -> 0x80323108
void AptSharedPtrDelete() {}

// Range: 0x80323108 -> 0x8032310C
int AptSharedPtrIncRef() {}

// Range: 0x8032310C -> 0x80323110
int AptSharedPtrDecRef() {}

// Range: 0x80323110 -> 0x80323118
void AptSharedPtrDelete() {}

// Range: 0x80323178 -> 0x803231EC
void GlobalNotificationFunction(class AptSharedPtr & f /* r31 */) {
    // References
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> struct AptLinker * gpLinker;
}


