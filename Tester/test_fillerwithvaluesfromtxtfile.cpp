#include "Tester_Catch.h"
#include "../GameOfLife/fillerwithvaluesfromtxtfile.h"
#include <string>
#include "../GameOfLife/board.h"
#include "../GameOfLife/sizewithframe.h"

TEST_CASE("check if filler set values with given by string", "[tes_validator]")
{
    FillerWithValuesFromTxtFile filler;
    std::string givenString = "X \n X";
    SizeWithFrame size(2,2);
    Board board(size);
    filler.setBoard(board);
    filler.getStringFromTxtFileReader(givenString);
    filler.fillBoard();
    REQUIRE(board.getTheBoard()[1][1] == 1);
    REQUIRE(board.getTheBoard()[1][2] == 0);
    REQUIRE(board.getTheBoard()[2][1] == 0);
    REQUIRE(board.getTheBoard()[2][2] == 1);
}
