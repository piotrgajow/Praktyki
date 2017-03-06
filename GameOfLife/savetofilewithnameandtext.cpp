#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}


bool SaveToFileWithNameAndText::checkIfFileExist(std::string nameOfFile)
{
//    std::ofstream file;
//    if(file.is_open(nameOfFile))
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
}


void SaveToFileWithNameAndText::saveFile(std::string boardConvertToString, std::string nameOfFile)
{

    std::ofstream file;
    checkIfFileExist(nameOfFile);
    file.open(nameOfFile);
    if (file.good())
    {;
        file << boardConvertToString;
    }
    else
        std::cout << "load failed";
    file.close();
}



