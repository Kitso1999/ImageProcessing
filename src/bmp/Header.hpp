#pragma once
#include <iostream>

namespace bmp{
    struct Header{
        char Signature[2]; // ='BM'
        unsigned int FileSize;
        unsigned int reserved; // =0
        unsigned int DataOffset;
        std::istream& read(std::istream& is);
        std::ostream& write(std::ostream& os)const;
    };//Header
}//bmp