/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\e_ngcthread.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027AB68 -> 0x8027AFC4
*/
// Range: 0x8027AB68 -> 0x8027ABA0
EThread::EThread() {
    // References
    // -> struct [anonymous] __vt__7EThread;
}

// Range: 0x8027ABA0 -> 0x8027AC14
// this: r30
EThread::~EThread() {
    // References
    // -> struct [anonymous] __vt__7EThread;
}

// Range: 0x8027AC14 -> 0x8027AC6C
// this: r31
void EThread::DeallocateStack() {}

// Range: 0x8027AC6C -> 0x8027AD6C
// this: r30
unsigned char EThread::Create(int priority /* r31 */) {
    // Local variables
    unsigned char success; // r0

    // References
    // -> class TLinkedList _threadList;
}

// Range: 0x8027AD6C -> 0x8027AD9C
void * EThread::ThreadEntryPoint() {}

// Range: 0x8027AD9C -> 0x8027AE88
// this: r29
void EThread::Attach(int id /* r30 */) {
    // References
    // -> class TLinkedList _threadList;
}

// Range: 0x8027AE88 -> 0x8027AF64
// this: r31
void EThread::Destroy() {
    // References
    // -> class TLinkedList _threadList;
}

// Range: 0x8027AF64 -> 0x8027AF6C
void EThread::Start() {}

// Range: 0x8027AF6C -> 0x8027AF74
void EThread::SetPriority() {}

// Range: 0x8027AF74 -> 0x8027AFB0
// this: r31
unsigned char EThread::IsCallingThread() {}

// Range: 0x8027AFB0 -> 0x8027AFB8
void * EThread::GetStack() {}

// Range: 0x8027AFB8 -> 0x8027AFC0
int EThread::GetStackSize() {}

// Range: 0x8027AFC0 -> 0x8027AFC4
int EThread::GetCurrentThreadId() {}


