#include "ColorTable.hpp"

namespace bmp{
    std::ostream& operator<<(std::ostream& ofs, const ColorTable& ct){
        return ofs << ct.Red << ct.Green << ct.Blue << ct.reserved;
    }
}//bmp

int main(){
    bmp::ColorTable t;
}