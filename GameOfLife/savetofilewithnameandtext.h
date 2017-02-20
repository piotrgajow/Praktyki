#ifndef SAVETOFILE_H
#define SAVETOFILE_H
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

class SaveToFileWithNameAndText
{
private:
    std::string fileName;
    void askUserFileName();

public:
    SaveToFileWithNameAndText();
    void saveFile(std::string);

};

#endif // SAVETOFILE_H
