/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptXmlNode.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80332D04 -> 0x8033398C
*/
// Range: 0x80332D04 -> 0x80332D5C
// this: r30
AptXmlNode::AptXmlNode(class IAptXmlNode * pIXmlNodeParam /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10AptXmlNode;
}

// Range: 0x80332D5C -> 0x80332D68
void AptXmlNode::PreDestroy() {}

// Range: 0x80332D68 -> 0x80332DD0
// this: r30
AptXmlNode::~AptXmlNode() {}

static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045FA68
// Range: 0x80332DD0 -> 0x80332F3C
void AptXmlNode::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_toString;
    // -> class AptNativeFunction * psMethod_removeNode;
    // -> class AptNativeFunction * psMethod_insertBefore;
    // -> class AptNativeFunction * psMethod_hasChildNodes;
    // -> class AptNativeFunction * psMethod_cloneNode;
    // -> static char __PRETTY_FUNCTION__[35];
    // -> class AptNativeFunction * psMethod_appendChild;
}

// Range: 0x80332F3C -> 0x80333088
unsigned char AptXmlNode::objectMemberSet(class AptValue * const pContext /* r31 */, const class EAStringC * const pName /* r29 */, class AptValue * const pValue /* r30 */) {
    // Local variables
    class AptXmlNode * pXmlNode; // r0
    class EAStringC sBuf; // r1+0xC
    class EAStringC sBuf; // r1+0x8
}

static char __PRETTY_FUNCTION__[80]; // size: 0x50, address: 0x8045FAB8
// Range: 0x80333088 -> 0x80333848
// this: r29
class AptValue * AptXmlNode::objectMemberLookup(const class EAStringC * const pName /* r28 */) const {
    // Local variables
    class AptXmlNode * pXmlNode; // r0
    class AptXmlAttributes * pXmlAttr; // r30
    class AptXmlAttributePair XmlAttribPair; // r1+0x20
    class AptString * pAttribValue; // r29
    class EAStringC strKey; // r1+0x8
    class AptArray * paChildNodes; // r29
    class IAptXmlNode * pChildNode; // r30
    int iArrIndex; // r28
    class IAptXmlNode * pFirstChildNode; // r28
    class IAptXmlNode * pLastChildNode; // r28
    class IAptXmlNode * pNextSiblingNode; // r28
    class AptString * pString; // r28
    char * szNodeName; // r4
    class AptString * pString; // r28
    char * szNodeValue; // r4
    class AptXmlNode * pParentAptXmlNode; // r28
    class IAptXmlNode * pParentNode; // r29
    class IAptXmlNode * pPreviousSiblingNode; // r28

    // References
    // -> class AptNativeFunction * psMethod_toString;
    // -> class AptNativeFunction * psMethod_removeNode;
    // -> class AptNativeFunction * psMethod_insertBefore;
    // -> class AptNativeFunction * psMethod_hasChildNodes;
    // -> class AptNativeFunction * psMethod_cloneNode;
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[80];
    // -> class AptNativeFunction * psMethod_appendChild;
}

class AptNativeFunction * psMethod_appendChild; // size: 0x4, address: 0x805DC4E0
// Range: 0x80333848 -> 0x80333850
class AptValue * AptXmlNode::sMethod_appendChild() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_cloneNode; // size: 0x4, address: 0x805DC4E4
// Range: 0x80333850 -> 0x80333858
class AptValue * AptXmlNode::sMethod_cloneNode() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_hasChildNodes; // size: 0x4, address: 0x805DC4E8
// Range: 0x80333858 -> 0x803338D8
class AptValue * AptXmlNode::sMethod_hasChildNodes(class AptValue * pThis /* r31 */) {
    // Local variables
    class AptXmlNode * pXmlNode; // r0
    int bHasChildNodes; // r0
}

class AptNativeFunction * psMethod_insertBefore; // size: 0x4, address: 0x805DC4EC
// Range: 0x803338D8 -> 0x803338E0
class AptValue * AptXmlNode::sMethod_insertBefore() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_removeNode; // size: 0x4, address: 0x805DC4F0
// Range: 0x803338E0 -> 0x803338E8
class AptValue * AptXmlNode::sMethod_removeNode() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_toString; // size: 0x4, address: 0x805DC4F4
// Range: 0x803338E8 -> 0x8033398C
class AptValue * AptXmlNode::sMethod_toString(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptXmlNode * pXmlNode; // r0
    class AptString * pString; // r30
    char * szToString; // r4

    // References
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0x44
struct {} __vt__10AptXmlNode; // size: 0x44, address: 0x8045FB4C

