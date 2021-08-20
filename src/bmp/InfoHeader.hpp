#pragma once
#include <iostream>

namespace bmp{
    struct InfoHeader{
    private:
        static const unsigned int Size; // =40
        unsigned int Width;
        unsigned int Height;
        static const unsigned short Planes; // =1
        unsigned short BitCount;
        unsigned short BitsPerPixel;
        unsigned int Compression;
        unsigned int ImageSize;
        unsigned int XPixelsPerM;
        unsigned int YPixelsPerM;
        unsigned int ColorsUsed;
        unsigned int ImportantColors;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const InfoHeader& ih);
    };//InfoHeader
}//bmp