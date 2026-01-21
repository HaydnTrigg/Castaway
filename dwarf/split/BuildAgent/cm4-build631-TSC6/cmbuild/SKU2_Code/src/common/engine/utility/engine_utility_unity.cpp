/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\engine_utility_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F18CC -> 0x802F18CC
*/
// total size: 0x84
class EControllerData {
    // Members
protected:
    unsigned int buttons; // offset 0x0, size 0x4
    unsigned int lastButtons; // offset 0x4, size 0x4
    unsigned int wasDown; // offset 0x8, size 0x4
    unsigned int lastWasDown; // offset 0xC, size 0x4
    unsigned int wasUp; // offset 0x10, size 0x4
    unsigned int lastWasUp; // offset 0x14, size 0x4
    unsigned int pressed; // offset 0x18, size 0x4
    unsigned int lastPressed; // offset 0x1C, size 0x4
    unsigned int released; // offset 0x20, size 0x4
    unsigned int lastReleased; // offset 0x24, size 0x4
    float stick[2][2]; // offset 0x28, size 0x10
    float lastStick[2][2]; // offset 0x38, size 0x10
    float stickDelta[2][2]; // offset 0x48, size 0x10
    float lastStickDelta[2][2]; // offset 0x58, size 0x10
    unsigned char bThroughZero[2][2]; // offset 0x68, size 0x4
    class EVec2 cursorData; // offset 0x6C, size 0x8
    float tilt; // offset 0x74, size 0x4
    unsigned char bClearExclusive; // offset 0x78, size 0x1
private:
    unsigned int bPressedFirst; // offset 0x7C, size 0x4
    unsigned int bGotEvent; // offset 0x80, size 0x4
};
int _nCtrlPads; // size: 0x4, address: 0x805DC170
static unsigned int lastfilterId; // size: 0x4, address: 0x805DA4FC
// total size: 0x1C
class EDebugMenu {
    // Members
protected:
    unsigned char m_enable; // offset 0x0, size 0x1
    float m_maxWidth; // offset 0x4, size 0x4
    unsigned char m_maxWidthNeedsComputing; // offset 0x8, size 0x1
    class TLinkedList m_itemList; // offset 0xC, size 0x8
    int m_cSel; // offset 0x14, size 0x4
    int m_count; // offset 0x18, size 0x4
};
class EDebugMenu _debugmenu; // size: 0x1C, address: 0x80544C58
static class EVec3 _labelColor; // size: 0xC, address: 0x80544C74
static class EVec3 _valueColor; // size: 0xC, address: 0x80544C80
// total size: 0x1
class EDebugPrint {};
class EDebugPrint _debugprint; // size: 0x1, address: 0x805DC174
class EFrameAllocGroup _frag; // size: 0x38, address: 0x80544CA8
// total size: 0x4
class EMouse {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
char _profStatPrintBuff[32]; // size: 0x20, address: 0x80544CE0
unsigned char s_enableProfiling; // size: 0x1, address: 0x805DA501
unsigned char s_u8SysAlign[6]; // size: 0x6, address: 0x805DC178
class TrapezoidFade _interestFade; // size: 0xC4, address: 0x80544D0C
class PyramidFade g_pyramidFade; // size: 0xC4, address: 0x80544DD0
class LineFade g_lineFade; // size: 0x40, address: 0x80544E98
class HeightFade g_heightFade; // size: 0xC, address: 0x80544ED8
static unsigned long textsize; // size: 0x4, address: 0x805DC180
static unsigned long codesize; // size: 0x4, address: 0x805DC184
static unsigned char * text_buf; // size: 0x4, address: 0x805DC188
static int match_position; // size: 0x4, address: 0x805DC18C
static int match_length; // size: 0x4, address: 0x805DC190
static unsigned short * lson; // size: 0x4, address: 0x805DC194
static unsigned short * rson; // size: 0x4, address: 0x805DC198
static unsigned short * dad; // size: 0x4, address: 0x805DC19C
static unsigned char * gInBuffer; // size: 0x4, address: 0x805DC1A0
static unsigned char * gInBufferEnd; // size: 0x4, address: 0x805DC1A4
static unsigned char * gOutBuffer; // size: 0x4, address: 0x805DC1A8
static unsigned char * gOutBufferEnd; // size: 0x4, address: 0x805DC1AC
static unsigned char gIsOutBufferFull; // size: 0x1, address: 0x805DC1B0
// total size: 0x1
class LZSSCompressor {};
unsigned char s_fullAlphaValue; // size: 0x1, address: 0x805DF1E4
// total size: 0x30
struct {} __vt__6EMouse; // size: 0x30, address: 0x80458120
// total size: 0x34
struct {} __vt__9EKeyboard; // size: 0x34, address: 0x80458150
// total size: 0x14
struct {} __vt__16EFrameAllocGroup; // size: 0x14, address: 0x80458184
// total size: 0x18
struct {} __vt__14EDebugMenuItem; // size: 0x18, address: 0x80458198
// total size: 0x60
struct {} __vt__11EController; // size: 0x60, address: 0x804581B0

