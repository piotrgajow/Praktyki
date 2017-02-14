#include "Savetofile.h"



SaveTofile::SaveTofile(std::string fileName, std::string text)
{
        std::fstream file (fileName, std::ios::in | std::ios::out);
        if (file.good())
        {
            file << text;
        }
        else
        std::cout << "load failed";
        file.close();

}

