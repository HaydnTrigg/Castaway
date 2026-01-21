/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objectfolder.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D91C -> 0x80140EC0
*/
// Range: 0x8013D91C -> 0x8013D9A0
static void ConvertToBackslash(class StringBuffer & str /* r28 */) {
    // Local variables
    int len; // r0
    int i; // r29
}

// Range: 0x8013D9A0 -> 0x8013D9EC
// this: r30
GlobalConstantsClient::GlobalConstantsClient(signed short id /* r31 */) {
    // References
    // -> struct [anonymous] __vt__21GlobalConstantsClient;
}

// Range: 0x8013D9FC -> 0x8013DA00
unsigned int GlobalConstantsClient::GetFileID() {}

// Range: 0x8013DA00 -> 0x8013DA08
signed short GlobalConstantsClient::GetID() {}

// Range: 0x8013DA08 -> 0x8013DD3C
// this: r26
void ObjectSaveTypeTable::DoStream(class ReconBuffer * r /* r31 */, int version /* r27 */) {
    // Local variables
    signed short type; // r1+0xA
    signed short objectType; // r1+0x8
    int guid; // r1+0x24
    int initTreeVersion; // r1+0x20
    int mainTreeVersion; // r1+0x1C
    struct HashList & selectors; // r29
    struct HashIterator it; // r1+0x40
    struct HashIterator end; // r1+0x34
    class ObjSelector * i; // r29
    class BString tempStr; // r1+0x18
    const struct ObjDefinition * def; // r30
    class BString tempStr; // r1+0x14
    class ObjSelector * sel; // r28
}

// Range: 0x8013DD3C -> 0x8013DEA4
// this: r29
ObjectFolder::ObjectFolder() {
    // References
    // -> struct [anonymous] __vt__12ObjectFolder;
}

// Range: 0x8013DEFC -> 0x8013DFE8
// this: r30
ObjectFolder::~ObjectFolder() {
    // References
    // -> struct [anonymous] __vt__12ObjectFolder;
}

// Range: 0x8013DFE8 -> 0x8013DFF0
int ObjectFolder::CountSelectors() {}

// Range: 0x8013DFF0 -> 0x8013E01C
class ObjSelector * ObjectFolder::GetSelectorByGUID(int guid /* r1+0x8 */) {}

// Range: 0x8013E01C -> 0x8013E09C
// this: r31
class ObjSelector * ObjectFolder::GetNextSelector() {
    // Local variables
    struct HashIterator it; // r1+0x18
}

// Range: 0x8013E09C -> 0x8013E18C
// this: r26
class ObjSelector * ObjectFolder::GetSubTileSelector(class ObjSelector * original /* r27 */, int levelOff /* r28 */) {
    // Local variables
    class ObjSelector * subsel; // r30
    const struct ObjDefinition * header; // r0
    signed short masterID; // r29
    signed short xycoord; // r0
}

// Range: 0x8013E18C -> 0x8013E268
// this: r28
class ObjSelector * ObjectFolder::GetLeadSelector(class ObjSelector * original /* r29 */) {
    // Local variables
    const struct ObjDefinition * header; // r31
    signed short masterID; // r31
    class ObjSelector * subsel; // r30
}

// Range: 0x8013E268 -> 0x8013E32C
// this: r27
class ObjSelector * ObjectFolder::GetNthSubSelector(class ObjSelector * original /* r28 */, int n /* r29 */) {
    // Local variables
    class ObjSelector * subsel; // r31
    const struct ObjDefinition * header; // r0
    signed short masterID; // r30
}

// Range: 0x8013E32C -> 0x8013E3F0
// this: r28
class ObjSelector * ObjectFolder::GetMasterSelector(class ObjSelector * original /* r29 */) {
    // Local variables
    class ObjSelector * masterSel; // r31
    const struct ObjDefinition * header; // r0
    signed short masterID; // r30
}

// Range: 0x8013E3F0 -> 0x8013E4FC
// this: r29
void ObjectFolder::Init(const char * scenPath /* r30 */, unsigned char skipDisabled /* r31 */) {
    // Local variables
    struct HashIterator i; // r1+0x14
    class ObjSelector * cur; // r0
    int guid; // r0
}

// Range: 0x8013E634 -> 0x8013E834
// this: r30
void ObjectFolder::Destroy() {
    // Local variables
    struct HashIterator it; // r1+0x2C
    struct HashIterator end; // r1+0x20
    class ObjSelector * sel; // r31
    struct rbtree_iterator i; // r1+0x10
    class iResFile * file; // r31
    class StackString name; // r1+0x38
    class ObjectTypeAttrBlock * * i; // r31
}

// Range: 0x8013E834 -> 0x8013EA38
// this: r27
void ObjectFolder::DestroySelector(class ObjSelector * sel /* r31 */) {
    // Local variables
    int i; // r28
}

// Range: 0x8013EA38 -> 0x8013EC8C
// this: r26
class ObjSelector * ObjectFolder::AddUserSelector(int guid /* r27 */, signed short resID /* r30 */, unsigned char bIsPet /* r28 */) {
    // Local variables
    struct ObjDefinition * def; // r29
    class iResFile * pResFile; // r0
    class ObjectTypeAttrBlock * block; // r1+0x8
}

// Range: 0x8013EC8C -> 0x8013ED30
// this: r30
unsigned int ObjectFolder::GetSemiGlobalID() {
    // Local variables
    class iResFile * pResFile; // r31
    unsigned int semiFileID; // r1+0x8
}

// Range: 0x8013ED30 -> 0x8013EF80
// this: r30
unsigned char ObjectFolder::AddSelector(const struct ObjDefinition * pObjDefinition /* r31 */, const char * pObjName /* r24 */, const char * pModuleName /* r25 */, const struct ResFile * pResFileData /* r26 */, signed short defID /* r27 */, const struct NPC * pNPCBody /* r29 */) {
    // Local variables
    struct ObjDefinition * def; // [invalid]
    unsigned int fileID; // r1+0x10
    int numAttr; // r29
    class ObjectTypeAttrBlock * block; // r1+0xC
}

// Range: 0x8013EF80 -> 0x8013EFB8
void ObjectFolder::OpenResFile(class ObjSelector * sel /* r31 */) {}

// Range: 0x8013EFB8 -> 0x8013F2C4
// this: r28
void ObjectFolder::LoadDatabase() {
    // Local variables
    const struct ERQTable * pTable; // r1+0x28
    const struct ERQTable * pGlobTable; // r1+0x24
    const struct ERQTable * pNPCTable; // r1+0x20
    const char * pGlobModuleName; // r0
    const struct GlobalResFile * pGlobResFile; // r1+0x1C
    const struct GlobalResFile * pGlobUserResFile; // r1+0x18
    struct ResFile * pGlobalUserResFile; // r31
    const struct GlobalResFile * pGlobPetResFile; // r1+0x14
    struct ResFile * pGlobalPetResFile; // r30
    unsigned int i; // r23
    unsigned int numFiles; // r29
    unsigned int fileID; // r1+0x10
    const struct ResFile & row; // r22
    int numDefs; // r0
    const char * pModuleName; // r21
    const struct NPC * pNPCBody; // r1+0xC
    int j; // r20
    const struct ObjDefinition * pDef; // r19
    const char * pObjectName; // r1+0x8

    // References
    // -> unsigned int fGlobalFileID;
    // -> const char * gTemplatePetName;
    // -> const char * gTemplatePersonName;
    // -> class EQuickdataManager _quickdataman;
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x8013F2C4 -> 0x8013F474
// this: r29
void ObjectFolder::ReconSelector(class ObjSelector * * selector /* r30 */, class ReconBuffer * r /* r31 */) {
    // Local variables
    int guid; // r1+0xC
    signed short type; // r1+0x8
    class ObjSelector * mapEntry; // r0
    int * it; // r0
}

// Range: 0x8013F474 -> 0x8013F4A4
signed short ObjectFolder::GetGuid16FromGuid() {}

// Range: 0x8013F4A4 -> 0x8013F4FC
// this: r31
unsigned char ObjectFolder::GuidAlreadyExists() {
    // Local variables
    signed short guid16; // r1+0x8
}

// Range: 0x8013F4FC -> 0x8013F570
// this: r30
void ObjectFolder::AddNewGuid(int guid /* r31 */) {
    // Local variables
    signed short guid16; // r1+0x8
}

// Range: 0x8013F570 -> 0x8013F6AC
// this: r28
void ObjectFolder::ReconBehavior(class Behavior * * behavior /* r29 */, class ReconBuffer * r /* r30 */) {
    // Local variables
    signed short type; // r1+0x8
    class ObjSelector * sel; // r31
    class XObjLang * language; // r0
    class ObjSelector * mapEntry; // r0
    int guid; // r1+0xC
    class ObjSelector * selector; // r0
}

// Range: 0x8013F6AC -> 0x8013F730
// this: r30
class iResFile * ObjectFolder::GetFileByID(unsigned int fileID /* r31 */) {
    // Local variables
    const struct ERQTable * pTable; // r1+0x8
    class QuickResFile * pQuickResFile; // r0

    // References
    // -> unsigned int fGlobalFileID;
}

// Range: 0x8013F730 -> 0x8013F97C
// this: r24
void ObjectFolder::LoadUserData(class iResFile * file /* r25 */) {
    // Local variables
    int iCount; // r28
    int i; // r27
    struct HandleNode * handle; // r31
    signed short resID; // r1+0x8
    class UserDataSaveLoad userData; // r1+0x1C
    class ObjSelector * sel; // r26
    const struct RelationshipTable * pRelTab; // r0

    // References
    // -> class EApp * _pApp;
    // -> class EGlobal _globals;
}

// Range: 0x8013F97C -> 0x8013FB9C
// this: r25
void ObjectFolder::SaveUserData(class iResFile * file /* r24 */) {
    // Local variables
    struct HashIterator iter; // r1+0x48
    class vector userList; // r1+0x38
    class ObjSelector * sel; // r1+0x10
    int i; // r27
    int iSize; // r0
    int resID; // r31
    class ObjSelector * sel; // r26
    class UserDataSaveLoad userData; // r1+0x2C
    class ThumbnailLoader thumb; // r1+0xC
    class CasSimDescription * pNonCostumedCharDesc; // r25
    unsigned int guid; // r25
    int err; // r0

    // References
    // -> int iSaveFileVersion;
}

// Range: 0x8013FB9C -> 0x8013FBF8
unsigned char ObjSelResIDLessThan(class ObjSelector * a /* r30 */) {}

// Range: 0x8013FBF8 -> 0x8013FC74
// this: r30
class ObjSelector * ObjectFolder::CreateNewUserSelector(unsigned char bIsPet /* r31 */) {
    // Local variables
    int guid; // r0
    signed short resID; // r0
    class ObjSelector * result; // r31
}

// Range: 0x8013FC74 -> 0x8013FCFC
// this: r30
unsigned char ObjectFolder::RemoveSelector(class ObjSelector * sel /* r31 */) {
    // Local variables
    int guid; // r1+0x8
    class ObjSelector * guidEntry; // r0
}

// Range: 0x8013FCFC -> 0x8013FE10
// this: r26
unsigned char ObjectFolder::ForceDataPreload(class ObjSelector * objSel /* r27 */, unsigned char bWait /* r28 */) {
    // Local variables
    unsigned char result; // r31
    signed short masterID; // r30
    class ObjSelector * pSel; // r29
}

// Range: 0x8013FE10 -> 0x8013FE84
// this: r29
void ObjectFolder::forceDataPreload(class ObjSelector * sel /* r30 */, unsigned char bWait /* r31 */) {}

// Range: 0x8013FE84 -> 0x8013FEF4
// this: r30
void ObjectFolder::CreatingInstance(class ObjSelector * sel /* r31 */) {}

// Range: 0x8013FEF4 -> 0x8013FF0C
void ObjectFolder::DeletingInstance() {}

// Range: 0x8013FF0C -> 0x8013FF10
void ObjectFolder::CreatingResFile() {}

// Range: 0x8013FF10 -> 0x8013FF14
void ObjectFolder::DeletingResFile() {}

// Range: 0x8013FF14 -> 0x8014009C
// this: r29
void ObjectFolder::PrepareForModuleLoad(class iResFile * file /* r30 */) {
    // Local variables
    struct HashIterator i; // r1+0x3C
    class ObjectSaveTypeTable ott; // r1+0x8
}

// Range: 0x8014009C -> 0x801400A4
ObjectSaveTypeTable::ObjectSaveTypeTable() {}

// Range: 0x801400A4 -> 0x801401CC
// this: r27
void ObjectFolder::PrepareForModuleSave(class iResFile * file /* r28 */) {
    // Local variables
    signed short type; // r29
    struct HashIterator i; // r1+0x28
    class ObjectSaveTypeTable ott; // r1+0xC
}

// Range: 0x801401CC -> 0x801401D8
class ObjSelector * ObjectFolder::GetPlaceholder() {}

// Range: 0x801401D8 -> 0x801402AC
// this: r30
void ObjectFolder::FreeUnusedData() {
    // Local variables
    class CTGMicroTimer timer; // r1+0x30
    struct HashIterator i; // r1+0x20
    class ObjSelector * sel; // r31
}

// Range: 0x801402AC -> 0x801403D8
// this: r29
void ObjectFolder::DeleteUserSelectors() {
    // Local variables
    struct HashIterator i; // r1+0x38
    class vector killList; // r1+0x28
    class ObjSelector * sel; // r1+0xC
    int i; // r30
    int iSize; // r0
}

// Range: 0x801403D8 -> 0x8014049C
// this: r28
void ObjectFolder::DeleteSelectorAnimLists() {
    // Local variables
    struct HashIterator i; // r1+0x20
    class ObjSelector * sel; // r0
    int i; // r29
}

// Range: 0x8014049C -> 0x8014054C
// this: r30
void ObjectFolder::UnloadData(class ObjSelector * sel /* r31 */) {}

// Range: 0x8014054C -> 0x801405C8
// this: r29
class ObjectTypeAttrBlock * ObjectFolder::GetTypeAttrBlock(int guid /* r30 */) {
    // Local variables
    class ObjectTypeAttrBlock * * i; // r31
}

// Range: 0x801405C8 -> 0x801405DC
int ObjectFolder::Save() {}

// Range: 0x801405DC -> 0x801405F0
int ObjectFolder::Load() {}

// Range: 0x801405F0 -> 0x801408FC
// this: r25
void ObjectFolder::DoStream(class ReconBuffer * rb /* r26 */) {
    // Local variables
    unsigned char compress; // r1+0x8
    int count; // r0
    int newCount; // r1+0x18
    unsigned short actualAttributes; // r29
    int i; // r28
    int guid; // r1+0x14
    int oldTypeAttributeCount; // r1+0x10
    signed short * pTempBuffer; // r27
    class ObjectTypeAttrBlock * block; // r23
    int currentAttrCount; // r0
    signed short * attrs; // r27
    int attrCount; // r1+0xC
    int j; // r3
}

// Range: 0x801408FC -> 0x80140904
unsigned char ObjectFolder::DoCommand() {}

// Range: 0x80140904 -> 0x80140B48
void ObjectFolder::GetTreeTable(class ObjSelector * sel /* r26 */) {
    // Local variables
    signed short treeTableID; // r0
    class ObjectDataID dataID; // r1+0x10
    class ConsoleAutoRefCount pTreeTable; // r1+0x8
    int entryCount; // r0
    const class ITreeTable * pConstTreeTable; // r29
    int i; // r28
    const class ITreeTableEntry * pEntry; // r27
    int adCount; // r0
    int j; // r26
}

// Range: 0x80140B48 -> 0x80140BF4
// this: r30
void ObjectFolder::ClearAllCaches() {
    // Local variables
    struct HashIterator it; // r1+0x20
    class ObjSelector * pSelector; // r31
}

// Range: 0x80140BF4 -> 0x80140D44
// this: r29
void UserDataSaveLoad::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    signed short tempDescId; // r0
    const struct RelationshipTable * pRelTab; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80140D44 -> 0x80140E10
// this: r31
class NamespaceSelector * ObjectFolder::GetNamespaceSelector(unsigned int id /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator it; // r1+0x14
}


