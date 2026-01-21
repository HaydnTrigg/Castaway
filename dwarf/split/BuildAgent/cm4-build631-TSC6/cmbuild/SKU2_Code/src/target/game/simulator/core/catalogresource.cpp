/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\catalogresource.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80108274 -> 0x80108440
*/
// Range: 0x80108274 -> 0x801082A4
class CatalogResource * CatalogResource::CreateInstance() {}

// Range: 0x801082A4 -> 0x80108304
// this: r31
CatalogResourceImpl::CatalogResourceImpl() {
    // References
    // -> unsigned short * pDefault;
    // -> struct [anonymous] __vt__19CatalogResourceImpl;
}

// Range: 0x80108304 -> 0x80108324
void CatalogResource::DestroyInstance() {}

// Range: 0x8010837C -> 0x80108428
// this: r28
int CatalogResourceImpl::Load(signed short id /* r29 */) {
    // Local variables
    const struct ResFile * pData; // r0
    const struct CatalogData * pCatalogData; // r0
}

// Range: 0x80108428 -> 0x80108430
class ELocString CatalogResourceImpl::GetName() {}

// Range: 0x80108430 -> 0x80108438
class ELocString CatalogResourceImpl::GetDescription() {}

// Range: 0x80108438 -> 0x80108440
class ELocString CatalogResourceImpl::GetShortName() {}


