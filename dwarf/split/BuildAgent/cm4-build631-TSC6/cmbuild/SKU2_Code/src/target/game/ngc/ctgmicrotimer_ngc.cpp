/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ngc\ctgmicrotimer_ngc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A0FF4 -> 0x800A1178
*/
// Range: 0x800A0FF4 -> 0x800A100C
unsigned char QueryPerformanceFrequency() {}

// Range: 0x800A100C -> 0x800A1070
void QueryPerformanceCounter(long long * tempNow /* r31 */) {
    // References
    // -> static class EClock _clock;
    // -> static unsigned char _bInitialized;
}

// Range: 0x800A1070 -> 0x800A10AC
void InitPerformanceCounter() {
    // References
    // -> static class EClock _clock;
    // -> static unsigned char _bInitialized;
}

// Range: 0x800A10AC -> 0x800A1114
unsigned int GetTimeDate() {
    // Local variables
    unsigned int result; // r8
    struct OSCalendarTime td; // r1+0x8
    long long time; // r0
}

// Range: 0x800A1114 -> 0x800A1178
int timeGetTime() {
    // References
    // -> static class EClock _clock;
    // -> static unsigned char _bInitialized;
}


