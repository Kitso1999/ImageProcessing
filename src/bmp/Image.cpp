#include "Image.hpp"

namespace bmp{
    std::ostream& operator<<(std::ostream& ofs, const Image& img){
        return ofs << img.header << img.info_header << img.color_table << img.raster_data;
    }
}