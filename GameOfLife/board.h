#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

const int numberOfRow = 30;
const int numberOfColumn = 30;

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;

public:
    std::vector<std::vector<bool>> getTheBoard() {return theBoard;}
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard) {
<<<<<<< HEAD
        theBoard = newTheBoard;}
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell;}
=======
        theBoard = newTheBoard; }
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell; }
>>>>>>> ac93cb05d7360eb11462fd2238c075950db42690

};

#endif // BOARD_H
