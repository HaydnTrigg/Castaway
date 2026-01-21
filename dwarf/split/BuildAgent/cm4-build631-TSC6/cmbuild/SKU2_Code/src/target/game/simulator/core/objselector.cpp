/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objselector.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A2160 -> 0x800A3C80
*/
// Range: 0x800A2160 -> 0x800A2278
// this: r29
ObjSelector::ObjSelector() {}

// Range: 0x800A2278 -> 0x800A2304
// this: r30
ObjSelector::~ObjSelector() {}

// Range: 0x800A2304 -> 0x800A2404
// this: r27
unsigned char ObjSelector::IsPreloaded() const {
    // Local variables
    unsigned char result; // r31
    class ObjectFolder * const pFolder; // r30
    signed short masterID; // r29
    class ObjSelector * pSel; // r28
}

// Range: 0x800A2404 -> 0x800A243C
// this: r31
class iResFile * ObjSelector::loadFile() {}

// Range: 0x800A243C -> 0x800A2498
// this: r31
signed short ObjSelector::GetEffectiveTreeTableID() {
    // Local variables
    const struct ObjDefinition * def; // r0
    class ObjSelector * master; // r0
}

// Range: 0x800A2498 -> 0x800A24E8
// this: r30
unsigned char ObjSelector::TestFromSameFile() const {}

// Range: 0x800A24E8 -> 0x800A2530
// this: r31
class ObjSelector * ObjSelector::GetMasterSelector() {}

// Range: 0x800A2530 -> 0x800A2554
int ObjSelector::GetGUID() {
    // Local variables
    int guid; // r0
}

// Range: 0x800A2554 -> 0x800A2588
class ELocString ObjSelector::GetSelectorCatalogName() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A2588 -> 0x800A25BC
class ELocString ObjSelector::GetSelectorCatalogDescription() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A25BC -> 0x800A25F0
class ELocString ObjSelector::GetSelectorCatalogShortName() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A25F0 -> 0x800A2654
class BString2 & ObjSelector::GetUserName() {
    // References
    // -> static class BString2 empty;
}

// Range: 0x800A2654 -> 0x800A26B8
// this: r30
void ObjSelector::SetUserName(const class BString2 & newName /* r31 */) {}

// Range: 0x800A26B8 -> 0x800A271C
class BString2 & ObjSelector::GetUserLastName() {
    // References
    // -> static class BString2 empty;
}

// Range: 0x800A271C -> 0x800A2780
// this: r30
void ObjSelector::SetUserLastName(const class BString2 & newLastName /* r31 */) {}

// Range: 0x800A2780 -> 0x800A27F0
// this: r30
void ObjSelector::GetUserFullName(class BString2 & outString /* r31 */) {}

// Range: 0x800A27F0 -> 0x800A2878
int ObjSelector::GetNpcShaderId(unsigned char preferLarge /* r31 */) {
    // Local variables
    const struct RelationshipTable * relTableRow; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800A2878 -> 0x800A2AE0
// this: r28
unsigned char ObjSelector::GetThumbnail(class ERShader * * ppShader /* r29 */) {
    // Local variables
    int npcShaderId; // r4
    class ETexture * texture; // r31
    unsigned short resID; // r0
    struct HandleNode * handle; // r30
    class ThumbnailLoader thumb; // r1+0x8
    unsigned char bCreateBlankTexture; // r30
    class cXPerson * pPerson; // r0
    class ESim * pSim; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2AE0 -> 0x800A2BF4
// this: r30
void ObjSelector::SetThumbnail(class ETexture * pTexture /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2BF4 -> 0x800A2D14
// this: r29
void ObjSelector::SetThumbnail() {
    // Local variables
    class ERTexture * pSrc; // r0
    struct ETextureDef td; // r1+0x8
    class ETexture * pDest; // r30

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x800A2D14 -> 0x800A2D84
// this: r31
void ObjSelector::DestroyThumbnail() {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2D84 -> 0x800A2DE4
// this: r30
unsigned char ObjSelector::GetIsMultiTileSubObject() {}

// Range: 0x800A2DE4 -> 0x800A2E14
unsigned char ObjSelector::GetIsPerson() {}

// Range: 0x800A2E14 -> 0x800A2E84
// this: r30
int ObjSelector::GetInitTreeVersion() {
    // Local variables
    class ObjFnTable * fnTab; // r0
    signed short initTreeID; // r0
}

// Range: 0x800A2E84 -> 0x800A2EF4
// this: r30
int ObjSelector::GetMainTreeVersion() {
    // Local variables
    class ObjFnTable * fnTab; // r0
    signed short mainTreeID; // r0
}

// Range: 0x800A2EF4 -> 0x800A3028
int ObjSelector::GetCatalogRating() {}

// Range: 0x800A3028 -> 0x800A30F0
// this: r29
class ObjFnTable * ObjSelector::GetFnTable() {
    // Local variables
    int err; // r0
}

// Range: 0x800A30F0 -> 0x800A31D8
// this: r29
class CatalogResource * ObjSelector::GetSelectorCatalogResource() {
    // Local variables
    signed short catalogID; // r31
    class CatalogResource * cr; // r30
}

// Range: 0x800A31D8 -> 0x800A322C
void ObjSelector::GetShortFilename(class StringBuffer * outName /* r31 */) {
    // Local variables
    class StackString fileName; // r1+0x410
    class StackString shortName; // r1+0x8
}

// Range: 0x800A322C -> 0x800A328C
// this: r31
int ObjSelector::CountTypeAttributes() {
    // Local variables
    int guid; // r4
    class ObjectTypeAttrBlock * block; // r0
}

// Range: 0x800A328C -> 0x800A32EC
// this: r31
signed short * ObjSelector::GetTypeAttributes() {
    // Local variables
    int guid; // r4
    class ObjectTypeAttrBlock * block; // r0
}

// Range: 0x800A32EC -> 0x800A3338
// this: r31
class ITreeTable * ObjSelector::GetTreeTable() {}

// Range: 0x800A3338 -> 0x800A33A0
// this: r30
void ObjSelector::SetSimDescription(class CasSimDescription * pSimDescription /* r31 */) {}

// Range: 0x800A33A0 -> 0x800A33BC
class CasSimDescription * ObjSelector::GetNonCostumedSimDescription() {}

// Range: 0x800A33BC -> 0x800A3464
// this: r30
void ObjSelector::GetSkinName(class EString & strFullName /* r31 */) const {
    // Local variables
    char firstName[32]; // r1+0x28
    char lastName[32]; // r1+0x8
}

// Range: 0x800A3464 -> 0x800A34DC
void ObjSelector::ResetAnimTables() {
    // Local variables
    int i; // r29
}

// Range: 0x800A34DC -> 0x800A3578
// this: r29
class AnimTable * ObjSelector::GetAnimTable(enum tNewAnimTableIndex index /* r30 */) {}

// Range: 0x800A3578 -> 0x800A3624
// this: r29
class AnimTable * ObjSelector::GetSemiAnimTable(enum tNewAnimTableIndex index /* r30 */) {}

// Range: 0x800A3624 -> 0x800A3654
enum tNewAnimTableIndex ObjSelector::GetNewAnimTableIndex() {}

// Range: 0x800A3654 -> 0x800A368C
// this: r31
class AnimTable * ObjSelector::GetAnimTableForSimType() {
    // Local variables
    enum tNewAnimTableIndex index; // r0
}

// Range: 0x800A368C -> 0x800A36C4
// this: r31
class AnimTable * ObjSelector::GetSemiAnimTableForSimType() {
    // Local variables
    enum tNewAnimTableIndex index; // r0
}

// Range: 0x800A36C4 -> 0x800A3A18
// this: r30
void ThumbnailLoader::DoStream(class ReconBuffer * r /* r31 */) {
    // Local variables
    class ETexture * pTexture; // r28
    class ERShader * pShader; // r1+0x10
    unsigned char bTextureSwizzled; // r27
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    signed char * pData; // r0
    unsigned char bSourceWasPs2; // r3
    unsigned char * pix; // r4
    int i; // r5
    int i; // r4
}

// Range: 0x800A3A18 -> 0x800A3C80
class ETexture * ThumbnailLoader::CreateEmptyThumbnail() {
    // Local variables
    struct ETextureDef td; // r1+0x10
    class ETexture * pTexture; // r30
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    int i; // r0
    signed char * pData; // r3

    // References
    // -> class EGraphics * _pGfx;
}


