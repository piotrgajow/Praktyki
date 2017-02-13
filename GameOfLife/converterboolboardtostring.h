#ifndef CONVERTERBOOLBOARDTOSTRING_H
#define CONVERTERBOOLBOARDTOSTRING_H
#include <vector>
#include <iostream>

class ConverterBoolBoardToString
{
public:

      std::string convertBoolBoardToString (std::vector<std::vector<bool>> theBoard);
private:

      char deadCell='.', liveCell='x';
      std::string boardConvertToString;
};

#endif // CONVERTERBOOLBOARDTOSTRING_H
