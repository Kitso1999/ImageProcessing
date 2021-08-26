#pragma once
#include <iostream>
#include <vector>
#include "Pixel.hpp"

namespace bmp{
    typedef char byte;
    struct RasterData{
        std::vector<Pixel> Data;
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };
}