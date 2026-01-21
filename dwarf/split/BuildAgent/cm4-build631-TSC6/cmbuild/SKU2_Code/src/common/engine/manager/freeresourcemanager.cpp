/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\freeresourcemanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AE4DC -> 0x802AE924
*/
// Range: 0x802AE4DC -> 0x802AE52C
// this: r30
FreeResourceManager::FreeResourceManager(class EThreadMutex * resMutex /* r31 */) {}

// Range: 0x802AE52C -> 0x802AE630
// this: r30
void FreeResourceManager::AddItem(class EResource * res /* r31 */) {}

// Range: 0x802AE630 -> 0x802AE714
// this: r30
unsigned char FreeResourceManager::RemoveItem(class EResource * res /* r31 */) {
    // Local variables
    int i; // r5
}

// Range: 0x802AE714 -> 0x802AE910
// this: r29
unsigned int FreeResourceManager::MakeSpaceExceptInThisHeap(class EAHeap * myHeap /* r30 */, int max /* r24 */) {
    // Local variables
    int n; // r31
    class EResource * delList[256]; // r1+0x8
    int i; // r25
    class EResource * res; // r24
    unsigned int bytes; // r24

    // References
    // -> unsigned int gUnsafeToFreeResourceEncountered;
}

// Range: 0x802AE910 -> 0x802AE91C
unsigned int FreeResourceManager::MakeSpace() {}

// Range: 0x802AE91C -> 0x802AE924
int FreeResourceManager::GetUnreferencedResourceCount() {}


