/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\casnpceditor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002ADDC -> 0x8002E674
*/
// Range: 0x8002ADDC -> 0x8002AEE8
// this: r29
CasNpcEditor::CasNpcEditor() {
    // References
    // -> struct [anonymous] __vt__12CasNpcEditor;
}

// Range: 0x8002AEE8 -> 0x8002AFA0
// this: r30
CasNpcEditor::~CasNpcEditor() {
    // References
    // -> struct [anonymous] __vt__12CasNpcEditor;
}

// Range: 0x8002AFA0 -> 0x8002B024
// this: r30
void CasNpcEditor::Enable(enum eNPCEditTypeFlag nEditType /* r31 */) {}

// Range: 0x8002B024 -> 0x8002B508
// this: r31
void CasNpcEditor::Update(float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned char bLoadButtonPressed; // r0
    unsigned char bAdvanceLoadButtonPressed; // r25
    unsigned char bSaveButtonPressed; // r0
    unsigned char bSaveAllButtonPressed; // r0
    unsigned char bNextBodyPartButtonPressed; // r0
    unsigned char bReloadIconConfigButtonPressed; // r0
    signed short npcCount; // r0
    unsigned int nextNpcIndex; // r25
    class UserDataSaveLoad npcData; // r1+0x8
    unsigned char bSuccess; // r26

    // References
    // -> struct ButtonInfo s_buttonInfo[7];
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x8002B508 -> 0x8002BE90
// this: r28
void CasNpcEditor::Draw(class ERC * prc /* r29 */) {
    // Local variables
    float fBGX1; // f31
    char szLine[64]; // r1+0xB8
    unsigned int nLine; // r30
    const class CasSimDescription * pSimDesc; // r0
    signed short npcCount; // r0
    class CasSimDescription * pSimDesc; // r23
    class EString strTattooClothingSetName; // r1+0x18

    // References
    // -> struct ButtonInfo s_buttonInfo[7];
    // -> class EGlobal _globals;
}

// Range: 0x8002BE90 -> 0x8002C1A4
// this: r28
unsigned char CasNpcEditor::LoadCurrentCharacter() {
    // Local variables
    class UserDataSaveLoad npcData; // r1+0x10
    enum tSimType simType; // r0
    class Neighbor * pNeighbor; // r0
    class CasSimRenderer * pRenderer; // r31
    class CasSimDescription * pSimDesc; // r30
    class SimBodyPart * pBodyPart; // r31
    class CasSimRenderer * pRenderer; // r29
    unsigned char bodyPartDBIndex; // r0
    class ETexture * pIconTexture; // r0
}

// Range: 0x8002C1A4 -> 0x8002C1D0
unsigned char CasNpcEditor::SaveSim() {}

// Range: 0x8002C1D0 -> 0x8002C834
// this: r30
unsigned char CasNpcEditor::SaveNpc() {
    // Local variables
    int err; // r0
    unsigned char bResult; // r28
    signed short npcCount; // r0
    class CasSimDescription * pSimDesc; // r28
    class UserDataSaveLoad userData; // r1+0x18
    char firstName[32]; // r1+0x60
    char lastName[32]; // r1+0x40
    class ObjSelector * sel; // r0
    class EString strFilePath; // r1+0x14
    class EFile * pNewNGHFile; // r1+0x10
    class EFile * pOldNGHFile; // r1+0xC
    unsigned int nBytes; // r0
    unsigned char * pMem; // r28
    unsigned int nBytesCopied; // r29
    unsigned int nBytesRead; // r0
    unsigned int nBytesWritten; // r0
    class CasSimRenderer * pRenderer; // r27
    class TGAWriter writer; // r1+0x80
    struct TDF_INFO tdfSettings; // r1+0x28
    unsigned char bImagesWritten; // r0
    class EString strFileName; // r1+0x8
    class ETexture * pFace; // r27

    // References
    // -> class EGraphics * _pGfx;
    // -> class ENgcFileSystem _eorFileSys;
    // -> class ESimsApp _app;
}

// Range: 0x8002C834 -> 0x8002C838
void CasNpcEditor::MakeDataset() {}

// Range: 0x8002C838 -> 0x8002CC04
// this: r31
unsigned char CasNpcEditor::SaveAllNpcs() {
    // Local variables
    signed short i; // r23
    signed short npcCount; // r0
    class CasSimRenderer * pRenderer; // r0
    class TGAWriter writer; // r1+0x50
    unsigned char bResult; // r24
    class EString strFilePath; // r1+0xC
    unsigned char bImagesWritten; // r0
    class UserDataSaveLoad npcData; // r1+0x10
    class EString strFileName; // r1+0x8
    class CasSimRenderer * pRenderer; // r29
    struct TDF_INFO tdfSettings; // r1+0x38
    class ETexture * pFace; // r22

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8002CC04 -> 0x8002CCA4
// this: r29
class EString CasNpcEditor::GetNPCCompositeTextureName(class CasSimDescription & simDesc /* r30 */, unsigned char quadrant /* r31 */) {
    // Local variables
    class EString strBaseName; // r1+0x8
}

// Range: 0x8002CCA4 -> 0x8002CEA8
// this: r26
unsigned char CasNpcEditor::WriteCompositedTextures(class CasSimDescription & simDesc /* r27 */) {
    // Local variables
    unsigned char bRet; // r29
    struct ETextureDef td; // r1+0x30
    class SkinCompositor skinCompositor; // r1+0x10
    class TGAWriter writer; // r1+0x50
    unsigned char quadrant; // r28
    class EString strFileName; // r1+0xC
    class EString strFilePath; // r1+0x8
    class ETexture * pTexture; // r4

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8002CEA8 -> 0x8002D0F0
// this: r31
unsigned char CasNpcEditor::SaveAllIcons() {
    // Local variables
    unsigned char i; // r30
    class CasSimDescription * pSimDesc; // r29
    class SimBodyPart * pBodyPart; // r28
    class CasSimRenderer * pRenderer; // r0
    unsigned char i; // r28
}

// Range: 0x8002D0F0 -> 0x8002D500
// this: r30
unsigned char CasNpcEditor::SaveIcon() {
    // Local variables
    class CasSimDescription * pSimDesc; // r0
    unsigned char bodyPartDBIndex; // r0
    unsigned char bResult; // r31
    class CasSimRenderer * pRenderer; // r0
    class ETexture * pIconTexture; // r28
    class TGAWriter writer; // r1+0x38
    struct TDF_INFO tdfSettings; // r1+0x20
    class EString strFileName; // r1+0x1C
    class EString strFilePath; // r1+0x18

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8002D500 -> 0x8002D5CC
unsigned char CasNpcEditor::GetNpcData(unsigned int npcIndex /* r29 */, class UserDataSaveLoad * npcData /* r30 */) {
    // Local variables
    signed short npcCount; // r0
    struct HandleNode * handle; // r4
}

// Range: 0x8002D5CC -> 0x8002D5E4
unsigned char CasNpcEditor::IsLoadInProgress() {}

// Range: 0x8002D5E4 -> 0x8002D794
// this: r30
void CasNpcEditor::DoInitialLoad() {
    // Local variables
    unsigned char bCurrentlyIsMale; // r0
    class CasSimDescription * pSimDesc; // r31
}

// Range: 0x8002D794 -> 0x8002DCC0
// this: r25
unsigned char CasNpcEditor::ReadIconConfig() {
    // Local variables
    int i; // r31
    class ConfigReader cr; // r1+0x20
    int nNumSections; // r0
    int i; // r26
    const char * szSectionName; // r31
    const char * szTemp; // r1+0x1C
    enum eBodyPart bp; // r0
    int nIndex; // r1+0x18
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartDBIndex; // r0
    float fX; // r1+0x14
    float fY; // r1+0x10
    float fZ; // r1+0xC
    unsigned char bTemp; // r1+0x8

    // References
    // -> const char * CAS_ICON_EDITOR_CONFIG_FILENAME;
}

// Range: 0x8002DCC0 -> 0x8002DD3C
// this: r31
void CasNpcEditor::SetBodyPartData() {
    // Local variables
    class CasSimDescription * pSimDesc; // r0
}

// Range: 0x8002DD3C -> 0x8002E230
// this: r31
unsigned char CasNpcEditor::IncrementIcon() {
    // Local variables
    unsigned char nMaxTattooTextures; // r0
}

// Range: 0x8002E230 -> 0x8002E674
// this: r31
unsigned char CasNpcEditor::DecrementIcon() {}


