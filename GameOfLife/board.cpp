#include "board.h"

Board::Board()
{

}

Board::Board(int numberOfRows, int numberOfColumns)
{
    this->theBoard.resize(numberOfColumns, std::vector<bool>(numberOfRows));
}
