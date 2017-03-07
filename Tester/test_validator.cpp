#include "Tester_Catch.h"
#include "../GameOfLife/validator.h"
#include <string>

TEST_CASE("check if Validator properly counts number of symbols in given string", "[tes_validator]")
{
    Validator validator;
    int numberOfSymbols = 0;
    std::string givenString = "I contain twenty nine symbols";
    validator.couterOfFirstLineWidth(givenString,numberOfSymbols);
    REQUIRE(numberOfSymbols == 29);
}

TEST_CASE("check if Validator will find error in lenght of given String", "[test_validator]")
{
    Validator validator;
    std::string readFromTxtFile = "XXXX\nXXX\nXXXX";
    validator.validateIfStringHasAllLinesEqual(readFromTxtFile);
    REQUIRE(validator.getErrorMessage().size() != 0);
}

TEST_CASE("check if Validator will find error becouse of invalid character in given String", "[test_validator]")
{
    Validator validator;
    std::string readFromTxtFile = "X12X\nXXXX\nXXXX";
    validator.validateIfStringHasInvalidCharacters(readFromTxtFile);
    REQUIRE(validator.getErrorMessage() == "\nGiven File has invalid characters\n");
}
