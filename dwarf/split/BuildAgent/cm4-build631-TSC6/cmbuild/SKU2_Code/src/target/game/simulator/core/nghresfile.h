/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\nghresfile.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004D31C -> 0x8004D324
*/
// Range: 0x8004D31C -> 0x8004D324
unsigned int NghResFile::GetNumSimsPerFamily() {
    // References
    // -> unsigned int s_nNumSimsPerFamily;
}


// Range: 0x800D4140 -> 0x800D4148
unsigned int NghResFile::GetNumModifiableFamilies() {
    // References
    // -> unsigned int s_nNumModifiableFamilies;
}


// Range: 0x8012CDC0 -> 0x8012CDC8
unsigned int NghResFile::GetNumHouses() {
    // References
    // -> unsigned int s_nNumHouses;
}

// Range: 0x8012CDC8 -> 0x8012CDD4
unsigned int NghResFile::GetCurrentHouse() {}

// Range: 0x8012CDD4 -> 0x8012CDDC
unsigned int NghLayout::GetSubSectionCnt() {}

// Range: 0x8012CDDC -> 0x8012CDEC
unsigned int NghResFileSectionHeader::GetSize() {}

// Range: 0x8012CDEC -> 0x8012CE00
unsigned int NghLayout::GetSubSectionSize() {}

// Range: 0x8012CE00 -> 0x8012CE14
unsigned int NghLayout::GetSectionOffset() {}

// Range: 0x8012CE14 -> 0x8012CE28
unsigned int NghLayout::GetSectionTotalSize() {}

// Range: 0x8012CE28 -> 0x8012CE38
// this: r4
unsigned int NghSubSectionIterator::GetCurrSubSectionSize() {}

// Range: 0x8012CE38 -> 0x8012CEC8
// this: r31
void NghSubSectionIterator::Next() {}

// Range: 0x8012CEC8 -> 0x8012CED8
class NghSection * NghLayout::GetSection() {}

// Range: 0x8012CED8 -> 0x8012CEE8
SaveRecord::SaveRecord() {}

// Range: 0x8012CEE8 -> 0x8012CF00
NghSubSectionIterator::NghSubSectionIterator() {}

// Range: 0x8012CF00 -> 0x8012CF08
unsigned int NghLayout::GetSectionMaxSize() {}

// Range: 0x8012CF08 -> 0x8012CF10
class NghLayout * NghResFile::GetLayout() {}

// Range: 0x8012CF10 -> 0x8012CF18
unsigned int NghLayout::GetTotalSize() {}

// Range: 0x8012CF18 -> 0x8012CF7C
// this: r30
NghResFileWriteInfo::~NghResFileWriteInfo() {}

// Range: 0x8012CF7C -> 0x8012CF90
NghResFileWriteInfo::NghResFileWriteInfo() {}

// Range: 0x8012CF90 -> 0x8012CF98
unsigned int NghLayout::GetNumSimsPerFamily() {}

// Range: 0x8012CF98 -> 0x8012CFA0
unsigned int NghLayout::GetNumModifiableFamilies() {}

// Range: 0x8012CFA0 -> 0x8012CFA8
unsigned int NghLayout::GetNumHouses() {}

// Range: 0x8012CFA8 -> 0x8012CFB0
unsigned int NghLayout::GetNumThumbnails() {}

// Range: 0x8012CFB0 -> 0x8012CFB8
unsigned int NghLayout::GetVersion() {}

// Range: 0x8012CFB8 -> 0x8012CFC0
unsigned int NghSubSectionIterator::GetCurrSubSection() {}

// Range: 0x8012CFC0 -> 0x8012CFC8
unsigned int NghSubSectionIterator::GetCurrSection() {}

// Range: 0x8012CFC8 -> 0x8012CFE0
RegistryNode::RegistryNode() {}

// Range: 0x8012CFE0 -> 0x8012CFF4
RegistryNode::RegistryNode() {}

// Range: 0x8012CFF4 -> 0x8012CFFC
unsigned int NghSubSectionIterator::GetCurrOffset() {}

// Range: 0x8012CFFC -> 0x8012D044
// this: r31
NghLayout::~NghLayout() {}

// Range: 0x8012D044 -> 0x8012D0D4
NghLayout::NghLayout() {
    // Local variables
    unsigned int sectionCnt; // r4
    unsigned int subSectionCnt; // r10
    unsigned int maxSize; // r11
    unsigned int size; // r12
    unsigned int ssCnt; // r6
    class NghSection * pSection; // r5
}


