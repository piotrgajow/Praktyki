#include "converterboolboardtocharboard.h"


std::vector<std::vector<char>> ConverterBoolBoardToCharBoard::convertBoolBoardToCharBoard(std::vector<std::vector<bool> > theBoard)
{
    char deadCell='.', liveCell='x';
    for(std::size_t numberOfRow=0; numberOfRow<theBoard.size(); numberOfRow++)
    {
        std::vector<char>temporaryVectorToCreateCharBoard;
        for(std::size_t numberOfColumn=0; numberOfColumn<theBoard[numberOfRow].size(); numberOfColumn++)
        {
            if(theBoard[numberOfRow][numberOfColumn]== 0)
            {
                temporaryVectorToCreateCharBoard.push_back (deadCell);
            }
            else
            {
                temporaryVectorToCreateCharBoard.push_back(liveCell);
            }
            charBoard.push_back(temporaryVectorToCreateCharBoard);
        }
    }
    return charBoard;
}

