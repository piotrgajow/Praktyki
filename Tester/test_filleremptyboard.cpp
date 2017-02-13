#include "Tester_Catch.h"

#include "../GameOfLife/filleremptyboard.h"
#include "../GameOfLife/filler.h"


TEST_CASE( "test to filleremptyboard", "[FillerEmptyBoard]" ) {

FillerEmptyBoard filleremptyboard;
Board board;
filleremptyboard.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
{
    for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[positionLine].size();positionColumn++)
    {
    CHECK(board.getTheBoard()[positionLine][positionColumn] == 0);
    }
}
}

TEST_CASE( "check board size ", "[FillerEmptyBoard]" ) {

FillerEmptyBoard filleremptyboard;
Board board;
filleremptyboard.fillBoard(board);

CHECK(board.getTheBoard().size() == 4);
CHECK(board.getTheBoard()[0].size() == 4);

}
