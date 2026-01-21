/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\external\aptxmlimpl\source\AptXmlImpl\dirtyxml.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009F544 -> 0x8009FEC4
*/
// Range: 0x8009F544 -> 0x8009F5AC
static class CDirtyXmlNode * _ParseNode(const unsigned char * pXmlData /* r30 */) {}

// Range: 0x8009F5E8 -> 0x8009F680
static int _ParseNumChildNodes(const unsigned char * pXmlData /* r30 */) {
    // Local variables
    int iNumChildren; // r31
    unsigned char strTemp[2]; // r1+0x8
    const unsigned char * pXmlData2; // r3
}

// Range: 0x8009F680 -> 0x8009F764
static void _ParseChildNodes(class CDirtyXmlNode * * pNodeArray /* r31 */, int iNodeCount /* r28 */, const unsigned char * pXmlData /* r30 */) {
    // Local variables
    int iChild; // r30
    unsigned char strTemp[2]; // r1+0x8
    const unsigned char * pXmlData2; // r29
}

// Range: 0x8009F764 -> 0x8009F7C4
static void _ParseLevel(class CDirtyXmlNode * pNode /* r30 */, const unsigned char * pXmlData /* r31 */) {}

// Range: 0x8009F7C4 -> 0x8009F840
static void _Parse(class CDirtyXmlNode * pNode /* r29 */) {
    // Local variables
    int iChild; // r30
}

// Range: 0x8009F840 -> 0x8009F8D4
class IAptXml * CDirtyXmlImpl::createNewAptXml(const char * pUrl /* r30 */) {}

// Range: 0x8009F920 -> 0x8009F9F0
// this: r28
CDirtyXmlNode::~CDirtyXmlNode() {
    // Local variables
    int iChild; // r30

    // References
    // -> struct [anonymous] __vt__13CDirtyXmlNode;
}

// Range: 0x8009F9F0 -> 0x8009F9F4
void CDirtyXmlNode::appendChild() {}

// Range: 0x8009F9F4 -> 0x8009FA0C
class AptXmlAttributePair CDirtyXmlNode::getFirstAttribute() {}

// Range: 0x8009FA0C -> 0x8009FABC
// this: r29
class AptXmlAttributePair CDirtyXmlNode::getNextAttribute() {
    // Local variables
    class AptXmlAttributePair AttribPair; // r1+0x8

    // References
    // -> static char _DirtyXml_strRetnBuf1[128];
    // -> static char _DirtyXml_strRetnBuf0[128];
}

// Range: 0x8009FABC -> 0x8009FAC0
void CDirtyXmlNode::setAttribute() {}

// Range: 0x8009FAC0 -> 0x8009FAD8
class IAptXmlNode * CDirtyXmlNode::getFirstChildNode() {
    // Local variables
    class CDirtyXmlNode * pXmlNode; // r0
}

// Range: 0x8009FAD8 -> 0x8009FB08
class IAptXmlNode * CDirtyXmlNode::getNextChildNode() {
    // Local variables
    class CDirtyXmlNode * pXmlNode; // r4
}

// Range: 0x8009FB08 -> 0x8009FB0C
void CDirtyXmlNode::cloneNode() {}

// Range: 0x8009FB0C -> 0x8009FB2C
class IAptXmlNode * CDirtyXmlNode::firstChild() {
    // Local variables
    class CDirtyXmlNode * pXmlNode; // r4
}

// Range: 0x8009FB2C -> 0x8009FB40
int CDirtyXmlNode::hasChildNodes() {}

// Range: 0x8009FB40 -> 0x8009FB44
void CDirtyXmlNode::insertBefore() {}

// Range: 0x8009FB44 -> 0x8009FB6C
class IAptXmlNode * CDirtyXmlNode::lastChild() {
    // Local variables
    class CDirtyXmlNode * pXmlNode; // r0
}

// Range: 0x8009FB6C -> 0x8009FBB8
class IAptXmlNode * CDirtyXmlNode::nextSibling() {
    // Local variables
    class CDirtyXmlNode * pSibling; // r7
    int iNode; // r0
}

// Range: 0x8009FBB8 -> 0x8009FC18
char * CDirtyXmlNode::nodeName() {
    // Local variables
    char * pNodeName; // r30

    // References
    // -> static char _DirtyXml_strRetnBuf0[128];
}

// Range: 0x8009FC18 -> 0x8009FC1C
void CDirtyXmlNode::setNodeName() {}

// Range: 0x8009FC1C -> 0x8009FC24
int CDirtyXmlNode::nodeType() {}

// Range: 0x8009FC24 -> 0x8009FC84
char * CDirtyXmlNode::nodeValue() {
    // Local variables
    char * pNodeValue; // r30

    // References
    // -> static char _DirtyXml_strRetnBuf0[128];
}

// Range: 0x8009FC84 -> 0x8009FC88
void CDirtyXmlNode::setNodeValue() {}

// Range: 0x8009FC88 -> 0x8009FC90
class IAptXmlNode * CDirtyXmlNode::parentNode() {}

// Range: 0x8009FC90 -> 0x8009FCE0
class IAptXmlNode * CDirtyXmlNode::previousSibling() {
    // Local variables
    class CDirtyXmlNode * pSibling; // r7
    int iNode; // r0
}

// Range: 0x8009FCE0 -> 0x8009FCE4
void CDirtyXmlNode::removeNode() {}

// Range: 0x8009FCE4 -> 0x8009FCEC
char * CDirtyXmlNode::toString() {}

// Range: 0x8009FCEC -> 0x8009FCF0
void CDirtyXml::appendChild() {}

// Range: 0x8009FCF0 -> 0x8009FCF4
class AptXmlAttributePair CDirtyXml::getFirstAttribute() {}

// Range: 0x8009FCF4 -> 0x8009FCF8
class AptXmlAttributePair CDirtyXml::getNextAttribute() {}

// Range: 0x8009FCF8 -> 0x8009FCFC
void CDirtyXml::setAttribute() {}

// Range: 0x8009FCFC -> 0x8009FD00
class IAptXmlNode * CDirtyXml::getFirstChildNode() {}

// Range: 0x8009FD00 -> 0x8009FD04
class IAptXmlNode * CDirtyXml::getNextChildNode() {}

// Range: 0x8009FD04 -> 0x8009FD08
void CDirtyXml::cloneNode() {}

// Range: 0x8009FD08 -> 0x8009FD0C
class IAptXmlNode * CDirtyXml::firstChild() {}

// Range: 0x8009FD0C -> 0x8009FD10
int CDirtyXml::hasChildNodes() {}

// Range: 0x8009FD10 -> 0x8009FD14
void CDirtyXml::insertBefore() {}

// Range: 0x8009FD14 -> 0x8009FD18
class IAptXmlNode * CDirtyXml::lastChild() {}

// Range: 0x8009FD18 -> 0x8009FD1C
class IAptXmlNode * CDirtyXml::nextSibling() {}

// Range: 0x8009FD1C -> 0x8009FD20
char * CDirtyXml::nodeName() {}

// Range: 0x8009FD20 -> 0x8009FD24
void CDirtyXml::setNodeName() {}

// Range: 0x8009FD24 -> 0x8009FD28
int CDirtyXml::nodeType() {}

// Range: 0x8009FD28 -> 0x8009FD2C
char * CDirtyXml::nodeValue() {}

// Range: 0x8009FD2C -> 0x8009FD30
void CDirtyXml::setNodeValue() {}

// Range: 0x8009FD30 -> 0x8009FD34
class IAptXmlNode * CDirtyXml::parentNode() {}

// Range: 0x8009FD34 -> 0x8009FD38
class IAptXmlNode * CDirtyXml::previousSibling() {}

// Range: 0x8009FD38 -> 0x8009FD3C
void CDirtyXml::removeNode() {}

// Range: 0x8009FD3C -> 0x8009FD40
char * CDirtyXml::toString() {}

// Range: 0x8009FD40 -> 0x8009FDD0
// this: r30
CDirtyXml::~CDirtyXml() {
    // References
    // -> struct [anonymous] __vt__9CDirtyXml;
}

// Range: 0x8009FDD0 -> 0x8009FDD8
char * CDirtyXml::contentType() {}

// Range: 0x8009FDD8 -> 0x8009FDDC
void CDirtyXml::setContentType() {}

// Range: 0x8009FDDC -> 0x8009FDE4
class IAptXmlNode * CDirtyXml::createElement() {}

// Range: 0x8009FDE4 -> 0x8009FDEC
class IAptXmlNode * CDirtyXml::createTextNode() {}

// Range: 0x8009FDEC -> 0x8009FDF4
char * CDirtyXml::docTypeDecl() {}

// Range: 0x8009FDF4 -> 0x8009FDF8
void CDirtyXml::setDocTypeDecl() {}

// Range: 0x8009FDF8 -> 0x8009FE00
int CDirtyXml::getBytesTotal() {}

// Range: 0x8009FE00 -> 0x8009FE08
int CDirtyXml::getBytesLoaded() {}

// Range: 0x8009FE08 -> 0x8009FE0C
void CDirtyXml::setIgnoreWhite() {}

// Range: 0x8009FE0C -> 0x8009FE14
int CDirtyXml::isIgnoreWhite() {}

// Range: 0x8009FE14 -> 0x8009FE18
void CDirtyXml::load() {}

// Range: 0x8009FE18 -> 0x8009FE20
int CDirtyXml::isLoaded() {}

// Range: 0x8009FE20 -> 0x8009FEB4
// this: r30
void CDirtyXml::parseXml(const char * pSourceString /* r31 */) {}

// Range: 0x8009FEB4 -> 0x8009FEB8
void CDirtyXml::send() {}

// Range: 0x8009FEB8 -> 0x8009FEBC
void CDirtyXml::sendAndLoad() {}

// Range: 0x8009FEBC -> 0x8009FEC4
int CDirtyXml::status() {}


