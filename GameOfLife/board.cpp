#include "board.h"

int Board::getNumberOfCollumns() const
{
    return numberOfCollumns;
}

int Board::getNumberOfRows() const
{
    return numberOfRows;
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    numberOfCollumns = newNumberColumns;
    numberOfRows = newNumberOfRows;
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfCollumns));
}
