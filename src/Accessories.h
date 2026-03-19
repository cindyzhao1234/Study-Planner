#pragma once
#include <string>

struct Accessories {
    std::string name;
    std::string category;   // "hat", "top", "bottom"
    bool owned = true;
    bool equipped = false;
};