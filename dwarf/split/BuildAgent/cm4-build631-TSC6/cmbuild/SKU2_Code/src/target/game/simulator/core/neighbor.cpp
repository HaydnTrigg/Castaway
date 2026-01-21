/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\neighbor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80125D5C -> 0x80127AA8
*/
// Range: 0x80125D5C -> 0x80125F00
void SetInterests(signed short * neighborPersonData /* r27 */) {
    // Local variables
    int numInterestsPerCategory[4]; // r1+0x8
    signed short interestLevels[14]; // r1+0x18
    int interestIndexes[14]; // r1+0x38
    int i; // r0
    int j; // r20
    int nCurrentIndex; // r28
    int nHighIndex; // r20

    // References
    // -> static signed short kInterestCutoffs[4];
    // -> int sInterestMap[14];
}

// Range: 0x80125F00 -> 0x80125FA4
// this: r30
ENeighborhoodCustomChar::ENeighborhoodCustomChar() {
    // References
    // -> struct [anonymous] __vt__23ENeighborhoodCustomChar;
}

// Range: 0x80125FFC -> 0x80126090
// this: r30
ENeighborhoodCustomChar::~ENeighborhoodCustomChar() {
    // References
    // -> struct [anonymous] __vt__23ENeighborhoodCustomChar;
}

// Range: 0x80126090 -> 0x801260EC
// this: r30
void ENeighborhoodCustomChar::SetCustomSimDescription(class CasSimDescription * pSimDesc /* r31 */) {}

// Range: 0x801260EC -> 0x801260F4
class CasSimDescription & ENeighborhoodCustomChar::GetCustomSimDescription() {}

// Range: 0x801260F4 -> 0x80126194
// this: r28
void ENeighborhoodCustomChar::CopyFromNeighborData(class Neighbor * pNeighbor /* r29 */, int nEndField /* r30 */) {
    // Local variables
    int i; // r1+0x8
}

// Range: 0x80126194 -> 0x80126228
// this: r29
void ENeighborhoodCustomChar::CopyToNeighborData(class Neighbor * pNeighbor /* r30 */, int nEndField /* r31 */) {
    // Local variables
    int i; // r1+0x8
}

// Range: 0x80126228 -> 0x80126358
static void GatherRelationshipLevelValues() {
    // Local variables
    class ObjectFolder * objFolder; // r29
    class ObjectDataBehaviorConstants * bc; // r28
    int i; // r27

    // References
    // -> int sLoverMemoryThreshold;
    // -> int sCrushMemoryThreshold;
    // -> int sRelationshipLevelMax[10];
    // -> int sRelationshipLevelMin[10];
}

// Range: 0x80126358 -> 0x801263BC
// this: r31
Neighbor::Neighbor() {}

// Range: 0x801263BC -> 0x80126414
// this: r30
Neighbor::~Neighbor() {}

// Range: 0x80126414 -> 0x801264C8
// this: r30
Neighbor::Neighbor(class ObjSelector * sel /* r31 */) {}

// Range: 0x801264C8 -> 0x801264D0
class RelMatrix & Neighbor::GetRelations() {}

// Range: 0x801264D0 -> 0x801264D8
int Neighbor::GetLatestPersDataVersion() {}

// Range: 0x801264D8 -> 0x80126828
// this: r28
void Neighbor::DoStream(class ReconBuffer * r /* r29 */, int version /* r30 */) {
    // Local variables
    int nver; // r1+0x24
    int dummy_StartedStoryTreeFlags; // r1+0x20
    int oldNumBookmarks; // r1+0x1C
    int oldNumWantFearSlots; // r1+0x18
    int i; // r31
    signed short dummy; // r1+0x8
    int * dummyIndices; // r31
    class BString2 chimpName; // r1+0x14
    class BString2 defaultChimpName; // r1+0x10
    class BString2 chimpName; // r1+0xC
}

// Range: 0x80126828 -> 0x80126830
int Neighbor::GetGUID() {}

// Range: 0x80126830 -> 0x801268C8
// this: r28
class Family * Neighbor::GetFamily() {
    // Local variables
    class Family * result; // r30
    int numFamilies; // r0
    int i; // r29
}

// Range: 0x801268C8 -> 0x80126910
unsigned char Neighbor::IsCharacter() {}

// Range: 0x80126910 -> 0x80126A40
// this: r28
void Neighbor::RecalculateRelationshipData() {
    // Local variables
    signed short neighborID; // r31
    class Neighbor * pOtherNeighbor; // r30
    class RelMatrix & ourMatrix; // r29
    int theirKey; // r30
}

// Range: 0x80126A40 -> 0x80126B10
unsigned char Neighbor::RelCountsAsRel() {}

// Range: 0x80126B10 -> 0x80126CB8
int Neighbor::CalculateRelationshipLevel(int relValue /* r31 */, int memoryFullValue /* r30 */) {
    // Local variables
    int type; // r0

    // References
    // -> int sCrushMemoryThreshold;
    // -> int sLoverMemoryThreshold;
    // -> int sRelationshipLevelMax[10];
    // -> int sRelationshipLevelMin[10];
    // -> static unsigned char initialized;
}

// Range: 0x80126CB8 -> 0x80126D9C
// this: r27
int Neighbor::CalculateRelationshipLevel(class Neighbor * pNeighbor /* r28 */) const {
    // Local variables
    int numValues; // r0
    int relValue; // r0
    int memoryFullValue; // r29
}

// Range: 0x80126D9C -> 0x80126ED4
int Neighbor::CountRelationshipsOfType(enum tRelationshipType relTypeToTest /* r23 */, unsigned char simsOnly /* r24 */) {
    // Local variables
    int count; // r29
    class RelMatrix & relMatrix; // r28
    int numTotalRelations; // r0
    int i; // r27
    int key; // r26
    int numValues; // r0
    int relValue; // r0
    int memoryFullValue; // r25
    enum tRelationshipType relType; // r0
    class Neighbor * pNeighbor; // r0
}

// Range: 0x80126ED4 -> 0x80126F10
// this: r31
signed short Neighbor::GetFriendCount() {}

// Range: 0x80126F10 -> 0x80126F84
// this: r30
int Neighbor::GetMiscRelFlags(signed short otherNeighborID /* r31 */) const {
    // Local variables
    int arraySize; // r0
}

// Range: 0x80126F84 -> 0x80126FE0
// this: r30
unsigned char Neighbor::GetMiscRelFlag(int flag /* r31 */) const {
    // Local variables
    int value; // r0
}

// Range: 0x80126FE0 -> 0x80127050
// this: r30
unsigned char Neighbor::IsMarriedTo(class Neighbor * pOtherNeighbor /* r31 */) const {}

// Range: 0x80127050 -> 0x801270C4
// this: r30
unsigned char Neighbor::IsMasterTo(class Neighbor * pDog /* r31 */) const {}

// Range: 0x801270C4 -> 0x80127138
// this: r30
unsigned char Neighbor::IsMineTo(class Neighbor * pCat /* r31 */) const {}

// Range: 0x80127138 -> 0x8012719C
// this: r30
unsigned char Neighbor::IsPackTo(class Neighbor * pDog /* r31 */) const {}

// Range: 0x8012719C -> 0x80127200
// this: r30
unsigned char Neighbor::GetRelationship(int & value /* r31 */) const {
    // Local variables
    int key; // r0
}

// Range: 0x80127200 -> 0x80127290
// this: r29
unsigned char Neighbor::GetRelationshipById(int otherNeighborId /* r30 */, int & value /* r31 */) const {
    // Local variables
    int size; // r0
}

// Range: 0x80127290 -> 0x801272A4
void Neighbor::RemoveAllRelationships() {}

// Range: 0x801272A4 -> 0x801272B4
void Neighbor::SetSimType(enum tSimType type /* r0 */) {}

// Range: 0x801272B4 -> 0x801272DC
enum tSimType Neighbor::GetSimType() {}

// Range: 0x801272DC -> 0x80127318
unsigned char Neighbor::IsPet() {
    // Local variables
    enum tSimType type; // r0
}

// Range: 0x80127318 -> 0x80127354
unsigned char Neighbor::IsDog() {
    // Local variables
    enum tSimType type; // r0
}

// Range: 0x80127354 -> 0x80127380
unsigned char Neighbor::IsCat() {}

// Range: 0x80127380 -> 0x801273AC
unsigned char Neighbor::IsChimp() {}

// Range: 0x801273AC -> 0x801273D8
unsigned char Neighbor::IsBoar() {}

// Range: 0x801273D8 -> 0x80127524
// this: r29
void Neighbor::LoadFromCharacter(class ENeighborhoodCustomChar & data /* r30 */) {
    // Local variables
    class CasSimDescription & srcSimDesc; // r31
}

// Range: 0x80127524 -> 0x801276A0
// this: r29
void Neighbor::SaveToCharacter(class ENeighborhoodCustomChar & data /* r30 */) {
    // Local variables
    const class BString2 & name; // r0
    const class BString2 & lastName; // r0
    class ERShader * thumbShader; // r1+0x8
}

// Range: 0x801276A0 -> 0x801276DC
// this: r31
void Neighbor::ResetInterests() {}

// Range: 0x801276DC -> 0x8012780C
// this: r31
void Neighbor::InitDefaultValues() {}

// Range: 0x8012780C -> 0x80127844
unsigned char Neighbor::isValidNeighborPersonDataField() {}

// Range: 0x80127844 -> 0x80127858
int Neighbor::TranslasteToNewNeighborPersonDataIndex() {
    // References
    // -> signed char sOldNeighborPersondataIndexArray[80];
}

// Range: 0x80127858 -> 0x801279E8
int Neighbor::TranslasteToOldNeighborPersonDataIndex() {}

// Range: 0x801279E8 -> 0x801279F8
void Neighbor::SetNeighborPersonData() {}

// Range: 0x801279F8 -> 0x80127AA8
// this: r31
unsigned char Neighbor::UpdateSimModel(class BitFlags & simDamageResult /* r30 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r0
    class cXPerson * pPerson; // r0
    class ESim * pESim; // r31
}


