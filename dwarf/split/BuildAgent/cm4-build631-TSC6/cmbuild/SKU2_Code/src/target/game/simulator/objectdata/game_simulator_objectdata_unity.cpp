/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\game_simulator_objectdata_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015D97C -> 0x8015D97C
*/
unsigned char g_qdBconPoolBuffer[1664]; // size: 0x680, address: 0x80493068
class FastAllocPool g_poolQdBcon; // size: 0x1C, address: 0x804936F4
// total size: 0x20
class QuickDataBehaviorConstants : public ObjectDataBehaviorConstants {
    // Members
    const struct BehaviorConstants * m_qdConsts; // offset 0x18, size 0x4
    unsigned int mRefCount; // offset 0x1C, size 0x4
};
// total size: 0x64
class IFFBehaviorConstants : public ObjectDataBehaviorConstants {
    // Members
    class StackString mResName; // offset 0x18, size 0x48
    unsigned int mRefCount; // offset 0x60, size 0x4
};
// total size: 0x4
struct EdithBehaviorConstants {
    // Members
    signed short flags; // offset 0x0, size 0x2
    signed short values[1]; // offset 0x2, size 0x2
};
// total size: 0x64
class ResourceBehaviorTree : public ObjectDataBehaviorTree {
    // Members
    class EREdithTreeSet * m_resource; // offset 0x5C, size 0x4
    unsigned int mRefCount; // offset 0x60, size 0x4
};
unsigned char g_rbTreePoolBuffer[564]; // size: 0x234, address: 0x80493710
class FastAllocPool g_poolResourceBehaviorTree; // size: 0x1C, address: 0x80493950
// total size: 0x60
class IFFBehaviorTree : public ObjectDataBehaviorTree {
    // Members
    unsigned int mRefCount; // offset 0x5C, size 0x4
};
class SmartDataFactory * gpSmartDataFactoryInstance; // size: 0x4, address: 0x805DB9F8
// total size: 0x4
class ISmartDataFactory : public IConsoleUnknown {};
// total size: 0x24
class SmartDataFactory : public ISmartDataFactory {
    // Members
protected:
    class map mResourceProviderMap; // offset 0x4, size 0x1C
private:
    unsigned int mRefCount; // offset 0x20, size 0x4
};
// total size: 0x1C
class rbtree : public rb_base {
    // Static members
    static unsigned long kKeyAlignment; // size: 0x4
    static unsigned long kKeyAlignmentOffset; // size: 0x4
    static unsigned long kValueAlignment; // size: 0x4
    static unsigned long kValueAlignmentOffset; // size: 0x4

    // Members
public:
    struct rbtree_node_base mAnchor; // offset 0x4, size 0x10
    unsigned long mnSize; // offset 0x14, size 0x4
    class allocator mAllocator; // offset 0x18, size 0x1
};
// total size: 0x1C
class map : public rbtree {};
// total size: 0x1
struct rb_base {
    // Members
    struct less mCompare; // offset 0x0, size 0x1
};
enum tDataProvider {
    kFromQuickData = 0,
    kFromIFF = 1,
    kFromDatabase = 2,
    kFromResource = 3,
    kDefaultDataProvider = 4,
};
// total size: 0xC
struct pair {
    // Members
    unsigned int first; // offset 0x0, size 0x4
    class ObjectDataID second; // offset 0x4, size 0x8
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x20
struct rbtree_node : public rbtree_node_base {
    // Members
    struct pair mValue; // offset 0x10, size 0x10
};
// total size: 0x4
struct rbtree_iterator {
    // Members
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
// total size: 0x8
struct pair {
    // Members
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
// total size: 0x10
struct pair {
    // Members
    struct pair first; // offset 0x0, size 0xC
    enum tDataProvider second; // offset 0xC, size 0x4
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class IConsoleUnknown * mpData; // offset 0x0, size 0x4
};
class TreeTableAd ZERO_AD; // size: 0x8, address: 0x805DBA00
class TreeTableAdQuickData * ZERO_AD_QD; // size: 0x4, address: 0x805DBA08
// total size: 0xC
class TreeTableAdQuickData : public ITreeTableAd {
    // Members
    const class TreeTableAd * mpTreeTableAd; // offset 0x4, size 0x4
    unsigned int mRefCount; // offset 0x8, size 0x4
};
// total size: 0x1C
class TreeTableEntryQuickData : public ITreeTableEntry {
    // Static members
    static class TreeTableAdQuickData * ZERO_AD_QD; // size: 0x4
    static class TreeTableAd ZERO_AD; // size: 0x8

    // Members
    const class TreeTableEntry * mpTreeTableEntry; // offset 0x4, size 0x4
    class vector mTreeTableAds; // offset 0x8, size 0x10
    unsigned int mRefCount; // offset 0x18, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class ConsoleAutoRefCount * mpBegin; // offset 0x0, size 0x4
    class ConsoleAutoRefCount * mpEnd; // offset 0x4, size 0x4
    class ConsoleAutoRefCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class TreeTableAdQuickData * mpData; // offset 0x0, size 0x4
};
// total size: 0x24
class TreeTableQuickData : public ITreeTable {
    // Members
    const class TreeTable * mpTreeTable; // offset 0x4, size 0x4
    class vector mTreeTableEntries; // offset 0x8, size 0x10
    class ObjectDataID mObjectDataID; // offset 0x18, size 0x8
    unsigned int mRefCount; // offset 0x20, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class ConsoleAutoRefCount * mpBegin; // offset 0x0, size 0x4
    class ConsoleAutoRefCount * mpEnd; // offset 0x4, size 0x4
    class ConsoleAutoRefCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class ConsoleAutoRefCount {
    // Members
public:
    class TreeTableEntryQuickData * mpData; // offset 0x0, size 0x4
};
// total size: 0x90
struct {} __vt__18TreeTableQuickData; // size: 0x90, address: 0x8042FA78
// total size: 0x134
struct {} __vt__23TreeTableEntryQuickData; // size: 0x134, address: 0x8042FB08
// total size: 0x3C
struct {} __vt__20TreeTableAdQuickData; // size: 0x3C, address: 0x8042FC3C
// total size: 0x10
struct {} __vt__39ObjectDataFactoryDatabase<10ITreeTable>; // size: 0x10, address: 0x8042FC78
// total size: 0x10
struct {} __vt__34ObjectDataFactoryIFF<10ITreeTable>; // size: 0x10, address: 0x8042FC88
// total size: 0x10
struct {} __vt__40ObjectDataFactoryQuickData<10ITreeTable>; // size: 0x10, address: 0x8042FC98
// total size: 0x10
struct {} __vt__31ObjectDataFactory<10ITreeTable>; // size: 0x10, address: 0x8042FCA8
// total size: 0x10
struct {} __vt__39ObjectDataFactoryDatabase<10ObjFnTable>; // size: 0x10, address: 0x8042FCB8
// total size: 0x10
struct {} __vt__34ObjectDataFactoryIFF<10ObjFnTable>; // size: 0x10, address: 0x8042FCC8
// total size: 0x10
struct {} __vt__40ObjectDataFactoryQuickData<10ObjFnTable>; // size: 0x10, address: 0x8042FCD8
// total size: 0x10
struct {} __vt__31ObjectDataFactory<10ObjFnTable>; // size: 0x10, address: 0x8042FCE8
// total size: 0x10
struct {} __vt__43ObjectDataFactoryDatabase<14FloatConstants>; // size: 0x10, address: 0x8042FCF8
// total size: 0x10
struct {} __vt__38ObjectDataFactoryIFF<14FloatConstants>; // size: 0x10, address: 0x8042FD08
// total size: 0x10
struct {} __vt__44ObjectDataFactoryQuickData<14FloatConstants>; // size: 0x10, address: 0x8042FD18
// total size: 0x10
struct {} __vt__35ObjectDataFactory<14FloatConstants>; // size: 0x10, address: 0x8042FD28
// total size: 0x10
struct {} __vt__37ObjectDataFactoryDatabase<9StringSet>; // size: 0x10, address: 0x8042FD38
// total size: 0x10
struct {} __vt__32ObjectDataFactoryIFF<9StringSet>; // size: 0x10, address: 0x8042FD48
// total size: 0x10
struct {} __vt__38ObjectDataFactoryQuickData<9StringSet>; // size: 0x10, address: 0x8042FD58
// total size: 0x10
struct {} __vt__29ObjectDataFactory<9StringSet>; // size: 0x10, address: 0x8042FD68
// total size: 0x34
struct {} __vt__9SoundInfo; // size: 0x34, address: 0x8042FD78
// total size: 0x24
struct {} __vt__16SmartDataFactory; // size: 0x24, address: 0x8042FDAC
// total size: 0x3C
struct {} __vt__15IFFBehaviorTree; // size: 0x3C, address: 0x8042FDD0
// total size: 0x3C
struct {} __vt__20ResourceBehaviorTree; // size: 0x3C, address: 0x8042FE0C
// total size: 0x3C
struct {} __vt__22ObjectDataBehaviorTree; // size: 0x3C, address: 0x8042FE48
// total size: 0x20
struct {} __vt__17ISmartDataFactory; // size: 0x20, address: 0x8042FE88
// total size: 0x88
struct {} __vt__10ITreeTable; // size: 0x88, address: 0x8042FEA8
// total size: 0x34
struct {} __vt__23ObjectDataObjDefinition; // size: 0x34, address: 0x8042FF30
// total size: 0x40
struct {} __vt__20IFFBehaviorConstants; // size: 0x40, address: 0x8042FF68
// total size: 0x40
struct {} __vt__26QuickDataBehaviorConstants; // size: 0x40, address: 0x8042FFA8
// total size: 0x40
struct {} __vt__27ObjectDataBehaviorConstants; // size: 0x40, address: 0x8042FFE8
// total size: 0x30
struct {} __vt__19ObjectDataInterface; // size: 0x30, address: 0x80430028
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ConsoleAutoRefCount * mIterator; // offset 0x0, size 0x4
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class ConsoleAutoRefCount * mIterator; // offset 0x0, size 0x4
};
// total size: 0x1
struct use_first {};
// total size: 0x1
struct binary_function {};
// total size: 0x1
struct less : public binary_function {};

