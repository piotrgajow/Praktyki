#include "filleremptyboard.h"

FillerEmptyBoard::FillerEmptyBoard()
{

}
std::vector<std::vector<bool>> FillerEmptyBoard::fillWithDeadCells( std::vector<std::vector<bool>> DeadBoard){
    for (int numberOfRow=0; numberOfRow<DeadBoard.size()+1; numberOfRow++){
        std::vector<bool>rowVector;
        for (int numberOfColumn=0; numberOfColumn<DeadBoard[numberOfRow].size()+1; numberOfColumn++)
        {
           rowVector.push_back(0);
        }
        DeadBoard.push_back(rowVector);
        rowVector.clear();
    }
    return DeadBoard;
}
