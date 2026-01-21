/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\floatconstants.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010E610 -> 0x8010EBDC
*/
// Range: 0x8010E610 -> 0x8010E640
class FloatConstantsQuickData * FloatConstantsQuickData::CreateInstance() {}

// Range: 0x8010E640 -> 0x8010E670
class FloatConstants * FloatConstants::CreateInstance() {}

// Range: 0x8010E670 -> 0x8010E6C8
// this: r31
FloatConstantsQuickData::FloatConstantsQuickData() {
    // References
    // -> struct [anonymous] __vt__23FloatConstantsQuickData;
}

// Range: 0x8010E6C8 -> 0x8010E728
// this: r30
FloatConstantsQuickData::~FloatConstantsQuickData() {}

// Range: 0x8010E728 -> 0x8010E7C8
// this: r29
float FloatConstantsQuickData::Get(const char * name /* r30 */, float defaultValue /* f31 */) {
    // Local variables
    const struct FloatConstantItem * i; // r31
}

// Range: 0x8010E7C8 -> 0x8010E84C
// this: r28
unsigned char FloatConstantsQuickData::Has(const char * name /* r29 */) {
    // Local variables
    unsigned char result; // r30
    const struct FloatConstantItem * item; // r0
}

// Range: 0x8010E84C -> 0x8010E8D8
// this: r28
int FloatConstantsQuickData::Load(unsigned int fileID /* r29 */, signed short id /* r30 */) {
    // Local variables
    class iResFile * pFile; // r0
    int err; // r31
}

// Range: 0x8010E8D8 -> 0x8010E968
// this: r28
int FloatConstantsQuickData::Load(signed short id /* r29 */) {
    // Local variables
    const struct ResFile * pResFile; // r0
}

// Range: 0x8010E968 -> 0x8010EA48
struct FloatConstantItem * FloatConstantsQuickData::findItem(const struct FloatConstantItem * begin /* r28 */, const struct FloatConstantItem * end /* r29 */, const char * name /* r30 */) {
    // Local variables
    int iCmp; // r4
    const struct FloatConstantItem * middle; // r31
}

// Range: 0x8010EA48 -> 0x8010EA50
class ObjectDataID FloatConstantsQuickData::GetDataID() {}

// Range: 0x8010EA50 -> 0x8010EAC4
// this: r29
unsigned char FloatConstantsQuickData::LoadFromDataID(const class ObjectDataID & id /* r30 */) {}

// Range: 0x8010EAC4 -> 0x8010EACC
unsigned char FloatConstantsQuickData::SaveDataByID() {}

// Range: 0x8010EACC -> 0x8010EB6C
// this: r30
unsigned char FloatConstantsQuickData::QueryInterface(void * ppvObject /* r31 */) {}

// Range: 0x8010EB6C -> 0x8010EB74
enum tObjectDataType FloatConstantsQuickData::GetDataSourceType() {}

// Range: 0x8010EB74 -> 0x8010EB88
unsigned int FloatConstantsQuickData::AddRef() {}

// Range: 0x8010EB88 -> 0x8010EBDC
unsigned int FloatConstantsQuickData::Release() {}


