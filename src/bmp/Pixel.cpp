#include "Pixel.hpp"

namespace bmp{
    std::ostream& operator<<(std::ostream& ofs, const Pixel& p){
        return ofs << p.Blue << p.Green << p.Red;
    }
}//bmp