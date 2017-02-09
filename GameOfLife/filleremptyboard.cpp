#include "filleremptyboard.h"

FillerEmptyBoard::FillerEmptyBoard()
{

}
void FillerEmptyBoard::fillBoard(Board & board){
    for (int row=0; row<numberOfRow; row++){
        std::vector<bool>rowVector;
        for (int column=0; column<numberOfColumn; column++)
        {
           rowVector.push_back(0);
        }
        deadBoard.push_back(rowVector);
        rowVector.clear();
    }
    board.setStateOfBoard(deadBoard);
}
