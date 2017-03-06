#include "fillerwithvaluesfromtxtfile.h"


FillerWithValuesFromTxtFile::FillerWithValuesFromTxtFile()
{

}

void FillerWithValuesFromTxtFile::fillBoard()
{
    std::vector<std::vector<bool>> theBoard = board->getTheBoard();

    int positionInString = 0;
    for (int row=1; row<board->getTheBoard().size()-1; row++)
    {
        for (int column=1; column<board->getTheBoard()[0].size(); column++)
        {
            if(readString[positionInString] != '\n')
            {
                readString[positionInString] == 'X' ? theBoard[row][column] = true : theBoard[row][column] = false;
                positionInString++;
            }
            else positionInString+=1;
        }
    }
    board->setStateOfBoard(theBoard);
}

void FillerWithValuesFromTxtFile::getStringFromTxtFileReader(ReaderFromTxtFile reader)
{
    readString = reader.getReadString();
}
