#include "InfoHeader.hpp"

namespace bmp{
    
    std::istream& InfoHeader::read(std::istream& is){
        is.read(reinterpret_cast<char*>(&Size), sizeof(Size));
        is.read(reinterpret_cast<char*>(&Width), sizeof(Width));
        is.read(reinterpret_cast<char*>(&Height), sizeof(Height));
        is.read(reinterpret_cast<char*>(&Planes), sizeof(Planes));
        is.read(reinterpret_cast<char*>(&BitCount), sizeof(BitCount));
        is.read(reinterpret_cast<char*>(&BitsPerPixel), sizeof(BitsPerPixel));
        is.read(reinterpret_cast<char*>(&Compression), sizeof(Compression));
        is.read(reinterpret_cast<char*>(&ImageSize), sizeof(ImageSize));
        is.read(reinterpret_cast<char*>(&XPixelsPerM), sizeof(XPixelsPerM));
        is.read(reinterpret_cast<char*>(&YPixelsPerM), sizeof(YPixelsPerM));
        is.read(reinterpret_cast<char*>(&ColorsUsed), sizeof(ColorsUsed));
        is.read(reinterpret_cast<char*>(&ImportantColors), sizeof(ImportantColors));
        return is;
    }
    std::ostream& InfoHeader::write(std::ostream& os)const{
        os.write(reinterpret_cast<const char*>(&Size), sizeof(Size));
        os.write(reinterpret_cast<const char*>(&Width), sizeof(Width));
        os.write(reinterpret_cast<const char*>(&Height), sizeof(Height));
        os.write(reinterpret_cast<const char*>(&Planes), sizeof(Planes));
        os.write(reinterpret_cast<const char*>(&BitCount), sizeof(BitCount));
        os.write(reinterpret_cast<const char*>(&BitsPerPixel), sizeof(BitsPerPixel));
        os.write(reinterpret_cast<const char*>(&Compression), sizeof(Compression));
        os.write(reinterpret_cast<const char*>(&ImageSize), sizeof(ImageSize));
        os.write(reinterpret_cast<const char*>(&XPixelsPerM), sizeof(XPixelsPerM));
        os.write(reinterpret_cast<const char*>(&YPixelsPerM), sizeof(YPixelsPerM));
        os.write(reinterpret_cast<const char*>(&ColorsUsed), sizeof(ColorsUsed));
        os.write(reinterpret_cast<const char*>(&ImportantColors), sizeof(ImportantColors));
        return os;
    }
}//bmp