/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\helpdialog.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017BF0C -> 0x8017C2F4
*/
// Range: 0x8017BF0C -> 0x8017BF54
// this: r31
HelpDialog::HelpDialog() {
    // References
    // -> struct [anonymous] __vt__10HelpDialog;
}

// Range: 0x8017BF54 -> 0x8017BF60
void HelpDialog::ResetConfigVariables() {}

// Range: 0x8017BF60 -> 0x8017BFB8
// this: r30
HelpDialog::~HelpDialog() {}

// Range: 0x8017BFB8 -> 0x8017C234
// this: r31
unsigned char HelpDialog::SpawnHelpDialog(const char * bodyid /* r27 */, unsigned char useNewUIStrings /* r28 */, const char * button_string_id /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017C234 -> 0x8017C2BC
// this: r27
unsigned char HelpDialog::SpawnHelpDialog(const char * uidbHelpStringName /* r28 */, class HelpDialogCallback * callBack /* r29 */, unsigned char useNewUIStrings /* r30 */, const char * button_string_id /* r31 */) {
    // Local variables
    char titleid[256]; // r1+0x108
    char bodyid[256]; // r1+0x8
}

// Range: 0x8017C2BC -> 0x8017C2E8
void HelpDialog::SelectionCallback() {}

// Range: 0x8017C2E8 -> 0x8017C2F4
void SimpleOkDialog::SelectionCallback() {}


