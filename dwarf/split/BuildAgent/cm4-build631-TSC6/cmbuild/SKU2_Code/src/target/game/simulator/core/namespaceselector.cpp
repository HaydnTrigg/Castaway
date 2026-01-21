/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\namespaceselector.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801257A4 -> 0x80125D3C
*/
// Range: 0x801257A4 -> 0x80125828
// this: r30
NamespaceSelector::~NamespaceSelector() {}

// Range: 0x80125880 -> 0x80125898
class ObjectDataBehaviorConstants * NamespaceSelector::GetBehaviorConstants() {}

// Range: 0x80125898 -> 0x801258B0
class SoundInfo * NamespaceSelector::GetSoundInfo() {}

// Range: 0x801258B0 -> 0x801258C8
class StringSet * NamespaceSelector::GetStringSet() {}

// Range: 0x801258C8 -> 0x80125954
// this: r31
void NamespaceSelector::FlushAllCaches() {
    // Local variables
    class map tempStringSets; // r1+0xC
}

// Range: 0x80125954 -> 0x80125CD0
// this: r30
class IObjectDataResource * NamespaceSelector::GetCacheItem(signed short id /* r31 */, class list & dataCache /* r27 */, unsigned int kCacheType /* r28 */, unsigned int kCacheSize /* r29 */) {
    // Local variables
    struct ListIterator it; // r1+0x40
    int smallest; // r29
    struct ListIterator lit; // r1+0x3C
    struct ListIterator it; // r1+0x38
    class ObjectDataID objID; // r1+0x50
    struct DataCache cacheItem; // r1+0x58
    class ObjectDataID objID; // r1+0x48
}

// Range: 0x80125CD0 -> 0x80125CD8
class EREdithTreeSet * NamespaceSelector::GetTreeSetResource() {}

// Range: 0x80125CD8 -> 0x80125D3C
// this: r30
void NamespaceSelector::SetTreeSetResource(class EREdithTreeSet * resource /* r31 */) {}


