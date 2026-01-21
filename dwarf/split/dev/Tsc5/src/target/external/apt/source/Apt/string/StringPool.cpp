/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\string\StringPool.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80335690 -> 0x80337474
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x8045FC78
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045FCC8
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045FCF4
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045FD30
static char __PRETTY_FUNCTION__[60]; // size: 0x3C, address: 0x8045FD64
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045FDA0
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045FDD8
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045FDF8
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045FE28
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045FE48
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045FE78
static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045FEA8
static char __PRETTY_FUNCTION__[51]; // size: 0x33, address: 0x8045FECC
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x8045FF00
static char __PRETTY_FUNCTION__[41]; // size: 0x29, address: 0x8045FF30
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045FF5C
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x8045FF8C
static char __PRETTY_FUNCTION__[34]; // size: 0x22, address: 0x8045FFB8
static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045FFDC
static char __PRETTY_FUNCTION__[40]; // size: 0x28, address: 0x80460010
static char __PRETTY_FUNCTION__[36]; // size: 0x24, address: 0x80460038
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8046005C
static char __PRETTY_FUNCTION__[61]; // size: 0x3D, address: 0x80460088
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x804600C8
static char __PRETTY_FUNCTION__[42]; // size: 0x2A, address: 0x804600EC
static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x80460118
class EAStringC saConstant[178]; // size: 0x2C8, address: 0x80545A80
class AptString * * spPool; // size: 0x4, address: 0x805DC518
int spPoolSize; // size: 0x4, address: 0x805DC51C
class AptString * spFirstFree; // size: 0x4, address: 0x805DC520
// Range: 0x80335690 -> 0x80337040
void StringPool::Initialize(int iSize /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> int spPoolSize;
    // -> class AptString * * spPool;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> class EAStringC saConstant[178];
}

static char __PRETTY_FUNCTION__[23]; // size: 0x17, address: 0x80460558
// Range: 0x80337040 -> 0x80337134
void StringPool::Teardown() {
    // Local variables
    int i; // r28
    class AptString * pString; // r27
    class AptString * pNextString; // r26
    unsigned char bRemoved; // r25

    // References
    // -> class EAStringC saConstant[178];
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> int spPoolSize;
    // -> class AptValueVector * gpValuesToRelease;
    // -> class AptString * * spPool;
    // -> static char __PRETTY_FUNCTION__[23];
}

static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80460580
// Range: 0x80337134 -> 0x80337270
class AptString * StringPool::GetFromPool(const char * const pText /* r27 */) {
    // Local variables
    unsigned short uHash; // r0
    unsigned short uIndex; // r0
    class AptString * pString; // r29
    class EAStringC * pNativeString; // r28
    unsigned int iCurrentGCRoot; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[44];
    // -> class AptString * * spPool;
    // -> int spPoolSize;
}

static char __PRETTY_FUNCTION__[46]; // size: 0x2E, address: 0x804605AC
// Range: 0x80337270 -> 0x80337390
void StringPool::RemoveFromPool(class AptString * const pString /* r29 */) {
    // Local variables
    unsigned int iCurrentGCRoot; // r0
    unsigned short uHash; // r0
    class AptString * pLocalString; // r30

    // References
    // -> static char __PRETTY_FUNCTION__[46];
    // -> class AptString * * spPool;
    // -> int spPoolSize;
}

// Range: 0x80337390 -> 0x80337400
void StringPool::ClearTemporaryPool() {
    // Local variables
    class AptString * pNext; // r31

    // References
    // -> class AptString * spFirstFree;
}

// Range: 0x80337400 -> 0x80337458
static void __sinit_\StringPool_cpp() {
    // References
    // -> class EAStringC saConstant[178];
}


