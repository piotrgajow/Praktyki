#include "Savetofile.h"



SaveTofile::SaveTofile(std::string fileName, std::string text)
{

        std::cout << "saving to file... "<< fileName << std::endl;
        std::fstream file (fileName, std::ios::out);
        if (file.good())
        {

            file << text << std::endl;
            std::cout << "saved";
        }
        else
        std::cout << "load failed";
        file.close();

}

