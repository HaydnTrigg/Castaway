/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\reconvector.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CE5C4 -> 0x800CEDC4
*/
// Range: 0x800CE5C4 -> 0x800CE6CC
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    class XRoute * i; // r31
    int sizeDiff; // r30
}

// Range: 0x800CE6CC -> 0x800CE7D0
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    struct ObjectRecord * i; // r31
    int sizeDiff; // r30
}

// Range: 0x800CE7D0 -> 0x800CE8D4
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    struct MotiveInc * i; // r31
    int sizeDiff; // r30
}

// Range: 0x800CE8D4 -> 0x800CEA78
void DoPtrVectorStream(class vector & cont /* r29 */, class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    unsigned long size; // r1+0x10
    class RelArray * * i; // r27
    int ptrSet; // r1+0xC
}

// Range: 0x800CEA78 -> 0x800CEB7C
void DoContainerStream(class RelArray & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0xC
    class RelInt * i; // r30
    int sizeDiff; // r30
}

// Range: 0x800CEB7C -> 0x800CEBEC
int ReconLoadVector(class iResFile * file /* r28 */, int type /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    class ReconStreamVector recon; // r1+0x8
}

// Range: 0x800CEBEC -> 0x800CEBF8
ReconStreamVector::ReconStreamVector() {}

// Range: 0x800CEBF8 -> 0x800CEC68
int ReconSaveVector(class iResFile * file /* r28 */, int type /* r29 */, signed short id /* r30 */, int version /* r31 */) {
    // Local variables
    class ReconStreamVector recon; // r1+0x8
}

// Range: 0x800CEC68 -> 0x800CECC4
// this: r29
void ReconStreamVector::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {}

// Range: 0x800CECC4 -> 0x800CEDC4
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    class SlotDescriptor * i; // r30
    int sizeDiff; // r30
}


// Range: 0x8010CF48 -> 0x8010D048
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0xC
    class FamilyMember * i; // r30
    int sizeDiff; // r30
}

// Range: 0x8010D048 -> 0x8010D148
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    class IFFResNode * i; // r30
    int sizeDiff; // r30
}

// Range: 0x8010D148 -> 0x8010D250
void DoContainerStream(class vector & cont /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int size; // r1+0x8
    class IFFResList * i; // r31
    int sizeDiff; // r30
}

// Range: 0x8010D250 -> 0x8010D2C0
int ReconLoadPtrVector(class iResFile * file /* r28 */, int type /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    class ReconStreamPtrVector recon; // r1+0x8
}

// Range: 0x8010D2C0 -> 0x8010D2CC
ReconStreamPtrVector::ReconStreamPtrVector() {}

// Range: 0x8010D2CC -> 0x8010D33C
int ReconSavePtrVector(class iResFile * file /* r28 */, int type /* r29 */, signed short id /* r30 */, int version /* r31 */) {
    // Local variables
    class ReconStreamPtrVector recon; // r1+0x8
}

// Range: 0x8010D33C -> 0x8010D344
void ReconStreamPtrVector::DoStream() {}

// Range: 0x8010D344 -> 0x8010D4E8
void DoPtrVectorStream(class vector & cont /* r29 */, class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    unsigned long size; // r1+0x10
    class Neighbor * * i; // r27
    int ptrSet; // r1+0xC
}


