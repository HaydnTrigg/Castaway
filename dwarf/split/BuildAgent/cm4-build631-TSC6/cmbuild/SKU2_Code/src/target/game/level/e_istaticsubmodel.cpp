/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_istaticsubmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80088E20 -> 0x80089FD8
*/
// Range: 0x80088E20 -> 0x80088E24
class EStream & operator<<() {}

// Range: 0x80088E24 -> 0x80088E6C
class EStream & operator>>(class EStream & s /* r30 */, class EIStaticSubModel * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x80088E6C -> 0x80088EB4
class EFile & operator>>(class EFile & s /* r30 */, class EIStaticSubModel * & pD /* r31 */) {
    // Local variables
    class EStorable * pStorable; // r1+0x8
}

// Range: 0x80088EB4 -> 0x80088F3C
// this: r30
EIStaticSubModel::EIStaticSubModel() {
    // References
    // -> struct [anonymous] __vt__16EIStaticSubModel;
}

// Range: 0x80088F3C -> 0x80088FC4
// this: r30
EIStaticSubModel::~EIStaticSubModel() {
    // References
    // -> struct [anonymous] __vt__16EIStaticSubModel;
}

// Range: 0x80088FC4 -> 0x80088FC8
void EIStaticSubModel::Deallocate() {}

// Range: 0x80088FC8 -> 0x8008901C
// this: r30
void EIStaticSubModel::Write(class EStream & s /* r31 */) {}

// Range: 0x8008901C -> 0x80089094
// this: r30
void EIStaticSubModel::Read(class EStream & s /* r31 */) {}

// Range: 0x80089094 -> 0x8008910C
// this: r30
void EIStaticSubModel::Load(class EFile & s /* r31 */) {}

// Range: 0x8008910C -> 0x8008911C
// this: r5
void EIStaticSubModel::GetBoundSphere() {}

// Range: 0x8008911C -> 0x800891BC
// this: r29
void EIStaticSubModel::DeallocateModel() {
    // Local variables
    int i; // r30
}

// Range: 0x800891BC -> 0x8008920C
// this: r31
void EIStaticSubModel::SetupModel() {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8008920C -> 0x8008932C
// this: r25
void EIStaticSubModel::BuildDigests() {
    // Local variables
    class ESubModel * pSubModel; // r29
    class DigestGeomShaderPtr * pDigest; // r28
    int cShader; // r27
    class ESubModelShader * pSubModelShader; // r26

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8008932C -> 0x8008933C
// this: r5
unsigned int EIStaticSubModel::VisibilityTest() {}

// Range: 0x8008933C -> 0x80089508
// this: r28
void EIStaticSubModel::DrawWithShadow(struct ELevelDrawData & renderParam /* r29 */, class EMat4 & shadowMatrix /* r31 */, class E3DWindow * pShadowWin /* r30 */, float shadowAlpha /* f31 */) {
    // Local variables
    unsigned char bIsSubModelLevel; // r0
    class TArray smsIdArr; // r1+0x14
    class TArray smsCenters; // r1+0x8
    unsigned int numVisibleDigests; // r0
    unsigned int i; // r30
    const class DigestGeomShaderPtr * pDigest; // r4
    const class DigestGeomShaderPtr * pDigest; // r30
    int nDigest; // r31

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80089508 -> 0x80089808
// this: r28
void EIStaticSubModel::Draw(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    unsigned char isAlphaFadeOn; // r30
    class EOrderTableData otd; // r1+0x8
    const class DigestGeomShaderPtr * pDigest; // r26
    int nDigest; // r25
    unsigned char bIsSubModelLevel; // r0
    unsigned int numVisibleDigests; // r0
    unsigned int i; // r25
    const class DigestGeomShaderPtr * pDigest; // r0
    unsigned int i; // r25
    const class DigestGeomShaderPtr * pDigest; // r26
    unsigned int i; // r25
    const class DigestGeomShaderPtr * pDigest; // r0

    // References
    // -> static class EVec3 s_vDistantPointToForceSkySortOrder;
}

// Range: 0x80089808 -> 0x80089868
// this: r30
void EIStaticSubModel::DrawWireFrame(class ERC * prc /* r31 */) {}

// Range: 0x80089868 -> 0x800898E4
void EIStaticSubModel::SkyOrderTableCallback(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    class EDL * pDL; // r31
    class ERShader * pShader; // r30
}

// Range: 0x800898E4 -> 0x80089A4C
void EIStaticSubModel::FaceOrderTableCallback(struct ELevelDrawData & renderParam /* r27 */, class EOrderTableData * otd /* r28 */) {
    // Local variables
    class EIStaticSubModel * pThis; // r31
    class ERShader * pShader; // r30
    class ERC * prc; // r29
    class EMat4 matrix; // r1+0xA0
    class EVec3 pos; // r1+0x14
    class EMat4 v2wRot; // r1+0x60
    class EDL * pDL; // r31
}

// Range: 0x80089A4C -> 0x80089AD4
void EIStaticSubModel::OrderTableCallback(struct ELevelDrawData & renderParam /* r28 */) {
    // Local variables
    class ERC * prc; // r31
    class EDL * pDL; // r30
    class ERShader * shader; // r29
}

// Range: 0x80089AD4 -> 0x80089ADC
unsigned char EIStaticSubModel::HasModifiableColor() {}

// Range: 0x80089ADC -> 0x80089AE4
void EIStaticSubModel::ModifyColor() {}

// Range: 0x80089AE4 -> 0x80089AEC
unsigned int EIStaticSubModel::GetModifiableColor() {}

// Range: 0x80089AEC -> 0x80089B94
// this: r29
void EIStaticSubModel::RebuildShaders() {
    // Local variables
    int i; // r30
}

// Range: 0x80089B94 -> 0x80089BA4
void EIStaticSubModel::RealizeShaderTuning() {}

// Range: 0x80089BA4 -> 0x80089C3C
// this: r30
unsigned char EIStaticSubModel::IsLevel() {
    // Local variables
    class InstanceData * pInstanceData; // r0
    unsigned int iSubModel; // r0
    class ESubModel * pSubModel; // r0
}

// Range: 0x80089C3C -> 0x80089D00
// this: r28
void EIStaticSubModel::GetSubModelShaderIndexList(class TArray & smsIdArr /* r29 */, class E3DWindow * pWin /* r30 */) {
    // Local variables
    unsigned int iSubModel; // r31
    class InstanceData * pInstanceData; // r0
    class ESubModel * pSubModel; // r0
    class RBIteratorPtrType * iter; // r31
    class EQuadTree * pTree; // r0
}

// Range: 0x80089D00 -> 0x80089DC4
// this: r26
void EIStaticSubModel::GetSubModelShaderIndexList(class TArray & smsIdArr /* r27 */, class TArray & smsCheckArr /* r28 */, class E3DWindow * pWin /* r29 */, class TArray & smsCenters /* r30 */) {
    // Local variables
    unsigned int iSubModel; // r31
    class InstanceData * pInstanceData; // r0
    class ESubModel * pSubModel; // r0
    class RBIteratorPtrType * iter; // r31
    class EQuadTree * pTree; // r0
}

// Range: 0x80089DC4 -> 0x80089DE8
char * EIStaticSubModel::GetInstName() {
    // Local variables
    class ERModel * model; // r3
}

// Range: 0x80089DE8 -> 0x80089EBC
// this: r28
void EIStaticSubModel::DrawBeforeLevel(struct ELevelDrawData & renderParam /* r29 */, class EOrderTableData & otd /* r30 */, const class DigestGeomShaderPtr * pDigest /* r31 */) {}

// Range: 0x80089EBC -> 0x80089FD8
// this: r26
void EIStaticSubModel::DrawNormal(struct ELevelDrawData & renderParam /* r27 */, class EOrderTableData & otd /* r28 */, const class DigestGeomShaderPtr * pDigest /* r29 */, unsigned char isAlphaFadeOn /* r30 */) {
    // Local variables
    class ERShader * pShader; // r31
    unsigned char bSort; // r31
}


