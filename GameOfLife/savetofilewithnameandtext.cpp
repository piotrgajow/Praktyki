#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}
inline bool checkIfExistsFile (const std::string& name) {
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}

void SaveToFileWithNameAndText::askUserFileName()
{
    std::cout<<"Please input a name of file: ";
    std::cin>>fileName;
}

void SaveToFileWithNameAndText::saveFile(std::string text)
{
    std::string renameOrOverwritten;
    while(renameOrOverwritten != "2")
    {
    askUserFileName();
        if (checkIfExistsFile(fileName) == true)
        {
            std::cout<<"File exist. Select:\n  1- Rename\n  2- Overwritten\n-> ";
            std::cin>>renameOrOverwritten;
        }
        else if(checkIfExistsFile(fileName) == false || renameOrOverwritten == "2")
            break;
    }
    std::ofstream file(fileName);
        if (file.good())
        {
            file << text;
        }
        else
        std::cout << "load failed";
        file.close();
}

