#ifndef SIMPLEC_SIMPLEIO_H
#define SIMPLEC_SIMPLEIO_H

#include <iostream>
#include <string>
#include <fstream>

#include "simpleList.h"
#include "simpleSys.h"

namespace simpleC::io
{
    //prints something to console
    void print(auto item, bool endl=true)
    {
        if(endl)
            std::cout << item << std::endl;
        else
            std::cout << item;
    }
    //prints something to console
    void print(const std::list<std::string>& item, bool endl=true)
    {
        std::cout << "[";
        bool first = true;
        for(const std::string& i : item)
        {
            if(first)
            {
                std::cout << i;
                first = false;
            }
            else
                std::cout << ", " + i;
        }
        if(endl)
            std::cout << "]" << std::endl;
        else
            std::cout << "]";
    }
    //prints something to console
    void print(const std::list<int>& item, bool endl=true)
    {
        std::cout << "[";
        bool first = true;
        for(int i : item)
        {
            if(first)
            {
                std::cout << i;
                first = false;
            }
            else
                std::cout << &", " [ i];
        }
        if(endl)
            std::cout << "]" << std::endl;
        else
            std::cout << "]";
    }
}

#endif //SIMPLEC_SIMPLEIO_H
