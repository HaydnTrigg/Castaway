/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\include\apt\AptValue\AptValue.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80300288 -> 0x803003BC
*/
// Range: 0x80300288 -> 0x8030029C
void AptValueGC::operator delete(void * p /* r0 */) {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}

// Range: 0x8030029C -> 0x803002AC
void AptValue::SetAllowDelayedDeletion() {}

// Range: 0x803002AC -> 0x803002E8
// this: r31
AptValueGC::AptValueGC() {
    // References
    // -> struct [anonymous] __vt__10AptValueGC;
}

// Range: 0x803002E8 -> 0x803002F4
void * AptValueGC::operator new() {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}

// Range: 0x803002F4 -> 0x803002FC
unsigned char AptValueGC::IsGarbageCollected() {}

// Range: 0x803002FC -> 0x80300368
// this: r31
void AptValue::ForceDelete() {}

// Range: 0x80300368 -> 0x80300370
class AptNativeHash * AptValue::GetNativeHashVirtual() {}

// Range: 0x80300370 -> 0x80300378
unsigned char AptValue::ContainsNativeHashVirtual() {}

// Range: 0x80300378 -> 0x80300380
int AptValue::getHasClass() {}

// Range: 0x80300380 -> 0x80300384
void AptValue::setHasClass() {}

// Range: 0x80300384 -> 0x8030038C
class AptValue * AptValue::objectMemberLookup() {}

// Range: 0x8030038C -> 0x80300394
unsigned char AptValue::objectMemberSet() {}

// Range: 0x80300394 -> 0x803003B4
void AptValue::DeleteThis() {}

// Range: 0x803003B4 -> 0x803003B8
void AptValue::PreDestroy() {}

// Range: 0x803003B8 -> 0x803003BC
void AptValue::DestroyGCPointers() {}


// Range: 0x8030B55C -> 0x8030B570
void AptValueNoGC::operator delete(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030B570 -> 0x8030B5AC
// this: r31
AptValueNoGC::AptValueNoGC() {
    // References
    // -> struct [anonymous] __vt__12AptValueNoGC;
}

// Range: 0x8030B5AC -> 0x8030B5B8
void * AptValueNoGC::operator new() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030B5B8 -> 0x8030B5F4
// this: r31
AptValueGC::AptValueGC() {
    // References
    // -> struct [anonymous] __vt__10AptValueGC;
}

// Range: 0x8030B5F4 -> 0x8030B5FC
unsigned char AptValueNoGC::IsGarbageCollected() {}

// Range: 0x8030B5FC -> 0x8030B600
void AptValueNoGC::RegisterReferences() {}


// Range: 0x8032F198 -> 0x8032F1A4
unsigned char AptValue::GetAllowDelayedDeletion() {}


