/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\xfont.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1CC8 -> 0x802D2464
*/
// Range: 0x802D1CC8 -> 0x802D1CD4
void XFONTInit() {
    // References
    // -> static unsigned int m_fbSize;
    // -> static unsigned int XfbWidth;
}

// Range: 0x802D1CD4 -> 0x802D1CDC
void XFONTSetFrameBuffer() {
    // References
    // -> static unsigned char * m_xfb;
}

// Range: 0x802D1CDC -> 0x802D23B8
void RGBtoYUV() {
    // Local variables
    float Y; // f0
    float Cb; // f3
    float Cr; // f4

    // References
    // -> static int y2;
    // -> static int y3;
    // -> static int y1;
    // -> static int method;
}

// Range: 0x802D23B8 -> 0x802D2464
void XFONTDrawRGBPixel(int dx /* r28 */, int dy /* r29 */, int x /* r30 */, int y /* r31 */) {
    // Local variables
    unsigned long yuv[3]; // r1+0x8
    unsigned char * ptr; // r0

    // References
    // -> static unsigned char * m_xfb;
    // -> static unsigned int XfbWidth;
}


