#ifndef FILENAMEREADER_H
#define FILENAMEREADER_H

#include <iostream>
#include <fstream>
class FilenameReader
{
private:
    std::string fileName;
    bool fileExistStatus;
public:
    FilenameReader();
    void askUserAboutFileName();
    std::string getFileName() const;
    void ifFileExistAskRenameOrOverwritten();
    void checkIfFileExist();
    bool getFileExistStatus() const;
};

#endif // FILENAMEREADER_H
