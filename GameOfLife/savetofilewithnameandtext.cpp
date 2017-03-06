#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}

void SaveToFileWithNameAndText::saveFile(std::string boardConvertToString, std::string nameOfFile)
{
    std::ofstream file;
    file.open(nameOfFile);
    if (file.good())
    {
        file << boardConvertToString;
    }
    else
        std::cout << "Save to file failed";
    file.close();
}





