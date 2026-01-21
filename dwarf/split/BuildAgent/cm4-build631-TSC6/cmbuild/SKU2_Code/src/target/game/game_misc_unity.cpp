/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\game_misc_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B638 -> 0x8009B638
*/
// total size: 0x4C
class TextBlock {
    // Static members
    static float s_fDefaultFontSize; // size: 0x4
    static class ERFont * s_pDefaultFont; // size: 0x4

    // Members
    const unsigned short * m_pText; // offset 0x0, size 0x4
    class EVec2 m_vPos; // offset 0x4, size 0x8
    class EVec2 m_vDisplaySize; // offset 0xC, size 0x8
    class EVec2 m_vDisplayPadSize; // offset 0x14, size 0x8
    class EVec2 m_vActualSize; // offset 0x1C, size 0x8
    class EVec4 * m_pvColor; // offset 0x24, size 0x4
    float m_fShadowAlpha; // offset 0x28, size 0x4
    float m_fShadowSize; // offset 0x2C, size 0x4
    class ERFont * m_pFont; // offset 0x30, size 0x4
    float m_fFontSize; // offset 0x34, size 0x4
    unsigned int m_flags; // offset 0x38, size 0x4
    int m_iScrollLine; // offset 0x3C, size 0x4
    int m_iDisplayLines; // offset 0x40, size 0x4
    int m_iTotalLines; // offset 0x44, size 0x4
    float m_fLineGap; // offset 0x48, size 0x4
};
static char * s_pButtonName[7]; // size: 0x1C, address: 0x8042A5A0
// total size: 0x14
struct Style {
    // Members
    class EVec4 color; // offset 0x0, size 0x10
    unsigned char dropShadow; // offset 0x10, size 0x1
};
static struct Style s_style[10]; // size: 0xC8, address: 0x8042A5C0
static unsigned char s_bStyleInited; // size: 0x1, address: 0x805DB788
class ERFont * s_pDefaultFont; // size: 0x4, address: 0x805DB78C
float s_fDefaultTextFontSize; // size: 0x4, address: 0x805DB790
float s_fDefaultMenuFontSize; // size: 0x4, address: 0x805DB794
float s_fDefaultButtonFontSize; // size: 0x4, address: 0x805DB798
enum ItemStyle {
    kWhite = 0,
    kDarkBlue = 1,
    kLightBlue = 2,
    kDarkGrey = 3,
    kLightGrey = 4,
    kWhiteWithDropShadow = 5,
    kYellowWithDropShadow = 6,
    kNotSelectable = 7,
    kNormalMenuText = 8,
    kSelectedMenuText = 9,
    kItemStyleMax = 10,
};
enum ItemStyle s_defaultTextStyle; // size: 0x4, address: 0x805DB79C
enum ItemStyle s_defaultButtonStyle; // size: 0x4, address: 0x805DB7A0
enum ItemStyle s_defaultMenuStyle; // size: 0x4, address: 0x805DB7A4
// total size: 0x70
class TextBaseItem : public PaneItem {
    // Members
    class TextBlock m_textBlock; // offset 0x20, size 0x4C
    enum ItemStyle m_itemStyle; // offset 0x6C, size 0x4
};
// total size: 0xC0
class Wrapper : public UIObjectBase {
    // Static members
    static enum ItemStyle s_defaultMenuStyle; // size: 0x4
    static enum ItemStyle s_defaultButtonStyle; // size: 0x4
    static enum ItemStyle s_defaultTextStyle; // size: 0x4
    static float s_fDefaultButtonFontSize; // size: 0x4
    static float s_fDefaultMenuFontSize; // size: 0x4
    static float s_fDefaultTextFontSize; // size: 0x4
    static class ERFont * s_pDefaultFont; // size: 0x4

    // Members
    const char * m_pAssetName; // offset 0xA4, size 0x4
    class UIObjectBase * m_pMsgHandler; // offset 0xA8, size 0x4
    class vector m_paneList; // offset 0xAC, size 0x10
    unsigned char m_bUsesApt; // offset 0xBC, size 0x1
    unsigned char m_bDrawOverApt; // offset 0xBD, size 0x1
};
// total size: 0x20
class PaneItem {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    enum ItemType m_itemType; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    int m_iValue; // offset 0xC, size 0x4
protected:
    class EVec2 m_vPos; // offset 0x10, size 0x8
    class EVec2 m_vSize; // offset 0x18, size 0x8
};
// total size: 0x70
class TextItem : public TextBaseItem {};
// total size: 0x70
class MenuItem : public TextBaseItem {};
// total size: 0x70
class ButtonItem : public TextBaseItem {};
// total size: 0x34
class IconItem : public PaneItem {
    // Members
    class EVec3 m_vColor; // offset 0x20, size 0xC
    float m_alpha; // offset 0x2C, size 0x4
    class ERShader * m_pShader; // offset 0x30, size 0x4
};
enum PaneState {
    kRunning = 0,
    kAccepted = 1,
    kDeclined = 2,
    kAlt1 = 3,
    kMax = 4,
};
// total size: 0x60
class WrapperPaneBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    int m_paneId; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    class vector m_itemList; // offset 0xC, size 0x10
    class ERShader * m_pBackground; // offset 0x1C, size 0x4
    class EVec2 m_vBackgroundTopLeft; // offset 0x20, size 0x8
    class EVec2 m_vBackgroundBottomRight; // offset 0x28, size 0x8
    float m_fBackgroundAlpha; // offset 0x30, size 0x4
    float m_fAlpha; // offset 0x34, size 0x4
    enum PaneState m_state; // offset 0x38, size 0x4
    const char * m_pContextName; // offset 0x3C, size 0x4
    int m_iContextNameLen; // offset 0x40, size 0x4
    class ButtonItem * m_pButton[7]; // offset 0x44, size 0x1C
};
// total size: 0x10
class vector : public VectorBase {};
enum ItemType {
    kText = 0,
    kMenu = 1,
    kButton = 2,
    kIcon = 3,
    kItemTypeMax = 4,
};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class PaneItem * * mpBegin; // offset 0x0, size 0x4
    class PaneItem * * mpEnd; // offset 0x4, size 0x4
    class PaneItem * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class PaneItem * * mIterator; // offset 0x0, size 0x4
};
// total size: 0x68
class DialogPaneBase : public WrapperPaneBase {
    // Members
    class TextItem * m_pTitle; // offset 0x60, size 0x4
    class TextItem * m_pBody; // offset 0x64, size 0x4
};
// total size: 0x64
class MenuPane : public WrapperPaneBase {
    // Members
    float m_fMenuWidth; // offset 0x60, size 0x4
};
// total size: 0x10
class vector : public VectorBase {};
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class WrapperPaneBase * * mpBegin; // offset 0x0, size 0x4
    class WrapperPaneBase * * mpEnd; // offset 0x4, size 0x4
    class WrapperPaneBase * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x4
class generic_iterator {
    // Members
protected:
    class WrapperPaneBase * * mIterator; // offset 0x0, size 0x4
};
static char _DirtyXml_strRetnBuf0[128]; // size: 0x80, address: 0x80491AC0
static char _DirtyXml_strRetnBuf1[128]; // size: 0x80, address: 0x80491B40
// total size: 0x4
class IAptXmlNode {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class IAptXmlImpl {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x4
class CDirtyXmlImpl : public IAptXmlImpl {};
// total size: 0x4
class IAptXml : public IAptXmlNode {};
enum XmlNodeTypeE {
    XML_INVALID_NODE = 0,
    XML_ELEMENT_NODE = 1,
    XML_ATTRIBUTE_NODE = 2,
    XML_TEXT_NODE = 3,
    XML_CDATA_SECTION_NODE = 4,
    XML_ENTITY_REFERENCE_NODE = 5,
    XML_ENTITY_NONE = 6,
    XML_PROCESSING_INSTRUCTION_NODE = 7,
    XML_COMMENT_NODE = 8,
    XML_DOCUMENT_NODE = 9,
    XML_DOCUMENT_TYPE_NODE = 10,
    XML_DOCUMENT_FRAGMENT_NODE = 11,
    XML_NOTATION_NODE = 12,
    XML_NUMNODETYPES = 13,
};
// total size: 0x20
class CDirtyXmlNode : public IAptXmlNode {
    // Members
public:
    const unsigned char * m_pXmlData; // offset 0x4, size 0x4
    enum XmlNodeTypeE m_eNodeType; // offset 0x8, size 0x4
    class CDirtyXmlNode * m_pParent; // offset 0xC, size 0x4
    int m_iNumChildren; // offset 0x10, size 0x4
    int m_iCurChild; // offset 0x14, size 0x4
    int m_iCurAttrib; // offset 0x18, size 0x4
    class CDirtyXmlNode * * m_pChildArray; // offset 0x1C, size 0x4
};
// total size: 0x8
class AptXmlAttributePair {
    // Members
public:
    char * pKey; // offset 0x0, size 0x4
    char * pValue; // offset 0x4, size 0x4
};
// total size: 0x24
class CDirtyXml : public CDirtyXmlNode, public IAptXml {};
static unsigned char _Xml_BtmDecode[256]; // size: 0x100, address: 0x8041B3B8
// total size: 0x1
class CTGFileManager {
    // Static members
    static class CTGFileManager sTheMgr; // size: 0x1
};
class CTGFileManager sTheMgr; // size: 0x1, address: 0x805DB7A8
// total size: 0x4
class CTGFile {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// total size: 0x410
class CTGFileImpl : private CTGFile {
    // Members
    class StackString msFilename; // offset 0x4, size 0x408
    struct _FILE * m_pFile; // offset 0x40C, size 0x4
};
static class EClock _clock; // size: 0x10, address: 0x80491BD0
static unsigned char _bInitialized; // size: 0x1, address: 0x805DB7A9
// total size: 0x20
class CTGMicroTimer {
    // Members
    long long mStart; // offset 0x0, size 0x8
    long long mStop; // offset 0x8, size 0x8
    long long mFrequency; // offset 0x10, size 0x8
    unsigned char mIsRunning; // offset 0x18, size 0x1
};
// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// total size: 0x5C
struct {} __vt__11CTGFileImpl; // size: 0x5C, address: 0x8042A704
// total size: 0x5C
struct {} __vt__7CTGFile; // size: 0x5C, address: 0x8042A760
// total size: 0x140
struct {} __vt__9CDirtyXml; // size: 0x140, address: 0x8042A7C0
// total size: 0x60
struct {} __vt__13CDirtyXmlNode; // size: 0x60, address: 0x8042A900
// total size: 0xC
struct {} __vt__13CDirtyXmlImpl; // size: 0xC, address: 0x8042A960
// total size: 0xA0
struct {} __vt__7IAptXml; // size: 0xA0, address: 0x8042A970
// total size: 0x60
struct {} __vt__11IAptXmlNode; // size: 0x60, address: 0x8042AA10
// total size: 0x20
struct {} __vt__14DialogPaneBase; // size: 0x20, address: 0x8042AA70
// total size: 0x20
struct {} __vt__15WrapperPaneBase; // size: 0x20, address: 0x8042AA90
// total size: 0x58
struct {} __vt__8IconItem; // size: 0x58, address: 0x8042AAB0
// total size: 0x78
struct {} __vt__10ButtonItem; // size: 0x78, address: 0x8042AB08
// total size: 0x78
struct {} __vt__8MenuItem; // size: 0x78, address: 0x8042AB80
// total size: 0x78
struct {} __vt__8TextItem; // size: 0x78, address: 0x8042ABF8
// total size: 0x78
struct {} __vt__12TextBaseItem; // size: 0x78, address: 0x8042AC70
// total size: 0x50
struct {} __vt__8PaneItem; // size: 0x50, address: 0x8042ACE8

