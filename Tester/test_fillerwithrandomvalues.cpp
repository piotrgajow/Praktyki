#include "Tester_Catch.h"

#include "..\GameOfLife\fillerwithrandomvalues.h"
#include "..\GameOfLife\filler.h"


TEST_CASE( "Check if top border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned  positionColumn =0; positionColumn < board.getNumberOfCollumn(); positionColumn++)
{
    CHECK(board.getTheBoard()[0][positionColumn] == 0);
}
}

TEST_CASE( "Check if left border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getNumberOfRow() ; positionLine++)
{
    CHECK(board.getTheBoard()[positionLine][0] == 0);
}
}

TEST_CASE( "Check if bottom border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(10,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionColumn =0; positionColumn < board.getNumberOfCollumn(); positionColumn++)
{
    CHECK(board.getTheBoard()[board.getNumberOfRow()-1][positionColumn] == 0);
}
}


TEST_CASE( "Check if right border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(10,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getNumberOfRow(); positionLine++)
    {
    CHECK(board.getTheBoard()[positionLine][board.getNumberOfCollumn()-1] == 0);
    }
}


TEST_CASE( "Check if values in the board are no higher than 1", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,10);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 1 ; positionLine < board.getNumberOfRow() ; positionLine++)
{
    for(unsigned positionColumn = 1; positionColumn < board.getNumberOfCollumn();positionColumn++)
    {
        CHECK(board.getTheBoard()[positionLine][positionColumn] <= 1);
    }
}
}
