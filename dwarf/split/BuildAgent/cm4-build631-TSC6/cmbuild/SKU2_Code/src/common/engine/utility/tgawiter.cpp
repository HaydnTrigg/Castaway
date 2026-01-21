/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\tgawiter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FAAE4 -> 0x802FC24C
*/
// Range: 0x802FAAE4 -> 0x802FACF0
// this: r22
unsigned char TGAWriter::Write(const char * szFileName /* r23 */, class ETexture * pTexture /* r24 */, unsigned char bWriteTDF /* r25 */, unsigned char bWriteSDF /* r26 */, struct TDF_INFO * pTDFOverride /* r27 */, unsigned char bCatalogThumbnail /* r28 */) {
    // Local variables
    unsigned char bTexturePalettized; // r30
    void * paletteData; // r30
    int pitchX; // r1+0x10
    int pitchY; // r1+0xC
    void * pixelData; // r29
    class EString strTGAName; // r1+0x8
}

// Range: 0x802FACF0 -> 0x802FAF7C
// this: r29
unsigned char TGAWriter::OpenTGA(const char * fileName /* r31 */, struct TGA_INFO & info /* r30 */) {
    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802FAF7C -> 0x802FB2E4
// this: r25
unsigned char TGAWriter::WriteTGARows(void * pPixelData /* r26 */, unsigned int width /* r27 */, unsigned int height /* r28 */) {
    // Local variables
    unsigned int color; // r5
    unsigned int y; // r31
    unsigned int * pBuffer; // r6
    unsigned int x; // r0
    unsigned int y; // r29
    unsigned int * pBuffer; // r4
    unsigned int x; // r5
}

// Range: 0x802FB2E4 -> 0x802FB474
// this: r31
unsigned char TGAWriter::CloseTGA() {
    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802FB474 -> 0x802FBD08
// this: r31
unsigned char TGAWriter::WriteTDF(struct TDF_INFO * pTDFOverride /* r28 */, unsigned char bCatalogThumbnail /* r29 */) {
    // Local variables
    class EString strTDFName; // r1+0xD4
    class EString strTDF; // r1+0xD0
    class EString strWidth; // r1+0xCC
    class EString strHeight; // r1+0xC8
    class EString strDoubleWidth; // r1+0xC4
    class EString strDoubleHeight; // r1+0xC0
    class EString strFilter; // r1+0xBC
    class EString strFormat; // r1+0xB8
    class EString strClamp; // r1+0xB4
    class EString strSourceFile; // r1+0xB0
}

// Range: 0x802FBD08 -> 0x802FC198
// this: r29
unsigned char TGAWriter::WriteSDF(unsigned char bCatalogThumbnail /* r30 */) {
    // Local variables
    class EString strSDFPath; // r1+0x14
    class EString strSDF; // r1+0x10
}

// Range: 0x802FC198 -> 0x802FC24C
unsigned char TGAWriter::WriteFile(void * pData /* r29 */, unsigned int nDataLen /* r30 */) {
    // Local variables
    unsigned char bResult; // r31
    class EFile * pFile; // r1+0x8
    unsigned int nBytesWritten; // r0

    // References
    // -> class ENgcFileSystem _eorFileSys;
}


