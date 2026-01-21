/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rquickdata.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E4358 -> 0x802E5098
*/
// Range: 0x802E4358 -> 0x802E439C
ERQuickdata::ERQuickdata() {
    // References
    // -> struct [anonymous] __vt__11ERQuickdata;
}

// Range: 0x802E439C -> 0x802E442C
// this: r30
ERQuickdata::~ERQuickdata() {
    // References
    // -> class EQuickdataManager _quickdataman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__11ERQuickdata;
}

// Range: 0x802E442C -> 0x802E4480
// this: r31
void ERQuickdata::reset() {
    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x802E4480 -> 0x802E4484
void ERQuickdata::UnlockImage() {}

// Range: 0x802E4484 -> 0x802E44A4
// this: r5
void ERQuickdata::Reload() {
    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x802E44A4 -> 0x802E4530
// this: r29
void ERQuickdata::Load(class EFile * pFile /* r30 */, int iLanguage /* r31 */) {
    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x802E4530 -> 0x802E4624
// this: r27
int ERQuickdata::getTableIndex(int iMinIndex /* r28 */, int iMaxIndex /* r29 */, const char * pName /* r30 */) {
    // Local variables
    int iCmp; // r3
    int iMiddle; // r31
}

// Range: 0x802E4624 -> 0x802E4694
// this: r30
void * ERQuickdata::getTable() {
    // Local variables
    void * result; // r31
    int i; // r0
}

// Range: 0x802E4694 -> 0x802E4780
int ERQuickdata::getRowIndex(int iMinIndex /* r27 */, int iMaxIndex /* r28 */, const char * pName /* r29 */, const char * const * const ppRowNames /* r30 */) {
    // Local variables
    int iCmp; // r4
    int iMiddle; // r31
}

// Range: 0x802E4780 -> 0x802E4814
void * ERQuickdata::getRow(void * _pTable /* r29 */) {
    // Local variables
    const struct ERQTable * const pTable; // r0
    void * result; // r30
    const char * const * const ppRowNames; // r6
    int i; // r0
}

// Range: 0x802E4814 -> 0x802E4988
int ERQuickdata::findTableIndex() {
    // Local variables
    int iCmp; // r7
    int iMiddle; // r31
}

// Range: 0x802E4988 -> 0x802E4A34
// this: r29
void * ERQuickdata::findRow(void * pData /* r30 */, unsigned int * pIndex /* r31 */) {
    // Local variables
    int i; // r0
    void * result; // r6
    unsigned int diff; // r5
    unsigned int uRowIndex; // r7
}

// Range: 0x802E4A34 -> 0x802E4D54
static unsigned char applyFixups(void * pImage /* r26 */, unsigned int uDiff /* r27 */, class EFile * pFile /* r30 */, unsigned int uBaseOffs /* r29 */, const struct EXPORT_DIRECTORY & directory /* r28 */) {
    // Local variables
    unsigned char result; // r25
    class U32Reader reader; // r1+0x8
    unsigned int offs; // r28
    unsigned int * pPtr; // r3
    unsigned int counter; // r28
}

// Range: 0x802E4D54 -> 0x802E5098
void * ReloadXImage(class EFile * pFile /* r22 */, void * pOrig /* r23 */, unsigned int & uOrigSize /* r24 */, int iExtraImage /* r25 */) {
    // Local variables
    void * result; // r31
    struct EXPORT_DIRECTORY dir; // r1+0x38
    struct EXPORT_DIRECTORY edir; // r1+0x20
    unsigned int uAllocSize; // r30
    int iExtraImagesInFile; // r29
    unsigned int uBaseOffs; // r28
    unsigned int uExImageSize; // r27
    int i; // r26
    struct EXPORT_DIRECTORY xdir; // r1+0x8
    unsigned int uDiff; // r4
    unsigned int uDiff; // r4

    // References
    // -> class EQuickdataManager _quickdataman;
}


