/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_storable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026F0B8 -> 0x8026F2E0
*/
// Range: 0x8026F0B8 -> 0x8026F1D0
// this: r29
class EStorable * EStorable::CreateCopy() const {
    // Local variables
    class EMemoryWriteStream writeStream; // r1+0x30
    class EStorable * pNewDataStructure; // r1+0x8
    class EMemoryReadStream readStream; // r1+0xC

    // References
    // -> struct [anonymous] __vt__17EMemoryReadStream;
    // -> struct [anonymous] __vt__18EMemoryWriteStream;
}

// Range: 0x8026F210 -> 0x8026F264
unsigned char EStorable::IsExactType(class ETypeInfo * pType /* r31 */) {}

// Range: 0x8026F264 -> 0x8026F2E0
// this: r30
class EStorable * EStorable::DynamicCast(class ETypeInfo * pType /* r31 */) {}


