/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\objectdatafactory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80007D60 -> 0x80007DDC
*/
// total size: 0x8
class TreeTableAd {
    // Members
public:
    signed short fPersonalityAd; // offset 0x0, size 0x2
    signed short fMin; // offset 0x2, size 0x2
    signed short fRange; // offset 0x4, size 0x2
    signed short fAdID; // offset 0x6, size 0x2
};
class TreeTableAd ZERO_AD; // size: 0x8, address: 0x805DB678
// total size: 0x4
class BString2 {
    // Static members
    static class BString2 s_empty; // size: 0x4
    static class basic_string_ref2 defaultReference; // size: 0x10

    // Members
    class basic_string_ref2 * reference; // offset 0x0, size 0x4
};
class BString2 s; // size: 0x4, address: 0x805DB684
// total size: 0x4
class StringSet : public IObjectDataResource {};
// total size: 0x4
class ObjectDataFactory {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectDataFactoryQuickData : public ObjectDataFactory {};
// Range: 0x80007D60 -> 0x80007D64
class StringSet * ObjectDataFactoryQuickData::operator()() {}

// total size: 0x4
class ObjectDataFactoryIFF : public ObjectDataFactory {};
// Range: 0x80007D64 -> 0x80007D6C
class StringSet * ObjectDataFactoryIFF::operator()() {}

// total size: 0x4
class ObjectDataFactoryDatabase : public ObjectDataFactory {};
// Range: 0x80007D6C -> 0x80007D74
class StringSet * ObjectDataFactoryDatabase::operator()() {}

// total size: 0x4
class ObjectDataFactory {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectDataFactoryQuickData : public ObjectDataFactory {};
// Range: 0x80007D74 -> 0x80007D78
class ObjFnTable * ObjectDataFactoryQuickData::operator()() {}

// total size: 0x4
class ObjectDataFactoryIFF : public ObjectDataFactory {};
// Range: 0x80007D78 -> 0x80007D80
class ObjFnTable * ObjectDataFactoryIFF::operator()() {}

// total size: 0x4
class ObjectDataFactoryDatabase : public ObjectDataFactory {};
// Range: 0x80007D80 -> 0x80007D88
class ObjFnTable * ObjectDataFactoryDatabase::operator()() {}

// total size: 0x4
class FloatConstants : public IObjectDataResource {};
// total size: 0x4
class ObjectDataFactory {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectDataFactoryQuickData : public ObjectDataFactory {};
// Range: 0x80007D88 -> 0x80007D8C
class FloatConstants * ObjectDataFactoryQuickData::operator()() {}

// total size: 0x4
class ObjectDataFactoryIFF : public ObjectDataFactory {};
// Range: 0x80007D8C -> 0x80007D94
class FloatConstants * ObjectDataFactoryIFF::operator()() {}

// total size: 0x4
class ObjectDataFactoryDatabase : public ObjectDataFactory {};
// Range: 0x80007D94 -> 0x80007D9C
class FloatConstants * ObjectDataFactoryDatabase::operator()() {}

enum Attenuation {
    kCustom = 0,
    kNone = 1,
    kLow = 2,
    kModerate = 3,
    kHigh = 4,
};
// total size: 0x4
class ITreeTableAd : public IConsoleUnknown {};
// total size: 0x4
class ITreeTableEntry : public IConsoleUnknown {};
// total size: 0x4
class ITreeTable : public IObjectDataResource {};
// total size: 0x4
class ObjectDataFactory {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class ObjectDataFactoryQuickData : public ObjectDataFactory {};
// Range: 0x80007D9C -> 0x80007DCC
class ITreeTable * ObjectDataFactoryQuickData::operator()() {}

// total size: 0x4
class ObjectDataFactoryIFF : public ObjectDataFactory {};
// Range: 0x80007DCC -> 0x80007DD4
class ITreeTable * ObjectDataFactoryIFF::operator()() {}

// total size: 0x4
class ObjectDataFactoryDatabase : public ObjectDataFactory {};
// Range: 0x80007DD4 -> 0x80007DDC
class ITreeTable * ObjectDataFactoryDatabase::operator()() {}


