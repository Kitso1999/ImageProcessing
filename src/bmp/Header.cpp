#include "Header.hpp"

namespace bmp{
    std::istream& Header::read(std::istream& is){
        is.read(Signature, sizeof(Signature)); // Signature
        is.read(reinterpret_cast<char*>(&FileSize), sizeof(FileSize));
        is.read(reinterpret_cast<char*>(&reserved), sizeof(reserved));
        is.read(reinterpret_cast<char*>(&DataOffset), sizeof(DataOffset));
        return is;
    }
    std::ostream& Header::write(std::ostream& os)const{
        os.write(Signature, sizeof(Signature));
        os.write(reinterpret_cast<const char*>(&FileSize), sizeof(FileSize));
        os.write(reinterpret_cast<const char*>(&reserved), sizeof(reserved));
        os.write(reinterpret_cast<const char*>(&DataOffset), sizeof(DataOffset));
        return os;
    }
}//bmp