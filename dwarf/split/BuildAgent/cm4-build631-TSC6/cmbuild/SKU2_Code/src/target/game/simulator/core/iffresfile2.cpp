/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\iffresfile2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801169E4 -> 0x8011A74C
*/
// Range: 0x801169E4 -> 0x801169F0
static char GetLanguage() {}

// Range: 0x801169F0 -> 0x80116A10
static void SetLanguage() {}

// Range: 0x80116A10 -> 0x80116AA8
// this: r30
void IFFResNode::DoStream(class ReconBuffer * r /* r31 */) {
    // Local variables
    signed short id; // r1+0x8
}

// Range: 0x80116AA8 -> 0x80116B24
// this: r29
void IFFResList::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    int type; // r1+0x8
}

// Range: 0x80116B24 -> 0x80116B74
// this: r31
IFFResNode::IFFResNode() {}

// Range: 0x80116B74 -> 0x80116C20
// this: r27
unsigned char IFFResMap::UpdateOffset(int offsetMoving /* r28 */, int delta /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * n; // r30
}

// Range: 0x80116C20 -> 0x80116CF0
// this: r28
class IFFResList * IFFResMap::GetResList(unsigned int type /* r29 */, unsigned char makeNew /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80116CF0 -> 0x80116D50
// this: r30
IFFResList::IFFResList(unsigned int type /* r31 */) {}

// Range: 0x80116D50 -> 0x80116DB8
class IFFResNode * IFFResMap::MakeNewNode() {
    // Local variables
    class IFFResList * i; // r30
}

// Range: 0x80116DB8 -> 0x80116E7C
// this: r28
class IFFResNode * IFFResMap::GetNode(int id /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80116E7C -> 0x80116F8C
// this: r27
class IFFResNode * IFFResMap::GetNodeWithLanguage(int id /* r28 */, char lang /* r31 */, void (* swiz)(void *, int) /* r29 */) {
    // Local variables
    class IFFResList * i; // r30
    class IFFResNode * j; // r29
}

// Range: 0x80116F8C -> 0x80117058
// this: r28
class IFFResNode * IFFResMap::GetNode(const class StackString & name /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80117058 -> 0x8011710C
// this: r26
class IFFResNode * IFFResMap::GetNode(struct HandleNode * h /* r27 */, unsigned int * type /* r28 */, void (* swiz)(void *, int) /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x8011710C -> 0x801171B8
// this: r28
class IFFResNode * IFFResMap::GetIndNode(int index /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x801171B8 -> 0x80117274
// this: r28
void IFFResMap::RemoveNode(class IFFResNode * n /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80117274 -> 0x80117278
int IFFResMap::CountTypes() {}

// Range: 0x80117278 -> 0x801172DC
// this: r30
unsigned int IFFResMap::GetIndexedType(int index /* r31 */) {
    // Local variables
    class IFFResList * i; // r3
}

// Range: 0x801172DC -> 0x80117338
// this: r30
int IFFResMap::CountNodes() {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80117338 -> 0x801173C4
// this: r29
void IFFResMap::FreeAllHandles() {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x801173C4 -> 0x801173C8
void IFFResMap::RemoveAllNodes() {}

// Range: 0x801173C8 -> 0x80117420
// this: r30
void IFFResMap::RemoveAllNodesOfType() {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80117420 -> 0x801174B0
// this: r29
signed short IFFResMap::GetHighestID() {
    // Local variables
    signed short highest; // r31
    class IFFResList * i; // r30
    class IFFResNode * j; // r29
}

// Range: 0x801174B0 -> 0x8011751C
// this: r29
void IFFResMap::DoStream(class ReconBuffer * r /* r30 */, int version /* r31 */) {}

// Range: 0x8011751C -> 0x80117570
// this: r31
IFFResList::IFFResList() {}

// Range: 0x80117570 -> 0x801175DC
// this: r31
IFFResFile2::IFFResFile2() {
    // References
    // -> struct [anonymous] __vt__11IFFResFile2;
}

// Range: 0x801175DC -> 0x8011766C
// this: r30
IFFResFile2::~IFFResFile2() {
    // References
    // -> struct [anonymous] __vt__11IFFResFile2;
}

// Range: 0x8011766C -> 0x80117A80
// this: r29
int IFFResFile2::Open(const class StringBuffer & path /* r26 */) {
    // Local variables
    struct IFFHeader temheader; // r1+0xE0
    class IFFResNode * newspot; // r27
    int theoffset; // r27
    int err; // r31
    int mapOffset; // r30
    unsigned char header[64]; // r1+0x10
    int size; // r1+0x8
    int i; // r6
    signed short version; // r0
    int err; // r0
    struct HandleNode * h; // r26

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x80117A80 -> 0x80117A90
void IFFResMap::AddToFragSize() {}

// Range: 0x80117A90 -> 0x80117AE0
// this: r31
IFFResMap::IFFResMap() {}

// Range: 0x80117AE0 -> 0x80117B8C
// this: r30
int IFFResFile2::Create(const class StringBuffer & name /* r31 */) {
    // Local variables
    int err; // r0
    class MemFile temp; // r1+0x8
}

// Range: 0x80117B8C -> 0x80117D38
// this: r29
int IFFResFile2::WriteHeader(class MemFile * file /* r30 */, int mapOffset /* r31 */) {
    // Local variables
    int err; // r0
    unsigned char header[64]; // r1+0x10
    int i; // r0
    int size; // r1+0x8

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x80117D38 -> 0x80117D98
// this: r30
int IFFResFile2::Delete(const class StringBuffer & name /* r31 */) {}

// Range: 0x80117D98 -> 0x80118024
// this: r29
int IFFResFile2::Close() {
    // Local variables
    int err; // r31
    struct HandleNode * h; // r30
    class StackString n; // r1+0x8
    class IFFResNode * node; // r0
}

// Range: 0x80118024 -> 0x8011802C
int IFFResMap::GetFragSize() {}

// Range: 0x8011802C -> 0x8011808C
// this: r31
int IFFResFile2::CloseForReopen() {
    // Local variables
    int err; // r0
}

// Range: 0x8011808C -> 0x8011810C
// this: r30
int IFFResFile2::Reopen() {
    // Local variables
    class StackString name; // r1+0x8
    int err; // r0
}

// Range: 0x8011810C -> 0x80118244
// this: r26
void IFFResFile2::Update() {
    // Local variables
    int err; // r31
    class IFFResMap * c; // r30
    int numtypes; // r29
    unsigned int type; // r28
    int numres; // r27
    class IFFResNode * res; // r0
}

// Range: 0x80118244 -> 0x8011824C
unsigned char IFFResFile2::Writable() {}

// Range: 0x8011824C -> 0x80118254
void IFFResFile2::GetFileName() {}

// Range: 0x80118254 -> 0x8011825C
unsigned char IFFResFile2::ValidFile() {}

// Range: 0x8011825C -> 0x801182DC
// this: r31
signed short IFFResFile2::CountTypes() {}

// Range: 0x801182DC -> 0x80118384
// this: r30
int IFFResFile2::GetIndType(signed short index /* r31 */) {
    // Local variables
    int type; // r31
}

// Range: 0x80118384 -> 0x80118414
// this: r30
signed short IFFResFile2::Count(int type /* r31 */) {}

// Range: 0x80118414 -> 0x80118528
// this: r27
struct HandleNode * IFFResFile2::GetByIDAndLanguage(int type /* r28 */, signed short id /* r29 */, char langCode /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r31
}

// Range: 0x80118528 -> 0x80118544
struct HandleNode * IFFResFile2::GetByID() {}

// Range: 0x80118544 -> 0x80118664
// this: r28
struct HandleNode * IFFResFile2::GetByName(int type /* r29 */, const class StringBuffer & name /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * spot; // r31
}

// Range: 0x80118664 -> 0x80118780
// this: r28
struct HandleNode * IFFResFile2::GetByIndex(int type /* r29 */, signed short index /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r31
}

// Range: 0x80118780 -> 0x80118848
// this: r29
void IFFResFile2::GetName(struct HandleNode * res /* r30 */, class StringBuffer & name /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118848 -> 0x80118900
// this: r30
char IFFResFile2::GetLanguage(struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118900 -> 0x801189B4
// this: r30
int IFFResFile2::GetResType(struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x801189B4 -> 0x80118A6C
// this: r29
void IFFResFile2::GetID(struct HandleNode * res /* r30 */, signed short * id /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118A6C -> 0x80118AF8
// this: r30
void IFFResFile2::GetIndex(signed short * index /* r31 */) {}

// Range: 0x80118AF8 -> 0x80118BE8
// this: r27
void IFFResFile2::FindUniqueName(int resType /* r28 */, class StringBuffer & name /* r29 */) {
    // Local variables
    class StackString startname; // r1+0x50
    int modifier; // r31
    unsigned char unique; // r30
    class IFFResNode * spot; // r0
}

// Range: 0x80118BE8 -> 0x80118C80
// this: r30
signed short IFFResFile2::FindUniqueID(int rType /* r31 */) {
    // Local variables
    signed short highestid; // r0
}

// Range: 0x80118C80 -> 0x80118D70
// this: r29
void IFFResFile2::Detach(struct HandleNode * res /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r0
    unsigned int type; // r1+0x8
}

// Range: 0x80118D70 -> 0x80118DE8
// this: r31
void IFFResFile2::Load() {}

// Range: 0x80118DE8 -> 0x80118EB0
// this: r30
unsigned char IFFResFile2::IsLittleEndian(struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118EB0 -> 0x80118F60
// this: r29
void IFFResFile2::SetID(struct HandleNode * res /* r30 */, signed short id /* r31 */) {
    // Local variables
    class StackString oldName; // r1+0x8
    char lang; // r0
}

// Range: 0x80118F60 -> 0x80119108
// this: r24
void IFFResFile2::AddWithLanguage(struct HandleNode * theHandle /* r25 */, int rType /* r26 */, signed short rID /* r27 */, const class StringBuffer & rName /* r28 */, char langCode /* r29 */, unsigned char littleEndian /* r30 */) {
    // Local variables
    class IFFResNode * spot; // r31
    int err; // r4
}

// Range: 0x80119108 -> 0x80119124
void IFFResFile2::Add() {}

// Range: 0x80119124 -> 0x80119378
// this: r28
void IFFResFile2::Write(struct HandleNode * res /* r29 */) {
    // Local variables
    int size; // r1+0xC
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r30
    struct IFFHeader newheader; // r1+0x10
    unsigned char * data; // r0
    int err; // r4
}

// Range: 0x80119378 -> 0x801193D4
// this: r30
void IFFHeader::SetName(const class StackString & name /* r31 */) {}

// Range: 0x801193D4 -> 0x801194E0
// this: r30
void IFFResFile2::Remove(struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * spot; // r31
    int err; // r4
}

// Range: 0x801194E0 -> 0x80119630
// this: r27
void IFFResFile2::SetInfo(struct HandleNode * res /* r30 */, signed short id /* r28 */, const class StringBuffer & name /* r29 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * spot; // r0
    unsigned char changed; // r30
    struct IFFHeader header; // r1+0xC
    int err; // r30
}

// Range: 0x80119630 -> 0x8011979C
// this: r31
int IFFResFile2::LoadNode(class IFFResNode * rc /* r28 */, void (* Swizzle)(void *, int) /* r29 */, int type /* r30 */) {
    // Local variables
    struct IFFHeader header; // r1+0xC
    unsigned char * data; // r30
    int size; // r1+0x8
    int err; // r0
}

// Range: 0x8011979C -> 0x80119800
int IFFResFile2::LowLevelRemove(class IFFResNode * spot /* r31 */) {
    // Local variables
    int err; // r0
}

// Range: 0x80119800 -> 0x80119880
// this: r30
int IFFResFile2::InvalBlockHeader(int fileoffset /* r31 */) {
    // Local variables
    struct IFFHeader header; // r1+0x8
    int err; // r0
}

// Range: 0x80119880 -> 0x80119AC4
// this: r28
int IFFResFile2::NewBlockHeader(struct IFFHeader * header /* r29 */, unsigned int datasize /* r27 */, int * fileoffset /* r30 */) {
    // Local variables
    int err; // r0
    int newsize; // r31
    struct IFFHeader nextheader; // r1+0x58
    unsigned char diff; // r27
    int filesize; // r1+0x8
}

// Range: 0x80119AC4 -> 0x80119B40
// this: r30
int IFFResFile2::GetBlockHeader(struct IFFHeader * header /* r31 */) {
    // Local variables
    int err; // r0
    int size; // r1+0x8
}

// Range: 0x80119B40 -> 0x80119B44
void IFFHeader::Swizzle() {}

// Range: 0x80119B44 -> 0x80119C08
// this: r29
int IFFResFile2::SetBlockHeader(struct IFFHeader * header /* r30 */, int fileoffset /* r31 */) {
    // Local variables
    int err; // r0
    int size; // r1+0x8
}

// Range: 0x80119C08 -> 0x80119CF8
// this: r26
int IFFResFile2::MoveBlock(unsigned char * temBuffer /* r27 */) {
    // Local variables
    int src; // r30
    int dest; // r29
    int err; // r0
    int currentSize; // r1+0x8
    int remainingSize; // r28
}

// Range: 0x80119CF8 -> 0x80119E18
// this: r28
int IFFResFile2::Defrag() {
    // Local variables
    struct IFFHeader header; // r1+0x8
    unsigned int theoffset; // r31
    unsigned int vacSize; // r30
    int err; // r0
    unsigned char * temBuffer; // r29
}

// Range: 0x80119E18 -> 0x80119E20
void IFFResMap::SetFragSize() {}

// Range: 0x80119E20 -> 0x8011A27C
// this: r28
int IFFBehResFile::Open(const class StringBuffer & path /* r25 */) {
    // Local variables
    unsigned char isBehaviorFilePresent; // r31
    struct IFFHeader temheader; // r1+0xF0
    class IFFResNode * newspot; // r26
    int theoffset; // r26
    int err; // r30
    int mapOffset; // r29
    class StackString nameOnly; // r1+0x13C
    class StackString ext; // r1+0xC
    unsigned char header[64]; // r1+0x20
    int size; // r1+0x8
    int i; // r6
    signed short version; // r0
    int err; // r0
    struct HandleNode * h; // r25

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x8011A27C -> 0x8011A310
// this: r27
unsigned int IFFBehResFile::IFFNodeSize(unsigned short nodes /* r28 */, unsigned int resType /* r29 */) {
    // Local variables
    unsigned int treeSize; // r31
    struct IFFHeader header; // r1+0x8
    unsigned short i; // r30
    class IFFResNode * rc; // r0
}

// Range: 0x8011A310 -> 0x8011A74C
// this: r26
void IFFBehResFile::RefreshBufferWithBehavior() {
    // Local variables
    unsigned int resTypeArray[4]; // r1+0x28
    int resTypeCount; // r0
    class vector removeResTypes; // r1+0x18
    int i; // r27
    unsigned int resType; // r1+0x10
    unsigned char matchType; // r4
    int j; // r0
    unsigned int * removeIter; // r25
    unsigned int behBuffSize; // r27
    int i; // r28
    unsigned int res; // r29
    unsigned short nodeCount; // r0
    unsigned char * buff; // r30
    unsigned char fileheader[64]; // r1+0x50
    int i; // r0
    int offset; // r1+0xC
    struct IFFHeader header; // r1+0x90
    int i; // r29
    unsigned int res; // r28
    int nodeCount; // r0
    unsigned short j; // r27
    class IFFResNode * rc; // r24
    class StackString name; // r1+0x1E8
    class StackString nameOnly; // r1+0xDC
    class StackString ext; // r1+0x38

    // References
    // -> static unsigned char sUniqueHeader[64];
}


