/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\player.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023F26C -> 0x8023F418
*/
// Range: 0x8023F26C -> 0x8023F27C
Player::Player() {}

// Range: 0x8023F27C -> 0x8023F2FC
// this: r31
void Player::Reset() {}

// Range: 0x8023F2FC -> 0x8023F308
class EVec3 & Player::GetInteractorColor() {
    // References
    // -> static class EVec3 s_interactorColor;
}

// Range: 0x8023F308 -> 0x8023F3C4
// this: r27
class Neighbor * Player::GetPrimaryNeighbor() {
    // Local variables
    class Neighborhood * pNeighborhood; // r31
    class Family * pFamily; // r30
    class Neighbor * pNeighbor; // r29
    const class FamilyMember * pFamilyMember; // r0
    int i; // r28

    // References
    // -> class GameData _gd;
}

// Range: 0x8023F3C4 -> 0x8023F418
class Neighbor * Player::GetSelectedNeighbor() {
    // Local variables
    class cXPerson * pPerson; // r0

    // References
    // -> class EGlobal _globals;
}


