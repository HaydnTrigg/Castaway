/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcscheduler.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CD5C0 -> 0x802CD964
*/
// Range: 0x802CD5C0 -> 0x802CD64C
// this: r30
ENgcScheduler::~ENgcScheduler() {}

// Range: 0x802CD64C -> 0x802CD6CC
// this: r31
unsigned char ENgcScheduler::Init() {}

// Range: 0x802CD6CC -> 0x802CD774
void ENgcScheduler::QueueSetupFrameBuffer() {
    // References
    // -> int _ngcPerf0StatCount;
    // -> struct ENgcPerfStat _ngcPerf0Stats[12];
    // -> static int currentPerf0Stat;
    // -> unsigned char _ngcPerfStatsEnabled;
    // -> int _ngcStateChangesPerFrame;
    // -> int _ngcVerts;
    // -> int _ngcStrips;
    // -> float _ngcAveStripLength;
    // -> class EGraphics * _pGfx;
    // -> float _ngcAveClocksPerVert;
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802CD774 -> 0x802CD848
void ENgcScheduler::QueueDisplayList() {
    // References
    // -> class EGraphics * _pGfx;
    // -> class ENgcRenderer _ngcRenderer;
    // -> void (ENgcRenderer::* m_jumpTable[77])(void *, void *, struct EDLEntry *);
}

// Range: 0x802CD848 -> 0x802CD880
void ENgcScheduler::QueueCompletionEvent() {
    // References
    // -> class ENgcRenderer _ngcRenderer;
}

// Range: 0x802CD880 -> 0x802CD8A8
void ENgcScheduler::QueueSwapBuffer() {
    // References
    // -> float _avestriplength;
    // -> float _aveclockspervert;
    // -> int _vertsperframe;
    // -> float _ngcAveStripLength;
    // -> float _ngcAveClocksPerVert;
    // -> int _ngcVerts;
    // -> int _ngcFrameCount;
}

// Range: 0x802CD8A8 -> 0x802CD8AC
void ENgcScheduler::Flush() {}

// Range: 0x802CD8AC -> 0x802CD8B0
void ENgcScheduler::TextureLoadsComplete() {}

// Range: 0x802CD8B0 -> 0x802CD8B4
void ENgcScheduler::RenderingComplete() {}

// Range: 0x802CD8B4 -> 0x802CD8BC
int ENgcScheduler::GetLastRetraceCount() {}

// Range: 0x802CD8BC -> 0x802CD8F0
// this: r31
void ENgcScheduler::Main() {
    // Local variables
    unsigned int msg; // r1+0x8
}

// Range: 0x802CD8F0 -> 0x802CD964
// this: r30
void ENgcScheduler::FreeSchedCommand(struct ESchedCommand * p /* r31 */) {}


