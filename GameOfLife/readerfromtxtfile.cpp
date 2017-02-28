#include "readerfromtxtfile.h"

ReaderFromTxtFile::ReaderFromTxtFile(std::string fileName)
{
    std::ifstream file(fileName);
    std::stringstream buffer;
    buffer << file.rdbuf();
    readString = buffer.str();
}
