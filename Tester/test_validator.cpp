#include "Tester_Catch.h"
#include "../GameOfLife/validator.h"
#include <string>

TEST_CASE("check if Validator properly counts number of symbols in given string", "[tes_validator]")
{
    Validator validator;
    int numberOfSymbols = 0;
    std::string givenString = "I contain twenty nine symbols";
    validator.CouterOfFirstLineWidth(givenString,numberOfSymbols);
    REQUIRE(numberOfSymbols == 29);
}

TEST_CASE("check if Validator will find error in line 1", "[test_validator]")
{
    Validator validator;
    std::string readFromTxtFile = "XXXX\nXXX\nXXXX";
    validator.validate(readFromTxtFile);
    REQUIRE(validator.getErrorMessage() == "Error in line: 1");
}
