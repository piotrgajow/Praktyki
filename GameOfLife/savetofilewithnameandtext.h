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
    void saveFile(std::vector<std::vector<bool>>, std::string);

};

#endif // SAVETOFILE_H
