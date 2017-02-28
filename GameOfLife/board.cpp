#include "board.h"

int Board::getNumberOfColumns() const
{
    return numberOfColumns;
}

int Board::getNumberOfRows() const
{
    return numberOfRows;
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    numberOfColumns = newNumberColumns;
    numberOfRows = newNumberOfRows;
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfColumns));
}

Board::Board(Size size)
{
    numberOfColumns = size.getWidth();
    numberOfRows = size.getHeight();
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfColumns));
}
