#ifndef SIMPLEC_SIMPLESTRING_H
#define SIMPLEC_SIMPLESTRING_H

#include <list>
#include <string>

#include "simpleList.h"

namespace simpleC::string
{
    ///splits string into list by seporator
    std::list<std::string> split(const std::string& content, char seperator)
    {
        std::string tmp;
        std::list<std::string> lst;
        for(char i : content)
        {
            if(i == seperator)
            {
                list::append(lst, tmp);
                tmp = "";
            }
            else
                tmp += i;
        }
        list::append(lst, tmp);
        return lst;
    }
}

#endif //SIMPLEC_SIMPLESTRING_H
