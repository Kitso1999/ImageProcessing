#pragma once
#include <iostream>
#include "Header.hpp"
#include "InfoHeader.hpp"
#include "ColorTable.hpp"
#include "RasterData.hpp"

namespace bmp{
    class Image{
        Header header;
        InfoHeader info_header;
        ColorTable color_table;
        RasterData raster_data;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const Image& img);
    };
}