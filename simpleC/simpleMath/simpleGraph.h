#pragma once

#include <cmath>

#include "simpleVectors.h"

namespace simpleC::math
{
    // a way to represent lines (y=mx+b)
    class line2d
    {
    private:
        float m, b;
    public:
        line2d(auto slope, auto yIntercept)
        {
            this->m = slope;
            this->b = yIntercept;
        }
        line2d()
        {
            this->m = 1;
            this->b = 0;
        }
        float getYatX(auto x)
        {
            // y = m*x + b
            float y = m * x + b;
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
        float getXIntercept()
        {
            return getYatX(0);
        }
    };
    // a way to represent parabolas in vertex form (y=a(h-x)^2+k)
    class parabola2d
    {
    private:
        float a, h, k;

    public:
        parabola2d(auto a, auto k, auto h)
        {
            this->a = a;
            this->k = k;
            this->h = h;
        }
        parabola2d()
        {
            this->a = 1;
            this->k = 0;
            this->h = 0;
        }
        float getYatX(auto x)
        {
            // y=a(h-x)^2+k
            float y = a * ((h - x) * (h - x)) + k;
            return y;
        }
        float getXatY(auto y)
        {
            // sqrt[(y-k) / a] - h = x
            float x = sqrt((y - k) / a) - h;
            return x;
        }
        float getStretchFac()
        {
            return a;
        }
        float getYIntercept()
        {
            return getYatX(0);
        }
        sVector2 getVertex()
        {
            return sVector2(-h, getYatX(-h));
        }
    };
    //(x-h)^2+(y-k)^2 = a^2
    class circle2d
    {
    private:
        float h, k, a;
    public:
        circle2d(sVector2 origin, float radius)
        {
            this->h = origin.x;
            this->k = origin.y;
            this->a = radius;
        }
        circle2d(float originX, float originY, float radius)
        {
            this->h = originX;
            this->k = originY;
            this->a = radius;
        }
        bool isPointOnCircle(sVector2 point)
        {
            if ((point.x - h) * (point.x - h) + (point.y - k) * (point.y - k) == a * a)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        /*float getXatY(float y)
        {
            //(x-h)^2+(y-k)^2 = a^2
            //sqrt((x-h)^2)+sqrt((y-k)^2) = a
            //(x-h) + (y-k) = a
            //x-h = a - (y-k)
            //x = a - (y-k) + h
            float x;
            x = a - (y-k) + h;
            return x;
        }
        float getYatX(float x)
        {
            //(x-h)^2+(y-k)^2 = a^2
            //sqrt((x-h)^2)+sqrt((y-k)^2) = a
            //(x-h) + (y-k) = a
            //y-k = a - (x-h)
            //y = a - (x-h) + k
            float y;
            y = a - (x-h) + k;
            return y;
        }*/
    };
}