/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\edithdialogprim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010A80C -> 0x8010B390
*/
// Range: 0x8010A80C -> 0x8010A8C8
// this: r30
EdithDialogPrimitive::EdithDialogPrimitive() {
    // References
    // -> struct [anonymous] __vt__20EdithDialogPrimitive;
}

// Range: 0x8010A8C8 -> 0x8010A920
// this: r30
EdithDialogPrimitive::~EdithDialogPrimitive() {}

// Range: 0x8010A920 -> 0x8010A940
void EdithDialogPrimitive::SelectionCallback() {}

// Range: 0x8010A940 -> 0x8010AA34
void EdithDialogPrimitive::AssignString(class BString2 & str /* r30 */, const unsigned short * defaultStr /* r31 */) {
    // Local variables
    class ELocString s; // r1+0xC
}

// Range: 0x8010AA34 -> 0x8010AB58
// this: r31
void EdithDialogPrimitive::ResetDialogParameters() {}

// Range: 0x8010AB58 -> 0x8010B2E0
// this: r27
unsigned char EdithDialogPrimitive::SetDialog(class StackElem * elem /* r28 */, const class DialogParam * param /* r29 */, class cXObject * pObject /* r30 */, unsigned char bParseUseDefaultReplace /* r31 */) {
    // Local variables
    unsigned char bResult; // r25
    class ObjSelector * textSel; // r1+0x20
    unsigned int fileID; // r26
    class ConsoleAutoRefCount dialogStrings; // r1+0x1C
    signed short iconIndex; // r25
    class ERShader * pIconShader; // r1+0x18
    signed short iconHeight; // r26
    signed short iconWidth; // r24
    const struct ERQTable * pDialogIconTable; // r1+0x14
    const struct DialogIcon & dialogIcon; // r0
    class ObjSelector * pSelector; // r23
    signed short simulatorID; // r25
    class Neighbor * pIconNeighbor; // r0
    class cXObject * pIconObject; // r0
    const char * pKey0; // r4
    const char * pKey1; // r23
    const char * pKey2; // r24

    // References
    // -> class GameData _gd;
    // -> class EShaderManager _shaderman;
    // -> class EGlobal _globals;
}

// Range: 0x8010B2E0 -> 0x8010B390
// this: r29
unsigned char EdithDialogPrimitive::DoPlanThoughtBalloon(int shaderID /* r30 */, int timeoutMS /* r31 */) {
    // References
    // -> class GameData _gd;
}


