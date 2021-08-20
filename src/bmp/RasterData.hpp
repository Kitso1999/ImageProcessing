#pragma once
#include <iostream>
#include <vector>
#include "Pixel.hpp"

namespace bmp{
    typedef char byte;
    struct RasterData{
    private:
        std::vector<Pixel> Data;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const RasterData& rd);
    };
}