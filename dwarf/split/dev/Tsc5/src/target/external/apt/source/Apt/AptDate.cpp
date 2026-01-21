/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptDate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031A67C -> 0x8031D7CC
*/
// total size: 0x8
struct DateMembers {
    // Members
    char * szName; // offset 0x0, size 0x4
    int nIndex; // offset 0x4, size 0x4
};
static struct DateMembers wordlist[37]; // size: 0x128, address: 0x8045B8A8
static signed char lookup[58]; // size: 0x3A, address: 0x8045B9D0
// total size: 0x1
class DateMembersIndex {};
// Range: 0x8031A67C -> 0x8031A6E4
unsigned char AptDate::dateIsYearLeap() {
    // Local variables
    unsigned char bIsLeap; // r3
}

// Range: 0x8031A6E4 -> 0x8031A754
int AptDate::dateGetNumDaysInMonth() {
    // Local variables
    int nNumDays; // r7
}

// Range: 0x8031A754 -> 0x8031A898
void AptDate::setDates(struct AptSysClock * mTM1 /* r30 */, struct AptSysClock * mTM2 /* r31 */) {
    // Local variables
    int tmp; // r0
}

// Range: 0x8031A898 -> 0x8031AB34
// this: r25
int AptDate::getDayOfWeek(int year /* r26 */, int month /* r27 */, int day /* r28 */) {
    // Local variables
    int nTmp1; // r31
    int nTmp2; // r4
    int nCentury; // r30
    int nDoomsMonth; // r29
    int aCentury[4]; // r1+0x8
    int nYear; // r3
}

// Range: 0x8031AB34 -> 0x8031B0F4
// this: r30
void AptDate::toString(class EAStringC & sDate /* r31 */) {
    // Local variables
    char days[7][4]; // r1+0x10
    char mon[12][4]; // r1+0x30
    char szTemp[4]; // r1+0xC
}

class AptNativeFunction * psMethod_getDate; // size: 0x4, address: 0x805DC2B8
// Range: 0x8031B0F4 -> 0x8031B11C
class AptValue * AptDate::sMethod_getDate() {}

class AptNativeFunction * psMethod_getDay; // size: 0x4, address: 0x805DC2BC
// Range: 0x8031B11C -> 0x8031B198
class AptValue * AptDate::sMethod_getDay(class AptValue * pThis /* r28 */) {}

class AptNativeFunction * psMethod_getFullYear; // size: 0x4, address: 0x805DC2C0
// Range: 0x8031B198 -> 0x8031B1C0
class AptValue * AptDate::sMethod_getFullYear() {}

class AptNativeFunction * psMethod_getHours; // size: 0x4, address: 0x805DC2C4
// Range: 0x8031B1C0 -> 0x8031B1E8
class AptValue * AptDate::sMethod_getHours() {}

class AptNativeFunction * psMethod_getMilliseconds; // size: 0x4, address: 0x805DC2C8
// Range: 0x8031B1E8 -> 0x8031B210
class AptValue * AptDate::sMethod_getMilliseconds() {}

class AptNativeFunction * psMethod_getMinutes; // size: 0x4, address: 0x805DC2CC
// Range: 0x8031B210 -> 0x8031B238
class AptValue * AptDate::sMethod_getMinutes() {}

class AptNativeFunction * psMethod_getMonth; // size: 0x4, address: 0x805DC2D0
// Range: 0x8031B238 -> 0x8031B260
class AptValue * AptDate::sMethod_getMonth() {}

class AptNativeFunction * psMethod_getSeconds; // size: 0x4, address: 0x805DC2D4
// Range: 0x8031B260 -> 0x8031B288
class AptValue * AptDate::sMethod_getSeconds() {}

class AptNativeFunction * psMethod_getTime; // size: 0x4, address: 0x805DC2D8
// Range: 0x8031B288 -> 0x8031B290
class AptValue * AptDate::sMethod_getTime() {}

class AptNativeFunction * psMethod_getTimezoneOffset; // size: 0x4, address: 0x805DC2DC
// Range: 0x8031B290 -> 0x8031B2C0
class AptValue * AptDate::sMethod_getTimezoneOffset() {}

class AptNativeFunction * psMethod_getUTCDate; // size: 0x4, address: 0x805DC2E0
// Range: 0x8031B2C0 -> 0x8031B2E8
class AptValue * AptDate::sMethod_getUTCDate() {}

class AptNativeFunction * psMethod_getUTCDay; // size: 0x4, address: 0x805DC2E4
// Range: 0x8031B2E8 -> 0x8031B364
class AptValue * AptDate::sMethod_getUTCDay(class AptValue * pThis /* r28 */) {}

class AptNativeFunction * psMethod_getUTCFullYear; // size: 0x4, address: 0x805DC2E8
// Range: 0x8031B364 -> 0x8031B38C
class AptValue * AptDate::sMethod_getUTCFullYear() {}

class AptNativeFunction * psMethod_getUTCHours; // size: 0x4, address: 0x805DC2EC
// Range: 0x8031B38C -> 0x8031B3B4
class AptValue * AptDate::sMethod_getUTCHours() {}

class AptNativeFunction * psMethod_getUTCMilliseconds; // size: 0x4, address: 0x805DC2F0
// Range: 0x8031B3B4 -> 0x8031B3DC
class AptValue * AptDate::sMethod_getUTCMilliseconds() {}

class AptNativeFunction * psMethod_getUTCMinutes; // size: 0x4, address: 0x805DC2F4
// Range: 0x8031B3DC -> 0x8031B404
class AptValue * AptDate::sMethod_getUTCMinutes() {}

class AptNativeFunction * psMethod_getUTCMonth; // size: 0x4, address: 0x805DC2F8
// Range: 0x8031B404 -> 0x8031B42C
class AptValue * AptDate::sMethod_getUTCMonth() {}

class AptNativeFunction * psMethod_getUTCSeconds; // size: 0x4, address: 0x805DC2FC
// Range: 0x8031B42C -> 0x8031B454
class AptValue * AptDate::sMethod_getUTCSeconds() {}

class AptNativeFunction * psMethod_getYear; // size: 0x4, address: 0x805DC300
// Range: 0x8031B454 -> 0x8031B480
class AptValue * AptDate::sMethod_getYear() {}

class AptNativeFunction * psMethod_setDate; // size: 0x4, address: 0x805DC304
// Range: 0x8031B480 -> 0x8031B538
class AptValue * AptDate::sMethod_setDate(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setFullYear; // size: 0x4, address: 0x805DC308
// Range: 0x8031B538 -> 0x8031B648
class AptValue * AptDate::sMethod_setFullYear(class AptValue * pThis /* r28 */, int nParams /* r31 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setHours; // size: 0x4, address: 0x805DC30C
// Range: 0x8031B648 -> 0x8031B700
class AptValue * AptDate::sMethod_setHours(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setMilliseconds; // size: 0x4, address: 0x805DC310
// Range: 0x8031B700 -> 0x8031B7B8
class AptValue * AptDate::sMethod_setMilliseconds(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setMinutes; // size: 0x4, address: 0x805DC314
// Range: 0x8031B7B8 -> 0x8031B870
class AptValue * AptDate::sMethod_setMinutes(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setMonth; // size: 0x4, address: 0x805DC318
// Range: 0x8031B870 -> 0x8031B928
class AptValue * AptDate::sMethod_setMonth(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setSeconds; // size: 0x4, address: 0x805DC31C
// Range: 0x8031B928 -> 0x8031B9E0
class AptValue * AptDate::sMethod_setSeconds(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setTime; // size: 0x4, address: 0x805DC320
// Range: 0x8031B9E0 -> 0x8031B9E8
class AptValue * AptDate::sMethod_setTime() {}

class AptNativeFunction * psMethod_setUTCDate; // size: 0x4, address: 0x805DC324
// Range: 0x8031B9E8 -> 0x8031BAA4
class AptValue * AptDate::sMethod_setUTCDate(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCFullYear; // size: 0x4, address: 0x805DC328
// Range: 0x8031BAA4 -> 0x8031BBB8
class AptValue * AptDate::sMethod_setUTCFullYear(class AptValue * pThis /* r28 */, int nParams /* r31 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCHours; // size: 0x4, address: 0x805DC32C
// Range: 0x8031BBB8 -> 0x8031BC74
class AptValue * AptDate::sMethod_setUTCHours(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCMilliseconds; // size: 0x4, address: 0x805DC330
// Range: 0x8031BC74 -> 0x8031BD30
class AptValue * AptDate::sMethod_setUTCMilliseconds(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCMinutes; // size: 0x4, address: 0x805DC334
// Range: 0x8031BD30 -> 0x8031BDEC
class AptValue * AptDate::sMethod_setUTCMinutes(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCMonth; // size: 0x4, address: 0x805DC338
// Range: 0x8031BDEC -> 0x8031BEA8
class AptValue * AptDate::sMethod_setUTCMonth(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setUTCSeconds; // size: 0x4, address: 0x805DC33C
// Range: 0x8031BEA8 -> 0x8031BF64
class AptValue * AptDate::sMethod_setUTCSeconds(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_setYear; // size: 0x4, address: 0x805DC340
// Range: 0x8031BF64 -> 0x8031C01C
class AptValue * AptDate::sMethod_setYear(class AptValue * pThis /* r28 */) {
    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptNone * gpUndefinedValue;
}

class AptNativeFunction * psMethod_toString; // size: 0x4, address: 0x805DC344
// Range: 0x8031C01C -> 0x8031C090
class AptValue * AptDate::sMethod_toString(class AptValue * pThis /* r30 */) {
    // Local variables
    class AptString * newDate; // r31
    class EAStringC tmp; // r1+0x8
}

class AptNativeFunction * psMethod_UTC; // size: 0x4, address: 0x805DC348
// Range: 0x8031C090 -> 0x8031C098
class AptValue * AptDate::sMethod_UTC() {
    // References
    // -> class AptNone * gpUndefinedValue;
}

static char __PRETTY_FUNCTION__[77]; // size: 0x4D, address: 0x8045BA3C
// Range: 0x8031C098 -> 0x8031CF98
class AptValue * AptDate::objectMemberLookup(const class EAStringC * const pName /* r30 */) {
    // References
    // -> class AptNativeFunction * psMethod_UTC;
    // -> class AptNativeFunction * psMethod_toString;
    // -> class AptNativeFunction * psMethod_setYear;
    // -> class AptNativeFunction * psMethod_setUTCSeconds;
    // -> class AptNativeFunction * psMethod_setUTCMonth;
    // -> class AptNativeFunction * psMethod_setUTCMinutes;
    // -> class AptNativeFunction * psMethod_setUTCMilliseconds;
    // -> class AptNativeFunction * psMethod_setUTCHours;
    // -> class AptNativeFunction * psMethod_setUTCFullYear;
    // -> class AptNativeFunction * psMethod_setUTCDate;
    // -> class AptNativeFunction * psMethod_setTime;
    // -> class AptNativeFunction * psMethod_setSeconds;
    // -> class AptNativeFunction * psMethod_setMonth;
    // -> class AptNativeFunction * psMethod_setMinutes;
    // -> class AptNativeFunction * psMethod_setMilliseconds;
    // -> class AptNativeFunction * psMethod_setHours;
    // -> class AptNativeFunction * psMethod_setFullYear;
    // -> class AptNativeFunction * psMethod_setDate;
    // -> class AptNativeFunction * psMethod_getYear;
    // -> class AptNativeFunction * psMethod_getUTCSeconds;
    // -> class AptNativeFunction * psMethod_getUTCMonth;
    // -> class AptNativeFunction * psMethod_getUTCMinutes;
    // -> class AptNativeFunction * psMethod_getUTCMilliseconds;
    // -> class AptNativeFunction * psMethod_getUTCHours;
    // -> class AptNativeFunction * psMethod_getUTCFullYear;
    // -> class AptNativeFunction * psMethod_getUTCDay;
    // -> class AptNativeFunction * psMethod_getUTCDate;
    // -> class AptNativeFunction * psMethod_getTimezoneOffset;
    // -> class AptNativeFunction * psMethod_getTime;
    // -> class AptNativeFunction * psMethod_getSeconds;
    // -> class AptNativeFunction * psMethod_getMonth;
    // -> class AptNativeFunction * psMethod_getMinutes;
    // -> class AptNativeFunction * psMethod_getMilliseconds;
    // -> class AptNativeFunction * psMethod_getHours;
    // -> class AptNativeFunction * psMethod_getFullYear;
    // -> class AptNativeFunction * psMethod_getDay;
    // -> static char __PRETTY_FUNCTION__[77];
    // -> class AptNativeFunction * psMethod_getDate;
}

static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045BB30
// Range: 0x8031CF98 -> 0x8031D7CC
void AptDate::CleanNativeFunctions() {
    // References
    // -> class AptNativeFunction * psMethod_UTC;
    // -> class AptNativeFunction * psMethod_toString;
    // -> class AptNativeFunction * psMethod_setYear;
    // -> class AptNativeFunction * psMethod_setUTCSeconds;
    // -> class AptNativeFunction * psMethod_setUTCMonth;
    // -> class AptNativeFunction * psMethod_setUTCMinutes;
    // -> class AptNativeFunction * psMethod_setUTCMilliseconds;
    // -> class AptNativeFunction * psMethod_setUTCHours;
    // -> class AptNativeFunction * psMethod_setUTCFullYear;
    // -> class AptNativeFunction * psMethod_setUTCDate;
    // -> class AptNativeFunction * psMethod_setTime;
    // -> class AptNativeFunction * psMethod_setSeconds;
    // -> class AptNativeFunction * psMethod_setMonth;
    // -> class AptNativeFunction * psMethod_setMinutes;
    // -> class AptNativeFunction * psMethod_setMilliseconds;
    // -> class AptNativeFunction * psMethod_setHours;
    // -> class AptNativeFunction * psMethod_setFullYear;
    // -> class AptNativeFunction * psMethod_setDate;
    // -> class AptNativeFunction * psMethod_getYear;
    // -> class AptNativeFunction * psMethod_getUTCSeconds;
    // -> class AptNativeFunction * psMethod_getUTCMonth;
    // -> class AptNativeFunction * psMethod_getUTCMinutes;
    // -> class AptNativeFunction * psMethod_getUTCMilliseconds;
    // -> class AptNativeFunction * psMethod_getUTCHours;
    // -> class AptNativeFunction * psMethod_getUTCFullYear;
    // -> class AptNativeFunction * psMethod_getUTCDay;
    // -> class AptNativeFunction * psMethod_getUTCDate;
    // -> class AptNativeFunction * psMethod_getTimezoneOffset;
    // -> class AptNativeFunction * psMethod_getTime;
    // -> class AptNativeFunction * psMethod_getSeconds;
    // -> class AptNativeFunction * psMethod_getMonth;
    // -> class AptNativeFunction * psMethod_getMinutes;
    // -> class AptNativeFunction * psMethod_getMilliseconds;
    // -> class AptNativeFunction * psMethod_getHours;
    // -> class AptNativeFunction * psMethod_getFullYear;
    // -> class AptNativeFunction * psMethod_getDay;
    // -> static char __PRETTY_FUNCTION__[32];
    // -> class AptNativeFunction * psMethod_getDate;
}

// total size: 0x44
struct {} __vt__7AptDate; // size: 0x44, address: 0x8045BB50

