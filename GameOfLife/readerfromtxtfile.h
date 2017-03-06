#ifndef READERFROMTXTFILE_H
#define READERFROMTXTFILE_H
#include <string>
#include <fstream>
#include <sstream>

class ReaderFromTxtFile
{
public:
    ReaderFromTxtFile();
    void readFromGivenFile(std::string);
    std::string getReadString() const;

private:
    std::string readString;
};

#endif
