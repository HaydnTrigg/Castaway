/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\e_memorycard.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012EAEC -> 0x8012EBA0
*/
// Range: 0x8012EAEC -> 0x8012EB40
enum EMC_OpStatus EMemoryCard::VerifyChecksum(class NghResFileSectionHeader * pOutData /* r30 */) {
    // Local variables
    unsigned int uChecksum; // r31
    unsigned int uNewCheck; // r0
}

// Range: 0x8012EB40 -> 0x8012EB48
enum EMC_OpStatus EMemoryCard::CloseForIO() {}

// Range: 0x8012EB48 -> 0x8012EB50
enum EMC_OpStatus EMemoryCard::LoadDataChunkS() {}

// Range: 0x8012EB50 -> 0x8012EB58
enum EMC_OpStatus EMemoryCard::OpenForIO() {}

// Range: 0x8012EB58 -> 0x8012EB60
enum EMC_OpStatus EMemoryCard::SaveDataChunkS() {}

// Range: 0x8012EB60 -> 0x8012EB68
enum EMC_OpStatus EMemoryCard::CreateFileS() {}

// Range: 0x8012EB68 -> 0x8012EBA0
void EMemoryCard::SetChecksum(class NghResFileSectionHeader * pInData /* r31 */) {}


// Range: 0x80175800 -> 0x8017580C
MemoryDevicePort_t::MemoryDevicePort_t() {}


// Range: 0x801B372C -> 0x801B373C
void MemoryDevicePort_t::Reset() {}

// Range: 0x801B373C -> 0x801B376C
// this: r31
MemoryDevicePort_t::MemoryDevicePort_t() {}


// Range: 0x802421E4 -> 0x802421EC
unsigned char EMemoryCard::GetFileRefCount() {}

// Range: 0x802421EC -> 0x802421F4
unsigned char EMemoryCard::IsWrongDevice() {}


// Range: 0x802B1488 -> 0x802B14C8
// this: r31
EMemoryCard::~EMemoryCard() {}

// Range: 0x802B14C8 -> 0x802B14CC
void EMemoryCard::SetMemCardCopyProtection() {}

// Range: 0x802B14CC -> 0x802B14D4
enum EMC_OpStatus EMemoryCard::PollCards() {}

// Range: 0x802B14D4 -> 0x802B14DC
unsigned char EMemoryCard::IsPolledCardAvailable() {}


