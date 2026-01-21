/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptGC.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803205FC -> 0x80320900
*/
// total size: 0x1
class AptGC {};
// Range: 0x803205FC -> 0x80320600
void AptGC::Initialize() {}

// Range: 0x80320600 -> 0x80320658
void AptGC::sReferenceRegistrationCb(class AptValue * pToRef /* r31 */) {}

// Range: 0x80320658 -> 0x80320810
void AptGC::CleanUnreachable() {
    // Local variables
    class AptValue * pObject; // r31
    void (* pOldValue)(class AptValue *, class AptValue *, char *); // r30
    class AptValue * pObject; // r30
    unsigned char bOldVal; // r31
    class AptValue * pObject; // r30

    // References
    // -> unsigned char sbSuspendRefcountDeletions;
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80320810 -> 0x80320900
void AptGC::CleanAll() {
    // Local variables
    class AptValue * pObject; // r31
    unsigned char bOldVal; // r30

    // References
    // -> unsigned char sbSuspendRefcountDeletions;
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
    // -> class AptValueVector * gpValuesToRelease;
}


