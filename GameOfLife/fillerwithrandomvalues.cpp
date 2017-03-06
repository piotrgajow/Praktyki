#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
void FillerWithRandomValues::fillBoard(){
    srand ( time(NULL) );
    std::vector<std::vector<bool>> theBoard = board->getTheBoard();
    for (int row=1; row<board->getNumberOfRows()-1; row++){
        for (int column=1; column<board->getNumberOfColumns()-1; column++)
        {
            theBoard[row][column] = rand() % 2;
        }
    }
    board->setStateOfBoard(theBoard);
}
