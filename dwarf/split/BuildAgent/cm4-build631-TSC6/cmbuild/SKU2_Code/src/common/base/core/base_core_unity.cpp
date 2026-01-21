/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\base_core_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C738 -> 0x8025C738
*/
volatile struct InitCallbackNode * mpInitCallbackNode; // size: 0x4, address: 0x805DBE50
enum FTNodeColor {
    FT_BLACK = 0,
    FT_RED = 1,
};
// total size: 0x20
struct EFloatTreeNode {
    // Members
    struct EFloatTreeNode * pLeft; // offset 0x0, size 0x4
    struct EFloatTreeNode * pRight; // offset 0x4, size 0x4
    struct EFloatTreeNode * pParent; // offset 0x8, size 0x4
    struct EFloatTreeNode * pLast; // offset 0xC, size 0x4
    struct EFloatTreeNode * pNext; // offset 0x10, size 0x4
    enum FTNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    float key; // offset 0x1C, size 0x4
};
// total size: 0x8
class TLinkedList {
    // Members
protected:
    struct EFloatTreeNode * m_pHead; // offset 0x0, size 0x4
    struct EFloatTreeNode * m_pTail; // offset 0x4, size 0x4
};
// total size: 0xC
class EFloatTree {
    // Static members
    static struct EFloatTreeSentinel m_sentinel; // size: 0x20

    // Members
protected:
    class TLinkedList m_list; // offset 0x0, size 0x8
    struct EFloatTreeNode * m_pRoot; // offset 0x8, size 0x4
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804AB8A0
class ETypeInfo * gpTypeInfo_EBoundTreeNode; // size: 0x4, address: 0x805DBE54
unsigned int m_table[256]; // size: 0x400, address: 0x80452AB8
// total size: 0x1
class EChecksum {
    // Static members
    static unsigned int m_table[256]; // size: 0x400
};
enum SRBNCNodeColor {
    SRBNC_BLACK = 0,
    SRBNC_RED = 1,
};
// total size: 0x20
struct EStringRedBlackTreeNoCaseNoCaseNode {
    // Members
    struct EStringRedBlackTreeNoCaseNoCaseNode * pLeft; // offset 0x0, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pRight; // offset 0x4, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pParent; // offset 0x8, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pLast; // offset 0xC, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pNext; // offset 0x10, size 0x4
    enum SRBNCNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    class EString key; // offset 0x1C, size 0x4
};
// total size: 0x14
class EDataHeader {
    // Members
    char * m_name; // offset 0x0, size 0x4
public:
    unsigned int m_nVersion; // offset 0x4, size 0x4
    unsigned int m_nSignature; // offset 0x8, size 0x4
    unsigned int m_reserved; // offset 0xC, size 0x4
    unsigned int m_nSize; // offset 0x10, size 0x4
};
// total size: 0x28
class EFileStream : public EStream {
    // Members
protected:
    class EFile * m_pEorFile; // offset 0x1C, size 0x4
    enum FSReadWriteMode m_mode; // offset 0x20, size 0x4
    unsigned char m_bOwn; // offset 0x24, size 0x1
};
enum FSReadWriteMode {
    FS_READ = 0,
    FS_WRITE = 1,
};
class ENgcFileSystem _eorFileSys; // size: 0x28, address: 0x804AB8D8
// total size: 0x10C
class TString : public EFixedString {
    // Members
    char m_szBuffer[260]; // offset 0x8, size 0x104
};
char * _fixedStringNull; // size: 0x4, address: 0x805DA200
// total size: 0x8
class EFixedString {
    // Members
    char * m_p; // offset 0x0, size 0x4
    int m_bufferLength; // offset 0x4, size 0x4
};
// total size: 0x20
struct EFloatTreeSentinel {
    // Members
    struct EFloatTreeNode * pLeft; // offset 0x0, size 0x4
    struct EFloatTreeNode * pRight; // offset 0x4, size 0x4
    struct EFloatTreeNode * pParent; // offset 0x8, size 0x4
    struct EFloatTreeNode * pLast; // offset 0xC, size 0x4
    struct EFloatTreeNode * pNext; // offset 0x10, size 0x4
    enum FTNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    unsigned char key[4]; // offset 0x1C, size 0x4
};
struct EFloatTreeSentinel m_sentinel; // size: 0x20, address: 0x80452EB8
unsigned char m_startupComplete; // size: 0x1, address: 0x805DBE58
unsigned char m_shutdownComplete; // size: 0x1, address: 0x805DA204
struct EGMClientData m_clients[32]; // size: 0x100, address: 0x804AB900
int m_nClients; // size: 0x4, address: 0x805DBE5C
int m_nStartedUpClients; // size: 0x4, address: 0x805DBE60
// total size: 0x1
class EGlobalManager {
    // Static members
    static int m_nStartedUpClients; // size: 0x4
    static int m_nClients; // size: 0x4
    static struct EGMClientData m_clients[32]; // size: 0x100
    static unsigned char m_shutdownComplete; // size: 0x1
    static unsigned char m_startupComplete; // size: 0x1
};
// total size: 0x8
struct EGMClientData {
    // Members
    class EGlobalManagerClient * pClient; // offset 0x0, size 0x4
    int priority; // offset 0x4, size 0x4
};
// total size: 0xC
class EGrowPool {
    // Members
protected:
    void * m_pFreeObjHead; // offset 0x0, size 0x4
    void * m_pSegHead; // offset 0x4, size 0x4
    int m_blockSize; // offset 0x8, size 0x4
};
unsigned int _urandseed; // size: 0x4, address: 0x805DA208
// total size: 0x24
class EMemoryReadStream : public EStream {
    // Members
protected:
    unsigned char * m_pData; // offset 0x1C, size 0x4
    unsigned int m_pos; // offset 0x20, size 0x4
};
// total size: 0x24
class EMemoryBufferWriteStream : public EStream {
    // Members
protected:
    unsigned char * m_pData; // offset 0x1C, size 0x4
    unsigned int m_pos; // offset 0x20, size 0x4
};
// total size: 0x2C
class EMemoryWriteStream : public EStream {
    // Members
protected:
    unsigned int m_pos; // offset 0x1C, size 0x4
    class TArray m_blocks; // offset 0x20, size 0xC
};
static int s_iNext[3]; // size: 0xC, address: 0x80452ED8
struct ERedBlackTreeNode m_sentinel; // size: 0x20, address: 0x80452EE8
unsigned char g_rbDecompPoolRotBuffer[298264]; // size: 0x48D18, address: 0x804ABA00
class ProtectedAllocPool g_poolRotAnimDecompObjects; // size: 0x38, address: 0x804F4728
// total size: 0x8
class ESingleLock {
    // Members
protected:
    class ESyncObject * m_pObject; // offset 0x0, size 0x4
    unsigned char m_bAcquired; // offset 0x4, size 0x1
    unsigned char m_bAutoUnlock; // offset 0x5, size 0x1
};
class ETypeInfo m_typeInfo; // size: 0x28, address: 0x804F4760
class ETypeInfo * gpTypeInfo_EStorable; // size: 0x4, address: 0x805DBE64
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0xC
class TRedBlackTree : public ERedBlackTree {};
// total size: 0xC
class TNodeList : public ENodeList {
    // Members
protected:
    unsigned char m_bDeleteData; // offset 0x8, size 0x1
};
// total size: 0xC
class TArray {
    // Members
protected:
    int * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
char m_null[1]; // size: 0x1, address: 0x805DBE68
unsigned short _estring2Error[8]; // size: 0x10, address: 0x80452F08
// total size: 0x4
class EString2 {
    // Members
protected:
    unsigned short * m_p; // offset 0x0, size 0x4
};
enum SRBNodeColor {
    SRB_BLACK = 0,
    SRB_RED = 1,
};
// total size: 0x20
struct EStringRedBlackTreeNode {
    // Members
    struct EStringRedBlackTreeNode * pLeft; // offset 0x0, size 0x4
    struct EStringRedBlackTreeNode * pRight; // offset 0x4, size 0x4
    struct EStringRedBlackTreeNode * pParent; // offset 0x8, size 0x4
    struct EStringRedBlackTreeNode * pLast; // offset 0xC, size 0x4
    struct EStringRedBlackTreeNode * pNext; // offset 0x10, size 0x4
    enum SRBNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    class EString key; // offset 0x1C, size 0x4
};
// total size: 0x20
struct EStringRedBlackTreeSentinel {
    // Members
    struct EStringRedBlackTreeNode * pLeft; // offset 0x0, size 0x4
    struct EStringRedBlackTreeNode * pRight; // offset 0x4, size 0x4
    struct EStringRedBlackTreeNode * pParent; // offset 0x8, size 0x4
    struct EStringRedBlackTreeNode * pLast; // offset 0xC, size 0x4
    struct EStringRedBlackTreeNode * pNext; // offset 0x10, size 0x4
    enum SRBNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    unsigned char key[4]; // offset 0x1C, size 0x4
};
struct EStringRedBlackTreeSentinel m_sentinel; // size: 0x20, address: 0x80452F18
// total size: 0x20
struct EStringRedBlackTreeNoCaseNoCaseSentinel {
    // Members
    struct EStringRedBlackTreeNoCaseNoCaseNode * pLeft; // offset 0x0, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pRight; // offset 0x4, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pParent; // offset 0x8, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pLast; // offset 0xC, size 0x4
    struct EStringRedBlackTreeNoCaseNoCaseNode * pNext; // offset 0x10, size 0x4
    enum SRBNCNodeColor color; // offset 0x14, size 0x4
    unsigned int value; // offset 0x18, size 0x4
    unsigned char key[4]; // offset 0x1C, size 0x4
};
struct EStringRedBlackTreeNoCaseNoCaseSentinel m_sentinel; // size: 0x20, address: 0x80452F38
// total size: 0x8
class TLinkedList {
    // Members
protected:
    class EThread * m_pHead; // offset 0x0, size 0x4
    class EThread * m_pTail; // offset 0x4, size 0x4
};
class TLinkedList _threadList; // size: 0x8, address: 0x805DBE70
class ETypeInfo * m_pTreeHead; // size: 0x4, address: 0x805DBE78
class ETypeInfo * m_pListHead; // size: 0x4, address: 0x805DBE7C
int m_count; // size: 0x4, address: 0x805DBE80
class EVec3 _X_AXIS; // size: 0xC, address: 0x804F4788
class EVec3 _Y_AXIS; // size: 0xC, address: 0x804F4794
class EVec3 _Z_AXIS; // size: 0xC, address: 0x804F47A0
class EVec4 s_vZero; // size: 0x10, address: 0x804F47B0
class EVec4 s_vX; // size: 0x10, address: 0x804F47C0
class EVec4 s_vY; // size: 0x10, address: 0x804F47D0
class EVec4 s_vZ; // size: 0x10, address: 0x804F47E0
class EVec4 s_vW; // size: 0x10, address: 0x804F47F0
// total size: 0x4
struct /* @class$54147base_core_unity_cpp */ {
    // Members
    unsigned int sign : 1; // offset 0x0, size 0x4
    unsigned int exponent : 8; // offset 0x0, size 0x4
    unsigned int fraction : 23; // offset 0x0, size 0x4
};
// total size: 0x4
struct /* @class$54148base_core_unity_cpp */ {
    // Members
    unsigned int sign : 1; // offset 0x0, size 0x4
    unsigned int exponent : 8; // offset 0x0, size 0x4
    unsigned int quiet : 1; // offset 0x0, size 0x4
    unsigned int fraction : 22; // offset 0x0, size 0x4
};
union __ieee_float_shape_type {
    float value; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$54147base_core_unity_cpp */ {
        // Members
        unsigned int sign : 1; // offset 0x0, size 0x4
        unsigned int exponent : 8; // offset 0x0, size 0x4
        unsigned int fraction : 23; // offset 0x0, size 0x4
    } number; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$54148base_core_unity_cpp */ {
        // Members
        unsigned int sign : 1; // offset 0x0, size 0x4
        unsigned int exponent : 8; // offset 0x0, size 0x4
        unsigned int quiet : 1; // offset 0x0, size 0x4
        unsigned int fraction : 22; // offset 0x0, size 0x4
    } nan; // offset 0x0, size 0x4
    long p1; // offset 0x0, size 0x4
};
enum Alignment {
    kAlignmentLeft = 0,
    kAlignmentRight = 1,
    kAlignmentZeroFill = 2,
};
enum Modifier {
    kModifierNone = 0,
    kModifierChar = 1,
    kModifierShort = 2,
    kModifierLong = 3,
    kModifierLongLong = 4,
    kModifierMax_t = 5,
    kModifierSize_t = 6,
    kModifierPtrdiff_t = 7,
    kModifierLongDouble = 8,
    kModifierWChar = 9,
    kModifierInt8 = 10,
    kModifierInt16 = 11,
    kModifierInt32 = 12,
    kModifierInt64 = 13,
    kModifierInt128 = 14,
};
// total size: 0x1C
struct FormatData {
    // Members
    enum Alignment m_alignment; // offset 0x0, size 0x4
    enum Sign m_sign; // offset 0x4, size 0x4
    unsigned char m_bAlternativeForm; // offset 0x8, size 0x1
    int m_width; // offset 0xC, size 0x4
    int m_precision; // offset 0x10, size 0x4
    enum Modifier m_modifier; // offset 0x14, size 0x4
    int m_type; // offset 0x18, size 0x4
};
enum Sign {
    kSignNone = 0,
    kSignMinus = 1,
    kSignMinusPlus = 2,
    kSignSpace = 3,
};
// total size: 0x10
struct SnprintfContext8 {
    // Members
    char * m_pDestination; // offset 0x0, size 0x4
    unsigned long m_count; // offset 0x4, size 0x4
    unsigned long m_maxCount; // offset 0x8, size 0x4
    unsigned char m_bEnglish; // offset 0xC, size 0x1
};
unsigned char _enable_trace_log; // size: 0x1, address: 0x805DBE84
static char pszBuff[10240]; // size: 0x2800, address: 0x804F4800
static class EMutex traceMutex; // size: 0x1C, address: 0x804F700C
// total size: 0xC
struct {} __vt__18ProtectedAllocPool; // size: 0xC, address: 0x804532A0
// total size: 0xC
struct {} __vt__13FastAllocPool; // size: 0xC, address: 0x804532AC
// total size: 0x14
struct {} __vt__9ENLattice; // size: 0x14, address: 0x804532B8
// total size: 0x1C
struct {} __vt__7ENDummy; // size: 0x1C, address: 0x804532CC
// total size: 0x1C
struct {} __vt__8ENCamera; // size: 0x1C, address: 0x804532E8
// total size: 0x20
struct {} __vt__12EThreadMutex; // size: 0x20, address: 0x80453308
// total size: 0x20
struct {} __vt__6EMutex; // size: 0x20, address: 0x80453328
// total size: 0x18
struct {} __vt__11ESyncObject; // size: 0x18, address: 0x80453348
// total size: 0x24
struct {} __vt__18EMemoryWriteStream; // size: 0x24, address: 0x80453360
// total size: 0x24
struct {} __vt__24EMemoryBufferWriteStream; // size: 0x24, address: 0x80453384
// total size: 0x24
struct {} __vt__17EMemoryReadStream; // size: 0x24, address: 0x804533A8
// total size: 0x24
struct {} __vt__11EFileStream; // size: 0x24, address: 0x804533CC
// total size: 0x3C
struct {} __vt__11EFileSystem; // size: 0x3C, address: 0x804533F0
// total size: 0x14
struct {} __vt__20EGlobalManagerClient; // size: 0x14, address: 0x8045342C
// total size: 0x34
struct {} __vt__5EFile; // size: 0x34, address: 0x80453440
// total size: 0x2C
struct {} __vt__14EBoundTreeNode; // size: 0x2C, address: 0x80453474
// total size: 0x14
struct {} __vt__9EBitArray; // size: 0x14, address: 0x804534CC
// total size: 0x24
struct {} __vt__7EStream; // size: 0x24, address: 0x804534E0
// total size: 0xC
class TArray {
    // Members
protected:
    unsigned char * * m_p; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_allocSize; // offset 0x8, size 0x4
};
static char nSpace; // size: 0x1, address: 0x805DED04

