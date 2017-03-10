#include "Tester_Catch.h"
#include "../GameOfLife/validator.h"
#include <string>


TEST_CASE("check if Validator will show proper message in return", "[test_validator]")
{
    Validator validator;
    std::string readFromTxtFile = "XXXX\nXXX";
    validator.validateIfStringHasAllLinesLenghtEqual(readFromTxtFile);
    REQUIRE(validator.getErrorMessage() == "\nLines must have the same lenght. \nLenght of lines: \n0: 4\n1: 3\n");
}

TEST_CASE("check if Validator will find error becouse of invalid characters in given String", "[test_validator]")
{
    Validator validator;
    std::string readFromTxtFile = "X12X\nXXXX\nXXXX";
    validator.validateIfStringHasNotInvalidCharacters(readFromTxtFile);
    REQUIRE(validator.getErrorMessage() == "\nGiven File has invalid characters\n");
}

//TEST_CASE("check if order of Validating influences on returned error message ", "[test_validator]")
//{
//    Validator validator;
//    std::string readFromTxtFile = "X1X\nXXXX\nXXXX";
//    validator.validateIfStringHasNotInvalidCharacters(readFromTxtFile);
//    validator.validateIfStringHasAllLinesLenghtEqual(readFromTxtFile);
//    Validator validator2;
//    validator.validateIfStringHasAllLinesLenghtEqual(readFromTxtFile);
//    validator.validateIfStringHasNotInvalidCharacters(readFromTxtFile);
//    CHECK(validator.getErrorMessage() == validator2.getErrorMessage());
//}
