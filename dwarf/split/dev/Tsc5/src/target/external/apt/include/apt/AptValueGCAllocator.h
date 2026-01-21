/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\include\apt\AptValueGCAllocator.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FFDA0 -> 0x802FFE20
*/
// Range: 0x802FFDA0 -> 0x802FFDFC
// this: r31
AptValueGC_PoolManager::AptValueGC_PoolManager() {
    // References
    // -> unsigned char snOffsetToStoreSize;
    // -> unsigned char snOffsetToStoreNext;
    // -> unsigned int snMaxAllocation;
    // -> unsigned char snMinAllocation;
    // -> unsigned char snOffsetToStorePrev;
}

// Range: 0x802FFDFC -> 0x802FFE0C
void * AptValueGC_PoolManager::operator new() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x802FFE0C -> 0x802FFE20
void AptValueGC_PoolManager::operator delete() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}


// Range: 0x8032F8EC -> 0x8032F91C
void _AptValueGC_MemItem::SetIsAllocated() {}

// Range: 0x8032F91C -> 0x8032F94C
unsigned int _AptValueGC_MemItem::GetSize() {}

// Range: 0x8032F94C -> 0x8032F97C
unsigned char _AptValueGC_MemItem::IsAllocated() {}


