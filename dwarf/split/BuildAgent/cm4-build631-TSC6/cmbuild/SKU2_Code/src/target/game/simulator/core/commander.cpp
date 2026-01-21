/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\commander.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109EE8 -> 0x8010A01C
*/
// Range: 0x80109EE8 -> 0x80109F1C
Commander::Commander() {
    // References
    // -> int sId;
    // -> class Commander * sList;
    // -> struct [anonymous] __vt__9Commander;
}

// Range: 0x80109F1C -> 0x80109F8C
// this: r31
Commander::~Commander() {
    // Local variables
    class Commander * * remove; // r6

    // References
    // -> class Commander * sList;
}

// Range: 0x80109F8C -> 0x80109F94
unsigned char Commander::DoCommand() {}

// Range: 0x80109F94 -> 0x8010A01C
unsigned char GlobalDispatch(signed short command /* r28 */, int info /* r29 */) {
    // Local variables
    unsigned char respondedTo; // r31
    class Commander * cmd; // [invalid]
    class Commander * next; // r30

    // References
    // -> class Commander * sList;
}


