#include "converterboolboardtostring.h"


std::string ConverterBoolBoardToString::convertBoolBoardToString (std::vector<std::vector<bool>> theBoard)
{
    for(std::size_t numberOfRow=1; numberOfRow<theBoard.size()-1; numberOfRow++)
    {
          for(std::size_t numberOfColumn=1; numberOfColumn<theBoard[numberOfRow].size()-1; numberOfColumn++)
          {
              if(theBoard[numberOfRow][numberOfColumn]== 0)
              {

                  boardConvertToString+=deadCell;
              }
              else
              {
                  boardConvertToString+=liveCell;
              }
          }
    }
    return boardConvertToString;
}
