#ifndef HA0A7C92D_2A2A_47D0_B89D_ED2AFF645F23
#define HA0A7C92D_2A2A_47D0_B89D_ED2AFF645F23

#include "quantity/base/Quantity.h"

enum VolumeUnit
{
    TSP  = 1,
    TBSP = 3 * TSP,
    OZ   = 2 * TBSP,
};

using Volume = Quantity<VolumeUnit>;

#endif
