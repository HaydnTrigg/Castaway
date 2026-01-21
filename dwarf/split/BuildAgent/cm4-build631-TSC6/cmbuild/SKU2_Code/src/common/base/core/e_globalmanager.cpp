/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_globalmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802622A0 -> 0x80262478
*/
// Range: 0x802622A0 -> 0x802622C4
void EGlobalManager::Register() {
    // Local variables
    struct EGMClientData * pc; // r5

    // References
    // -> struct EGMClientData m_clients[32];
    // -> int m_nClients;
}

// Range: 0x802622C4 -> 0x802623F8
unsigned char EGlobalManager::Startup() {
    // Local variables
    int i; // r9
    int j; // r10
    struct EGMClientData temp; // r1+0x8

    // References
    // -> int m_nStartedUpClients;
    // -> unsigned char m_shutdownComplete;
    // -> int m_nClients;
    // -> struct EGMClientData m_clients[32];
    // -> unsigned char m_startupComplete;
}

// Range: 0x802623F8 -> 0x80262478
void EGlobalManager::Shutdown() {
    // References
    // -> unsigned char m_startupComplete;
    // -> int m_nStartedUpClients;
    // -> struct EGMClientData m_clients[32];
    // -> unsigned char m_shutdownComplete;
}


