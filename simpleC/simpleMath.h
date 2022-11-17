#ifndef SIMPLEC_SIMPLEMATH_H
#define SIMPLEC_SIMPLEMATH_H

#include <cmath>


namespace simpleC::simpleMath
{
    //a way to represent lines (y=mx+b)
    class line
    {
    public:
        float m, b;

        line(auto slope, auto yIntercept)
        {
            this->m = slope;
            this->b = yIntercept;
        }
        float getYatX(auto x)
        {
            //y = m*x + b
            float y = m*x + b;
            return y;
        }
        float getXatY(auto y)
        {
            //(y - b) / m = x
            float x = (y - b) / m;
            return x;
        }
        float getSlope()
        {
            return m;
        }
        float getYIntercept()
        {
            return b;
        }
    };
    //a way to represent parabolas (y=mx^2 + b)
    class parabola
    {
    private:
        float m, b;
    public:
        parabola(auto stretchFac, auto yIntercept)
        {
            this->m = stretchFac;
            this->b = yIntercept;
        }
        float getYatX(auto x)
        {
            //y=mx^2+b
            float y = (m * (x*x)) + b;
            return y;
        }
        float getXatY(auto y)
        {
            //sqrt[(y-b) / m] = x
            float tmp = (y-b) / m;
            float x = sqrt(tmp);
            return x;
        }
        float getStretchFac()
        {
            return m;
        }
        float getYIntercept()
        {
            return b;
        }
    };
}

#endif //SIMPLEC_SIMPLEMATH_H
