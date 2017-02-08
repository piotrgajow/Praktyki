#include "converterboolboardtostringboard.h"


std::vector<std::vector<char> > ConverterBoolBoardToStringBoard::converterBoolBoardToCharBoard(std::vector<std::vector<bool> > theBoard)
{
    for(std::size_t numberOfRow=0; numberOfRow<theBoard.size(); numberOfRow++)
    {
        std::vector<char>temporaryVectorToCreateStringBoard;
        for(std::size_t numberOfColumn=0; numberOfColumn<theBoard[numberOfRow].size(); numberOfColumn++)
        {
            if(theBoard[numberOfRow][numberOfColumn]== 0)
            {
                temporaryVectorToCreateStringBoard.push_back('.');
            }
            else
            {
                temporaryVectorToCreateStringBoard.push_back('x');
            }
            charBoard.push_back(temporaryVectorToCreateStringBoard);
        }
    }
    return charBoard;
}

