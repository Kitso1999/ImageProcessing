#include "InfoHeader.hpp"

namespace bmp{
    const unsigned int InfoHeader::Size = 40;
    const unsigned short InfoHeader::Planes = 1;

    
    std::ostream& operator<<(std::ostream& ofs, const InfoHeader& ih){
        return ofs << ih.Size << ih.Width << ih.Height << ih.Planes << ih.BitCount 
            << ih.BitsPerPixel << ih.Compression << ih.ImageSize
            << ih.XPixelsPerM << ih.YPixelsPerM
            << ih.ColorsUsed << ih.ImportantColors;
    }
}//bmp