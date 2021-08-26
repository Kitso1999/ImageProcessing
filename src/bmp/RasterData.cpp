#include "RasterData.hpp"

namespace bmp{
    std::istream& RasterData::read(std::istream& is){
        for(size_t i = 0; i < Data.size(); ++i){
            Data.at(i).read(is);
        }
        return is;
    }
    std::ostream& RasterData::write(std::ostream& os)const{
        for(size_t i = 0; i < Data.size(); ++i){
            Data.at(i).write(os);
        }
        return os;
    }
}