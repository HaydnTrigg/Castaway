/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\prgtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BEFFC -> 0x801BFDEC
*/
// Range: 0x801BEFFC -> 0x801BF0A0
int GetMaxedCareers() {
    // Local variables
    int numMaxed; // r30
    class PlayerFamilyImpl * family; // r31
    int i; // r29

    // References
    // -> class GameData _gd;
}

// Range: 0x801BF0A0 -> 0x801BF138
int GetFamilyTotalPromotions() {
    // Local variables
    class Family * pFamily; // r31
    int total; // r30
    int i; // r29

    // References
    // -> class GameData _gd;
}

// Range: 0x801BF138 -> 0x801BF2AC
int GetIndividualTotalSkillPoints() {
    // Local variables
    class Neighbor * n; // r30
    int result; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801BF2AC -> 0x801BF3D4
int GetIndividualMaxedSkills() {
    // Local variables
    class Neighbor * n; // r28
    int result; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801BF3D4 -> 0x801BF3DC
int GetMaxedCareersPossible() {}

// Range: 0x801BF3DC -> 0x801BF3E4
int GetFamilyTotalPromotionsPossible() {}

// Range: 0x801BF3E4 -> 0x801BF3EC
int GetIndividualTotalSkillPointsPossible() {}

// Range: 0x801BF3EC -> 0x801BF3F4
int GetIndividualMaxedSkillsPossible() {}

// Range: 0x801BF3F4 -> 0x801BF72C
// this: r29
PRGTarget::PRGTarget(unsigned char load_flash /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const PRG_TabIcon0;
    // -> static const char * const PRG_StatVal12;
    // -> static const char * const PRG_StatVal11;
    // -> static const char * const PRG_StatVal10;
    // -> static const char * const PRG_StatVal9;
    // -> static const char * const PRG_StatVal8;
    // -> static const char * const PRG_StatVal7;
    // -> static const char * const PRG_StatVal6;
    // -> static const char * const PRG_StatVal5;
    // -> static const char * const PRG_StatVal4;
    // -> static const char * const PRG_StatVal3;
    // -> static const char * const PRG_StatVal2;
    // -> static const char * const PRG_StatVal1;
    // -> static const char * const PRG_StatVal0;
    // -> static const char * const PRG_Stat12;
    // -> static const char * const PRG_Stat11;
    // -> static const char * const PRG_Stat10;
    // -> static const char * const PRG_Stat9;
    // -> static const char * const PRG_Stat8;
    // -> static const char * const PRG_Stat7;
    // -> static const char * const PRG_Stat6;
    // -> static const char * const PRG_Stat5;
    // -> static const char * const PRG_Stat4;
    // -> static const char * const PRG_Stat3;
    // -> static const char * const PRG_Stat2;
    // -> static const char * const PRG_Stat1;
    // -> static const char * const PRG_Stat0;
    // -> static const char * const PRG_Section2;
    // -> static const char * const PRG_Section1;
    // -> static const char * const PRG_Section0;
    // -> const char * PRG_CLOSE_MENU;
    // -> static const char * const PRG_CANCEL_BUTTON;
    // -> static const char * const PRG_Sections;
    // -> static const char * const PRG_exists;
    // -> struct [anonymous] __vt__9PRGTarget;
}

// Range: 0x801BF72C -> 0x801BF7D8
// this: r30
PRGTarget::~PRGTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9PRGTarget;
}

// Range: 0x801BF7D8 -> 0x801BF87C
// this: r29
void PRGTarget::SetVariable(const char * szCommand /* r30 */, const char * szParams /* r31 */) {
    // References
    // -> static const char * const PRG_CANCEL_BUTTON;
    // -> const char * PRG_CLOSE_MENU;
}

// Range: 0x801BF87C -> 0x801BFCC8
// this: r27
unsigned short * PRGTarget::GetLocalizable(const char * szVar /* r28 */) {
    // Local variables
    unsigned short * wideStr; // r31
    const unsigned short * name; // r0
    int totalScore; // r29
    class StackString2 monStr; // r1+0xB8
    unsigned short * w_monStr; // r0
    int n; // r1+0x30
    int n; // r1+0x2C
    int statValue; // r29
    int possible; // r0
    unsigned short possibleStr[64]; // r1+0x38
    int n; // r1+0x28
    const unsigned short * name; // r0
    unsigned short * outString; // r29

    // References
    // -> struct PersonalInfoStat m_StatusFetchers[13];
    // -> class EGlobal _globals;
}

// Range: 0x801BFCC8 -> 0x801BFDAC
// this: r28
char * PRGTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30

    // References
    // -> static const char * const PRG_exists;
    // -> static const char * const PRG_Sections;
}

// Range: 0x801BFDAC -> 0x801BFDB4
void PRGTarget::OnCancelKeyPressed() {}

// Range: 0x801BFDB4 -> 0x801BFDE4
void PRGTarget::SetTabState() {
    // References
    // -> static const char * const PRG_TabIcon0;
}

// Range: 0x801BFDE4 -> 0x801BFDEC
void PRGTarget::Shutdown() {}


