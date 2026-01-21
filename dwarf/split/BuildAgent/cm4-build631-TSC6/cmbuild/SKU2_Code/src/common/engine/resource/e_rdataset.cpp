/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rdataset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D8BDC -> 0x802D939C
*/
// Range: 0x802D8BDC -> 0x802D8C28
// this: r31
ERDataset::ERDataset() {
    // References
    // -> struct [anonymous] __vt__9ERDataset;
}

// Range: 0x802D8C28 -> 0x802D8CB4
// this: r30
ERDataset::~ERDataset() {
    // References
    // -> struct [anonymous] __vt__9ERDataset;
}

// Range: 0x802D8CB4 -> 0x802D8D2C
// this: r31
void ERDataset::Deallocate() {
    // Local variables
    class vector temp; // r1+0x8
}

// Range: 0x802D8D2C -> 0x802D8DD4
// this: r27
void ERDataset::AddRefSubResources() {
    // Local variables
    unsigned int i; // r28
}

// Range: 0x802D8DD4 -> 0x802D8E9C
// this: r31
void ERDataset::DelRefSubResources() {
    // Local variables
    unsigned int i; // r27
}

// Range: 0x802D8E9C -> 0x802D8F74
// this: r28
unsigned char ERDataset::TryIncrementSubResources() {
    // Local variables
    unsigned int i; // r29
}

// Range: 0x802D8F74 -> 0x802D939C
// this: r23
void ERDataset::Load(class EFile * pFile /* r24 */, unsigned int uLength /* r25 */, unsigned char (* pFilterCheckCB)(unsigned int, unsigned int, void *, int) /* r26 */, void * pFilterUserData /* r27 */, int meta /* r28 */) {
    // Local variables
    unsigned int uStartOffs; // r0
    class EDataHeader resourceHeader; // r1+0x68
    char buf[64]; // r1+0x80
    int nResources; // r1+0x20
    int i; // r29
    char szTypeName[32]; // r1+0x48
    class EResourceManager * pManager; // r21
    unsigned int id; // r1+0x1C
    unsigned int size; // r1+0x18
    unsigned int alignOffset; // r1+0x14
    int iFileOffsDiff; // r0
    unsigned int id; // r1+0x10
    unsigned int size; // r1+0xC
    unsigned int alignOffset; // r1+0x8
    class EResource * pResource; // r0
    struct ResourceInfo resInfo; // r1+0x38

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class EDatasetManager _datasetman;
}


