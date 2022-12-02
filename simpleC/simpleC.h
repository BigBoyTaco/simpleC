#pragma once
// SimpleC written by: https://github.com/BigBoyTaco
// SimpleC has only been tested on c++23
// c++11 doesn't seem work atleast, sorry
// c++17 might!

#include <string>

#include "simpleIo.h"
#include "simpleString.h"
#include "simpleList.h"
#include "simpleSys.h"
#include "simpleMath.h"

namespace simpleC
{
    std::string _version_ = "1.0.3";
    std::string _credits_ = "https://github.com/BigBoyTaco";

    void testSimpleC()
    {
        using namespace simpleC;
        //IO testing
        io::print(5);
        io::print(5.3f);
        io::print((std::string)"test string");
        io::print((const char*)"test const char");      
        //string testing
        io::print(string::split("test item in test list", ' '));
        //list testing
        #include <list>
        std::list<std::string> list;
        list::append(list, "test");
        io::print(list::getAtIndex(list, 0));
        //sys testing
        sys::getCwd();
        //math testing
        math::sVector2 Vec2 = math::sVector2(50.0f, 2.0f);
        math::sVector3 Vec3 = math::sVector3(50.0f, 2.0f, 20.0f);
        math::sVector4 Vec4 = math::sVector4(50.0f, 2.0f, 20.0f, 2.0f);
        Vec2.magnitude();
        Vec3.magnitude();
        Vec4.magnitude();
        Vec2.normalize();
        Vec3.normalize();
        Vec4.normalize();
        math::dot(Vec2, Vec2);
        math::dot(Vec3, Vec3);
        math::dot(Vec4, Vec4);
        math::abs(-5.0f);
        math::abs(5.0f);
        math::parabola2d parab = math::parabola2d(2, 2, 0);
        parab.getStretchFac();
        parab.getXatY(2);
        parab.getYatX(2);
        parab.getYIntercept();
        io::print(parab.getVertex().x);
        io::print(parab.getVertex().y);
        math::line2d line = math::line2d(1, 2);
        line.getSlope();
        line.getXatY(2);
        line.getXIntercept();
        line.getYatX(2);
        line.getYIntercept();
        math::circle2d circle = math::circle2d(math::sVector2(0, 0), 1);
        circle.isPointOnCircle(math::sVector2(0, 1));
        circle.getXatY(1.0f);
        //completed
        io::print("all systems seem to be good, if you are still having trouble check out the github (https://github.com/BigBoyTaco/simpleC) for newer versions/more help.");
    }
}