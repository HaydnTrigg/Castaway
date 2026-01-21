/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\passiveinfluencemap.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001FEF0 -> 0x8001FF08
*/
// Range: 0x8001FEF0 -> 0x8001FEF8
class cXObject * PassiveInfluencePerson::GetObject() {}

// Range: 0x8001FEF8 -> 0x8001FF00
struct AnimRef * PassiveInfluencePerson::GetSkillName() {}

// Range: 0x8001FF00 -> 0x8001FF08
signed char PassiveInfluencePerson::GetAnimation() {}


// Range: 0x800BA9B4 -> 0x800BA9BC
class cXObject * PassiveInfluenceObject::GetObject() {}

// Range: 0x800BA9BC -> 0x800BA9C4
class vector & PassiveInfluenceTarget::GetTileVector() {}

// Range: 0x800BA9C4 -> 0x800BA9CC
class cXObject * PassiveInfluenceTarget::GetObject() {}

// Range: 0x800BA9CC -> 0x800BAA0C
// this: r31
PassiveInfluenceItem::~PassiveInfluenceItem() {}

// Range: 0x800BAA0C -> 0x800BAAC0
// this: r30
PassiveInfluencePortal::~PassiveInfluencePortal() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> class vector m_TileVector;
    // -> struct [anonymous] __vt__22PassiveInfluencePortal;
}

// Range: 0x800BAAC0 -> 0x800BABA4
// this: r29
PassiveInfluenceMovable::~PassiveInfluenceMovable() {
    // Local variables
    class vector temp; // r1+0x20
    class vector temp; // r1+0x10

    // References
    // -> class vector m_TileVector;
    // -> struct [anonymous] __vt__23PassiveInfluenceMovable;
}

// Range: 0x800BABA4 -> 0x800BAC4C
// this: r30
PassiveInfluenceObject::~PassiveInfluenceObject() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> struct [anonymous] __vt__22PassiveInfluenceObject;
}

// Range: 0x800BAC4C -> 0x800BAD38
// this: r29
PassiveInfluencePerson::~PassiveInfluencePerson() {
    // Local variables
    class vector temp; // r1+0x20
    class vector temp; // r1+0x10

    // References
    // -> struct [anonymous] __vt__22PassiveInfluencePerson;
}

// Range: 0x800BAD38 -> 0x800BADF4
// this: r30
PassiveInfluenceTarget::~PassiveInfluenceTarget() {
    // Local variables
    class vector temp; // r1+0x10

    // References
    // -> struct [anonymous] __vt__22PassiveInfluenceTarget;
}

// Range: 0x800BADF4 -> 0x800BADFC
int PassiveInfluenceMovable::GetRadius() {}

// Range: 0x800BADFC -> 0x800BAE04
class cXObject * PassiveInfluenceMovable::GetObject() {}

// Range: 0x800BAE04 -> 0x800BAE0C
int PassiveInfluencePortal::GetTextRadius() {}

// Range: 0x800BAE0C -> 0x800BAE14
int PassiveInfluencePortal::GetTriggerRadius() {}

// Range: 0x800BAE14 -> 0x800BAE1C
class cXObject * PassiveInfluencePortal::GetObject() {}

// Range: 0x800BAE1C -> 0x800BAE28
unsigned char PassiveInfluencePerson::NoEffectToHolder() {}

// Range: 0x800BAE28 -> 0x800BAE34
unsigned char PassiveInfluencePerson::NoEffectWhenHeld() {}

// Range: 0x800BAE34 -> 0x800BAE3C
int PassiveInfluenceMovable::GetType() {}

// Range: 0x800BAE3C -> 0x800BAE48
class vector & PassiveInfluenceMovable::GetTileVector() {
    // References
    // -> class vector m_TileVector;
}

// Range: 0x800BAE48 -> 0x800BAE50
int PassiveInfluencePerson::GetType() {}

// Range: 0x800BAE50 -> 0x800BAE58
class vector & PassiveInfluencePerson::GetTileVector() {}

// Range: 0x800BAE58 -> 0x800BAE60
int PassiveInfluenceObject::GetType() {}

// Range: 0x800BAE60 -> 0x800BAE68
class vector & PassiveInfluenceObject::GetTileVector() {}

// Range: 0x800BAE68 -> 0x800BAE70
int PassiveInfluenceTarget::GetType() {}

// Range: 0x800BAE70 -> 0x800BAE78
int PassiveInfluencePortal::GetType() {}

// Range: 0x800BAE78 -> 0x800BAE84
class vector & PassiveInfluencePortal::GetTileVector() {
    // References
    // -> class vector m_TileVector;
}


