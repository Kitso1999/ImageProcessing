#include "RasterData.hpp"

namespace bmp{
    std::ostream& operator<<(std::ostream& ofs, const RasterData& rd){
        for(int i = 0; i < rd.Data.size(); ++i){
            ofs << rd.Data[i];
        }
        return ofs;
    }
}