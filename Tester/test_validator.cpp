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
