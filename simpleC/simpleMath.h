#pragma once

#include "simpleMath/simpleGraph.h"
#include "simpleMath/simpleVectors.h"


namespace simpleC::math
{
    //returns absolute value of a
    float abs(auto a)
    {
        //if a is negative
        if (a < 0)
        {
            return a * -1;
        }
        else
        {
            return a;
        }
    }
}
