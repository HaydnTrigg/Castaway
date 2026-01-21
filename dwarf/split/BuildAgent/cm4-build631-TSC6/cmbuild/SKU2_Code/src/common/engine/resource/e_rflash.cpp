/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rflash.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DCB74 -> 0x802DD4C4
*/
// Range: 0x802DCB74 -> 0x802DCBB4
ERFlash::ERFlash() {
    // References
    // -> struct [anonymous] __vt__7ERFlash;
}

// Range: 0x802DCBB4 -> 0x802DCC44
// this: r30
ERFlash::~ERFlash() {
    // References
    // -> class EFlashManager _flashman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__7ERFlash;
}

// Range: 0x802DCC44 -> 0x802DCC8C
// this: r31
void ERFlash::Deallocate() {}

// Range: 0x802DCC8C -> 0x802DCD60
// this: r30
void ERFlash::Load(class EFile * pFile /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
}

// Range: 0x802DCD60 -> 0x802DCDA0
// this: r31
class FlashBigFile * ERFlash::GetFlashBigData() {
    // Local variables
    class FlashBigFile * temp; // r0
}

// Range: 0x802DCDA0 -> 0x802DCDB0
FlashBigFile::FlashBigFile() {}

// Range: 0x802DCDB0 -> 0x802DCEF8
// this: r24
FlashBigFile::~FlashBigFile() {
    // Local variables
    int numFiles; // r0
    int curFile; // r27
    class FlashTexture * tex; // r26

    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802DCEF8 -> 0x802DCF68
unsigned char FlashBigFile::IsTexture(int index /* r1+0x8 */) {
    // Local variables
    const char * name; // r31
    int len; // r0
}

// Range: 0x802DCF68 -> 0x802DD17C
// this: r27
void FlashBigFile::LoadFiles(class EFile * file /* r28 */) {
    // Local variables
    char header[24]; // r1+0x18
    int fileoffset; // r0
    int headersize; // r25
    int offset; // r1+0x14
    int size; // r1+0x10
    int numFiles; // r0
    int curFile; // r1+0xC
    int curFile'82; // r0

    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802DD17C -> 0x802DD1C8
// this: r31
void * FlashBigFile::GetDataSection() {
    // Local variables
    int offset; // r1+0x10
    int size; // r1+0xC
    int index; // r1+0x8
}

// Range: 0x802DD1C8 -> 0x802DD238
// this: r31
struct AptAuxGeoInfo * FlashBigFile::GetGeometry() {
    // Local variables
    struct AptAuxGeoInfo * pInfo; // r31
}

// Range: 0x802DD238 -> 0x802DD2D4
// this: r31
class ERTexture * FlashBigFile::GetTexture(int & width /* r29 */, int & height /* r30 */) {
    // Local variables
    class FlashTexture * flashTex; // r31
}

// Range: 0x802DD2D4 -> 0x802DD4C4
// this: r29
class FlashTexture * FlashBigFile::CreateTexture(int index /* r1+0x8 */) {
    // Local variables
    unsigned char * texData; // r31
    unsigned char * pData; // r30
    struct ETextureDef * td; // r0
    unsigned int * signature; // r0
    int width; // r1+0x10
    int height; // r1+0xC
    char texNameBuf2[64]; // r1+0x18

    // References
    // -> class EFlashManager _flashman;
    // -> class ETextureManager _textureman;
}


