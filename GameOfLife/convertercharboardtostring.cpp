#include "convertercharboardtostring.h"


std::string ConverterCharBoardToString::convertCharBoardToString (std::vector<std::vector<char>> charBoard)
{
    for(std::size_t numberOfRow=0; numberOfRow<charBoard.size(); numberOfRow++)
    {
          for(std::size_t numberOfColumn=0; numberOfColumn<charBoard[numberOfRow].size(); numberOfColumn++)
          {
              boardConvertToString=charBoard[numberOfRow][numberOfColumn];
          }
    }
    return boardConvertToString;
}

