#ifndef HF21A561D_09DF_4686_935D_4B7CD6FD9A2B
#define HF21A561D_09DF_4686_935D_4B7CD6FD9A2B

#include "quantity/base/Quantity.h"

enum LengthUnit
{
    INCH = 1,
    FEET = 12 * INCH,
    YARD = 3 * FEET,
    MILE = 1760 * YARD,
};

using Length = Quantity<LengthUnit>;

#endif
