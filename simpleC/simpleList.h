#ifndef SIMPLEC_SIMPLELIST_H
#define SIMPLEC_SIMPLELIST_H

#include <string>
#include <list>

namespace simpleC::list
{
    //get item at index in list
    std::string getAtIndex(std::list<std::string> lst, int index)
    {
        std::list<std::string>::iterator it;
        int times = 0;
        for (it = lst.begin(); it != lst.end(); it++) {
            if(times == index)
            {
                return *it;
            }
            times++;
        }
        throw std::invalid_argument("list index out of range");
    }
    //get item at index in list
    int getAtIndex(std::list<int> lst, int index)
    {
        std::list<int>::iterator it;
        int times = 0;
        for (it = lst.begin(); it != lst.end(); it++) {
            if(times == index)
            {
                return *it;
            }
            times++;
        }
        return 0;
    }
    //add item to end of list
    void append(std::list<std::string>& lst, std::string item)
    {
        lst.push_back(item);
    }
}

#endif //SIMPLEC_SIMPLELIST_H
