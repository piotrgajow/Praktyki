#ifndef READERFROMTXTFILE_H
#define READERFROMTXTFILE_H
#include <string>
#include <fstream>
#include <sstream>

class ReaderFromTxtFile
{
public:
    ReaderFromTxtFile(std::string);
private:
    std::string readString;
};

#endif // READERFROMTXTFILE_H
