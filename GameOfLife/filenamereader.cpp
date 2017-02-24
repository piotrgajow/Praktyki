#include "filenamereader.h"


std::string FilenameReader::getFileName() const
{
    return fileName;
}

bool FilenameReader::getFileExistStatus() const
{
    return fileExistStatus;
}

FilenameReader::FilenameReader()
{

}

void FilenameReader::askUserAboutFileName()
{
    std::cout<<"Please input a name of file: ";
    std::cin>>fileName;
}

void FilenameReader::checkIfFileExist()
{
    std::fstream file;
    file.open(fileName);
    if (file.is_open())
    {
        fileExistStatus = true;
    }
    else fileExistStatus = false;
}

void FilenameReader::ifFileExistAskRenameOrOverwritten()
{
    if (fileExistStatus == true)
    {
        int userChoice;
        std::cout<<"File exist. Select:\n  1- Rename\n  2- Overwritten\n-> ";
        std::cin>>userChoice;
        switch(userChoice)
        {
        case 1:
            break;

        case 2:
            fileExistStatus = false;
            break;

        default:
            std::cout<<"This option do not exist\n";
            break;
        }
    }
}
