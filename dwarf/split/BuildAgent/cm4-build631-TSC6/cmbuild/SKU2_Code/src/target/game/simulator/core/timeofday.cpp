/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\timeofday.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E416C -> 0x800E459C
*/
// Range: 0x800E416C -> 0x800E4178
GameTime::GameTime() {}

// Range: 0x800E4178 -> 0x800E4184
GameTime::GameTime() {}

// Range: 0x800E4184 -> 0x800E4190
GameTime::GameTime() {}

// Range: 0x800E4190 -> 0x800E41FC
void GameTime::SetTime() {}

// Range: 0x800E41FC -> 0x800E425C
void GameTime::AddTime() {}

// Range: 0x800E425C -> 0x800E4374
void GameTime::GetTimeParts() {
    // Local variables
    int tsec; // r0
    int t; // r27
}

// Range: 0x800E4374 -> 0x800E446C
// this: r30
void GameTime::SetToCurrentTime() {
    // Local variables
    class cSimulator * pSimulator; // r31
}

// Range: 0x800E446C -> 0x800E447C
int GameTime::GetDeltaSeconds() {}

// Range: 0x800E447C -> 0x800E44B0
class GameTime GameTime::Now(class GameTime * now /* r31 */) {}

// Range: 0x800E44B0 -> 0x800E44FC
class GameTime GameTime::GetGameStartTime(class GameTime * start /* r31 */) {}

// Range: 0x800E44FC -> 0x800E459C
float GameTime::GetTimeInHours() {
    // Local variables
    signed short nCurrentYear; // r1+0x12
    signed short nCurrentMonth; // r1+0x10
    signed short nCurrentDay; // r1+0xE
    signed short nCurrentHour; // r1+0xC
    signed short nCurrentMinute; // r1+0xA
    signed short nCurrentSecond; // r1+0x8
    float fTimeInHours; // f1
}


