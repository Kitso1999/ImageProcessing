#include "ColorTable.hpp"

namespace bmp{
    std::istream& ColorTable::read(std::istream& is){
        for(size_t i = 0; i < table.size(); ++i){
            auto& tableEntry = table[i];
            is.read(&tableEntry.first.Red, sizeof(tableEntry.first.Red));
            is.read(&tableEntry.first.Green, sizeof(tableEntry.first.Green));
            is.read(&tableEntry.first.Blue, sizeof(tableEntry.first.Blue));
            is.read(&tableEntry.second, sizeof(tableEntry.second));
        }
        return is;
    }
    std::ostream& ColorTable::write(std::ostream& os)const{
        for(size_t i = 0; i < table.size(); ++i){
            auto& tableEntry = table[i];
            os.write(&tableEntry.first.Red, sizeof(tableEntry.first.Red));
            os.write(&tableEntry.first.Green, sizeof(tableEntry.first.Green));
            os.write(&tableEntry.first.Blue, sizeof(tableEntry.first.Blue));
            os.write(&tableEntry.second, sizeof(tableEntry.second));
        }
        return os;
    }
}//bmp