#pragma once
#include <iostream>

namespace bmp{
    struct InfoHeader{
        unsigned int Size; // =40
        unsigned int Width;
        unsigned int Height;
        unsigned short Planes; // =1
        unsigned short BitCount;
        unsigned short BitsPerPixel;
        unsigned int Compression;
        unsigned int ImageSize;
        unsigned int XPixelsPerM;
        unsigned int YPixelsPerM;
        unsigned int ColorsUsed;
        unsigned int ImportantColors;
        
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };//InfoHeader
}//bmp