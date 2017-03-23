#include "Tester_Catch.h"
#include "../GameOfLife/readerfromtxtfile.h"

#include "fstream"

TEST_CASE( "check if reader creates string from txt file", "[test READER]" ){

    std::ofstream file("test.txt");
    file << "RandomTxt";
    file.close();
    ReaderFromTxtFile reader;
    reader.readFromGivenFile("test.txt");
    REQUIRE(reader.getReadString() == "RandomTxt");
    remove("test.txt");
}

TEST_CASE( "check if reader creates string from txt file with two lines", "[test READER]" ){

    std::ofstream file("test2.txt");
    file << "RandomTxt\nRandomTxt";
    file.close();
    ReaderFromTxtFile reader;
    reader.readFromGivenFile("test2.txt");
    REQUIRE(reader.getReadString() == "RandomTxt\nRandomTxt");
    remove("test.txt");
}
