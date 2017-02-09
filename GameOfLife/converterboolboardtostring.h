#ifndef CONVERTERCHARBOARDTOSTRING_H
#define CONVERTERCHARBOARDTOSTRING_H
#include <vector>
#include <iostream>

class ConverterCharBoardToString
{
public:

      std::string convertBoolBoardToString (std::vector<std::vector<bool>> theBoard);
private:

      char deadCell='.', liveCell='x';
      std::string boardConvertToString;
};

#endif // CONVERTERCHARBOARDTOSTRING_H
