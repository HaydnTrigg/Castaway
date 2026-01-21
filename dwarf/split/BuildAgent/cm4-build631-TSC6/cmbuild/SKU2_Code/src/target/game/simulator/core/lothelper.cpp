/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\lothelper.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801203F4 -> 0x80120908
*/
// Range: 0x801203F4 -> 0x8012044C
// this: r31
LotHelper::LotHelper() {}

// Range: 0x8012044C -> 0x8012048C
void LotHelper::ResetFlagsForLot() {
    // Local variables
    int i; // r6
}

// Range: 0x8012048C -> 0x8012051C
// this: r29
void LotHelper::FlagDatasetForLot(int lotNum /* r30 */, unsigned char shouldLoad /* r31 */) {
    // Local variables
    unsigned int index; // r0
}

// Range: 0x8012051C -> 0x801205BC
void LotHelper::ResetResFiles() {
    // Local variables
    int i; // r0
}

// Range: 0x801205BC -> 0x8012066C
void LotHelper::FinalizeQueuedResFileAdds() {
    // Local variables
    int numResfileObjects; // r6
    int iCurrent; // r0
    int iNext; // r8
    int iSorted; // r9
    unsigned int tempDsId; // r10
    unsigned int tempLotFlags; // r11
}

// Range: 0x8012066C -> 0x801206E8
void LotHelper::AddRefObjectsInLot() {
    // Local variables
    int i; // r28

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x801206E8 -> 0x80120768
void LotHelper::DelRefObjectsInLot() {
    // Local variables
    int i; // r28

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80120768 -> 0x80120858
unsigned int LotHelper::findResFileObjectIndex() {
    // Local variables
    int start; // r6
    int end; // r7
    int current; // r9
    int i; // r10
}

// Range: 0x80120858 -> 0x80120908
// this: r27
void LotHelper::DoStream(class ReconBuffer * r /* r28 */) {
    // Local variables
    int i; // r29
}


