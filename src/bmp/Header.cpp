#include "Header.hpp"

namespace bmp{
    const char Header::Signature[3] = "BM";
    unsigned int Header::reserved = 0;
    std::ostream& operator<<(std::ostream& ofs, const Header& h){
        return ofs << h.Signature << h.FileSize << h.reserved << h.DataOffset;
    }
}//bmp