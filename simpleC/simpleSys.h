#pragma once

#include <string>
#include <filesystem>

namespace simpleC::sys
{
    std::string getCwd() {
        std::string path = std::filesystem::current_path().generic_string();
        return path;
    }
}