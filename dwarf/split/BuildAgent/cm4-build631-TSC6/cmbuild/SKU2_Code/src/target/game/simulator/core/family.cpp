/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\family.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010C144 -> 0x8010CE44
*/
// Range: 0x8010C144 -> 0x8010C164
void Family::DestroyInstance() {}

// Range: 0x8010C164 -> 0x8010C1A4
// this: r31
Family::~Family() {}

// Range: 0x8010C1A4 -> 0x8010C264
// this: r30
FamilyImpl::FamilyImpl(int number /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10FamilyImpl;
}

// Range: 0x8010C264 -> 0x8010C328
// this: r30
FamilyImpl::FamilyImpl(class FamilyImpl * inFam /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10FamilyImpl;
}

// Range: 0x8010C328 -> 0x8010C3A8
// this: r30
FamilyImpl::~FamilyImpl() {}

// Range: 0x8010C3A8 -> 0x8010C448
// this: r28
void FamilyImpl::CreateFamilyInLot() {
    // Local variables
    class ObjectModule * pObjMod; // r30
    const class FamilyMember * member; // r0
    class Neighbor * neighbor; // r0
    int j; // r29
}

// Range: 0x8010C448 -> 0x8010C4F8
// this: r28
void FamilyImpl::RemoveFamilyFromLot() {
    // Local variables
    class ObjectModule * pObjMod; // r30
    const class FamilyMember * member; // r0
    class Neighbor * neighbor; // r0
    int j; // r29
    class cXPerson * oldPerson; // r0
}

// Range: 0x8010C4F8 -> 0x8010C544
// this: r31
unsigned char FamilyImpl::TestMember() const {
    // Local variables
    int guid; // r0
}

// Range: 0x8010C544 -> 0x8010C5C0
// this: r29
class FamilyMember * FamilyImpl::GetMemberByGUID(int guid /* r30 */) {
    // Local variables
    const class FamilyMember * i; // r31
}

// Range: 0x8010C5C0 -> 0x8010C63C
// this: r29
unsigned char FamilyImpl::TestMember(int guid /* r30 */) const {
    // Local variables
    const class FamilyMember * i; // r31
}

// Range: 0x8010C63C -> 0x8010C6A0
// this: r30
class FamilyMember * FamilyImpl::GetIndexedMember(int index /* r31 */) {}

// Range: 0x8010C6A0 -> 0x8010C6DC
void FamilyImpl::GetName(class StringBuffer2 * name /* r31 */) {}

// Range: 0x8010C6DC -> 0x8010C6E4
int FamilyImpl::CountMembers() {}

// Range: 0x8010C6E4 -> 0x8010C718
// this: r31
int FamilyImpl::GetFriendCount() {}

// Range: 0x8010C718 -> 0x8010C738
void FamilyImpl::SetFunds() {}

// Range: 0x8010C738 -> 0x8010C758
void FamilyImpl::SetPetPoints() {}

// Range: 0x8010C758 -> 0x8010C78C
// this: r31
int FamilyImpl::GetNetWorth() {}

// Range: 0x8010C78C -> 0x8010C820
// this: r30
unsigned char FamilyImpl::LoadFamily(class iResFile * file /* r31 */) {
    // Local variables
    int version; // r1+0x8
    signed short storedSectionId; // r0
    unsigned char success; // r0
}

// Range: 0x8010C820 -> 0x8010C870
// this: r31
void FamilyImpl::ClearFamily() {}

// Range: 0x8010C870 -> 0x8010CA04
// this: r29
void FamilyImpl::DoStream(class ReconBuffer * rb /* r30 */, int version /* r31 */) {}

// Range: 0x8010CA04 -> 0x8010CAA8
// this: r28
unsigned char FamilyImpl::LoadByResID(class iResFile * file /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    class vector temp; // r1+0x10
    int err; // r0
}

// Range: 0x8010CAA8 -> 0x8010CB38
// this: r29
unsigned char FamilyImpl::SaveFamily(class iResFile * file /* r30 */, int version /* r31 */) {
    // Local variables
    signed short storedSectionId; // r0
    int err; // r0
}

// Range: 0x8010CB38 -> 0x8010CB74
// this: r31
void FamilyImpl::SetName() {}

// Range: 0x8010CB74 -> 0x8010CB7C
unsigned char FamilyImpl::MyDoCommand() {}

// Range: 0x8010CB7C -> 0x8010CC04
// this: r29
void FamilyImpl::AddMember(int guid /* r30 */) {
    // Local variables
    class FamilyMember * i; // r31
}

// Range: 0x8010CC04 -> 0x8010CC84
// this: r29
void FamilyImpl::RemoveMember(int guid /* r30 */) {
    // Local variables
    class FamilyMember * i; // r31
}

// Range: 0x8010CC84 -> 0x8010CD28
// this: r29
void FamilyImpl::RemoveAllMembers() {
    // Local variables
    int nNumMembers; // r0
    int i; // r30
    class FamilyMember * pFamilyMember; // r0
}

// Range: 0x8010CD28 -> 0x8010CD3C
// this: r0
void FamilyMember::DoStream() {}

// Range: 0x8010CD3C -> 0x8010CD9C
// this: r30
void FamilyImpl::GetExportName(class StringBuffer2 * name /* r31 */) {}

// Range: 0x8010CD9C -> 0x8010CE44
// this: r28
signed short FamilyImpl::FindInstancedFamilyMember() {
    // Local variables
    int count; // r0
    int i; // r30
    const class FamilyMember * member; // r0
    int guid; // r29
    class cXObject * obj; // r0
}


