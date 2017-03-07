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
    bool fileExistStatus;
    FilenameReader filenameReader;

public:
    SaveToFileWithNameAndText();
    void saveFile(std::vector<std::vector<bool>>);
    void checkIfFileExist();
    void ifFileExistAskRenameOrOverwritten();
    std::string getFileName() const;
    void setFileName(const std::string &value);
    bool getFileExistStatus() const;
    void setFileExistStatus(bool value);
};

#endif // SAVETOFILE_H
