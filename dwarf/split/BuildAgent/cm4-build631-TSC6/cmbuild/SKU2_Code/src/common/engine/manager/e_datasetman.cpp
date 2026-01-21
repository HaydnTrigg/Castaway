/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\e_datasetman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A8358 -> 0x802A8510
*/
// Range: 0x802A8358 -> 0x802A8378
class ERDataset * EDatasetManager::AddRef() {
    // References
    // -> unsigned char m_loadEnabled;
}

// Range: 0x802A8378 -> 0x802A8390
class EResource * EDatasetManager::AddRefAsync() {
    // References
    // -> unsigned char m_loadEnabled;
}

// Range: 0x802A8390 -> 0x802A83FC
// this: r30
void EDatasetManager::AddRefAsyncIfNotLoaded(const char * szName /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A83FC -> 0x802A8414
void EDatasetManager::DelRef() {}

// Range: 0x802A8414 -> 0x802A8498
// this: r27
class EResource * EDatasetManager::AllocateAndLoadResource(class EFile * pFile /* r28 */, unsigned int uLength /* r29 */, unsigned int id /* r30 */) {}

// Range: 0x802A8498 -> 0x802A84A0
void EDatasetManager::SetLoadProgress() {}

// Range: 0x802A84A0 -> 0x802A84B8
unsigned char EDatasetManager::PreloadResource() {
    // References
    // -> unsigned char m_loadEnabled;
}

// Range: 0x802A84B8 -> 0x802A84F8
// this: r31
class EResource * EDatasetManager::GetRef() {}

// Range: 0x802A84F8 -> 0x802A8510
class EResource * EDatasetManager::GetRef() {
    // References
    // -> unsigned char m_loadEnabled;
}


