#include "fillerwithvaluesfromtxtfile.h"


FillerWithValuesFromTxtFile::FillerWithValuesFromTxtFile()
{

}

FillerWithValuesFromTxtFile::fillBoardWithGivenString(Board & board, std::__cxx11::string stringFromTxtFile)
{
    std::vector<std::vector<bool>> theBoard = board.getTheBoard();

    int positionInString = 0;
    for (int row=1; row<board.getTheBoard().size()-1; row++)
    {
        for (int column=1; column<board.getTheBoard()[0].size()-1; column++)
        {
            if(stringFromTxtFile[positionInString] != '\n')
            {
                stringFromTxtFile[positionInString] == 'X' ? theBoard[row][column] = true : theBoard[row][column] = false;
                positionInString++;
            }
            else positionInString+=2;
        }
    }
    board.setStateOfBoard(theBoard);
}
