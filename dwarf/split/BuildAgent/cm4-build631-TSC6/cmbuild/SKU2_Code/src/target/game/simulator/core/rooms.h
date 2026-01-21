/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\rooms.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005C650 -> 0x8005C6A0
*/
// Range: 0x8005C650 -> 0x8005C658
class vector & Room::GetTileList() {}

// Range: 0x8005C658 -> 0x8005C660
unsigned short Room::GetRoomID() {}

// Range: 0x8005C660 -> 0x8005C668
int Room::Used() {}

// Range: 0x8005C668 -> 0x8005C690
class Room * RoomManager::GetRoom() {}

// Range: 0x8005C69C -> 0x8005C6A0
class map & RoomManager::GetRoomCollection() {}


// Range: 0x8008BB80 -> 0x8008BB88
class RoomManager * RoomManager::GetRoomManager() {
    // References
    // -> class RoomManager * sRoomMgr;
}

// Range: 0x8008BB88 -> 0x8008BB90
unsigned short Room::GetLightingGroup() {}

// Range: 0x8008BB90 -> 0x8008BBA8
unsigned char VALIDROOMID() {}

// Range: 0x8008BBA8 -> 0x8008BBB0
float Room::GetPointLightDimmer() {}


// Range: 0x800CE478 -> 0x800CE480
void Room::SetDirty() {}

// Range: 0x800CE480 -> 0x800CE488
float Room::BasicScore() {}

// Range: 0x800CE488 -> 0x800CE490
void Room::SetIsPool() {}

// Range: 0x800CE490 -> 0x800CE498
void Room::SetUsed() {}

// Range: 0x800CE498 -> 0x800CE4A0
unsigned char Room::IsDirty() {}

// Range: 0x800CE4AC -> 0x800CE4EC
void * Room::operator new(unsigned long size /* r31 */) {}

// Range: 0x800CE4EC -> 0x800CE4F8
DiagonalNode::DiagonalNode() {}

// Range: 0x800CE4F8 -> 0x800CE54C
// this: r30
void Room::ClearPartition() {}

// Range: 0x800CE54C -> 0x800CE584
// this: r31
void Room::SetRoomIntensityScale() {}

// Range: 0x800CE584 -> 0x800CE58C
class EVec3 & Room::GetRoomIntensityScale() {}

// Range: 0x800CE58C -> 0x800CE590
void Room::SetLightingGroup() {}

// Range: 0x800CE590 -> 0x800CE5C4
void Room::operator delete(void * ptr /* r31 */) {}


// Range: 0x80113EC4 -> 0x80113FAC
// this: r29
unsigned short RoomManager::GetMaxRoomId() {
    // Local variables
    unsigned short maxId; // r31
    struct rbtree_iterator i; // r1+0x14
    class Room * aRoom; // r30
    unsigned short cand; // r3
}

// Range: 0x80113FAC -> 0x80113FDC
class RoomManager * RoomManager::CreateInstance() {}

// Range: 0x80113FDC -> 0x80113FE4
void RoomManager::DestroyInstance() {}

// Range: 0x80113FE4 -> 0x80114048
// this: r30
float RoomManager::GetRoomEnvironmentScore() {
    // Local variables
    class Room * r; // r31
}


// Range: 0x8020F588 -> 0x8020F594
void Room::ClearRoomIntensityScaleDirty() {}

// Range: 0x8020F594 -> 0x8020F59C
unsigned char Room::IsRoomIntensityScaleDirty() {}

// Range: 0x8020F59C -> 0x8020F5A4
void Room::SetPointLightDimmer() {}


