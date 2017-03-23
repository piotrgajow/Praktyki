#include "readerfromtxtfile.h"

ReaderFromTxtFile::ReaderFromTxtFile()
{

}

void ReaderFromTxtFile::readFromGivenFile(std::string fileName)
{
    std::ifstream file(fileName);
    std::stringstream buffer;
    buffer << file.rdbuf();
    readString = buffer.str();
}

std::string ReaderFromTxtFile::getReadString() const
{
    return readString;
}
