#include "Tester_Catch.h"

#include "../GameOfLife/Savetofile.h"


TEST_CASE("Test If Savetofile creates file with Random text", "file")
{
    std::string txt;
    SaveTofile saver1( "test2.txt" ,"Random text");
    std::fstream file ("test2.txt", std::ios::in | std::ios::out);

    do
    {
        getline(file,txt);
    }
    while (!file.eof());

    file.close();
    REQUIRE(txt == "Random text");
    remove("test2.txt");
}


TEST_CASE("Test If Savetofile creates readable file", "file")
{
    SaveTofile saver( "filename.txt" ,"Random text");
    std::fstream file ("filename.txt", std::ios::in | std::ios::out);

    REQUIRE(file.good() == 1);
    remove("filename.txt");

}
