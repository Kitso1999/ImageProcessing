#include "Pixel.hpp"

namespace bmp{
    std::ostream& operator<<(std::ostream& os, const Pixel& p){
        return os << p.Blue << p.Green << p.Red;
    }
    std::istream& operator>>(std::istream& is, Pixel& p){
        return is >> p.Blue >> p.Green >> p.Red;
    }
    std::istream& Pixel::read(std::istream& is){
        is.read(&Blue, sizeof(Blue));
        is.read(&Green, sizeof(Green));
        is.read(&Red, sizeof(Red));
        return is;
    }
    std::ostream& Pixel::write(std::ostream& os)const{
        os.write(&Blue, sizeof(Blue));
        os.write(&Green, sizeof(Green));
        os.write(&Red, sizeof(Red));
        return os;
    }
}//bmp