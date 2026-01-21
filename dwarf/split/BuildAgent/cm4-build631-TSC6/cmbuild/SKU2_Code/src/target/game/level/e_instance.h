/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_instance.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001AB68 -> 0x8001ABF4
*/
// Range: 0x8001AB68 -> 0x8001AB7C
void EInstance::ShouldInterestFade() {}

// Range: 0x8001AB7C -> 0x8001AB9C
unsigned char EInstance::IsHidden() {}

// Range: 0x8001AB9C -> 0x8001ABA4
class EBound3 & EInstance::GetBounds() {}

// Range: 0x8001ABA4 -> 0x8001ABB8
unsigned char EInstance::IsShadow() {}

// Range: 0x8001ABB8 -> 0x8001ABC0
unsigned char EInstance::IsWall() {}

// Range: 0x8001ABC0 -> 0x8001ABEC
void EBaseInstance::SetInstAlpha() {}

// Range: 0x8001ABEC -> 0x8001ABF4
float EBaseInstance::GetInstAlpha() {}


// Range: 0x8004B794 -> 0x8004B798
void EInstance::Init() {}


// Range: 0x80052498 -> 0x800524A0
int EInstance::GetContext() {}


// Range: 0x80083148 -> 0x80083178
EBaseInstance::EBaseInstance() {
    // References
    // -> struct [anonymous] __vt__13EBaseInstance;
}

// Range: 0x80083188 -> 0x80083198
unsigned short EInstance::GetReadVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80083198 -> 0x800831CC
void EInstance::GetLocationId() {}

// Range: 0x800831CC -> 0x80083200
void EInstance::GetOtherSide() {}

// Range: 0x80083200 -> 0x80083208
enum EPortalType EInstance::GetPortalType() {}

// Range: 0x80083208 -> 0x80083210
void EInstance::GetOrient() {}

// Range: 0x80083210 -> 0x8008321C
void EInstance::RegisterOtherSideFn() {}

// Range: 0x8008321C -> 0x80083224
void (* EInstance::GetThisSideFn())(unsigned int, unsigned char, signed short &, signed short &) {}

// Range: 0x80083224 -> 0x8008322C
unsigned int EInstance::GetThisSideData() {}

// Range: 0x8008322C -> 0x80083238
void EInstance::RegisterThisSideFn() {}

// Range: 0x80083238 -> 0x80083240
void (* EInstance::GetOtherSideFn())(unsigned int, unsigned char, signed short &, signed short &) {}

// Range: 0x80083240 -> 0x80083248
unsigned int EInstance::GetOtherSideData() {}

// Range: 0x80083248 -> 0x80083250
void EInstance::SetPortalType() {}

// Range: 0x80083250 -> 0x80083270
void EInstance::SafeDelete() {}

// Range: 0x80083270 -> 0x80083278
unsigned int EInstance::GetUpdatePriority() {}

// Range: 0x80083278 -> 0x8008327C
void EInstance::AddedToLevel() {}

// Range: 0x8008327C -> 0x80083280
void EInstance::RegisterFloor() {}

// Range: 0x80083280 -> 0x80083284
void EInstance::RebuildShaders() {}

// Range: 0x80083284 -> 0x80083288
void EInstance::RemovedFromLevel() {}

// Range: 0x80083288 -> 0x8008328C
void EInstance::AboutToBeRemovedFromLevel() {}

// Range: 0x8008328C -> 0x80083290
void EInstance::DoAnimation() {}

// Range: 0x80083290 -> 0x80083294
void EInstance::Update() {}

// Range: 0x80083294 -> 0x8008329C
int EBaseInstance::ShouldInterestFade() {}

// Range: 0x8008329C -> 0x800832A4
int EBaseInstance::ShouldFrontPlaneFade() {}

// Range: 0x800832A4 -> 0x800832A8
void EInstance::Draw() {}

// Range: 0x800832A8 -> 0x800832AC
void EInstance::DoLightingCalculation() {}

// Range: 0x800832AC -> 0x800832B4
unsigned int EInstance::VisibilityTest() {}

// Range: 0x800832B4 -> 0x800832BC
class EIStaticSubModel * EInstance::GetStaticSubModel() {}

// Range: 0x800832BC -> 0x800832C0
void EBaseInstance::DrawWithShadow() {}

// Range: 0x800832C0 -> 0x800832C4
void EBaseInstance::GetBoundSphere() {}

// Range: 0x800832C4 -> 0x800832CC
unsigned int EBaseInstance::GetInstanceFlags() {}

// Range: 0x800832CC -> 0x8008334C
// this: r31
void EInstance::ResetLocation() {
    // Local variables
    signed short lightLocationId; // r1+0xA
    signed short locationId; // r1+0x8
}

// Range: 0x8008334C -> 0x80083354
class ERLevel * EInstance::GetLevel() {}

// Range: 0x80083354 -> 0x80083368
char * EInstance::GetInstName() {}

// Range: 0x80083368 -> 0x80083374
class ETypeInfo * EInstance::GetTypeInfo() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80083374 -> 0x80083384
char * EInstance::GetTypeName() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80083384 -> 0x80083394
unsigned int EInstance::GetTypeKey() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x80083394 -> 0x800833A4
unsigned short EInstance::GetTypeVersion() {
    // References
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x800833A4 -> 0x800833A8
void EInstance::DrawWireFrame() {}

// Range: 0x800833A8 -> 0x800833AC
void EInstance::SetOrient() {}

// Range: 0x800833AC -> 0x800833B0
void EInstance::GetShadowCenter() {}

// Range: 0x800833B0 -> 0x800833B4
void EInstance::ReadInstanceData() {}

// Range: 0x800833B4 -> 0x800833BC
unsigned char EInstance::CanReloadInstanceData() {}

// Range: 0x800833BC -> 0x800833C0
class EInstance * EInstance::GetOwner() {}

// Range: 0x800833C0 -> 0x800833C8
unsigned short EInstance::GetNumRoomID() {}

// Range: 0x800833C8 -> 0x800833D0
unsigned short EInstance::GetRoomID() {}

// Range: 0x800833D0 -> 0x800833D8
unsigned int EInstance::GetSubModelId() {}

// Range: 0x800833D8 -> 0x800833E4
void EInstance::GetVelocity() {}

// Range: 0x800833E4 -> 0x800833F0
void EInstance::GetPos() {}

// Range: 0x800833F0 -> 0x800833F8
unsigned char EInstance::HasModifiableColor() {}

// Range: 0x800833F8 -> 0x800833FC
void EInstance::ModifyColor() {}

// Range: 0x800833FC -> 0x80083404
unsigned int EInstance::GetModifiableColor() {}

// Range: 0x80083404 -> 0x8008340C
unsigned char EInstance::HasInteractions() {}

// Range: 0x8008340C -> 0x80083410
void EInstance::RealizeShaderTuning() {}

// Range: 0x80083410 -> 0x80083418
class InstanceData * EBaseInstance::GetInstanceData() {}

// Range: 0x80083418 -> 0x80083420
unsigned int EInstance::GetInstanceFlags() {}

// Range: 0x80083420 -> 0x80083424
void EInstance::DrawShadow() {}

// Range: 0x80083424 -> 0x8008345C
class ETypeInfo * EInstance::RegisterType() {
    // References
    // -> class ETypeInfo m_typeInfo;
    // -> class ETypeInfo m_typeInfo;
}

// Range: 0x8008345C -> 0x80083464
void EInstance::Destruct() {}

// Range: 0x80083464 -> 0x80083498
void EInstance::Construct() {}

// Range: 0x80083498 -> 0x800834C8
class EInstance * EInstance::New() {}


// Range: 0x80218230 -> 0x80218238
void EInstance::SetShadowInterpolated() {}

// Range: 0x80218238 -> 0x80218244
void EInstance::RegisterHiddenFn() {}


