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
public:
    SaveToFileWithNameAndText();
    void saveFile(std::string boardSavingToFile, std::string nameOfFile);
};

#endif
