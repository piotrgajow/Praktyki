#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
void FillerWithRandomValues::fillBoard( Board & board){
    srand ( time(NULL) );
    for (int row=0; row<numberOfRow; row++){
        std::vector<bool>rowVector;
        for (int column=0; column<numberOfColumn; column++)
        {
           rowVector.push_back(0);
        }
        theBoard.push_back(rowVector);
        rowVector.clear();
    }

    for (int row=1; row<numberOfRow-1; row++){
        for (int column=1; column<numberOfColumn-1; column++)
        {
            theBoard[row][column] = rand() % 2;
        }
    }
    board.setStateOfBoard(theBoard);
}
