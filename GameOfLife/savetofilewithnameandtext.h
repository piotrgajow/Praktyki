#ifndef SAVETOFILE_H
#define SAVETOFILE_H
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
class SaveToFileWithNameAndText
{
public:
    SaveToFileWithNameAndText();
    void saveFile(std::string, std::string);

};

#endif // SAVETOFILE_H
