#include "Tester_Catch.h"
#include "../GameOfLife/sizewithframe.h"
#include <string>

TEST_CASE("check if SizeWithFrame properly set width and height by givenString", "[tes_validator]")
{
    std::string givenString = "I contain twenty nine symbols";
    SizeWithFrame size(givenString);
    CHECK(size.getWidth() == 31);
    CHECK(size.getHeight() == 3);
}
