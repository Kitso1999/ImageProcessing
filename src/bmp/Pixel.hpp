#pragma once
#include <iostream>

namespace bmp{
    typedef char byte;
    struct Pixel{
    private:
        byte Blue;
        byte Green;
        byte Red;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const Pixel& p);
    };//Pixel
}//bmp