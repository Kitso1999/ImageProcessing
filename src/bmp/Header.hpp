#pragma once
#include <iostream>

namespace bmp{
    struct Header{
    private:
       static const char Signature[3]; // ='BM'
       unsigned int FileSize;
       static unsigned int reserved; // =0
       unsigned int DataOffset;
    public:
        friend std::ostream& operator<<(std::ostream& ofs, const Header& h);
    };//Header
}//bmp