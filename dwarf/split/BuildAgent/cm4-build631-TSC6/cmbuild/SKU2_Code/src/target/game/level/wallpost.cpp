/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\wallpost.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096C68 -> 0x80097954
*/
// Range: 0x80096C68 -> 0x80096D58
void WallPostCollection::Initialize() {}

// Range: 0x80096D58 -> 0x80096DE4
// this: r28
void WallPostCollection::Deallocate() {
    // Local variables
    int i; // r29
}

// Range: 0x80096DE4 -> 0x80096E5C
// this: r29
void WallPostCollection::Update() {
    // Local variables
    int i; // r30
}

// Range: 0x80096E5C -> 0x8009706C
// this: r24
void WallPostCollection::SetPost(const class EVec3 & pos /* r25 */, enum PostHeight requestedHeight /* r26 */, enum PostStyle requestedStyle /* r27 */, class cXObject * obj /* r28 */) {
    // Local variables
    unsigned char x; // r30
    unsigned char y; // r29
    class WallPostInstance * pWpi; // r31
}

// Range: 0x8009706C -> 0x80097228
void WallPostCollection::FindRoofBounds(class cXObject * obj /* r31 */, class EBound3 & bounds /* r30 */) {
    // Local variables
    class cXMTObject * pMTObj; // r31
    class FTilePt ftilept; // r1+0x8
    float fy; // f0
    float fx; // f0
}

// Range: 0x80097228 -> 0x80097570
void WallPostCollection::FindWallBounds(class cXObject * obj /* r29 */, class EBound3 & bounds /* r31 */) {
    // Local variables
    signed short dir; // r0
    float posX; // f0
    float posY; // f0
}

// Range: 0x80097570 -> 0x800978B8
// this: r30
void WallPostCollection::UpdateWallPosts(class cXObject * pDeletedObject /* r31 */) {
    // Local variables
    class EIObjectMan * pObjMan; // r28
    class TNodeList allObjects; // r1+0x14
    int i; // r27
    class NLIteratorPtrType * i; // r27
    class ISimInstance * instance; // r0
    class cXObject * obj; // r28
    enum PostStyle style; // r29
    class EBound3 bounds; // r1+0x38
    class EVec3 pos; // r1+0x8
    enum PostHeight height; // r26
    class EBound3 bounds; // r1+0x20
    int i; // r26
    class WallPostInstance * pWpi; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800978B8 -> 0x80097954
// this: r30
unsigned int WallPostInstance::VisibilityTest(class E3DWindow & win /* r31 */) {
    // Local variables
    class EBound3 bPos; // r1+0x8
    int lotId; // r0
    float k_z; // f2

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
}


