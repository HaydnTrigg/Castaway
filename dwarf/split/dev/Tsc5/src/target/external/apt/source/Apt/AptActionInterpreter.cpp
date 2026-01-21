/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptActionInterpreter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80300688 -> 0x8030AD90
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x804583E0
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80458430
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045845C
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x80458498
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x804584CC
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x80458508
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x80458540
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80458560
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x80458590
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x804585B0
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x804585E0
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x80458610
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x80458634
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80458668
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x80458698
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x804586C4
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x804586F4
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x80458720
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x80458744
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x80458778
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x804587A0
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x804587C4
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x804587F0
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x80458830
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x80458854
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80458880
const char * FSCOMMAND; // size: 0x4, address: 0x805DA590
struct AptActionInterpreter gAptActionInterpreter; // size: 0x60, address: 0x80545000
enum StringCode {
    SC_FIRST = 0,
    SC___proto__ = 0,
    SC__alpha = 1,
    SC__currentframe = 2,
    SC__down = 3,
    SC__droptarget = 4,
    SC__focusrect = 5,
    SC__framesloaded = 6,
    SC__global = 7,
    SC__height = 8,
    SC__highquality = 9,
    SC__left = 10,
    SC__name = 11,
    SC__quality = 12,
    SC__right = 13,
    SC__rotation = 14,
    SC__soundbuftime = 15,
    SC__target = 16,
    SC__totalframes = 17,
    SC__type = 18,
    SC__up = 19,
    SC__url = 20,
    SC__visible = 21,
    SC__width = 22,
    SC__x = 23,
    SC__xmouse = 24,
    SC__xscale = 25,
    SC__y = 26,
    SC__ymouse = 27,
    SC__yscale = 28,
    SC_aa = 29,
    SC_ab = 30,
    SC_abs = 31,
    SC_acos = 32,
    SC_Array = 33,
    SC_asin = 34,
    SC_atan = 35,
    SC_atan2 = 36,
    SC_ba = 37,
    SC_bb = 38,
    SC_Boolean = 39,
    SC_ceil = 40,
    SC_center = 41,
    SC_charAt = 42,
    SC_charCodeAt = 43,
    SC_Color = 44,
    SC_concat = 45,
    SC_contentType = 46,
    SC_controller = 47,
    SC_cos = 48,
    SC_Date = 49,
    SC_Error = 50,
    SC_exp = 51,
    SC_false = 52,
    SC_floor = 53,
    SC_fromCharCode = 54,
    SC_Function = 55,
    SC_fXAxisValue = 56,
    SC_fYAxisValue = 57,
    SC_ga = 58,
    SC_gb = 59,
    SC_getBytesLoaded = 60,
    SC_getBytesTotal = 61,
    SC_getDate = 62,
    SC_getDay = 63,
    SC_getFullYear = 64,
    SC_getHours = 65,
    SC_getMilliseconds = 66,
    SC_getMinutes = 67,
    SC_getMonth = 68,
    SC_getRGB = 69,
    SC_getSeconds = 70,
    SC_getTime = 71,
    SC_getTimezoneOffset = 72,
    SC_getTransform = 73,
    SC_getUTCDate = 74,
    SC_getUTCDay = 75,
    SC_getUTCFullYear = 76,
    SC_getUTCHours = 77,
    SC_getUTCMilliseconds = 78,
    SC_getUTCMinutes = 79,
    SC_getUTCMonth = 80,
    SC_getUTCSeconds = 81,
    SC_getYear = 82,
    SC_indexOf = 83,
    SC_join = 84,
    SC_lastIndexOf = 85,
    SC_left = 86,
    SC_length = 87,
    SC_load = 88,
    SC_loaded = 89,
    SC_LoadVars = 90,
    SC_log = 91,
    SC_max = 92,
    SC_min = 93,
    SC_MovieClip = 94,
    SC_NodeName = 95,
    SC_NodeValue = 96,
    SC_none = 97,
    SC_null = 98,
    SC_Number = 99,
    SC_Object = 100,
    SC_onData = 101,
    SC_onDragOut = 102,
    SC_onDragOver = 103,
    SC_onEnterFrame = 104,
    SC_onKeyDown = 105,
    SC_onKeyUp = 106,
    SC_onLoad = 107,
    SC_onMouseDown = 108,
    SC_onMouseMove = 109,
    SC_onMouseUp = 110,
    SC_onMouseWheel = 111,
    SC_onPress = 112,
    SC_onRelease = 113,
    SC_onReleaseOutside = 114,
    SC_onRollOut = 115,
    SC_onRollOver = 116,
    SC_onUnload = 117,
    SC_pop = 118,
    SC_pow = 119,
    SC_prototype = 120,
    SC_push = 121,
    SC_ra = 122,
    SC_random = 123,
    SC_rb = 124,
    SC_reverse = 125,
    SC_right = 126,
    SC_round = 127,
    SC_send = 128,
    SC_sendAndLoad = 129,
    SC_setDate = 130,
    SC_setFullYear = 131,
    SC_setHours = 132,
    SC_setMilliseconds = 133,
    SC_setMinutes = 134,
    SC_setMonth = 135,
    SC_setRGB = 136,
    SC_setSeconds = 137,
    SC_setTime = 138,
    SC_setTransform = 139,
    SC_setUTCDate = 140,
    SC_setUTCFullYear = 141,
    SC_setUTCHours = 142,
    SC_setUTCMilliseconds = 143,
    SC_setUTCMinutes = 144,
    SC_setUTCMonth = 145,
    SC_setUTCSeconds = 146,
    SC_setYear = 147,
    SC_shift = 148,
    SC_sin = 149,
    SC_slice = 150,
    SC_sort = 151,
    SC_sortOn = 152,
    SC_Sound = 153,
    SC_splice = 154,
    SC_split = 155,
    SC_sqrt = 156,
    SC_String = 157,
    SC_substr = 158,
    SC_substring = 159,
    SC_super = 160,
    SC_tan = 161,
    SC_target = 162,
    SC_TextFormat = 163,
    SC_this = 164,
    SC_toLowerCase = 165,
    SC_toString = 166,
    SC_toUpperCase = 167,
    SC_true = 168,
    SC_Undefined = 169,
    SC_undefKey = 170,
    SC_unshift = 171,
    SC_UTC = 172,
    SC_xMax = 173,
    SC_xMin = 174,
    SC_XML = 175,
    SC_yMax = 176,
    SC_yMin = 177,
    SC_LAST = 178,
};
static enum StringCode gaszPropertyNames[22]; // size: 0x58, address: 0x804588C0
// Range: 0x80300688 -> 0x803006FC
// this: r30
void AptActionInterpreter::initialize(const struct AptInitParmsT & aptInitParms /* r31 */) {}

// Range: 0x803006FC -> 0x80300744
// this: r31
void AptActionInterpreter::shutdown() {}

static char __PRETTY_FUNCTION__[92]; // size: 0x5C, address: 0x80458918
enum Actions {
    AptActionInvalid = -1,
    AptActionEnd = 0,
    AptActionNextFrame = 4,
    AptActionPrevFrame = 5,
    AptActionPlay = 6,
    AptActionStop = 7,
    AptActionToggleQuality = 8,
    AptActionStopSounds = 9,
    AptActionAdd = 10,
    AptActionSubtract = 11,
    AptActionMultiply = 12,
    AptActionDivide = 13,
    AptActionEquals = 14,
    AptActionLessThan = 15,
    AptActionAnd = 16,
    AptActionOr = 17,
    AptActionNot = 18,
    AptActionStringEquals = 19,
    AptActionStringLength = 20,
    AptActionSubString = 21,
    AptActionPop = 23,
    AptActionToInteger = 24,
    AptActionGetVariable = 28,
    AptActionSetVariable = 29,
    AptActionSetTarget2 = 32,
    AptActionStringAdd = 33,
    AptActionGetProperty = 34,
    AptActionSetProperty = 35,
    AptActionCloneSprite = 36,
    AptActionRemoveSprite = 37,
    AptActionTrace = 38,
    AptActionStartDragMovie = 39,
    AptActionStopDragMovie = 40,
    AptActionStringLessThan = 41,
    AptActionCastOp = 43,
    AptActionImplementsOp = 44,
    AptActionThrow = 42,
    AptActionRandom = 48,
    AptActionMBLength = 49,
    AptActionCharToAscii = 50,
    AptActionAsciiToChar = 51,
    AptActionGetTimer = 52,
    AptActionMBSubString = 53,
    AptActionMBCharToAscii = 54,
    AptActionMBAsciiToChar = 55,
    AptActionDelete = 58,
    AptActionDelete2 = 59,
    AptActionDefineLocal = 60,
    AptActionCallFunction = 61,
    AptActionReturn = 62,
    AptActionModulo = 63,
    AptActionNewObject = 64,
    AptActionDefineLocal2 = 65,
    AptActionInitArray = 66,
    AptActionInitObject = 67,
    AptActionTypeOf = 68,
    AptActionTargetPath = 69,
    AptActionEnumerate = 70,
    AptActionAdd2 = 71,
    AptActionLessThan2 = 72,
    AptActionEquals2 = 73,
    AptActionToNumber = 74,
    AptActionToString = 75,
    AptActionPushDuplicate = 76,
    AptActionStackSwap = 77,
    AptActionGetMember = 78,
    AptActionSetMember = 79,
    AptActionIncrement = 80,
    AptActionDecrement = 81,
    AptActionCallMethod = 82,
    AptActionNewMethod = 83,
    AptActionInstanceOf = 84,
    AptActionEnumerate2 = 85,
    AptActionPushThis = 86,
    AptActionPushGlobal = 88,
    AptActionPush0 = 89,
    AptActionPush1 = 90,
    AptActionCallFuncAndPop = 91,
    AptActionCallFuncSetVar = 92,
    AptActionCallMethodPop = 93,
    AptActionCallMethodSetVar = 94,
    AptActionBitAnd = 96,
    AptActionBitOr = 97,
    AptActionBitXor = 98,
    AptActionBitLShift = 99,
    AptActionBitRShift = 100,
    AptActionBitURShift = 101,
    AptActionStrictEquals = 102,
    AptActionGreater = 103,
    AptActionExtends = 105,
    AptActionPushThisVariable = 112,
    AptActionPushGlobalVariable = 113,
    AptActionPushZeroSetVar = 114,
    AptActionPushTrue = 115,
    AptActionPushFalse = 116,
    AptActionPushNULL = 117,
    AptActionPushUndefined = 118,
    AptActionGotoFrame = 129,
    AptActionGetUrl = 131,
    AptActionStoreRegister = 135,
    AptActionDefineDictionary = 136,
    AptActionWaitForFrame = 138,
    AptActionSetTarget = 139,
    AptActionGotoLabel = 140,
    AptActionDefineFunction2 = 142,
    AptActionTry = 143,
    AptActionWith = 148,
    AptActionPush = 150,
    AptActionBranchAlways = 153,
    AptActionGetUrl2 = 154,
    AptActionDefineFunction = 155,
    AptActionBranchIfTrue = 157,
    AptActionCallFrame = 158,
    AptActionGotoFrame2 = 159,
    AptActionPushString = 161,
    AptActionPushStringDictByte = 162,
    AptActionPushStringDictWord = 163,
    AptActionPushStringGetVar = 164,
    AptActionPushStringGetMember = 165,
    AptActionPushStringSetVar = 166,
    AptActionPushStringSetMember = 167,
    AptActionStringDictByteGetVar = 174,
    AptActionStringDictByteGetMember = 175,
    AptActionDictCallFuncPop = 176,
    AptActionDictCallFuncSetVar = 177,
    AptActionDictCallMethodPop = 178,
    AptActionDictCallMethodSetVar = 179,
    AptActionPushFloat = 180,
    AptActionPushByte = 181,
    AptActionPushWord = 182,
    AptActionPushDWord = 183,
    AptActionBranchIfFalse = 184,
    LastAptAction = 185,
};
// total size: 0x4
struct AptAction_PushString {
    // Members
    char * szStringToBePushed; // offset 0x0, size 0x4
};
// total size: 0x8
struct AptAction_Push {
    // Members
    struct AptConstantPool items; // offset 0x0, size 0x8
};
// total size: 0x8
struct AptAction_GetUrl {
    // Members
    char * szUrl; // offset 0x0, size 0x4
    char * szWin; // offset 0x4, size 0x4
};
// total size: 0x4
struct AptAction_SetTarget {
    // Members
    char * szTarget; // offset 0x0, size 0x4
};
// total size: 0x4
struct AptAction_GotoLabel {
    // Members
    char * szLabel; // offset 0x0, size 0x4
};
// total size: 0x18
struct AptAction_DefineFunction {
    // Members
    const char * szName; // offset 0x0, size 0x4
    int nParams; // offset 0x4, size 0x4
    char * * aszParams; // offset 0x8, size 0x4
    int nCodeSize; // offset 0xC, size 0x4
    struct AptConstantPool constantPool; // offset 0x10, size 0x8
};
// total size: 0x4
struct AptAction_With {
    // Members
    unsigned char * pEnd; // offset 0x0, size 0x4
};
// total size: 0x8
struct AptRegisterParam {
    // Members
    unsigned int nRegister; // offset 0x0, size 0x4
    char * szParamName; // offset 0x4, size 0x4
};
// total size: 0x1C
struct AptAction_DefineFunction2 {
    // Members
    const char * szName; // offset 0x0, size 0x4
    int nParams; // offset 0x4, size 0x4
    signed short nRegisterCount; // offset 0x8, size 0x2
    signed short nFlags; // offset 0xA, size 0x2
    struct AptRegisterParam * aszParams; // offset 0xC, size 0x4
    int nCodeSize; // offset 0x10, size 0x4
    struct AptConstantPool constantPool; // offset 0x14, size 0x8
};
// Range: 0x80300744 -> 0x80300EB8
void AptActionInterpreter::_parseStream(unsigned char * pBase /* r29 */, struct AptConstFile * aConstantFile /* r30 */, int * pnCurrentConstantIndex /* r31 */) {
    // Local variables
    int bUnresolve; // r0
    unsigned char * pInstruction; // r20
    enum Actions eAction; // r0
    struct AptAction_PushString * pData; // r3
    struct AptAction_Push * pData; // r19
    int i; // r21
    class AptValue * pValue; // r17
    int i; // r18
    int nConstTableIndex; // r4
    enum AptVirtualFunctionTable_Indices eType; // r0
    class AptValue * pAtom; // r17
    unsigned char * pBase; // r0
    struct AptAction_GetUrl * pData; // r3
    struct AptAction_SetTarget * pData; // r3
    struct AptAction_GotoLabel * pData; // r3
    struct AptAction_DefineFunction * pData; // r3
    int i; // r6
    struct AptAction_With * pData; // r3
    struct AptAction_DefineFunction2 * pData; // r3
    int i; // r6
    struct AptAction_TryCatchFinallyBlock * pData; // r17

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[92];
    // -> class AptValueVector * gpValuesToRelease;
}

// total size: 0x14
struct AptAction_TryCatchFinallyBlock {
    // Members
    unsigned int uTryCodeSize; // offset 0x0, size 0x4
    unsigned int uCatchCodeSize; // offset 0x4, size 0x4
    unsigned int uFinallyCodeSize; // offset 0x8, size 0x4
private:
    unsigned char uFlags; // offset 0xC, size 0x1
    unsigned char uAlignment1; // offset 0xD, size 0x1
    unsigned char uAlignment2; // offset 0xE, size 0x1
public:
    unsigned char uCaughtRegister; // offset 0xF, size 0x1
    char * szCaughtVarName; // offset 0x10, size 0x4
};
// Range: 0x80300EB8 -> 0x80300EC4
void AptActionInterpreter::unresolveStream() {}

// Range: 0x80300EC4 -> 0x80300EC8
void AptActionInterpreter::resolveStream() {}

// Range: 0x80300EC8 -> 0x80301014
// this: r27
void AptActionInterpreter::loadVariables(class AptValue * pContext /* r28 */, class AptValue * pWith /* r29 */) {
    // Local variables
    class AptValue * pValue; // r0
    class EAStringC * s; // r30
    const char * szCur; // r30
    class EAStringC sKey; // r1+0xC
    class EAStringC sValue; // r1+0x8
    class AptString * pVariable; // r31

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80301014 -> 0x803010F8
class AptValue * AptActionInterpreter::getObject(class AptValue * pCurrentContext /* r29 */, class AptValue * pWith /* r30 */, const class EAStringC * pPathName /* r31 */) {
    // Local variables
    class EAStringC sVar; // r1+0xC
    class AptValue * pContext; // r1+0x8
    class AptValue * pValue; // r31
}

// Range: 0x803010F8 -> 0x803011DC
unsigned char AptActionInterpreter::getContext(class AptValue * pCurrentContext /* r27 */, class AptValue * pWith /* r28 */, const class EAStringC * pVarName /* r29 */, class AptValue * * ppContext /* r31 */, class EAStringC & sName /* r30 */) {
    // Local variables
    const char * pBuffer; // r3
    char cCar; // r0
    unsigned char bSimple; // r4
    char szBuf[256]; // r1+0x10
    unsigned char bRet; // r31
}

// Range: 0x803011DC -> 0x803013D0
unsigned char AptActionInterpreter::getContext(class AptValue * pCurrentContext /* r27 */, class AptValue * pWith /* r28 */, class AptValue * * ppContext /* r29 */, char * szName /* r30 */) {
    // Local variables
    const char * pCurChar; // r24
    class AptValue * pContext; // [invalid]
    class AptValue * pNewContext; // r0
    unsigned char bId; // r31
    const char * szVarName; // r3
    char szNextDir[256]; // r1+0x10
    char * pNextDir; // r4
    class EAStringC strNextDir; // r1+0xC
    class EAStringC strNextDir; // r1+0x8

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x803013D0 -> 0x80301734
// this: r24
unsigned char AptActionInterpreter::setVariable(class AptValue * pCurrentContext /* r25 */, class AptValue * pWith /* r26 */, const class EAStringC * pVarName /* r27 */, class AptValue * pValue /* r28 */, int bGlobal /* r29 */, int bLookInFunctionScope /* r30 */, int bIsMember /* r31 */) {
    // Local variables
    class AptValue * pContext; // r1+0xC
    class EAStringC sVar; // r1+0x8
    class AptNativeHash * pNativeHash; // r30
    class AptNativeHash * pThisNativeHash; // r0
    class AptNativeHash * pParentNativeHash; // r0
    class AptNativeHash * pNativeHash; // r30

    // References
    // -> class AptValue * gpGlobalObjectPrototype;
}

// total size: 0x3C0
struct AptRenderingContext {
    // Members
    struct AptCXForm curCXForm; // offset 0x0, size 0x20
    struct AptMatrix curVertexMatrix; // offset 0x20, size 0x18
    struct AptCXForm aCXFormStack[16]; // offset 0x38, size 0x200
    struct AptMatrix aVertexMatrixStack[16]; // offset 0x238, size 0x180
    int nCXFormStack; // offset 0x3B8, size 0x4
    int nVertexMatrixStack; // offset 0x3BC, size 0x4
};
static char __PRETTY_FUNCTION__[64]; // size: 0x40, address: 0x80458C80
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x80458CC0
// Range: 0x80301734 -> 0x80301974
class AptValue * AptActionInterpreter::cbCallMethod_setInterval(class AptValue * pContext /* r25 */, int nParams /* r26 */) {
    // Local variables
    class AptValue * pCBValue; // r30
    class AptValue * pIntervalValue; // r29
    int i; // r28
    int nParamStart; // r27
    class AptValue * pTemp; // r24
    class AptString * pStringLevel1; // r27
    int j; // r24

    // References
    // -> static char __PRETTY_FUNCTION__[64];
    // -> class AptNone * gpUndefinedValue;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

static char __PRETTY_FUNCTION__[66]; // size: 0x42, address: 0x80458CF0
// Range: 0x80301974 -> 0x80301A38
class AptValue * AptActionInterpreter::cbCallMethod_clearInterval() {
    // Local variables
    class AptValue * pIndex; // r31
    int nIndex; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[66];
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80301A38 -> 0x80301A80
class AptValue * AptActionInterpreter::cbCallMethod_isNaN() {
    // Local variables
    class AptValue * pValue; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80301A80 -> 0x80301DD0
unsigned char _isNaN(class AptValue * pValue /* r30 */) {
    // Local variables
    class EAStringC szBuf; // r1+0xC
    char * pBuf; // r1+0x8
    unsigned char bFloat; // r31
    int i; // r30
    char cl; // r3
}

// Range: 0x80301DD0 -> 0x80301E5C
class AptValue * AptActionInterpreter::cbCallMethod_unescape() {
    // Local variables
    class AptString * pRetValue; // r31
    class AptValue * pValue; // r30
    class EAStringC szBuf; // r1+0x8

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80301E5C -> 0x80301EF8
class AptValue * AptActionInterpreter::cbCallMethod_escape(int nParams /* r30 */) {
    // Local variables
    class AptString * pRetValue; // r31
    class AptValue * pValue; // r30
    class EAStringC szBuf; // r1+0x8

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80301EF8 -> 0x80302058
class AptValue * AptActionInterpreter::cbCallMethod_boolean() {
    // Local variables
    class AptValue * pValue; // r31

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80302058 -> 0x80302060
class AptValue * AptActionInterpreter::cbCallMethod_ASSetPropFlags() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80302060 -> 0x803021C8
static void _getNameString(class AptCIH * pContext /* r27 */, class EAStringC & sBuf /* r28 */) {
    // Local variables
    char szTemp[16]; // r1+0x18
    int nInstanceNumber; // r29
    class EAStringC sNewName; // r1+0x10
}

// Range: 0x803021C8 -> 0x80302264
void AptActionInterpreter::getName2(class AptCIH * pCIH /* r30 */, class EAStringC & sBuf /* r31 */) {}

// Range: 0x80302264 -> 0x803022CC
void AptActionInterpreter::getName(class AptCIH * pCIH /* r30 */, class EAStringC & sBuf /* r31 */) {}

// Range: 0x803022CC -> 0x803024C0
class AptValue * AptActionInterpreter::_doCloneSprite(class AptValue * pTarget /* r29 */, int nDepthInt /* r27 */, class AptValue * pInitObject /* r28 */) {
    // Local variables
    class AptValue * pSourceContext; // r1+0x24
    class AptValue * pRef; // r30
    class EAStringC sBuf; // r1+0x20
    class AptCIH * pSourceCIH; // r29
    class AptCIH * pNewText; // r1+0x1C
    class AptCIH * pPrev; // r1+0x18

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803024C0 -> 0x8030280C
// this: r24
class AptValue * AptActionInterpreter::getVariable(class AptValue * pCurrentContext /* r25 */, class AptValue * pWith /* r26 */, const class EAStringC * pVarName /* r27 */, int bGlobal /* r28 */, int bLookInFunctionScope /* r29 */, int bIsMember /* r30 */) {
    // Local variables
    class AptValue * pContext; // r1+0xC
    class EAStringC sVar; // r1+0x8
    class AptString * pString; // r31
    unsigned char bRet; // r31
    class AptValue * pRet; // r31
    class AptNativeHash * pThisNativeHash; // r0

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8030280C -> 0x803028C0
void AptActionInterpreter::valueToObject(class AptValue * pCurrentContext /* r28 */, class AptValue * pWith /* r29 */, class AptValue * pVal /* r30 */, class AptValue * * ppInst /* r31 */) {}

static char __PRETTY_FUNCTION__[64]; // size: 0x40, address: 0x80458D50
// Range: 0x803028C0 -> 0x80302C4C
// this: r30
void AptActionInterpreter::callFunction(class AptValue * pContext /* r27 */, class AptValue * pFuncDef /* r26 */, int nStackParams /* r25 */) {
    // Local variables
    int i; // r27
    int nStackElementsPre; // r31
    struct AptConstantPool origConstantPool; // r1+0x20
    class AptValue * pRetValue; // r0
    struct AptConstantPool origConstantPool; // r1+0x18
    class AptScriptFunctionBase * pPreviousFunction; // r26
    struct _AptScriptFunctionState pFuncState; // r1+0x10
    int nExpectedArgs; // r29
    int nMin; // r0
    class AptValue * pParam; // r0
    class AptCIH * pRoot; // r0
    int nStackElementsPost; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[64];
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80302C4C -> 0x80302C50
void * AptActionInterpreter::PrepareForExecution() {}

// Range: 0x80302C50 -> 0x80302CD4
// this: r29
void AptActionInterpreter::CleanupAfterExecution(void * pPassedValue /* r30 */) {
    // Local variables
    class AptValue * pThrown; // r31
    class EAStringC ans; // r1+0x8
}

static char __PRETTY_FUNCTION__[90]; // size: 0x5A, address: 0x80458D90
// Range: 0x80302CD4 -> 0x80303630
// this: r27
class AptObject * AptActionInterpreter::_createObject(class AptValue * pCurrentContext /* r16 */, const class EAStringC * szObject /* r15 */, int nParams /* r28 */, unsigned char bRunConstructor /* r29 */) {
    // Local variables
    class AptObject * pObject; // [invalid]
    class AptValue * pConstructor; // r31
    class AptArray * pArray; // r30
    int nElements; // r0
    int i; // r15
    class EAStringC sBuf; // r1+0x2C
    class AptString * pString; // r15
    class AptValue * pValue; // r15
    class AptValue * pCIH; // r15
    class EAStringC sMessage; // r1+0x28
    class AptNativeHash * pNativeHash; // r15
    class AptValue * pConstructorPrototype; // r16
    int nImplementedObjects; // r1+0x24
    class AptArray * prototypes; // r4

    // References
    // -> static char __PRETTY_FUNCTION__[90];
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0x2C
class AptError : public AptObject {
    // Static members
    static class AptNativeFunction * psMethod_toString; // size: 0x4

    // Members
public:
    class EAStringC msMessage; // offset 0x24, size 0x4
    class EAStringC msName; // offset 0x28, size 0x4
};
// total size: 0x28
class AptStringObject : public AptObject {
    // Members
public:
    class AptString * mpStringObject; // offset 0x24, size 0x4
};
// total size: 0x1
class StringPool {
    // Static members
    static class AptString * spFirstFree; // size: 0x4
    static int spPoolSize; // size: 0x4
    static class AptString * * spPool; // size: 0x4
    static class EAStringC saConstant[178]; // size: 0x2C8
};
static char __PRETTY_FUNCTION__[59]; // size: 0x3B, address: 0x80458E10
// Range: 0x80303630 -> 0x803037B8
// this: r27
void AptActionInterpreter::_doEnumerate(class AptValue * pCurrentContext /* r29 */, class AptValue * pCurWith /* r28 */) {
    // Local variables
    class AptValue * pObject; // r31
    class AptNativeHash * pNativeHash; // r30
    struct AptHashItem * pItem; // r29
    class AptString * pString; // r28
    class AptValue * pProto; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[59];
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803037B8 -> 0x80303890
static class AptString * _concatAsStrings(class AptValue * pA /* r29 */, class AptValue * pB /* r30 */) {
    // Local variables
    class AptString * pBA; // r31
    class EAStringC sTemp; // r1+0x8
}

struct FunctionTable sGlobalTable[185]; // size: 0x2E4, address: 0x80458E4C
static char __PRETTY_FUNCTION__[90]; // size: 0x5A, address: 0x80459130
// Range: 0x80303890 -> 0x80303AD8
// this: r29
unsigned char * AptActionInterpreter::runStream(const unsigned char * aActionStream /* r25 */, class AptCIH * pCurrentContext /* r31 */, int nMaxStreamBytes /* r30 */, struct AptCharacterInst * pParentCharacter /* r28 */) {
    // Local variables
    struct LocalContextT context; // r1+0x8
    enum Actions eAction; // r4
    int nPrevoiousStackFrameBase; // r31
    int nStackSizePost; // r0
    int iStackSize; // r0
    unsigned char bRelease; // r26

    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[90];
    // -> struct FunctionTable sGlobalTable[185];
}

// Range: 0x80303AD8 -> 0x80303BD0
void _escape(class EAStringC & sEsc /* r29 */) {
    // Local variables
    char strBuffer[6]; // r1+0x10
    char strBuffer1[2]; // r1+0x8
    class EAStringC sUnescapedCopy; // r1+0xC
    const char * pBuffer; // r30
    unsigned char cChar; // r0
}

// Range: 0x80303BD0 -> 0x80303C40
char _escape2Char(char a /* r30 */, char b /* r31 */) {
    // Local variables
    char sBuf[3]; // r1+0x8
    unsigned long x; // r0
}

// Range: 0x80303C40 -> 0x80303D2C
void _unEscape(class EAStringC & sEsc /* r29 */) {
    // Local variables
    char strBuffer[2]; // r1+0x8
    class EAStringC sUnescapedCopy; // r1+0xC
    const char * pBuffer; // r30
    unsigned char cChar; // r0
}

// Range: 0x80303D2C -> 0x80303E04
char * AptActionInterpreter::urlDecode(const char * szURL /* r27 */, class EAStringC & sKey /* r28 */, class EAStringC & sValue /* r29 */) {
    // Local variables
    const char * szCur; // r31
    const char * szEquals; // r30
}

// Range: 0x80303E04 -> 0x80303E58
unsigned char AptActionInterpreter::isFSCommand(const char * szCommand /* r30 */) {
    // References
    // -> const char * FSCOMMAND;
}

// Range: 0x80303E58 -> 0x80303EB4
int AptActionInterpreter::doFSCommand(const char * szCommand /* r30 */, const char * szParams /* r31 */) {
    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> const char * FSCOMMAND;
}

// Range: 0x80303EB4 -> 0x80303EB8
void AptActionInterpreter::_FunctionAptActionEnd() {}

// Range: 0x80303EB8 -> 0x80303F18
void AptActionInterpreter::_FunctionAptActionNextFrame() {
    // Local variables
    class AptCIH * pCIH; // r31
}

// Range: 0x80303F18 -> 0x80303F78
void AptActionInterpreter::_FunctionAptActionPrevFrame() {
    // Local variables
    class AptCIH * pCIH; // r31
}

// Range: 0x80303F78 -> 0x80304040
void AptActionInterpreter::_FunctionAptActionPlay(struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptCIH * pCurrentContext; // r31
}

// Range: 0x80304040 -> 0x803040B4
void AptActionInterpreter::_FunctionAptActionStop() {
    // Local variables
    class AptCIH * pCurrentContext; // r31
}

// Range: 0x803040B4 -> 0x803040B8
void AptActionInterpreter::_FunctionAptActionToggleQuality() {}

// Range: 0x803040B8 -> 0x803040BC
void AptActionInterpreter::_FunctionAptActionStopSounds() {}

// Range: 0x803040BC -> 0x803041E8
void AptActionInterpreter::_FunctionAptActionAdd(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803041E8 -> 0x80304314
void AptActionInterpreter::_FunctionAptActionSubtract(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304314 -> 0x80304440
void AptActionInterpreter::_FunctionAptActionMultiply(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304440 -> 0x80304534
void AptActionInterpreter::_FunctionAptActionDivide(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    float fFloat1; // f0
    float fFloat2; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304534 -> 0x8030467C
void AptActionInterpreter::_FunctionAptActionEquals(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8030467C -> 0x803047B8
void AptActionInterpreter::_FunctionAptActionLessThan(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803047B8 -> 0x80304914
void AptActionInterpreter::_FunctionAptActionAnd(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304914 -> 0x80304A70
void AptActionInterpreter::_FunctionAptActionOr(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int iA; // r0
    int iB; // r0
    float fA; // f0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304A70 -> 0x80304AD0
void AptActionInterpreter::_FunctionAptActionNot(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pValue; // r0
    class AptValue * pRetValue; // r31
}

// Range: 0x80304AD0 -> 0x80304C14
void AptActionInterpreter::_FunctionAptActionStringEquals(struct AptActionInterpreter * const pInterpreter /* r27 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int nResult; // r28
    class EAStringC sAString; // r1+0xC
    class EAStringC sBString; // r1+0x8

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304C14 -> 0x80304C98
void AptActionInterpreter::_FunctionAptActionStringLength(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pA; // r31
    class EAStringC sAString; // r1+0x8
    class AptInteger * pResult; // r31
}

// Range: 0x80304C98 -> 0x80304DD4
void AptActionInterpreter::_FunctionAptActionSubString(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pCount; // r31
    class AptValue * pIndex; // r30
    class AptValue * pStr; // r29
    int nCount; // r31
    int nIndex; // r30
    class EAStringC sString; // r1+0x10
    class AptString * pSubStr; // r29
}

// Range: 0x80304DD4 -> 0x80304E40
void AptActionInterpreter::_FunctionAptActionPop(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    int stackElements; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80304E40 -> 0x80304ED4
void AptActionInterpreter::_FunctionAptActionToInteger(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pValue; // r31
    int nInt; // r0
    class AptValue * pResult; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80304ED4 -> 0x80304F80
void AptActionInterpreter::_FunctionAptActionGetVariable(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pName; // r31
    class EAStringC sBuf; // r1+0x8
    class AptValue * pValue; // r31
}

// Range: 0x80304F80 -> 0x8030504C
void AptActionInterpreter::_FunctionAptActionSetVariable(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x8
    class AptValue * pValue; // r31
    class AptValue * pName; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

static char __PRETTY_FUNCTION__[126]; // size: 0x7E, address: 0x8045918C
// Range: 0x8030504C -> 0x80305148
void AptActionInterpreter::_FunctionAptActionSetTarget2(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pObject; // r31
    class EAStringC sBuf; // r1+0x8
    class AptValue * pTarget; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[126];
}

// Range: 0x80305148 -> 0x80305220
void AptActionInterpreter::_FunctionAptActionStringAdd(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptString * sUndef; // r29
    class AptValue * pResult; // r29
}

// Range: 0x80305220 -> 0x80305308
void AptActionInterpreter::_FunctionAptActionGetProperty(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pIndex; // r31
    class AptValue * pTarget; // r0
    class AptValue * pObject; // r1+0x8
    int nInt; // r0
    class AptValue * pPropValue; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static enum StringCode gaszPropertyNames[22];
}

// Range: 0x80305308 -> 0x803053E0
void AptActionInterpreter::_FunctionAptActionSetProperty(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptValue * pIndex; // r30
    class AptValue * pTarget; // r0
    class AptValue * pObject; // r1+0x8
    int nInt; // r0

    // References
    // -> static enum StringCode gaszPropertyNames[22];
}

// Range: 0x803053E0 -> 0x80305474
void AptActionInterpreter::_FunctionAptActionCloneSprite(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    class AptValue * pDepth; // r31
    class AptValue * pTarget; // r30
    class AptValue * pSource; // r29
    int nDepthInt; // r0
}

// Range: 0x80305474 -> 0x80305524
void AptActionInterpreter::_FunctionAptActionRemoveSprite(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pPath; // r31
    class AptValue * pObject; // r1+0x8
    class AptCIH * pCIH; // r31
    struct AptCharacterSpriteInstBase * pParentInst; // r0
}

// Range: 0x80305524 -> 0x80305640
void AptActionInterpreter::_FunctionAptActionTrace(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptString * sUndef; // r30
    class EAStringC sStr; // r1+0xC
    class EAStringC sTraceStr; // r1+0x8

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

static char __PRETTY_FUNCTION__[130]; // size: 0x82, address: 0x80459218
// Range: 0x80305640 -> 0x80305870
void AptActionInterpreter::_FunctionAptActionStartDragMovie(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    class AptValue * pTarget; // r27
    class AptValue * pContext; // r1+0xC
    class EAStringC sVar; // r1+0x8
    int nParams; // r31

    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> static char __PRETTY_FUNCTION__[130];
}

static char __PRETTY_FUNCTION__[129]; // size: 0x81, address: 0x8045929C
// Range: 0x80305870 -> 0x803058CC
void AptActionInterpreter::_FunctionAptActionStopDragMovie() {
    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[129];
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x803058CC -> 0x803058D0
void AptActionInterpreter::_FunctionAptActionStringLessThan() {}

// Range: 0x803058D0 -> 0x80305958
void AptActionInterpreter::_FunctionAptActionRandom(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pMax; // r31
    int nRand; // r0
    class AptInteger * pRand; // r31
}

// Range: 0x80305958 -> 0x8030595C
void AptActionInterpreter::_FunctionAptActionMBLength() {}

// Range: 0x8030595C -> 0x80305960
void AptActionInterpreter::_FunctionAptActionCharToAscii() {}

// Range: 0x80305960 -> 0x80305A14
void AptActionInterpreter::_FunctionAptActionAsciiToChar(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pVal; // r31
    class AptString * pTargetString; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80305A14 -> 0x80305A50
void AptActionInterpreter::_FunctionAptActionGetTimer(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // References
    // -> unsigned int gnCurTick;
}

// Range: 0x80305A50 -> 0x80305A54
void AptActionInterpreter::_FunctionAptActionMBSubString() {}

// Range: 0x80305A54 -> 0x80305A58
void AptActionInterpreter::_FunctionAptActionMBCharToAscii() {}

// Range: 0x80305A58 -> 0x80305A5C
void AptActionInterpreter::_FunctionAptActionMBAsciiToChar() {}

// Range: 0x80305A5C -> 0x80305B38
void AptActionInterpreter::_FunctionAptActionDelete(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pName; // r31
    class AptValue * pObject; // r30
    class EAStringC sBuf; // r1+0x8
}

// Range: 0x80305B38 -> 0x80305BE0
void AptActionInterpreter::_FunctionAptActionDelete2(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pName; // r31
    class EAStringC sBuf; // r1+0x8
}

// Range: 0x80305BE0 -> 0x80305C94
void AptActionInterpreter::_FunctionAptActionDefineLocal(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptValue * pVariable; // r0
}

static char __PRETTY_FUNCTION__[128]; // size: 0x80, address: 0x80459320
// Range: 0x80305C94 -> 0x80305E18
void AptActionInterpreter::_FunctionAptActionCallFunction(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pName; // [invalid]
    class AptValue * pParams; // r31
    class EAStringC sVar; // r1+0xC
    int nParams; // r31
    class AptValue * pFunctionValue; // r30
    class AptValue * pContext; // r1+0x8

    // References
    // -> static char __PRETTY_FUNCTION__[128];
}

// Range: 0x80305E18 -> 0x80305E24
void AptActionInterpreter::_FunctionAptActionReturn() {}

// Range: 0x80305E24 -> 0x80305F1C
void AptActionInterpreter::_FunctionAptActionModulo(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    float fFloat1; // f31

    // References
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[125]; // size: 0x7D, address: 0x804593A0
// Range: 0x80305F1C -> 0x80306020
void AptActionInterpreter::_FunctionAptActionNewObject(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pObjectName; // r31
    class AptValue * pParams; // r30
    class EAStringC sObject; // r1+0x8
    int nParams; // r30
    class AptObject * pObject; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[125];
}

// Range: 0x80306020 -> 0x80306104
void AptActionInterpreter::_FunctionAptActionDefineLocal2(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pVariable; // r0
    class EAStringC * pName; // r30
    class AptValue * pOldValue; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[125]; // size: 0x7D, address: 0x80459420
// Range: 0x80306104 -> 0x803061E8
void AptActionInterpreter::_FunctionAptActionInitArray(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pNumElements; // r0
    int nNumElements; // r31
    class AptArray * pArray; // r30
    int i; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[125];
}

static char __PRETTY_FUNCTION__[126]; // size: 0x7E, address: 0x804594A0
// Range: 0x803061E8 -> 0x8030632C
void AptActionInterpreter::_FunctionAptActionInitObject(struct AptActionInterpreter * const pInterpreter /* r25 */, struct LocalContextT * const pLocalContext /* r26 */) {
    // Local variables
    class AptValue * pNumElements; // r0
    int nNumElements; // r0
    class AptObject * pObject; // r30
    int i; // r29
    int stkReg; // r28
    class AptValue * pValue; // r27
    class AptValue * pName; // r26
    class EAStringC sBuf; // r1+0x8

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[126];
}

// Range: 0x8030632C -> 0x803065D0
void AptActionInterpreter::_FunctionAptActionTypeOf(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptString * pString; // r30
}

// Range: 0x803065D0 -> 0x803066D0
void AptActionInterpreter::_FunctionAptActionTargetPath(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x10
    class AptValue * pObject; // r0
    class AptValue * pContext; // r1+0xC
    class AptString * pTargetString; // r31

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803066D0 -> 0x803066E0
void AptActionInterpreter::_FunctionAptActionEnumerate(struct LocalContextT * const pLocalContext /* r5 */) {}

// Range: 0x803066E0 -> 0x80306964
void AptActionInterpreter::_FunctionAptActionAdd2(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r29
    int nSwfVersion; // r0
    class AptString * pBA; // r29
    int nInt1; // r0
    int nInt2; // r0
    float fFloat1; // f0
    float fFloat2; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80306964 -> 0x80306B30
void AptActionInterpreter::_FunctionAptActionLessThan2(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    int nResult; // r3
    class AptBoolean * pResult; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80306B30 -> 0x803070FC
void AptActionInterpreter::_FunctionAptActionEquals2(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    class AptValue * pA; // r29
    class AptValue * pB; // r28
    int nResult; // r27
    unsigned char fStrAIsFloat; // r27
    unsigned char fStrBIsFloat; // r30
    int nA; // r0
    float fB; // f0
    int nB; // r0
    int nB; // r0
    float fA; // f0
    int nA; // r0
    float fA; // f0
    float fB; // f0
    class EAStringC sAString; // r1+0xC
    class EAStringC sBString; // r1+0x8

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803070FC -> 0x80307228
void AptActionInterpreter::_FunctionAptActionToNumber(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pValue; // r30
    class AptValue * pNew; // r31
    class EAStringC sBuf; // r1+0x8
    int place; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80307228 -> 0x8030730C
void AptActionInterpreter::_FunctionAptActionToString(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptString * pUndef; // r31
    class EAStringC sBuf; // r1+0x8
    class AptString * pStr; // r31
}

// Range: 0x8030730C -> 0x80307348
void AptActionInterpreter::_FunctionAptActionPushDuplicate(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    class AptValue * pValue; // r0
}

// Range: 0x80307348 -> 0x803073C4
void AptActionInterpreter::_FunctionAptActionStackSwap(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pValue1; // r31
    class AptValue * pValue2; // r30
}

// Range: 0x803073C4 -> 0x8030754C
void AptActionInterpreter::_FunctionAptActionGetMember(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pName; // r31
    class AptValue * pObject; // r30
    class AptArray * pArray; // r30
    class AptValue * pValue; // r0
    class AptValue * pValue; // r0
    class EAStringC sBuf; // r1+0x8
    class AptValue * pValue; // r0

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8030754C -> 0x80307768
void AptActionInterpreter::_FunctionAptActionSetMember(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    class AptValue * pValue; // r31
    class AptValue * pName; // r30
    class AptValue * pObject; // r29
    class AptArray * pArray; // r29
    class EAStringC sBuf; // r1+0xC
    class EAStringC sBuf; // r1+0x8

    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80307768 -> 0x80307828
void AptActionInterpreter::_FunctionAptActionIncrement(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pNumber; // r31
    class AptValue * pNew; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80307828 -> 0x803078E8
void AptActionInterpreter::_FunctionAptActionDecrement(struct AptActionInterpreter * const pInterpreter /* r29 */) {
    // Local variables
    class AptValue * pNumber; // r31
    class AptValue * pNew; // r30

    // References
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[126]; // size: 0x7E, address: 0x80459520
// Range: 0x803078E8 -> 0x80307F78
void AptActionInterpreter::_FunctionAptActionCallMethod(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    class AptValue * pFunction; // r28
    class AptValue * pObject; // [invalid]
    class AptValue * pParams; // r27
    int nParams; // r26
    class EAStringC sFunction; // r1+0x10
    unsigned char bPushed; // r25
    class AptValue * pFunctionValue; // r24
    class AptValue * pObjectSave; // r23
    class AptValue * pThisObj; // r31
    class AptValue * pActualParams; // r0
    class AptValue * pThisObj; // r28
    class AptValue * pValue1; // r28
    class AptArray * pArrayObj; // r28
    int nLength; // r0
    int i; // r22
    unsigned char bIsGood; // r22
    class AptValue * pTmpPushValue; // r28
    class EAStringC pTmpStr; // r1+0xC
    class AptValue * pWithStkTop; // r21
    class AptNativeHash * pNativeHash; // r3
    class AptValue * pValue; // r3
    unsigned char bStayAlive; // r21
    class AptScriptFunctionBase * pFuncBase; // r0
    class AptCIH * pOldCIH; // r22
    class AptValue * pTmpTopVal; // r22

    // References
    // -> class AptValue * gpGlobalMovieclipPrototype;
    // -> static char __PRETTY_FUNCTION__[126];
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[125]; // size: 0x7D, address: 0x804595A0
// Range: 0x80307F78 -> 0x803080A8
void AptActionInterpreter::_FunctionAptActionNewMethod(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    class AptValue * pMethodName; // r30
    class AptValue * pScriptObjectName; // r31
    class AptValue * pParams; // r29
    class EAStringC sObject; // r1+0x8
    int nParams; // r29
    class AptObject * pObject; // r29

    // References
    // -> class AptNone * gpUndefinedValue;
    // -> static char __PRETTY_FUNCTION__[125];
}

// Range: 0x803080A8 -> 0x803080B8
void AptActionInterpreter::_FunctionAptActionEnumerate2(struct LocalContextT * const pLocalContext /* r5 */) {}

// Range: 0x803080B8 -> 0x80308180
void AptActionInterpreter::_FunctionAptActionBitAnd(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int nA; // r0
    int nB; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80308180 -> 0x80308248
void AptActionInterpreter::_FunctionAptActionBitOr(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int nA; // r0
    int nB; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80308248 -> 0x80308310
void AptActionInterpreter::_FunctionAptActionBitXor(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r31
    class AptValue * pB; // r30
    class AptValue * pResult; // r29
    int nA; // r0
    int nB; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80308310 -> 0x803083D8
void AptActionInterpreter::_FunctionAptActionBitLShift(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pShiftCount; // r31
    class AptValue * pValue; // r30
    class AptValue * pResult; // r29
    int nShiftCount; // r0
    int nValue; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803083D8 -> 0x803084A0
void AptActionInterpreter::_FunctionAptActionBitRShift(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pShiftCount; // r31
    class AptValue * pValue; // r30
    class AptValue * pResult; // r29
    int nShiftCount; // r0
    int nValue; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803084A0 -> 0x803084A4
void AptActionInterpreter::_FunctionAptActionBitURShift() {}

// Range: 0x803084A4 -> 0x80308780
void AptActionInterpreter::_FunctionAptActionStrictEquals(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    class AptValue * pA; // r29
    class AptValue * pB; // r28
    int nResult; // r27
    float fA; // f0
    int nB; // r0
    float fB; // f0
    int nA; // r0
    int nB; // r0
    float fB; // f0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x80308780 -> 0x8030890C
void AptActionInterpreter::_FunctionAptActionGreater(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    class AptValue * pA; // r30
    class AptValue * pB; // r29
    int nResult; // r3

    // References
    // -> class AptNone * gpUndefinedValue;
}

// total size: 0x4
struct AptAction_GotoFrame {
    // Members
    int nFrame; // offset 0x0, size 0x4
};
// Range: 0x8030890C -> 0x80308A10
void AptActionInterpreter::_FunctionAptActionGotoFrame(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptCIH * pCIH; // r30
    const struct AptAction_GotoFrame * pData; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80308A10 -> 0x80308B90
void AptActionInterpreter::_FunctionAptActionGetUrl(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    const struct AptAction_GetUrl * pData; // r0
    char szAptFilename[256]; // r1+0x18
    int nLength; // r0

    // References
    // -> struct AptLinker * gpLinker;
}

// total size: 0x4
struct AptAction_StoreRegister {
    // Members
    int nRegister; // offset 0x0, size 0x4
};
// Range: 0x80308B90 -> 0x80308BDC
void AptActionInterpreter::_FunctionAptActionStoreRegister() {
    // Local variables
    const struct AptAction_StoreRegister * pData; // r0
}

// Range: 0x80308BDC -> 0x80308BFC
void AptActionInterpreter::_FunctionAptActionDefineDictionary() {
    // Local variables
    const struct AptAction_Push * pData; // r0
}

// Range: 0x80308BFC -> 0x80308C00
void AptActionInterpreter::_FunctionAptActionWaitForFrame() {}

static char __PRETTY_FUNCTION__[125]; // size: 0x7D, address: 0x80459620
// Range: 0x80308C00 -> 0x80308D44
void AptActionInterpreter::_FunctionAptActionSetTarget(struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    const struct AptAction_SetTarget * pData; // r0
    class EAStringC strTarget; // r1+0x8
    class AptValue * pTarget; // r3
    const char * p; // r4
    class AptCIH * t; // r3

    // References
    // -> static char __PRETTY_FUNCTION__[125];
}

// Range: 0x80308D44 -> 0x80308E10
void AptActionInterpreter::_FunctionAptActionGotoLabel(struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    const struct AptAction_GotoLabel * pData; // r0
    class EAStringC pLabelName; // r1+0x8
    class AptCIH * pTarget; // r31
    int nFrame; // r0
}

static char __PRETTY_FUNCTION__[120]; // size: 0x78, address: 0x804596A0
// Range: 0x80308E10 -> 0x80308EE4
void AptActionInterpreter::_FunctionAptActionWith(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    const struct AptAction_With * pData; // r0
    class AptValue * pWithValue; // r30
    class AptValue * pWith; // r1+0x8

    // References
    // -> static char __PRETTY_FUNCTION__[120];
}

// Range: 0x80308EE4 -> 0x80308F68
void AptActionInterpreter::_FunctionAptActionPush(struct AptActionInterpreter * const pInterpreter /* r28 */) {
    // Local variables
    const struct AptAction_Push * pData; // r0
    int i; // r29
}

// Range: 0x80308F68 -> 0x8030924C
void AptActionInterpreter::_FunctionAptActionGetUrl2(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pA; // r30
    class AptValue * pB; // r31
    class EAStringC sAString; // r1+0x14
    class EAStringC sBString; // r1+0x10
    int nLength; // r0
    class EAStringC sBuf; // r1+0xC
    class AptValue * pContext; // r0
    class AptValue * pVal; // r30

    // References
    // -> struct AptLinker * gpLinker;
}

// Range: 0x8030924C -> 0x80309354
void AptActionInterpreter::_FunctionAptActionDefineFunction(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    const struct AptAction_DefineFunction * pData; // r30
    class EAStringC strName; // r1+0xC
    class AptCIH * pCIH; // r29
}

// Range: 0x80309354 -> 0x80309438
void AptActionInterpreter::_FunctionAptActionDefineFunction2(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    const struct AptAction_DefineFunction2 * pData; // r30
    class AptCIH * pCIH; // r29
    class EAStringC strName; // r1+0x8
}

// total size: 0x4
struct AptAction_BranchAddress {
    // Members
    int nTargetDelta; // offset 0x0, size 0x4
};
// Range: 0x80309438 -> 0x803094DC
void AptActionInterpreter::_FunctionAptActionBranchIfTrue(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    const struct AptAction_BranchAddress * pData; // r0
    class AptValue * pCondition; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x803094DC -> 0x803095E8
void AptActionInterpreter::_FunctionAptActionCallFrame(struct AptActionInterpreter * const pInterpreter /* r28 */, struct LocalContextT * const pLocalContext /* r29 */) {
    // Local variables
    class AptValue * pFrame; // r31
    int nFrame; // r30
    class AptValue * pLabelContext; // r1+0xC
    class EAStringC sName; // r1+0x8
}

// total size: 0x4
struct AptAction_GotoFrame2 {
    // Members
    int bPlay; // offset 0x0, size 0x4
};
// Range: 0x803095E8 -> 0x80309798
void AptActionInterpreter::_FunctionAptActionGotoFrame2(struct AptActionInterpreter * const pInterpreter /* r26 */, struct LocalContextT * const pLocalContext /* r27 */) {
    // Local variables
    const struct AptAction_GotoFrame2 * pData; // r0
    class AptValue * pFrame; // r30
    class AptCIH * pCIH; // r29
    int nFrame; // r28
    class AptValue * pLabelContext; // r1+0xC
    class EAStringC sName; // r1+0x8
}

// Range: 0x80309798 -> 0x80309808
void AptActionInterpreter::_FunctionAptActionBranchAlways(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    const struct AptAction_BranchAddress * pData; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80309808 -> 0x80309860
void AptActionInterpreter::_FunctionAptActionPushThis(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptString * pString; // r31
}

// Range: 0x80309860 -> 0x803098B8
void AptActionInterpreter::_FunctionAptActionPushGlobal(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptString * pString; // r31
}

// Range: 0x803098B8 -> 0x803098F4
void AptActionInterpreter::_FunctionAptActionPush0(struct AptActionInterpreter * const pInterpreter /* r31 */) {}

// Range: 0x803098F4 -> 0x80309930
void AptActionInterpreter::_FunctionAptActionPush1(struct AptActionInterpreter * const pInterpreter /* r31 */) {}

// Range: 0x80309930 -> 0x8030996C
void AptActionInterpreter::_FunctionAptActionPushTrue(struct AptActionInterpreter * const pInterpreter /* r31 */) {}

// Range: 0x8030996C -> 0x803099A8
void AptActionInterpreter::_FunctionAptActionPushFalse(struct AptActionInterpreter * const pInterpreter /* r31 */) {}

// Range: 0x803099A8 -> 0x803099B0
void AptActionInterpreter::_FunctionAptActionPushNULL() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803099B0 -> 0x803099B8
void AptActionInterpreter::_FunctionAptActionPushUndefined() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x803099B8 -> 0x80309A14
void AptActionInterpreter::_FunctionAptActionCallFuncAndPop(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80309A14 -> 0x80309A80
void AptActionInterpreter::_FunctionAptActionCallFuncSetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80309A80 -> 0x80309ADC
void AptActionInterpreter::_FunctionAptActionCallMethodPop(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80309ADC -> 0x80309B48
void AptActionInterpreter::_FunctionAptActionCallMethodSetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x80309B48 -> 0x80309BB0
void AptActionInterpreter::_FunctionAptActionPushThisVariable(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    class AptValue * pValue; // r0
}

// Range: 0x80309BB0 -> 0x80309BB8
void AptActionInterpreter::_FunctionAptActionPushGlobalVariable() {
    // References
    // -> class AptGlobal * gpGlobalGlobalObject;
}

// Range: 0x80309BB8 -> 0x80309C0C
void AptActionInterpreter::_FunctionAptActionPushZeroSetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    class AptInteger * pInteger; // r0
}

// Range: 0x80309C0C -> 0x80309C88
void AptActionInterpreter::_FunctionAptActionPushString(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    const struct AptAction_PushString * pData; // r0
    class AptString * pString; // r31
}

// Range: 0x80309C88 -> 0x80309CA8
void AptActionInterpreter::_FunctionAptActionPushStringDictByte() {
    // Local variables
    unsigned char uDictionary; // r0
}

// total size: 0x2
struct /* @class$12358AptActionInterpreter_cpp */ {
    // Members
    char c0; // offset 0x0, size 0x1
    char c1; // offset 0x1, size 0x1
};
union /* @class$12357AptActionInterpreter_cpp */ {
    unsigned short uDictionary; // offset 0x0, size 0x2
    // total size: 0x2
    struct /* @class$12358AptActionInterpreter_cpp */ {
        // Members
        char c0; // offset 0x0, size 0x1
        char c1; // offset 0x1, size 0x1
    } S; // offset 0x0, size 0x2
};
// Range: 0x80309CA8 -> 0x80309CF4
void AptActionInterpreter::_FunctionAptActionPushStringDictWord() {
    // Local variables
    const unsigned char * pI; // r6
    union /* @class$12357AptActionInterpreter_cpp */ {
        unsigned short uDictionary; // offset 0x0, size 0x2
        // total size: 0x2
        struct /* @class$12358AptActionInterpreter_cpp */ {
            // Members
            char c0; // offset 0x0, size 0x1
            char c1; // offset 0x1, size 0x1
        } S; // offset 0x0, size 0x2
    } Var; // r1+0x8
}

// Range: 0x80309CF4 -> 0x80309D8C
void AptActionInterpreter::_FunctionAptActionPushStringGetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    const struct AptAction_PushString * pData; // r0
    class AptValue * pValue; // r0

    // References
    // -> class EAStringC gstrTempString;
}

// Range: 0x80309D8C -> 0x80309E20
void AptActionInterpreter::_FunctionAptActionPushStringGetMember(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    const struct AptAction_PushString * pData; // r0
    class AptString * pString; // r31
}

// Range: 0x80309E20 -> 0x80309EB4
void AptActionInterpreter::_FunctionAptActionPushStringSetVar(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    const struct AptAction_PushString * pData; // r0
    class AptString * pString; // r31
}

// Range: 0x80309EB4 -> 0x80309F48
void AptActionInterpreter::_FunctionAptActionPushStringSetMember(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    const struct AptAction_PushString * pData; // r0
    class AptString * pString; // r31
}

// Range: 0x80309F48 -> 0x80309FCC
void AptActionInterpreter::_FunctionAptActionStringDictByteGetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0
    class AptValue * pValue; // r0
}

// Range: 0x80309FCC -> 0x8030A02C
void AptActionInterpreter::_FunctionAptActionStringDictByteGetMember(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0
}

// Range: 0x8030A02C -> 0x8030A0BC
void AptActionInterpreter::_FunctionAptActionDictCallFuncPop(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x8030A0BC -> 0x8030A150
void AptActionInterpreter::_FunctionAptActionDictCallFuncSetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x8030A150 -> 0x8030A1E0
void AptActionInterpreter::_FunctionAptActionDictCallMethodPop(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x8030A1E0 -> 0x8030A274
void AptActionInterpreter::_FunctionAptActionDictCallMethodSetVar(struct AptActionInterpreter * const pInterpreter /* r30 */, struct LocalContextT * const pLocalContext /* r31 */) {
    // Local variables
    unsigned char uDictionary; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// total size: 0x4
struct /* @class$12492AptActionInterpreter_cpp */ {
    // Members
    char c0; // offset 0x0, size 0x1
    char c1; // offset 0x1, size 0x1
    char c2; // offset 0x2, size 0x1
    char c3; // offset 0x3, size 0x1
};
union /* @class$12491AptActionInterpreter_cpp */ {
    float fValue; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$12492AptActionInterpreter_cpp */ {
        // Members
        char c0; // offset 0x0, size 0x1
        char c1; // offset 0x1, size 0x1
        char c2; // offset 0x2, size 0x1
        char c3; // offset 0x3, size 0x1
    } S; // offset 0x0, size 0x4
};
// Range: 0x8030A274 -> 0x8030A2DC
void AptActionInterpreter::_FunctionAptActionPushFloat(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    const unsigned char * pI; // r7
    union /* @class$12491AptActionInterpreter_cpp */ {
        float fValue; // offset 0x0, size 0x4
        // total size: 0x4
        struct /* @class$12492AptActionInterpreter_cpp */ {
            // Members
            char c0; // offset 0x0, size 0x1
            char c1; // offset 0x1, size 0x1
            char c2; // offset 0x2, size 0x1
            char c3; // offset 0x3, size 0x1
        } S; // offset 0x0, size 0x4
    } Var; // r1+0x8
}

// Range: 0x8030A2DC -> 0x8030A328
void AptActionInterpreter::_FunctionAptActionPushByte(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    signed char c; // r0
}

// total size: 0x2
struct /* @class$12513AptActionInterpreter_cpp */ {
    // Members
    unsigned char c0; // offset 0x0, size 0x1
    unsigned char c1; // offset 0x1, size 0x1
};
union /* @class$12512AptActionInterpreter_cpp */ {
    signed short nValue; // offset 0x0, size 0x2
    // total size: 0x2
    struct /* @class$12513AptActionInterpreter_cpp */ {
        // Members
        unsigned char c0; // offset 0x0, size 0x1
        unsigned char c1; // offset 0x1, size 0x1
    } S; // offset 0x0, size 0x2
};
// Range: 0x8030A328 -> 0x8030A380
void AptActionInterpreter::_FunctionAptActionPushWord(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    const unsigned char * pI; // r5
    union /* @class$12512AptActionInterpreter_cpp */ {
        signed short nValue; // offset 0x0, size 0x2
        // total size: 0x2
        struct /* @class$12513AptActionInterpreter_cpp */ {
            // Members
            unsigned char c0; // offset 0x0, size 0x1
            unsigned char c1; // offset 0x1, size 0x1
        } S; // offset 0x0, size 0x2
    } Var; // r1+0x8
}

// total size: 0x4
struct /* @class$12525AptActionInterpreter_cpp */ {
    // Members
    unsigned char c0; // offset 0x0, size 0x1
    unsigned char c1; // offset 0x1, size 0x1
    unsigned char c2; // offset 0x2, size 0x1
    unsigned char c3; // offset 0x3, size 0x1
};
union /* @class$12524AptActionInterpreter_cpp */ {
    int nValue; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$12525AptActionInterpreter_cpp */ {
        // Members
        unsigned char c0; // offset 0x0, size 0x1
        unsigned char c1; // offset 0x1, size 0x1
        unsigned char c2; // offset 0x2, size 0x1
        unsigned char c3; // offset 0x3, size 0x1
    } S; // offset 0x0, size 0x4
};
// Range: 0x8030A380 -> 0x8030A3E8
void AptActionInterpreter::_FunctionAptActionPushDWord(struct AptActionInterpreter * const pInterpreter /* r31 */) {
    // Local variables
    const unsigned char * pI; // r6
    union /* @class$12524AptActionInterpreter_cpp */ {
        int nValue; // offset 0x0, size 0x4
        // total size: 0x4
        struct /* @class$12525AptActionInterpreter_cpp */ {
            // Members
            unsigned char c0; // offset 0x0, size 0x1
            unsigned char c1; // offset 0x1, size 0x1
            unsigned char c2; // offset 0x2, size 0x1
            unsigned char c3; // offset 0x3, size 0x1
        } S; // offset 0x0, size 0x4
    } Var; // r1+0x8
}

// Range: 0x8030A3E8 -> 0x8030A48C
void AptActionInterpreter::_FunctionAptActionBranchIfFalse(struct AptActionInterpreter * const pInterpreter /* r29 */, struct LocalContextT * const pLocalContext /* r30 */) {
    // Local variables
    struct AptAction_BranchAddress * pData; // r0
    class AptValue * pCondition; // r0

    // References
    // -> class AptValueVector * gpValuesToRelease;
}

// Range: 0x8030A48C -> 0x8030A614
void AptActionInterpreter::_FunctionAptActionExtends(struct AptActionInterpreter * const pInterpreter /* r25 */) {
    // Local variables
    class AptValue * pSuperClass; // r31
    class AptValue * pSubClass; // r30
    class AptNativeHash * pSuperHash; // r29
    class AptNativeHash * pSubHash; // r28
    class AptValue * pSuperPrototype; // r27
    class AptValue * pSubPrototype; // r26
}

// Range: 0x8030A614 -> 0x8030A760
unsigned char AptActionInterpreter::isObjectOfType(class AptValue * pObject /* r29 */, class AptValue * pInterface /* r31 */) {
    // Local variables
    unsigned char bIsOfType; // r30
    class AptValue * pFuncPrototype; // r31
    class AptValue * pProto; // r3
}

// Range: 0x8030A760 -> 0x8030A7F4
void AptActionInterpreter::_FunctionAptActionInstanceOf(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pObject; // r31
    class AptValue * pInterface; // r0
    unsigned char retVal; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8030A7F4 -> 0x8030A8A8
void AptActionInterpreter::_FunctionAptActionCastOp(struct AptActionInterpreter * const pInterpreter /* r30 */) {
    // Local variables
    class AptValue * pObject; // r31
    class AptValue * pInterface; // r0

    // References
    // -> class AptNone * gpUndefinedValue;
}

// Range: 0x8030A8A8 -> 0x8030AA48
void AptActionInterpreter::_FunctionAptActionImplementsOp(struct AptActionInterpreter * const pInterpreter /* r25 */) {
    // Local variables
    class AptValue * pObject; // r30
    int nInterfaces; // r0
    class AptValue * pTemp; // r0
    class EAStringC sTemp; // r1+0xC
    class AptArray * pA; // r29
    int i; // r28
    class AptNativeHash * pNativeHash; // r27
    class AptValue * pFuncPrototype; // r26
    class EAStringC sTmp; // r1+0x8
}

static char __PRETTY_FUNCTION__[119]; // size: 0x77, address: 0x80459728
// Range: 0x8030AA48 -> 0x8030AC84
void AptActionInterpreter::_FunctionAptActionTry(struct AptActionInterpreter * const pInterpreter /* r27 */, struct LocalContextT * const pLocalContext /* r28 */) {
    // Local variables
    unsigned int nPreStackSize; // r0
    const struct AptAction_TryCatchFinallyBlock * pTry; // r30
    class AptValue * pThrown; // r29
    class EAStringC strParam; // r1+0x8
    class AptValue * pThrown; // r29
    unsigned int nPostStackSize; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[119];
}

// Range: 0x8030AC84 -> 0x8030ACC8
void AptActionInterpreter::_FunctionAptActionThrow(struct AptActionInterpreter * const pInterpreter /* r31 */) {}

// total size: 0x44
struct {} __vt__12AptMovieClip; // size: 0x44, address: 0x804597A0
// total size: 0x44
struct {} __vt__15AptStringObject; // size: 0x44, address: 0x804597E4
// total size: 0x44
struct {} __vt__13AptFrameStack; // size: 0x44, address: 0x80459828
// total size: 0x44
struct {} __vt__9AptLookup; // size: 0x44, address: 0x8045986C
// total size: 0x44
struct {} __vt__11AptRegister; // size: 0x44, address: 0x804598B0
// total size: 0x44
struct {} __vt__12AptValueNoGC; // size: 0x44, address: 0x804598F4
// Range: 0x8030ACC8 -> 0x8030AD10
static void __sinit_\AptActionInterpreter_cpp() {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// total size: 0xC
class AptNone : public AptValueNoGC {};

