/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\Wii\game_wii_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246654 -> 0x80246654
*/
class PetsHomeButton _wiiHomeButton; // size: 0x8, address: 0x805DBDC0
// total size: 0x4C
class EMsgQueue {
    // Members
protected:
    class ESemaphore m_inSema; // offset 0x0, size 0x18
    class ESemaphore m_outSema; // offset 0x18, size 0x18
    int m_cIn; // offset 0x30, size 0x4
    int m_cOut; // offset 0x34, size 0x4
    int m_size; // offset 0x38, size 0x4
    unsigned int * m_pMsgs; // offset 0x3C, size 0x4
    unsigned char m_autoAllocated; // offset 0x40, size 0x1
    unsigned int m_totalSent; // offset 0x44, size 0x4
    unsigned int m_maxSent; // offset 0x48, size 0x4
};
// total size: 0xC
class EMovie {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int m_MovieX; // offset 0x4, size 0x4
    int m_MovieY; // offset 0x8, size 0x4
};
enum _VITimeToDIM {
    VI_DM_DEFAULT = 0,
    VI_DM_10M = 1,
    VI_DM_15M = 2,
};
static unsigned char backgroundColor[3]; // size: 0x3, address: 0x805DBDC8
// total size: 0x3
struct texel888 {
    // Members
    unsigned char b; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char r; // offset 0x2, size 0x1
};
class TRCHomeButton * m_pInstance; // size: 0x4, address: 0x805DBDCC
struct TRCWiiInit msInitParams; // size: 0xC, address: 0x804A83D4

