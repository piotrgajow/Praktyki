#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}

void SaveToFileWithNameAndText::saveFile(std::string boardSavingToFile, std::string nameOfFile)
{
    std::ofstream file;
    file.open(nameOfFile.c_str());
    if (file.good())
    {
        file << boardSavingToFile;
    }
    else
    {
        std::cout << "Save to file failed";
    }
    file.close();
}






