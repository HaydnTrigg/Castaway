/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\csptarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A3998 -> 0x801A4F14
*/
// Range: 0x801A3998 -> 0x801A3A20
static unsigned char make_number_string(unsigned short * pDst /* r31 */) {
    // Local variables
    char tempbuff[32]; // r1+0x8
    int len; // r0
}

// Range: 0x801A3A20 -> 0x801A3ED4
// this: r29
CSPTarget::CSPTarget(enum eTabs currentTab /* r30 */, unsigned char load_flash /* r31 */) {
    // Local variables
    class cXPerson * person; // r3

    // References
    // -> class EGlobal _globals;
    // -> static const char * const CSP_SkillIcon5;
    // -> static const char * const CSP_SkillIcon4;
    // -> static const char * const CSP_SkillIcon3;
    // -> static const char * const CSP_SkillIcon2;
    // -> static const char * const CSP_SkillIcon1;
    // -> static const char * const CSP_SkillIcon0;
    // -> static unsigned int CSP_SkillIconIds[6];
    // -> static const char * const CSP_TabIcon2;
    // -> static const char * const CSP_TabIcon1;
    // -> static unsigned int CSP_TabIconIds[3];
    // -> static const char * const CSP_TabIcon0;
    // -> static const char * const CSP_GenCode;
    // -> static const char * const CSP_ZodiacSignName;
    // -> static const char * const CSP_SkillValueText6;
    // -> static const char * const CSP_SkillValueText5;
    // -> static const char * const CSP_SkillValueText4;
    // -> static const char * const CSP_SkillValueText3;
    // -> static const char * const CSP_SkillValueText2;
    // -> static const char * const CSP_SkillValueText1;
    // -> static const char * const CSP_SkillValueText0;
    // -> static const char * const CSP_SkillName6;
    // -> static const char * const CSP_SkillName5;
    // -> static const char * const CSP_SkillName4;
    // -> static const char * const CSP_SkillName3;
    // -> static const char * const CSP_SkillName2;
    // -> static const char * const CSP_SkillName1;
    // -> static const char * const CSP_SkillName0;
    // -> static const char * const CSP_JobDescription;
    // -> static const char * const CSP_JobTime;
    // -> static const char * const CSP_JobName;
    // -> static const char * const CSP_ShowHelp;
    // -> static const char * const CSP_CurrTab;
    // -> static const char * const CSP_Cancel;
    // -> static const char * const CSP_TraitVal4;
    // -> static const char * const CSP_TraitVal3;
    // -> static const char * const CSP_TraitVal2;
    // -> static const char * const CSP_TraitVal1;
    // -> static const char * const CSP_TraitVal0;
    // -> static const char * const CSP_IsMale;
    // -> static const char * const CSP_SkillValue6;
    // -> static const char * const CSP_SkillValue5;
    // -> static const char * const CSP_SkillValue4;
    // -> static const char * const CSP_SkillValue3;
    // -> static const char * const CSP_SkillValue2;
    // -> static const char * const CSP_SkillValue1;
    // -> static const char * const CSP_SkillValue0;
    // -> static const char * const CSP_HasJob;
    // -> static const char * const CSP_CancelEnabled;
    // -> static const char * const CSP_exists;
    // -> struct [anonymous] __vt__9CSPTarget;
}

// Range: 0x801A3ED4 -> 0x801A3FAC
// this: r30
CSPTarget::~CSPTarget() {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9CSPTarget;
}

// Range: 0x801A3FAC -> 0x801A4068
// this: r29
void CSPTarget::SetVariable(const char * szCommand /* r30 */, const char * szParams /* r31 */) {
    // Local variables
    int currTab; // r0

    // References
    // -> static const char * const CSP_CurrTab;
    // -> static const char * const CSP_ShowHelp;
    // -> class EGlobal _globals;
    // -> static const char * const CSP_Cancel;
}

// Range: 0x801A4068 -> 0x801A4318
// this: r29
char * CSPTarget::GetVariable(const char * szVar /* r28 */) {
    // Local variables
    char * retStr; // r31
    int skillId; // r1+0xC
    int val; // r5
    int id; // r1+0x8
    int val; // r27
    int paws[11]; // r1+0x10
    unsigned char male; // r0

    // References
    // -> static const char * const CSP_exists;
    // -> static const char * const CSP_CancelEnabled;
    // -> class EGlobal _globals;
    // -> static const char * const CSP_IsMale;
    // -> static const char * const CSP_HasJob;
}

// Range: 0x801A4318 -> 0x801A49EC
// this: r28
unsigned short * CSPTarget::GetLocalizable(const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r31
    int skillId; // r1+0x6C
    int skillId; // r1+0x68
    int val; // r3
    unsigned short * outString; // r30

    // References
    // -> static const char * const CSP_ZodiacSignName;
    // -> static const char * const CSP_JobDescription;
    // -> static const char * const CSP_JobTime;
    // -> class EGlobal _globals;
    // -> static const char * const CSP_JobName;
}

// Range: 0x801A49EC -> 0x801A4B4C
// this: r29
void CSPTarget::ChangeSelectedTab(enum eTabs newTab /* r30 */, unsigned char bHI /* r31 */) {
    // References
    // -> static const char * const CSP_TabIcon2;
    // -> static const char * const CSP_TabIcon1;
    // -> static const char * const CSP_TabIcon0;
}

// Range: 0x801A4B4C -> 0x801A4C34
// this: r30
void CSPTarget::SetupJob(class Neighbor * n /* r31 */) {
    // References
    // -> static const char * const CSP_JobIcon;
    // -> static unsigned int CSP_JobIconIds[4];
}

// Range: 0x801A4C34 -> 0x801A4D8C
// this: r29
void CSPTarget::SetupSkills(const class Neighbor * n /* r30 */) {
    // Local variables
    int skillNum; // r4
}

// Range: 0x801A4D8C -> 0x801A4F10
// this: r31
void CSPTarget::SetupPersonality(class Neighbor * n /* r30 */) {
    // Local variables
    signed short * neighborPersonData; // r0

    // References
    // -> static const char * const CSP_ZodiacIcon;
    // -> static unsigned int CSP_ZodiacIconIds[13];
}

// Range: 0x801A4F10 -> 0x801A4F14
void CSPTarget::onHelpDialogSelection() {}


