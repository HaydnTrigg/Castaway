/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_msgqueue.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026581C -> 0x80265C04
*/
// Range: 0x8026581C -> 0x80265868
// this: r31
EMsgQueue::EMsgQueue() {}

// Range: 0x80265868 -> 0x802658E0
// this: r30
EMsgQueue::~EMsgQueue() {}

// Range: 0x802658E0 -> 0x802659DC
// this: r27
unsigned char EMsgQueue::Create(int size /* r28 */) {
    // Local variables
    unsigned char inRet; // r0
    unsigned char outRet; // r0
}

// Range: 0x802659DC -> 0x80265A40
// this: r30
void EMsgQueue::Destroy() {}

// Range: 0x80265A40 -> 0x80265B20
// this: r30
unsigned char EMsgQueue::Send(unsigned int msg /* r31 */) {
    // Local variables
    unsigned char success; // r0
}

// Range: 0x80265B20 -> 0x80265BE4
// this: r30
unsigned char EMsgQueue::Receive(unsigned int * pMsgOut /* r31 */) {
    // Local variables
    unsigned char success; // r0
}

// Range: 0x80265BE4 -> 0x80265C04
int EMsgQueue::GetCount() {
    // Local variables
    int in; // r4
    int out; // r5
}


