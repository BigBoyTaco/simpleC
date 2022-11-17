#ifndef SIMPLEC_SIMPLESYS_H
#define SIMPLEC_SIMPLESYS_H

#include <string>
#include <filesystem>
#include <fstream>

namespace simpleC::simpleSys
{
    std::string getCwd() {
        return std::filesystem::current_path();
    }
}

#endif //SIMPLEC_SIMPLESYS_H
