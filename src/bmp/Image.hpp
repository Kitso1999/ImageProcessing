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
        Image();
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };
}