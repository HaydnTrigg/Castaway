/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\mhandle.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D74F8 -> 0x800D75F0
*/
// Range: 0x800D74F8 -> 0x800D74FC
void HUnlock() {}

// Range: 0x800D74FC -> 0x800D7504
unsigned char * HLock() {}

// Range: 0x800D7504 -> 0x800D757C
struct HandleNode * HAlloc_nodbg(int size /* r30 */) {
    // Local variables
    struct HandleNode * ptr; // r31
}

// Range: 0x800D757C -> 0x800D75D0
void HFree(struct HandleNode * mem /* r31 */) {}

// Range: 0x800D75D0 -> 0x800D75E8
unsigned int HGetSize() {}

// Range: 0x800D75E8 -> 0x800D75F0
int Error() {}


// Range: 0x80100768 -> 0x80100810
int HSetSize_nodbg(struct HandleNode * mem /* r29 */, unsigned int newSize /* r30 */) {}

// Range: 0x80100810 -> 0x80100880
struct HandleNode * HDuplicate_nodbg(struct HandleNode * mem /* r31 */) {
    // Local variables
    struct HandleNode * ptr; // r3
}

// Range: 0x80100880 -> 0x801008A4
unsigned char HIsOwner() {}


