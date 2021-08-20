#pragma once
#include <iostream>

namespace bmp{
    typedef char byte;
    struct ColorTable{
    private:
        byte Red;
        byte Green;
        byte Blue; 
        byte reserved;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const ColorTable& ct);
    };
}