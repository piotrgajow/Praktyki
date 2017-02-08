#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
std::vector<std::vector<bool>> FillerWithRandomValues::fillBoardWithRandomBoolValues( std::vector<std::vector<bool>> theBoard){
    srand ( time(NULL) );
    for (int numberOfRow=0; numberOfRow<theBoard.size(); numberOfRow++){
        std::vector<bool>rowVector;
        for (int numberOfColumn=0; numberOfColumn<theBoard[numberOfRow].size(); numberOfColumn++)
        {
           rowVector.push_back(rand() % 2 == 1);
        }
        theBoard.push_back(rowVector);
        rowVector.clear();
    }
    return theBoard;
}
