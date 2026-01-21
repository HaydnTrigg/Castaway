/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\treesim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E459C -> 0x800E60E0
*/
// Range: 0x800E459C -> 0x800E4600
// this: r30
TreeStack::TreeStack(class TreeSim & treeSim /* r31 */) {}

// Range: 0x800E4600 -> 0x800E4670
// this: r30
TreeStack::~TreeStack() {}

// Range: 0x800E4670 -> 0x800E46CC
// this: r30
TreeSim::~TreeSim() {}

// Range: 0x800E46CC -> 0x800E46D4
void TreeStack::Initialize() {}

// Range: 0x800E46D4 -> 0x800E47D4
// this: r28
class StackElem * TreeStack::MakeNewFrame(unsigned int newFrameSize /* r29 */) {
    // Local variables
    unsigned int currentMemSize; // r31
    unsigned int newMemSize; // r3
    char * newStart; // r29
}

// Range: 0x800E47D4 -> 0x800E48F0
// this: r28
void StackElem::ReconStream(class ReconBuffer * r /* r29 */, int version /* r30 */, class BehaviorFinder * bLoader /* r31 */) {
    // Local variables
    signed short treeID; // r1+0x8
}

// Range: 0x800E48F0 -> 0x800E4914
class ISimInstance * TreeSim::GetISimInstance() {}

// Range: 0x800E4914 -> 0x800E4998
// this: r30
TreeSim::TreeSim() {
    // References
    // -> struct [anonymous] __vt__7TreeSim;
}

// Range: 0x800E4998 -> 0x800E49D8
// this: r30
void TreeSim::Initialize(signed short * autoStackArea /* r31 */) {}

// Range: 0x800E49D8 -> 0x800E4A50
signed short TreeSim::GetCurrentPrimitive() {
    // Local variables
    class StackElem * elem; // r31
    class Behavior * b; // r30
    struct BehaviorNode bn; // r1+0x8
}

// Range: 0x800E4A50 -> 0x800E4ACC
// this: r28
void TreeSim::Reset(class Behavior * startBehavior /* r29 */, signed short startTreeID /* r30 */) {
    // Local variables
    signed short temStack[4]; // r1+0x8
}

// Range: 0x800E4ACC -> 0x800E4C90
// this: r26
unsigned char TreeSim::Gosub(class Behavior * pTransfer /* r27 */, const signed short * inStack /* r28 */, signed short treeID /* r29 */) {
    // Local variables
    class StackElem * lastElem; // r0
    class StackElem newElem; // r1+0x10
    class ConsoleAutoRefCount tree; // r1+0x8
}

// Range: 0x800E4C90 -> 0x800E4ED0
// this: r26
unsigned char TreeSim::RunCheckTree(class Behavior * beh /* r27 */, signed short stackObjectID /* r28 */, signed short treeID /* r30 */, signed short * locals /* r29 */) {
    // Local variables
    class StackElem newElem; // r1+0x8
    class StackElem * elem; // r31
    unsigned char result; // r0
    unsigned char wasInMainSim; // r30
    int iterations; // r29
    float tickDuration; // f31

    // References
    // -> unsigned char g_bTreeAssert;
    // -> unsigned char sInMainSim;
}

// Range: 0x800E4ED0 -> 0x800E4EE8
void TreeSim::RunOneTickTree() {}

// Range: 0x800E4EE8 -> 0x800E4F3C
// this: r30
enum NodeAction TreeSim::HandleBreakpoint(class StackElem * elem /* r31 */) {}

// Range: 0x800E4F3C -> 0x800E513C
// this: r31
enum NodeAction TreeSim::DoNodeAction(class StackElem * elem /* r30 */) {
    // Local variables
    struct BehaviorNode * node; // r1+0x8
    unsigned char nodeExists; // r0

    // References
    // -> signed short sMaxIterations;
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800E513C -> 0x800E5280
// this: r28
enum NodeAction TreeSim::DoNodeActionNormal(class StackElem * elem /* r29 */, struct BehaviorNode * node /* r30 */) {
    // Local variables
    const signed short * stackPass; // r31
    class ConsoleAutoRefCount tree; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800E5280 -> 0x800E5400
// this: r29
enum NodeAction TreeSim::DoNodeActionPrimitive(class StackElem * elem /* r30 */, struct BehaviorNode * node /* r31 */) {
    // Local variables
    enum TreeReturnCode result; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800E5400 -> 0x800E5658
// this: r31
enum NodeAction TreeSim::DoNodeActionTransition(class StackElem * elem /* r29 */) {
    // Local variables
    int transition; // r30
    struct BehaviorNode bn; // r1+0x8
    unsigned char nodeExists; // r0
    const struct BehaviorNode * node; // r3

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800E5658 -> 0x800E566C
unsigned char TreeSim::GetLastTransition() {}

// Range: 0x800E566C -> 0x800E56EC
// this: r31
unsigned char TreeSim::Simulate() {}

// Range: 0x800E56EC -> 0x800E57C0
// this: r29
class StackElem * TreeSim::GetHighLevelAction() {
    // Local variables
    signed short stackSize; // r31
    class Behavior * curBeh; // r30
}

// Range: 0x800E57C0 -> 0x800E5800
// this: r31
class StackElem * TreeSim::GetCurElem() {}

// Range: 0x800E5800 -> 0x800E58C4
// this: r29
class StackElem * TreeSim::GetMainSimElem() {
    // Local variables
    int level; // r31
    int i; // r30
}

// Range: 0x800E58C4 -> 0x800E58D0
class StackElem * TreeSim::GetNthElem() {}

// Range: 0x800E58D0 -> 0x800E58F8
signed short TreeSim::GetStackSize() {}

// Range: 0x800E58F8 -> 0x800E5B54
// this: r25
void TreeStack::ReconStream(class ReconBuffer * r /* r26 */, int version /* r27 */, class BehaviorFinder * bLoader /* r28 */) {
    // Local variables
    signed short stackSize; // r1+0xC
    int cnt; // r29
    class StackElem frame; // r1+0x28
    signed short numLocals; // r1+0xA
    signed short locals[4]; // r1+0x20
    signed short treeID; // r1+0x8
    int stackSize; // r1+0x18
    int memSize; // r1+0x14
    int i; // r29
}

// Range: 0x800E5B54 -> 0x800E5B5C
signed short * StackElem::GetParams() {}

// Range: 0x800E5B5C -> 0x800E5B70
signed short * StackElem::GetLocals() {}

// Range: 0x800E5B70 -> 0x800E5B8C
unsigned int StackElem::GetSize() {
    // Local variables
    unsigned int numVars; // r3
}

// Range: 0x800E5B8C -> 0x800E5BBC
// this: r31
class StackElem * StackElem::NextFrame() const {}

// Range: 0x800E5BBC -> 0x800E5D58
// this: r29
void StackElem::Setup(const class StackElem * other /* r30 */, const signed short * params /* r31 */) {
    // Local variables
    signed short * myParams; // r0
    int i; // r4
}

// Range: 0x800E5D58 -> 0x800E5DB8
// this: r31
class StackElem * TreeStack::GetNewFrame() {}

// Range: 0x800E5DB8 -> 0x800E5E20
// this: r31
int TreeStack::GetMemUsed() {}

// Range: 0x800E5E20 -> 0x800E5E30
int TreeStack::GetMemReserved() {}

// Range: 0x800E5E30 -> 0x800E5EC4
// this: r29
void TreeStack::AssignFrames(int numFrames /* r30 */) {
    // Local variables
    class StackElem * top; // r1+0x8
    int i; // r31
}

// Range: 0x800E5EC4 -> 0x800E5F34
// this: r29
void TreeStack::Push(const class StackElem * newFrame /* r30 */, const signed short * params /* r31 */) {
    // Local variables
    class StackElem * destFrame; // r1+0x8
}

// Range: 0x800E5F34 -> 0x800E5FB0
// this: r31
void TreeStack::Pop() {
    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800E5FB0 -> 0x800E6004
// this: r30
void TreeStack::Reset() {}

// Range: 0x800E6004 -> 0x800E6068
// this: r30
class StackElem * TreeStack::GetNthFrame(int n /* r31 */) {}

// Range: 0x800E6068 -> 0x800E6070
int TreeStack::GetStackSize() {}

// Range: 0x800E6070 -> 0x800E608C
signed short StackElem::GetTreeID() {}

// Range: 0x800E608C -> 0x800E60B4
void StackElem::SetTreeID() {}

// Range: 0x800E60B4 -> 0x800E60E0
void StackElem::SetBreak() {}


