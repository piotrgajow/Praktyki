#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}

void SaveToFileWithNameAndText::saveFile(std::string fileName, std::string text)
{
        std::ofstream file (fileName);
        if (file.good())
        {
            file << text;
        }
        else
        std::cout << "load failed";
        file.close();

}

