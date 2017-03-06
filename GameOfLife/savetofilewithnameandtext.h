#ifndef SAVETOFILE_H
#define SAVETOFILE_H
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>
#include "filenamereader.h"

class SaveToFileWithNameAndText
{
private:
    FilenameReader filenameReader;
    std::string nameOfFile;
    std::string boardConvertToString;

public:
    SaveToFileWithNameAndText();
    void saveFile(std::string boardConvertToString, std::string nameOfFile);
    bool checkIfFileExist(std::string nameOfFile);
};

#endif // SAVETOFILE_H
