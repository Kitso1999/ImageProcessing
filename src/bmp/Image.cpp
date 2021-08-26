#include "Image.hpp"

namespace bmp{
    Image::Image() : header{}, info_header{}, color_table{}, raster_data{}{
    }
    std::istream& Image::read(std::istream& is){
        header.read(is);
        info_header.read(is);

        color_table.table.clear();
        if(info_header.BitsPerPixel <= 8){
            color_table.table.clear();
            color_table.table.resize(info_header.ColorsUsed);
            color_table.read(is);
        }
        raster_data.Data.clear();
        raster_data.Data.resize(info_header.Width * info_header.Height);
        raster_data.read(is);
        return is;
    }
    std::ostream& Image::write(std::ostream& os)const{
        header.write(os);
        info_header.write(os);
        color_table.write(os);
        raster_data.write(os);
        return os;
    }
}