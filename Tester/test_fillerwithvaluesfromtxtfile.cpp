#include "Tester_Catch.h"
#include "../GameOfLife/fillerwithvaluesfromtxtfile.h"
#include <string>
#include "../GameOfLife/board.h"
#include "../GameOfLife/size.h"


TEST_CASE("check if filler set values given by string", "[tes_validator]")
{
    FillerWithValuesFromTxtFile filler;
    std::string givenString = "X \n X";
    Size size(4,4);
    Board board(size);
    filler.fillBoardWithGivenString(board,givenString);
    REQUIRE(board.getTheBoard()[1][1] == 1);
    REQUIRE(board.getTheBoard()[1][2] == 0);
    REQUIRE(board.getTheBoard()[2][1] == 0);
    REQUIRE(board.getTheBoard()[2][2] == 1);
}