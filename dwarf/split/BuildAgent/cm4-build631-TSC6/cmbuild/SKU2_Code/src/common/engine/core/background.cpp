/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\core\background.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027B0DC -> 0x8027B634
*/
// Range: 0x8027B0DC -> 0x8027B11C
// this: r31
Background::~Background() {}

// Range: 0x8027B11C -> 0x8027B190
// this: r30
BackgroundImpl::~BackgroundImpl() {}

// Range: 0x8027B190 -> 0x8027B1F0
// this: r31
void BackgroundImpl::Shutdown() {
    // References
    // -> class Background * _pBackground;
}

// Range: 0x8027B1F0 -> 0x8027B244
// this: r31
void BackgroundImpl::TerminateThread() {}

// Range: 0x8027B244 -> 0x8027B2AC
// this: r31
void BackgroundImpl::Init() {}

// Range: 0x8027B2AC -> 0x8027B2B0
void BackgroundImpl::Update() {}

// Range: 0x8027B2B0 -> 0x8027B314
// this: r30
void BackgroundImpl::ExecuteRoutine(void (* pRoutine)() /* r31 */) {}

// Range: 0x8027B314 -> 0x8027B388
// this: r29
void BackgroundImpl::ExecuteArgRoutine(void (* pArgRoutine)(void *) /* r30 */, void * data /* r31 */) {}

// Range: 0x8027B388 -> 0x8027B394
void BackgroundImpl::SendCommand() {}

// Range: 0x8027B394 -> 0x8027B458
// this: r30
void BackgroundImpl::Flush() {
    // Local variables
    class EEvent flushEvent; // r1+0x8
}

// Range: 0x8027B458 -> 0x8027B460
unsigned char BackgroundImpl::IsCallingThread() {}

// Range: 0x8027B460 -> 0x8027B550
// this: r30
void BackgroundImpl::Main() {
    // Local variables
    unsigned int msg; // r1+0x8
    class BackgroundCmd * pCmd; // r31
}

// Range: 0x8027B550 -> 0x8027B634
static void __sinit_\engine_core_unity_cpp() {
    // References
    // -> class EScene _scene;
    // -> class EThread _idleThread;
    // -> class EVec3 _vAxes[3];
    // -> class Background * _pBackground;
    // -> struct [anonymous] __vt__14BackgroundImpl;
    // -> static class BackgroundImpl _background;
    // -> struct [anonymous] __vt__10Background;
}


