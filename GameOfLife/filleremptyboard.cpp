#include "filleremptyboard.h"

FillerEmptyBoard::FillerEmptyBoard()
{

}
void FillerEmptyBoard::fillBoard(Board & board){
    std::vector<std::vector<bool>> deadBoard=board.getTheBoard();
    deadBoard.resize(numberOfColumn, std::vector<bool>(numberOfRow));
    board.setStateOfBoard(deadBoard);
}
