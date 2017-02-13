#include "Tester_Catch.h"

#include "..\GameOfLife\fillerwithrandomvalues.h"
#include "..\GameOfLife\filler.h"


////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "test to fillerwithrandomvalues frame 1", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);


    for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[0].size();positionColumn++)
    {
    CHECK(board.getTheBoard()[0][positionColumn] == 0);
    }
}

////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "test to fillerwithrandomvalues frame 2", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
{

    CHECK(board.getTheBoard()[positionLine][0] == 0);

}
}
////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "test to fillerwithrandomvalues frame 3", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);


    for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[0].size();positionColumn++)
    {
    CHECK(board.getTheBoard()[board.getTheBoard().size()-1][positionColumn] == 0);
    }

}
////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "test to fillerwithrandomvalues frame 4", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
{


    CHECK(board.getTheBoard()[positionLine][board.getTheBoard().size()-1] == 0);
}
}
////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "test to fillerwithrandomvalues", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 1 ; positionLine < board.getTheBoard().size()-1 ; positionLine++)
{
    for(unsigned positionColumn = 1; positionColumn < board.getTheBoard()[positionLine].size()-1;positionColumn++)
    {
    CHECK(board.getTheBoard()[positionLine][positionColumn] <= 1);
    }
}
}
////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "check board size ", "[fillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);

CHECK(board.getTheBoard().size() == 30);

}
////////////////////////////////////////////////////////////////////////////////////
TEST_CASE( "check size of lines ", "[fillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board;
fillerWithRandomValues.fillBoard(board);

for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[0].size();positionColumn++)
{
CHECK(board.getTheBoard()[positionColumn].size() == 30);
}

}

