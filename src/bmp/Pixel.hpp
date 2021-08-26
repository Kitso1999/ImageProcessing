#pragma once
#include <iostream>

namespace bmp{
    typedef char byte;
    struct Pixel{
        byte Blue;
        byte Green;
        byte Red;
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };//Pixel
}//bmp