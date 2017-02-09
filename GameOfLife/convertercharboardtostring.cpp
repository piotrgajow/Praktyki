#include "convertercharboardtostring.h"


std::string ConverterCharBoardToString::convertBoolBoardToString (std::vector<std::vector<bool>> theBoard)
{
    for(std::size_t numberOfRow=0; numberOfRow<theBoard.size(); numberOfRow++)
    {
          for(std::size_t numberOfColumn=0; numberOfColumn<theBoard[numberOfRow].size(); numberOfColumn++)
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
