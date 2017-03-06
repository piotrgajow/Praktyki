#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "sizewithframe.h"

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;
    int numberOfColumns, numberOfRows;

public:
    std::vector<std::vector<bool>> getTheBoard();
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard);
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell);
    Board(int numberOfRows, int numberOfColumns);
    Board(SizeWithFrame);
    int getNumberOfColumns() const;
    int getNumberOfRows() const;
    void resize();
    void setBoardSize(int newNumberOfRows, int newNumberColumns);
};

#endif
