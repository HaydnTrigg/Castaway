/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\base_ngc_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802796CC -> 0x802796CC
*/
int m_channelCounter; // size: 0x4, address: 0x805DA28C
static unsigned char firstFile; // size: 0x1, address: 0x805DA290
// total size: 0x30
class EWiicorderFile : public EFile {
    // Static members
    static int m_channelCounter; // size: 0x4

    // Members
protected:
    int m_channel; // offset 0x2C, size 0x4
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[14]; // offset 0xA, size 0xE
    unsigned long rvlMagic; // offset 0x18, size 0x4
    unsigned long gcMagic; // offset 0x1C, size 0x4
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0x78
class ENgcFile : public EFile {
    // Static members
    static unsigned int E_NGC_READBUFFER_SIZE; // size: 0x4
    static unsigned int E_NGC_OFFSET_ALIGNMENT; // size: 0x4
    static unsigned int E_NGC_READ_ALIGNMENT; // size: 0x4

    // Members
protected:
    struct DVDFileInfo m_file; // offset 0x2C, size 0x3C
    unsigned long m_fileOffset; // offset 0x68, size 0x4
    unsigned char * m_readBuffer; // offset 0x6C, size 0x4
    unsigned int m_readBufferOffset; // offset 0x70, size 0x4
    unsigned char m_dirty; // offset 0x74, size 0x1
};
static unsigned int totalRead; // size: 0x4, address: 0x805DBE88
static enum SeekType lutSeekType[3]; // size: 0xC, address: 0x80453954
// total size: 0x10
struct VectorBase {
    // Static members
    static unsigned long kAlignment; // size: 0x4
    static unsigned long kAlignmentOffset; // size: 0x4
    static unsigned long npos; // size: 0x4
    static unsigned long kMaxSize; // size: 0x4

    // Members
protected:
    class EFile * * mpBegin; // offset 0x0, size 0x4
    class EFile * * mpEnd; // offset 0x4, size 0x4
    class EFile * * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
// total size: 0x34
struct {} __vt__8ENgcFile; // size: 0x34, address: 0x80453960
// total size: 0x10
struct {} __vt__7EThread; // size: 0x10, address: 0x80453998
// total size: 0x18
struct {} __vt__10ESemaphore; // size: 0x18, address: 0x804539A8
// total size: 0x34
struct {} __vt__14EWiicorderFile; // size: 0x34, address: 0x804539C0
// total size: 0x3C
struct {} __vt__14ENgcFileSystem; // size: 0x3C, address: 0x804539F4
// total size: 0x10
class vector : public VectorBase {};

