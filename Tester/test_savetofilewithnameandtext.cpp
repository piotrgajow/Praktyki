#include "Tester_Catch.h"
#include "..\GameOfLife\savetofilewithnameandtext.h"


TEST_CASE("CheckIfFileOpenProperly", "[savetofilewithnameandtext]")
{
    std::ofstream file;
    std::string nameOfFile="fileName.txt";
    std::string boardSavingToFile="000\n011\n111";

    SaveToFileWithNameAndText savingFile;
    savingFile.saveFile(boardSavingToFile, nameOfFile);
    file.open(nameOfFile);
    bool checkIfFileOpen=file.is_open();
    CHECK(checkIfFileOpen==true);
    file.close();

    remove("fileName.txt");
}

