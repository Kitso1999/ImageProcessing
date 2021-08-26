#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include "Pixel.hpp"

namespace bmp{
    typedef char byte;
    struct ColorTable{
        std::vector<std::pair<Pixel, byte> > table;
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };
}