#include "board.h"

int Board::getNumberOfColumns() const
{
    return numberOfColumns;
}

int Board::getNumberOfRows() const
{
    return numberOfRows;
}

void Board::setBoardSize(int newNumberOfRows, int newNumberColumns)
{
    numberOfColumns = newNumberColumns;
    numberOfRows = newNumberOfRows;
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfColumns));
}

std::vector<std::vector<bool> > Board::getTheBoard()
{
    return theBoard;
}

void Board::setStateOfBoard(std::vector<std::vector<bool> > newTheBoard)
{
    theBoard = newTheBoard;
}

void Board::setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell)
{
    theBoard[positionInRow][positionInColumn] = newStateOfCell;
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    setBoardSize(newNumberOfRows, newNumberColumns);
}

Board::Board(SizeWithFrame size)
{
    setBoardSize(size.getHeight(), size.getWidth());
}
