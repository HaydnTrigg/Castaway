/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\coordconversions.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801670C4 -> 0x80167804
*/
// Range: 0x801670C4 -> 0x8016712C
float AltToIso(const float & inAlt /* r31 */) {
    // References
    // -> static float k1Over2Root6;
}

// Range: 0x8016712C -> 0x80167154
float AltToWorld() {}

// Range: 0x80167154 -> 0x801671BC
class EVec3 IsoFracsToWorld(const float & x /* r30 */, const float & y /* r31 */) {}

// Range: 0x801671BC -> 0x80167248
class EVec3 IsoToWorld(const class FTilePt & inLoc /* r31 */) {}

// Range: 0x80167248 -> 0x80167318
class FTilePt WorldToIso(const class EVec3 & inLoc /* r31 */) {
    // Local variables
    class FTilePt aPt; // r1+0x8
    float x; // f1
    float y; // f1
}

// Range: 0x80167318 -> 0x80167378
class EMat4 ObjectRotationTf() {}

// Range: 0x80167378 -> 0x80167670
class EMat4 RotationTf(class EMat4 * result /* r29 */, enum RotationAxis inAxis /* r30 */, const float & inAngle /* r31 */) {
    // Local variables
    float c; // f31
    float s; // f30
}

// Range: 0x80167670 -> 0x80167754
signed short GetObjectDirectionFromWorldDirectionVector(const class EVec3 & v3Direction /* r31 */) {
    // Local variables
    float fX; // f0
    float fY; // f0
}

// Range: 0x80167754 -> 0x80167804
class EVec3 GetWorldDirectionVectorFromObjectDirection() {}


