#ifndef BOARD_H
#define BOARD_H

#include <vector>

const int numberOfRow = 30;
const int numberOfColumn = 30;

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;

public:
    std::vector<std::vector<bool>> getTheBoard() {return theBoard;}
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard) {
        theBoard = newTheBoard; }
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell; }
    Board();
    Board(int numberOfRows, int numberOfColumns);
};

#endif // BOARD_H
