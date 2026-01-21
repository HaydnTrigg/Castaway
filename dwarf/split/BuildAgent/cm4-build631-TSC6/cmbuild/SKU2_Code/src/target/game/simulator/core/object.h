/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\object.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800197D8 -> 0x80019898
*/
// Range: 0x800197D8 -> 0x800197E0
signed short cXObject::GetID() {}

// Range: 0x800197E0 -> 0x800197EC
class cXObject * cXObject::GetObjectFromID() {}

// Range: 0x800197EC -> 0x80019814
signed short cXObject::GetData() {}

// Range: 0x80019814 -> 0x80019820
void cXObject::SetData() {}

// Range: 0x80019820 -> 0x80019828
class FTilePt & cXObject::GetLocation() {}

// Range: 0x80019828 -> 0x80019858
unsigned char cXObject::WaterSurfacePlacement() {}

// Range: 0x80019858 -> 0x80019860
void cXObject::SetElevation() {}

// Range: 0x80019860 -> 0x80019868
void cXObject::SetDirectControl() {}

// Range: 0x80019868 -> 0x80019870
struct ObjDefinition * cXObject::GetDef() {}

// Range: 0x80019870 -> 0x80019880
// this: r4
void cXObject::ClearIdleStatus() {}

// Range: 0x80019880 -> 0x80019898
unsigned char cXObject::GetMiscFlag() {}


// Range: 0x80051B50 -> 0x80051B58
class Behavior * cXObject::GetBehavior() {}

// Range: 0x80051B58 -> 0x80051BA8
// this: r31
class cXObject * cXObject::GetContainedObject() {
    // Local variables
    class ObjectSlot * s; // r0
}

// Range: 0x80051BA8 -> 0x80051BD4
unsigned char cXObject::IsMultiTile() {}

// Range: 0x80051BD4 -> 0x80051BF8
int cXObject::CountObjectSlots() {}

// Range: 0x80051BF8 -> 0x80051C00
int cXObject::HierCountSlots() {}

// Range: 0x80051C00 -> 0x80051C2C
enum ObjectLightSource cXObject::GetObjectLightSource() {}

// Range: 0x80051C2C -> 0x80051C34
class ObjSelector * cXObject::GetSelector() {}

// Range: 0x80051C34 -> 0x80051C94
// this: r30
unsigned char cXObject::IsWindow() {}

// Range: 0x80051C94 -> 0x80051CD4
signed short cXObject::GetTreeID(enum ObjEntryPoint ep /* r31 */) {}

// Range: 0x80051CD4 -> 0x80051CDC
class ObjFnTable * cXObject::GetFnTable() {}

// Range: 0x80051CDC -> 0x80051CE8
signed short cXObject::GetType() {}

// Range: 0x80051CE8 -> 0x80051CF8
// this: r5
void cXObject::GetLocation() const {}

// Range: 0x80051CF8 -> 0x80051D18
void cXObject::SetMiscFlag() {}

// Range: 0x80051D18 -> 0x80051D8C
// this: r30
unsigned char cXObject::IsGate() {}

// Range: 0x80051D8C -> 0x80051DB0
signed short cXObject::GetHeight() {}

// Range: 0x80051DB0 -> 0x80051E24
// this: r30
unsigned char cXObject::IsDoor() {}

// Range: 0x80051E24 -> 0x80051E54
unsigned char cXObject::IsStructure() {}

// Range: 0x80051E54 -> 0x80051E60
int cXObject::GetHilite() {}

// Range: 0x80051E60 -> 0x80051E78
// this: r7
void cXObject::EnableSim() {}

// Range: 0x80051E78 -> 0x80051E9C
unsigned char cXObject::HasZeroExtent() {}

// Range: 0x80051E9C -> 0x80051EC8
signed short cXObject::GetFlags() {}


// Range: 0x80095F8C -> 0x80095FBC
unsigned char cXObject::IsHutObject() {}

// Range: 0x80095FBC -> 0x80095FEC
unsigned char cXObject::IsRoof() {}

// Range: 0x80095FEC -> 0x80096010
signed short cXObject::GetStyle() {}

// Range: 0x80096010 -> 0x80096040
unsigned char cXObject::IsBeingKilled() {}

// Range: 0x80096040 -> 0x80096048
void cXObject::SetOverrideDialogReturnCode() {
    // References
    // -> signed short overrideDialogReturnCode;
}


// Range: 0x800A5CB0 -> 0x800A5CC0
void cXObject::SetTemp() {}

// Range: 0x800A5CC0 -> 0x800A5CEC
unsigned short cXObject::GetRoom() {}

// Range: 0x800A5CEC -> 0x800A5CF4
class ITreeTable * cXObject::GetTreeTab() {}

// Range: 0x800A5CF4 -> 0x800A5D04
signed short cXObject::GetTemp() {}

// Range: 0x800A5D04 -> 0x800A5D34
unsigned char cXObject::IsBurning() {}

// Range: 0x800A5D34 -> 0x800A5D44
signed short cXObject::GetStaticAttr() {}

// Range: 0x800A5D44 -> 0x800A5D48
void cXObject::PreSave() {}

// Range: 0x800A5D48 -> 0x800A5D50
class RoutingSlot * cXObject::GetRoutingSlot() {}

// Range: 0x800A5D50 -> 0x800A5D58
int cXObject::GetNumRoutingSlots() {}

// Range: 0x800A5D58 -> 0x800A5DC0
// this: r30
unsigned char cXObject::IsPortal() {}

// Range: 0x800A5DC0 -> 0x800A5E04
unsigned char cXObject::IsChair() {}

// Range: 0x800A5E04 -> 0x800A5E0C
class ObjectModule * cXObject::GetModule() {}

// Range: 0x800A5E0C -> 0x800A5E44
void cXObject::SetRoutingSlot(const class RoutingSlot & slot /* r31 */) {}

// Range: 0x800A5E44 -> 0x800A5E94
// this: r30
unsigned char cXObject::RunTree(const char * treeName /* r31 */) {}

// Range: 0x800A5E94 -> 0x800A5E9C
class cXObject * cXObject::GetNext() {}

// Range: 0x800A5E9C -> 0x800A5EC8
int cXObject::GetLightingContribution() {}

// Range: 0x800A5EC8 -> 0x800A5EF8
unsigned char cXObject::CanContributeLight() {}

// Range: 0x800A5EF8 -> 0x800A5F00
unsigned char cXObject::GetFreeWill() {
    // References
    // -> unsigned char sFreeWill;
}

// Range: 0x800A5F00 -> 0x800A5F10
signed short cXObject::GetAttr() {}

// Range: 0x800A5F10 -> 0x800A5F64
// this: r31
unsigned char cXObject::CanIntersectPeople() {}

// Range: 0x800A5F64 -> 0x800A5F6C
class FTileRect & cXObject::GetRect() {}

// Range: 0x800A5F6C -> 0x800A5F90
unsigned char cXObject::HaveGraphicsBeenTagged() {}

// Range: 0x800A5F90 -> 0x800A5F9C
void cXObject::TagGraphicsField() {}


// Range: 0x800FAF58 -> 0x800FAF60
float cXObject::GetElevation() {}

// Range: 0x800FAF60 -> 0x800FAF68
class RelMatrix & cXObject::GetRelMatrix() {}

// Range: 0x800FAF68 -> 0x800FAF70
class ObjSelector * cXObject::GetSelector() {}

// Range: 0x800FAF70 -> 0x800FAF80
// this: r4
void cXObject::Kill() {}

// Range: 0x800FAF80 -> 0x800FAF94
// this: r6
void cXObject::SetIdleStatus() {}

// Range: 0x800FAF94 -> 0x800FAFA4
signed short cXObject::GetSemiAttr() {}

// Range: 0x800FAFA4 -> 0x800FAFAC
class ObjectFolder * cXObject::GetFolder() {}

// Range: 0x800FAFAC -> 0x800FAFF0
signed short cXObject::GetReverseDirecion() {}

// Range: 0x800FAFF0 -> 0x800FAFF8
signed short cXObject::GetDirecion() {}

// Range: 0x800FAFF8 -> 0x800FB03C
unsigned char cXObject::RequiresWallAdjacency() {}

// Range: 0x800FB03C -> 0x800FB06C
unsigned char cXObject::IsOccupied() {}

// Range: 0x800FB06C -> 0x800FB098
signed short cXObject::GetWallPlacementFlags() {}

// Range: 0x800FB098 -> 0x800FB0D0
unsigned char cXObject::SimIndependent() {}

// Range: 0x800FB0D0 -> 0x800FB0D8
void cXObject::SetSyncAnimStartFrame() {}

// Range: 0x800FB0D8 -> 0x800FB0E4
void cXObject::ClearSyncObject() {}

// Range: 0x800FB0E4 -> 0x800FB0EC
unsigned char cXObject::WaitingForSync() {}

// Range: 0x800FB0EC -> 0x800FB0F4
class cXObject * cXObject::GetSyncObject() {}

// Range: 0x800FB0F4 -> 0x800FB0FC
void cXObject::SetNext() {}

// Range: 0x800FB0FC -> 0x800FB104
void cXObject::SetID() {}

// Range: 0x800FB104 -> 0x800FB130
int cXObject::GetBuildModeType() {}

// Range: 0x800FB130 -> 0x800FB160
unsigned char cXObject::IsFireproof() {}

// Range: 0x800FB160 -> 0x800FB190
unsigned char cXObject::CanBurn() {}

// Range: 0x800FB190 -> 0x800FB198
class cXObject * cXObject::GetFirst() {}

// Range: 0x800FB198 -> 0x800FB1A4
void cXObject::ClearCachedObjectCatalogResource() {}

// Range: 0x800FB1A4 -> 0x800FB1AC
class CatalogResource * cXObject::GetCachedObjectCatalogResource() {}

// Range: 0x800FB1AC -> 0x800FB1BC
// this: r4
int cXObject::GetIdleStatus() {}

// Range: 0x800FB1BC -> 0x800FB200
unsigned char cXObject::GetObjAnimFlag(enum ObjAnimFlags flag /* r31 */) {}

// Range: 0x800FB200 -> 0x800FB208
int cXObject::GetNumStaticAttr() {}

// Range: 0x800FB208 -> 0x800FB210
int cXObject::GetNumSemiAttr() {}

// Range: 0x800FB210 -> 0x800FB218
int cXObject::GetNumAttr() {}


// Range: 0x801AB020 -> 0x801AB030
void cXObject::SetAttr() {}


